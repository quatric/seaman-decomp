import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.data.*;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.JumpTable;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

// SH-4 switches are `mova @(d,pc),r0 ; mov.l @(r0,rN),rM ; jmp @rM`, which the analyzer left as an indirect jump with the table disassembled as junk.
// For each such jmp: find the mova table, bound it by the preceding `mov #imm / cmp/gt|hi` range check, make the table pointers, add computed-jump references to the
// case targets, then re-decompile the functions that contain a switch.
// args: <redo output file> <switch list output file>
public class SwitchTables extends GhidraScript {
    static boolean inCode(long a) { return (a >= 0x8c010000L && a < 0x8c130000L) || (a >= 0x8c1d0000L && a < 0x8c278000L); }

    private java.util.TreeMap<Long, Function> entries;
    private java.util.TreeMap<Long, Function> byEntry() {
        if (entries == null) {
            entries = new java.util.TreeMap<>();
            for (Function g : currentProgram.getFunctionManager().getFunctions(true)) entries.put(g.getEntryPoint().getOffset(), g);
        }
        return entries;
    }

    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        Listing lst = currentProgram.getListing();
        ReferenceManager rm = currentProgram.getReferenceManager();
        FunctionManager fm = currentProgram.getFunctionManager();
        Set<Function> touched = new LinkedHashSet<>();
        int tables = 0, targets = 0;
        List<Instruction> jmps = new ArrayList<>();
        for (Instruction ins : lst.getInstructions(true)) if (ins.getMnemonicString().equals("jmp")) jmps.add(ins);
        PrintWriter sw = new PrintWriter(new FileWriter(a[1]));
        for (Instruction ins : jmps) {
            Function f = fm.getFunctionContaining(ins.getAddress());
            if (f == null) { java.util.Map.Entry<Long, Function> e = byEntry().floorEntry(ins.getAddress().getOffset()); f = e == null ? null : e.getValue(); }   // functions whose recorded body stops early
            if (f == null || ins.getAddress().getOffset() - f.getEntryPoint().getOffset() > 0x4000) continue;
            Address table = null; int limit = -1, hiVal = -1, loVal = -1;
            Instruction p = ins.getPrevious();
            for (int i = 0; i < 24 && p != null; i++, p = p.getPrevious()) {
                String m = p.getMnemonicString();
                if (m.equals("mova") && table == null) {
                    for (Reference r : p.getReferencesFrom()) if (r.getToAddress().isMemoryAddress()) table = r.getToAddress();
                    if (table == null) {
                        // mova @(disp,pc),r0: target = ((pc + 4) & ~3) + disp * 4
                        Object[] ops = p.getOpObjects(0);
                        for (Object o : ops) if (o instanceof Scalar) table = toAddr(((p.getAddress().getOffset() + 4) & ~3L) + ((Scalar) o).getUnsignedValue());
                    }
                }
                boolean upper = m.startsWith("cmp/hi") || m.startsWith("cmp/gt");
                boolean lower = m.startsWith("cmp/hs") || m.startsWith("cmp/ge");
                if (upper || lower) {
                    Instruction q = p.getPrevious();
                    for (int j = 0; j < 4 && q != null; j++, q = q.getPrevious()) {
                        if (q.getMnemonicString().equals("mov") && q.getNumOperands() == 2 && q.getOpObjects(0).length > 0 && q.getOpObjects(0)[0] instanceof Scalar) {
                            long v = ((Scalar) q.getOpObjects(0)[0]).getSignedValue();
                            if (v >= 0 && v < 256) { if (upper && hiVal < 0) hiVal = (int) v + 1; if (lower && loVal < 0) loVal = (int) v; break; }
                        }
                    }
                }
            }
            // the table is indexed from the lower bound when the code subtracts it first (cmp/ge #lo, then sub): entries = upper - lower
            if (hiVal >= 0 && loVal >= 0 && hiVal > loVal) limit = hiVal - loVal; else if (hiVal >= 0) limit = hiVal; else if (loVal >= 0) limit = loVal;
            if (table == null) continue;
            long t0 = table.getOffset();
            if (t0 < f.getEntryPoint().getOffset() || t0 > f.getEntryPoint().getOffset() + 0x4000) continue;
            int n = 0; List<Long> tg = new ArrayList<>();
            for (int k = 0; k < (limit > 0 ? limit : 64); k++) {
                int v;
                try { v = currentProgram.getMemory().getInt(table.add(4L * k)); } catch (Exception e) { break; }
                long u = v & 0xffffffffL;
                if (!inCode(u) || (u & 1) != 0) break;
                tg.add(u);
            }
            if (tg.size() < 2) continue;
            clearListing(table, table.add(4L * tg.size() - 1));
            for (int k = 0; k < tg.size(); k++) {
                try { createData(table.add(4L * k), PointerDataType.dataType); } catch (Exception e) { }
                Address t = toAddr(tg.get(k));
                if (lst.getInstructionAt(t) == null) disassemble(t);
                rm.addMemoryReference(ins.getAddress(), t, RefType.COMPUTED_JUMP, SourceType.USER_DEFINED, Reference.MNEMONIC);
                targets++;
            }
            ArrayList<Address> dl = new ArrayList<>();
            for (long u : tg) dl.add(toAddr(u));
            try { new JumpTable(ins.getAddress(), dl, true, 0).writeOverride(f); } catch (Exception e) { println("override failed at " + ins.getAddress() + ": " + e); }
            sw.println(String.format("%08x\t%08x\t%d", f.getEntryPoint().getOffset(), t0, tg.size()));
            touched.add(f); tables++;
        }
        sw.close();
        println("switch tables " + tables + " targets " + targets + " functions " + touched.size());
        DecompInterface di = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        opts.setMaxPayloadMBytes(2000);
        opts.setMaxJumpTableEntries(100000);
        di.setOptions(opts);
        di.openProgram(currentProgram);
        int n = 0;
        try (PrintWriter w = new PrintWriter(new FileWriter(a[0]))) {
            for (Function f : touched) {
                DecompileResults r = di.decompileFunction(f, 240, monitor);
                if (r == null || !r.decompileCompleted()) { println("decompile failed " + f.getName()); continue; }
                w.println(String.format("\n/* %s @ %08x callers=0 callees=0 */", f.getName(), f.getEntryPoint().getOffset()));
                w.println(r.getDecompiledFunction().getC());
                n++;
            }
        }
        println("SwitchTables decompiled " + n);
    }
}
