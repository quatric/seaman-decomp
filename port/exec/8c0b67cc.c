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
undefined4 FUN_8c0b67cc_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b67cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 196; for (int i_ = 0; i_ < 196; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int *ar5_00;
  undefined4 uVar3;
  undefined4 *ar6_00;
  undefined1 *ar6_01;
  undefined1 *ar7_00;
  undefined1 *puVar4;
  uint in_fr1 = 0;
  double dVar5;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 196)), Vec3_ctor_zero(((uint *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  if (cVar8 == '\0') {
    in_fr15 = 50.0;
  }
  (vsp = ((unsigned long)(fr0_ - 196)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x3c)),ar5_00,ar6_00,ar7));
  if (cVar8 == '\0') {
    ((uint *)(fr0_ - 0x2c))[0] = 0;
  }
  else {
    ((uint *)(fr0_ - 0x2c))[3] = 0;
    ((uint *)(fr0_ - 0x2c))[0] = in_fr1;
  }
  dVar5 = (double)(ulonglong)in_fr1;
  ((uint *)(fr0_ - 0x2c))[2] = 0;
  ((uint *)(fr0_ - 0x2c))[1] = 0;
  ar7_00 = ((undefined1 *)(fr0_ - 0xc0));
  ar6_01 = ((undefined1 *)(fr0_ - 0xbc));
  puVar4 = ((undefined1 *)(fr0_ - 0xb8));
  (vsp = ((unsigned long)(fr0_ - 196)), FUN_8c03f414(*ar6,puVar4,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 196)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x48)),puVar4,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 196)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x64)),((undefined1 *)(fr0_ - 0x48)),ar6_01,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 196)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 196)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x64)),ar6_01,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 196)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x74)),ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 196)), object_dtor_delete(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_01,ar7_00));
  if (*(int *)(unsigned)(ar4 + 0x6c) == 0) {
    for (puVar4 = (undefined1 *)(unsigned)0x0; iVar2 = (vsp = ((unsigned long)(fr0_ - 196)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,1,ar6_01,ar7_00)),
        (int)puVar4 < iVar2; puVar4 = puVar4 + 1) {
      uVar3 = 1;
      ar6_01 = puVar4;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 196)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,1,puVar4,ar7_00));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 196)), get_field_6c_02f46c(uVar1,uVar3,ar6_01,ar7_00));
      if (iVar2 != 0) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 196)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 196)) - 8); FUN_8c02f670(*ar6,uVar3,ar6_01,ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 196)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 196)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(fr0_ - 0x58)),ar6_01,ar7_00); });
        uVar3 = 1;
        ar6_01 = puVar4;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 196)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,1,puVar4,ar7_00));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 196)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 196)) - 8); FUN_8c02f670(uVar1,uVar3,ar6_01,ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 196)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 196)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x94)),((undefined1 *)(fr0_ - 0xa4)),ar6_01,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 196)), Vec3_assign(((uint *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0xb4)),ar6_01,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_01,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6_01,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_01,ar7_00));
        uVar1 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_01,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 196)), Vec3_length_sq(((uint *)(fr0_ - 0x2c)),uVar1,ar6_01,ar7_00));
        if (cVar7 == '\0') {
          bVar6 = F32HI(dVar5) < in_fr15;
        }
        else {
          bVar6 = dVar5 < CONCAT44D(in_fr14,in_fr15);
        }
        if (bVar6) {
          uVar1 = (vsp = ((unsigned long)(fr0_ - 196)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,1,puVar4,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,puVar4,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), object_dtor_delete(((undefined1 *)(fr0_ - 0x48)),0xffffffff,puVar4,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,puVar4,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((uint *)(fr0_ - 0x2c)),0xffffffff,puVar4,ar7_00));
          return uVar1;
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 196)), object_dtor_delete(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((uint *)(fr0_ - 0x2c)),0xffffffff,ar6_01,ar7_00));
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x6c);
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 196)), object_dtor_delete(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((uint *)(fr0_ - 0x2c)),0xffffffff,ar6_01,ar7_00));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0b67cc\n.set _FUN_8c0b67cc, _FUN_8c0b67cc_def\n");
