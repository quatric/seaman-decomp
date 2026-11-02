import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.io.*;

public class ExportC extends GhidraScript {
    @Override
    public void run() throws Exception {
        String out = getScriptArgs()[0];
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        int n = 0, bad = 0;
        try (PrintWriter w = new PrintWriter(new FileWriter(out))) {
            w.println("/* Seaman (USA) 1ST_READ.BIN - Ghidra decompiler output, base 0x8C010000 */");
            for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
                if (monitor.isCancelled()) break;
                DecompileResults r = di.decompileFunction(f, 20, monitor);
                if (r != null && r.decompileCompleted()) {
                    w.println("\n/* " + f.getEntryPoint() + " size=" + f.getBody().getNumAddresses() + " */");
                    w.println(r.getDecompiledFunction().getC());
                    n++;
                } else bad++;
            }
        }
        println("decompiled " + n + " failed " + bad);
    }
}
