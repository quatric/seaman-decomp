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
uint FUN_8c12095c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c12095c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  uint uVar2;
  int unaff_r10 = 0;
  int unaff_r11 = 0;
  uint unaff_r12 = 0;
  int iVar3;
  int *unaff_r14 = 0;
  
  puVar1 = ((void *)(unsigned)0x8c120148);
  iVar3 = unaff_r10;
  if (0 < *unaff_r14) {
    do {
      ar7 = 0;
      ar6 = 0;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r11,(int)unaff_r14 + iVar3 * 2 + 8,0,0));
      iVar3 = iVar3 + 1;
      unaff_r12 = (uint)((uVar2 & 0xff) == 0);
    } while (iVar3 < *unaff_r14);
  }
  *unaff_r14 = unaff_r10;
  if (unaff_r14[1] == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r11 + 0x18))))(unaff_r11,unaff_r14,ar6,ar7));
  }
  return unaff_r12 = 0;
}

__asm__(".globl _FUN_8c12095c\n.set _FUN_8c12095c, _FUN_8c12095c_def\n");
