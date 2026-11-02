import ghidra.app.script.GhidraScript;
import ghidra.program.model.mem.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;

public class Probe extends GhidraScript {
    @Override
    public void run() throws Exception {
        for (String s : getScriptArgs()) {
            Address ad = toAddr(Long.parseLong(s, 16));
            MemoryBlock b = currentProgram.getMemory().getBlock(ad);
            Data d = currentProgram.getListing().getDefinedDataAt(ad);
            println("probe " + s + " block=" + (b == null ? "none" : b.getName() + " r=" + b.isRead() + " w=" + b.isWrite() + " x=" + b.isExecute() + " v=" + b.isVolatile())
                + " data=" + (d == null ? "none" : d.getDataType().getName() + " const=" + d.isConstant() + " vol=" + d.isVolatile()));
        }
    }
}
