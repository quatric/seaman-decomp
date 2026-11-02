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
undefined4 FUN_8c2004f6_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2004f6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  byte *unaff_r13 = 0;
  int unaff_r14 = 0;
  
  puVar6 = (undefined1 *)(unsigned)(unaff_r14 + 0x10);
  *(uint *)(unsigned)(unaff_r14 + 4) = (uint)*unaff_r13;
  puVar8 = (undefined1 *)(unsigned)(ar5 + 4);
  do {
    uVar1 = *puVar8;
    puVar8 = puVar8 + 1;
    *puVar6 = uVar1;
    puVar6 = puVar6 + 1;
  } while (puVar6 < (undefined1 *)(unsigned)(unaff_r14 + 0x1c));
  pbVar7 = (byte *)(unsigned)(unaff_r14 + 0x20);
  *(undefined1 *)(unsigned)(unaff_r14 + 0x1c) = 0;
  pbVar9 = unaff_r13 + 0x10;
  do {
    bVar2 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    *pbVar7 = bVar2;
    piVar3 = 0x8c4783dc;
    pbVar7 = pbVar7 + 1;
  } while (pbVar7 < (byte *)(unsigned)(unaff_r14 + 0x28));
  uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(undefined4 *)(unsigned)0x8c4783dc + 0xc))))(unaff_r13,2,ar6,ar7));
  *(uint *)(unsigned)(unaff_r14 + 0xc) = uVar4 & 0xffff;
  uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar3 + 0xc))))(unaff_r13,0x18,ar6,ar7));
  *(uint *)(unsigned)(unaff_r14 + 0x28) = uVar4 & 0xffff;
  *(byte *)(unsigned)(unaff_r14 + 10) = unaff_r13[1];
  uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar3 + 0xc))))(unaff_r13,0x1a,ar6,ar7));
  *(short *)(unsigned)(unaff_r14 + 8) = (short)uVar5;
  return uVar5;
}

__asm__(".globl _FUN_8c2004f6\n.set _FUN_8c2004f6, _FUN_8c2004f6_def\n");
