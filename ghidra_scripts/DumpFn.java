import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
public class DumpFn extends GhidraScript {
    @Override
    public void run() throws Exception {
        Function f = getFunctionAt(toAddr(Long.parseLong(getScriptArgs()[0], 16)));
        InstructionIterator it = currentProgram.getListing().getInstructions(f.getBody(), true);
        while (it.hasNext()) { Instruction i = it.next(); println("DUMP " + i.getAddress() + " " + i + (i.getReferencesFrom().length > 0 ? "  refs=" + i.getReferencesFrom().length : "")); }
    }
}
