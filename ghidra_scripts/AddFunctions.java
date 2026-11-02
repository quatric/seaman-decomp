import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import java.io.*;
import java.util.*;
import ghidra.program.model.data.*;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.pcode.HighFunctionDBUtil;

public class AddFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        FunctionManager fm = currentProgram.getFunctionManager();
        DecompInterface di = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        opts.setMaxPayloadMBytes(2000);
        di.setOptions(opts);
        di.openProgram(currentProgram);
        try (PrintWriter w = new PrintWriter(new FileWriter(a[0], true)); PrintWriter idx = new PrintWriter(new FileWriter(a[1], true))) {
            for (int i = 2; i < a.length; i++) {
                Address ad = toAddr(Long.parseLong(a[i], 16));
                Function f = fm.getFunctionAt(ad);
                if (f == null) { disassemble(ad); f = createFunction(ad, null); }
                if (f == null) { println("cannot create " + a[i]); continue; }
                // same r4-r7 signature and 4-argument call overrides as the rest of the program
                List<Variable> ps = new ArrayList<>();
                for (String rn : new String[]{"r4", "r5", "r6", "r7"})
                    ps.add(new ParameterImpl("a" + rn, Undefined4DataType.dataType, currentProgram.getRegister(rn), currentProgram));
                f.updateFunction(null, new ReturnParameterImpl(Undefined4DataType.dataType, currentProgram.getRegister("r0"), currentProgram), ps, Function.FunctionUpdateType.CUSTOM_STORAGE, true, SourceType.USER_DEFINED);
                FunctionDefinitionDataType sig = new FunctionDefinitionDataType("indirect_call");
                sig.setReturnType(Undefined4DataType.dataType);
                ParameterDefinition[] pd = new ParameterDefinition[4];
                for (int q = 0; q < 4; q++) pd[q] = new ParameterDefinitionImpl("a" + (q + 4), Undefined4DataType.dataType, "");
                sig.setArguments(pd);
                sig.setCallingConvention(currentProgram.getCompilerSpec().getDefaultCallingConvention().getName());
                InstructionIterator ii = currentProgram.getListing().getInstructions(f.getBody(), true);
                while (ii.hasNext()) {
                    Instruction in = ii.next();
                    String mn = in.getMnemonicString();
                    if (!(mn.equals("jsr") || mn.equals("bsrf") || mn.equals("bsr"))) continue;
                    for (ghidra.program.model.symbol.Reference rf : in.getReferencesFrom())
                        if (rf.getReferenceType() == ghidra.program.model.symbol.RefType.CALL_OVERRIDE_UNCONDITIONAL || rf.getReferenceType() == ghidra.program.model.symbol.RefType.COMPUTED_CALL)
                            currentProgram.getReferenceManager().delete(rf);
                    try { HighFunctionDBUtil.writeOverride(f, in.getAddress(), sig); } catch (Exception e) { }
                }
                DecompileResults r = di.decompileFunction(f, 240, monitor);
                if (r == null || !r.decompileCompleted()) { println("decompile failed " + a[i] + " : " + (r == null ? "null" : r.getErrorMessage()) + " timedout=" + (r != null && r.isTimedOut())); continue; }
                long ea = ad.getOffset();
                w.println(String.format("\n/* %s @ %08x callers=0 callees=0 */", f.getName(), ea));
                w.println(r.getDecompiledFunction().getC());
                idx.println(String.format("%08x\t%d\t%s\t0\t0", ea, f.getBody().getNumAddresses(), f.getName()));
                println("added " + f.getName() + " size=" + f.getBody().getNumAddresses());
            }
        }
    }
}
