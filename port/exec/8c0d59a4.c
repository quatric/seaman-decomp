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
undefined4 FUN_8c0d59a4_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d59a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *ar4_00;
  int ar5_00;
  int ar6_00;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined8 in_dr0 = 0;
  double dVar8;
  float fVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  iVar5 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,ar7));
  iVar6 = 0;
  while ((iVar6 < 0x226 && (iVar5 < ar5))) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 88)), get_field_44_0d5ca0(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7));
    uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (iVar3 == 0) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 88)), get_field_164_0d5c94(ar6,ar5_00,ar6_00,ar7));
      if (iVar3 == 2) {
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d26ac(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d5c88(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c0d5c68(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 88)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x44)),ar6_00,ar7));
        ar5_00 = -1;
        ar4_00 = ((undefined1 *)(fr0_ - 0x44));
        (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(ar4_00,0xffffffff,ar6_00,ar7));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 88)), rand(ar4_00,ar5_00,ar6_00,ar7));
        if (cVar11 == '\0') {
          dVar8 = CONCAT44D(0x47000000,(float)iVar3);
        }
        else {
          dVar8 = 3.051758619676548e-05;
        }
        if (cVar10 == '\0') {
          fVar7 = F32LO(dVar8) / F32HI(dVar8);
        }
        else {
          fVar7 = SUB84(dVar8 / dVar8,0);
        }
        if (cVar11 == '\0') {
          fVar9 = 0.5;
        }
        else {
          fVar7 = 0.5;
          fVar9 = 183.0;
        }
        if (cVar10 != '\0' || fVar9 <= fVar7) {
          if (cVar11 == '\0') {
            in_dr0 = CONCAT44(*(undefined4 *)(unsigned)(ar6 + 0x158),fVar7);
          }
          else {
            in_dr0 = *(undefined8 *)(unsigned)(ar6 + 0x158);
          }
          (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d5c58(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7));
        }
        else {
          if (cVar11 == '\0') {
            in_dr0 = CONCAT44(*(undefined4 *)(unsigned)(ar6 + 0x158),fVar7);
          }
          else {
            in_dr0 = *(undefined8 *)(unsigned)(ar6 + 0x158);
          }
          (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d5c58(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7));
        }
        iVar5 = iVar5 + 1;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d26f0(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c0d5c68(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0x54)),ar6 + 4,ar6_00,ar7));
        if (cVar11 == '\0') {
          in_dr0 = CONCAT44(*(undefined4 *)(unsigned)(ar6 + 0x158),uVar4);
        }
        else {
          in_dr0 = *(undefined8 *)(unsigned)(ar6 + 0x158);
        }
        bVar1 = cVar10 != '\0';
        fVar7 = (float)in_dr0;
        uVar2 = (ulonglong)in_dr0 >> 0x20;
        ar5_00 = -1;
        (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
        if (bVar1 || (float)uVar2 <= fVar7) {
          (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d276c(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d5c88(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7));
          iVar5 = iVar5 + 1;
        }
      }
    }
    iVar6 = iVar6 + 1;
  }
  uVar4 = (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c0d59a4\n.set _FUN_8c0d59a4, _FUN_8c0d59a4_def\n");
