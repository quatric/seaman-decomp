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
undefined4 pack_close_and_flush_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pack_close_and_flush");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022384(ar4 + 1,ar5,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01f780(0x8c3eb334,ar5,ar6,ar7));
    uVar2 = 1;
    if (iVar1 != 1) {
      if (-1 < *(le<int>* )(unsigned)(0x9ec94 + (int)ar4)) {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0228e4(ar4 + 1,*(le<undefined4>* )(unsigned)(0x9ec94 + (int)ar4),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022128(ar4,0x3e8,ar6,ar7));
        *(le<undefined4>* )(unsigned)(0x9ec94 + (int)ar4) = 0xffffffff;
      }
      for (iVar1 = 0; uVar2 = 3, iVar1 < 3; iVar1 = iVar1 + 1) {
        if (-1 < *(le<int>* )(unsigned)((int)ar4 + 0x9ec98 + iVar1 * 8)) {
          (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022894))))
                    (ar4 + 1,*(le<undefined4>* )(unsigned)((int)ar4 + 0x9ec98 + iVar1 * 8),
                     *(le<undefined4>* )(unsigned)((int)ar4 + 0x9ec9c + iVar1 * 8),
                     *(le<int>* )(unsigned)(0x9ec10 + (int)ar4) +
                     (*(le<uint>* )(unsigned)(*(le<int>* )(unsigned)((int)ar4 + 0x9ec9c + iVar1 * 8) * 0x28 +
                                *(le<int>* )(unsigned)(0x9ec0c + (int)ar4) + 0x20) & 0xfffffffe)));
          *(le<undefined4>* )(unsigned)((int)ar4 + 0x9ec98 + iVar1 * 8) = 0xffffffff;
        }
      }
    }
  }
  return uVar2;
}

__asm__(".globl pack_close_and_flush\n.set pack_close_and_flush, pack_close_and_flush_def\n");

}
