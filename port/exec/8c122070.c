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
uint FUN_8c122070_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c122070";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int in_r0 = (int)(unsigned long)vin0;
  uint in_r2 = 0;
  int iVar2;
  uint unaff_r12 = 0;
  uint uVar3;
  int unaff_r14 = 0;
  
  iVar2 = *(int *)(unsigned)(in_r0 + unaff_r14);
  uVar3 = unaff_r12;
  if (in_r2 < *(uint *)(unsigned)(0x240 + unaff_r14)) {
    do {
      if (*(int *)(unsigned)(uVar3 * 8 + 0x268 + unaff_r14 + 4) != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))
                  (*(undefined4 *)(unsigned)(uVar3 * 8 + 0x268 + unaff_r14 + 4),
                   0xf4 + unaff_r14,ar6,ar7));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(unsigned)(0x240 + unaff_r14));
  }
  puVar1 = ((void *)(unsigned)0x8c120348);
  *(undefined4 *)(unsigned)(0x148 + unaff_r14) = 3;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,0x23,0,0));
  if ((((uVar3 & 0xff) == 0) &&
      (uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,0x15,0,0)), (uVar3 & 0xff) == 0)) &&
     (uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,0x10,*(undefined4 *)(unsigned)(0x248 + unaff_r14),2)),
     puVar1 = ((void *)(unsigned)0x8c121f38), (uVar3 & 0xff) == 0)) {
    *(char *)(unsigned)(0x234 + unaff_r14) = (char)unaff_r12;
    *(unsigned *)(unsigned)(0xdc + unaff_r14) = puVar1;
  }
  else {
    unaff_r12 = 1;
  }
  return unaff_r12 = 0;
}

__asm__(".globl _FUN_8c122070\n.set _FUN_8c122070, _FUN_8c122070_def\n");
