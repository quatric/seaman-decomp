import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.*;
import java.io.*;
import java.util.*;

public class LabelAndSplit extends GhidraScript {
    String clean(String s) {
        s = s.replaceAll("[^A-Za-z0-9]+", "_").replaceAll("^_+|_+$", "");
        return s.length() > 28 ? s.substring(0, 28) : s;
    }
    @Override
    public void run() throws Exception {
        String dir = getScriptArgs()[0];
        FunctionManager fm = currentProgram.getFunctionManager();
        Listing lst = currentProgram.getListing();
        ReferenceManager rm = currentProgram.getReferenceManager();
        // pass 1: label by referenced strings
        int labeled = 0;
        for (Function f : fm.getFunctions(true)) {
            if (!f.getName().startsWith("FUN_")) continue;
            String best = null;
            for (Address a : f.getBody().getAddresses(true)) {
                for (Reference r : rm.getReferencesFrom(a)) {
                    Data d = lst.getDataAt(r.getToAddress());
                    if (d != null && d.hasStringValue()) {
                        String v = d.getDefaultValueRepresentation();
                        String c = clean(v.replace("\"", ""));
                        if (c.length() >= 5 && c.matches(".*[A-Za-z]{4}.*")) { best = c; break; }
                    }
                }
                if (best != null) break;
            }
            if (best != null) {
                try { f.setName("s_" + best + "_" + f.getEntryPoint().toString().substring(2), SourceType.USER_DEFINED); labeled++; } catch (Exception e) {}
            }
        }
        println("labeled by string: " + labeled);
        // pass 2: decompile, split into region files, and write index
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        PrintWriter idx = new PrintWriter(new FileWriter(dir + "/function_index.tsv"));
        idx.println("addr\tsize\tname\tncallers\tncallees");
        PrintWriter w = null; long region = -1; int n = 0;
        for (Function f : fm.getFunctions(true)) {
            if (monitor.isCancelled()) break;
            long ea = f.getEntryPoint().getOffset();
            long reg = (ea - 0x8c010000L) / 0x10000L;
            if (reg != region) {
                if (w != null) w.close();
                region = reg;
                w = new PrintWriter(new FileWriter(String.format("%s/mod_%08x.c", dir, 0x8c010000L + reg * 0x10000L)));
                w.println(String.format("/* Seaman (USA) region 0x%08x-0x%08x (Ghidra decompiler) */", 0x8c010000L + reg * 0x10000L, 0x8c010000L + (reg + 1) * 0x10000L));
            }
            int cin = f.getCallingFunctions(monitor).size(), cout = f.getCalledFunctions(monitor).size();
            idx.println(String.format("%08x\t%d\t%s\t%d\t%d", ea, f.getBody().getNumAddresses(), f.getName(), cin, cout));
            DecompileResults r = di.decompileFunction(f, 20, monitor);
            if (r != null && r.decompileCompleted()) {
                w.println(String.format("\n/* %s @ %08x callers=%d callees=%d */", f.getName(), ea, cin, cout));
                w.println(r.getDecompiledFunction().getC());
                n++;
            }
        }
        if (w != null) w.close();
        idx.close();
        println("split-decompiled " + n);
    }
}
