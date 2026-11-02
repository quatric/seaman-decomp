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
undefined4 FUN_8c1fdbaa_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fdbaa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int ar6_00;
  undefined4 ar7_00;
  int iVar3;
  
  iVar3 = ar4 * 0x148;
  *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar3) = ar4 * 0x4c + -0x73b831c0;
  *(le<undefined4>* )(unsigned)(iVar3 + -0x73b87bf0) = 1;
  *(le<undefined4>* )(unsigned)(iVar3 + -0x73b87bec) =
       *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c273abc) + *(le<int>* )(unsigned)(iVar3 + -0x73b87c1c) * 0x50);
  ar7_00 = *(le<undefined4>* )(unsigned)(iVar3 + -0x73b87bec);
  ar6_00 = *(le<int>* )(unsigned)(iVar3 + -0x73b87bf0);
  *(le<int>* )(unsigned)(iVar3 + -0x73b87bf0) = ar6_00 + 1;
  (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fcdc2(ar4,*(le<undefined4>* )(unsigned)(ar4 * 0x80 + -0x73b8a038),ar6_00,ar7_00));
  uVar2 = *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar3);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fba98(ar4,uVar2,ar6_00,ar7_00));
  if (iVar1 < 0) {
    (((undefined1 *)(unsigned)0x8c4783e9))[iVar3] = 0;
    (((undefined1 *)(unsigned)0x8c4783e8))[iVar3] = 0;
LAB_8c1fdc3a:
    uVar2 = 0xffffff01;
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c200cf4(((undefined1 *)(unsigned)0x8c4783e0) + iVar3,uVar2,ar6_00,ar7_00));
    if (-1 < iVar1) {
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar3) + 0x30) =
           *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar3) + 0x1c);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd1e2(ar4,0,0x8c47e4ec,ar7_00));
      if (iVar1 < 0) goto LAB_8c1fdc3a;
      (((undefined1 *)(unsigned)0x8c4783e9))[iVar3] = 1;
      (((undefined1 *)(unsigned)0x8c4783ea))[iVar3] = 0;
      (((undefined1 *)(unsigned)0x8c4783eb))[iVar3] = 0;
      (((undefined1 *)(unsigned)0x8c4783ec))[iVar3] = 0;
      iVar1 = *(le<int>* )(unsigned)(iVar3 + -0x73b87c1c);
      if (iVar1 == 0) {
        return 0xf;
      }
      if (iVar1 == 1) {
        return 0x21;
      }
      if (iVar1 == 2) {
        return 0x41;
      }
      if (iVar1 == 3) {
        return 0x7a;
      }
    }
    uVar2 = 0xffffff83;
  }
  return uVar2;
}

__asm__(".globl FUN_8c1fdbaa\n.set FUN_8c1fdbaa, FUN_8c1fdbaa_def\n");

}
