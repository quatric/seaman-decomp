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
undefined4 FUN_8c054a14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c054a14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double in_dr0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar3 = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x2f0) = 0xffffffff;
  if (*(int *)(unsigned)(ar4 + 300) == 0) {
    ar7 = 0;
    ar6 = 0xffffffff;
    uVar2 = 0x4e;
    (vsp = ((unsigned long)(fr0_ - 24)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x4e,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 24)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else {
    uVar2 = ar5;
    if (*(int *)(unsigned)(ar4 + 300) != 1) {
      return 1;
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c030eb8(ar4 + 0x1fc,uVar2,ar6,ar7));
    uVar3 = 0;
    *(undefined4 *)(unsigned)(ar4 + 300) = 0;
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,ar7); });
    (*(undefined8 *)(fr0_ - 0x14)) = in_dr0;
    if (cVar6 == '\0') {
      (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44D(iVar1,(int)((ulonglong)in_dr0 >> 0x20));
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x4e,ar6,ar7));
    uVar4 = SUB84(in_dr0,0);
    uVar2 = (vsp = ((unsigned long)(fr0_ - 24)), libgcc_divide_helper_0101e4(iVar1 + -1,6,ar6,ar7));
    if (cVar6 == '\0') {
      (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x14)),uVar4);
    }
    if (cVar5 == '\0') {
      iVar1 = (int)F32HI((*(undefined8 *)(fr0_ - 0x14)));
    }
    else {
      iVar1 = (int)(*(undefined8 *)(fr0_ - 0x14));
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), libgcc_divide_helper_01031c(iVar1,uVar2,ar6,ar7));
    if (iVar1 == 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 24)), rand_range(ar4,0x19,0x1b,ar7));
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c033474(ar4,uVar2,ar5,*(undefined4 *)(unsigned)(ar4 + 0x244)));
      iVar1 = *(int *)(unsigned)(ar4 + 0x280);
      *(int *)(unsigned)(ar4 + 0x280) = iVar1 + 1;
      *(int *)(unsigned)(ar4 + 0x2f0) = iVar1;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c054a14\n.set _FUN_8c054a14, _FUN_8c054a14_def\n");
