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
uint FUN_8c0570cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0570cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (*(int *)(unsigned)(0x2a0 + ar4) == 0) {
    *(int *)(unsigned)(0x2a0 + ar4) = *(int *)(unsigned)(0x2a0 + ar4) + 1;
    ar7 = 0;
    ar6 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033a8c))))
              (ar4 + 0xb0,ar5,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7));
  }
  else if (*(int *)(unsigned)(0x2a0 + ar4) != 1) {
    return 1;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033b98))))
                    (ar4 + 0xb0,ar5,ar6,ar7));
  if (iVar1 == 1) {
    *(undefined4 *)(unsigned)(0x2a0 + ar4) = 0;
  }
  return (uint)(iVar1 != 1);
}

__asm__(".globl _FUN_8c0570cc\n.set _FUN_8c0570cc, _FUN_8c0570cc_def\n");
