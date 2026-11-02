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
undefined4 FUN_8c20a52c_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a52c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  le<int>* piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(le<undefined4>* )(unsigned)0x8c4a9be4 == 1) {
    iVar4 = *(le<undefined4>* )(unsigned)0x8c4a9e70;
    iVar3 = *(le<undefined4>* )(unsigned)0x8c4a9be8;
    *(le<undefined4>* )(unsigned)0x8c4a9dc4 = *(le<undefined4>* )(unsigned)0x8c4a9dc4 + iVar3 * iVar4 * -8;
    *(le<undefined4>* )(unsigned)0x8c4a9dc8 = *(le<undefined4>* )(unsigned)0x8c4a9dc8 + iVar3 * iVar4 * -8;
  }
  if (ar4 == 0) {
    *(le<undefined4>* )(unsigned)0x8c4a9be8 = 0;
  }
  else if (ar4 == 1) {
    if (((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 1) == 1) || ((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 0x20) != 0)) {
      *(le<undefined4>* )(unsigned)0x8c4a9be8 = 0x10;
    }
    else {
      *(le<undefined4>* )(unsigned)0x8c4a9be8 = 8;
    }
    iVar3 = *(le<undefined4>* )(unsigned)0x8c4a9be8 * *(le<undefined4>* )(unsigned)0x8c4a9e70 * 8;
    *(le<undefined4>* )(unsigned)0x8c4a9dc4 = *(le<undefined4>* )(unsigned)0x8c4a9dc4 + iVar3;
    *(le<undefined4>* )(unsigned)0x8c4a9dc8 = iVar3 + *(le<undefined4>* )(unsigned)0x8c4a9dc8;
  }
  uVar6 = *(le<undefined4>* )(unsigned)0x8c4a9e6c & 0xfff003ff;
  piVar2 = 0x8c4a9be8;
  if (*(le<undefined4>* )(unsigned)0x8c4a9be8 < *(le<undefined4>* )(unsigned)0x8c4a9c00) {
    piVar2 = 0x8c4a9c00;
  }
  uVar5 = *(le<undefined4>* )(unsigned)0x8c4a9bf0 - *piVar2;
  if (*(le<undefined4>* )(unsigned)0x8c4a9bf0 < *(le<undefined4>* )(unsigned)0x8c4a9c00 + uVar5) {
    uVar5 = *(le<undefined4>* )(unsigned)0x8c4a9bf0 - *(le<undefined4>* )(unsigned)0x8c4a9be8;
  }
  if (*(le<undefined4>* )(unsigned)0x8c4a9bf0 < uVar5) {
    *(le<undefined4>* )(unsigned)0x8c4a9bf0 = uVar5;
  }
  *(le<undefined4>* )(unsigned)0x8c4a9e6c = (uVar5 & (int)0x3ff) << 10 | uVar6;
  puVar1 = ((void *)(unsigned)0x8c20a844);
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x44,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(0x5c,*(le<undefined4>* )(unsigned)0x8c4a9e6c,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(0x44,*(le<undefined4>* )(unsigned)0x8c4a9e74,ar6,ar7));
  *(le<undefined4>* )(unsigned)0x8c4a9be4 = ar4;
  if (ar5 != (le<int>* )(unsigned)0x0) {
    *ar5 = *(le<undefined4>* )(unsigned)0x8c4a9be8;
  }
  return 0;
}

__asm__(".globl FUN_8c20a52c\n.set FUN_8c20a52c, FUN_8c20a52c_def\n");

}
