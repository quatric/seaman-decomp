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
undefined4 FUN_8c0f803c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f803c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  
  *(undefined4 *)(unsigned)(0x89140 + ar4) = ar5;
  ar5_00 = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b93c0(*(undefined4 *)(unsigned)(0x89140 + ar4),0,ar6,ar7));
  *(undefined4 *)(unsigned)(0x1028 + ar4) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0bced0))))
                    (*(undefined4 *)(unsigned)(0x89140 + ar4),ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(0x1030 + ar4) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0f8128))))
                    (*(undefined4 *)(unsigned)(0x89140 + ar4),ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(0x1038 + ar4) = uVar1;
  if (*(int *)(unsigned)(0x1038 + ar4) < 0xb2) {
    *(int *)(unsigned)(0x1038 + ar4) = *(int *)(unsigned)(0x1038 + ar4) + 1;
  }
  else {
    *(undefined4 *)(unsigned)(0x1038 + ar4) = 0;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b951c(*(undefined4 *)(unsigned)(0x89140 + ar4),ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(0x103c + ar4) = uVar1;
  *(undefined4 *)(unsigned)(0x1040 + ar4) = 0;
  if (*(char *)(unsigned)(*(int *)(unsigned)(0x89140 + ar4) + 0x2c) == '\x01') {
    *(undefined4 *)(unsigned)(0x1040 + ar4) = 1;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0bb158))))
                    (*(undefined4 *)(unsigned)(0x89140 + ar4),ar4 + 0x101c,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f803c\n.set _FUN_8c0f803c, _FUN_8c0f803c_def\n");
