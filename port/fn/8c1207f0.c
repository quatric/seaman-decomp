#include "../decls.h"
uint FUN_8c1207f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int in_r1;
  uint uVar1;
  undefined4 unaff_r14;
  
  uVar1 = 1;
  if (in_r0 == in_r1) {
LAB_8c12085e:
    if (*(char *)(ar4 + 0x20) != '\0') {
      uVar1 = FUN_8c1207c6(ar4,unaff_r14,1,1);
      uVar1 = (uint)((uVar1 & 0xff) == 0);
    }
  }
  else {
    if (in_r0 == 0xfa) {
LAB_8c120846:
      uVar1 = FUN_8c120798(ar4,ar5,1,1);
    }
    else {
      if (in_r0 == 0xfb) {
        unaff_r14 = 0;
        *(undefined1 *)(ar4 + 0x20) = 1;
        goto LAB_8c12085e;
      }
      if (in_r0 == 0xfc) {
        *(undefined1 *)(ar4 + 0x20) = 0;
        goto LAB_8c120846;
      }
      if (in_r0 == 0xfd) {
        uVar1 = FUN_8c12071a(ar4,unaff_r14,1,1);
      }
      else {
        if (in_r0 != 0xfe) {
          return 0;
        }
        uVar1 = FUN_8c1206ba(ar4,ar5,1,1);
      }
    }
    uVar1 = (uint)((uVar1 & 0xff) == 0);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1207f0\n.set _FUN_8c1207f0, _FUN_8c1207f0_def\n");
