import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.data.*;
import java.io.*;
import java.nio.file.*;

public class DumpDataTypes extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        try (PrintWriter w = new PrintWriter(new FileWriter(a[1]))) {
            for (String line : Files.readAllLines(Paths.get(a[0]))) {
                if (line.trim().isEmpty()) continue;
                ghidra.program.model.address.Address ad = toAddr(Long.parseLong(line.trim(), 16));
                Data d = currentProgram.getListing().getDefinedDataContaining(ad);
                if (d == null || !d.getAddress().equals(ad)) { w.println(line.trim() + "\tnone\t1\tundefined1"); continue; }
                DataType dt = d.getDataType();
                if (dt instanceof Array) { Array arr = (Array) dt; w.println(line.trim() + "\tarray\t" + arr.getDataType().getLength() + "\t" + arr.getDataType().getName() + "\t" + arr.getNumElements()); }
                else w.println(line.trim() + "\tscalar\t" + d.getLength() + "\t" + dt.getName());
            }
        }
    }
}
