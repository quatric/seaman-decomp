#include "../decls.h"
undefined4 FUN_8c012b1c_def(int ar4,short *ar5,undefined *ar6,undefined *ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *ar7_00;
  short *psVar7;
  bool bVar8;
  short asStack_48 [2];
  byte *pbStack_44;
  short *psStack_40;
  undefined *puStack_3c;
  byte abStack_2c [8];
  undefined1 uStack_24;
  
  bVar8 = ar4 < 0;
  if (bVar8) {
    ar4 = -ar4;
  }
  uVar6 = (uint)bVar8;
  iVar4 = 0x1b;
  psStack_40 = ar5;
  puStack_3c = ar6;
  uVar1 = libgcc_divide_helper_010468(ar4,0x1b);
  iVar2 = libgcc_divide_helper_010614(ar4,iVar4);
  if ((uVar6 == 1) && (iVar2 != 0)) {
    iVar2 = iVar4 - iVar2;
    asStack_48[0] = -0x5a;
    memmove(abStack_2c,&DAT_8c125798,8,ar7);
    uStack_24 = 0;
  }
  else {
    memset(abStack_2c,0,9,ar7);
    abStack_2c[0] = abStack_2c[0] | 0x80;
    asStack_48[0] = 0;
  }
  iVar4 = 0;
  psVar7 = &DAT_8c1257d8 + uVar6 * 8;
  ar7_00 = &DAT_8c125758 + uVar6 * 0x40;
  pbStack_44 = abStack_2c;
  do {
    if ((uVar1 & 1) != 0) {
      iVar5 = (int)*psVar7;
      ar7 = ar7_00;
      FUN_8c0129b4(asStack_48,abStack_2c,iVar5,ar7_00);
      iVar5 = FUN_8c012c70(abStack_2c,0x40,iVar5,ar7);
      if (iVar5 != 0) {
        asStack_48[0] = asStack_48[0] + 1;
        *pbStack_44 = *pbStack_44 | 0x80;
      }
    }
    iVar4 = iVar4 + 1;
    uVar1 = (int)uVar1 >> 1;
    psVar7 = psVar7 + 1;
    ar7_00 = ar7_00 + 8;
  } while (iVar4 < 8);
  if (iVar2 != 0) {
    FUN_8c012a60(iVar2,psStack_40,puStack_3c,ar7);
    iVar2 = (int)*psStack_40;
    ar7 = puStack_3c;
    FUN_8c0129b4(asStack_48,abStack_2c,iVar2,puStack_3c);
    iVar2 = FUN_8c012c70(abStack_2c,0x40,iVar2,ar7);
    if (iVar2 == 1) {
      asStack_48[0] = asStack_48[0] + 1;
      *pbStack_44 = *pbStack_44 | 0x80;
    }
  }
  *psStack_40 = asStack_48[0];
  uVar3 = memmove(puStack_3c,abStack_2c,8,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c012b1c\n.set _FUN_8c012b1c, _FUN_8c012b1c_def\n");
