import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import java.io.*;
import java.util.*;

public class SeedFuncs extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        int made = 0;
        try (BufferedReader r = new BufferedReader(new FileReader(a[0]))) {
            String l;
            while ((l = r.readLine()) != null) {
                l = l.trim();
                if (!l.startsWith("af @ ")) continue;
                Address ad = toAddr(Long.parseLong(l.substring(7), 16));
                disassemble(ad);
                if (getFunctionAt(ad) == null && createFunction(ad, null) != null) made++;
            }
        }
        for (long x : new long[]{0x8c1ef400L, 0x8c0f7b20L}) {
            Address ad = toAddr(x);
            disassemble(ad);
            if (getFunctionAt(ad) == null) createFunction(ad, null);
        }
        Address m = toAddr(0x8c0f7b20L);
        if (getFunctionAt(m) != null) getFunctionAt(m).setName("main", ghidra.program.model.symbol.SourceType.USER_DEFINED);
        Address c = toAddr(0x8c1ef400L);
        if (getFunctionAt(c) != null) getFunctionAt(c).setName("crt0_start", ghidra.program.model.symbol.SourceType.USER_DEFINED);
        println("seeded functions: " + made);
    }
}
