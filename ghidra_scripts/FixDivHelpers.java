import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.data.*;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import java.io.*;
import java.util.*;

// The libgcc divide helpers at 8c010468/8c01051c/8c010614/8c0106dc take the dividend in r1 and the divisor in r0.
// Give them that signature, rewrite the call-site overrides that target them, and re-decompile the callers.
public class FixDivHelpers extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        long[] hs = {0x8c010468L, 0x8c01051cL, 0x8c010614L, 0x8c0106dcL};
        Set<Long> hset = new HashSet<>();
        FunctionManager fm = currentProgram.getFunctionManager();
        for (long h : hs) {
            hset.add(h);
            Function f = fm.getFunctionAt(toAddr(h));
            List<Variable> ps = new ArrayList<>();
            ps.add(new ParameterImpl("n", Undefined4DataType.dataType, currentProgram.getRegister("r1"), currentProgram));
            ps.add(new ParameterImpl("d", Undefined4DataType.dataType, currentProgram.getRegister("r0"), currentProgram));
            f.updateFunction(null, new ReturnParameterImpl(Undefined4DataType.dataType, currentProgram.getRegister("r0"), currentProgram), ps, Function.FunctionUpdateType.CUSTOM_STORAGE, true, SourceType.USER_DEFINED);
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
            if (!hset.contains(tgt)) continue;
            Function f = fm.getFunctionContaining(ins.getAddress());
            if (f == null) continue;
            try { HighFunctionDBUtil.writeOverride(f, ins.getAddress(), fm.getFunctionAt(toAddr(tgt)).getSignature()); callers.add(f); } catch (Exception e) { println("override failed " + ins.getAddress()); }
        }
        DecompInterface di = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        opts.setMaxPayloadMBytes(2000);
        di.setOptions(opts);
        di.openProgram(currentProgram);
        try (PrintWriter w = new PrintWriter(new FileWriter(a[0]))) {
            for (Function f : callers) {
                DecompileResults r = di.decompileFunction(f, 240, monitor);
                if (r == null || !r.decompileCompleted()) { println("decompile failed " + f.getName()); continue; }
                w.println(String.format("\n/* %s @ %08x callers=0 callees=0 */", f.getName(), f.getEntryPoint().getOffset()));
                w.println(r.getDecompiledFunction().getC());
            }
        }
        println("FixDivHelpers callers " + callers.size());
    }
}
