import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.lang.*;
import java.io.*;
import java.math.BigInteger;
import java.nio.file.*;

// The game runs with FPSCR.PR = 0 and FPSCR.SZ = 0 throughout (single-precision registers, no paired moves). Without that context the decompiler
// models every float register as half of a double and emits both mode branches, which turns float bit patterns into integers.
// Fix the two context bits over the whole code image and re-decompile the listed functions.
// args: <function address list file> <redo output file>
public class RedoFloat extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        ProgramContext pc = currentProgram.getProgramContext();
        Address lo = toAddr(0x8c010000L), hi = toAddr(0x8c277fffL);
        for (String rn : new String[]{"FPSCR_PR", "FPSCR_SZ"}) {
            Register r = currentProgram.getRegister(rn);
            if (r == null) { println("no register " + rn); continue; }
            pc.setValue(r, lo, hi, BigInteger.ZERO);
            println("set " + rn + "=0");
        }
        DecompInterface di = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        opts.setMaxPayloadMBytes(2000);
        di.setOptions(opts);
        di.openProgram(currentProgram);
        FunctionManager fm = currentProgram.getFunctionManager();
        int n = 0, bad = 0;
        try (PrintWriter w = new PrintWriter(new FileWriter(a[1]))) {
            for (String line : Files.readAllLines(Paths.get(a[0]))) {
                line = line.trim();
                if (line.isEmpty()) continue;
                Function f = fm.getFunctionAt(toAddr(Long.parseLong(line, 16)));
                if (f == null) continue;
                DecompileResults r = di.decompileFunction(f, 240, monitor);
                if (r == null || !r.decompileCompleted()) { println("decompile failed " + f.getName()); bad++; continue; }
                w.println(String.format("\n/* %s @ %08x callers=0 callees=0 */", f.getName(), f.getEntryPoint().getOffset()));
                w.println(r.getDecompiledFunction().getC());
                n++;
            }
        }
        println("redone " + n + " failed " + bad);
    }
}
