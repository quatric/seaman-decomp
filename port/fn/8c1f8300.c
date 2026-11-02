#include "../decls.h"
undefined4 FUN_8c1f8300_def(undefined4 ar4,ushort *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int a5;
  undefined4 d;
  int extraout_r2;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_38 [52];
  
  puVar6 = auStack_38;
  FUN_8c010794(0x30,auStack_38,&DAT_8c26c994);
  uVar7 = 0x3c;
  uVar1 = libgcc_divide_helper_0106dc(ar4,0x3c);
  *(char *)(ar5 + 3) = (char)uVar1;
  uVar1 = libgcc_divide_helper_01051c(ar4,uVar7);
  uVar2 = libgcc_divide_helper_0106dc(uVar1,uVar7);
  *(char *)((int)ar5 + 5) = (char)uVar2;
  uVar1 = libgcc_divide_helper_01051c(uVar1,uVar7);
  uVar7 = 0x18;
  uVar2 = libgcc_divide_helper_0106dc(uVar1,0x18);
  *(char *)(ar5 + 2) = (char)uVar2;
  uVar1 = libgcc_divide_helper_01051c(uVar1,uVar7);
  iVar3 = libgcc_divide_helper_01051c(uVar1,0x16d);
  uVar4 = libgcc_divide_helper_0106dc(uVar1,d);
  uVar5 = iVar3 + 1U >> 2;
  if (uVar4 < uVar5) {
    *ar5 = (short)iVar3 + 0x79d;
    uVar4 = uVar4 + (extraout_r2 - uVar5);
    if ((*ar5 & 3) == 0) {
      uVar4 = uVar4 + 1;
    }
  }
  else {
    uVar4 = uVar4 - uVar5;
    *ar5 = (short)iVar3 + 0x79e;
  }
  uVar5 = 1;
  uVar1 = 0xc;
  if ((*ar5 & 3) == 0) {
    if (*(uint *)(puVar6 + 4) <= uVar4) {
      uVar5 = 2;
      do {
        if (uVar4 < *(int *)(puVar6 + uVar5 * 4) + 1U) break;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0xc);
    }
  }
  else {
    uVar5 = 1;
    do {
      if (uVar4 < *(uint *)(puVar6 + uVar5 * 4)) break;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0xc);
  }
  *(char *)(ar5 + 1) = (char)uVar5;
  *(char *)((int)ar5 + 3) = ((char)uVar4 - (char)*(undefined4 *)(puVar6 + (uVar5 - 1) * 4)) + '\x01'
  ;
  if (((*ar5 & 3) == 0) && (2 < (byte)ar5[1])) {
    *(char *)((int)ar5 + 3) = *(char *)((int)ar5 + 3) + -1;
  }
  iVar3 = (int)*(char *)((int)ar5 + 3);
  a5 = (int)(char)ar5[1];
  uVar2 = FUN_8c1f8614((int)(short)*ar5,a5,iVar3,0xc);
  *(char *)((int)ar5 + 7) = (char)uVar2;
  uVar1 = FUN_8c1f8650(ar5,a5,iVar3,uVar1);
  *(char *)(ar5 + 4) = (char)uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c1f8300\n.set _FUN_8c1f8300, _FUN_8c1f8300_def\n");
