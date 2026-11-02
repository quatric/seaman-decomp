import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
public class DumpRange extends GhidraScript {
    @Override
    public void run() throws Exception {
        long a = Long.parseLong(getScriptArgs()[0], 16), b = Long.parseLong(getScriptArgs()[1], 16);
        for (; a < b; a += 2) { Instruction i = currentProgram.getListing().getInstructionAt(toAddr(a)); if (i != null) println("DUMP " + Long.toHexString(a) + " " + i + "  refs=" + i.getReferencesFrom().length); }
    }
}
