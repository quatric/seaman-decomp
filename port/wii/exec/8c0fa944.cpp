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
undefined4 FUN_8c0fa944_def(le<int>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fa944");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*ar4 == 1) {
    ar4[4] = ar5;
    uVar1 = ar6;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_SPEECH_0fae26(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      *(le<undefined4>* )(unsigned)(ar4[4] + 4) = ar6;
      *(le<undefined4>* )(unsigned)(ar4[4] + 8) = 0;
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x3c) + 4) = 0;
      *(undefined1 *)(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x3c) + 0x28) = 0;
      *(undefined1 *)(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x3c) + 0x2c) = 0;
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x40) + 0x70) = 0;
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x40) + 0x74) = 0;
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x40) + 0x78) = 0;
      *(le<undefined4>* )(unsigned)(0x880d4 + (int)ar4) = 0;
      *(le<undefined4>* )(unsigned)(0x880d8 + (int)ar4) = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c970(ar4[3],(int)ar4 + 0xc4,uVar1,ar7));
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c0fa944\n.set FUN_8c0fa944, FUN_8c0fa944_def\n");

}
