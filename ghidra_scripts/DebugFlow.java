import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;

public class DebugFlow extends GhidraScript {
    @Override
    public void run() throws Exception {
        Listing l = currentProgram.getListing();
        for (long a = 0x8c0f7b70L; a <= 0x8c0f7b74L; a += 2) {
            Instruction i = l.getInstructionAt(toAddr(a));
            println(Long.toHexString(a) + " " + i + " flow=" + i.getFlowType() + " fall=" + i.getFallThrough() + " len=" + i.getLength() + " delay=" + i.getPrototype().hasDelaySlots() + " inDelay=" + i.isInDelaySlot());
        }
        Function f = getFunctionAt(toAddr(0x8c0f7b70L));
        println("fn body " + f.getBody() + " ranges=" + f.getBody().getNumAddressRanges());
        AddressSetView s = f.getBody();
        println("contains 7b72: " + s.contains(toAddr(0x8c0f7b72L)));
    }
}
