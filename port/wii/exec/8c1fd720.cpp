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
int FUN_8c1fd720_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fd720");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(le<undefined4>* )(unsigned)0x8c4783dc;
  if (ar4 == 0xf) {
    *(le<undefined4>* )(unsigned)(iVar2 + 4) = 0;
  }
  else {
    if (ar4 == 0x21) {
      uVar1 = 1;
    }
    else {
      if (ar4 == 0x41) {
        *(le<undefined4>* )(unsigned)(iVar2 + 4) = 2;
        return 0;
      }
      if (ar4 != 0x7a) {
        return (int)(int)0xffffff00;
      }
      uVar1 = 3;
    }
    *(le<undefined4>* )(unsigned)(iVar2 + 4) = uVar1;
  }
  return 0;
}

__asm__(".globl FUN_8c1fd720\n.set FUN_8c1fd720, FUN_8c1fd720_def\n");

}
