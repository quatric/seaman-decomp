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
uint FUN_8c1206cc_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1206cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  uint uVar2;
  uint in_r3 = 0;
  undefined4 *puVar3;
  uint unaff_r12 = 0;
  int unaff_r13 = 0;
  
  puVar1 = ((void *)(unsigned)0x8c1113d0);
  if (in_r3 < *(byte *)(unsigned)(unaff_r13 + 8)) {
    do {
      puVar3 = (undefined4 *)(unsigned)(ar4 * 8 + *(int *)(unsigned)(unaff_r13 + 0xc));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(*puVar3,6,puVar3[1],0));
      unaff_r12 = unaff_r12 | (uVar2 & 0xff) == 0;
      ar4 = ar4 + 1;
    } while (ar4 < *(byte *)(unsigned)(unaff_r13 + 8));
  }
  return unaff_r12 = 0;
}

__asm__(".globl _FUN_8c1206cc\n.set _FUN_8c1206cc, _FUN_8c1206cc_def\n");
