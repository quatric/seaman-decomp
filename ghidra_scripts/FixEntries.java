import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.SourceType;
import java.util.*;

public class FixEntries extends GhidraScript {
    boolean isPush(int w) {
        return (w & 0xFF0F) == 0x2F06      // mov.l Rm,@-R15
            || w == 0x4F02 || w == 0x4F12 || w == 0x4F22   // sts.l macl/mach/pr,@-R15
            || (w & 0xFF0F) == 0xFF0B      // fmov.s FRm,@-R15
            || w == 0x4F32 || w == 0x4F52;  // sts.l fpul/fpscr,@-R15
    }
    int word(long a) throws Exception {
        return currentProgram.getMemory().getShort(toAddr(a)) & 0xffff;
    }
    @Override
    public void run() throws Exception {
        FunctionManager fm = currentProgram.getFunctionManager();
        // pass 1: find new entry for every function; a push run belongs to the function that follows it
        TreeMap<Long, String> keep = new TreeMap<>();
        List<Function> all = new ArrayList<>();
        for (Function f : fm.getFunctions(true)) all.add(f);
        int moved = 0;
        for (Function f : all) {
            long a = f.getEntryPoint().getOffset();
            long s = a;
            while (s - 2 >= 0x8c010000L && isPush(word(s - 2)) && !hasFuncAt(fm, s - 2, all)) s -= 2;
            // also absorb a preceding function entry sitting in the push run
            long t = a;
            while (t - 2 >= 0x8c010000L && isPush(word(t - 2))) t -= 2;
            long ns = Math.min(s, t);
            String nm = f.getName();
            if (ns != a) moved++;
            String prev = keep.get(ns);
            if (prev == null || (prev.startsWith("FUN_") && !nm.startsWith("FUN_"))) keep.put(ns, nm);
        }
        println("entries moved=" + moved + " unique entries=" + keep.size());
        for (Function f : all) { Function g = fm.getFunctionAt(f.getEntryPoint()); if (g != null) removeFunction(g); }
        int made = 0;
        for (Map.Entry<Long, String> e : keep.entrySet()) {
            Address a = toAddr(e.getKey());
            disassemble(a);
            Function g = createFunction(a, null);
            if (g != null) {
                made++;
                if (!e.getValue().startsWith("FUN_")) g.setName(e.getValue(), SourceType.USER_DEFINED);
            }
        }
        Function m = getFunctionAt(toAddr(0x8c0f7b70L));
        println("created=" + made + " game_init@7b70=" + (m == null ? "none" : m.getName() + " size=" + m.getBody().getNumAddresses()));
    }
    boolean hasFuncAt(FunctionManager fm, long a, List<Function> all) { return false; }
}
