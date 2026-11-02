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
undefined4 FUN_8c1247d4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1247d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int unaff_r14 = 0;
  undefined8 in_dr0 = 0;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  char cVar9;
  
  *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(unaff_r14 + 0x10)) + 0xc) = (undefined2)ain0;
  if (*(char *)(unsigned)(unaff_r14 + 0x48c) != '\0') {
    *(undefined2 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 0x10) + 4) + 0xc) = 0x18;
  }
  iVar1 = 0;
  do {
    *(float *)(unsigned)(iVar1 * 4 + unaff_r14 + 0x1d8) = ((float)iVar1 * 20.5) / 149.0 + 10.5;
    iVar2 = iVar1 + 2;
    *(float *)(unsigned)((iVar1 + 1) * 4 + unaff_r14 + 0x1d8) = ((float)(iVar1 + 1) * 20.5) / 149.0 + 10.5;
    iVar1 = iVar1 + 3;
    fVar5 = ((float)iVar2 * 20.5) / 149.0 + 10.5;
    *(float *)(unsigned)(iVar2 * 4 + unaff_r14 + 0x1d8) = fVar5;
  } while (iVar1 < 0x96);
  *(int *)(unsigned)(unaff_r14 + 0x484) = unaff_r14 + 0x484;
  *(int *)(unsigned)(unaff_r14 + 0x488) = unaff_r14 + 0x434;
  uVar8 = 0;
  cVar9 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,0x2b,ar6,ar7));
  if (cVar9 == '\0') {
    *(int *)(unsigned)(unaff_r14 + 0x4a8) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(undefined8 *)(unsigned)(unaff_r14 + 0x4a8) = in_dr0;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,6,ar6,ar7));
  *(short *)(unsigned)(unaff_r14 + 0x48) = (short)(int)F32HI(in_dr0);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,8,ar6,ar7));
  *(short *)(unsigned)(unaff_r14 + 0x490) = (short)(int)F32HI(in_dr0);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,9,ar6,ar7));
  *(short *)(unsigned)(unaff_r14 + 0x492) = (short)(int)F32HI(in_dr0);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,10,ar6,ar7));
  cVar9 = '\0';
  *(short *)(unsigned)(unaff_r14 + 0x48e) = (short)(int)F32HI(in_dr0);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,0xb,ar6,ar7));
  if (cVar9 == '\0') {
    fVar5 = 4.3429;
  }
  uVar4 = (undefined4)in_dr0;
  fVar5 = F32HI(in_dr0) / fVar5;
  *(float *)(unsigned)(unaff_r14 + 0x49c) = fVar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,0xd,ar6,ar7));
  cVar9 = '\0';
  *(float *)(unsigned)(unaff_r14 + 0x498) = (float)(int)(short)(int)fVar5 * 0.002302585;
  fVar6 = 5.0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,0x24,ar6,ar7));
  if (cVar9 == '\0') {
    fVar6 = 4.3429;
  }
  cVar9 = '\0';
  fVar5 = fVar5 / fVar6 + -1.0;
  uVar7 = CONCAT44(fVar5,uVar4);
  *(float *)(unsigned)(unaff_r14 + 0x4a0) = fVar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,0x1b,ar6,ar7));
  fVar5 = F32HI(uVar7);
  if (cVar9 == '\0') {
    *(float *)(unsigned)(unaff_r14 + 0x50) = fVar5;
    uVar7 = CONCAT44(*(undefined4 *)(unsigned)(unaff_r14 + 0x50),0x408af967);
  }
  else {
    *(undefined8 *)(unsigned)(unaff_r14 + 0x50) = uVar7;
    uVar7 = *(undefined8 *)(unsigned)(unaff_r14 + 0x50);
  }
  iVar1 = 0;
  fVar6 = (float)uVar7;
  uVar4 = 0x14;
  puVar3 = (undefined4 *)(unsigned)(unaff_r14 + 0x54);
  *(float *)(unsigned)(unaff_r14 + 0x50) =
       F32HI(uVar7) / fVar6 + *(float *)(unsigned)(unaff_r14 + 0x4a8);
  *(int *)(unsigned)(unaff_r14 + 0xa4) = unaff_r14 + 0xa4;
  do {
    *puVar3 = 0x4effffff;
    iVar1 = iVar1 + 2;
    puVar3[1] = 0x4effffff;
    puVar3 = puVar3 + 2;
  } while (iVar1 < 0x14);
  *(int *)(unsigned)(unaff_r14 + 0xa8) = unaff_r14 + 0x54;
  *(undefined4 *)(unsigned)(unaff_r14 + 0x4c) = uVar8;
  *(undefined1 *)(unsigned)(unaff_r14 + 0x4c9) = 0;
  cVar9 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,0x29,0x14,ar7));
  if (cVar9 == '\0') {
    fVar6 = 100.0;
  }
  fVar5 = fVar5 / fVar6;
  *(float *)(unsigned)(unaff_r14 + 0x4c4) = fVar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,0x28,uVar4,ar7));
  if (2.1474836e+09 <= fVar5) {
    fVar5 = fVar5 - 4.2949673e+09;
  }
  *(int *)(unsigned)(unaff_r14 + 0x4dc) = (int)fVar5 * 100;
  *(float *)(unsigned)(unaff_r14 + 0x4b0) = *(float *)(unsigned)(unaff_r14 + 0x4a8) + -1.842068;
  *(undefined2 *)(unsigned)(unaff_r14 + 0x4c0) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,0x27,uVar4,ar7));
  *(char *)(unsigned)(unaff_r14 + 0x4c8) = (char)(int)fVar5;
  if (*(char *)(unsigned)(unaff_r14 + 0x4c8) == '\0') {
    *(undefined2 *)(unsigned)(unaff_r14 + 0x4c2) = 0x1eb8;
  }
  else {
    *(undefined2 *)(unsigned)(unaff_r14 + 0x4c2) = 0x3333;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,0x2a,uVar4,ar7));
  *(char *)(unsigned)(unaff_r14 + 0x4d8) = (char)(int)fVar5;
  return 0;
}

__asm__(".globl _FUN_8c1247d4\n.set _FUN_8c1247d4, _FUN_8c1247d4_def\n");
