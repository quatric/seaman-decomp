import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.data.*;
import ghidra.program.model.symbol.SourceType;
import java.io.*;
import java.util.*;

public class SetStackParams extends GhidraScript {
    @Override
    public void run() throws Exception {
        int n = 0, bad = 0;
        for (String line : java.nio.file.Files.readAllLines(new File(getScriptArgs()[0]).toPath())) {
            String[] p = line.split("\t");
            if (p.length < 2) continue;
            Function f = getFunctionAt(toAddr(Long.parseLong(p[0], 16)));
            if (f == null) { bad++; continue; }
            int words = Integer.parseInt(p[1]);
            try {
                List<Variable> ps = new ArrayList<>();
                String[] regs = {"r4", "r5", "r6", "r7"};
                for (int i = 0; i < 4; i++)
                    ps.add(new ParameterImpl("a" + regs[i], Undefined4DataType.dataType, currentProgram.getRegister(regs[i]), currentProgram));
                for (int i = 0; i < words; i++)
                    ps.add(new ParameterImpl("s" + (i * 4), Undefined4DataType.dataType, i * 4, currentProgram));
                Variable ret = new ReturnParameterImpl(Undefined4DataType.dataType, currentProgram.getRegister("r0"), currentProgram);
                f.updateFunction(null, ret, ps, Function.FunctionUpdateType.CUSTOM_STORAGE, true, SourceType.USER_DEFINED);
                n++;
            } catch (Exception e) { bad++; println("fail " + p[0] + " " + e); }
        }
        println("stack params set " + n + " failed " + bad);
    }
}
