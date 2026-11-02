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
undefined4 FUN_8c054d6c_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c054d6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int ar6_00;
  int ar7_00;
  undefined4 uVar3;
  undefined4 in_fr1 = 0;
  double dVar4;
  double in_dr14 = 0;
  bool bVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  iVar2 = ar6;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x2c)),ar6,ar6,ar7));
  if (cVar7 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x48));
    dVar4 = CONCAT44D(0x40200000,in_fr1);
  }
  else {
    dVar4 = 6.3713027236808e-312;
  }
  if (cVar6 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                               F32LO(in_dr14) * F32HI(dVar4));
  }
  else {
    in_dr14 = in_dr14 * dVar4;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    (vsp = ((unsigned long)(fr0_ - 48)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar2,ar6_00,ar7_00));
    if (*(int *)(unsigned)(ar4 + 0x128) < 3) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 2;
    }
    else if (ar7 == 1) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
    else {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 2;
    }
  }
  else if (iVar1 == 1) {
    ar6_00 = ar4 + 0x34c;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0564c4(ar4,ar5,ar6_00,ar7));
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
    ar7_00 = ar7;
    if ((*(int *)(unsigned)(ar4 + 0x2b8) == 2) && (*(int *)(unsigned)(ar4 + 0x21c) == 1)) {
      *(undefined4 *)(unsigned)(ar4 + 300) = 3;
    }
  }
  else if (iVar1 == 2) {
    ar6_00 = ar6;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), pure_virtual_stub(ar4,ar5,ar6,ar7_00));
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 300) = 3;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00));
      if (cVar6 == '\0') {
        bVar5 = F32HI(dVar4) < SUB84(in_dr14,0);
      }
      else {
        bVar5 = dVar4 < in_dr14;
      }
      if ((bVar5) && (*(int *)(unsigned)(ar4 + 0x304) == 1)) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 3;
      }
    }
    if (*(int *)(unsigned)(ar4 + 0x21c) == 1) {
      *(undefined4 *)(unsigned)(ar4 + 300) = 3;
    }
  }
  else if (iVar1 == 3) {
    uVar3 = 0;
    *(undefined4 *)(unsigned)(ar4 + 300) = 0;
    (vsp = ((unsigned long)(fr0_ - 48)), Vec3_assign(ar4 + 600,ar6,ar6_00,ar7_00));
    *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7_00));
  return uVar3;
}

__asm__(".globl _FUN_8c054d6c\n.set _FUN_8c054d6c, _FUN_8c054d6c_def\n");
