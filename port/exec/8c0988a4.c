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
undefined4 FUN_8c0988a4_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0988a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int *a6;
  float fVar2;
  ulonglong in_dr0 = 0;
  double dVar3;
  undefined8 in_xd0 = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
    if (cVar5 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0 & 0xffffffff;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x300) = 0;
    if (cVar5 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0xa0) = in_dr0 & 0xffffffff;
    }
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c314(ar4,ar5,ar6,ar7));
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 1;
    }
    a6 = ar6;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0324ac(ar4,ar5,ar6,ar7));
    iVar1 = ar5;
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x128))))(ar6,ar5,a6,ar7));
    if (cVar5 == '\0') {
      in_dr0 = CONCAT44((int)(in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar5 + 4));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar5 + 4);
    }
    if (cVar4 != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) {
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x300) = 0;
      if (cVar5 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xa0) = in_dr0 & 0xffffffff;
      }
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c073c9c(ar4,iVar1,a6,ar7));
      return 0;
    }
    if (cVar5 == '\0') {
      dVar3 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0xa0));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0xa0);
      dVar3 = 1.6066918270171573e+73;
    }
    if (cVar4 == '\0') {
      fVar2 = F32LO(dVar3) + F32HI(dVar3);
    }
    else {
      fVar2 = SUB84(dVar3 + dVar3,0);
    }
    if (cVar5 == '\0') {
      *(float *)(unsigned)(ar4 + 0xa0) = fVar2;
      return 1;
    }
    *(undefined8 *)(unsigned)(ar4 + 0xa0) = in_xd0;
    return 1;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x300);
  *(int *)(unsigned)(ar4 + 0x300) = iVar1 + 1;
  if (0x95 < iVar1 + 1) {
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c0988a4\n.set _FUN_8c0988a4, _FUN_8c0988a4_def\n");
