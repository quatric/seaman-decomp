import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.data.*;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import java.io.*;
import java.nio.file.*;
import java.util.*;

// Functions that read r0/r1 as inputs (custom asm helpers): add them as parameters (after r4-r7, before the stack parameters),
// rewrite the call-site overrides that target them, and re-decompile the callers into a redo file.
public class FixRegInputs extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        FunctionManager fm = currentProgram.getFunctionManager();
        Set<Long> hs = new HashSet<>();
        for (String line : Files.readAllLines(Paths.get(a[0]))) {
            if (line.trim().isEmpty()) continue;
            String[] p = line.split("\t");
            long ea = Long.parseLong(p[0], 16);
            Function f = fm.getFunctionAt(toAddr(ea));
            if (f == null) continue;
            List<Variable> ps = new ArrayList<>();
            Parameter[] old = f.getParameters();
            for (Parameter q : old) if (q.getRegister() != null && (q.getName().startsWith("ar"))) ps.add(q);
            // keep r4-r7 params and any stack params; insert the register inputs after r7
            List<Variable> all = new ArrayList<>();
            for (Parameter q : old) {
                all.add(q);
                if (q.getRegister() != null && q.getRegister().getName().equals("r7")) {
                    if (p[1].equals("1")) all.add(new ParameterImpl("ain0", Undefined4DataType.dataType, currentProgram.getRegister("r0"), currentProgram));
                    if (p[2].equals("1")) all.add(new ParameterImpl("ain1", Undefined4DataType.dataType, currentProgram.getRegister("r1"), currentProgram));
                }
            }
            try { f.updateFunction(null, new ReturnParameterImpl(Undefined4DataType.dataType, currentProgram.getRegister("r0"), currentProgram), all, Function.FunctionUpdateType.CUSTOM_STORAGE, true, SourceType.USER_DEFINED); hs.add(ea); }
            catch (Exception e) { println("sig failed " + p[0] + " " + e); }
        }
        Set<Function> callers = new LinkedHashSet<>();
        InstructionIterator it = currentProgram.getListing().getInstructions(true);
        while (it.hasNext()) {
            Instruction ins = it.next();
            String m = ins.getMnemonicString();
            if (!(m.equals("jsr") || m.equals("bsr"))) continue;
            long tgt = -1;
            if (m.equals("bsr")) { Address[] fl = ins.getFlows(); if (fl.length > 0) tgt = fl[0].getOffset(); }
            else {
                Object[] ops = ins.getOpObjects(0);
                if (ops.length > 0 && ops[0] instanceof ghidra.program.model.lang.Register) {
                    String rn = ((ghidra.program.model.lang.Register) ops[0]).getName();
                    Instruction p = ins.getPrevious();
                    for (int q = 0; q < 12 && p != null; q++, p = p.getPrevious()) {
                        String[] parts = p.toString().split(",");
                        if (!parts[parts.length - 1].trim().equals(rn)) { if (p.getFlowType().isJump() || p.getFlowType().isTerminal()) break; continue; }
                        if (p.getMnemonicString().equals("mov.l"))
                            for (ghidra.program.model.symbol.Reference r : p.getReferencesFrom())
                                try { tgt = currentProgram.getMemory().getInt(r.getToAddress()) & 0xffffffffL; } catch (Exception e) { }
                        break;
                    }
                }
            }
            if (!hs.contains(tgt)) continue;
            Function f = fm.getFunctionContaining(ins.getAddress());
            if (f == null) continue;
            try { HighFunctionDBUtil.writeOverride(f, ins.getAddress(), fm.getFunctionAt(toAddr(tgt)).getSignature()); callers.add(f); } catch (Exception e) { }
        }
        println("signatures " + hs.size() + " callers " + callers.size());
        DecompInterface di = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        opts.setMaxPayloadMBytes(2000);
        di.setOptions(opts);
        di.openProgram(currentProgram);
        // callers and the functions themselves (their bodies are unchanged but keep the output uniform)
        try (PrintWriter w = new PrintWriter(new FileWriter(a[1]))) {
            for (Function f : callers) {
                DecompileResults r = di.decompileFunction(f, 120, monitor);
                if (r == null || !r.decompileCompleted()) { println("decompile failed " + f.getName()); continue; }
                w.println(String.format("\n/* %s @ %08x callers=0 callees=0 */", f.getName(), f.getEntryPoint().getOffset()));
                w.println(r.getDecompiledFunction().getC());
            }
        }
        println("FixRegInputs done");
    }
}
