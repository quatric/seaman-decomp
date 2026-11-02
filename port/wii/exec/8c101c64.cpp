#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c101c64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c101c64");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  byte bVar3;
  
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c101da0(ar4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0xb4 + ar4) = 0;
  *(undefined1 *)(unsigned)(0xb8 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xbc + ar4) = 0xa2be8;
  *(le<undefined4>* )(unsigned)(0xc4 + ar4) = 0;
  for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
    *(le<undefined4>* )(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x30) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x34) = 0;
    if (*(le<int>* )(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x38) != -1) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021ab4))))
                (0x8c2b59d0,*(le<undefined4>* )(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x38),ar6,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x38) = 0xffffffff;
    }
    *(le<undefined4>* )(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x3c) = 0;
  }
  bVar1 = false;
  while (!bVar1) {
    *(le<undefined4>* )(unsigned)(0x80 + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0x84 + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0x8c + ar4) = 0;
    bVar1 = true;
  }
  iVar2 = 0xb0;
  *(le<undefined4>* )(unsigned)(0xb0 + ar4) = 0;
  return iVar2;
}

__asm__(".globl FUN_8c101c64\n.set FUN_8c101c64, FUN_8c101c64_def\n");

}
