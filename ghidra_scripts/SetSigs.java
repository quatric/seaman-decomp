import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.data.*;
import ghidra.program.model.symbol.SourceType;
import java.util.*;

public class SetSigs extends GhidraScript {
    @Override
    public void run() throws Exception {
        int n = 0, bad = 0;
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            try {
                List<Variable> ps = new ArrayList<>();
                String[] regs = {"r4", "r5", "r6", "r7"};
                for (int i = 0; i < 4; i++)
                    ps.add(new ParameterImpl("a" + regs[i], Undefined4DataType.dataType, currentProgram.getRegister(regs[i]), currentProgram));
                Variable ret = new ReturnParameterImpl(Undefined4DataType.dataType, currentProgram.getRegister("r0"), currentProgram);
                f.updateFunction(null, ret, ps, Function.FunctionUpdateType.CUSTOM_STORAGE, true, SourceType.USER_DEFINED);
                n++;
            } catch (Exception e) { bad++; }
        }
        println("signatures set " + n + " failed " + bad);
    }
}
