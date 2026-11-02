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
undefined4 * FUN_8c11241e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11241e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint unaff_r12 = 0;
  int unaff_r13 = 0;
  undefined4 *unaff_r14 = 0;
  undefined4 in_fr5 = 0;
  undefined8 uVar4;
  char in_FPSCR_SZ = 0;
  
  *unaff_r14 = ar5;
  unaff_r14[1] = ar6;
  unaff_r14[2] = unaff_r12;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r13 + 0x10))))(unaff_r13,unaff_r12 << 2,ar6,ar7));
  unaff_r14[3] = iVar1;
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r13 + 0x18))))(unaff_r13,unaff_r14,ar6,ar7));
    unaff_r14 = (undefined4 *)(unsigned)0x0;
  }
  else {
    *(undefined1 *)(unsigned)(unaff_r14 + 5) = 1;
    uVar3 = 0;
    unaff_r14[4] = unaff_r12 * 4 + unaff_r14[3];
    puVar2 = (undefined8 *)(unsigned)unaff_r14[3];
    if (in_FPSCR_SZ == '\0') {
      uVar4 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c1125e0),in_fr5);
    }
    else {
      uVar4 = CONCAT44(((void *)(unsigned)0x8c1129e4),(*(undefined4 *)(unsigned)(unsigned)0x8c1125e0));
    }
    if (unaff_r12 != 0) {
      do {
        uVar3 = uVar3 + 1;
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)puVar2 = (int)((ulonglong)uVar4 >> 0x20);
        }
        else {
          *puVar2 = uVar4;
        }
        puVar2 = (undefined8 *)(unsigned)((int)puVar2 + 4);
      } while (uVar3 < unaff_r12);
    }
  }
  return unaff_r14 = 0;
}

__asm__(".globl _FUN_8c11241e\n.set _FUN_8c11241e, _FUN_8c11241e_def\n");
