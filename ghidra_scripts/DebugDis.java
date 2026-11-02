import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;

public class DebugDis extends GhidraScript {
    @Override
    public void run() throws Exception {
        Listing l = currentProgram.getListing();
        for (long a = 0x8c0f7b70L; a < 0x8c0f7b90L; a += 2) {
            Instruction i = l.getInstructionAt(toAddr(a));
            CodeUnit cu = l.getCodeUnitAt(toAddr(a));
            println(Long.toHexString(a) + " ins=" + i + " cu=" + (cu == null ? "null" : cu.getClass().getSimpleName() + ":" + cu));
        }
        println("disassemble ret=" + disassemble(toAddr(0x8c0f7b72L)));
        Instruction i = l.getInstructionAt(toAddr(0x8c0f7b72L));
        println("after: " + i);
    }
}
