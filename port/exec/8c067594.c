#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_herb3_pvm_067598_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_herb3_pvm_067598";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  uint in_fr1 = 0;
  ulonglong uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c(uVar1,4,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x210) = uVar1;
  *(undefined4 *)(unsigned)(ar4 + 0x214) = 0x1ff;
  *(undefined4 *)(unsigned)(ar4 + 0x21c) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x220) = 0;
  if (cVar4 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x244) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x244) = (ulonglong)in_fr1;
  }
  for (iVar2 = 0; iVar2 < 9; iVar2 = iVar2 + 1) {
    *(undefined1 *)(unsigned)(ar4 + iVar2 + 0x248) = 0;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x230) = 0;
  if (cVar4 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x234) = (ulonglong)in_fr1;
  }
  if (cVar4 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x238) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x238) = (ulonglong)in_fr1;
  }
  if (cVar4 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x23c) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x23c) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
  if (cVar4 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x254) = (*(undefined4 *)(unsigned)(unsigned)0x8c136f2c);
    *(undefined4 *)(unsigned)(ar4 + 600) = (*(undefined1 *)(unsigned)0x8c136f30);
    *(undefined4 *)(unsigned)(ar4 + 0x25c) = (*(undefined1 *)(unsigned)0x8c136f34);
    uVar3 = CONCAT44((*(undefined1 *)(unsigned)0x8c136f38),in_fr1);
    *(undefined4 *)(unsigned)(ar4 + 0x260) = (*(undefined1 *)(unsigned)0x8c136f38);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x254) = CONCAT44((*(undefined1 *)(unsigned)0x8c136f30),(*(undefined4 *)(unsigned)(unsigned)0x8c136f2c));
    *(ulonglong *)(unsigned)(ar4 + 600) = CONCAT44((*(undefined1 *)(unsigned)0x8c136f34),(*(undefined1 *)(unsigned)0x8c136f30));
    *(ulonglong *)(unsigned)(ar4 + 0x25c) = CONCAT44((*(undefined1 *)(unsigned)0x8c136f38),(*(undefined1 *)(unsigned)0x8c136f34));
    uVar3 = CONCAT44((undefined4)(*(undefined1 *)(unsigned)0x8c136f3c),(*(undefined1 *)(unsigned)0x8c136f38));
    *(ulonglong *)(unsigned)(ar4 + 0x260) = uVar3;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c(*(undefined4 *)(unsigned)(ar4 + 0x210),4,ar6,ar7));
  *(int *)(unsigned)(ar4 + 0x228) = iVar2 * 3 + 2;
  if (cVar4 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x22c) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x22c) = uVar3 & 0xffffffff;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x224) = 0x8c2804f0;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c(*(undefined4 *)(unsigned)(ar4 + 0x210),4,ar6,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c280620) = (&(*(undefined4 *)(unsigned)(unsigned)0x8c136f54))[iVar2];
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c(*(undefined4 *)(unsigned)(ar4 + 0x210),4,ar6,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c280628) = (&(*(undefined4 *)(unsigned)(unsigned)0x8c136f68))[iVar2];
  *(unsigned *)0x8c280618 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c136f84));
  *(unsigned *)0x8c28061c = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c136fb8));
  (*(undefined4 *)(unsigned)(unsigned)0x8c280634) = (*(undefined4 *)(unsigned)(unsigned)0x8c136f78);
  (*(undefined4 *)(unsigned)(unsigned)0x8c280648) = (*(undefined4 *)(unsigned)(unsigned)0x8c136f7c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c280638) = 0x12;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28064c) = 0x16;
  (*(undefined4 *)(unsigned)(unsigned)0x8c280644) = 0x8c280738;
  (*(undefined4 *)(unsigned)(unsigned)0x8c280658) = 0x8c280810;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0f532c(ar4,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x224) + 0xb4),ar4 + 0x170,ar7));
  return uVar1;
}

__asm__(".globl _s_herb3_pvm_067598\n.set _s_herb3_pvm_067598, _s_herb3_pvm_067598_def\n");
