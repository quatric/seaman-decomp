#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1f4a44_def(int ar4,undefined4 ar5,uint *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c1f4a44";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint * s0 = (uint *)(unsigned long)*(unsigned *)(vsp + 0);
  int s4 = *(int *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
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
  iVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x28 + iVar9;
  if (*(char *)(unsigned)(iVar5 + 6) == '\0') {
    *(byte *)(unsigned)(iVar5 + 6) = (byte)ar5;
    uVar7 = ar7 + s4;
    bVar1 = (((undefined1 *)(unsigned)0x8c26c710))[ar4];
    uVar6 = (int)(char)bVar1 & 0xc0;
    a5 = (int)uVar6 >> 6;
    uVar3 = a5;
    a6 = ar6;
    iVar5 = ar7;
    if (((0 < *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10cc)) && (0 < *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfd8))) &&
       (a5 == ((int)(short)((uint)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfcc)) >> 0x10) & 3U))) {
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f4a00(*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10cc),a5,ar6,ar7));
    }
    *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfcc) =
         *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfcc) + *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfd8) * 4;
    puVar8 = ((uint *)(unsigned long)*(unsigned *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfcc));
    *puVar8 = a5 << 0x10 | uVar7 & 0xff;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f59f2(*(undefined4 *)(unsigned)
                          ((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfe8 + *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10b4) * 0x60 + ar4 * 4
                          ),uVar3,a6,iVar5));
    puVar8[1] = uVar3;
    if (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10c4) == 1) {
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
    if (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10c4) == 1) {
      iVar5 = 0;
      if (0 < s4) {
        do {
          iVar5 = iVar5 + 1;
          *puVar8 = (uint)*(byte *)(unsigned)((int)s0 + 1) << 0x10 | (uint)*(byte *)(unsigned)((int)s0 + 2) << 8 |
                    (int)(char)*s0 << 0x18 | (uint)*(byte *)(unsigned)((int)s0 + 3);
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
    *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfd8) = uVar7 + 3;
    *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfdc) = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfdc) + (uVar7 + 3) * 4;
    iVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4727b4);
    iVar4 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfe0);
    *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfe0) = iVar4 + 1;
    *(int *)(unsigned)(iVar5 + iVar9 + 0x40) = iVar4;
    *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfe0) = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfe0) & 0x7fffffff;
    if (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfe0) == 0) {
      *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfe0) = 1;
    }
    uVar2 = *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + iVar9 + 0x40);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f4a44\n.set _FUN_8c1f4a44, _FUN_8c1f4a44_def\n");
