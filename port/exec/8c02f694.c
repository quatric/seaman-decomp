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
undefined4 FUN_8c02f694_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02f694";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  int *ar5_00;
  undefined4 uVar2;
  undefined4 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar3;
  undefined4 *a6;
  double in_dr0 = 0;
  double dVar4;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  bool bVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,ar7));
  if (cVar7 == '\0') {
    in_fr15 = 1e+07;
  }
  if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar4 + 0x6c),ar5_00,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x44)),ar5_00,ar6_00,ar7_00));
    if (cVar7 == '\0') {
      in_fr15 = F32HI(in_dr0);
    }
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7_00));
    uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x6c);
  }
  for (a6 = (undefined4 *)(unsigned)0x0; iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,ar7,ar6_00,ar7_00)),
      (int)a6 < iVar1; a6 = (undefined4 *)(unsigned)((int)a6 + 1)) {
    uVar2 = ar7;
    ar6_00 = a6;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,a6,ar7_00));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x114))))(iVar1,uVar2,ar6_00,ar7_00));
    if ((*(int *)(fr0_ + 0x00000000)) == iVar1) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c02f670(*ar6,uVar2,ar6_00,ar7_00); });
      uVar2 = ar7;
      ar6_00 = a6;
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,a6,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c02f670(ar4_00,uVar2,ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7_00));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x34)),uVar2,ar6_00,ar7_00));
      if (cVar6 == '\0') {
        bVar5 = F32HI(in_dr0) < in_fr15;
      }
      else {
        bVar5 = in_dr0 < CONCAT44D(in_fr14,in_fr15);
      }
      if (bVar5) {
        (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x34)),uVar2,ar6_00,ar7_00));
        dVar4 = in_dr0;
        if (cVar7 == '\0') {
          dVar4 = (double)((ulonglong)in_dr0 >> 0x20);
        }
        in_dr0 = (double)(D2U(dVar4) & 0xffffffff);
        if (SUB84(dVar4,0) != 0.0) {
          (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x34)),uVar2,ar6_00,ar7_00));
          if (cVar7 == '\0') {
            in_fr15 = F32HI(in_dr0);
          }
          ar6_00 = a6;
          uVar3 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,a6,ar7_00));
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7_00));
  return uVar3;
}

__asm__(".globl _FUN_8c02f694\n.set _FUN_8c02f694, _FUN_8c02f694_def\n");
