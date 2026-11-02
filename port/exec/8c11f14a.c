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
undefined4 FUN_8c11f14a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11f14a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int in_r0 = (int)(unsigned long)vin0;
  uint uVar4;
  undefined4 uVar5;
  int unaff_r12 = 0;
  int unaff_r14 = 0;
  
  puVar1 = ((void *)(unsigned)0x8c120348);
  *(undefined4 *)(unsigned)(in_r0 + unaff_r14) = ar5;
  puVar3 = (&(*(undefined1 *)(unsigned)0x8c127c1d));
  puVar2 = (&(*(undefined1 *)(unsigned)0x8c127c18));
  if (unaff_r12 == 0) {
    *(undefined4 *)(unsigned)(unaff_r14 + 0x60) = *(undefined4 *)(unsigned)(unaff_r14 + 100);
    *(undefined4 *)(unsigned)(0x114 + unaff_r14) = 0;
    if ((*(int *)(unsigned)(0x88 + unaff_r14) == 0) || (*(char *)(unsigned)(0x234 + unaff_r14) != '\0'))
    {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,0x34,0,0));
    }
    else {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,0x33,0,0));
    }
  }
  else if (unaff_r12 == 1) {
    *(undefined4 *)(unsigned)(unaff_r14 + 0x60) = *(undefined4 *)(unsigned)(unaff_r14 + 0x68);
    *(unsigned *)(unsigned)(0x114 + unaff_r14) = puVar2;
    uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,0x2b,0,0));
  }
  else {
    if (unaff_r12 != 2) {
      return 0x18;
    }
    *(undefined4 *)(unsigned)(unaff_r14 + 0x60) = *(undefined4 *)(unsigned)(unaff_r14 + 0x6c);
    *(unsigned *)(unsigned)(0x114 + unaff_r14) = puVar3;
    uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,0x2c,0,0));
  }
  if (((uVar4 & 0xff) == 0) &&
     (((*(int *)(unsigned)(0x88 + unaff_r14) == 0 || (unaff_r12 == 0)) ||
      (uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,2,0,0)), (uVar4 & 0xff) == 0)))) {
    *(uint *)(unsigned)(0x110 + unaff_r14) = (uint)*(ushort *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 0x60) + 0xc);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

__asm__(".globl _FUN_8c11f14a\n.set _FUN_8c11f14a, _FUN_8c11f14a_def\n");
