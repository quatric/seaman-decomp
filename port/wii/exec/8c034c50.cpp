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
le<undefined2>*  FUN_8c034c50_def(le<undefined2>* ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c034c50");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *ar4 = 0xffff;
  *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined *)(unsigned)((int)ar4 + iVar1 + 0xc) = (&(*(undefined1 *)(unsigned)0x8c132dd0))[iVar1 + ar6 * 0xf];
  }
  *(le<unsigned>* )(unsigned)(ar4 + 0xe) = (&(*(undefined1 *)(unsigned)0x8c133318)) + ar5 * 0x30;
  ar4[2] = 0xffff;
  *(undefined1 *)(unsigned)(ar4 + 1) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x10) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x12) = 0;
  for (iVar1 = 0; iVar1 < *(le<short>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + 2); iVar1 = iVar1 + 1) {
    if (((*(char *)(unsigned)((int)ar4 + iVar1 + 0xc) == '\0') &&
        (*(le<short>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + iVar1 * 4 + 4) + 4) == 0)) &&
       (*(le<short>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + iVar1 * 4 + 4) + 6) == 0)) {
      *(undefined1 *)(unsigned)((int)ar4 + iVar1 + 0xc) = 1;
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c034c50\n.set FUN_8c034c50, FUN_8c034c50_def\n");

}
