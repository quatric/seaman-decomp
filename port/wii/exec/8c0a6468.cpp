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
undefined4 Class_12b088_m1_0a6468_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b088_m1_0a6468");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 92; for (int i_ = 0; i_ < 92; i_++) z_[i_] = 0; }
  int iVar1;
  le<undefined4>* a5;
  undefined1 *ar6_00;
  undefined4 uVar2;
  
  a5 = ar5;
  (vsp = ((unsigned long)(fr0_ - 92)), Class_129cbc_m1_031598(ar4,ar5,ar6,ar7));
  uVar2 = 1;
  if ((*(le<int>* )(unsigned)(ar4 + 0x21a4) == 2) || (*(le<int>* )(unsigned)(ar4 + 0x2198) != 0)) {
    if (*(le<int>* )(unsigned)(ar4 + 0x2198) != 8) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 92)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(uint)ar5[6] + 0x1a8))))((le<int>* )(unsigned)(uint)ar5[6],a5,ar6,ar7));
      if ((iVar1 == 1) && (*(le<int>* )(unsigned)(ar4 + 0x124) != 4)) {
        ar7 = *(le<undefined4>* )(unsigned)(ar5[1] + 4);
        ar6 = ar5[6];
        (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c0aa70c(ar4,*(le<undefined4>* )(unsigned)(uint)ar5[1],ar6,ar7));
        goto LAB_8c0a64f8;
      }
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c0a6628(ar4,ar5,ar6,ar7));
    (*(le<undefined4>* )(fr0_ - 0x58)) = uVar2;
  }
  else {
    ar7 = *(le<undefined4>* )(unsigned)(ar5[1] + 4);
    ar6 = ar5[4];
    (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c0a99c4(ar4,*(le<undefined4>* )(unsigned)(uint)ar5[1],ar6,ar7));
  }
LAB_8c0a64f8:
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x58))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 92)); FUN_8c02f2c0(*ar5,uVar2,ar6,ar7); });
  if (*(le<int>* )(unsigned)(ar4 + 0x178) == 1) {
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x58))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 92)); FUN_8c02f2c0(*ar5,1,ar6,ar7); });
  }
  if ((*(le<int>* )(unsigned)(ar4 + 0x2198) == 0) && (*(le<int>* )(unsigned)(ar4 + 0x2198) != 8)) {
    (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c031ab4(ar4,*(le<undefined4>* )(unsigned)(ar5[1] + 4),ar6,ar7));
  }
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x20))); *(le<unsigned>* )((((unsigned long)(fr0_ - 92)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 92)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(le<unsigned>* )((((unsigned long)(fr0_ - 92)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 92)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x20)),ar4 + 0x90,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(le<unsigned>* )((((unsigned long)(fr0_ - 92)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 92)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x30)),ar4 + 0x6c,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_assign(ar4 + 4,((undefined1 *)(fr0_ - 0x40)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(le<unsigned>* )((((unsigned long)(fr0_ - 92)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 92)) - 8); FUN_8c03f480(*ar5,uVar2,ar6,ar7); });
  ar6_00 = ((undefined1 *)(fr0_ - 0x50));
  (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c03220c(ar4,ar5[1],ar6_00,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 92)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6_00,ar7));
  return uVar2;
}

__asm__(".globl Class_12b088_m1_0a6468\n.set Class_12b088_m1_0a6468, Class_12b088_m1_0a6468_def\n");

}
