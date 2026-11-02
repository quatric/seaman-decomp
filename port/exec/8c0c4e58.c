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
undefined4 FUN_8c0c4e58_def(undefined4 ar4,int ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0c4e58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int a4;
  int iVar3;
  uint ar6_00;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined1 *a5;
  
  iVar2 = ar5;
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_d0_0c51fc(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),iVar2,ar6_00,ar7));
  piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar1 * 4 + ar5));
  uVar6 = ar6;
  (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar5 + 0x78))))(piVar5,ar6,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c51c4(ar4,uVar6,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1006bc(ar4,uVar6,ar6_00,ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c100694(ar4,uVar6,ar6_00,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0637d0(ar4,uVar6,ar6_00,ar7));
    if (iVar2 == 0) {
      uVar6 = 3;
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c51b8(ar4,3,ar6_00,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0637d0(ar4,uVar6,ar6_00,ar7));
      if (iVar2 == 0) {
        uVar6 = 0;
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c51a0(ar4,0,ar6_00,ar7));
      }
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_24_05c284(iVar2,uVar6,ar6_00,ar7));
      if (iVar2 == 0xd) {
        uVar6 = 1;
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c51b8(ar4,1,ar6_00,ar7));
      }
      else {
        uVar6 = 3;
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c51b8(ar4,3,ar6_00,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0637d0(ar4,uVar6,ar6_00,ar7));
        if (iVar2 == 0) {
          uVar6 = 0;
          (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c51a0(ar4,0,ar6_00,ar7));
        }
      }
    }
  }
  else if (iVar1 == 3) {
    if ((ar6 & 0xff) == 0) {
      uVar6 = 0;
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c51b8(ar4,0,ar6_00,ar7));
    }
    else {
      uVar6 = 1;
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c51b8(ar4,1,ar6_00,ar7));
    }
  }
  else if (iVar1 == 1) {
    if (((ar6 & 0xff) == 1) || ((ar6 & 0xff) == 2)) {
      uVar6 = 0;
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c51b8(ar4,0,ar6_00,ar7));
    }
    else if ((ar6 & 0xff) == 3) {
      uVar6 = 2;
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c51b8(ar4,2,ar6_00,ar7));
    }
  }
  else if (iVar1 == 2) {
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c100694(ar4,uVar6,ar6_00,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0637d0(ar4,uVar6,ar6_00,ar7));
    if (iVar2 == 0) {
      uVar6 = 3;
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c51b8(ar4,3,ar6_00,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0637d0(ar4,uVar6,ar6_00,ar7));
      if (iVar2 == 0) {
        uVar6 = 0;
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c51a0(ar4,0,ar6_00,ar7));
      }
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_24_05c284(iVar2,uVar6,ar6_00,ar7));
      if (iVar2 == 0xd) {
        uVar6 = 1;
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c51b8(ar4,1,ar6_00,ar7));
      }
      else {
        uVar6 = 3;
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c51b8(ar4,3,ar6_00,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0637d0(ar4,uVar6,ar6_00,ar7));
        if (iVar2 == 0) {
          uVar6 = 0;
          (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c51a0(ar4,0,ar6_00,ar7));
        }
      }
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_d0_0c51fc(ar4,uVar6,ar6_00,ar7));
  piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar2 * 4 + ar5));
  uVar6 = ar6;
  (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar5 + 0x70))))(piVar5,ar6,ar6_00,ar7));
  a4 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0637d0(ar4,uVar6,ar6_00,ar7));
  if ((a4 != 0) &&
     (iVar3 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_d0_0c51fc(ar4,uVar6,ar6_00,ar7)), iVar3 != 3)) {
    ar6_00 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_d0_0c51fc(ar4,uVar6,ar6_00,ar7));
    a5 = ((undefined1 *)(fr0_ - 0x2c));
    (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x150 + *(int *)(unsigned)(a4 + 8)))))(a4,a5,ar6_00,ar7));
    piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar2 * 4 + ar5));
    (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xa0 + *piVar5))))(piVar5,a5,ar6_00,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c021720(0x8c2b59d0,1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0d1c20))))
            (*(undefined4 *)(unsigned)(iVar1 * 4 + ar5),*(undefined4 *)(unsigned)(iVar2 * 4 + ar5),ar6,ar7));
  uVar4 = (vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c0c4e58\n.set _FUN_8c0c4e58, _FUN_8c0c4e58_def\n");
