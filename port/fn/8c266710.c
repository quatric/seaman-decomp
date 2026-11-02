#include "../decls.h"
int FUN_8c266710_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int iVar1;
  int ar6_00;
  int iVar2;
  int unaff_r13;
  undefined4 in_PR;
  
  ar6_00 = 8;
  iVar2 = unaff_r13;
  if (ain0 == 1) {
    iVar1 = DAT_8c2784c0 + 8;
    do {
      if (*(int *)(iVar1 + 4) != 1) break;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 8;
    } while (iVar2 < 8);
joined_r0x8c266742:
    if (iVar2 == 8) {
LAB_8c266782:
      iVar1 = unaff_r13;
    }
  }
  else {
    if (ain0 == 2) {
      iVar1 = DAT_8c2784c0 + 0x48;
      do {
        if (*(int *)(iVar1 + 4) != 1) break;
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 8;
      } while (iVar2 < 8);
      goto joined_r0x8c266742;
    }
    if (ain0 != 3) {
      iVar2 = DAT_8c2784c0;
      iVar1 = 0x7fffffff;
      goto LAB_8c2667a0;
    }
    iVar1 = DAT_8c2784c0 + 0x88;
    iVar2 = 4;
    ar6_00 = unaff_r13;
    do {
      if (*(int *)(iVar1 + 4) != 1) break;
      ar6_00 = ar6_00 + 1;
      iVar1 = iVar1 + 8;
    } while (ar6_00 < 4);
    if (ar6_00 == 4) goto LAB_8c266782;
  }
  if (iVar1 == 0) {
    iVar1 = 0x7000101;
    *ar4 = unaff_r13;
  }
  else {
    *ar4 = iVar1;
    *(undefined4 *)(iVar1 + 4) = 1;
    iVar1 = unaff_r13;
  }
LAB_8c2667a0:
  if (iVar1 != 0) {
    FUN_8c2688a0(FUN_8c266708,iVar1,ar6_00,iVar2,in_PR);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c266710\n.set _FUN_8c266710, _FUN_8c266710_def\n");
