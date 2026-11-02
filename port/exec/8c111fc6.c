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
int FUN_8c111fc6_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c111fc6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  int *piVar2;
  uint uVar3;
  int unaff_r14 = 0;
  
  if (*(int *)(unsigned)(*(int *)(unsigned)(in_r0 + ar4) + unaff_r14) == *(int *)(unsigned)(ar4 + 0x3c)) {
    if ((*(int *)(unsigned)(ar4 + 0x38) != 0) && (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + unaff_r14) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111208(ar4,ar5,0,ar7));
    }
    iVar1 = 0;
  }
  else {
    piVar2 = (int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + unaff_r14);
    iVar1 = *piVar2;
    *piVar2 = iVar1 + (uint)*(ushort *)(unsigned)(ar4 + 0xc);
    if (*(uint *)(unsigned)(ar4 + 0x20) <= *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + unaff_r14)) {
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + unaff_r14) = *(undefined4 *)(unsigned)(ar4 + 0x1c);
    }
    *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + unaff_r14) = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + unaff_r14) + 1;
    if (iVar1 == *(int *)(unsigned)(ar4 + 0x28)) {
      uVar3 = 0;
      if (*(int *)(unsigned)(ar4 + 0x14) != 0) {
        do {
          ar7 = uVar3 * 4;
          if ((iVar1 == *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + ar7)) &&
             (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + ar7) != *(int *)(unsigned)(ar4 + 0x3c))) break;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(unsigned)(ar4 + 0x14));
      }
      if (uVar3 == *(uint *)(unsigned)(ar4 + 0x14)) {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + unaff_r14);
        *(undefined1 *)(unsigned)(ar4 + 0x30) = 0;
      }
    }
    if (*(int *)(unsigned)(ar4 + 0x38) != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111208(ar4,ar5,1,ar7));
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c111fc6\n.set _FUN_8c111fc6, _FUN_8c111fc6_def\n");
