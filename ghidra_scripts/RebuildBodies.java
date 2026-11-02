import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.SourceType;
import java.util.*;

public class RebuildBodies extends GhidraScript {
    @Override
    public void run() throws Exception {
        FunctionManager fm = currentProgram.getFunctionManager();
        List<Address> eps = new ArrayList<>();
        List<String> names = new ArrayList<>();
        for (Function f : fm.getFunctions(true)) { eps.add(f.getEntryPoint()); names.add(f.getName()); }
        int fixed = 0;
        for (int i = 0; i < eps.size(); i++) {
            if (monitor.isCancelled()) break;
            Address a = eps.get(i);
            Function f = fm.getFunctionAt(a);
            long before = f == null ? 0 : f.getBody().getNumAddresses();
            if (f != null) removeFunction(f);
            Function g = createFunction(a, null);
            if (g != null) {
                if (!names.get(i).startsWith("FUN_")) g.setName(names.get(i), SourceType.USER_DEFINED);
                if (g.getBody().getNumAddresses() > before) fixed++;
            }
        }
        Function m = getFunctionAt(toAddr(0x8c0f7b70L));
        println("rebuilt=" + eps.size() + " grew=" + fixed + " game_init size=" + (m == null ? -1 : m.getBody().getNumAddresses()));
    }
}
