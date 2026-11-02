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
int Class_12b2ac_m5_0afddc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b2ac_m5_0afddc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 in_dr0 = 0;
  char cVar4;
  
  cVar4 = '\0';
  if (*(int *)(unsigned)(ar4 + 300) == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_10_031590(ar4 + 0xb0,ar5,ar6,ar7));
    uVar3 = 0;
    uVar2 = 0xffffffff;
    ar5_00 = iVar1 + -1;
    (vsp = ((unsigned long)(fr0_ - 32)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_00,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 32)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,uVar2,uVar3));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c032ab0(ar4,ar5_00,uVar2,uVar3));
    (*(undefined8 *)(fr0_ - 0x10)) = in_dr0;
    if (cVar4 == '\0') {
      (*(undefined8 *)(fr0_ - 0x10)) = CONCAT44(iVar1,(int)((ulonglong)in_dr0 >> 0x20));
    }
    iVar1 = 0x1c;
    if (cVar4 == '\0') {
      *(int *)(unsigned)(ar4 + 0x34c) = (int)(*(undefined8 *)(fr0_ - 0x10));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x34c) = (*(undefined8 *)(fr0_ - 0x10));
    }
  }
  else if (*(int *)(unsigned)(ar4 + 300) == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5,ar6,ar7));
    if (iVar1 == 7) {
      uVar3 = 100;
      uVar2 = 0;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), rand_range(ar4,0,100,ar7));
      if (iVar1 < 0x1f) {
        iVar1 = 300;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c032ab0(ar4,uVar2,uVar3,ar7));
        (*(undefined8 *)(fr0_ - 0x1c)) = in_dr0;
        if (cVar4 == '\0') {
          (*(undefined8 *)(fr0_ - 0x1c)) = CONCAT44(iVar1,(int)((ulonglong)in_dr0 >> 0x20));
        }
        iVar1 = 0x10;
        if (cVar4 == '\0') {
          *(int *)(unsigned)(ar4 + 0x34c) = (int)(*(undefined8 *)(fr0_ - 0x1c));
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x34c) = (*(undefined8 *)(fr0_ - 0x1c));
        }
      }
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7));
    if (iVar1 == 1) {
      iVar1 = 300;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + -1;
    }
  }
  return iVar1;
}

__asm__(".globl _Class_12b2ac_m5_0afddc\n.set _Class_12b2ac_m5_0afddc, _Class_12b2ac_m5_0afddc_def\n");
