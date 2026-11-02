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
undefined4 FUN_8c10c48c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c48c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *unaff_r14 = 0;
  float extraout_fr0 = 0;
  
  iVar3 = *unaff_r14;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,2,ar6,ar7));
  *(short *)(unsigned)((int)unaff_r14 + 0x2e) = (short)(int)extraout_fr0;
  *(short *)(unsigned)(unaff_r14 + 0xc) = *(short *)(unsigned)((int)unaff_r14 + 0x2e) * 3 + 3;
  *(short *)(unsigned)(*(int *)(unsigned)unaff_r14[4] + 0xc) = ((short)unaff_r14[0xc] + -1) * 4;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x14))))(iVar3,(uint)*(ushort *)(unsigned)(unaff_r14 + 0xc) << 3,4,ar7));
  unaff_r14[0x15] = iVar3;
  if (unaff_r14[0x15] == 0) {
    uVar1 = 2;
  }
  else {
    iVar2 = unaff_r14[0x15];
    iVar3 = 0;
    do {
      unaff_r14[iVar3 + 0xd] = iVar2;
      iVar2 = iVar2 + (uint)*(ushort *)(unsigned)(unaff_r14 + 0xc) * 4;
      unaff_r14[iVar3 + 0xe] = iVar2;
      iVar3 = iVar3 + 2;
      iVar2 = iVar2 + (uint)*(ushort *)(unsigned)(unaff_r14 + 0xc) * 4;
    } while (iVar3 < 8);
    *(undefined2 *)(unsigned)(unaff_r14 + 0xb) = 0;
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c10c48c\n.set _FUN_8c10c48c, _FUN_8c10c48c_def\n");
