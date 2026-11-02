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
undefined4 FUN_8c0d4c74_def(float *ar4,undefined4 *ar5,int ar6,float ar7)

{
  ring[rp++ & 255] = "FUN_8c0d4c74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  int ar6_00;
  float ar7_00;
  int iVar3;
  float fVar4;
  undefined8 in_dr0 = 0;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar3 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  while( true ) {
    if (4 < iVar3) {
      if (ar6 == 3) {
        ((undefined4 *)(fr0_ - 0x20))[0] = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c02190c(0x8c2b59d0,ar5_00,ar6_00,ar7_00));
        ar6_00 = 8;
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0x20))[0],8,ar7_00));
        ar5_00 = ((undefined4 *)(fr0_ - 0x20));
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021a8c(0x8c2b59d0,ar5_00,ar6_00,ar7_00));
      }
      else if (ar6 == 1) {
        ((undefined4 *)(fr0_ - 0x20))[0] = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c02190c(0x8c2b59d0,ar5_00,ar6_00,ar7_00));
        ar6_00 = 0x11;
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0x20))[0],0x11,ar7_00));
        ar5_00 = ((undefined4 *)(fr0_ - 0x20));
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021a8c(0x8c2b59d0,ar5_00,ar6_00,ar7_00));
      }
      else if (ar6 == 2) {
        ((undefined4 *)(fr0_ - 0x20))[0] = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c02190c(0x8c2b59d0,ar5_00,ar6_00,ar7_00));
        ar6_00 = 7;
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0x20))[0],7,ar7_00));
        ar5_00 = ((undefined4 *)(fr0_ - 0x20));
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021a8c(0x8c2b59d0,ar5_00,ar6_00,ar7_00));
      }
      else if (ar6 == 4) {
        ((undefined4 *)(fr0_ - 0x20))[0] = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c02190c(0x8c2b59d0,ar5_00,ar6_00,ar7_00));
        ar6_00 = 0x13;
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0x20))[0],0x13,ar7_00));
        ar5_00 = ((undefined4 *)(fr0_ - 0x20));
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021a8c(0x8c2b59d0,ar5_00,ar6_00,ar7_00));
      }
      iVar3 = 0;
      while( true ) {
        if (4 < iVar3) {
          return 5;
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_40_0d3d64(ar4 + iVar3 * 0x11 + 0x11c,ar5_00,ar6_00,ar7_00));
        fVar4 = (float)in_dr0;
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 1;
      }
      (vsp = ((unsigned long)(fr0_ - 32)), Vec3_assign(ar4 + iVar3 * 0x11 + 0x11c,ar5,ar6_00,ar7_00));
      if (cVar6 == '\0') {
        fVar4 = *ar4;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)ar4;
      }
      if (cVar5 == '\0') {
        fVar4 = fVar4 - 1.0;
      }
      else {
        fVar4 = SUB84(CONCAT44D(0x3f800000,fVar4) - CONCAT44D(0x3f800000,fVar4),0);
      }
      if (cVar6 == '\0') {
        ar4[iVar3 * 0x11 + 0x11d] = fVar4;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + iVar3 * 0x11 + 0x11d) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0d20f0(ar4 + iVar3 * 0x11 + 0x11c,ar7,ar6,ar7_00));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0d4e7c(ar4 + iVar3 * 0x11 + 0x11c,ar7,ar6,ar7_00));
      return uVar2;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_40_0d3d64(ar4 + iVar3 * 0x11 + 0x11c,ar5_00,ar6_00,ar7_00));
    if ((iVar1 == 1) && (ar4[iVar3 * 0x11 + 0x126] == ar7)) break;
    iVar3 = iVar3 + 1;
  }
  return ar4[iVar3 * 0x11 + 0x126];
}

__asm__(".globl _FUN_8c0d4c74\n.set _FUN_8c0d4c74, _FUN_8c0d4c74_def\n");
