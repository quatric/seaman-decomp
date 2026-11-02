import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;
import java.io.*;

public class ApplyNames extends GhidraScript {
    @Override
    public void run() throws Exception {
        int n = 0;
        try (BufferedReader r = new BufferedReader(new FileReader(getScriptArgs()[0]))) {
            String l;
            while ((l = r.readLine()) != null) {
                String[] p = l.split("\t");
                if (p.length < 2) continue;
                Address a = toAddr(Long.parseLong(p[0], 16));
                Function f = getFunctionAt(a);
                if (f == null) { disassemble(a); f = createFunction(a, p[1]); }
                if (f != null) { f.setName(p[1], SourceType.USER_DEFINED); n++; }
            }
        }
        println("renamed " + n);
    }
}
