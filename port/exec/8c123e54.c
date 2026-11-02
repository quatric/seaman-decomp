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
undefined4 FUN_8c123e54_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c123e54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  int in_r0 = (int)(unsigned long)vin0;
  undefined4 uVar2;
  uint uVar3;
  undefined1 in_r3 = 0;
  undefined8 *puVar4;
  uint ar5_00;
  int unaff_r14 = 0;
  undefined4 extraout_fr1 = 0;
  float extraout_fr0 = 0;
  undefined4 in_fr5 = 0;
  undefined8 uVar5;
  undefined2 uVar6;
  byte in_FPSCR_CAUSE = 0;
  byte in_FPSCR_DN = 0;
  byte in_FPSCR_PR = 0;
  byte in_FPSCR_SZ = 0;
  
  *(undefined1 *)(unsigned)(in_r0 + unaff_r14) = in_r3;
  uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c123ef4);
  if (in_FPSCR_SZ == 0) {
    uVar2 = in_fr5;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,6,ar6,ar7));
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  cVar1 = (char)((uVar3 & 0x100000) >> 0x14);
  ar5_00 = 0;
  puVar4 = (undefined8 *)(unsigned)(unaff_r14 + 0x54);
  if ((char)((uVar3 & 0x80000) >> 0x13) == '\0') {
    uVar6 = (undefined2)(int)extraout_fr0;
  }
  else {
    uVar6 = (undefined2)(int)CONCAT44D(extraout_fr0,extraout_fr1);
  }
  *(undefined2 *)(unsigned)(unaff_r14 + 0x48) = uVar6;
  if (cVar1 == '\0') {
    uVar5 = CONCAT44((*(undefined1 *)(unsigned)0x8c123f00),uVar2);
  }
  else {
    uVar5 = CONCAT44((*(undefined1 *)(unsigned)0x8c123f04),(*(undefined1 *)(unsigned)0x8c123f00));
  }
  do {
    uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (cVar1 == '\0') {
      *(undefined4 *)(unsigned)puVar4 = uVar2;
    }
    else {
      *puVar4 = uVar5;
    }
    ar5_00 = ar5_00 + 2;
    if (cVar1 == '\0') {
      *(undefined4 *)(unsigned)((int)puVar4 + 4) = uVar2;
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar4 + 4) = uVar5;
    }
    puVar4 = puVar4 + 1;
  } while (ar5_00 < 0x14);
  *(int *)(unsigned)(0xa8 + unaff_r14) = unaff_r14 + 0x54;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12356c(unaff_r14,ar5_00,0x14,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c123e54\n.set _FUN_8c123e54, _FUN_8c123e54_def\n");
