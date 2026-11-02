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
undefined4 FUN_8c1fdab0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fdab0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar6_00;
  undefined4 ar7_00;
  int iVar3;
  
  iVar3 = ar4 * 0x148;
  if (*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4783dc) + 8) == 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fdc80(ar4,ar5,ar6,ar7));
    return uVar1;
  }
  if ((((undefined1 *)(unsigned)0x8c4783e2))[iVar3] != '\0') {
    *(le<undefined4>* )(unsigned)(iVar3 + -0x73b87bf0) = 1;
    *(le<undefined4>* )(unsigned)(iVar3 + -0x73b87bec) =
         *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c273a78) + *(le<int>* )(unsigned)(iVar3 + -0x73b87c1c) * 0x50);
    ar6_00 = *(le<int>* )(unsigned)(iVar3 + -0x73b87bf0);
    ar7_00 = *(le<undefined4>* )(unsigned)(iVar3 + -0x73b87bec);
    *(le<int>* )(unsigned)(iVar3 + -0x73b87bf0) = ar6_00 + 1;
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fcdc2(ar4,*(le<undefined4>* )(unsigned)(ar4 * 0x80 + -0x73b8a038),ar6_00,ar7_00));
    uVar1 = *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar3);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fba98(ar4,uVar1,ar6_00,ar7_00));
    if (-1 < iVar2) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c200cf4(((undefined1 *)(unsigned)0x8c4783e0) + iVar3,uVar1,ar6_00,ar7_00));
      if (iVar2 < 0) {
        return 0xffffff83;
      }
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar3) + 0x30) =
           *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar3) + 0x1c);
      (((undefined1 *)(unsigned)0x8c4783e9))[iVar3] = 1;
      (((undefined1 *)(unsigned)0x8c4783e8))[iVar3] = 1;
      (((undefined1 *)(unsigned)0x8c4783ea))[iVar3] = 0;
      (((undefined1 *)(unsigned)0x8c4783eb))[iVar3] = 0;
      (((undefined1 *)(unsigned)0x8c4783ec))[iVar3] = 0;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c200a00(ar4,uVar1,ar6_00,ar7_00));
      return uVar1;
    }
    (((undefined1 *)(unsigned)0x8c4783e9))[iVar3] = 0;
    (((undefined1 *)(unsigned)0x8c4783e8))[iVar3] = 0;
  }
  return 0xffffff01;
}

__asm__(".globl FUN_8c1fdab0\n.set FUN_8c1fdab0, FUN_8c1fdab0_def\n");

}
