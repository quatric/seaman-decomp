import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.data.DataType;
import ghidra.program.model.mem.*;
import java.io.*;
import java.nio.file.*;
import java.util.*;

// The read-only marking of the second code block also covered the mutable globals after the last function (0x8c26c000 up), so the decompiler
// folded loads of those globals into their initial file values. Make that range writable and re-decompile the listed functions.
// args: <function address list file> <redo output file> <global sizes output file> (address, size, type name as the decompiler typed each global it touched)
public class RedoRegion extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        Memory m = currentProgram.getMemory();
        for (MemoryBlock b : m.getBlocks()) println("block " + b.getName() + " " + b.getStart() + "-" + b.getEnd() + " w=" + b.isWrite());
        MemoryBlock b = m.getBlock(toAddr(0x8c26c000L));
        if (b != null && b.getStart().getOffset() < 0x8c26c000L) {
            m.split(b, toAddr(0x8c26c000L));
            b = m.getBlock(toAddr(0x8c26c000L));
            b.setName("data2");
        }
        if (b != null) { b.setWrite(true); println("data2 writable: " + b.getStart() + "-" + b.getEnd()); }
        DecompInterface di = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        opts.setMaxPayloadMBytes(2000);
        di.setOptions(opts);
        di.openProgram(currentProgram);
        FunctionManager fm = currentProgram.getFunctionManager();
        int n = 0;
        Map<Long, String> gl = new TreeMap<>();
        try (PrintWriter w = new PrintWriter(new FileWriter(a[1]))) {
            for (String line : Files.readAllLines(Paths.get(a[0]))) {
                line = line.trim();
                if (line.isEmpty()) continue;
                Function f = fm.getFunctionAt(toAddr(Long.parseLong(line, 16)));
                if (f == null) continue;
                DecompileResults r = di.decompileFunction(f, 240, monitor);
                if (r == null || !r.decompileCompleted()) { println("decompile failed " + f.getName()); continue; }
                w.println(String.format("\n/* %s @ %08x callers=0 callees=0 */", f.getName(), f.getEntryPoint().getOffset()));
                w.println(r.getDecompiledFunction().getC());
                HighFunction hf = r.getHighFunction();
                if (hf != null) {
                    java.util.Iterator<HighSymbol> it = hf.getGlobalSymbolMap().getSymbols();
                    while (it.hasNext()) {
                        HighSymbol hs = it.next();
                        try {
                            DataType dt = hs.getDataType();
                            long ad = hs.getStorage().getMinAddress().getOffset();
                            gl.put(ad, hs.getStorage().size() + "\t" + dt.getName());
                        } catch (Exception e) { }
                    }
                }
                n++;
            }
        }
        try (PrintWriter w2 = new PrintWriter(new FileWriter(a[2]))) {
            for (Map.Entry<Long, String> e : gl.entrySet()) w2.println(String.format("%08x\t%s", e.getKey(), e.getValue()));
        }
        println("RedoRegion decompiled " + n + " globals " + gl.size());
    }
}
