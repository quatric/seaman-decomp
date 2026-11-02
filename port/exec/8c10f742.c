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
undefined4 FUN_8c10f742_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f742";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r13 = 0;
  int unaff_r14 = 0;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((in_r0 + unaff_r13))))(unaff_r13,ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r13 + 0x54))))(uVar1,ar5,ar6,ar7));
  *(char *)(unsigned)(unaff_r14 + 0x58) = (char)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r13 + 0x58))))(uVar1,ar5,ar6,ar7));
  *(char *)(unsigned)(unaff_r14 + 0x59) = (char)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r13 + 0x5c))))(uVar1,ar5,ar6,ar7));
  *(char *)(unsigned)(unaff_r14 + 0x5a) = (char)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r13 + 0x60))))(uVar1,ar5,ar6,ar7));
  *(char *)(unsigned)(unaff_r14 + 0x5b) = (char)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r13 + 100))))(uVar1,ar5,ar6,ar7));
  *(ushort *)(unsigned)(unaff_r14 + 0x5c) = (ushort)uVar2 & 0xff;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + unaff_r13))))(uVar1,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(unaff_r14 + 0x60) = uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb8 + unaff_r13))))(uVar1,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(unaff_r14 + 100) = uVar2;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xbc + unaff_r13))))(uVar1,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(unaff_r14 + 0x68) = uVar1;
  if ((uint)*(byte *)(unsigned)(unaff_r14 + 0x58) != *(int *)(unsigned)(unaff_r14 + 0x70) - *(int *)(unsigned)(unaff_r14 + 0x74))
  {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(0x66,vr5,vr6,vr7));
    return uVar1;
  }
  *(int *)(unsigned)(0x90 + unaff_r14) = unaff_r13;
  return 0;
}

__asm__(".globl _FUN_8c10f742\n.set _FUN_8c10f742, _FUN_8c10f742_def\n");
