#include "../decls.h"
undefined4 FUN_8c202424_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_8c201f58(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
  puVar1 = (&FUN_8c1efd14);
  if (iVar2 == 1) {
    if (*(int *)(ar4 + 0x30) == 0) {
      uVar3 = FUN_8c1efdc8(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x1c) = uVar3;
      ar4[0x30] = '\x01';
      ar4[0x31] = '\0';
      ar4[0x32] = '\0';
      ar4[0x33] = '\0';
    }
    else {
      if (*(int *)(ar4 + 0x30) == 1) {
        iVar2 = FUN_8c1efd14(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
        if (*(char *)(iVar2 + 4) != '\a') {
          uVar3 = FUN_8c1efdc8(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
          *(undefined4 *)(ar4 + 0x1c) = uVar3;
          return uVar3;
        }
        uVar3 = FUN_8c1efd7c(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
        *(undefined4 *)(ar4 + 0x1c) = uVar3;
        uVar4 = 2;
      }
      else {
        if (*(int *)(ar4 + 0x30) != 2) {
          if (*(int *)(ar4 + 0x30) == 3) {
            iVar2 = FUN_8c1efd14(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
            if (*(char *)(iVar2 + 4) == '\a') {
              ar4[0x30] = '\x04';
              ar4[0x31] = '\0';
              ar4[0x32] = '\0';
              ar4[0x33] = '\0';
            }
            else {
              ar4[0x28] = '\x04';
              ar4[0x29] = '\0';
              ar4[0x2a] = '\0';
              ar4[0x2b] = '\0';
              *ar4 = '\x01';
              FUN_8c202782(ar4,ar5,ar6,ar7);
            }
          }
          if ((*(int *)(ar4 + 0x20) != 0) && (-1 < *(int *)(ar4 + 0x1c))) {
            iVar2 = FUN_8c202a30(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
            if ((iVar2 == 0) && (*ar4 != '\x03')) {
              uVar3 = *(undefined4 *)(ar4 + 0x1c);
              iVar2 = FUN_8c201f8a(*(undefined4 *)(ar4 + 0x24),uVar3,ar6,ar7);
              if (iVar2 != 1) {
                return iVar2;
              }
              iVar2 = (*(code *)puVar1)(*(undefined4 *)(ar4 + 0x24),uVar3,ar6,ar7);
              ar5 = FUN_8c201fb8(ar4,(int)*(char *)(iVar2 + 4),ar6,ar7);
              FUN_8c20254c(ar4,ar5,ar6,ar7);
            }
            else {
              ar4[1] = *ar4;
              *ar4 = '\x06';
              ar5 = *(undefined4 *)(ar4 + 0x1c);
              iVar2 = FUN_8c201f8a(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
              if (iVar2 != 1) {
                return iVar2;
              }
            }
            FUN_8c202682(ar4,ar5,ar6,ar7);
          }
          uVar3 = FUN_8c202782(ar4,ar5,ar6,ar7);
          return uVar3;
        }
        iVar2 = FUN_8c1efd14(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
        if (*(char *)(iVar2 + 4) != '\x05') {
          uVar3 = FUN_8c1efd7c(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
          *(undefined4 *)(ar4 + 0x1c) = uVar3;
          return uVar3;
        }
        ar4[0x28] = '\x04';
        ar4[0x29] = '\0';
        ar4[0x2a] = '\0';
        ar4[0x2b] = '\0';
        *ar4 = '\x01';
        uVar3 = FUN_8c202782(ar4,ar5,ar6,ar7);
        uVar4 = 3;
      }
      *(undefined4 *)(ar4 + 0x30) = uVar4;
    }
  }
  else {
    uVar3 = 0x44;
    *ar4 = '\0';
    ar4[0x1c] = '\0';
    ar4[0x1d] = '\0';
    ar4[0x1e] = '\0';
    ar4[0x1f] = '\0';
    ar4[0x20] = '\0';
    ar4[0x21] = '\0';
    ar4[0x22] = '\0';
    ar4[0x23] = '\0';
    ar4[0x2c] = '\0';
    ar4[0x2d] = '\0';
    ar4[0x2e] = '\0';
    ar4[0x2f] = '\0';
    ar4[0x44] = '\0';
    ar4[0x45] = '\0';
    ar4[0x46] = '\0';
    ar4[0x47] = '\0';
    ar4[0x30] = '\0';
    ar4[0x31] = '\0';
    ar4[0x32] = '\0';
    ar4[0x33] = '\0';
  }
  return uVar3;
}

__asm__(".globl _FUN_8c202424\n.set _FUN_8c202424, _FUN_8c202424_def\n");
