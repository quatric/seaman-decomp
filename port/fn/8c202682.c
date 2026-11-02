#include "../decls.h"
uint FUN_8c202682_def(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = (uint)*ar4;
  if (uVar1 == 1) {
    uVar1 = *(uint *)(ar4 + 0x28);
    if (uVar1 != 0) {
      if (uVar1 == 2) {
LAB_8c2026ca:
        ar4[0x28] = 0;
        ar4[0x29] = 0;
        ar4[0x2a] = 0;
        ar4[0x2b] = 0;
        return uVar1;
      }
      if (uVar1 != 1) {
        if (uVar1 == 3) {
          ar4[0x28] = 1;
          ar4[0x29] = 0;
          ar4[0x2a] = 0;
          ar4[0x2b] = 0;
          return 3;
        }
        if (uVar1 != 4) goto LAB_8c2026ca;
      }
    }
  }
  else if (uVar1 == 2) {
    uVar1 = *(uint *)(ar4 + 0x28);
    if (uVar1 == 0) {
      ar4[0x28] = 2;
      ar4[0x29] = 0;
      ar4[0x2a] = 0;
      ar4[0x2b] = 0;
      return 0;
    }
    if ((uVar1 == 1) || ((uVar1 != 2 && (uVar1 != 3)))) {
      ar4[0x28] = 3;
      ar4[0x29] = 0;
      ar4[0x2a] = 0;
      ar4[0x2b] = 0;
      return uVar1;
    }
  }
  else {
    if (uVar1 == 4) {
      uVar2 = *(undefined4 *)(ar4 + 0x28);
      *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x2c);
      return uVar2;
    }
    if (uVar1 == 5) {
      uVar2 = *(undefined4 *)(ar4 + 0x28);
      ar4[0x28] = 1;
      ar4[0x29] = 0;
      ar4[0x2a] = 0;
      ar4[0x2b] = 0;
      return uVar2;
    }
    if (uVar1 == 6) {
      iVar3 = *(int *)(ar4 + 0x2c);
      if (iVar3 == 100) {
        ar4[0x28] = 0x65;
        ar4[0x29] = 0;
        ar4[0x2a] = 0;
        ar4[0x2b] = 0;
        return 100;
      }
      if (iVar3 != 0x65) {
        ar4[0x28] = 100;
        ar4[0x29] = 0;
        ar4[0x2a] = 0;
        ar4[0x2b] = 0;
        return iVar3;
      }
      ar4[0x28] = 4;
      ar4[0x29] = 0;
      ar4[0x2a] = 0;
      ar4[0x2b] = 0;
      return 0x65;
    }
    if (uVar1 == 0) {
      uVar1 = *(uint *)(ar4 + 0x28);
      if ((((uVar1 != 0) && (uVar1 != 1)) && (uVar1 != 2)) && (uVar1 != 3)) {
        return uVar1;
      }
    }
    else if (uVar1 == 3) {
      uVar1 = *(uint *)(ar4 + 0x28);
      if (((uVar1 != 0) && (uVar1 != 1)) && ((uVar1 != 2 && (uVar1 != 3)))) {
        return uVar1;
      }
    }
    else {
      *ar4 = 3;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c202682\n.set _FUN_8c202682, _FUN_8c202682_def\n");
