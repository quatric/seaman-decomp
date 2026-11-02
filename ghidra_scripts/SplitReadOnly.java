import ghidra.app.script.GhidraScript;
import ghidra.program.model.mem.*;

public class SplitReadOnly extends GhidraScript {
    @Override
    public void run() throws Exception {
        Memory m = currentProgram.getMemory();
        MemoryBlock b = m.getBlocks()[0];
        println("block " + b.getName() + " " + b.getStart() + "-" + b.getEnd());
        if (b.getSize() < 0x200000) { println("already split"); return; }
        m.split(b, toAddr(0x8c130000L));
        MemoryBlock b2 = m.getBlock(toAddr(0x8c130000L));
        m.split(b2, toAddr(0x8c1d0000L));
        MemoryBlock c1 = m.getBlock(toAddr(0x8c010000L));
        MemoryBlock d = m.getBlock(toAddr(0x8c130000L));
        MemoryBlock c2 = m.getBlock(toAddr(0x8c1d0000L));
        c1.setName("code1");
        d.setName("data");
        c2.setName("code2");
        c1.setWrite(false);
        c2.setWrite(false);
        println("split done: " + c1.getName() + " " + d.getName() + " " + c2.getName());
    }
}
