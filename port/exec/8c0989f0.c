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
int FUN_8c0989f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0989f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  undefined8 in_dr0 = 0;
  char cVar4;
  
  cVar4 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7));
    if (iVar1 == 1) {
      uVar3 = 100;
      uVar2 = 0;
      (*(int *)(fr0_ - 0x10)) = (vsp = ((unsigned long)(fr0_ - 28)), rand_range(ar4,0,100,ar7));
      if ((*(int *)(fr0_ - 0x10)) < 0x3c) {
        (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c032ab0(ar4,uVar2,uVar3,ar7));
        iVar1 = (int)((ulonglong)in_dr0 >> 0x20);
        (*(int *)(fr0_ - 0x14)) = iVar1;
        if (cVar4 != '\0') {
          (*(int *)(fr0_ - 0x14)) = (int)in_dr0;
          (*(int *)(fr0_ - 0x10)) = iVar1;
        }
        iVar1 = 0x14;
        if (cVar4 == '\0') {
          *(int *)(unsigned)(ar4 + 0x304) = (*(int *)(fr0_ - 0x14));
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x304) = CONCAT44((*(int *)(fr0_ - 0x10)),(*(int *)(fr0_ - 0x14)));
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c032ab0(ar4,uVar2,uVar3,ar7));
        uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
        (*(undefined4 *)(fr0_ - 0x18)) = uVar2;
        if (cVar4 != '\0') {
          (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)in_dr0;
          (*(int *)(fr0_ - 0x14)) = uVar2;
        }
        iVar1 = 0x10;
        if (cVar4 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x304) = (*(undefined4 *)(fr0_ - 0x18));
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x304) = CONCAT44((*(int *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
        }
      }
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7));
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), rand_range(ar4,0,100,ar7));
      if (iVar1 < 0x50) {
        ar7_00 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 1;
        (vsp = ((unsigned long)(fr0_ - 28)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c032ab0(ar4,uVar2,uVar3,ar7_00));
        if (cVar4 == '\0') {
          *(int *)(unsigned)(ar4 + 0x304) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x304) = in_dr0;
        }
      }
      else {
        ar7_00 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 7;
        (vsp = ((unsigned long)(fr0_ - 28)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c032ab0(ar4,uVar2,uVar3,ar7_00));
        if (cVar4 == '\0') {
          *(int *)(unsigned)(ar4 + 0x304) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x304) = in_dr0;
        }
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7_00));
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0989f0\n.set _FUN_8c0989f0, _FUN_8c0989f0_def\n");
