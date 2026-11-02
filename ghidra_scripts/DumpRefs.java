import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
public class DumpRefs extends GhidraScript {
    @Override
    public void run() throws Exception {
        for (String s : getScriptArgs()) {
            Instruction i = currentProgram.getListing().getInstructionAt(toAddr(Long.parseLong(s, 16)));
            println("DUMP " + s + " " + i + " flow=" + i.getFlowType() + " override=" + i.getFlowOverride());
            for (Reference r : i.getReferencesFrom()) println("DUMP   ref " + r.getReferenceType() + " -> " + r.getToAddress() + " src=" + r.getSource());
        }
    }
}
