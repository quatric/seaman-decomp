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
undefined4 FUN_8c26b7f4_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26b7f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *a6;
  
  if ((ar6[1] < 1) || (*ar6 == 0)) {
    return ain0;
  }
  a6 = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c26b4f4(ar4,ar5,ar6,ar7));
  if (ar5 == 0) {
    iVar3 = *(int *)(unsigned)(ar4 + 0x20);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010614((*(int *)(unsigned)(ar4 + 0x14) + iVar3) - ar6[1],iVar3,vr6,vr7));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010614(*ar6 - *(int *)(unsigned)(ar4 + 0x1c),iVar3,vr6,vr7));
    if (iVar2 == iVar3) {
      *(int *)(unsigned)(ar4 + 0x14) = iVar2;
      *(int *)(unsigned)(ar4 + 0x10) = *(int *)(unsigned)(ar4 + 0x10) + ar6[1];
      goto LAB_8c26b8b0;
    }
    iVar2 = *(int *)(unsigned)(ar4 + 0x28);
  }
  else if (ar5 == 1) {
    iVar3 = *(int *)(unsigned)(ar4 + 0x20);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010614((*(int *)(unsigned)(ar4 + 0x18) + iVar3) - ar6[1],iVar3,vr6,vr7));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010614(*ar6 - *(int *)(unsigned)(ar4 + 0x1c),iVar3,vr6,vr7));
    if (iVar2 == iVar3) {
      *(int *)(unsigned)(ar4 + 0x18) = iVar2;
      *(int *)(unsigned)(ar4 + 0xc) = *(int *)(unsigned)(ar4 + 0xc) + ar6[1];
      goto LAB_8c26b8b0;
    }
    iVar2 = *(int *)(unsigned)(ar4 + 0x28);
  }
  else {
    ar6[1] = 0;
    *ar6 = 0;
    iVar2 = *(int *)(unsigned)(ar4 + 0x28);
  }
  if (iVar2 != 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x28))))(*(undefined4 *)(unsigned)(ar4 + 0x2c),0xfffffffd,a6,ar7));
  }
LAB_8c26b8b0:
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c26b50c(ar4,uVar1,a6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c26b7f4\n.set _FUN_8c26b7f4, _FUN_8c26b7f4_def\n");
