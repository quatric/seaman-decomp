import ghidra.app.script.GhidraScript;
import ghidra.program.model.symbol.*;
public class DumpSyms extends GhidraScript {
    @Override
    public void run() throws Exception {
        for (String s : getScriptArgs())
            for (Symbol y : currentProgram.getSymbolTable().getSymbols(toAddr(Long.parseLong(s, 16))))
                println("DUMP " + s + " " + y.getName() + " ns=" + y.getParentNamespace().getName() + " type=" + y.getSymbolType());
    }
}
