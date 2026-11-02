import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

public class ResolveIndirectCalls extends GhidraScript {
    static boolean inCode(long a) {
        return (a >= 0x8c010000L && a < 0x8c130000L) || (a >= 0x8c1d0000L && a < 0x8c278000L);
    }

    @Override
    public void run() throws Exception {
        Listing lst = currentProgram.getListing();
        ReferenceManager rm = currentProgram.getReferenceManager();
        int resolved = 0, unresolved = 0, created = 0;
        InstructionIterator it = lst.getInstructions(true);
        while (it.hasNext() && !monitor.isCancelled()) {
            Instruction ins = it.next();
            if (!ins.getMnemonicString().equals("jsr")) continue;
            Object[] ops = ins.getOpObjects(0);
            if (ops.length == 0 || !(ops[0] instanceof Register)) { unresolved++; continue; }
            Register reg = (Register) ops[0];
            Address target = null;
            Instruction p = ins.getPrevious();
            for (int i = 0; i < 12 && p != null; i++, p = p.getPrevious()) {
                String s = p.toString();
                // destination register is the last operand
                String[] parts = s.split(",");
                String dst = parts[parts.length - 1].trim();
                if (!dst.equals(reg.getName())) {
                    if (p.getFlowType().isJump() || p.getFlowType().isTerminal()) break;
                    continue;
                }
                if (p.getMnemonicString().equals("mov.l")) {
                    for (Reference r : p.getReferencesFrom()) {
                        if (r.getReferenceType().isRead() || r.getReferenceType().isData()) {
                            try {
                                long v = currentProgram.getMemory().getInt(r.getToAddress()) & 0xffffffffL;
                                if (inCode(v)) target = toAddr(v);
                            } catch (Exception e) { }
                        }
                    }
                }
                break;
            }
            if (target == null) { unresolved++; continue; }
            rm.addMemoryReference(ins.getAddress(), target, RefType.CALL_OVERRIDE_UNCONDITIONAL, SourceType.USER_DEFINED, Reference.MNEMONIC);
            rm.addMemoryReference(ins.getAddress(), target, RefType.COMPUTED_CALL, SourceType.USER_DEFINED, Reference.MNEMONIC);
            if (getFunctionAt(target) == null) {
                disassemble(target);
                if (createFunction(target, null) != null) created++;
            }
            resolved++;
        }
        println("jsr resolved=" + resolved + " unresolved=" + unresolved + " new functions=" + created);
    }
}
