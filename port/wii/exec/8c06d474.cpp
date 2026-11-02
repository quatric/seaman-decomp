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
undefined4 s_GRAPHICS_HERBLINE_06d482_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  TRACE_ENTER("s_GRAPHICS_HERBLINE_06d482");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    iVar3 = *(le<int>* )(unsigned)(0x224 + ar4) + iVar2 * 0x124;
    for (iVar4 = 0; iVar4 < *(le<short>* )(unsigned)(0xa4 + iVar3); iVar4 = iVar4 + 1) {
      if (*((char *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar4 * 4 + *(le<int>* )(unsigned)(iVar3 + 4))) != '\0') {
        ar7 = ar4 + iVar2;
        ar6 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c136f4c));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020c60(ar5,*(le<undefined4>* )(unsigned)(iVar4 * 4 + *(le<int>* )(unsigned)(iVar3 + 4)),ar6,ar7));
      }
      if (*((char *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar4 * 4 + *(le<int>* )(unsigned)(iVar3 + 8))) != '\0') {
        ar7 = ar4 + iVar2;
        ar6 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c136f4c));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020d58(ar5,*(le<undefined4>* )(unsigned)(iVar4 * 4 + *(le<int>* )(unsigned)(iVar3 + 8)),ar6,ar7));
      }
    }
    if (*(le<int>* )(unsigned)(iVar3 + 0x18) != 0) {
      ar7 = ar4 + iVar2;
      ar6 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c136f4c));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020e48(ar5,*(le<undefined4>* )(unsigned)(iVar3 + 0x18),ar6,ar7));
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                    (*(le<undefined4>* )(unsigned)(0x210 + ar4),4,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,*(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c136f54)) + iVar2 * 4),*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c136f4c)),
             ar4 + 1));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c136f50)),*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c136f4c)),ar4));
  iVar2 = ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
            (ar5,*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c136f50)),*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c136f4c)),ar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xf0 + *(le<int>* )(unsigned)(ar4 + 8)))))(ar4,ar5,0,iVar2));
  return uVar1;
}

__asm__(".globl s_GRAPHICS_HERBLINE_06d482\n.set s_GRAPHICS_HERBLINE_06d482, s_GRAPHICS_HERBLINE_06d482_def\n");

}
