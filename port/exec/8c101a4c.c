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
uint FUN_8c101a4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101a4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(unsigned)(0xb0 + ar4) == 0) {
    for (bVar2 = 0; bVar2 < 5; bVar2 = bVar2 + 1) {
      uVar3 = *(int *)(unsigned)(ar4 + (uint)bVar2 * 8 + 4) + uVar3;
    }
    uVar3 = uVar3 >> 2;
    uVar1 = 0x16e360;
    if ((uVar3 < 0x16e360) && (uVar1 = 0xc350, 0xc350 < uVar3)) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101b5c(ar4,uVar3,ar6,ar7));
    }
  }
  else {
    if (*(int *)(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4) == 0) {
      uVar3 = *(uint *)(unsigned)(0xbc + ar4);
    }
    else {
      uVar3 = *(uint *)(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4);
    }
    if ((uVar3 < 0x16e360) && (0xc350 < uVar3)) {
      uVar1 = 0x186a0;
      if (*(uint *)(unsigned)(0xbc + ar4) < uVar3) {
        if (0x186a0 < uVar3 - *(int *)(unsigned)(0xbc + ar4)) {
          uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101c10(ar4,uVar3,ar6,ar7));
        }
      }
      else if (0x186a0 < *(int *)(unsigned)(0xbc + ar4) - uVar3) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101c10(ar4,uVar3,ar6,ar7));
      }
    }
    else {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101c64(ar4,ar5,ar6,ar7));
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c101a4c\n.set _FUN_8c101a4c, _FUN_8c101a4c_def\n");
