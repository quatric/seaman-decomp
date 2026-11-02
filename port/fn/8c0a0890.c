#include "../decls.h"
undefined4 FUN_8c0a0890_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  uint extraout_fr1_00;
  char cVar1;
  undefined1 auStack_14 [16];
  
  cVar1 = '\0';
  *(undefined ***)(ar4 + 0x1c8) = &PTR_s_Begin_iya__8c13af50;
  *(undefined4 *)(ar4 + 0x1cc) = 0xf;
  Vec3_set_xyz(auStack_14,ar5,ar6,ar7);
  vec3_copy_8c023d8c(ar4 + 0x238,auStack_14,ar6,ar7);
  object_dtor_delete(auStack_14,0xffffffff,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x244) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x244) = (ulonglong)extraout_fr1;
  }
  *(undefined4 *)(ar4 + 0x248) = 0;
  FUN_8c031b68(ar4,0x8c2851b0,ar6,ar7);
  *(undefined4 *)(ar4 + 0x24c) = 0;
  *(undefined4 *)(ar4 + 0x270) = 0;
  *(undefined4 *)(ar4 + 0x1d0) = 1;
  *(undefined4 *)(ar4 + 0x274) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x234) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x234) = (ulonglong)extraout_fr1_00;
  }
  return 0x234;
}

__asm__(".globl _FUN_8c0a0890\n.set _FUN_8c0a0890, _FUN_8c0a0890_def\n");
