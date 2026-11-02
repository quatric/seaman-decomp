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
int FUN_8c200a00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200a00");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar2 = ar4 * 0x148 + 0x8c4783e0;
  *(le<undefined4>* )(unsigned)(0x8c478e20 + ar4 * 4) = 0;
  if ((*(char *)(unsigned)(iVar2 + 10) != '\0') || (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200642(ar4,ar5,ar6,ar7)), -1 < iVar1)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1ffcc2(ar4,ar5,ar6,ar7));
    if (-1 < iVar1) {
      if (((*(char *)(unsigned)(iVar2 + 0xb) == '\0') && (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200672(ar4,ar5,ar6,ar7)), iVar1 < 0))
         || ((*(char *)(unsigned)(iVar2 + 0xc) == '\0' && (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2001b8(ar4,ar5,ar6,ar7)), iVar1 < 0)))
         ) {
        if (iVar1 != 0xffff0000) {
          return iVar1;
        }
        *(le<undefined4>* )(unsigned)(0x8c478e20 + ar4 * 4) = 1;
      }
      else {
        *(undefined1 *)(unsigned)(iVar2 + 10) = 1;
        *(undefined1 *)(unsigned)(iVar2 + 0xb) = 1;
        *(undefined1 *)(unsigned)(iVar2 + 0xc) = 1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl FUN_8c200a00\n.set FUN_8c200a00, FUN_8c200a00_def\n");

}
