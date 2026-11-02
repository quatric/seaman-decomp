# Class_12c3c4 (vtable 0x8C12C3C4) - unnamed behaviour class, partial notes
Confidence: [H] read directly in the decompiled code, [M] inferred.

- Derived from `Class_129c70` (vtable 0x8C129C70): the slot-0 destructor calls `Class_129c70_m0_02f1b8` (base dtor) after resetting its own vptr. [H]
- Object size > 0x860 bytes. A member object lives at +0x81C and is destroyed by `free_if_nonnull_wrap_02eaec(this+0x81C, -1)` in the dtor. [H]
- Vtable (header words 0,0 then slots): [H]
  - m0  0x8C1030A4 (72 B)   deleting destructor (flags>0 -> free)
  - m1  0x8C103100 (3,392 B) large dispatcher, references the string REQUEST_SLEEP (and other request names)  [M: role]
  - m2  0x8C104264 (812 B)  per-frame update: copies this+0x840/0x844/0x848 into a global block (0x8C1EED94+0x9C..0xA4) [M: probably a position],
        queries peers via virtual calls (e.g. (*this->vptr)[+0x18]), updates state; names a string STATUS_SNORE
  - m3  0x8C10469C (346 B)  references REACTION_CATCH
  - m4..m10: small (36-112 B) helpers at 0x8C109D98..0x8C10A16C
- Fields touched by m2 (as int index of `int *this`): this[1] = state, this[2] = substate (set to 99 = "none"?), this[0xE] = mode, this[0x10] = aux,
  this[0x1B] = owned sub-object (released through its vtable slot at +0x78). State values written: 0, 2, 0xB. [M: meaning]
- Why it matters: it is the first multi-level class (base + derived + embedded member) recovered, and it names the creature-behaviour strings
  (REQUEST_*, REACTION_*, STATUS_*). Same approach applies to the other 59 vtables (notes/vtables.tsv).
