import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.data.*;
import ghidra.program.model.address.*;
import ghidra.app.decompiler.*;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import java.util.*;

public class OverrideIndirect extends GhidraScript {
    @Override
    public void run() throws Exception {
        FunctionDefinitionDataType sig = new FunctionDefinitionDataType("indirect_call");
        sig.setReturnType(Undefined4DataType.dataType);
        ParameterDefinition[] ps = new ParameterDefinition[4];
        for (int i = 0; i < 4; i++) ps[i] = new ParameterDefinitionImpl("a" + (i + 4), Undefined4DataType.dataType, "");
        sig.setArguments(ps);
        String cc = currentProgram.getCompilerSpec().getDefaultCallingConvention().getName();
        println("default cc " + cc);
        sig.setCallingConvention(cc);
        int n = 0, bad = 0;
        Listing lst = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();
        java.util.ArrayList<Function> fl = new java.util.ArrayList<>();
        for (Function f0 : fm.getFunctions(true)) fl.add(f0);
        InstructionIterator it = lst.getInstructions(true);
        while (it.hasNext()) {
            Instruction ins = it.next();
            String m = ins.getMnemonicString();
            if (!(m.equals("jsr") || m.equals("bsrf") || m.equals("bsr"))) continue;
            long ea = ins.getAddress().getOffset();
            int lo = 0, hi = fl.size() - 1, best = -1;
            while (lo <= hi) { int mid = (lo + hi) >>> 1; if (fl.get(mid).getEntryPoint().getOffset() <= ea) { best = mid; lo = mid + 1; } else hi = mid - 1; }
            if (best < 0) continue;
            Function f = fl.get(best);
            if (!m.equals("bsr"))
                for (ghidra.program.model.symbol.Reference r : ins.getReferencesFrom())
                    if (r.getReferenceType() == ghidra.program.model.symbol.RefType.CALL_OVERRIDE_UNCONDITIONAL || r.getReferenceType() == ghidra.program.model.symbol.RefType.COMPUTED_CALL)
                        currentProgram.getReferenceManager().delete(r);
            // a call through a literal-pool load of a known function address gets that function's own signature (stack parameters included)
            ghidra.program.model.listing.FunctionSignature use = sig;
            ghidra.program.model.address.Address tgt = null;
            if (m.equals("jsr")) {
                Object[] ops = ins.getOpObjects(0);
                if (ops.length > 0 && ops[0] instanceof ghidra.program.model.lang.Register) {
                    String rn = ((ghidra.program.model.lang.Register) ops[0]).getName();
                    Instruction p = ins.getPrevious();
                    for (int q = 0; q < 12 && p != null; q++, p = p.getPrevious()) {
                        String[] parts = p.toString().split(",");
                        String dst = parts[parts.length - 1].trim();
                        if (!dst.equals(rn)) { if (p.getFlowType().isJump() || p.getFlowType().isTerminal()) break; continue; }
                        if (p.getMnemonicString().equals("mov.l"))
                            for (ghidra.program.model.symbol.Reference r : p.getReferencesFrom()) {
                                try { long v = currentProgram.getMemory().getInt(r.getToAddress()) & 0xffffffffL; Function cf = getFunctionAt(toAddr(v)); if (cf != null) tgt = cf.getEntryPoint(); } catch (Exception e) { }
                            }
                        break;
                    }
                }
            }
            if (tgt != null) { Function cf = getFunctionAt(tgt); if (cf != null) use = cf.getSignature(); }
            try { HighFunctionDBUtil.writeOverride(f, ins.getAddress(), use); n++; } catch (Exception e) { bad++; }
        }
        println("indirect overrides " + n + " failed " + bad);
    }
}
