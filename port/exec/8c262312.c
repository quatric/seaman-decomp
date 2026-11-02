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
undefined4 s_E9040816_adxf_is_NULL_ADXF_R_26231a_def(int *ar4,int ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E9040816_adxf_is_NULL_ADXF_R_26231a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int *piVar1;
  undefined4 uVar2;
  uint ar4_00;
  int *ar4_01;
  undefined4 a5;
  int iVar3;
  int iVar4;
  int *a6;
  int ar7_00;
  
  a5 = 0;
  uVar2 = 4;
  piVar1 = ar4;
  ar7_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c261a4c(4,0,ar4,ar5));
  if ((ar4 == (int *)(unsigned)0x0) || (ar5 < 0)) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25ece6(uVar2,a5,piVar1,ar7_00));
  }
  else if (ar6 == 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25ece6(uVar2,a5,piVar1,ar7_00));
  }
  else {
    if ((ar6 & 0x1f) == 0) {
      if (*(char *)(unsigned)((int)ar4 + 1) == '\x02') {
        return 0;
      }
      if (ar4[2] != 0) {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25ece6(ar6,a5,piVar1,ar7_00));
        return 0xffffffff;
      }
      iVar3 = ar5 << 0xb;
      uVar2 = 0;
      ar4_00 = ar6;
      iVar4 = iVar3;
      piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c26b564(ar6,iVar3,0,ar7_00));
      if (piVar1 == (int *)(unsigned)0x0) {
        return 0xfffffffe;
      }
      ar4[10] = ar6;
      ar4[0xb] = iVar4;
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c4b4220) == 1) {
        iVar3 = ar4[0xb];
        ar4_00 = ar4[10];
        ({ unsigned long ri0_ = (unsigned long)(iVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c261786(ar4_00,iVar3,uVar2,ar7_00); });
      }
      ({ unsigned long ri0_ = (unsigned long)(iVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c260ca0(ar4_00,iVar3,uVar2,ar7_00); });
      ar4_01 = ar4;
      iVar4 = ar5;
      a6 = piVar1;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), s_E9040811_adxf_is_NULL_adxf_r_26220e(ar4,ar5,piVar1,ar7_00));
      if (iVar3 < 1) {
        (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar1 + 0xc))))(piVar1,iVar4,a6,ar7_00));
        ar4_01 = piVar1;
      }
      else {
        ar4[2] = (int)piVar1;
      }
      *(undefined1 *)(unsigned)((int)ar4 + 2) = 0;
      ({ unsigned long ri0_ = (unsigned long)(iVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c260cc8(ar4_01,iVar4,a6,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c261a4c(4,1,ar4,ar5));
      return iVar3;
    }
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25ece6(ar6,a5,piVar1,ar7_00));
  }
  return 0xfffffffd;
}

__asm__(".globl _s_E9040816_adxf_is_NULL_ADXF_R_26231a\n.set _s_E9040816_adxf_is_NULL_ADXF_R_26231a, _s_E9040816_adxf_is_NULL_ADXF_R_26231a_def\n");
