#include "../decls.h"
uint FUN_8c202550_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 a5;
  byte bVar3;
  byte *unaff_r14;
  
  if (*unaff_r14 == 3) {
    return 3;
  }
  uVar1 = ar5;
  if (ar5 == 0xffffffff) {
    uVar1 = (uint)*unaff_r14;
    if (uVar1 == 4) {
      *unaff_r14 = 3;
    }
    else {
      *unaff_r14 = 4;
    }
  }
  if (ar5 != 0) {
    return uVar1;
  }
  if (*unaff_r14 == 0) {
    iVar2 = *(int *)(unaff_r14 + 0x2c);
    if (iVar2 != 1) goto LAB_8c20262e;
  }
  else if ((*unaff_r14 != 1) || (iVar2 = 1, *(int *)(unaff_r14 + 0x2c) != 1)) {
    if (*unaff_r14 == 2) {
      iVar2 = *(int *)(unaff_r14 + 0x2c);
      if (iVar2 == 2) goto LAB_8c20262e;
      if ((*unaff_r14 == 2) && (*(int *)(unaff_r14 + 0x2c) == 3)) {
        a5 = FUN_8c1efd14(*(undefined4 *)(unaff_r14 + 0x24),0,ar6,ar7);
        iVar2 = FUN_8c20200c(unaff_r14,a5,ar6,ar7);
        if (iVar2 == 0) {
          return 0;
        }
        *unaff_r14 = 5;
        return iVar2;
      }
    }
    if (*unaff_r14 == 4) {
      iVar2 = 4;
      if (*(int *)(unaff_r14 + 0x2c) == 0) goto LAB_8c20262e;
      if (*unaff_r14 == 4) {
        iVar2 = 1;
        if (*(int *)(unaff_r14 + 0x2c) == 1) goto LAB_8c202640;
        if (*unaff_r14 == 4) {
          iVar2 = *(int *)(unaff_r14 + 0x2c);
          if (iVar2 == 2) {
LAB_8c20262e:
            bVar3 = 1;
            goto LAB_8c202642;
          }
          if (*unaff_r14 == 4) {
            iVar2 = *(int *)(unaff_r14 + 0x2c);
            if (iVar2 == 3) goto LAB_8c202640;
            if ((*unaff_r14 == 4) && (iVar2 = *(int *)(unaff_r14 + 0x2c), iVar2 == 4))
            goto LAB_8c20262e;
          }
        }
      }
    }
    if ((*unaff_r14 != 5) || (iVar2 = 1, *(int *)(unaff_r14 + 0x2c) != 1)) {
      uVar1 = (uint)*unaff_r14;
      if ((uVar1 == 6) && (uVar1 = *(uint *)(unaff_r14 + 0x2c), uVar1 == 4)) {
        if (unaff_r14[1] == 2) {
          *unaff_r14 = 0;
          unaff_r14[0x28] = 1;
          unaff_r14[0x29] = 0;
          unaff_r14[0x2a] = 0;
          unaff_r14[0x2b] = 0;
        }
        else {
          *unaff_r14 = 2;
          unaff_r14[0x28] = 2;
          unaff_r14[0x29] = 0;
          unaff_r14[0x2a] = 0;
          unaff_r14[0x2b] = 0;
        }
        return (uint)unaff_r14[1];
      }
      return uVar1;
    }
  }
LAB_8c202640:
  bVar3 = 2;
LAB_8c202642:
  *unaff_r14 = bVar3;
  return iVar2;
}

__asm__(".globl _FUN_8c202550\n.set _FUN_8c202550, _FUN_8c202550_def\n");
