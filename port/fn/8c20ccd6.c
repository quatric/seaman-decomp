#include "../decls.h"
undefined4
FUN_8c20ccd6_def(int ar4,int ar5,int ar6,undefined4 ar7,undefined4 s0,undefined4 s4,undefined4 s8,
            undefined4 s12,undefined4 s16,undefined4 s20,int s24,int s28,int s32,int s36,int s40)

{
  undefined4 uVar1;
  uint in_r3;
  uint uVar2;
  int ar7_00;
  uint unaff_r9;
  uint uVar3;
  int iVar4;
  int ar4_00;
  
  uVar2 = *(uint *)(ar4 + 0x18);
  if (((((in_r3 & uVar2) == 0) && ((uVar2 & 1) == 0)) && ((uVar2 & 8) == 0)) &&
     ((uVar2 & 0x20) == 0)) {
    ar7_00 = *(int *)(ar4 + 0xc);
    iVar4 = ar7_00 * 2;
    ar4_00 = s28 * iVar4 + s24 * 2 + *(int *)(ar4 + 0x1c);
    uVar2 = ar6 << 1;
    if (s40 != 0) {
      ar5 = (s36 * s40 * 2 + s32 * 2 & 0xfffffffcU) + ar5;
      uVar2 = s40 * 2;
    }
    uVar3 = 0;
    if (unaff_r9 != 0) {
      do {
        FUN_8c20a8e0(ar4_00,ar5,ar6 << 1,ar7_00);
        uVar3 = uVar3 + 1;
        ar4_00 = ar4_00 + iVar4;
        ar5 = ar5 + (uVar2 & 0xfffffffc);
      } while (uVar3 < unaff_r9);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c20ccd6\n.set _FUN_8c20ccd6, _FUN_8c20ccd6_def\n");
