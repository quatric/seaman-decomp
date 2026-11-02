#include "../decls.h"
undefined4 FUN_8c0fc94c_def(int ar4,char *ar5,char *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *ar5_00;
  char *ar6_00;
  undefined1 auStack_34 [2];
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 auStack_2a [4];
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  
  iVar4 = (int)*ar5;
  if (iVar4 < 0x4a) {
    if (0x48 < iVar4) {
      *(undefined4 *)(*(int *)(ar4 + 0x10) + 8) = 1;
      return 1;
    }
    if ((iVar4 < 0x44) && (0x40 < iVar4)) {
      if (iVar4 == 0x41) {
        return 0x41;
      }
      if (iVar4 == 0x43) {
        iVar4 = FUN_8c013bdc(ar6,ar5,ar6,ar7);
        if (8 < iVar4) {
          return 8;
        }
        if (iVar4 < 1) {
          return 1;
        }
                    
        switch(iVar4) {
        case 1:
          *(int *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb4) = iVar4;
          return 0xb4;
        }
        *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb0) = 1;
        iVar4 = *(int *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb0);
        if (iVar4 != 1) {
          return iVar4;
        }
        *(undefined4 *)(ar4 + 0xbc) = 600;
        uVar3 = FUN_8c0fda5c(ar4,ar5,ar6,ar7);
        return uVar3;
      }
    }
  }
  else if (iVar4 < 0x57) {
    if (0x4a < iVar4) {
                    
      switch(iVar4) {
      case 0x4b:
        uVar3 = FUN_8c013bdc(ar6,ar5,ar6,ar7);
        uVar3 = FUN_8c0fdd98(*(undefined4 *)(*(int *)(ar4 + 0x10) + 0x40),uVar3,ar6,ar7);
        return uVar3;
      case 0x50:
        return (&switchdata_8c0fc9ba_8c0fc9c0)[iVar4 + -0x4b];
      case 0x52:
        uVar3 = FUN_8c013bdc(ar6,ar5,ar6,ar7);
        uVar3 = FUN_8c0fda28(ar4,uVar3,ar6,ar7);
        return uVar3;
      case 0x55:
        uVar3 = FUN_8c013bdc(ar6,ar5,ar6,ar7);
        *(undefined4 *)(ar4 + 0xc0) = uVar3;
        uVar3 = FUN_8c0fd8d0(ar4,ar5,ar6,ar7);
        return uVar3;
      case 0x56:
        uVar3 = FUN_8c013bdc(ar6,ar5,ar6,ar7);
        *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x70) = uVar3;
        return 0x70;
      }
    }
  }
  else if (iVar4 == 100) {
    FUN_8c1f8176(auStack_2a,ar5,ar6,ar7);
    uStack_26 = 0;
    uStack_25 = 0;
    uStack_24 = 0;
    FUN_8c1f8176(auStack_34,ar5,ar6,ar7);
    uVar3 = FUN_8c013bdc(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0xc0,ar5,ar6,ar7);
    uStack_32 = (undefined1)uVar3;
    uVar3 = FUN_8c013bdc(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0xc4,ar5,ar6,ar7);
    uStack_31 = (undefined1)uVar3;
    uStack_30 = 0;
    uStack_2f = 0;
    uStack_2e = 0;
    FUN_8c013bdc(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0xbc,ar5,ar6,ar7);
    ar5_00 = auStack_34;
    FUN_8c1f823a(auStack_2a,ar5_00,ar6,ar7);
    uVar3 = FUN_8c014334(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0x1c4,ar5_00,ar6,ar7,&DAT_8c141e10)
    ;
    return uVar3;
  }
  ar6_00 = ar6;
  iVar4 = FUN_8c013bdc(ar5,ar5,ar6,ar7);
  iVar1 = FUN_8c013bdc(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + iVar4 * 4 + 0x10,ar5,ar6_00,ar7);
  if (*ar6 == '+') {
    iVar2 = FUN_8c013bdc(ar6 + 1,ar5,ar6_00,ar7);
    iVar1 = iVar1 + iVar2;
  }
  else if (*ar6 == '-') {
    iVar2 = FUN_8c013bdc(ar6 + 1,ar5,ar6_00,ar7);
    iVar1 = iVar1 - iVar2;
  }
  else {
    iVar1 = FUN_8c013bdc(ar6,ar5,ar6_00,ar7);
  }
  if (999 < iVar1) {
    iVar1 = 999;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (((iVar4 == 6) &&
      (iVar2 = FUN_8c013bdc(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0x28,ar5,ar6_00,ar7),
      iVar2 == iVar1)) && (0 < iVar2)) {
    *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x70) = 0x11;
  }
  uVar3 = FUN_8c014334(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + iVar4 * 4 + 0x10,ar5,ar6_00,ar7,
                       &DAT_8c141e10);
  return uVar3;
}

__asm__(".globl _FUN_8c0fc94c\n.set _FUN_8c0fc94c, _FUN_8c0fc94c_def\n");
