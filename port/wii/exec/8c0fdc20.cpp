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
le<undefined4>*  FUN_8c0fdc20_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fdc20");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0xffffffff;
  iVar1 = 0;
  while (iVar2 = iVar1, iVar2 < 0x400) {
    *(undefined1 *)(unsigned)(ar4 + iVar2 + 4) = 0;
    (*(le<int>* )(fr0_ - 0x10)) = iVar2;
    iVar1 = iVar2 + 1;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); strcpy(ar4 + 0x2b,((undefined1 *)(unsigned)0x8c141e2a),ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); strcpy(ar4 + 0x2c,((undefined1 *)(unsigned)0x8c141e2c),ar6,ar7); });
  return ar4;
}

__asm__(".globl FUN_8c0fdc20\n.set FUN_8c0fdc20, FUN_8c0fdc20_def\n");

}
