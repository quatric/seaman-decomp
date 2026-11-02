#include "../decls.h"
uint FUN_8c20254c_def(byte *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 ar5_00;
  byte bVar3;
  
  if (*ar4 == 3) {
    return 3;
  }
  uVar1 = ar5;
  if (ar5 == 0xffffffff) {
    uVar1 = (uint)*ar4;
    if (uVar1 == 4) {
      *ar4 = 3;
    }
    else {
      *ar4 = 4;
    }
  }
  if (ar5 != 0) {
    return uVar1;
  }
  if (*ar4 == 0) {
    iVar2 = *(int *)(ar4 + 0x2c);
    if (iVar2 != 1) goto LAB_8c20262e;
  }
  else if ((*ar4 != 1) || (iVar2 = 1, *(int *)(ar4 + 0x2c) != 1)) {
    if (*ar4 == 2) {
      iVar2 = *(int *)(ar4 + 0x2c);
      if (iVar2 == 2) goto LAB_8c20262e;
      if ((*ar4 == 2) && (*(int *)(ar4 + 0x2c) == 3)) {
        ar5_00 = FUN_8c1efd14(*(undefined4 *)(ar4 + 0x24));
        iVar2 = FUN_8c20200c(ar4,ar5_00,ar6,ar7);
        if (iVar2 == 0) {
          return 0;
        }
        *ar4 = 5;
        return iVar2;
      }
    }
    if (*ar4 == 4) {
      iVar2 = 4;
      if (*(int *)(ar4 + 0x2c) == 0) goto LAB_8c20262e;
      if (*ar4 == 4) {
        iVar2 = 1;
        if (*(int *)(ar4 + 0x2c) == 1) goto LAB_8c202640;
        if (*ar4 == 4) {
          iVar2 = *(int *)(ar4 + 0x2c);
          if (iVar2 == 2) {
LAB_8c20262e:
            bVar3 = 1;
            goto LAB_8c202642;
          }
          if (*ar4 == 4) {
            iVar2 = *(int *)(ar4 + 0x2c);
            if (iVar2 == 3) goto LAB_8c202640;
            if ((*ar4 == 4) && (iVar2 = *(int *)(ar4 + 0x2c), iVar2 == 4)) goto LAB_8c20262e;
          }
        }
      }
    }
    if ((*ar4 != 5) || (iVar2 = 1, *(int *)(ar4 + 0x2c) != 1)) {
      uVar1 = (uint)*ar4;
      if ((uVar1 == 6) && (uVar1 = *(uint *)(ar4 + 0x2c), uVar1 == 4)) {
        if (ar4[1] == 2) {
          *ar4 = 0;
          ar4[0x28] = 1;
          ar4[0x29] = 0;
          ar4[0x2a] = 0;
          ar4[0x2b] = 0;
        }
        else {
          *ar4 = 2;
          ar4[0x28] = 2;
          ar4[0x29] = 0;
          ar4[0x2a] = 0;
          ar4[0x2b] = 0;
        }
        return (uint)ar4[1];
      }
      return uVar1;
    }
  }
LAB_8c202640:
  bVar3 = 2;
LAB_8c202642:
  *ar4 = bVar3;
  return iVar2;
}

__asm__(".globl _FUN_8c20254c\n.set _FUN_8c20254c, _FUN_8c20254c_def\n");
