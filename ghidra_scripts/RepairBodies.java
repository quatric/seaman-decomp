import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.util.*;

// Some functions were recorded with a body that stops at an early indirect jump or odd flow (e.g. 8c265ac8 = 6 bytes), which hides their later call sites and switches
// from the scripts that look at function bodies. Recompute each body by following instruction flow from the entry (not into calls or other functions) and widen it.
public class RepairBodies extends GhidraScript {
    @Override
    public void run() throws Exception {
        Listing lst = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();
        int widened = 0, skipped = 0, absorbed = 0;
        ReferenceManager rm = currentProgram.getReferenceManager();
        // a function entry that is only entered by falling through / jumping from the function before it (no call reference) is a prologue split, not a function
        boolean again = true;
        while (again) {
            again = false;
            for (Function f : fm.getFunctions(true)) {
                Address entry = f.getEntryPoint();
                Instruction prev = lst.getInstructionBefore(entry);
                if (prev == null) continue;
                Function pf = fm.getFunctionContaining(prev.getAddress());
                if (pf == null || pf.equals(f)) continue;
                boolean falls = entry.equals(prev.getFallThrough()) || (prev.isInDelaySlot() == false && prev.getMaxAddress().add(1).equals(entry) && prev.getFallThrough() != null);
                if (!falls) continue;
                boolean called = false;
                for (Reference r : rm.getReferencesTo(entry)) { RefType t = r.getReferenceType(); if (t.isCall() || t.isIndirect() || t.isData() || t.isRead()) called = true; }
                if (called) continue;
                int jumpsIn = 0;
                for (Reference r : rm.getReferencesTo(entry)) if (r.getReferenceType().isJump() && !r.getFromAddress().equals(prev.getAddress())) jumpsIn++;
                if (jumpsIn > 0 && fm.getFunctionContaining(entry.subtract(1)) == null) continue;
                println("absorb " + entry + " into " + pf.getEntryPoint());
                fm.removeFunction(entry);
                absorbed++; again = true;
                break;
            }
        }
        println("absorbed " + absorbed);
        for (Function f : fm.getFunctions(true)) {
            Address entry = f.getEntryPoint();
            AddressSet body = new AddressSet();
            ArrayDeque<Address> q = new ArrayDeque<>();
            q.add(entry);
            boolean clash = false;
            while (!q.isEmpty() && body.getNumAddresses() < 0x10000) {
                Address a = q.pop();
                if (body.contains(a)) continue;
                if (!a.equals(entry) && fm.getFunctionAt(a) != null) continue;
                Instruction i = lst.getInstructionAt(a);
                if (i == null) continue;
                body.add(i.getMinAddress(), i.getMaxAddress());
                FlowType ft = i.getFlowType();
                for (Reference r : i.getReferencesFrom()) {
                    RefType rt = r.getReferenceType();
                    if (rt.isJump() && r.getToAddress().isMemoryAddress()) q.add(r.getToAddress());
                }
                for (Address fl : i.getFlows()) if (!ft.isCall()) q.add(fl);
                Address ftA = i.getFallThrough();
                if (ftA != null) q.add(ftA);
                else if (i.getDelaySlotDepth() > 0) { Address ds = i.getMaxAddress().add(1); q.add(ds); }
            }
            AddressSetView old = f.getBody();
            if (body.contains(old) && body.getNumAddresses() > old.getNumAddresses()) {
                // do not take addresses that belong to another function
                boolean ok = true;
                for (AddressRange r : body) {
                    for (Address a = r.getMinAddress(); a.compareTo(r.getMaxAddress()) <= 0; a = a.add(1)) {
                        Function g = fm.getFunctionContaining(a);
                        if (g != null && !g.equals(f)) { ok = false; println("clash " + f.getEntryPoint() + " with " + g.getEntryPoint() + " at " + a); break; }
                    }
                    if (!ok) break;
                }
                if (!ok) { skipped++; continue; }
                try { f.setBody(body); widened++; } catch (Exception e) { skipped++; println("setBody failed " + f.getEntryPoint() + ": " + e); }
            }
        }
        println("RepairBodies widened " + widened + " skipped " + skipped);
    }
}
