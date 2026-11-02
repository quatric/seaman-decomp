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
int FUN_8c11034c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11034c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  uint uVar2;
  uint unaff_r10 = 0;
  int *unaff_r11 = 0;
  uint uVar3;
  
  iVar1 = *unaff_r11;
  uVar3 = 0;
  uVar2 = *(int *)(unsigned)(in_r0 + iVar1) * 8 +
          *(int *)(unsigned)(in_r0 + -0x38 + iVar1) * *(int *)(unsigned)(in_r0 + -0x3c + iVar1) * 2 +
          (*(int *)(unsigned)(in_r0 + -0x30 + iVar1) + 1) * 2 + *(int *)(unsigned)(in_r0 + -0x2c + iVar1) * 2 +
          (*(int *)(unsigned)(in_r0 + -0x28 + iVar1) + 1) * 2 + *(int *)(unsigned)(in_r0 + -0x24 + iVar1) * 4 +
          (int)0xd4;
  iVar1 = iVar1 + uVar2 + ((uVar2 * 2 ^ uVar2) & 3);
  if (unaff_r10 != 0) {
    do {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1104d2(unaff_r11,iVar1,ar6,ar7));
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + uVar2 + ((uVar2 << 1 ^ uVar2) & 3);
    } while (uVar3 < unaff_r10);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c11034c\n.set _FUN_8c11034c, _FUN_8c11034c_def\n");
