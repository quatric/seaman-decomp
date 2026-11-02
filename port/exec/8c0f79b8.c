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
int FUN_8c0f79b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f79b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(unsigned)(ar4 + 100);
  for (iVar2 = ar4 + 0x4c; iVar2 != ar4 + iVar1 * 8 + 0x4c; iVar2 = iVar2 + 8) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0f78cc(iVar2,ar5,ar6,ar7));
  }
  *(undefined4 *)(unsigned)(ar4 + 100) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_clear(ar4 + 0x8c,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(0x9c + ar4) = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_clear(ar4 + 0xa0,ar5,ar6,ar7));
  iVar1 = *(int *)(unsigned)(0x84 + ar4);
  for (iVar2 = ar4 + 0x6c; iVar2 != ar4 + iVar1 * 8 + 0x6c; iVar2 = iVar2 + 8) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0f78cc(iVar2,ar5,ar6,ar7));
  }
  *(undefined4 *)(unsigned)(0x84 + ar4) = 0;
  iVar1 = 0x88;
  *(undefined4 *)(unsigned)(0x88 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0f79b8\n.set _FUN_8c0f79b8, _FUN_8c0f79b8_def\n");
