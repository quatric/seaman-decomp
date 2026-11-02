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
undefined4 FUN_8c256164_def(undefined4 ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c256164");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* a4;
  le<int>* ar5_00;
  int a5;
  
  a4 = (le<int>* )(unsigned)(fr0_ + (int)0xffffffdc);
  ar5_00 = ar5;
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c25b5b4(ar4,ar5,ar6,ar7); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c259be8(ar4,ar5_00,ar6,ar7));
  if (-1 < iVar1) {
    a5 = 4;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c259c48((fr0_ + (int)0xffffffdc),4,ar6,ar7));
    if (-1 < iVar1) {
      if ((*(le<int>* )(fr0_ - 0x24)) != 0x4c505650) {
        (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c259c40(a4,a5,ar6,ar7));
        return 0xffffffff;
      }
      a5 = 0xc;
      a4 = &(*(le<int>* )(fr0_ - 0x1c));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c259c48(a4,0xc,ar6,ar7));
      if (-1 < iVar1) {
        (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c255f88((int)(*(le<short>* )(fr0_ - 0x16)),a5,ar6,ar7));
        a5 = (*(le<int>* )(fr0_ - 0x1c)) + -8;
        a4 = (le<int>* )(unsigned)*ar5;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c259c48(a4,a5,ar6,ar7));
        if (-1 < iVar1) {
          *(le<short>* )(unsigned)((int)ar5 + 6) = (*(le<short>* )(fr0_ - 0x16));
          *(le<undefined2>* )(unsigned)(ar5 + 2) = (*(le<undefined2>* )(fr0_ - 0x14));
          *(le<undefined2>* )(unsigned)((int)ar5 + 10) = (*(le<undefined2>* )(fr0_ - 0x12));
          *(le<ushort>* )(unsigned)(ar5 + 1) = (ushort)(*(byte *)(fr0_ - 0x18));
          (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c259c40(a4,a5,ar6,ar7));
          return 1;
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c259c40(a4,a5,ar6,ar7));
  }
  return 0xffffffff;
}

__asm__(".globl FUN_8c256164\n.set FUN_8c256164, FUN_8c256164_def\n");

}
