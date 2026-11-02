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
int FUN_8c1132da_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1132da";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  uint unaff_r11 = 0;
  uint uVar1;
  int iVar2;
  int *unaff_r14 = 0;
  
  iVar2 = *unaff_r14;
  uVar1 = unaff_r11;
  if (unaff_r11 < *(ushort *)(unsigned)(in_r0 + (int)unaff_r14)) {
    do {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))
                (iVar2,*(undefined4 *)(unsigned)(*(int *)(unsigned)((int)0x118 + (int)unaff_r14) + uVar1 * 4),ar6
                 ,ar7));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(unsigned)((int)0x11c + (int)unaff_r14));
  }
  if (*(int *)(unsigned)((int)0x118 + (int)unaff_r14) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x118 + (int)unaff_r14),ar6,ar7));
  }
  iVar2 = (int)0x118;
  *(uint *)(unsigned)(iVar2 + (int)unaff_r14) = unaff_r11;
  *(short *)(unsigned)(iVar2 + 4 + (int)unaff_r14) = (short)unaff_r11;
  *(uint *)(unsigned)(iVar2 + 8 + (int)unaff_r14) = unaff_r11;
  *(uint *)(unsigned)(iVar2 + 0xc + (int)unaff_r14) = unaff_r11;
  return iVar2 + 0xc;
}

__asm__(".globl _FUN_8c1132da\n.set _FUN_8c1132da, _FUN_8c1132da_def\n");
