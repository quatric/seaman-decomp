import ghidra.app.script.GhidraScript;
import java.io.*;

public class CreateStubs extends GhidraScript {
    @Override
    public void run() throws Exception {
        int made = 0, had = 0;
        try (BufferedReader r = new BufferedReader(new FileReader(getScriptArgs()[0]))) {
            String l;
            while ((l = r.readLine()) != null) {
                l = l.trim();
                if (l.isEmpty()) continue;
                ghidra.program.model.address.Address a = toAddr(Long.parseLong(l, 16));
                disassemble(a);
                if (getFunctionAt(a) != null) { had++; continue; }
                if (createFunction(a, null) != null) made++;
            }
        }
        println("stubs created=" + made + " already=" + had);
    }
}
