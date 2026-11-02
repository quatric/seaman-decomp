#include "../decls.h"
undefined4 FUN_8c1b9794_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  uint in_r0;
  uint uVar2;
  int iVar3;
  uint extraout_r2;
  uint in_r2;
  undefined1 extraout_r3;
  undefined1 in_r3;
  int ar7_00;
  int iVar4;
  char *unaff_r9;
  int unaff_r12;
  undefined4 in_R1_BANK;
  int in_GBR;
  bool bVar5;
  
  while( true ) {
    if ((int)unaff_r9 < 0) {
      uVar2 = in_r0 >> (~(uint)unaff_r9 & 0x1f) + 1;
    }
    else {
      uVar2 = in_r0 << ((uint)unaff_r9 & 0x1f);
    }
    *(short *)(in_GBR + 0x72) = (short)uVar2;
    ar7_00 = (int)*unaff_r9;
    unaff_r9 = unaff_r9 + 1;
    iVar4 = (char)ar4 + ar4;
    *(uint *)(unaff_r12 + 4) = uVar2;
    *ar5 = in_r3;
    *(char *)(in_GBR + 0xeb) = (char)uVar2;
    iVar3 = FUN_8c1b9422(ar4,ar5,ar6,ar7_00);
    *(undefined4 *)(iVar3 + -4) = in_R1_BANK;
    *(short *)(in_GBR + 0x108) = (short)(undefined4 *)(iVar3 + -4);
    *(uint *)(ar5 + 0x38) = iVar4 + (uint)((in_r2 & 0x80000000) != 0);
    uVar2 = FUN_8c1b960a(ar4,ar5,ar6,ar7_00);
    bVar5 = (uVar2 & 0x80000000) != 0;
    uVar1 = (ushort)(uVar2 << 1) | (ushort)bVar5;
    if (bVar5) break;
    in_r0 = FUN_8c1b946e(ar4,ar5,ar6,ar7_00);
    in_r2 = extraout_r2;
    in_r3 = extraout_r3;
  }
  *(ushort *)(in_GBR + 0x11a) = uVar1;
  iVar4 = (int)DAT_8c1b988a;
  *(ushort *)(in_GBR + 0xc) = uVar1;
  FUN_8c1b9664(ar4,ar5,ar6,iVar4);
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9794\n.set _FUN_8c1b9794, _FUN_8c1b9794_def\n");
