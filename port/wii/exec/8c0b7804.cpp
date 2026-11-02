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
undefined4 FUN_8c0b7804_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b7804");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  ((le<int>* )(fr0_ - 0xc))[0] = 0;
  (*(le<int>* )(fr0_ - 0x10)) = 0;
  uVar2 = 0x4208;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b7628))))
                    ((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42,0x8c431a68,0x4208,ar7))
  ;
  if (iVar1 == 1) {
    uVar2 = 0;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f826c(ar4,((le<int>* )(fr0_ - 0xc)),uVar2,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f826c(0x8c431a68 + 0x1e,&(*(le<int>* )(fr0_ - 0x10)),uVar2,ar7));
    if (((le<int>* )(fr0_ - 0xc))[0] == (*(le<int>* )(fr0_ - 0x10))) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

__asm__(".globl FUN_8c0b7804\n.set FUN_8c0b7804, FUN_8c0b7804_def\n");

}
