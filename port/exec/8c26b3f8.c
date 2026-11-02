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
undefined4 FUN_8c26b3f8_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26b3f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *a6;
  
  if ((ar6[1] < 1) || (*ar6 == 0)) {
    return in_r0;
  }
  a6 = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c26b1e0(ar4,ar5,ar6,ar7));
  if (ar5 == 0) {
    iVar2 = *(int *)(unsigned)(ar4 + 0x1c);
  }
  else if (ar5 == 1) {
    iVar2 = *(int *)(unsigned)(ar4 + 0x10) - ar6[1];
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    *(int *)(unsigned)(ar4 + 0x10) = iVar2;
    a6 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x18));
    piVar3 = (int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + ar6[1]);
    if ((int)a6 < (int)piVar3) {
      piVar3 = a6;
    }
    *(unsigned *)(unsigned)(ar4 + 0xc) = piVar3;
    if (iVar2 == *ar6 - *(int *)(unsigned)(ar4 + 0x14)) goto LAB_8c26b478;
    iVar2 = *(int *)(unsigned)(ar4 + 0x1c);
  }
  else {
    ar6[1] = 0;
    *ar6 = 0;
    iVar2 = *(int *)(unsigned)(ar4 + 0x1c);
  }
  if (iVar2 != 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x1c))))(*(undefined4 *)(unsigned)(ar4 + 0x20),0xfffffffd,a6,ar7));
  }
LAB_8c26b478:
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c26b1f8(ar4,uVar1,a6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c26b3f8\n.set _FUN_8c26b3f8, _FUN_8c26b3f8_def\n");
