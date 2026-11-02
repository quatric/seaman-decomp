#include "../decls.h"
undefined4 FUN_8c1f4a44_def(int ar4,undefined4 ar5,uint *ar6,int ar7,uint *s0,int s4)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint a5;
  uint *a6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  
  iVar9 = ar4 * 0x2c;
  iVar5 = _DAT_8c4727b4 + 0x28 + iVar9;
  if (*(char *)(iVar5 + 6) == '\0') {
    *(byte *)(iVar5 + 6) = (byte)ar5;
    uVar7 = ar7 + s4;
    bVar1 = (&DAT_8c26c710)[ar4];
    uVar6 = (int)(char)bVar1 & 0xc0;
    a5 = (int)uVar6 >> 6;
    uVar3 = a5;
    a6 = ar6;
    iVar5 = ar7;
    if (((0 < *(int *)(_DAT_8c4727b4 + 0x10cc)) && (0 < *(int *)(_DAT_8c4727b4 + 0xfd8))) &&
       (a5 == ((int)(short)((uint)**(undefined4 **)(_DAT_8c4727b4 + 0xfcc) >> 0x10) & 3U))) {
      FUN_8c1f4a00(*(undefined4 *)(_DAT_8c4727b4 + 0x10cc),a5,ar6,ar7);
    }
    *(int *)(_DAT_8c4727b4 + 0xfcc) =
         *(int *)(_DAT_8c4727b4 + 0xfcc) + *(int *)(_DAT_8c4727b4 + 0xfd8) * 4;
    puVar8 = *(uint **)(_DAT_8c4727b4 + 0xfcc);
    *puVar8 = a5 << 0x10 | uVar7 & 0xff;
    uVar3 = FUN_8c1f59f2(*(undefined4 *)
                          (_DAT_8c4727b4 + 0xfe8 + *(int *)(_DAT_8c4727b4 + 0x10b4) * 0x60 + ar4 * 4
                          ),uVar3,a6,iVar5);
    puVar8[1] = uVar3;
    if (*(int *)(_DAT_8c4727b4 + 0x10c4) == 1) {
      puVar8[2] = (uint)(byte)ar5 << 0x18 | (uint)bVar1 << 0x10 | uVar6 << 8 | uVar7 & 0xff;
      puVar8 = puVar8 + 3;
      iVar5 = 0;
      if (0 < ar7) {
        do {
          uVar3 = *ar6;
          ar6 = ar6 + 1;
          iVar5 = iVar5 + 1;
          *puVar8 = uVar3;
          puVar8 = puVar8 + 1;
        } while (iVar5 < ar7);
      }
    }
    else {
      puVar8[2] = uVar6 << 0x10 | (uint)bVar1 << 8 | uVar7 * 0x1000000 | (uint)(byte)ar5;
      puVar8 = puVar8 + 3;
      iVar5 = 0;
      if (0 < ar7) {
        do {
          uVar3 = *ar6;
          ar6 = ar6 + 1;
          iVar5 = iVar5 + 1;
          *puVar8 = uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | (int)uVar3 >> 8 & 0xff00U |
                    uVar3 >> 0x18;
          puVar8 = puVar8 + 1;
        } while (iVar5 < ar7);
      }
    }
    if (*(int *)(_DAT_8c4727b4 + 0x10c4) == 1) {
      iVar5 = 0;
      if (0 < s4) {
        do {
          iVar5 = iVar5 + 1;
          *puVar8 = (uint)*(byte *)((int)s0 + 1) << 0x10 | (uint)*(byte *)((int)s0 + 2) << 8 |
                    (int)(char)*s0 << 0x18 | (uint)*(byte *)((int)s0 + 3);
          puVar8 = puVar8 + 1;
          s0 = s0 + 1;
        } while (iVar5 < s4);
      }
    }
    else {
      iVar5 = 0;
      if (0 < s4) {
        do {
          uVar3 = *s0;
          s0 = s0 + 1;
          iVar5 = iVar5 + 1;
          *puVar8 = uVar3;
          puVar8 = puVar8 + 1;
        } while (iVar5 < s4);
      }
    }
    *(uint *)(_DAT_8c4727b4 + 0xfd8) = uVar7 + 3;
    *(uint *)(_DAT_8c4727b4 + 0xfdc) = *(int *)(_DAT_8c4727b4 + 0xfdc) + (uVar7 + 3) * 4;
    iVar5 = _DAT_8c4727b4;
    iVar4 = *(int *)(_DAT_8c4727b4 + 0xfe0);
    *(int *)(_DAT_8c4727b4 + 0xfe0) = iVar4 + 1;
    *(int *)(iVar5 + iVar9 + 0x40) = iVar4;
    *(uint *)(_DAT_8c4727b4 + 0xfe0) = *(uint *)(_DAT_8c4727b4 + 0xfe0) & 0x7fffffff;
    if (*(int *)(_DAT_8c4727b4 + 0xfe0) == 0) {
      *(undefined4 *)(_DAT_8c4727b4 + 0xfe0) = 1;
    }
    uVar2 = *(undefined4 *)(_DAT_8c4727b4 + iVar9 + 0x40);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f4a44\n.set _FUN_8c1f4a44, _FUN_8c1f4a44_def\n");
