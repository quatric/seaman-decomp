import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import java.nio.file.*;

// Remove the functions listed (one hex entry per line): each starts right after a one-instruction "function" that only falls into it (a literal load hoisted above the prologue).
// RepairBodies then widens the first piece over the rest.
public class AbsorbList extends GhidraScript {
    @Override
    public void run() throws Exception {
        FunctionManager fm = currentProgram.getFunctionManager();
        int n = 0;
        for (String line : Files.readAllLines(Paths.get(getScriptArgs()[0]))) {
            line = line.trim();
            if (line.isEmpty()) continue;
            Function f = fm.getFunctionAt(toAddr(Long.parseLong(line, 16)));
            if (f == null) continue;
            fm.removeFunction(f.getEntryPoint());
            n++;
        }
        println("removed " + n);
    }
}
