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
undefined4 FUN_8c014ef8_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c014ef8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = 1.0;
  if (*(int *)(unsigned)(ar4 + 0x68) == 1) {
    for (iVar2 = 0; uVar1 = 5, iVar2 < 5; iVar2 = iVar2 + 1) {
      fVar3 = fVar3 - 0.2;
      (*(undefined4 *)(fr0_ - 0xc)) = CONCAT13((char)(int)((float)(ar5 >> 0x18) * fVar3),(int3)ar5);
      *(undefined4 *)(unsigned)(ar4 + iVar2 * 4 + 0x40) = (*(undefined4 *)(fr0_ - 0xc));
    }
  }
  else {
    uVar1 = 0x40;
    *(uint *)(unsigned)(ar4 + 0x40) = ar5;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c014ef8\n.set _FUN_8c014ef8, _FUN_8c014ef8_def\n");
