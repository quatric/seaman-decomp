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
undefined4 FUN_8c0b9ed4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b9ed4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(unsigned)(ar4 + ar5 + 0x44) == '\0') {
    for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
      if (*(le<int>* )(unsigned)(ar4 + iVar2 * 4 + 0x30) == ar5) {
        return 0;
      }
    }
    iVar2 = ar4 + *(le<int>* )(unsigned)(ar4 + 0x40);
    *(char *)(unsigned)(iVar2 + 0x44) = *(char *)(unsigned)(iVar2 + 0x44) + '\x01';
    for (iVar2 = 4; 0 < iVar2; iVar2 = iVar2 + -1) {
      *(le<undefined4>* )(unsigned)(ar4 + iVar2 * 4 + 0x30) = *(le<undefined4>* )(unsigned)(ar4 + (iVar2 + -1) * 4 + 0x30);
    }
    *(le<int>* )(unsigned)(ar4 + 0x30) = ar5;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c0b9ed4\n.set FUN_8c0b9ed4, FUN_8c0b9ed4_def\n");

}
