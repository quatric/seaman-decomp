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
undefined4 FUN_8c256670_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c256670";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  puVar2 = ((void *)(unsigned)0x8c2567f8);
  puVar1 = 0x8c4aa6ac;
  uVar4 = 1;
  for (uVar5 = 0; uVar5 < (uint)ar4[1]; uVar5 = uVar5 + 1) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(*(undefined4 *)(unsigned)(uVar5 * 0xc + *ar4 + 8),vr5,vr6,vr7));
    if (iVar3 < 0) {
      uVar4 = 0xffffffff;
      *puVar1 = uVar5;
    }
  }
  return uVar4;
}

__asm__(".globl _FUN_8c256670\n.set _FUN_8c256670, _FUN_8c256670_def\n");
