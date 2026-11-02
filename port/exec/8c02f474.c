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
undefined4 FUN_8c02f474_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02f474";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int *ar5_00;
  undefined4 uVar3;
  undefined4 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar4;
  undefined4 *a6;
  uint in_fr1 = 0;
  double dVar5;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  double dVar6;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_zero(((uint *)(fr0_ - 0x30)),ar5,ar6,ar7));
  if (cVar9 == '\0') {
    in_fr15 = 1e+07;
    ((uint *)(fr0_ - 0x30))[0] = 0;
  }
  else {
    ((uint *)(fr0_ - 0x30))[3] = 0;
    ((uint *)(fr0_ - 0x30))[0] = in_fr1;
  }
  dVar5 = (double)(ulonglong)in_fr1;
  ((uint *)(fr0_ - 0x30))[2] = 0;
  ((uint *)(fr0_ - 0x30))[1] = 0;
  if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar4 + 0x6c),ar5_00,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x40)),ar5_00,ar6_00,ar7_00));
    if (cVar9 == '\0') {
      in_fr15 = F32HI(dVar5);
    }
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6_00,ar7_00));
    uVar4 = *(undefined4 *)(unsigned)(ar4 + 0x6c);
  }
  for (a6 = (undefined4 *)(unsigned)0x0; iVar2 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,ar7,ar6_00,ar7_00)),
      (int)a6 < iVar2; a6 = (undefined4 *)(unsigned)((int)a6 + 1)) {
    uVar3 = ar7;
    ar6_00 = a6;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,a6,ar7_00));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 116)), get_field_6c_02f46c(uVar1,uVar3,ar6_00,ar7_00));
    if (iVar2 != 0) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); FUN_8c02f670(*ar6,uVar3,ar6_00,ar7_00); });
      uVar3 = ar7;
      ar6_00 = a6;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,a6,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); FUN_8c02f670(uVar1,uVar3,ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x50)),((undefined1 *)(fr0_ - 0x60)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(((uint *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x70)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6_00,ar7_00));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length_sq(((uint *)(fr0_ - 0x30)),uVar3,ar6_00,ar7_00));
      if (cVar8 == '\0') {
        bVar7 = F32HI(dVar5) < in_fr15;
      }
      else {
        bVar7 = dVar5 < CONCAT44D(in_fr14,in_fr15);
      }
      if (bVar7) {
        (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length_sq(((uint *)(fr0_ - 0x30)),uVar3,ar6_00,ar7_00));
        dVar6 = dVar5;
        if (cVar9 == '\0') {
          dVar6 = (double)(D2U(dVar5) >> 0x20);
        }
        dVar5 = (double)(D2U(dVar6) & 0xffffffff);
        if (SUB84(dVar6,0) != 0.0) {
          (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length_sq(((uint *)(fr0_ - 0x30)),uVar3,ar6_00,ar7_00));
          if (cVar9 == '\0') {
            in_fr15 = F32HI(dVar5);
          }
          ar6_00 = a6;
          uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,a6,ar7_00));
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((uint *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7_00));
  return uVar4;
}

__asm__(".globl _FUN_8c02f474\n.set _FUN_8c02f474, _FUN_8c02f474_def\n");
