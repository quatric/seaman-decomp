#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01fab4_def(le<int>* ar4,le<int>* ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c01fab4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2048; for (int i_ = 0; i_ < 2048; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = ar4[4];
  iVar1 = ar4[5];
  if (iVar1 == 1) {
    ar4[5] = 2;
    ar4[6] = ar4[6] - 0x800;
    iVar2 = ar4[4];
    iVar1 = (vsp = ((unsigned long)(fr0_ - 2048)), s_E9040816_adxf_is_NULL_ADXF_R_26231a(*ar4,1,iVar2,ar7));
    if (iVar1 < 0) {
      (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c02049c(ar4,ar4[1],iVar2,ar7));
      iVar1 = 5;
      ar4[5] = 5;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 2048)), s_E9040832_adxf_is_NULL_ADXF_G_2626b4(*ar4,ar5,ar6,ar7));
    if (iVar1 == 3) {
      ar4[5] = 4;
      iVar1 = 0x800;
      if (0x800 < *(le<int>* )(unsigned)(iVar2 + 0x20)) {
        ar4[5] = 3;
        uVar3 = *(le<int>* )(unsigned)(iVar2 + 0x20) + 0xfffff800;
        ar4[6] = ar4[6] - uVar3;
        if (0x4b800 < uVar3) {
          (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c02049c(ar4,ar4[1],ar6,ar7));
          ar4[5] = 5;
        }
        iVar2 = ar4[4] + 0x800;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 2048)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c262312))))
                          (*ar4,uVar3 >> 0xb,iVar2,ar7));
        if (iVar1 < 0) {
          (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c02049c(ar4,ar4[1],iVar2,ar7));
          iVar1 = 5;
          ar4[5] = 5;
        }
      }
    }
    else if (iVar1 == 4) {
      (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c02049c(ar4,ar4[1],ar6,ar7));
      ar4[5] = 5;
      iVar1 = 5;
    }
  }
  else if (iVar1 == 3) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 2048)), s_E9040832_adxf_is_NULL_ADXF_G_2626b4(*ar4,ar5,ar6,ar7));
    if (iVar1 == 3) {
      ar4[5] = 4;
      iVar1 = 4;
    }
    else if (iVar1 == 4) {
      (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c02049c(ar4,ar4[1],ar6,ar7));
      ar4[5] = 5;
      iVar1 = 5;
    }
  }
  else {
    if (iVar1 == 4) {
      (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c01fc78(ar4,ar4[1],ar6,ar7));
      if (0 < ar4[6]) {
        ar4[5] = 1;
        return 1;
      }
      ar7 = ar4[1] + 0x10;
      (*(le<unsigned>* )((((unsigned long)(fr0_ - 2048)) - 8) + 0) = (unsigned)ar4[1] + 0x30, vsp = (((unsigned long)(fr0_ - 2048)) - 8), FUN_8c020600(ar4,*(le<undefined4>* )(unsigned)(uint)ar4[1],ar4 + 8,ar7));
      ar6 = ar4[1];
      ar5 = ar4 + 10;
      (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c0205e8(ar4,ar5,ar6,ar7));
      if (*ar4 != 0) {
        (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c262168(*ar4,ar5,ar6,ar7));
      }
      *ar4 = 0;
    }
    ar4[5] = 0;
    ar4[6] = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c02009c(ar4,ar5,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl FUN_8c01fab4\n.set FUN_8c01fab4, FUN_8c01fab4_def\n");

}
