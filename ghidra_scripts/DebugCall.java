import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

public class DebugCall extends GhidraScript {
    @Override
    public void run() throws Exception {
        Function f = getFunctionAt(toAddr(0x8c0f7b70L));
        int k = 0;
        for (Instruction ins : currentProgram.getListing().getInstructions(f.getBody(), true)) {
            if (k > 40) break;
            String s = ins.getAddress() + " " + ins;
            for (Reference r : ins.getReferencesFrom()) s += "   [" + r.getReferenceType() + " -> " + r.getToAddress() + "]";
            if (ins.getMnemonicString().equals("jsr") || ins.getMnemonicString().startsWith("mov.l")) { println(s); k++; }
        }
        println("body=" + f.getBody());
    }
}
