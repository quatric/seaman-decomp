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
uint FUN_8c1f8176_def(le<short>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f8176");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<uint>* puVar1;
  undefined4 uVar2;
  int a6;
  int a5;
  
  if ((*(le<undefined4>* )(unsigned)0x8c474a14 & 1) == 1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f84d8(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f8300(uVar2,ar4,ar6,ar7));
    *(le<undefined4>* )(unsigned)0x8c474a10 = uVar2;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f8300(*(le<undefined4>* )(unsigned)0x8c474a10,ar4,ar6,ar7));
  }
  a6 = (int)*(char *)(unsigned)((int)ar4 + 3);
  a5 = (int)(char)ar4[1];
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f8614((int)*ar4,a5,a6,ar7));
  *(char *)(unsigned)((int)ar4 + 7) = (char)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f8650(ar4,a5,a6,ar7));
  puVar1 = 0x8c474a14;
  *(char *)(unsigned)(ar4 + 4) = (char)uVar2;
  return *puVar1;
}

__asm__(".globl FUN_8c1f8176\n.set FUN_8c1f8176, FUN_8c1f8176_def\n");

}
