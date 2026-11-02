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
int FUN_8c02ee48_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02ee48");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int ar5_00;
  
  iVar4 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ef60(ar4,ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5,iVar4,ar7));
  ar5_00 = 0x65 - *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 0xc);
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar2,ar5_00,iVar4,ar7));
  if (ar6 - *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 0xc) < iVar3) {
    iVar4 = 0;
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), rand(uVar2,ar5_00,iVar4,ar7));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                      ((ar6 - *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 0xc)) *
                       *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 8),
                       *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 4),iVar4,ar7));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                      (uVar2,*(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 0x14),iVar4,ar7));
    iVar4 = *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 0x10) + iVar3 + iVar4;
  }
  return iVar4;
}

__asm__(".globl FUN_8c02ee48\n.set FUN_8c02ee48, FUN_8c02ee48_def\n");

}
