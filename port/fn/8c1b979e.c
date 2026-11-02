#include "../decls.h"
undefined4 FUN_8c1b979e_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
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
    ar7_00 = (int)*unaff_r9;
    unaff_r9 = unaff_r9 + 1;
    uVar3 = (uint)((in_r2 & 0x80000000) != 0);
    iVar4 = uVar3 + ar4;
    *(uint *)(unaff_r12 + 4) = ain0;
    *ar5 = in_r3;
    *(char *)(in_GBR + 0xeb) = (char)ain0;
    iVar2 = FUN_8c1b9422(ar4,ar5,ar6,ar7_00,*(undefined4 *)((int)register0x0000003c + uVar3 + ar4));
    *(undefined4 *)(iVar2 + -4) = in_R1_BANK;
    *(short *)(in_GBR + 0x108) = (short)(undefined4 *)(iVar2 + -4);
    *(undefined1 **)(ar5 + 0x38) = (undefined1 *)((int)register0x0000003c + iVar4);
    uVar3 = FUN_8c1b960a(ar4,ar5,ar6,ar7_00);
    bVar5 = (uVar3 & 0x80000000) != 0;
    uVar1 = (ushort)(uVar3 << 1) | (ushort)bVar5;
    if (bVar5) break;
    uVar3 = FUN_8c1b946e(ar4,ar5,ar6,ar7_00);
    if ((int)unaff_r9 < 0) {
      ain0 = uVar3 >> (~(uint)unaff_r9 & 0x1f) + 1;
    }
    else {
      ain0 = uVar3 << ((uint)unaff_r9 & 0x1f);
    }
    register0x0000003c = (BADSPACEBASE *)(int)(char)ar4;
    *(short *)(in_GBR + 0x72) = (short)ain0;
    in_r2 = extraout_r2;
    in_r3 = extraout_r3;
  }
  *(ushort *)(in_GBR + 0x11a) = uVar1;
  iVar4 = (int)DAT_8c1b988a;
  *(ushort *)(in_GBR + 0xc) = uVar1;
  FUN_8c1b9664(ar4,ar5,ar6,iVar4);
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b979e\n.set _FUN_8c1b979e, _FUN_8c1b979e_def\n");
