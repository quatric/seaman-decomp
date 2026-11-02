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
undefined * FUN_8c1f64b6_def(int ar4,undefined4 ar5,int ar6,le<uint>* ar7)

{
  TRACE_ENTER("FUN_8c1f64b6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if ((*ar7 & 4) == 0) {
    uVar2 = 0xfffffffe;
  }
  else if (*(char *)(unsigned)(ar6 + 4) == '\a') {
    uVar2 = 0;
  }
  else if (*(char *)(unsigned)(ar6 + 4) == -4) {
    uVar2 = 0xfffffffd;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  iVar1 = (uint)(byte)(((undefined1 *)(unsigned)0x8c26c80c))[ar4] * 0xc;
  if (*(le<int>* )(unsigned)(iVar1 + -0x73b8d2b8) == 0) {
    return ((undefined1 *)(unsigned)0x8c26c80c);
  }
                    
                    
  uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((iVar1 + -0x73b8d2b8))))(uVar2,*(le<undefined4>* )(unsigned)(iVar1 + -0x73b8d2bc),vr6,vr7));
  return (undefined *)(unsigned)uVar2;
}

__asm__(".globl FUN_8c1f64b6\n.set FUN_8c1f64b6, FUN_8c1f64b6_def\n");

}
