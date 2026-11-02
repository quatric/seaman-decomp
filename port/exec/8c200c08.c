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
uint FUN_8c200c08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c200c08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  undefined1 *unaff_r8 = 0;
  ushort *unaff_r13 = 0;
  int unaff_r14 = 0;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468((uint)*unaff_r13,100,vr6,vr7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0(uVar1,ar5,ar6,ar7));
  *unaff_r8 = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010614((uint)*unaff_r13,100,vr6,vr7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0(uVar1,ar5,ar6,ar7));
  *(char *)(unsigned)(unaff_r14 + 1) = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0((uint)(byte)unaff_r13[1],ar5,ar6,ar7));
  *(char *)(unsigned)(unaff_r14 + 2) = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0((uint)*(byte *)(unsigned)((int)unaff_r13 + 3),ar5,ar6,ar7));
  *(char *)(unsigned)(unaff_r14 + 3) = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0((uint)(byte)unaff_r13[2],ar5,ar6,ar7));
  *(char *)(unsigned)(unaff_r14 + 4) = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0((uint)*(byte *)(unsigned)((int)unaff_r13 + 5),ar5,ar6,ar7));
  *(char *)(unsigned)(unaff_r14 + 5) = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0((uint)(byte)unaff_r13[3],ar5,ar6,ar7));
  *(char *)(unsigned)(unaff_r14 + 6) = (char)uVar1;
  uVar2 = *(byte *)(unsigned)((int)unaff_r13 + 7) & 7;
  *(undefined *)(unsigned)(unaff_r14 + 7) = (((undefined1 *)(unsigned)0x8c26d210))[uVar2];
  return uVar2;
}

__asm__(".globl _FUN_8c200c08\n.set _FUN_8c200c08, _FUN_8c200c08_def\n");
