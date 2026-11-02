# Class_129c70 (vtable 0x8C129C70) - shared game-object base class, partial [H unless marked]
- Base of at least 7 classes (see vtable_classes.md), including Class_12c3c4.
- Deleting dtor `Class_129c70_m0_02f1b8` (0x8C02F1B8): reset vptr -> destroy Vec3 at +0x70 -> destroy Vec3 at +0x28 -> free if flags>0.
  So the base object holds two Vec3 members: `Vec3 vecA @ +0x28`, `Vec3 vecB @ +0x70` (roles unknown; likely position and rotation/velocity) [M: roles].
- Vtable slots 2..9 (0x8C02F290, 0x8C02F294, 0x8C025FB8, 0x8C027904, 0x8C02F40C, 0x8C02FED0, 0x8C02FEEC, 0x8C02FF08) are NOT in function_index.tsv:
  they are tiny stubs Ghidra never made functions of (probably empty default virtuals). Slot 1 is 0.
- Note for the project: the ~5,890 function count undercounts small leaf stubs (rts/nop-sized); the prologue scan only seeded functions with `sts.l pr,@-r15`.
