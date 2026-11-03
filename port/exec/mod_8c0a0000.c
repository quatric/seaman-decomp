//@unit 8c0a0040
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
int FUN_8c0a0040_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a0040";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar6_00;
  
  if (*(int *)(unsigned)(ar4 + 0x3c) == 0) {
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0a0184(ar4,ar5,ar6,ar7));
    *(int *)(unsigned)(ar4 + 0xc) = *(int *)(unsigned)(ar4 + 0xc) + 1;
    (*(int *)(fr0_ - 0x1c)) = *(int *)(unsigned)(ar4 + 0xc);
    *(undefined4 *)(unsigned)(ar4 + 0x40) =
         *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13adfc) + (*(int *)(fr0_ - 0x1c)) * 4 + *(int *)(unsigned)(ar4 + 4) * 0xc);
    if ((*(int *)(unsigned)(ar4 + 0x40) == 0xf) || (*(int *)(unsigned)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,0,ar6_00,ar7); });
      ar6 = ar6_00;
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,3,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0a00f8(ar4,ar5,ar6,ar7));
    }
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x3c);
  if (iVar1 == 2) {
    iVar1 = ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,2,ar6,ar7); });
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0a0040\n.set _FUN_8c0a0040, _FUN_8c0a0040_def\n");
//@unit 8c0a00f8
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
int FUN_8c0a00f8_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a00f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  int ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  if ((*(int *)(unsigned)(ar4 + 0x38) == 2) && (*(int *)(unsigned)(ar4 + 0x6c) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(int *)(unsigned)(ar4 + 0x6c),ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 3) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0a0278(ar4,ar5,ar6_00,ar7));
  }
  else if ((((iVar1 != 6) && (iVar1 == 10)) &&
           (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(*(undefined4 *)(unsigned)(ar6 + 4),ar5_00,ar6_00,ar7)),
           iVar1 != 0)) && (iVar1 == 1)) {
    iVar1 = 0x40;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0xe;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0a00f8\n.set _FUN_8c0a00f8, _FUN_8c0a00f8_def\n");
//@unit 8c0a0184
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
undefined * FUN_8c0a0184_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a0184";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(unsigned)(ar4 + 0x40);
  puVar1 = (undefined *)(unsigned)0xc;
  if ((iVar2 < 0xd) && (puVar1 = (undefined *)(unsigned)0x5, 4 < iVar2)) {
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c0a01a4))[iVar2 + -5];
                    
    switch(iVar2) {
    case 5:
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 2;
      *(undefined4 *)(unsigned)(ar4 + 4) = 0;
      puVar1 = (undefined *)(unsigned)0x1e;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x1e;
      break;
    case 8:
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 2;
      *(undefined4 *)(unsigned)(ar4 + 4) = 0;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x1e;
      puVar1 = (undefined *)(unsigned)0x9c;
      *(int *)(unsigned)(ar4 + 0x9c) = *(int *)(unsigned)(ar4 + 0x9c) + 1;
      break;
    case 9:
      *(int *)(unsigned)(ar4 + 0xc) = *(int *)(unsigned)(ar4 + 0xc) + -1;
      puVar1 = (undefined *)(unsigned)0xf;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0xf;
      break;
    case 0xc:
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 2;
      puVar1 = (undefined *)(unsigned)0xf;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0xf;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0a0184\n.set _FUN_8c0a0184, _FUN_8c0a0184_def\n");
//@unit 8c0a0224
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
undefined4 * FUN_8c0a0224_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a0224";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  
  if (*(int *)(unsigned)(ar4 + 4) == 2) {
    (vsp = ((unsigned long)(fr0_ - 0)), get_field_8_066620(ar4,ar5,ar6,ar7));
    puVar1 = ((undefined4 *)(unsigned)0x8c0a0270);
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), get_field_8_066620(ar4,ar5,ar6,ar7));
    puVar1 = ((undefined4 *)(unsigned)0x8c0a0274);
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0a0224\n.set _FUN_8c0a0224, _FUN_8c0a0224_def\n");
//@unit 8c0a0278
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
undefined4 FUN_8c0a0278_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a0278";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 220; for (int i_ = 0; i_ < 220; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *ar5_00;
  undefined4 uVar4;
  undefined4 *a6;
  undefined1 *ar6_00;
  undefined4 *a7;
  undefined4 *puVar5;
  float fVar6;
  ulonglong in_dr0 = 0;
  double dVar7;
  float fVar9;
  double dVar8;
  undefined4 in_fr3 = 0;
  undefined4 uVar10;
  undefined8 in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  a7 = &(*(undefined4 *)(fr0_ - 0x84));
  a6 = &(*(undefined4 *)(fr0_ - 0x80));
  puVar5 = &(*(undefined4 *)(fr0_ - 0x7c));
  (vsp = ((unsigned long)(fr0_ - 220)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x120))))(ar5,puVar5,a6,a7));
  iVar2 = ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 220)), get_field_4_05eed8(ar4,puVar5,a6,a7));
  if (iVar1 != 1) {
    if (iVar1 == 8) {
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x7c)),in_fr3);
        dVar7 = CONCAT44D(0x3dcccccd,(*(undefined4 *)(fr0_ - 0x7c)));
      }
      else {
        dVar8 = CONCAT44D(((undefined4 *)(fr0_ - 0x78))[0],(*(undefined4 *)(fr0_ - 0x7c)));
        dVar7 = 1.3411048210842936e-08;
      }
      if (cVar11 == '\0') {
        dVar8 = CONCAT44D(F32HI(dVar8) -
                                 F32LO(dVar7) * F32HI(dVar7),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 - dVar7 * dVar7;
      }
      (*(undefined4 *)(fr0_ - 0x7c)) = SUB84(dVar8,0);
      uVar3 = (undefined4)(D2U(dVar8) >> 0x20);
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x80)),(*(undefined4 *)(fr0_ - 0x7c)));
        dVar7 = CONCAT44D(0x3e4ccccd,(*(undefined4 *)(fr0_ - 0x80)));
        (*(undefined4 *)(fr0_ - 0x7c)) = uVar3;
      }
      else {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x7c)),(*(undefined4 *)(fr0_ - 0x80)));
        dVar7 = -7.532505548438758e-251;
        ((undefined4 *)(fr0_ - 0x78))[0] = uVar3;
      }
      if (cVar11 == '\0') {
        dVar8 = CONCAT44D(F32HI(dVar8) -
                                 F32LO(dVar7) * F32HI(dVar7),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 - dVar7 * dVar7;
      }
      (*(undefined4 *)(fr0_ - 0x80)) = SUB84(dVar8,0);
      uVar3 = (undefined4)(D2U(dVar8) >> 0x20);
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x84)),(*(undefined4 *)(fr0_ - 0x80)));
        dVar7 = CONCAT44D(0x3dcccccd,(*(undefined4 *)(fr0_ - 0x84)));
        (*(undefined4 *)(fr0_ - 0x80)) = uVar3;
      }
      else {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x80)),(*(undefined4 *)(fr0_ - 0x84)));
        dVar7 = 1.3411048210842936e-08;
        (*(undefined4 *)(fr0_ - 0x7c)) = uVar3;
      }
      if (cVar11 == '\0') {
        fVar9 = F32HI(dVar7);
        fVar6 = F32LO(dVar7) * fVar9;
        dVar7 = CONCAT44D(fVar9,fVar6);
        dVar8 = CONCAT44D(F32HI(dVar8) - fVar6,SUB84(dVar8,0));
      }
      else {
        dVar7 = dVar7 * dVar7;
        dVar8 = dVar8 - dVar7;
      }
      uVar3 = SUB84(dVar7,0);
      uVar4 = (undefined4)(D2U(dVar8) >> 0x20);
      (*(undefined4 *)(fr0_ - 0x84)) = uVar4;
      if (cVar12 != '\0') {
        (*(undefined4 *)(fr0_ - 0x84)) = SUB84(dVar8,0);
        (*(undefined4 *)(fr0_ - 0x80)) = uVar4;
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 220)), rand(iVar2,puVar5,a6,a7));
      uVar10 = SUB84(dVar8,0);
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x7c)),uVar3);
      }
      else {
        dVar8 = CONCAT44D(((undefined4 *)(fr0_ - 0x78))[0],(*(undefined4 *)(fr0_ - 0x7c)));
      }
      if (cVar11 == '\0') {
        iVar2 = (int)F32HI(dVar8);
      }
      else {
        iVar2 = (int)dVar8;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 220)), libgcc_divide_helper_01031c(uVar4,iVar2,a6,a7));
      if (cVar11 == '\0') {
        dVar8 = CONCAT44D((float)iVar1,SUB84(dVar8,0));
      }
      else {
        dVar8 = (double)iVar1;
      }
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x28) = (int)(D2U(dVar8) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = dVar8;
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 220)), rand(uVar4,iVar2,a6,a7));
      (vsp = ((unsigned long)(fr0_ - 220)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x180))))(ar5,iVar2,a6,a7));
      if (cVar12 == '\0') {
        (*(undefined8 *)(fr0_ - 0xa0)) = CONCAT44D(uVar3,(int)(D2U(dVar8) >> 0x20));
        dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x80)),SUB84(dVar8,0));
      }
      else {
        dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x7c)),(*(undefined4 *)(fr0_ - 0x80)));
        (*(undefined8 *)(fr0_ - 0xa0)) = dVar8;
      }
      if (cVar11 == '\0') {
        iVar2 = (int)F32HI(dVar7);
      }
      else {
        iVar2 = (int)dVar7;
      }
      uVar3 = (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xa0))+4));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 220)), libgcc_divide_helper_01031c((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xa0))+4)),iVar2,a6,a7));
      if (cVar11 == '\0') {
        dVar8 = CONCAT44D((float)iVar1,uVar10);
      }
      else {
        dVar8 = (double)iVar1;
      }
      if (cVar12 == '\0') {
        dVar7 = CONCAT44D(0x42c80000,(undefined4)(*(undefined8 *)(fr0_ - 0xa0)));
      }
      else {
        dVar7 = 5.085573493628304e+232;
      }
      if (cVar11 == '\0') {
        fVar9 = F32HI(dVar7);
        fVar6 = F32LO(dVar7) / fVar9;
        dVar7 = CONCAT44D(fVar9,fVar6);
        dVar8 = CONCAT44D(F32HI(dVar8) * fVar6,SUB84(dVar8,0));
      }
      else {
        dVar7 = dVar7 / dVar7;
        dVar8 = dVar8 * dVar7;
      }
      uVar4 = SUB84(dVar7,0);
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2c) = (int)(D2U(dVar8) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x2c) = dVar8;
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 220)), rand(uVar3,iVar2,a6,a7));
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x84)),uVar4);
      }
      else {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x80)),(*(undefined4 *)(fr0_ - 0x84)));
      }
      if (cVar11 == '\0') {
        iVar2 = (int)F32HI(dVar8);
      }
      else {
        iVar2 = (int)dVar8;
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), libgcc_divide_helper_01031c(uVar3,iVar2,a6,a7));
      if (cVar11 == '\0') {
        dVar8 = CONCAT44D((float)iVar2,SUB84(dVar8,0));
      }
      else {
        dVar8 = (double)iVar2;
      }
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x30) = (int)(D2U(dVar8) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x30) = dVar8;
      }
    }
    else if (iVar1 == 0xb) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,2,a6,a7));
      if (iVar2 == 0) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c02f404(ar4,2,a6,a7); });
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x43960000;
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x43960000;
          *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x43960000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = 0xa092ed0043960000;
          *(undefined8 *)(unsigned)(ar4 + 0x2c) = 0xa092ed0043960000;
          *(undefined8 *)(unsigned)(ar4 + 0x30) = 0xa092ed0043960000;
        }
      }
      else {
        for (puVar5 = (undefined4 *)(unsigned)0x0; iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,2,a6,a7)),
            (int)puVar5 < iVar2; puVar5 = (undefined4 *)(unsigned)((int)puVar5 + 1)) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 220)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,2,puVar5,a7));
          a7 = &(*(undefined4 *)(fr0_ - 0x90));
          ar6_00 = ((undefined1 *)(fr0_ - 0x8c));
          ar5_00 = ((undefined1 *)(fr0_ - 0x88));
          (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c03f414(uVar3,ar5_00,ar6_00,a7));
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x2c)),ar5_00,ar6_00,a7));
          (vsp = ((unsigned long)(fr0_ - 220)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x2c)),ar6_00,a7));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 220)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 220)) - 8); FUN_8c023484(((undefined1 *)(unsigned)0x8c12619c),((undefined1 *)(fr0_ - 0x48)),ar6_00,a7); });
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x58)),ar6_00,a7));
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,a7));
          (vsp = ((unsigned long)(fr0_ - 220)), object_dtor_delete(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,a7));
          uVar4 = 2;
          a6 = puVar5;
          uVar3 = (vsp = ((unsigned long)(fr0_ - 220)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,2,puVar5,a7));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 220)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 220)) - 8); FUN_8c02f670(uVar3,uVar4,a6,a7); });
          ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 220)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 220)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x68)),((undefined1 *)(fr0_ - 0x3c)),a6,a7); });
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x20)),((undefined4 *)(fr0_ - 0x78)),a6,a7));
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined4 *)(fr0_ - 0x78)),0xffffffff,a6,a7));
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,a6,a7));
          if (cVar12 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x28) = (*(undefined4 *)(fr0_ - 0x20));
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = (*(undefined4 *)(fr0_ - 0x1c));
            *(undefined4 *)(unsigned)(ar4 + 0x30) = (*(undefined4 *)(fr0_ - 0x18));
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x28) = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
            *(ulonglong *)(unsigned)(ar4 + 0x2c) = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
            *(ulonglong *)(unsigned)(ar4 + 0x30) = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
          }
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,a6,a7));
          (vsp = ((unsigned long)(fr0_ - 220)), object_dtor_delete(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,a6,a7));
        }
      }
    }
    else if ((iVar1 == 0xd) && (*(int *)(unsigned)(ar4 + 0x40) == 9)) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 220)), rand(iVar2,puVar5,a6,a7));
      uVar4 = 2;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), libgcc_divide_helper_01031c(uVar3,2,a6,a7));
      if (iVar2 == 0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0 & 0xffffffff;
        }
      }
      else if (cVar12 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = (*(undefined4 *)(fr0_ - 0x7c));
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = CONCAT44(((undefined4 *)(fr0_ - 0x78))[0],(*(undefined4 *)(fr0_ - 0x7c)));
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 220)), rand(uVar3,uVar4,a6,a7));
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(0x442f0000,(*(undefined4 *)(fr0_ - 0x80)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x7c)),(*(undefined4 *)(fr0_ - 0x80)));
        dVar8 = -7.425279834635228e-251;
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(F32LO(dVar8) - F32HI(dVar8));
      }
      else {
        iVar2 = (int)(dVar8 - dVar8);
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 220)), libgcc_divide_helper_01031c(uVar3,iVar2,a6,a7));
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(0x43af0000,(float)iVar1);
      }
      else {
        dVar8 = 3.458765095218184e+18;
      }
      if (cVar11 == '\0') {
        fVar6 = F32LO(dVar8) + F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 + dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x2c) = fVar6;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2c) = in_xd0;
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 220)), rand(uVar3,iVar2,a6,a7));
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(0x43c80000,(*(undefined4 *)(fr0_ - 0x84)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x80)),(*(undefined4 *)(fr0_ - 0x84)));
        dVar8 = 13510801156472832.0;
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(F32LO(dVar8) - F32HI(dVar8));
      }
      else {
        iVar2 = (int)(dVar8 - dVar8);
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), libgcc_divide_helper_01031c(uVar3,iVar2,a6,a7));
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(0x43480000,(float)iVar2);
      }
      else {
        dVar8 = 2.5193118417763846e+177;
      }
      if (cVar11 == '\0') {
        fVar6 = F32LO(dVar8) + F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 + dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x30) = fVar6;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd0;
      }
    }
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x20)),0xffffffff,a6,a7));
  return uVar3;
}

__asm__(".globl _FUN_8c0a0278\n.set _FUN_8c0a0278, _FUN_8c0a0278_def\n");
//@unit 8c0a06c0
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
undefined4 FUN_8c0a06c0_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a06c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(undefined1 *)(unsigned)(0x98 + ar4) = *ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030d10(ar4 + 0xa8,ar5 + 8,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0a06c0\n.set _FUN_8c0a06c0, _FUN_8c0a06c0_def\n");
//@unit 8c0a06f8
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
undefined4 FUN_8c0a06f8_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a06f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *ar5 = *(undefined1 *)(unsigned)(0x98 + ar4);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030d2c(ar4 + 0xa8,ar5 + 8,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0a06f8\n.set _FUN_8c0a06f8, _FUN_8c0a06f8_def\n");
//@unit 8c0a0730
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
undefined4 FUN_8c0a0730_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a0730";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126158),ar5,ar6,ar7));
  uVar3 = 0x8c285140;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285140,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126168),pcVar2,uVar3,ar7));
  uVar3 = 0x8c28514c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28514c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126178),pcVar2,uVar3,ar7));
  uVar3 = 0x8c285158;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285158,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126188),pcVar2,uVar3,ar7));
  uVar3 = 0x8c285164;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285164,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126198) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c12619c),0x800000);
  }
  else {
                    
    (*(undefined4 *)(unsigned)(unsigned)0x8c126198) = 0xffffffff00800000;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c12619c),pcVar2,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285170,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0a0730\n.set _FUN_8c0a0730, _FUN_8c0a0730_def\n");
//@unit 8c0a0818
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
undefined4 * FUN_8c0a0818_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a0818";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030fa0(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12ad14));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x224,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero((int)ar4 + 0x238,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x250,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x260,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0a0890(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c0a0818\n.set _FUN_8c0a0818, _FUN_8c0a0818_def\n");
//@unit 8c0a0890
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
undefined4 FUN_8c0a0890_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a0890";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  uint extraout_fr1 = 0;
  uint extraout_fr1_00 = 0;
  char cVar1;
  
  cVar1 = '\0';
  *(undefined ***)(unsigned)(ar4 + 0x1c8) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13af50);
  *(undefined4 *)(unsigned)(ar4 + 0x1cc) = 0xf;
  (vsp = ((unsigned long)(fr0_ - 24)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x14)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), vec3_copy_8c023d8c(ar4 + 0x238,((undefined1 *)(fr0_ - 0x14)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), object_dtor_delete(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6,ar7));
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x244) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x244) = (ulonglong)extraout_fr1;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x248) = 0;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c031b68(ar4,0x8c2851b0,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x24c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x270) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1d0) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x274) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x234) = (ulonglong)extraout_fr1_00;
  }
  return 0x234;
}

__asm__(".globl _FUN_8c0a0890\n.set _FUN_8c0a0890, _FUN_8c0a0890_def\n");
//@unit 8c0a0950
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
undefined4 * Class_12ad14_m0_0a0950_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12ad14_m0_0a0950";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12ad14);
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x98,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x94,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x8e,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x89,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129cbc_m0_0312f4(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12ad14_m0_0a0950\n.set _Class_12ad14_m0_0a0950, _Class_12ad14_m0_0a0950_def\n");
//@unit 8c0a09e8
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
undefined4 Class_12ad14_m1_0a09e8_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "Class_12ad14_m1_0a09e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 128; for (int i_ = 0; i_ < 128; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 in_dr0 = 0;
  double dVar5;
  float fVar6;
  undefined4 in_fr3 = 0;
  double dVar7;
  undefined8 in_xd0 = 0;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  (vsp = ((unsigned long)(fr0_ - 128)), Class_129cbc_m1_031598(ar4,ar5,ar6,ar7));
  uVar3 = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x128) = 1;
  if ((*(int *)(unsigned)(ar4 + 0x124) == 0xb) || (*(int *)(unsigned)(ar4 + 0x124) == 0xc)) {
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x1c)),ar5[3],ar6,ar7));
    ar7 = ((undefined1 *)(fr0_ - 0x1c));
    ar6 = ar5[6];
    uVar3 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0a0c88(ar4,*ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0a37c8(ar4,ar5,ar6,ar7));
    if (iVar2 != 3) {
      (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x28)),ar5[3],ar6,ar7));
      ar7 = ((undefined1 *)(fr0_ - 0x28));
      ar6 = ar5[6];
      uVar3 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0a0c88(ar4,*ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 128)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
      (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x78))+4)) = uVar3;
    }
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x7c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c02f2c0(*ar5,uVar3,ar6,ar7); });
  if (*(int *)(unsigned)(ar4 + 0x178) == 1) {
    uVar3 = 1;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x7c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c02f2c0(*ar5,1,ar6,ar7); });
  }
  if ((*(int *)(unsigned)(ar4 + 0x124) != 6) && (*(int *)(unsigned)(ar4 + 0x124) != 0xb)) {
    uVar3 = *(undefined4 *)(unsigned)(ar5[1] + 4);
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c031ab4(ar4,uVar3,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x184))))((int *)(unsigned)(uint)ar5[6],uVar3,ar6,ar7));
  uVar1 = in_dr0;
  if (cVar10 == '\0') {
    (*(undefined8 *)(fr0_ - 0x78)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x78))+4)),(int)((ulonglong)in_dr0 >> 0x20));
    uVar1 = (*(undefined8 *)(fr0_ - 0x78));
  }
  (*(undefined8 *)(fr0_ - 0x78)) = uVar1;
  if (cVar10 == '\0') {
    dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4),in_fr3);
    dVar5 = CONCAT44D(0x41200000,(int)(*(undefined8 *)(fr0_ - 0x78)));
  }
  else {
    dVar7 = *(double *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4);
    dVar5 = -3.051758552885531e-05;
    in_xd0 = (*(undefined8 *)(fr0_ - 0x78));
  }
  if (cVar9 == '\0') {
    fVar6 = F32HI(dVar5);
    fVar4 = F32LO(dVar5) - fVar6;
    dVar5 = CONCAT44D(fVar6,fVar4);
    bVar8 = F32HI(dVar7) < fVar4;
  }
  else {
    dVar5 = dVar5 - dVar5;
    bVar8 = dVar7 < dVar5;
  }
  fVar4 = F32LO(dVar5);
  if (!bVar8) {
    if (cVar10 == '\0') {
      fVar4 = *(float *)(unsigned)(ar4 + 0x18);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x18);
    }
    if (cVar9 == '\0' && 0.0 < fVar4) {
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(0xbf000000,*(undefined4 *)(unsigned)(ar4 + 0x18));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x18);
        dVar7 = -7.937143354252696e-251;
      }
      if (cVar9 == '\0') {
        fVar4 = F32LO(dVar7) * F32HI(dVar7);
      }
      else {
        fVar4 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar10 == '\0') {
        *(float *)(unsigned)(ar4 + 0x18) = fVar4;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x18) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_length(ar4 + 0x14,uVar3,ar6,ar7));
    }
  }
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x224,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x48)),ar4 + 0x90,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x58)),ar4 + 0x13c,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_assign(ar4 + 4,((undefined1 *)(fr0_ - 0x68)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 128)), vec3_clear(ar4 + 0x13c,uVar3,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 0;
  return 0x1d4;
}

__asm__(".globl _Class_12ad14_m1_0a09e8\n.set _Class_12ad14_m1_0a09e8, _Class_12ad14_m1_0a09e8_def\n");
//@unit 8c0a0c4c
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
undefined4 FUN_8c0a0c4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a0c4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint extraout_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c032160(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x24c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x234) = (ulonglong)extraout_fr1;
  }
  return 0x234;
}

__asm__(".globl _FUN_8c0a0c4c\n.set _FUN_8c0a0c4c, _FUN_8c0a0c4c_def\n");
//@unit 8c0a0c88
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
int FUN_8c0a0c88_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c0a0c88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 204; for (int i_ = 0; i_ < 204; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = 1;
  puVar2 = ar6;
  puVar3 = ar7;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 204)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 204)) - 8); FUN_8c03f480(ar5,((void *)0x8c03f480),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 204)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x44)),puVar2,puVar3));
  ar5_00 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 204)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,puVar2,puVar3));
  (vsp = ((unsigned long)(fr0_ - 204)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),ar5_00,puVar2,puVar3));
  if (*(int *)(unsigned)(ar4 + 0x178) == 1) {
    (vsp = ((unsigned long)(fr0_ - 204)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),ar4 + 0x168,puVar2,puVar3));
  }
  *(undefined4 *)(unsigned)(ar4 + 0x128) = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 0x124);
  if ((iVar1 < 0xf) && (1 < iVar1)) {
                    
    switch(iVar1) {
    case 2:
      (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x5c)),ar7,puVar2,puVar3));
      puVar2 = ((undefined1 *)(fr0_ - 0x5c));
      puVar3 = ar6;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0a14d8(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),puVar2,ar6));
      (vsp = ((unsigned long)(fr0_ - 204)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,puVar2,puVar3));
      break;
    case 3:
      puVar2 = ar7;
      puVar3 = ar6;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0329ac(ar4,((undefined1 *)(fr0_ - 0x24)),ar7,ar6));
      if (iVar4 == 0) {
        puVar2 = ar7;
        puVar3 = ar6;
        (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c032788(ar4,((undefined1 *)(fr0_ - 0x24)),ar7,ar6));
      }
      (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x50)),ar7,puVar2,puVar3));
      puVar3 = ((undefined1 *)(fr0_ - 0x50));
      puVar2 = ((undefined1 *)(fr0_ - 0x24));
      iVar4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0a1828(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),puVar2,puVar3));
      (vsp = ((unsigned long)(fr0_ - 204)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x50)),0xffffffff,puVar2,puVar3));
    }
  }
  if ((*(int *)(unsigned)(ar4 + 0x178) == 1) && (iVar4 == 0)) {
    (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c031ce8(ar4,ar7,ar6,puVar3));
    (vsp = ((unsigned long)(fr0_ - 204)), Vec3_assign(ar4 + 0x168,((undefined1 *)(fr0_ - 0xc8)),ar6,puVar3));
    (vsp = ((unsigned long)(fr0_ - 204)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6,puVar3));
    puVar2 = ar6;
  }
  (vsp = ((unsigned long)(fr0_ - 204)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,puVar2,puVar3));
  (vsp = ((unsigned long)(fr0_ - 204)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,puVar2,puVar3));
  return iVar4;
}

__asm__(".globl _FUN_8c0a0c88\n.set _FUN_8c0a0c88, _FUN_8c0a0c88_def\n");
//@unit 8c0a14d8
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
uint FUN_8c0a14d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a14d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 ar6_00;
  int ar6_01;
  undefined4 uVar5;
  undefined1 *ar7_00;
  float fVar6;
  undefined8 in_dr0 = 0;
  float fVar7;
  char cVar8;
  char cVar9;
  
  fVar6 = F32HI(in_dr0);
  cVar9 = '\0';
  cVar8 = '\0';
  iVar1 = *(int *)(unsigned)(ar4 + 0x134);
  uVar4 = ar6;
  uVar3 = ar7;
  uVar5 = ar7;
  if (iVar1 == 0) {
    ar6_00 = 100;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 120)), rand_range(ar4,0,100,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x220) = uVar2;
    *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
  }
  else {
    ar6_00 = ar6;
    if (iVar1 != 1) {
      uVar3 = ar5;
      if (iVar1 == 2) goto LAB_8c0a15f4;
      if (iVar1 != 3) {
        return 1;
      }
      goto LAB_8c0a165a;
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x220) < 0x2d) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c0a2bf4(ar4,ar5,ar6_00,uVar3));
    if (iVar1 != 0) {
      return 1;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    return 0;
  }
  if (0x59 < *(int *)(unsigned)(ar4 + 0x220)) {
    ar7 = 0;
    ar6 = 0;
    uVar3 = 0;
    (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0,0));
    *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
LAB_8c0a15f4:
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x48)),uVar3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x48)),ar5,ar7));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c03207c(ar4,uVar4,ar5,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar5,ar7));
    if (iVar1 != 1) {
      return 1;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
    return 0;
  }
  if (cVar9 == '\0') {
    fVar6 = 3.0;
  }
  else {
    fVar6 = 500.0;
  }
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c032518(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x38)),uVar4,uVar5));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,uVar4,uVar5));
  *(undefined4 *)(unsigned)(ar4 + 0x134) = 3;
LAB_8c0a165a:
  if (*(int *)(unsigned)(ar4 + 0x1d4) == 1) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length(ar4 + 0x200,uVar3,uVar4,uVar5));
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x28)),uVar3,uVar4,uVar5));
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x28)),ar4 + 0x14,uVar4,uVar5));
    if (cVar9 == '\0') {
      fVar7 = 90.0;
    }
    else {
      fVar6 = 90.0;
      fVar7 = 2.0;
    }
    if (cVar8 == '\0' && fVar7 < fVar6) {
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c03263c(ar4,((undefined1 *)(fr0_ - 0x28)),uVar4,uVar5));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x58)),ar5,uVar4,uVar5); });
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x68)),uVar4,uVar5));
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,uVar4,uVar5));
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,uVar4,uVar5));
      uVar4 = ar6;
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c032788(ar4,ar4 + 0x54,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      uVar5 = ar7;
    }
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,uVar4,uVar5));
  }
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x74)),ar6,uVar4,uVar5));
  ar7_00 = ((undefined1 *)(fr0_ - 0x74));
  ar6_01 = ar4 + 0x54;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c0a1828(ar4,ar5,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 120)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_01,ar7_00));
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c0a14d8\n.set _FUN_8c0a14d8, _FUN_8c0a14d8_def\n");
//@unit 8c0a1828
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
undefined4 FUN_8c0a1828_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a1828";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *ar5_00;
  undefined4 *ar6_00;
  float fVar4;
  undefined8 in_dr0 = 0;
  float fVar7;
  double dVar5;
  undefined8 uVar6;
  undefined4 in_fr3 = 0;
  double dVar8;
  char cVar9;
  char cVar10;
  
  fVar4 = F32HI(in_dr0);
  cVar10 = '\0';
  cVar9 = '\0';
  iVar3 = *(int *)(unsigned)(ar4 + 0x40);
  if ((iVar3 < 6) && (-1 < iVar3)) {
    ar5_00 = ar5;
    ar6_00 = ar6;
                    
    switch(iVar3) {
    case 0:
      if (*(int *)(unsigned)(ar4 + 0x270) == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x270) = 0;
      }
      if (*(int *)(unsigned)(ar4 + 0x1b8) == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x18c) = *ar5;
        *(undefined4 *)(unsigned)(ar4 + 400) = ar5[1];
        *(undefined4 *)(unsigned)(ar4 + 0x194) = ar5[2];
        *(undefined4 *)(unsigned)(ar4 + 0x198) = *ar6;
        *(undefined4 *)(unsigned)(ar4 + 0x19c) = ar6[1];
        *(undefined4 *)(unsigned)(ar4 + 0x1a0) = ar6[2];
      }
      if (3.0 <= *(float *)(unsigned)(ar4 + 0x28)) {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x40400000;
      }
      if (*(int *)(unsigned)(ar4 + 0x124) == 2) {
        (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c031b68(ar4,0x8c2851b0,ar6,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c031b68(ar4,0x8c2851c8,ar6,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c031bb4(ar4,ar5,ar6,ar7));
      if (cVar10 == '\0') {
        uVar6 = CONCAT44(ar5[1],ar6[1]);
      }
      else {
        uVar6 = *(undefined8 *)(unsigned)(ar5 + 1);
      }
      if (cVar9 != '\0' || (float)uVar6 <= F32HI(uVar6)) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6_00,ar7));
        fVar4 = F32HI(uVar6);
        if (iVar3 != 9) {
          ar7 = 0;
          ar6_00 = (undefined4 *)(unsigned)0xffffffff;
          ar5_00 = (undefined4 *)(unsigned)0x9;
          (vsp = ((unsigned long)(fr0_ - 80)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 80)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7));
        }
      }
      else {
        ar7 = 0;
        ar6_00 = (undefined4 *)(unsigned)0x0;
        ar5_00 = (undefined4 *)(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 80)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0));
        fVar4 = F32HI(uVar6);
      }
      (vsp = ((unsigned long)(fr0_ - 80)), vec3_clear(ar4 + 0x90,ar5_00,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 80)), vec3_clear(ar4 + 0x224,ar5_00,ar6_00,ar7));
    case 1:
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    case 3:
      iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6_00,ar7));
      if (iVar3 == 1) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7));
        if (iVar3 == 1) {
          if (cVar10 == '\0') {
            uVar6 = CONCAT44(ar5[1],ar6[1]);
          }
          else {
            uVar6 = *(undefined8 *)(unsigned)(ar5 + 1);
          }
          if (cVar9 == '\0' && (float)uVar6 < F32HI(uVar6)) {
            (vsp = ((unsigned long)(fr0_ - 80)), vec3_clear(ar4 + 0x224,ar5_00,ar6_00,ar7));
            ar7 = 0;
            (vsp = ((unsigned long)(fr0_ - 80)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0,0));
          }
        }
        else {
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6_00,ar7); });
          if (cVar10 == '\0') {
            fVar7 = 15.0;
          }
          else {
            fVar4 = 15.0;
            fVar7 = 35.0;
          }
          if (cVar9 != '\0' || fVar7 <= fVar4) {
            ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6_00,ar7); });
            if (cVar10 == '\0') {
              fVar4 = 35.0;
            }
            else {
              fVar7 = 35.0;
              fVar4 = 7.73517e-43;
            }
            if (cVar9 == '\0' && fVar7 < fVar4) {
              if (cVar10 == '\0') {
                dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x228),in_fr3);
                dVar5 = CONCAT44D(0x41a00000,(*(undefined4 *)(unsigned)(unsigned)0x8c13af4c));
              }
              else {
                dVar8 = *(double *)(unsigned)(ar4 + 0x228);
                dVar5 = 3.954695087201342e+231;
              }
              if (cVar9 == '\0') {
                dVar8 = CONCAT44D(F32HI(dVar8) +
                                         F32LO(dVar5) / F32HI(dVar5),
                                         SUB84(dVar8,0));
              }
              else {
                dVar8 = dVar8 + dVar5 / dVar5;
              }
              if (cVar10 == '\0') {
                *(int *)(unsigned)(ar4 + 0x228) = (int)(D2U(dVar8) >> 0x20);
              }
              else {
                *(double *)(unsigned)(ar4 + 0x228) = dVar8;
              }
            }
            else {
              if (cVar10 == '\0') {
                dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x228),in_fr3);
                dVar5 = CONCAT44D(0x41c80000,(*(undefined4 *)(unsigned)(unsigned)0x8c13af4c));
              }
              else {
                dVar8 = *(double *)(unsigned)(ar4 + 0x228);
                dVar5 = 2.8113808922932564e+173;
              }
              if (cVar9 == '\0') {
                dVar8 = CONCAT44D(F32HI(dVar8) -
                                         F32LO(dVar5) / F32HI(dVar5),
                                         SUB84(dVar8,0));
              }
              else {
                dVar8 = dVar8 - dVar5 / dVar5;
              }
              if (cVar10 == '\0') {
                *(int *)(unsigned)(ar4 + 0x228) = (int)(D2U(dVar8) >> 0x20);
              }
              else {
                *(double *)(unsigned)(ar4 + 0x228) = dVar8;
              }
            }
          }
        }
      }
      else if (iVar3 == 9) {
        if (cVar10 == '\0') {
          uVar6 = CONCAT44(ar5[1],ar6[1]);
        }
        else {
          uVar6 = *(undefined8 *)(unsigned)(ar5 + 1);
        }
        if (cVar9 != '\0' || (float)uVar6 <= F32HI(uVar6)) {
          (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6_00,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 80)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7));
          ar7 = 0;
          uVar2 = 0;
          uVar1 = 1;
          (vsp = ((unsigned long)(fr0_ - 80)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0));
          (vsp = ((unsigned long)(fr0_ - 80)), vec3_clear(ar4 + 0x224,uVar1,uVar2,ar7));
        }
      }
      else {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7));
        if (iVar3 == 1) {
          if (cVar10 == '\0') {
            uVar6 = CONCAT44(ar5[1],ar6[1]);
          }
          else {
            uVar6 = *(undefined8 *)(unsigned)(ar5 + 1);
          }
          if (cVar9 != '\0' || (float)uVar6 <= F32HI(uVar6)) {
            ar7 = 0;
            (vsp = ((unsigned long)(fr0_ - 80)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0,0));
          }
          else {
            ar7 = 0;
            (vsp = ((unsigned long)(fr0_ - 80)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0));
          }
        }
      }
      break;
    case 4:
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c03f3ac(ar4 + 0xb0,ar5,ar6,ar7));
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c031764(ar4,ar6,ar5,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x24))); *(unsigned *)((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); FUN_8c0230f0(ar4 + 0x14,ar6,ar5,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 80)), Vec3_length(((undefined1 *)(fr0_ - 0x24)),ar6,ar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(ar4 + 0x80,uVar2,ar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar5,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0a1828\n.set _FUN_8c0a1828, _FUN_8c0a1828_def\n");
//@unit 8c0a1cdc
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
undefined4 FUN_8c0a1cdc_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a1cdc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  undefined4 in_fr3 = 0;
  double dVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar3 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar1 < 5) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      ar7 = 0;
      ar6 = (int *)(unsigned)0xffffffff;
      ar5 = 3;
      (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022d04(ar4 + 0x14,ar5,ar6,ar7));
    case 1:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      if (iVar1 == 1) {
        uVar2 = 3;
        (vsp = ((unsigned long)(fr0_ - 4)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,3,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 2:
      uVar2 = 0x3c23d70a;
      *(float *)(unsigned)(ar4 + 0x94) = *(float *)(unsigned)(ar4 + 0x94) + 0.01;
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x184))))(ar6,ar5,ar6,ar7));
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),in_fr3);
        dVar5 = CONCAT44D(0x41200000,uVar2);
      }
      else {
        dVar7 = *(double *)(unsigned)(ar5 + 4);
        dVar5 = 6.28650578250278e-312;
      }
      if (cVar9 == '\0') {
        fVar6 = F32HI(dVar5);
        fVar4 = F32LO(dVar5) - fVar6;
        dVar5 = CONCAT44D(fVar6,fVar4);
        bVar8 = fVar4 < F32HI(dVar7);
      }
      else {
        dVar5 = dVar5 - dVar5;
        bVar8 = dVar5 < dVar7;
      }
      if (bVar8) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x94) = D2U(dVar5) & 0xffffffff;
        }
      }
      break;
    case 3:
      uVar2 = 0x3c23d70a;
      *(float *)(unsigned)(ar4 + 0x94) = *(float *)(unsigned)(ar4 + 0x94) - 0.01;
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x128))))(ar6,ar5,ar6,ar7));
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),in_fr3);
        dVar5 = CONCAT44D(0x41200000,uVar2);
      }
      else {
        dVar7 = *(double *)(unsigned)(ar5 + 4);
        dVar5 = 6.28650578250278e-312;
      }
      if (cVar9 == '\0') {
        fVar6 = F32HI(dVar5);
        fVar4 = F32LO(dVar5) + fVar6;
        dVar5 = CONCAT44D(fVar6,fVar4);
        bVar8 = fVar4 < F32HI(dVar7);
      }
      else {
        dVar5 = dVar5 + dVar5;
        bVar8 = dVar5 < dVar7;
      }
      if (!bVar8) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x94) = D2U(dVar5) & 0xffffffff;
        }
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c0a1cdc\n.set _FUN_8c0a1cdc, _FUN_8c0a1cdc_def\n");
//@unit 8c0a1ec4
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
undefined4 s_CMushroomerBody_AwayFrom_0a1ed0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CMushroomerBody_AwayFrom_0a1ed0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 144; for (int i_ = 0; i_ < 144; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int ar6_00;
  undefined4 ar7_00;
  undefined4 uVar5;
  undefined4 in_fr1 = 0;
  double dVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar5 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  iVar3 = ar5;
  if (iVar1 == 0) {
    if (*(int *)(unsigned)(ar4 + 0x270) == 1) {
      (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c033474(ar4,1,ar5,(*(undefined4 *)(fr0_ + 0x00000000))));
      *(undefined4 *)(unsigned)(ar4 + 0x270) = 0;
    }
    ar7_00 = 0;
    uVar4 = 0xffffffff;
    uVar2 = 5;
    (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar4,ar7_00));
    if (ar6 == 0) {
LAB_8c0a1f82:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2c))); *(unsigned *)((((unsigned long)(fr0_ - 144)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 144)) - 8); Vec3_sub(ar5,ar7,uVar4,ar7_00); });
      uVar2 = (vsp = ((unsigned long)(fr0_ - 144)), Vec3_length(((undefined1 *)(fr0_ - 0x2c)),ar7,uVar4,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign(ar4 + 0x14,uVar2,uVar4,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,uVar4,ar7_00));
      if (cVar8 != '\0') {
        in_fr1 = 0x40400000;
      }
      (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c032518(ar4,ar5,(*(undefined4 *)(fr0_ + 0x00000004)),(*(undefined4 *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign(ar4 + 0x260,((undefined1 *)(fr0_ - 0x3c)),(*(undefined4 *)(fr0_ + 0x00000004)),(*(undefined4 *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,(*(undefined4 *)(fr0_ + 0x00000004)),(*(undefined4 *)(fr0_ + 0x00000000))));
      ar7 = (*(undefined4 *)(fr0_ + 0x00000000));
    }
    else {
      if (ar6 != 1) {
        ar7_00 = 2;
        uVar4 = 1;
        report_error_message
                  (((undefined1 *)(unsigned)0x8c13b03f),((undefined1 *)(unsigned)0x8c13b055),1,2);
        goto LAB_8c0a1f82;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 144)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 144)) - 8); Vec3_scale(ar7,((undefined1 *)(unsigned)0x8c13af90),uVar4,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x4c)),uVar4,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,uVar4,ar7_00));
      if (cVar8 != '\0') {
        in_fr1 = 0x40400000;
      }
      (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c032518(ar4,ar5,(*(undefined4 *)(fr0_ + 0x00000004)),(*(undefined4 *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign(ar4 + 0x260,((undefined1 *)(fr0_ - 0x5c)),(*(undefined4 *)(fr0_ + 0x00000004)),(*(undefined4 *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,(*(undefined4 *)(fr0_ + 0x00000004)),(*(undefined4 *)(fr0_ + 0x00000000))));
      ar7 = (*(undefined4 *)(fr0_ + 0x00000000));
    }
    iVar1 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 144)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 144)) - 8); Vec3_sub(ar4 + 0x260,ar5,(*(undefined4 *)(fr0_ + 0x00000004)),ar7); });
    uVar2 = (vsp = ((unsigned long)(fr0_ - 144)), Vec3_length(((undefined1 *)(fr0_ - 0x6c)),iVar1,(*(undefined4 *)(fr0_ + 0x00000004)),ar7));
    (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign(ar4 + 0x14,uVar2,(*(undefined4 *)(fr0_ + 0x00000004)),ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,(*(undefined4 *)(fr0_ + 0x00000004)),ar7));
    (vsp = ((unsigned long)(fr0_ - 144)), vec3_clear(ar4 + 0x224,uVar2,(*(undefined4 *)(fr0_ + 0x00000004)),ar7));
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031b68(ar4,0x8c2851b0,(*(undefined4 *)(fr0_ + 0x00000004)),ar7));
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x34) = 0x40000000;
    }
    else {
      in_fr1 = 0x40000000;
      *(undefined8 *)(unsigned)(ar4 + 0x34) = 0x8c032a6440000000;
    }
    uVar4 = 0x5a;
    uVar2 = 0x1e;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 144)), rand_range(ar4,0x1e,0x5a,ar7));
    if (cVar7 == '\0') {
      dVar6 = CONCAT44D((float)iVar1,in_fr1);
    }
    else {
      dVar6 = (double)iVar1;
    }
    if (cVar8 == '\0') {
      *(int *)(unsigned)(ar4 + 0x38) = (int)(D2U(dVar6) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x38) = dVar6;
    }
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c032ab0(ar4,uVar2,uVar4,ar7));
    ar6 = ar4 + 0x260;
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031bb4(ar4,ar5,ar6,ar7));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      iVar3 = ar4 + 0x260;
      (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031764(ar4,iVar3,ar5,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 144)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar3,ar5,ar7));
      ar6_00 = ar5;
      if (iVar1 == 1) {
        ar7 = 0;
        ar6_00 = -1;
        iVar3 = 0;
        (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar3,ar6_00,ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
    }
    else {
      ar6_00 = ar6;
      if (iVar1 == 3) {
        iVar3 = ar4 + 0x260;
        (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031764(ar4,iVar3,ar5,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 144)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar3,ar5,ar7));
        ar6_00 = ar5;
        if (iVar1 == 1) {
          iVar3 = -0x73d7ae50;
          (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031b68(ar4,0x8c2851b0,ar5,ar7));
          uVar5 = 0;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          ar6_00 = ar5;
        }
      }
    }
    goto LAB_8c0a231a;
  }
  (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar3,ar6,ar7));
  iVar3 = ar4 + 0x260;
  (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031764(ar4,iVar3,ar5,ar7));
  ar6_00 = ar5;
  if (*(int *)(unsigned)(ar4 + 0x40) == 4) {
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
LAB_8c0a231a:
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 144)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 144)) - 8); FUN_8c0230f0(ar4 + 0x14,iVar3,ar6_00,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 144)), Vec3_length(((undefined1 *)(fr0_ - 0x7c)),iVar3,ar6_00,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 144)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 144)) - 8); Vec3_scale(uVar2,((undefined1 *)(unsigned)0x8c13af94),ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x8c)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6_00,ar7));
  return uVar5;
}

__asm__(".globl _s_CMushroomerBody_AwayFrom_0a1ed0\n.set _s_CMushroomerBody_AwayFrom_0a1ed0, _s_CMushroomerBody_AwayFrom_0a1ed0_def\n");
//@unit 8c0a23c4
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
undefined4 FUN_8c0a23c4_def(int ar4,double *ar5,double *ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c0a23c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 236; for (int i_ = 0; i_ < 236; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  double *pdVar3;
  code *ar5_00;
  double *ar6_00;
  undefined4 ar6_01;
  float *ar6_02;
  double *ar7_00;
  uint uVar4;
  float fVar5;
  double in_dr0 = 0;
  undefined8 uVar6;
  double dVar7;
  ulonglong uVar8;
  float fVar10;
  double dVar9;
  undefined4 in_fr3 = 0;
  double in_dr14 = 0;
  double in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  pdVar3 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  if ((*(undefined1 *)(unsigned)0x8c285210) == '\0') {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 236)), Vec3_set_zero(0x8c285214,ar5,ar6,ar7));
    ar6_00 = (double *)(unsigned)0x8c285204;
    (vsp = ((unsigned long)(fr0_ - 236)), global_list_push(uVar1,((void *)0x8c014a34),0x8c285204,ar7_00));
    pdVar3 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c285210);
    (*(undefined1 *)(unsigned)0x8c285210) = '\x01';
  }
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x28)),pdVar3,ar6_00,ar7_00));
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if ((5 < iVar2) || (iVar2 < 0)) goto switchD_8c0a242e_default;
                    
  switch(iVar2) {
  case 0:
    ar7_00 = (double *)(unsigned)0x0;
    ar6_01 = 0xffffffff;
    uVar1 = 9;
    (vsp = ((unsigned long)(fr0_ - 236)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 236)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 236)), vec3_clear(ar4 + 0x224,uVar1,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031b68(ar4,0x8c2851b0,ar6_01,ar7_00));
    pdVar3 = ar5;
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031bb4(ar4,ar5,ar6,ar7_00));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    break;
  case 2:
    goto switchD_8c0a242e_caseD_2;
  case 3:
    goto switchD_8c0a242e_caseD_3;
  case 4:
    goto switchD_8c0a242e_caseD_4;
  case 5:
    goto switchD_8c0a242e_caseD_5;
  }
  (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03f3ac(ar4 + 0xb0,pdVar3,ar6_00,ar7_00));
  pdVar3 = ar6;
  ar6_00 = ar5;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031764(ar4,ar6,ar5,ar7_00));
  if (iVar2 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xe8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 236)); CAnimBody_GetCurFrame(ar4 + 0xb0,pdVar3,ar6_00,ar7_00); });
    if (cVar12 == '\0') {
      *(int *)(unsigned)(ar4 + 0x244) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x244) = in_dr0;
    }
    if (cVar12 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 3;
switchD_8c0a242e_caseD_3:
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(&(*(float *)(fr0_ - 0x28)),ar5,ar6_00,ar7_00));
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar6 + 1),in_fr3);
      dVar7 = CONCAT44D(0x41c80000,*(float *)(unsigned)(ar7 + 1));
    }
    else {
      dVar9 = ar6[1];
      in_xd0 = ar7[1];
      dVar7 = 4.24944422004087e-312;
    }
    if (cVar11 == '\0') {
      fVar5 = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar7,0);
    }
    if (F32HI(dVar9) == fVar5) {
      if (cVar12 == '\0') {
        (*(float *)(fr0_ - 0x20)) = *(float *)(unsigned)(ar7 + 1);
        dVar7 = CONCAT44D((*(float *)(fr0_ - 0x20)),fVar5);
      }
      else {
        dVar7 = ar7[1];
        (*(float *)(fr0_ - 0x20)) = SUB84(dVar7,0);
        (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)(D2U(dVar7) >> 0x20);
      }
    }
    else {
      if (cVar12 == '\0') {
        uVar8 = CONCAT44(0x41c80000,*(undefined4 *)(unsigned)ar6);
      }
      else {
        in_xd0 = *ar6;
        uVar8 = 0xc041c80000;
      }
      if ((float)uVar8 == (float)(uVar8 >> 0x20)) {
        dVar7 = (double)(uVar8 & 0xffffffff);
        if (cVar12 == '\0') {
          (*(float *)(fr0_ - 0x28)) = 0.0;
        }
        else {
          (*(undefined4 *)(fr0_ - 0x24)) = 0;
          (*(float *)(fr0_ - 0x28)) = (float)uVar8;
        }
      }
      else {
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)ar6,SUB84(dVar9,0));
          dVar7 = CONCAT44D(0x41c80000,*(float *)(unsigned)ar7);
        }
        else {
          dVar9 = *ar6;
          in_xd0 = *ar7;
          dVar7 = 4.07968455676365e-312;
        }
        if (cVar11 == '\0') {
          fVar5 = F32HI(dVar7);
          dVar7 = CONCAT44D(fVar5,F32LO(dVar7) - fVar5);
        }
        else {
          dVar7 = dVar7 - dVar7;
        }
        if (F32HI(dVar9) == SUB84(dVar7,0)) {
          if (cVar12 == '\0') {
            dVar7 = CONCAT44D(*(float *)(unsigned)ar7,SUB84(dVar7,0));
            (*(float *)(fr0_ - 0x28)) = *(float *)(unsigned)ar7;
          }
          else {
            dVar7 = *ar7;
            (*(float *)(fr0_ - 0x28)) = SUB84(dVar7,0);
            (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)(D2U(dVar7) >> 0x20);
          }
        }
      }
    }
    uVar1 = SUB84(dVar9,0);
    uVar4 = SUB84(dVar7,0);
    iVar2 = ar4 + 0x14;
    ar6_02 = &(*(float *)(fr0_ - 0x28));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c0a3dc0(ar4,ar5,ar6_02,iVar2); });
    (vsp = ((unsigned long)(fr0_ - 236)), vec3_copy_8c023d8c(ar4 + 0x238,((undefined1 *)(fr0_ - 0x70)),ar6_02,iVar2));
    (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_02,iVar2));
    if (cVar12 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x238) = 0;
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x23c),uVar1);
      in_dr0 = CONCAT44D(0x41f00000,*(undefined4 *)(unsigned)(ar4 + 0x244));
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x238) = (ulonglong)uVar4;
      dVar9 = *(double *)(unsigned)(ar4 + 0x23c);
      in_xd0 = *(double *)(unsigned)(ar4 + 0x244);
      in_dr0 = 1.22281613457048e-311;
    }
    if (cVar11 == '\0') {
      fVar10 = F32HI(in_dr0);
      fVar5 = F32LO(in_dr0) + fVar10;
      in_dr0 = CONCAT44D(fVar10,fVar5);
      dVar9 = CONCAT44D(F32HI(dVar9) / fVar5,SUB84(dVar9,0));
    }
    else {
      in_dr0 = in_dr0 + in_dr0;
      dVar9 = dVar9 / in_dr0;
    }
    if (cVar12 == '\0') {
      *(int *)(unsigned)(ar4 + 0x23c) = (int)(D2U(dVar9) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x23c) = dVar9;
    }
    in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
    if (cVar12 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x240) = 0;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x240) = in_dr0;
    }
    ar7_00 = (double *)(unsigned)0x0;
    ar6_00 = (double *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 236)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0,0));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
switchD_8c0a242e_caseD_4:
    fVar5 = F32LO(in_dr0);
    if (cVar12 == '\0') {
      fVar5 = *(float *)(unsigned)(ar4 + 0x28);
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
    }
    if (cVar11 != '\0' || 0.0 <= fVar5) {
      (vsp = ((unsigned long)(fr0_ - 236)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x7c)),ar4 + 0x238,ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c023484(ar4 + 0x80,((undefined1 *)(fr0_ - 0x7c)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x8c)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6_00,ar7_00));
    }
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031764(ar4,ar6,ar5,ar7_00));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x234),*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
      dVar9 = *(double *)(unsigned)(ar4 + 0x234);
    }
    if (cVar11 == '\0') {
      fVar5 = F32LO(dVar9) - F32HI(dVar9);
    }
    else {
      fVar5 = SUB84(dVar9 - dVar9,0);
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar5;
      fVar5 = *(float *)(unsigned)(ar4 + 0x28);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
    }
    if (cVar11 != '\0' || fVar5 <= 0.0) {
      if (cVar12 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
      }
    }
    fVar5 = 0.0;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xe8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 236)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar6,ar5,ar7_00); });
    if (cVar12 == '\0') {
      fVar10 = 30.0;
    }
    else {
      fVar5 = 30.0;
      fVar10 = 8.07148e-43;
    }
    if ((cVar11 != '\0' || fVar10 <= fVar5) &&
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 236)), get_field_1c_026dd8(ar4 + 0xb0,ar6,ar5,ar7_00)), iVar2 == 7)) {
      if (cVar12 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x28);
      }
      in_dr0 = (double)(ulonglong)(uint)fVar5;
      if (fVar5 == 0.0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
switchD_8c0a242e_caseD_5:
        uVar4 = SUB84(in_dr0,0);
        *(undefined4 *)(unsigned)(ar4 + 0x270) = 1;
        iVar2 = ar4 + 0xb0;
        ar5_00 = ((void *)0x8c03f3ac);
        (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03f3ac(iVar2,((void *)0x8c03f3ac),iVar2,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x98)),ar5_00,iVar2,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 236)), vec3_copy_8c023d8c(ar4 + 0x238,((undefined1 *)(fr0_ - 0x98)),iVar2,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0x98)),0xffffffff,iVar2,ar7_00));
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)uVar4;
        }
        goto switchD_8c0a242e_default;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 236)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7_00));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x34)),pdVar3,ar6_00,ar7_00));
    ar7_00 = (double *)(unsigned)(ar4 + 0x14);
    ar6_00 = ar6;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c031eb0(ar4,ar5,ar6,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(&(*(float *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x44)),ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7_00));
    pdVar3 = ar6;
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00));
    fVar5 = F32HI(in_dr0);
    if (cVar12 == '\0') {
      fVar10 = 200.0;
      in_dr0 = in_xd0;
    }
    else {
      fVar5 = 200.0;
      fVar10 = 0.01;
    }
    if (cVar11 == '\0' && fVar5 < fVar10) {
      if (cVar12 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x14),(*(float *)(fr0_ - 0x28)));
      }
      else {
        in_dr0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
        dVar9 = *(double *)(unsigned)(ar4 + 0x14);
      }
      if (cVar11 == '\0') {
        fVar5 = F32LO(dVar9) - F32HI(dVar9);
      }
      else {
        fVar5 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar12 == '\0') {
        fVar10 = 0.01;
      }
      else {
        fVar5 = 0.01;
        fVar10 = -0.01;
      }
      if (cVar11 == '\0' && fVar5 < fVar10) {
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x14),(*(float *)(fr0_ - 0x28)));
        }
        else {
          in_dr0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
          dVar9 = *(double *)(unsigned)(ar4 + 0x14);
        }
        if (cVar11 == '\0') {
          fVar5 = F32LO(dVar9) - F32HI(dVar9);
        }
        else {
          fVar5 = SUB84(dVar9 - dVar9,0);
        }
        if (cVar12 == '\0') {
          fVar10 = -0.01;
        }
        else {
          fVar5 = -0.01;
          fVar10 = 2.74654e-43;
        }
        if (cVar11 == '\0' && fVar10 < fVar5) {
          if (cVar12 == '\0') {
            dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x18),(*(undefined4 *)(fr0_ - 0x24)));
          }
          else {
            in_dr0 = CONCAT44D((*(float *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
            dVar9 = *(double *)(unsigned)(ar4 + 0x18);
          }
          if (cVar11 == '\0') {
            fVar5 = F32LO(dVar9) - F32HI(dVar9);
          }
          else {
            fVar5 = SUB84(dVar9 - dVar9,0);
          }
          if (cVar12 == '\0') {
            fVar10 = 0.01;
          }
          else {
            fVar5 = 0.01;
            fVar10 = -0.01;
          }
          if (cVar11 == '\0' && fVar5 < fVar10) {
            if (cVar12 == '\0') {
              dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x18),(*(undefined4 *)(fr0_ - 0x24)));
            }
            else {
              in_dr0 = CONCAT44D((*(float *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
              dVar9 = *(double *)(unsigned)(ar4 + 0x18);
            }
            if (cVar11 == '\0') {
              fVar5 = F32LO(dVar9) - F32HI(dVar9);
            }
            else {
              fVar5 = SUB84(dVar9 - dVar9,0);
            }
            if (cVar12 == '\0') {
              fVar10 = -0.01;
            }
            else {
              fVar5 = -0.01;
              fVar10 = 2.74654e-43;
            }
            if (cVar11 == '\0' && fVar10 < fVar5) {
              if (cVar12 == '\0') {
                dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x1c),(*(float *)(fr0_ - 0x20)));
              }
              else {
                in_dr0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
                dVar9 = *(double *)(unsigned)(ar4 + 0x1c);
              }
              if (cVar11 == '\0') {
                fVar5 = F32LO(dVar9) - F32HI(dVar9);
              }
              else {
                fVar5 = SUB84(dVar9 - dVar9,0);
              }
              if (cVar12 == '\0') {
                fVar10 = 0.01;
              }
              else {
                fVar5 = 0.01;
                fVar10 = -0.01;
              }
              if (cVar11 == '\0' && fVar5 < fVar10) {
                if (cVar12 == '\0') {
                  dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x1c),(*(float *)(fr0_ - 0x20)));
                  in_xd0 = in_dr0;
                }
                else {
                  in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
                  dVar9 = *(double *)(unsigned)(ar4 + 0x1c);
                }
                if (cVar11 == '\0') {
                  fVar5 = F32LO(dVar9) - F32HI(dVar9);
                }
                else {
                  fVar5 = SUB84(dVar9 - dVar9,0);
                }
                if (cVar12 == '\0') {
                  fVar10 = -0.01;
                }
                else {
                  fVar5 = -0.01;
                  fVar10 = 2.74654e-43;
                }
                if (cVar11 == '\0' && fVar10 < fVar5) {
                  if (cVar12 == '\0') {
                    uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x28);
                    uVar6 = CONCAT44(uVar1,fVar5);
                    *(undefined4 *)(unsigned)(ar4 + 0x24) = uVar1;
                  }
                  else {
                    uVar6 = *(undefined8 *)(unsigned)(ar4 + 0x28);
                    *(undefined8 *)(unsigned)(ar4 + 0x24) = uVar6;
                  }
                  pdVar3 = ar5;
                  (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c022fc0(ar6,ar5,ar6_00,ar7_00));
                  if (cVar12 == '\0') {
                    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                               (int)((ulonglong)uVar6 >> 0x20));
                    dVar9 = CONCAT44D(0x40000000,(int)uVar6);
                  }
                  else {
                    dVar9 = 1.19733612505215e-311;
                  }
                  if (cVar11 == '\0') {
                    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                               F32LO(in_dr14) * F32HI(dVar9))
                    ;
                  }
                  else {
                    in_dr14 = in_dr14 * dVar9;
                  }
                  if (cVar12 == '\0') {
                    dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(dVar9,0));
                  }
                  else {
                    dVar9 = *(double *)(unsigned)(ar4 + 0x28);
                  }
                  if (cVar11 == '\0') {
                    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                               F32LO(in_dr14) / F32HI(dVar9))
                    ;
                  }
                  else {
                    in_dr14 = in_dr14 / dVar9;
                  }
                  if (cVar12 == '\0') {
                    in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(dVar9,0));
                  }
                  else {
                    in_dr0 = *(double *)(unsigned)(ar4 + 0x28);
                  }
                  if (cVar11 == '\0') {
                    in_dr0 = CONCAT44D(F32HI(in_dr0) / F32LO(in_dr14),
                                              SUB84(in_dr0,0));
                  }
                  else {
                    in_dr0 = in_dr0 / in_dr14;
                  }
                  if (cVar12 == '\0') {
                    *(int *)(unsigned)(ar4 + 0x234) = (int)((ulonglong)in_dr0 >> 0x20);
                  }
                  else {
                    *(double *)(unsigned)(ar4 + 0x234) = in_dr0;
                  }
                  *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
switchD_8c0a242e_caseD_2:
                  fVar5 = F32LO(in_dr0);
                  if (cVar12 == '\0') {
                    fVar5 = *(float *)(unsigned)(ar4 + 0x28);
                  }
                  else {
                    in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
                  }
                  uVar8 = (ulonglong)(uint)fVar5;
                  if (cVar11 == '\0' && 0.0 < fVar5) {
                    if (cVar12 == '\0') {
                      dVar9 = CONCAT44D(0x41f00000,*(undefined4 *)(unsigned)(ar4 + 0x244));
                    }
                    else {
                      in_xd0 = *(double *)(unsigned)(ar4 + 0x244);
                      dVar9 = 1.19735218507889e-311;
                    }
                    if (cVar11 == '\0') {
                      fVar5 = F32LO(dVar9) + F32HI(dVar9);
                    }
                    else {
                      fVar5 = SUB84(dVar9 + dVar9,0);
                    }
                    if (cVar12 == '\0') {
                      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x234),fVar5);
                    }
                    else {
                      dVar9 = *(double *)(unsigned)(ar4 + 0x234);
                    }
                    if (cVar11 == '\0') {
                      fVar5 = F32LO(dVar9) * F32HI(dVar9);
                    }
                    else {
                      fVar5 = SUB84(dVar9 * dVar9,0);
                    }
                    if (cVar12 == '\0') {
                      uVar6 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x28),fVar5);
                    }
                    else {
                      uVar6 = *(undefined8 *)(unsigned)(ar4 + 0x28);
                    }
                    if (cVar11 == '\0' && (float)uVar6 < F32HI(uVar6)) {
                      (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03f3ac(ar4 + 0xb0,pdVar3,ar6_00,ar7_00));
                      (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031764(ar4,ar6,ar5,ar7_00));
                      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
                      if (cVar12 == '\0') {
                        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x234),
                                                 *(undefined4 *)(unsigned)(ar4 + 0x28));
                      }
                      else {
                        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
                        dVar9 = *(double *)(unsigned)(ar4 + 0x234);
                      }
                      if (cVar11 == '\0') {
                        fVar5 = F32LO(dVar9) - F32HI(dVar9);
                      }
                      else {
                        fVar5 = SUB84(dVar9 - dVar9,0);
                      }
                      if (cVar12 == '\0') {
                        *(float *)(unsigned)(ar4 + 0x28) = fVar5;
                        fVar5 = *(float *)(unsigned)(ar4 + 0x28);
                      }
                      else {
                        *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
                      }
                      if (cVar11 != '\0' || fVar5 <= 0.0) {
                        if (cVar12 == '\0') {
                          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
                        }
                        else {
                          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
                        }
                      }
                      uVar8 = (ulonglong)(uint)fVar5;
                      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c0230f0(ar4 + 0x14,ar6,ar5,ar7_00); });
                      uVar1 = (vsp = ((unsigned long)(fr0_ - 236)), Vec3_length(((undefined1 *)(fr0_ - 0x64)),ar6,ar5,ar7_00));
                      (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x80,uVar1,ar5,ar7_00));
                      uVar1 = 0xffffffff;
                      (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar5,ar7_00));
                      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xe8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 236)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar5,ar7_00); });
                      if (cVar12 == '\0') {
                        *(int *)(unsigned)(ar4 + 0x244) = (int)(uVar8 >> 0x20);
                      }
                      else {
                        *(ulonglong *)(unsigned)(ar4 + 0x244) = uVar8;
                      }
                      goto switchD_8c0a242e_default;
                    }
                    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
                  }
                  else {
                    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xe8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 236)); CAnimBody_GetCurFrame(ar4 + 0xb0,pdVar3,ar6_00,ar7_00); });
                    if (cVar12 == '\0') {
                      *(int *)(unsigned)(ar4 + 0x244) = (int)(uVar8 >> 0x20);
                    }
                    else {
                      *(ulonglong *)(unsigned)(ar4 + 0x244) = uVar8;
                    }
                    if (cVar12 == '\0') {
                      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
                    }
                    else {
                      *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar8 & 0xffffffff;
                    }
                    *(undefined4 *)(unsigned)(ar4 + 300) = 3;
                  }
                  goto switchD_8c0a242e_caseD_3;
                }
              }
            }
          }
        }
      }
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c0230f0(ar4 + 0x14,pdVar3,ar6_00,ar7_00); });
    uVar1 = (vsp = ((unsigned long)(fr0_ - 236)), Vec3_length(((undefined1 *)(fr0_ - 0x54)),pdVar3,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x80,uVar1,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7_00));
  }
switchD_8c0a242e_default:
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(&(*(float *)(fr0_ - 0x28)),0xffffffff,((void *)0x8c022cb0),&(*(float *)(fr0_ - 0x28))));
  return 1;
}

__asm__(".globl _FUN_8c0a23c4\n.set _FUN_8c0a23c4, _FUN_8c0a23c4_def\n");
//@unit 8c0a2bf4
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
undefined4 FUN_8c0a2bf4_def(int ar4,double *ar5,double *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a2bf4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 176; for (int i_ = 0; i_ < 176; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  double *ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  float fVar6;
  double in_dr0 = 0;
  float fVar10;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  double in_dr2 = 0;
  double dVar11;
  undefined8 in_dr4 = 0;
  undefined4 uVar12;
  undefined8 in_dr14 = 0;
  double in_xd0 = 0;
  double in_xd14 = 0;
  bool bVar13;
  char cVar14;
  char cVar15;
  
  uVar3 = SUB84(in_dr2,0);
  cVar15 = '\0';
  cVar14 = '\0';
  dVar8 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr4 >> 0x20));
  ar5_00 = (double *)(unsigned)0x1;
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if (7 < iVar2) {
    return 1;
  }
  if (iVar2 < 0) {
    return 1;
  }
                    
  switch(iVar2) {
  case 0:
    (vsp = ((unsigned long)(fr0_ - 176)), vec3_clear(ar4 + 0x224,1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_assign(ar4 + 0x54,ar5,ar6,ar7));
    if (cVar15 == '\0') {
      dVar7 = CONCAT44D(SUB84(dVar8,0),0x41700000);
    }
    else {
      in_xd0 = -4.2458146733691317e-250;
      dVar7 = in_xd14;
    }
    if (cVar14 == '\0') {
      dVar7 = CONCAT44D(F32HI(dVar7) - F32LO(dVar7),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - dVar7;
    }
    if (cVar15 == '\0') {
      *(int *)(unsigned)(ar4 + 0x58) = (int)(D2U(dVar7) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x58) = dVar7;
    }
    (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c031b68(ar4,0x8c2851b0,ar6,ar7));
    iVar2 = ar4 + 0x54;
    (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c031bb4(ar4,ar5,iVar2,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c022fc0(ar5,ar4 + 0x54,iVar2,((void *)0x8c022fc0)));
    uVar3 = SUB84(in_dr2,0);
    fVar6 = F32HI(dVar7);
    if (cVar15 == '\0') {
      fVar10 = 300.0;
    }
    else {
      fVar6 = 300.0;
      fVar10 = 2.46629e-43;
      in_xd0 = dVar7;
    }
    if (cVar14 != '\0' || fVar10 <= fVar6) {
      ar7 = 0;
      uVar4 = 1;
      (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
      ar6 = (double *)(unsigned)0xb0;
      (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,0xb0,ar7));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      goto switchD_8c0a2c2e_caseD_1;
    }
    ar7 = 0;
    ar6 = (double *)(unsigned)0x0;
    ar5_00 = (double *)(unsigned)0x2;
    (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0,0));
    if (cVar15 == '\0') {
      fVar6 = *(float *)(unsigned)(ar4 + 0x28);
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
    }
    in_dr0 = (double)(ulonglong)(uint)fVar6;
    if (fVar6 == 0.0) {
      in_dr0 = CONCAT44D(0x3f800000,fVar6);
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3f800000;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = in_dr0;
      }
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 3;
  case 3:
switchD_8c0a2c2e_caseD_3:
    fVar6 = F32LO(in_dr0);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6,ar7));
    if (iVar2 == 2) {
      (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 176)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7));
    }
    if (cVar15 == '\0') {
      fVar6 = *(float *)(unsigned)(ar4 + 0x18);
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x18);
    }
    cVar5 = cVar14 == '\0' && 0.0 < fVar6;
    if (cVar15 == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)(ar4 + 0x54));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x54);
      dVar7 = *ar5;
    }
    if (cVar14 == '\0') {
      fVar6 = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    if (cVar14 != '\0' || 0.0 <= fVar6) {
      if (cVar15 == '\0') {
        fVar6 = *(float *)(unsigned)(ar4 + 0x14);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x14);
      }
      if (cVar14 != '\0' || 0.0 <= fVar6) {
        cVar5 = cVar5 + '\x01';
      }
    }
    if (cVar15 == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)(ar4 + 0x54));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x54);
      dVar7 = *ar5;
    }
    if (cVar14 == '\0') {
      fVar6 = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    if (cVar14 == '\0' && fVar6 < 0.0) {
      if (cVar15 == '\0') {
        fVar6 = *(float *)(unsigned)(ar4 + 0x14);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x14);
      }
      if (cVar14 == '\0' && fVar6 < 0.0) {
        cVar5 = cVar5 + '\x01';
      }
    }
    if (cVar15 == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 1),*(undefined4 *)(unsigned)(ar4 + 0x5c));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x5c);
      dVar7 = ar5[1];
    }
    if (cVar14 == '\0') {
      fVar6 = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    if (cVar14 != '\0' || 0.0 <= fVar6) {
      if (cVar15 == '\0') {
        fVar6 = *(float *)(unsigned)(ar4 + 0x1c);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x1c);
      }
      if (cVar14 != '\0' || 0.0 <= fVar6) {
        cVar5 = cVar5 + '\x01';
      }
    }
    if (cVar15 == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 1),*(undefined4 *)(unsigned)(ar4 + 0x5c));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x5c);
      dVar7 = ar5[1];
    }
    if (cVar14 == '\0') {
      fVar6 = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    dVar7 = (double)(ulonglong)(uint)fVar6;
    if (cVar14 == '\0' && fVar6 < 0.0) {
      if (cVar15 == '\0') {
        fVar6 = *(float *)(unsigned)(ar4 + 0x1c);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x1c);
      }
      dVar7 = (double)(ulonglong)(uint)fVar6;
      if (cVar14 == '\0' && fVar6 < 0.0) {
        cVar5 = cVar5 + '\x01';
      }
    }
    if (cVar5 == '\x03') {
      if (cVar15 == '\0') {
        uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x28);
        dVar7 = CONCAT44D(uVar3,SUB84(dVar7,0));
        *(undefined4 *)(unsigned)(ar4 + 0x24) = uVar3;
      }
      else {
        dVar7 = *(double *)(unsigned)(ar4 + 0x28);
        *(double *)(unsigned)(ar4 + 0x24) = dVar7;
      }
      ar5_00 = (double *)(unsigned)(ar4 + 0x54);
      (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c022fc0(ar5,ar5_00,ar6,ar7));
      if (cVar15 == '\0') {
        dVar11 = CONCAT44D(0x40000000,SUB84(dVar7,0));
        dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar11 = 1.19733612505215e-311;
      }
      if (cVar14 == '\0') {
        dVar7 = CONCAT44D(F32HI(dVar7) *
                                 F32HI(dVar11),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 * dVar11;
      }
      if (cVar15 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(dVar11,0));
      }
      else {
        dVar11 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        dVar8 = CONCAT44D(F32HI(dVar7) /
                                 F32HI(dVar11),SUB84(dVar7,0));
      }
      else {
        dVar8 = dVar7 / dVar11;
      }
      if (cVar15 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(dVar11,0));
      }
      else {
        dVar7 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        dVar7 = CONCAT44D(F32HI(dVar7) /
                                 F32HI(dVar8),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 / dVar8;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x234) = (int)(D2U(dVar7) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x234) = dVar7;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
    else {
      ar5_00 = (double *)(unsigned)(ar4 + 0x54);
      ar6 = ar5;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c031764(ar4,ar5_00,ar5,ar7));
      if (iVar2 != 0) {
        if (cVar15 == '\0') {
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5 + 4),SUB84(in_dr2,0));
          dVar7 = CONCAT44D(SUB84(dVar8,0),0x41700000);
        }
        else {
          in_dr2 = *(double *)(unsigned)((int)ar5 + 4);
          in_xd0 = 1.19734804055586e-311;
          dVar7 = in_xd14;
        }
        if (cVar14 == '\0') {
          fVar6 = F32HI(dVar7) - F32LO(dVar7);
          dVar7 = CONCAT44D(fVar6,SUB84(dVar7,0));
          bVar13 = F32HI(in_dr2) < fVar6;
        }
        else {
          dVar7 = dVar7 - dVar7;
          bVar13 = in_dr2 < dVar7;
        }
        if (bVar13) {
          if (cVar15 == '\0') {
            dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x234),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
            dVar7 = *(double *)(unsigned)(ar4 + 0x234);
          }
          if (cVar14 == '\0') {
            fVar6 = F32LO(dVar7) - F32HI(dVar7);
          }
          else {
            fVar6 = SUB84(dVar7 - dVar7,0);
          }
          if (cVar15 == '\0') {
            *(float *)(unsigned)(ar4 + 0x28) = fVar6;
            fVar6 = *(float *)(unsigned)(ar4 + 0x28);
          }
          else {
            *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
            in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
          }
          if (cVar14 == '\0' && 0.0 < fVar6) {
            return 1;
          }
          if (cVar15 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar6;
          }
          if (cVar15 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x234) = (ulonglong)(uint)fVar6;
          }
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          break;
        }
      }
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = D2U(dVar7) & 0xffffffff;
      }
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x234) = D2U(dVar7) & 0xffffffff;
      }
      *(undefined4 *)(unsigned)(ar4 + 300) = 4;
    }
    break;
  case 1:
switchD_8c0a2c2e_caseD_1:
    ar5_00 = (double *)(unsigned)((int)ar5 + 4);
    if (cVar15 == '\0') {
      in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)ar5_00,uVar3);
      dVar7 = CONCAT44D(SUB84(dVar8,0),0x41700000);
    }
    else {
      in_dr2 = *ar5_00;
      in_xd0 = 1.19734804055586e-311;
      dVar7 = in_xd14;
    }
    if (cVar14 == '\0') {
      fVar6 = F32HI(dVar7) - F32LO(dVar7);
      dVar7 = CONCAT44D(fVar6,SUB84(dVar7,0));
      bVar13 = F32HI(in_dr2) < fVar6;
    }
    else {
      dVar7 = dVar7 - dVar7;
      bVar13 = in_dr2 < dVar7;
    }
    if (bVar13) {
      ar5_00 = (double *)(unsigned)(ar4 + 0x54);
      (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c022fc0(ar5,ar5_00,ar6,ar7));
      if (cVar15 == '\0') {
        in_dr0 = CONCAT44D(0x43960000,(int)(D2U(dVar7) >> 0x20));
      }
      else {
        in_dr0 = 6.37158960238423e-312;
        in_xd0 = dVar7;
      }
      if (cVar14 != '\0' || F32HI(in_dr0) <= SUB84(in_dr0,0)) {
LAB_8c0a2e1c:
        (vsp = ((unsigned long)(fr0_ - 176)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7));
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xac))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7); });
        fVar6 = F32HI(in_dr0);
        if (cVar15 == '\0') {
          fVar10 = 15.0;
          in_dr0 = in_xd0;
        }
        else {
          fVar6 = 15.0;
          fVar10 = 1.79366e-43;
        }
        if (cVar14 == '\0' && fVar6 < fVar10) {
          return 1;
        }
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xac))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7); });
        if (cVar15 == '\0') {
          fVar6 = 35.0;
        }
        else {
          in_dr0 = CONCAT44D(fVar10,fVar6);
          fVar10 = 35.0;
          fVar6 = 7.73517e-43;
        }
        if (cVar14 == '\0' && fVar10 < fVar6) {
          if (cVar15 == '\0') {
            dVar8 = CONCAT44D(0x3e19999a,*(undefined4 *)(unsigned)(ar4 + 0x228));
          }
          else {
            in_dr0 = *(double *)(unsigned)(ar4 + 0x228);
            dVar8 = -8.3327967895966e-251;
          }
          if (cVar14 == '\0') {
            fVar6 = F32LO(dVar8) + F32HI(dVar8);
          }
          else {
            fVar6 = SUB84(dVar8 + dVar8,0);
          }
          if (cVar15 == '\0') {
            *(float *)(unsigned)(ar4 + 0x228) = fVar6;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x228) = in_dr0;
          }
        }
        else {
          if (cVar15 == '\0') {
            dVar8 = CONCAT44D(0x3df5c28f,*(undefined4 *)(unsigned)(ar4 + 0x228));
          }
          else {
            in_dr0 = *(double *)(unsigned)(ar4 + 0x228);
            dVar8 = 9.363579837252917e+86;
          }
          if (cVar14 == '\0') {
            fVar6 = F32LO(dVar8) - F32HI(dVar8);
          }
          else {
            fVar6 = SUB84(dVar8 - dVar8,0);
          }
          if (cVar15 == '\0') {
            *(float *)(unsigned)(ar4 + 0x228) = fVar6;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x228) = in_dr0;
          }
        }
        (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7));
        return 1;
      }
      if (cVar15 == '\0') {
        dVar7 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x18);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x18);
        dVar7 = in_dr0;
      }
      in_dr0 = (double)(D2U(dVar7) & 0xffffffff);
      if (cVar14 != '\0' || SUB84(dVar7,0) <= 0.0) goto LAB_8c0a2e1c;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      goto switchD_8c0a2c2e_caseD_2;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = D2U(dVar7) & 0xffffffff;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x234) = D2U(dVar7) & 0xffffffff;
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 4;
    (vsp = ((unsigned long)(fr0_ - 176)), vec3_clear(ar4 + 0x224,ar5_00,ar6,ar7));
    break;
  case 2:
switchD_8c0a2c2e_caseD_2:
    iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7));
    if (iVar2 == 1) {
      (vsp = ((unsigned long)(fr0_ - 176)), vec3_clear(ar4 + 0x224,ar5_00,ar6,ar7));
      uVar12 = SUB84(dVar8,0);
      uVar4 = SUB84(in_dr0,0);
      ar7 = 0;
      ar6 = (double *)(unsigned)0xffffffff;
      uVar3 = 2;
      (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
      if (cVar15 == '\0') {
        uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x28);
        dVar8 = CONCAT44D(uVar3,uVar4);
        *(undefined4 *)(unsigned)(ar4 + 0x24) = uVar3;
      }
      else {
        dVar8 = *(double *)(unsigned)(ar4 + 0x28);
        *(double *)(unsigned)(ar4 + 0x24) = dVar8;
      }
      ar5_00 = (double *)(unsigned)(ar4 + 0x54);
      (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c022fc0(ar5,ar5_00,ar6,ar7));
      uVar3 = SUB84(dVar8,0);
      if (cVar15 == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),uVar12);
        dVar7 = CONCAT44D(0x40000000,uVar3);
      }
      else {
        dVar7 = 1.19733612505215e-311;
      }
      if (cVar14 == '\0') {
        dVar8 = CONCAT44D(F32HI(dVar8) *
                                 F32HI(dVar7),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 * dVar7;
      }
      if (cVar15 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(dVar7,0));
      }
      else {
        dVar7 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        dVar8 = CONCAT44D(F32HI(dVar8) /
                                 F32HI(dVar7),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 / dVar7;
      }
      if (cVar15 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(dVar7,0));
      }
      else {
        dVar7 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        in_dr0 = CONCAT44D(F32HI(dVar7) /
                                  F32HI(dVar8),SUB84(dVar7,0));
      }
      else {
        in_dr0 = dVar7 / dVar8;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x234) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x234) = in_dr0;
      }
      (vsp = ((unsigned long)(fr0_ - 176)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      goto switchD_8c0a2c2e_caseD_3;
    }
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xac))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7); });
    fVar6 = F32HI(in_dr0);
    if (cVar15 == '\0') {
      fVar10 = 15.0;
      in_dr0 = in_xd0;
    }
    else {
      fVar6 = 15.0;
      fVar10 = 35.0;
    }
    if (cVar14 == '\0' && fVar6 < fVar10) {
      return 1;
    }
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xac))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7); });
    if (cVar15 == '\0') {
      fVar6 = 35.0;
    }
    else {
      in_dr0 = CONCAT44D(fVar10,fVar6);
      fVar10 = 35.0;
      fVar6 = 7.73517e-43;
    }
    in_xd0 = in_dr0;
    if (cVar14 == '\0' && fVar10 < fVar6) {
      if (cVar15 == '\0') {
        dVar7 = CONCAT44D(0x3e19999a,*(undefined4 *)(unsigned)(ar4 + 0x228));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x228);
        dVar7 = -8.3327967895966e-251;
      }
      if (cVar14 == '\0') {
        dVar7 = (double)(ulonglong)(uint)(F32LO(dVar7) + F32HI(dVar7));
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x228) = SUB84(dVar7,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x228) = in_xd0;
      }
    }
    else {
      if (cVar15 == '\0') {
        dVar7 = CONCAT44D(0x3df5c28f,*(undefined4 *)(unsigned)(ar4 + 0x228));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x228);
        dVar7 = 3.6211232371055283e+96;
      }
      if (cVar14 == '\0') {
        dVar7 = (double)(ulonglong)(uint)(F32LO(dVar7) - F32HI(dVar7));
      }
      else {
        dVar7 = dVar7 - dVar7;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x228) = SUB84(dVar7,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x228) = in_xd0;
      }
    }
    ar5_00 = (double *)(unsigned)(ar4 + 0x54);
    ar6 = ar5;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c031764(ar4,ar5_00,ar5,ar7));
    if (iVar2 != 0) {
      if (cVar15 == '\0') {
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5 + 4),SUB84(in_dr2,0));
        dVar7 = CONCAT44D(SUB84(dVar8,0),0x41700000);
      }
      else {
        in_dr2 = *(double *)(unsigned)((int)ar5 + 4);
        in_xd0 = 1.19734804055586e-311;
        dVar7 = in_xd14;
      }
      if (cVar14 == '\0') {
        fVar6 = F32HI(dVar7) - F32LO(dVar7);
        dVar7 = CONCAT44D(fVar6,SUB84(dVar7,0));
        bVar13 = F32HI(in_dr2) < fVar6;
      }
      else {
        dVar7 = dVar7 - dVar7;
        bVar13 = in_dr2 < dVar7;
      }
      if (bVar13) {
        return 1;
      }
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = D2U(dVar7) & 0xffffffff;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x234) = D2U(dVar7) & 0xffffffff;
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 4;
    break;
  case 5:
    goto switchD_8c0a2c2e_caseD_5;
  case 6:
    goto switchD_8c0a2c2e_caseD_6;
  case 7:
    if (*(int *)(unsigned)(ar4 + 0x248) < 0x12d) {
      (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c03f3ac(ar4 + 0xb0,1,ar6,ar7));
      *(int *)(unsigned)(ar4 + 0x248) = *(int *)(unsigned)(ar4 + 0x248) + 1;
      return 1;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,1,ar6,ar7));
    if (iVar2 != 1) {
      return 1;
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x248) = 0;
    return 0;
  }
  uVar3 = SUB84(in_dr2,0);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6,ar7));
  if (iVar2 == 2) {
    (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 176)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7));
  }
  if (cVar15 == '\0') {
    dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x234),*(undefined4 *)(unsigned)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
    dVar7 = *(double *)(unsigned)(ar4 + 0x234);
  }
  if (cVar14 == '\0') {
    fVar6 = F32LO(dVar7) - F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 - dVar7,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x28) = fVar6;
    fVar6 = *(float *)(unsigned)(ar4 + 0x28);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
    in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
  }
  dVar7 = (double)(ulonglong)(uint)fVar6;
  if (cVar14 == '\0' && 0.0 < fVar6) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7));
    if (iVar2 != 0) {
      if (cVar15 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5 + 4),uVar3);
        in_xd14 = CONCAT44D(SUB84(dVar8,0),0x41700000);
      }
      else {
        dVar11 = *(double *)(unsigned)((int)ar5 + 4);
        in_xd0 = 1.19734804055586e-311;
      }
      if (cVar14 == '\0') {
        fVar6 = F32HI(in_xd14) - F32LO(in_xd14);
        dVar7 = CONCAT44D(fVar6,SUB84(in_xd14,0));
        bVar13 = F32HI(dVar11) < fVar6;
      }
      else {
        dVar7 = in_xd14 - in_xd14;
        bVar13 = dVar11 < dVar7;
      }
      if (bVar13) {
        if (cVar15 == '\0') {
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(dVar11,0));
          dVar7 = CONCAT44D(0x41f80000,*(undefined4 *)(unsigned)(ar4 + 0x234));
        }
        else {
          dVar8 = *(double *)(unsigned)(ar4 + 0x28);
          dVar7 = 6.37145555296751e-312;
        }
        if (cVar14 == '\0') {
          bVar13 = F32LO(dVar7) * F32HI(dVar7) <
                   F32HI(dVar8);
        }
        else {
          bVar13 = dVar7 * dVar7 < dVar8;
        }
        if (bVar13) {
          return 1;
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        return 1;
      }
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = D2U(dVar7) & 0xffffffff;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x234) = D2U(dVar7) & 0xffffffff;
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 5;
  }
  else {
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar6;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x234) = (ulonglong)(uint)fVar6;
    }
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
switchD_8c0a2c2e_caseD_5:
  if (cVar15 == '\0') {
    dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x234),*(undefined4 *)(unsigned)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
    dVar7 = *(double *)(unsigned)(ar4 + 0x234);
  }
  if (cVar14 == '\0') {
    fVar6 = F32LO(dVar7) - F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 - dVar7,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x28) = fVar6;
    fVar6 = *(float *)(unsigned)(ar4 + 0x28);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
    in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
  }
  dVar7 = (double)(ulonglong)(uint)fVar6;
  if (cVar14 != '\0' || fVar6 <= 0.0) {
LAB_8c0a3432:
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = D2U(dVar7) & 0xffffffff;
    }
    dVar7 = (double)(D2U(dVar7) & 0xffffffff);
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x234) = dVar7;
    }
  }
  else {
    if (cVar15 == '\0') {
      dVar7 = CONCAT44D(0x41700000,*(undefined4 *)(unsigned)((int)ar5 + 4));
    }
    else {
      in_xd0 = *(double *)(unsigned)((int)ar5 + 4);
      dVar7 = -8.33279687642364e-251;
    }
    if (cVar14 == '\0') {
      bVar13 = SUB84(dVar7,0) < F32LO(dVar8) - F32HI(dVar7);
    }
    else {
      bVar13 = dVar7 < dVar8 - dVar7;
    }
    if (!bVar13) goto LAB_8c0a3432;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c031764(ar4,ar4 + 0x54,ar5,ar4 + 0x54));
  if (iVar2 == 0) {
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = D2U(dVar7) & 0xffffffff;
    }
  }
  ar7 = 0;
  uVar4 = 0xffffffff;
  uVar3 = 8;
  (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
  (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar4,ar7));
  *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
switchD_8c0a2c2e_caseD_6:
  if (cVar15 == '\0') {
    dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x234),*(undefined4 *)(unsigned)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
    dVar8 = *(double *)(unsigned)(ar4 + 0x234);
  }
  if (cVar14 == '\0') {
    fVar6 = F32LO(dVar8) - F32HI(dVar8);
  }
  else {
    fVar6 = SUB84(dVar8 - dVar8,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x28) = fVar6;
    fVar6 = *(float *)(unsigned)(ar4 + 0x28);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
  }
  if (cVar14 != '\0' || fVar6 <= 0.0) {
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar6;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x234) = (ulonglong)(uint)fVar6;
    }
  }
  uVar9 = (ulonglong)(uint)fVar6;
  iVar2 = ar4 + 0x54;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c031764(ar4,iVar2,ar5,ar7));
  if (iVar1 == 0) {
    uVar9 = uVar9 & 0xffffffff;
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar9;
    }
  }
  uVar3 = (undefined4)(uVar9 >> 0x20);
  (vsp = ((unsigned long)(fr0_ - 176)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar2,ar5,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xac))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); CAnimBody_GetCurFrame(ar4 + 0xb0,iVar2,ar5,ar7); });
  if (cVar15 == '\0') {
    uVar9 = CONCAT44(0x41f00000,uVar3);
  }
  else {
    uVar9 = 0x6013d10d41f00000;
  }
  if (cVar14 != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar9 & 0xffffffff;
    }
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c0a2bf4\n.set _FUN_8c0a2bf4, _FUN_8c0a2bf4_def\n");
//@unit 8c0a3624
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
undefined4 FUN_8c0a3624_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a3624";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 uVar3;
  float in_fr1 = 0;
  float extraout_fr1 = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  if (*(int *)(unsigned)(ar4 + 300) == 0) {
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c032518(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x20)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
    ar7 = 0;
    ar6_00 = 0xffffffff;
    ar5_00 = 1;
    (vsp = ((unsigned long)(fr0_ - 36)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 36)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c031b68(ar4,0x8c2851b0,ar6_00,ar7));
    ar6 = ar4 + 0x54;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c031bb4(ar4,ar5,ar6,ar7));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    in_fr1 = extraout_fr1;
  }
  else if (*(int *)(unsigned)(ar4 + 300) != 1) {
    return 1;
  }
  if (cVar5 == '\0') {
    in_fr1 = *(float *)(unsigned)(ar4 + 0x130);
  }
  if (cVar4 == '\0' && in_fr1 < 0.0) {
    (vsp = ((unsigned long)(fr0_ - 36)), vec3_clear(ar4 + 0x224,uVar2,ar6,ar7));
    uVar2 = ar5;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c031c74(ar4,ar5,ar5,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,uVar2,ar7));
    if (iVar1 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      uVar3 = 0;
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 36)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7));
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c0a3624\n.set _FUN_8c0a3624, _FUN_8c0a3624_def\n");
//@unit 8c0a37c8
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
undefined4 FUN_8c0a37c8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a37c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  ulonglong in_dr0 = 0;
  double dVar5;
  ulonglong uVar6;
  undefined8 in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = 1;
  iVar3 = *(int *)(unsigned)(ar5 + 0x10);
  iVar1 = *(int *)(unsigned)(ar4 + 0x68);
  if (iVar1 == 0) {
    if (iVar3 != 3) {
      return iVar3;
    }
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
    if (cVar8 == '\0') {
      *(int *)(unsigned)(ar4 + 0xa0) = (int)(in_dr0 >> 0x20);
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0xa0) = in_dr0;
    }
    (vsp = ((unsigned long)(fr0_ - 64)), vec3_clear(ar4 + 0x224,ar5,ar6,ar7));
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0 & 0xffffffff;
    }
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x234) = in_dr0 & 0xffffffff;
    }
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c03c314(ar4,ar5,ar6,ar7));
    ar7 = 0;
    ar6 = 0xffffffff;
    ar5 = 2;
    (vsp = ((unsigned long)(fr0_ - 64)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 64)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7));
    *(int *)(unsigned)(ar4 + 0x68) = *(int *)(unsigned)(ar4 + 0x68) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return iVar3;
      }
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x3c)),*(undefined4 *)(unsigned)(ar5 + 0xc),ar6,ar7));
      iVar3 = ar4 + 0x54;
      uVar2 = 1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), s_CMushroomerBody_AwayFrom_0a1ed0(ar4,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),1,iVar3));
      (vsp = ((unsigned long)(fr0_ - 64)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,uVar2,iVar3));
      if (iVar1 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        return 3;
      }
      return 3;
    }
    goto LAB_8c0a38c6;
  }
  (vsp = ((unsigned long)(fr0_ - 64)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0324ac(ar4,ar5,ar6,ar7));
  if (iVar3 == 3) {
    return 3;
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(0x3e99999a,*(undefined4 *)(unsigned)(ar4 + 0x94));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x94);
    dVar5 = 1.3411048233047396e-08;
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) * F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(unsigned)(ar4 + 0x94) = fVar4;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x94) = in_xd0;
  }
  *(int *)(unsigned)(ar4 + 0x68) = *(int *)(unsigned)(ar4 + 0x68) + 1;
LAB_8c0a38c6:
  (vsp = ((unsigned long)(fr0_ - 64)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x94));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x94);
    dVar5 = -1.0142130068337341e-250;
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) + F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(unsigned)(ar4 + 0x94) = fVar4;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x94) = in_xd0;
  }
  if (cVar8 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
    uVar6 = CONCAT44(0xbf800000,*(undefined4 *)(unsigned)(ar4 + 0x94));
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xa0) = (ulonglong)(uint)fVar4;
    uVar6 = 0xb0bf800000;
  }
  if (cVar7 != '\0' || (float)(uVar6 >> 0x20) <= (float)uVar6) {
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c073c9c(ar4,ar5,ar6,ar7));
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x94) = uVar6 & 0xffffffff;
    }
    *(int *)(unsigned)(ar4 + 0x68) = *(int *)(unsigned)(ar4 + 0x68) + 1;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    *(undefined4 *)(unsigned)(ar4 + 300) = 0;
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x20)),ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x20)),ar6,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_normalize(ar4 + 0x54,uVar2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  }
  return 3;
}

__asm__(".globl _FUN_8c0a37c8\n.set _FUN_8c0a37c8, _FUN_8c0a37c8_def\n");
//@unit 8c0a3aac
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
undefined4 FUN_8c0a3aac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a3aac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar6_00;
  undefined4 uVar4;
  float fVar5;
  code *pcVar6;
  undefined8 in_dr0 = 0;
  code *pcVar7;
  float fVar8;
  char cVar9;
  char cVar10;
  
  fVar5 = F32HI(in_dr0);
  cVar10 = '\0';
  cVar9 = '\0';
  uVar4 = 1;
  if (*(int *)(unsigned)(ar4 + 300) == 0) {
    ar7 = 0;
    ar6_00 = 0;
    uVar3 = 4;
    (vsp = ((unsigned long)(fr0_ - 44)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0,0));
    *(undefined4 *)(unsigned)(ar4 + 0x274) = 1;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else {
    uVar3 = ar5;
    ar6_00 = ar6;
    if (*(int *)(unsigned)(ar4 + 300) != 1) {
      return 1;
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), get_field_1c_026dd8(ar4 + 0xb0,uVar3,ar6_00,ar7));
  if (iVar1 == 4) {
    (vsp = ((unsigned long)(fr0_ - 44)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x18)),uVar3,ar6_00,ar7));
    iVar1 = ar4 + 0x80;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 44)) - 8); FUN_8c031eb0(ar4,ar5,ar6,iVar1); });
    (vsp = ((unsigned long)(fr0_ - 44)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x28)),ar6,iVar1));
    (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,iVar1));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 44)), object_dtor_delete(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,iVar1));
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,iVar1); });
    if (cVar10 == '\0') {
      pcVar7 = (code *)0x41200000;
    }
    else {
      fVar5 = 10.0;
      pcVar7 = ((void *)0x8c023d68);
    }
    if (cVar9 != '\0' || (float)(uint)pcVar7 <= fVar5) {
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,iVar1); });
      if (cVar10 == '\0') {
        pcVar6 = pcVar7;
        pcVar7 = (code *)0x42200000;
      }
      else {
        pcVar6 = (code *)0x42200000;
        pcVar7 = (code *)0x24c;
      }
      if (cVar9 == '\0' && (float)(uint)pcVar6 < (float)(uint)pcVar7) {
        iVar2 = *(int *)(unsigned)(ar4 + 0x24c);
        *(int *)(unsigned)(ar4 + 0x24c) = iVar2 + 1;
        *(int *)(unsigned)(ar4 + 0x24c) = iVar2 + 2;
        if (4 < *(int *)(unsigned)(ar4 + 0x24c)) {
          *(undefined4 *)(unsigned)(ar4 + 0x24c) = 5;
        }
      }
    }
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,iVar1); });
    if (cVar10 == '\0') {
      fVar5 = 40.0;
    }
    else {
      pcVar7 = (code *)0x42200000;
      fVar5 = 8.23963e-43;
    }
    if ((cVar9 != '\0' || fVar5 <= (float)(uint)pcVar7) &&
       (*(int *)(unsigned)(ar4 + 0x24c) = *(int *)(unsigned)(ar4 + 0x24c) + -1, *(int *)(unsigned)(ar4 + 0x24c) < 3)) {
      *(undefined4 *)(unsigned)(ar4 + 0x24c) = 0;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 44)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6,iVar1));
    if (iVar2 == 1) {
      uVar4 = 0;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x24c) = 0;
    }
    else if (*(int *)(unsigned)(ar4 + 0x274) != 0) {
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,iVar1); });
      if (cVar10 == '\0') {
        fVar8 = 35.0;
      }
      else {
        fVar5 = 35.0;
        fVar8 = 6.50202e-43;
      }
      if (cVar9 != '\0' || fVar8 <= fVar5) {
        *(int *)(unsigned)(ar4 + 0x1d0) = *(int *)(unsigned)(ar4 + 0x1d0) + *(int *)(unsigned)(ar4 + 0x274);
        if (*(int *)(unsigned)(ar4 + 0x1d0) < 7) {
          if (*(int *)(unsigned)(ar4 + 0x1d0) < 2) {
            *(undefined4 *)(unsigned)(ar4 + 0x274) = 0;
          }
        }
        else {
          *(int *)(unsigned)(ar4 + 0x274) = -*(int *)(unsigned)(ar4 + 0x274);
        }
      }
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 44)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6_00,ar7));
  }
  return uVar4;
}

__asm__(".globl _FUN_8c0a3aac\n.set _FUN_8c0a3aac, _FUN_8c0a3aac_def\n");
//@unit 8c0a3d08
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
uint FUN_8c0a3d08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a3d08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  undefined1 *ar7_01;
  
  uVar3 = ar6;
  ar7_00 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c023cd4(ar4 + 0x250,ar6,ar6,ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x1c)),ar7,uVar3,ar7_00));
    ar7_01 = ((undefined1 *)(fr0_ - 0x1c));
    uVar3 = ar6;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0a1828(ar4,ar5,ar6,ar7_01));
    (vsp = ((unsigned long)(fr0_ - 32)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,uVar3,ar7_01));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 32)), Vec3_assign(ar4 + 0x250,ar6,uVar3,ar7_01));
    }
    uVar2 = (uint)(iVar1 != 0);
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c031de8(ar4,0,uVar3,ar7_00));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0a3d08\n.set _FUN_8c0a3d08, _FUN_8c0a3d08_def\n");
//@unit 8c0a3dc0
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
undefined4 FUN_8c0a3dc0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a3dc0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined1 *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float fVar3;
  double in_dr0 = 0;
  double dVar4;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_set_zero(&(*(float *)(fr0_ - 0x14)),ar5,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); Vec3_sub(ar6,ar5,ar6_00,ar7_00); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 104)), Vec3_length(((undefined1 *)(fr0_ - 0x34)),ar5,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),uVar1,ar6_00,ar7_00));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); FUN_8c0230f0(ar7,uVar1,ar6_00,ar7_00); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x24)),uVar1,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7_00));
  (*(undefined4 *)(fr0_ - 0x10)) = SUB84(in_dr0,0);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 == '\0') {
    (*(undefined4 *)(fr0_ - 0x10)) = uVar1;
    uVar1 = (*(undefined4 *)(fr0_ - 0xc));
  }
  (*(undefined4 *)(fr0_ - 0xc)) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7_00));
  ar5_00 = ((undefined1 *)(fr0_ - 0x24));
  (*(int *)(fr0_ - 0x60)) = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c023334(ar7,ar5_00,ar6_00,ar7_00));
  if ((*(int *)(fr0_ - 0x60)) == 4) {
    if (cVar6 == '\0') {
      in_dr0 = CONCAT44D(0xbf800000,(*(undefined4 *)(fr0_ - 0x10)));
    }
    else {
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0xc)),(*(undefined4 *)(fr0_ - 0x10)));
      in_dr0 = -7.941325842067545e-251;
    }
    if (cVar5 == '\0') {
      fVar3 = F32HI(in_dr0);
      in_dr0 = CONCAT44D(fVar3,F32LO(in_dr0) * fVar3);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (cVar6 == '\0') {
      (*(undefined4 *)(fr0_ - 0x10)) = SUB84(in_dr0,0);
    }
    else {
      (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)in_xd0;
      (*(undefined4 *)(fr0_ - 0xc)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
  }
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0231c8(((undefined1 *)(fr0_ - 0x24)),ar5_00,ar6_00,ar7_00));
  iVar2 = (int)((ulonglong)in_dr0 >> 0x20);
  (*(int *)(fr0_ - 0x64)) = iVar2;
  if (cVar6 != '\0') {
    (*(int *)(fr0_ - 0x64)) = SUB84(in_dr0,0);
    (*(int *)(fr0_ - 0x60)) = iVar2;
  }
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0231c8(ar7,ar5_00,ar6_00,ar7_00));
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 == '\0') {
    in_dr0 = CONCAT44D(uVar1,(*(int *)(fr0_ - 0x64)));
  }
  else {
    in_xd0 = CONCAT44((*(int *)(fr0_ - 0x60)),uVar1);
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(in_dr0) - F32HI(in_dr0);
  }
  else {
    fVar3 = SUB84(in_dr0 - in_dr0,0);
  }
  (*(float *)(fr0_ - 0x14)) = fVar3;
  if (cVar6 != '\0') {
    (*(float *)(fr0_ - 0x14)) = (float)in_xd0;
    (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  if (cVar5 == '\0' && fVar3 < 0.0) {
    if (cVar6 == '\0') {
      dVar4 = CONCAT44D(0xbf800000,(*(float *)(fr0_ - 0x14)));
    }
    else {
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
      dVar4 = -7.941325842067545e-251;
    }
    if (cVar5 == '\0') {
      (*(float *)(fr0_ - 0x14)) = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      (*(float *)(fr0_ - 0x14)) = SUB84(dVar4 * dVar4,0);
    }
    if (cVar6 != '\0') {
      (*(float *)(fr0_ - 0x14)) = (float)in_xd0;
      (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0232e8(ar7,((undefined1 *)(fr0_ - 0x24)),ar6_00,ar7_00));
  if (iVar2 == 1) {
    if (cVar6 == '\0') {
      dVar4 = CONCAT44D(0xbf800000,(*(float *)(fr0_ - 0x14)));
    }
    else {
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
      dVar4 = -7.941325842067545e-251;
    }
    if (cVar5 == '\0') {
      (*(float *)(fr0_ - 0x14)) = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      (*(float *)(fr0_ - 0x14)) = SUB84(dVar4 * dVar4,0);
    }
    if (cVar6 != '\0') {
      (*(float *)(fr0_ - 0x14)) = (float)in_xd0;
      (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
  }
  (vsp = ((unsigned long)(fr0_ - 104)), vec3_copy_8c02b5fc(s0,&(*(float *)(fr0_ - 0x14)),ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 104)), object_dtor_delete(&(*(float *)(fr0_ - 0x14)),0xffffffff,ar6_00,ar7_00));
  return 0;
}

__asm__(".globl _FUN_8c0a3dc0\n.set _FUN_8c0a3dc0, _FUN_8c0a3dc0_def\n");
//@unit 8c0a3f4c
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
undefined4 FUN_8c0a3f4c_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a3f4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int ar6_00;
  undefined4 ar6_01;
  undefined4 ar7_00;
  float in_fr1 = 0;
  float fVar3;
  double dVar4;
  code *pcVar6;
  double dVar5;
  float fVar7;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar2 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c022d04(ar4 + 0x200,ar5,ar6,ar7));
  dVar5 = (double)(ulonglong)(uint)in_fr1;
  if (cVar9 == '\0') {
    (*(float *)(fr0_ - 0x58)) = 0.0;
  }
  else {
    ((code * *)(fr0_ - 0x54))[0] = (code *)0x0;
    (*(float *)(fr0_ - 0x58)) = in_fr1;
  }
  fVar7 = 1.0;
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),uVar2,ar6_00,ar7));
  if ((*(int *)(unsigned)(ar6 + 0x68) == 0) || (-1 < (int)((uint)*(byte *)(unsigned)(ar4 + 0x1fc) << 0x1e))) {
    if ((*(int *)(unsigned)(ar6 + 100) == 0) || (-1 < (int)((uint)*(byte *)(unsigned)(ar4 + 0x1fc) << 0x1d))) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
    }
    else if ((*(int *)(unsigned)(ar4 + 0x124) == 0xb) || (*(int *)(unsigned)(ar4 + 0x124) == 0xc)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar6 + 0x50),uVar2,ar6_00,ar7));
      if ((iVar1 == 2) &&
         (iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8) + 0x180))))
                            (*(int *)(unsigned)(ar6 + 0x50),uVar2,ar6_00,ar7)), iVar1 == 4)) {
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
        ar7_00 = 0;
        ar6_01 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 116)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0));
        uVar2 = 3;
        (vsp = ((unsigned long)(fr0_ - 116)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,3,ar6_01,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 116)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_01,ar7_00));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_01,ar7_00));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8) + 0x170))))
                  (*(int *)(unsigned)(ar6 + 0x50),uVar2,ar6_00,ar7));
        fVar3 = F32HI(dVar5);
        (*(float *)(fr0_ - 0x6c)) = fVar3;
        if (cVar9 != '\0') {
          (*(float *)(fr0_ - 0x6c)) = SUB84(dVar5,0);
          fVar3 = fVar7;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar6 + 0x50),uVar2,ar6_00,ar7); });
        ({ unsigned long t0_ = (unsigned long)(((code * *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_sub(ar5,((undefined1 *)(fr0_ - 0x44)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(ar4 + 0x200,((code * *)(fr0_ - 0x54)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((code * *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
        uVar2 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length_sq(ar4 + 0x200,uVar2,ar6_00,ar7));
        fVar7 = F32HI(dVar5);
        if (cVar9 == '\0') {
          dVar5 = CONCAT44D(fVar7,*(undefined4 *)(unsigned)(ar4 + 0x48));
          (*(float *)(fr0_ - 0x70)) = fVar7;
        }
        else {
          (*(float *)(fr0_ - 0x70)) = SUB84(dVar5,0);
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
          (*(float *)(fr0_ - 0x6c)) = fVar7;
        }
        if (cVar8 == '\0') {
          fVar3 = F32LO(dVar5) + fVar3;
        }
        else {
          fVar3 = SUB84(dVar5 + CONCAT44D(in_fr14,fVar3),0);
        }
        if (cVar9 == '\0') {
          dVar5 = CONCAT44D((*(float *)(fr0_ - 0x70)),fVar3);
        }
        else {
          dVar5 = CONCAT44D((*(float *)(fr0_ - 0x6c)),(*(float *)(fr0_ - 0x70)));
        }
        if (cVar8 == '\0') {
          fVar7 = F32LO(dVar5) - F32HI(dVar5);
        }
        else {
          fVar7 = SUB84(dVar5 - dVar5,0);
        }
        if (cVar9 == '\0') {
          pcVar6 = (code *)0x3f000000;
          (*(float *)(fr0_ - 0x58)) = fVar7;
        }
        else {
          (*(float *)(fr0_ - 0x58)) = (float)in_xd0;
          ((code * *)(fr0_ - 0x54))[0] = (code *)((ulonglong)in_xd0 >> 0x20);
          fVar7 = 0.5;
          pcVar6 = ((void *)0x8c022f54);
        }
        if (cVar8 == '\0' && fVar7 < (float)(uint)pcVar6) {
          if (cVar9 == '\0') {
            (*(float *)(fr0_ - 0x58)) = 0.5;
          }
          else {
            (*(float *)(fr0_ - 0x58)) = 0.5;
            ((code * *)(fr0_ - 0x54))[0] = ((void *)0x8c022f54);
          }
        }
        (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length(ar4 + 0x200,uVar2,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023bf4(ar4 + 0x200,&(*(float *)(fr0_ - 0x58)),ar6_00,ar7));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
      }
    }
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 1;
    if (cVar9 == '\0') {
      fVar7 = *(float *)(unsigned)(*(int *)(unsigned)(ar6 + 0x68) + 0x158);
    }
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),*(int *)(unsigned)(ar6 + 0x68) + 4,ar6_00,ar7));
    dVar4 = (*(double *)(fr0_ - 0x20));
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x20))+0)),SUB84(dVar5,0));
    }
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D(F32HI(dVar4) + fVar7,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + CONCAT44D(in_fr14,fVar7);
    }
    dVar5 = dVar4;
    if (cVar9 == '\0') {
      (*(double *)(fr0_ - 0x20)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x20))+4)),(int)(D2U(dVar4) >> 0x20));
      dVar5 = (*(double *)(fr0_ - 0x20));
    }
    (*(double *)(fr0_ - 0x20)) = dVar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_sub(ar5,((undefined1 *)(fr0_ - 0x24)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(ar4 + 0x200,((undefined1 *)(fr0_ - 0x34)),ar6_00,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length_sq(ar4 + 0x200,uVar2,ar6_00,ar7));
    fVar3 = F32HI(dVar4);
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D(fVar3,*(undefined4 *)(unsigned)(ar4 + 0x48));
      (*(float *)(fr0_ - 0x5c)) = fVar3;
    }
    else {
      (*(float *)(fr0_ - 0x5c)) = SUB84(dVar4,0);
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      (*(float *)(fr0_ - 0x58)) = fVar3;
    }
    if (cVar8 == '\0') {
      fVar7 = F32LO(dVar4) + fVar7;
    }
    else {
      fVar7 = SUB84(dVar4 + CONCAT44D(in_fr14,fVar7),0);
    }
    if (cVar9 == '\0') {
      dVar5 = CONCAT44D((*(float *)(fr0_ - 0x5c)),fVar7);
    }
    else {
      dVar5 = CONCAT44D((*(float *)(fr0_ - 0x58)),(*(float *)(fr0_ - 0x5c)));
    }
    if (cVar8 == '\0') {
      fVar7 = F32LO(dVar5) - F32HI(dVar5);
    }
    else {
      fVar7 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar9 == '\0') {
      pcVar6 = (code *)0x3f000000;
      (*(float *)(fr0_ - 0x58)) = fVar7;
    }
    else {
      (*(float *)(fr0_ - 0x58)) = (float)in_xd0;
      ((code * *)(fr0_ - 0x54))[0] = (code *)((ulonglong)in_xd0 >> 0x20);
      fVar7 = 0.5;
      pcVar6 = ((void *)0x8c022f54);
    }
    if (cVar8 == '\0' && fVar7 < (float)(uint)pcVar6) {
      if (cVar9 == '\0') {
        (*(float *)(fr0_ - 0x58)) = 0.5;
      }
      else {
        (*(float *)(fr0_ - 0x58)) = 0.5;
        ((code * *)(fr0_ - 0x54))[0] = ((void *)0x8c022f54);
      }
    }
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length(ar4 + 0x200,uVar2,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023bf4(ar4 + 0x200,&(*(float *)(fr0_ - 0x58)),ar6_00,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0a3f4c\n.set _FUN_8c0a3f4c, _FUN_8c0a3f4c_def\n");
//@unit 8c0a427c
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
int Class_12ad14_m3_0a427c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12ad14_m3_0a427c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(unsigned)(0x128 + ar4) == 0) {
    uVar4 = 0;
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0))
    ;
    uVar2 = 3;
    (vsp = ((unsigned long)(fr0_ - 4)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,3,uVar3,uVar4));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033e68))))
                      (ar4 + 0xb0,uVar2,uVar3,uVar4));
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7));
    if ((iVar1 == 0xd) ||
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7)),
       iVar1 == 0xe)) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03f3ac(ar4 + 0xb0,ar5,ar6,ar7));
      if (iVar1 == 7) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), rand_range(ar4,0,100,ar7));
        if (iVar1 < 0x50) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033a8c))))
                            (ar4 + 0xb0,0xd,0xffffffff,0));
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033a8c))))
                            (ar4 + 0xb0,0xe,0xffffffff,0));
        }
      }
    }
    else {
      uVar4 = 0;
      uVar3 = 0xffffffff;
      uVar2 = 0xe;
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033a8c))))
                (ar4 + 0xb0,0xe,0xffffffff,0));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033e68))))
                        (ar4 + 0xb0,uVar2,uVar3,uVar4));
    }
  }
  return iVar1;
}

__asm__(".globl _Class_12ad14_m3_0a427c\n.set _Class_12ad14_m3_0a427c, _Class_12ad14_m3_0a427c_def\n");
//@unit 8c0a43d4
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
undefined4 Class_12ad14_m4_0a43d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12ad14_m4_0a43d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar7_00 = 0;
  ar6_00 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0));
  uVar1 = 3;
  (vsp = ((unsigned long)(fr0_ - 4)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,3,ar6_00,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033e68))))
                    (ar4 + 0xb0,uVar1,ar6_00,ar7_00));
  return uVar1;
}

__asm__(".globl _Class_12ad14_m4_0a43d4\n.set _Class_12ad14_m4_0a43d4, _Class_12ad14_m4_0a43d4_def\n");
//@unit 8c0a4448
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
undefined4 FUN_8c0a4448_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a4448";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c1261b0)),ar5,ar6,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c285180;
  (vsp = ((unsigned long)(fr0_ - 52)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c285180,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c1261c0)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c28518c;
  (vsp = ((unsigned long)(fr0_ - 52)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c28518c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c1261d0)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c285198;
  (vsp = ((unsigned long)(fr0_ - 52)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c285198,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c1261e0)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c2851a4;
  (vsp = ((unsigned long)(fr0_ - 52)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c2851a4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x1c)),puVar3,uVar2,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c05d608(0x8c2851b0,uVar1,uVar2,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x34)),uVar1,uVar2,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c05d608(0x8c2851b0 + 0x18,uVar1,uVar2,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_xyz(0x8c2851ec,uVar1,uVar2,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 52)), global_list_push(uVar2,((void *)(unsigned)0x8c022cb0),0x8c2851e0,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0a4448\n.set _FUN_8c0a4448, _FUN_8c0a4448_def\n");
//@unit 8c0a4590
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
int s_GRAPHICS_SPIDERLINE_0a4592_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_SPIDERLINE_0a4592";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar7_00 = 0x18;
  ar6_00 = 1;
  ar5_00 = 0xd;
  ({ unsigned long t0_ = (unsigned long)(1); unsigned long t1_ = (unsigned long)(ar5); unsigned long t2_ = (unsigned long)(0x8c285370); unsigned long t3_ = (unsigned long)(0x8c2854a0); unsigned long t4_ = (unsigned long)(*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b08c))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0254d0))))
            (ar4,0xd,1,0x18); });
  *(unsigned *)(unsigned)(ar4 + 8) = (&(*(undefined1 *)(unsigned)0x8c12aeec));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ab760(ar4 + 0x490,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0a6164(ar4 + 0x53c,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fcc(ar4 + 0x26fc,ar5_00,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c13b100)) + 0xe1); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
            (ar4 + 0xc,ar5_00,ar6_00,ar7_00); });
  *(int *)(unsigned)(0x308 + ar4) = ar4 + 0x490;
  *(int *)(unsigned)(0x30c + ar4) = ar4 + 0x53c;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0f532c))))
            (ar4,*(undefined4 *)(unsigned)(0xb4 + *(int *)(unsigned)(0x328 + ar4)),ar4 + 0x26fc,
             ar7_00));
  return ar4;
}

__asm__(".globl _s_GRAPHICS_SPIDERLINE_0a4592\n.set _s_GRAPHICS_SPIDERLINE_0a4592, _s_GRAPHICS_SPIDERLINE_0a4592_def\n");
//@unit 8c0a4694
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
int Class_12aeec_m0_0a4694_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12aeec_m0_0a4694";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12aeec);
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0x26fc,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12b088_m0_0a62cc(ar4 + 0x53c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12b0c4_m0_0ab7ac(ar4 + 0x490,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), CAnimal_m0_025688(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12aeec_m0_0a4694\n.set _Class_12aeec_m0_0a4694, _Class_12aeec_m0_0a4694_def\n");
//@unit 8c0a471c
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
undefined4 Class_12aeec_m2_0a471c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12aeec_m2_0a471c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), CAnimal_m2_02573c(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _Class_12aeec_m2_0a471c\n.set _Class_12aeec_m2_0a471c, _Class_12aeec_m2_0a471c_def\n");
//@unit 8c0a4744
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
undefined4 Class_12aeec_m3_0a4744_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12aeec_m3_0a4744";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), CAnimal_m3_026078(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _Class_12aeec_m3_0a4744\n.set _Class_12aeec_m3_0a4744, _Class_12aeec_m3_0a4744_def\n");
//@unit 8c0a476c
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
undefined4 Class_12aeec_m4_0a476c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12aeec_m4_0a476c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x1c))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_12aeec_m4_0a476c\n.set _Class_12aeec_m4_0a476c, _Class_12aeec_m4_0a476c_def\n");
//@unit 8c0a4784
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
undefined4 Class_12aeec_m5_0a4784_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12aeec_m5_0a4784";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)) + 0x14))))
                    (((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_12aeec_m5_0a4784\n.set _Class_12aeec_m5_0a4784, _Class_12aeec_m5_0a4784_def\n");
//@unit 8c0a47f0
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
undefined4 Class_12aeec_m6_0a47f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12aeec_m6_0a47f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x1c))))(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c398(ar4 + 0x174,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_12aeec_m6_0a47f0\n.set _Class_12aeec_m6_0a47f0, _Class_12aeec_m6_0a47f0_def\n");
//@unit 8c0a481c
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
undefined4 FUN_8c0a481c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a481c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ain0;
  undefined4 uVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  int ar7_00;
  int ar6_00;
  int iVar6;
  char cVar7;
  char cVar8;
  int s12;
  
  cVar8 = '\0';
  cVar7 = '\0';
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c256328(0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    ar7_00 = (int)(F32LO(dVar4) / F32HI(dVar4));
  }
  else {
    ar7_00 = (int)(dVar4 / dVar4);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    ar6_00 = (int)(F32LO(dVar4) / F32HI(dVar4));
  }
  else {
    ar6_00 = (int)(dVar4 / dVar4);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(F32LO(dVar4) / F32HI(dVar4));
  }
  else {
    iVar6 = (int)(dVar4 / dVar4);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c256b0c(0,iVar6,ar6_00,ar7_00); });
  ({ unsigned long t0_ = (unsigned long)((fr0_ + (int)0xffffffe0)); *(unsigned *)((((unsigned long)(fr0_ - 84)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 84)) - 8); FUN_8c0a4a34(ar4 + 0x53c,iVar6,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 84)), vec3_copy_8c02b5fc((fr0_ + (int)0xffffffec),(fr0_ + (int)0xffffffe0),ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 84)), object_dtor_delete((fr0_ + (int)0xffffffe0),0xffffffff,ar6_00,ar7_00));
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x47800000,(*(undefined4 *)(fr0_ - 0x10)));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(F32LO(dVar4) / F32HI(dVar4));
  }
  else {
    iVar6 = (int)(dVar4 / dVar4);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c256ce0(0,iVar6,ar6_00,ar7_00); });
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x47800000,(*(undefined4 *)(fr0_ - 0x14)));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(F32LO(dVar4) / F32HI(dVar4));
  }
  else {
    iVar6 = (int)(dVar4 / dVar4);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c256a78(0,iVar6,ar6_00,ar7_00); });
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x47800000,(*(undefined4 *)(fr0_ - 0xc)));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    fVar5 = F32HI(dVar4);
    fVar3 = F32LO(dVar4) / fVar5;
    dVar4 = CONCAT44D(fVar5,fVar3);
    iVar6 = (int)fVar3;
  }
  else {
    dVar4 = dVar4 / dVar4;
    iVar6 = (int)dVar4;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c256d7c(0,iVar6,ar6_00,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c256fec(0,iVar6,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x328) + 0x78,iVar6,ar6_00,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,iVar6,ar6_00,ar7_00));
  ain0 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar6,ar6_00,ar7_00));
  s12 = ain0;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), deref_u32(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0) + ain0 * 4,iVar6,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar6,ar6_00,ar7_00));
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(uVar2,(int)(D2U(dVar4) >> 0x20));
  }
  uVar2 = (undefined4)(D2U(dVar4) >> 0x20);
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c21ba62(uVar1,uVar2,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c256210(1,uVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c233dac(((undefined1 *)(unsigned)0x8c13b07c),uVar2,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(ain0); unsigned long t1_ = (unsigned long)(SUB84(dVar4,0)); unsigned long t2_ = (unsigned long)((int)(D2U(dVar4) >> 0x20)); unsigned long t3_ = (unsigned long)(
               s12); unsigned long t4_ = (unsigned long)(uVar1); unsigned long t5_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); unsigned long t6_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1c))); unsigned long t7_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); unsigned long t8_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); *(unsigned *)((((unsigned long)(fr0_ - 84)) - 40) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 84)) - 40) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 84)) - 40) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 84)) - 40) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 84)) - 40) + 16) = (unsigned)t4_; *(unsigned *)((((unsigned long)(fr0_ - 84)) - 40) + 20) = (unsigned)t5_; *(unsigned *)((((unsigned long)(fr0_ - 84)) - 40) + 24) = (unsigned)t6_; *(unsigned *)((((unsigned long)(fr0_ - 84)) - 40) + 28) = (unsigned)t7_; *(unsigned *)((((unsigned long)(fr0_ - 84)) - 40) + 32) = (unsigned)t8_; vsp = (((unsigned long)(fr0_ - 84)) - 40); FUN_8c0a98cc(ar4 + 0x53c,uVar2,ar6_00,ar7_00); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), object_dtor_delete((fr0_ + (int)0xffffffec),0xffffffff,ar6_00,ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c0a481c\n.set _FUN_8c0a481c, _FUN_8c0a481c_def\n");
//@unit 8c0a4a34
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
undefined4 FUN_8c0a4a34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a4a34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), vec3_copy_8c02b5fc(s0,ar4 + 0x21a8,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0a4a34\n.set _FUN_8c0a4a34, _FUN_8c0a4a34_def\n");
//@unit 8c0a4a5c
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
undefined4 FUN_8c0a4a5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a4a5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ain0;
  undefined4 uVar2;
  undefined4 extraout_fr0 = 0;
  char cVar3;
  
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x328) + 0x78,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,ar5,ar6,ar7));
  ain0 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 20)), deref_u32(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0) + ain0 * 4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x14)) = extraout_fr0;
  if (cVar3 == '\0') {
    (*(undefined4 *)(fr0_ - 0x14)) = uVar2;
  }
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c21ba62(uVar1,(*(undefined4 *)(fr0_ - 0x14)),ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c0a4a5c\n.set _FUN_8c0a4a5c, _FUN_8c0a4a5c_def\n");
//@unit 8c0a4af0
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
undefined4 s_Sp_Home_njd_0a4af0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Sp_Home_njd_0a4af0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7ac8c) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13b0a4);
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7ac88) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13b0c8);
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7ac84) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b094);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ac80) = 0;
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7ac7c) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b09c);
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7ac78) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b098);
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7ac70) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b0a0);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ac6c) = 7;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ac60) = 0x8c2852b0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7abdc) = 0x8c28559c;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7abd8) = 0x3f000000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7abd4) = 0x3f800000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7abc4) = 0x3ca3d70a;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7abc0) = 0x3f4ccccd;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7abbc) = 0x43e10000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7abf0) = 0x8c285310;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7abec) = 9;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7abe8) = 0x8c285340;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7abe4) = 9;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7aba0) = 0x43430000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ab9c) = 0x43480000;
    *(float *)(unsigned)(iVar1 * 0x124 + -0x73d7abc8) = *(float *)(unsigned)(iVar1 * 0x124 + -0x73d7abc8) * 0.7;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7aba4) = 0x41700000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ab70) = 0x433e0000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2854a0) = 0xffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2854a4) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2854a8) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2854ac) = 0;
  return 0;
}

__asm__(".globl _s_Sp_Home_njd_0a4af0\n.set _s_Sp_Home_njd_0a4af0, _s_Sp_Home_njd_0a4af0_def\n");
//@unit 8c0a4de8
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
int s_GRAPHICS_MOTHLINE_0a4dea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_MOTHLINE_0a4dea";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar6_00;
  int ar6_01;
  undefined4 ar7_00;
  uint in_fr1 = 0;
  char cVar2;
  
  cVar2 = '\0';
  ar7_00 = 0x19;
  ar6_00 = 1;
  uVar1 = 0xc;
  ({ unsigned long t0_ = (unsigned long)(1); unsigned long t1_ = (unsigned long)(ar5); unsigned long t2_ = (unsigned long)(0x8c28563c); unsigned long t3_ = (unsigned long)(0x8c28576c); unsigned long t4_ = (unsigned long)((*(undefined4 *)(unsigned)(unsigned)0x8c13b0ec)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c0254d0(ar4,0xc,1,0x19); });
  *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12ad50);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fcc(ar4 + 0x490,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ff6c(ar4 + 0x530,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030fa0(ar4 + 0x5cc,uVar1,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c13b244)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c014334(ar4 + 0xc,uVar1,ar6_00,ar7_00); });
  *(int *)(unsigned)(ar4 + 0x308) = ar4 + 0x530;
  *(int *)(unsigned)(ar4 + 0x30c) = ar4 + 0x5cc;
  *(undefined1 *)(unsigned)(ar4 + 0x524) = 0xff;
  ar6_01 = ar4 + 0x490;
  uVar1 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xb4);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f532c(ar4,uVar1,ar6_01,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c027224(ar4 + 0x5cc,uVar1,ar6_01,ar7_00); });
  if (cVar2 != '\0') {
    in_fr1 = 0x40000000;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xa8) + 0x28))))((int *)(unsigned)(ar4 + 0xa8),ar4 + 0x30,ar6_01,ar7_00));
  *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x528) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x528) = (ulonglong)in_fr1;
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x52c) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x52c) = (ulonglong)in_fr1;
  }
  return ar4;
}

__asm__(".globl _s_GRAPHICS_MOTHLINE_0a4dea\n.set _s_GRAPHICS_MOTHLINE_0a4dea, _s_GRAPHICS_MOTHLINE_0a4dea_def\n");
//@unit 8c0a4f54
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
int Class_12ad50_m0_0a4f54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12ad50_m0_0a4f54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12ad50);
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129cbc_m0_0312f4(ar4 + 0x5cc,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129c24_m0_02ff90(ar4 + 0x530,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0x490,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), CAnimal_m0_025688(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12ad50_m0_0a4f54\n.set _Class_12ad50_m0_0a4f54, _Class_12ad50_m0_0a4f54_def\n");
//@unit 8c0a4fdc
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
undefined4 Class_12ad50_m2_0a4fdc_def(int ar4,uint ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "Class_12ad50_m2_0a4fdc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *a7;
  float in_fr1 = 0;
  float fVar5;
  double dVar6;
  undefined4 in_fr3 = 0;
  double dVar7;
  undefined8 in_xd0 = 0;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  if ((*(uint *)(unsigned)(ar4 + 0x74) & 0x40) == 0x40) {
    *(float *)(unsigned)(ar4 + 0x34) = *(float *)(unsigned)(ar4 + 0x34) - *(float *)(unsigned)(ar4 + 0x52c);
    *(float *)(unsigned)(ar4 + 0x52c) = *(float *)(unsigned)(ar4 + 0x52c) + 0.5;
    in_fr1 = *(float *)(unsigned)(ar4 + 0x52c);
    if (10.0 < in_fr1) {
      *(undefined4 *)(unsigned)(ar4 + 0x52c) = 0x41200000;
    }
  }
  iVar3 = (int)*(char *)(unsigned)(ar4 + 0x524);
  uVar4 = ar5;
  a7 = ar7;
  if ((iVar3 < 4) && (-2 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      uVar1 = ar6;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,ar5,ar6,ar7));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_02d1b8(ar4 + 0x21c,uVar4,ar6,a7));
      uVar4 = 0x3c;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4((uVar2 & 0xffff) - iVar3,0x3c,ar6,a7));
      if (0 < iVar3) {
        *(undefined1 *)(unsigned)(ar4 + 0x524) = 1;
      }
      if (*(int *)(unsigned)(ar4 + 0x330) != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x110))))(*(int *)(unsigned)(ar4 + 0x330),1,ar6,a7));
        ar6 = uVar1;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x10))))(*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7))
        ;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036988(*(undefined4 *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x144))))
                  (*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c038a10(*(undefined4 *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
        uVar4 = ar5;
        a7 = ar7;
      }
      break;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x110))))(*(int *)(unsigned)(ar4 + 0x330),0,ar6,ar7));
      ar5 = *(uint *)(unsigned)(ar4 + 0x330);
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x4c))))(ar7,ar5,ar6,a7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027954(ar4,ar5,ar6,a7));
      *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
      *(undefined1 *)(unsigned)(ar4 + 0x524) = 2;
    case 2:
      if (cVar10 == '\0') {
        in_fr1 = *(float *)(unsigned)(ar4 + 0x528);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x528);
      }
      if (cVar9 == '\0') {
        fVar5 = in_fr1 + 1.0;
      }
      else {
        fVar5 = SUB84(CONCAT44D(0x3f800000,in_fr1) + CONCAT44D(0x3f800000,in_fr1),0);
      }
      if (cVar10 == '\0') {
        *(float *)(unsigned)(ar4 + 0x528) = fVar5;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x528) = in_xd0;
      }
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c031588(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0),ar5,ar6,a7));
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x528),in_fr3);
      }
      else {
        dVar7 = *(double *)(unsigned)(ar4 + 0x528);
      }
      fVar5 = (float)(iVar3 + -1);
      dVar6 = (double)(ulonglong)(uint)fVar5;
      if (cVar9 == '\0' && fVar5 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(0x4f800000,fVar5);
        }
        else {
          dVar6 = -7.425280129038244e-251;
        }
        if (cVar9 == '\0') {
          fVar5 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar5,F32LO(dVar6) + fVar5);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (cVar9 == '\0') {
        bVar8 = F32HI(dVar7) < SUB84(dVar6,0);
      }
      else {
        bVar8 = dVar7 < dVar6;
      }
      uVar4 = ar5;
      if (!bVar8) {
        *(undefined1 *)(unsigned)(ar4 + 0x524) = 3;
      }
      break;
    case -1:
      uVar1 = ar6;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ee4(ar5,ar5,ar6,ar7));
      uVar4 = uVar4 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028edc(ar4 + 0x21c,uVar4,ar6,ar7); });
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,uVar4,ar6,ar7));
      uVar4 = uVar4 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028ed4(ar4 + 0x21c,uVar4,ar6,ar7); });
      if (*(int *)(unsigned)(ar4 + 0x330) != 0) {
        uVar4 = ar5;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x10c))))
                  (*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,uVar4,ar6,ar7));
      a7 = ar7;
      if ((ushort)uVar1 < 5) {
        *(undefined1 *)(unsigned)(ar4 + 0x524) = 0;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xf8))))(ar4,uVar4,ar6,a7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f79b8(ar4 + 0xa0,uVar4,ar6,a7));
  return 1;
}

__asm__(".globl _Class_12ad50_m2_0a4fdc\n.set _Class_12ad50_m2_0a4fdc, _Class_12ad50_m2_0a4fdc_def\n");
//@unit 8c0a5308
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
undefined4 Class_12ad50_m6_0a5308_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12ad50_m6_0a5308";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0294c0(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_12ad50_m6_0a5308\n.set _Class_12ad50_m6_0a5308, _Class_12ad50_m6_0a5308_def\n");
//@unit 8c0a5328
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
undefined4
Class_12ad50_m5_0a5328_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12ad50_m5_0a5328";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = -0x7d0;
  *(undefined4 *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x4)) + iVar1) = ar4;
  (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c0b7a54((int)&s0 + iVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c0294c0(*(undefined4 *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x4)) + iVar1),(int)&s0 + iVar1,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c068818((int)&s0 + iVar1,0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _Class_12ad50_m5_0a5328\n.set _Class_12ad50_m5_0a5328, _Class_12ad50_m5_0a5328_def\n");
//@unit 8c0a536c
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
undefined4 Class_12ad50_m4_0a536c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12ad50_m4_0a536c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0294c0(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_12ad50_m4_0a536c\n.set _Class_12ad50_m4_0a536c, _Class_12ad50_m4_0a536c_def\n");
//@unit 8c0a538c
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
undefined4 FUN_8c0a538c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a538c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4c0c(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0a538c\n.set _FUN_8c0a538c, _FUN_8c0a538c_def\n");
//@unit 8c0a53a8
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
undefined4 noop_0a53a8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0a53a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0a53a8\n.set _noop_0a53a8, _noop_0a53a8_def\n");
//@unit 8c0a53ac
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
undefined4 noop_0a53ac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0a53ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0a53ac\n.set _noop_0a53ac, _noop_0a53ac_def\n");
//@unit 8c0a53b0
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
undefined4 FUN_8c0a53b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a53b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  float fVar2;
  double dVar3;
  int ar7_00;
  int ar6_01;
  int ar5_01;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x328) + 0x78,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c256328(0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_00 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar6_01 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar6_01 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_01 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar5_01 = (int)(dVar3 / dVar3);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c256b0c(0,ar5_01,ar6_01,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c256fec(0,ar5_01,ar6_01,ar7_00); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,ar5_01,ar6_01,ar7_00));
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 20)), deref_u32(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0),ar5_01,ar6_01,ar7_00));
  ar6_00 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c026d74(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa8),ar5_01,ar6_01,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)(ar6_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c21bbb0(uVar1,ar5_00,ar6_00,ar7_00); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c256210(1,ar5_00,ar6_00,ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c0a53b0\n.set _FUN_8c0a53b0, _FUN_8c0a53b0_def\n");
//@unit 8c0a54dc
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
undefined4 FUN_8c0a54dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a54dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(*(int *)(unsigned)(0x328 + ar4) + 0x78,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015bb8(*(int *)(unsigned)(0x328 + ar4) + 0x70,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219a9a(uVar1,ar5,ar6,ar7));
  uVar1 = 0;
  if (*(int *)(unsigned)(0x330 + ar4) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(0x330 + ar4) + 8) + 0x3c))))
                      (*(int *)(unsigned)(0x330 + ar4),ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0a54dc\n.set _FUN_8c0a54dc, _FUN_8c0a54dc_def\n");
//@unit 8c0a5538
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
undefined4 FUN_8c0a5538_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a5538";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x3c))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0a5538\n.set _FUN_8c0a5538, _FUN_8c0a5538_def\n");
//@unit 8c0a5550
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
undefined4 FUN_8c0a5550_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a5550";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_038c8c(ar4,ar5,ar6,ar7); });
  uVar1 = 0;
  if (*(int *)(unsigned)(ar4 + 0x330) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x5c))))
                      (*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0a5550\n.set _FUN_8c0a5550, _FUN_8c0a5550_def\n");
//@unit 8c0a5588
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
undefined4 FUN_8c0a5588_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a5588";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a6;
  undefined4 uVar1;
  
  a6 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(ar5,0xd,0x18,ar7));
  uVar1 = 0;
  if (a6 != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *(int *)(unsigned)(ar4 + 8)))))(ar4,0,a6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0a5588\n.set _FUN_8c0a5588, _FUN_8c0a5588_def\n");
//@unit 8c0a55d4
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
int FUN_8c0a55d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a55d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x330;
  *(undefined4 *)(unsigned)(0x330 + ar4) = ar6;
  return iVar1;
}

__asm__(".globl _FUN_8c0a55d4\n.set _FUN_8c0a55d4, _FUN_8c0a55d4_def\n");
//@unit 8c0a55e0
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
undefined4 FUN_8c0a55e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a55e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(unsigned)(0x330 + ar4) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ff500(ar5,ar4 + 0x330,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0a55e0\n.set _FUN_8c0a55e0, _FUN_8c0a55e0_def\n");
//@unit 8c0a5614
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
undefined4 FUN_8c0a5614_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a5614";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4e34(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cbe4(ar4 + 0x174,ar5 + 0x4c,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035338(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0a5614\n.set _FUN_8c0a5614, _FUN_8c0a5614_def\n");
//@unit 8c0a5674
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
undefined4 FUN_8c0a5674_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a5674";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4ebc(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce58(ar4 + 0x174,ar5 + 0x24,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035338(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0a5674\n.set _FUN_8c0a5674, _FUN_8c0a5674_def\n");
//@unit 8c0a56cc
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
undefined4 FUN_8c0a56cc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a56cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4f0c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cf20(ar4 + 0x174,ar5 + 0x4c,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03539c(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0a56cc\n.set _FUN_8c0a56cc, _FUN_8c0a56cc_def\n");
//@unit 8c0a572c
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
undefined4 FUN_8c0a572c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a572c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4fa4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1f4(ar4 + 0x174,ar5 + 0x24,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03539c(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0a572c\n.set _FUN_8c0a572c, _FUN_8c0a572c_def\n");
//@unit 8c0a5784
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
undefined4 s_CSpiderEgg_LoadGRReq_0a578a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CSpiderEgg_LoadGRReq_0a578a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(unsigned)(0x420 + ar4) == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_load_Pack_CAnimal__027a86(ar4,ar5,ar6,ar7));
    if (iVar1 == 1) {
      *(undefined4 *)(unsigned)(0x420 + ar4) = 1;
    }
  }
  else if (*(int *)(unsigned)(0x420 + ar4) == 1) {
    if (*(int *)(unsigned)(0x330 + ar4) == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                ((&(*(undefined1 *)(unsigned)0x8c13b100)) + 0x14e,
                 (&(*(undefined1 *)(unsigned)0x8c13b100)) + 0x160,0,2));
      *(undefined4 *)(unsigned)(0x420 + ar4) = 0;
      uVar2 = 1;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xdc + *(int *)(unsigned)(*(int *)(unsigned)(0x330 + ar4) + 8)))))
                        (*(int *)(unsigned)(0x330 + ar4),ar5,0,ar7));
      if (iVar1 == 1) {
        *(undefined2 *)(unsigned)(0x41c + ar4) = 0;
        *(undefined4 *)(unsigned)(0x420 + ar4) = 0;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _s_CSpiderEgg_LoadGRReq_0a578a\n.set _s_CSpiderEgg_LoadGRReq_0a578a, _s_CSpiderEgg_LoadGRReq_0a578a_def\n");
//@unit 8c0a5854
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
undefined4 FUN_8c0a5854_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a5854";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_Load_CAnimal_LoadG_0284b8(ar4,ar5,ar6,ar7));
  uVar1 = 0;
  if (*(int *)(unsigned)(0x330 + ar4) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xe0 + *(int *)(unsigned)(*(int *)(unsigned)(0x330 + ar4) + 8)))))
                      (*(int *)(unsigned)(0x330 + ar4),ar5,0,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0a5854\n.set _FUN_8c0a5854, _FUN_8c0a5854_def\n");
//@unit 8c0a58a4
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
undefined4 FUN_8c0a58a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a58a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028afc(ar4,ar5,ar6,ar7));
  uVar1 = 0;
  if (*(int *)(unsigned)(0x330 + ar4) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xec + *(int *)(unsigned)(*(int *)(unsigned)(0x330 + ar4) + 8)))))
                      (*(int *)(unsigned)(0x330 + ar4),ar5,0,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0a58a4\n.set _FUN_8c0a58a4, _FUN_8c0a58a4_def\n");
//@unit 8c0a58f4
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
undefined4 s_Cpe_Home_nj_0a58f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Cpe_Home_nj_0a58f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7a9c0) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13b0f8);
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7a9bc) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13b0fc);
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7a9b8) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b0f0);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7a9b4) = 0;
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7a9b0) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b0f4);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7a9ac) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7a924) = 0x8c285788;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7a920) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7a91c) = 0x8c285798;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7a918) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7a910) = 0x8c2857a8;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7a908) = 0x3f800000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7a8f8) = 0x3ca3d70a;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7a8f4) = 0x3f4ccccd;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7a8f0) = 0x42c80000;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined2 *)(unsigned)(iVar1 * 0x10 + -0x73d7a894) = 0xffff;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7a890) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7a88c) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7a888) = 0;
  }
  return 1;
}

__asm__(".globl _s_Cpe_Home_nj_0a58f4\n.set _s_Cpe_Home_nj_0a58f4, _s_Cpe_Home_nj_0a58f4_def\n");
//@unit 8c0a5af4
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
undefined4 Class_12aeec_m7_0a5af4_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12aeec_m7_0a5af4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int *ar5_00;
  undefined4 *a6;
  float fVar2;
  double in_dr0 = 0;
  double dVar3;
  undefined4 uVar5;
  double dVar4;
  float fVar6;
  undefined8 in_dr14 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  uVar1 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar9 = '\0';
  cVar8 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x34)),ar5_00,ar6,ar7));
  dVar4 = CONCAT44D(uVar1,0x3f800000);
  a6 = &(*(undefined4 *)(fr0_ - 0x34));
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x124))))(ar5,&(*(undefined4 *)(fr0_ - 0x24)),a6,ar7));
  if (cVar9 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x30));
  }
  fVar6 = F32LO(dVar4);
  if (cVar8 == '\0') {
    fVar2 = F32LO(in_dr0) - fVar6;
  }
  else {
    fVar2 = SUB84(in_dr0 - dVar4,0);
  }
  if (cVar9 == '\0') {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),fVar2);
  }
  else {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
  }
  fVar2 = F32HI(dVar3);
  if (cVar8 == '\0' && fVar2 < SUB84(dVar3,0)) {
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(fVar2,*(undefined4 *)(unsigned)(ar4 + 0x30));
    }
    if (cVar8 == '\0') {
      fVar2 = F32LO(dVar3) + fVar6;
    }
    else {
      fVar2 = SUB84(dVar3 + dVar4,0);
    }
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),fVar2);
    }
    else {
      dVar3 = CONCAT44D((*(float *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
    }
    if (cVar8 != '\0' || F32HI(dVar3) <= SUB84(dVar3,0)) {
      if (cVar9 == '\0') {
        dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),SUB84(dVar3,0));
      }
      else {
        dVar3 = CONCAT44D((*(float *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
      }
      if (cVar8 == '\0') {
        dVar3 = CONCAT44D(F32HI(dVar3) - fVar6,SUB84(dVar3,0));
      }
      else {
        dVar3 = dVar3 - dVar4;
      }
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x30) = (int)(D2U(dVar3) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x30) = dVar3;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),SUB84(dVar3,0));
    }
    else {
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
    }
    if (cVar8 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) + fVar6,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + dVar4;
    }
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar4 + 0x30) = (int)(D2U(dVar3) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = dVar3;
    }
  }
  if (cVar9 == '\0') {
    dVar3 = CONCAT44D((int)(D2U(dVar3) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x38));
  }
  if (cVar8 == '\0') {
    fVar2 = F32LO(dVar3) - fVar6;
  }
  else {
    fVar2 = SUB84(dVar3 - dVar4,0);
  }
  if (cVar9 == '\0') {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),fVar2);
  }
  else {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
  }
  fVar2 = F32HI(dVar3);
  if (cVar8 == '\0' && fVar2 < SUB84(dVar3,0)) {
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(fVar2,*(undefined4 *)(unsigned)(ar4 + 0x38));
    }
    if (cVar8 == '\0') {
      fVar2 = F32LO(dVar3) + fVar6;
    }
    else {
      fVar2 = SUB84(dVar3 + dVar4,0);
    }
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D((*(float *)(fr0_ - 0x2c)),fVar2);
    }
    else {
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
    }
    if (cVar8 != '\0' || F32HI(dVar3) <= SUB84(dVar3,0)) {
      if (cVar9 == '\0') {
        dVar3 = CONCAT44D((*(float *)(fr0_ - 0x2c)),SUB84(dVar3,0));
      }
      else {
        dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
      }
      if (cVar8 == '\0') {
        dVar3 = CONCAT44D(F32HI(dVar3) - fVar6,SUB84(dVar3,0));
      }
      else {
        dVar3 = dVar3 - dVar4;
      }
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x38) = (int)(D2U(dVar3) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x38) = dVar3;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),SUB84(dVar3,0));
    }
    else {
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
    }
    if (cVar8 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) + fVar6,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + dVar4;
    }
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar4 + 0x38) = (int)(D2U(dVar3) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x38) = dVar3;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,ar4 + 0x30,a6,ar7));
  uVar1 = SUB84(dVar3,0);
  uVar5 = (undefined4)(D2U(dVar3) >> 0x20);
  if (cVar9 == '\0') {
    dVar3 = CONCAT44D(uVar5,SUB84(dVar4,0));
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),uVar1);
  }
  else {
    dVar4 = *(double *)(unsigned)(ar4 + 0x34);
    (*(undefined4 *)(fr0_ - 0x34)) = uVar5;
  }
  fVar6 = F32HI(dVar3);
  if (cVar8 == '\0') {
    bVar7 = fVar6 < F32HI(dVar4);
  }
  else {
    bVar7 = dVar3 < dVar4;
  }
  if (bVar7) {
    fVar6 = (*(float *)(fr0_ - 0x30));
    fVar2 = (*(float *)(fr0_ - 0x2c));
    if (cVar9 == '\0') {
      fVar6 = *(float *)(unsigned)(ar4 + 0x34);
      fVar2 = (*(float *)(fr0_ - 0x30));
    }
    if (cVar8 != '\0' || fVar2 <= fVar6) {
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 0x34) = (*(float *)(fr0_ - 0x30));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x34) = CONCAT44((*(float *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
      }
    }
  }
  else if (cVar9 == '\0') {
    *(float *)(unsigned)(ar4 + 0x34) = fVar6;
  }
  else {
    *(double *)(unsigned)(ar4 + 0x34) = dVar3;
  }
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x34)),0xffffffff,a6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,a6,ar7));
  return uVar1;
}

__asm__(".globl _Class_12aeec_m7_0a5af4\n.set _Class_12aeec_m7_0a5af4, _Class_12aeec_m7_0a5af4_def\n");
//@unit 8c0a5c2c
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
uint FUN_8c0a5c2c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a5c2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02fc8c(*(undefined4 *)(unsigned)(0x308 + ar4),ar5,ar6,ar7));
  return (uint)(iVar1 == 1);
}

__asm__(".globl _FUN_8c0a5c2c\n.set _FUN_8c0a5c2c, _FUN_8c0a5c2c_def\n");
//@unit 8c0a5c60
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
undefined4 Class_12ad50_m3_0a5c60_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12ad50_m3_0a5c60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x10))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_12ad50_m3_0a5c60\n.set _Class_12ad50_m3_0a5c60, _Class_12ad50_m3_0a5c60_def\n");
//@unit 8c0a5c88
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
undefined4 ret_const_1_0a5c88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_1_0a5c88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl _ret_const_1_0a5c88\n.set _ret_const_1_0a5c88, _ret_const_1_0a5c88_def\n");
//@unit 8c0a5c90
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
undefined4 FUN_8c0a5c90_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a5c90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  
  cVar5 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1261f0),ar5,ar6,ar7));
  uVar3 = 0x8c285220;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285220,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126200),pcVar2,uVar3,ar7));
  uVar3 = 0x8c28522c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28522c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126210),pcVar2,uVar3,ar7));
  uVar3 = 0x8c285238;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285238,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126220),pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285244,ar7));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(9); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c28525c,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0a6140),0x8c285250,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(9); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c28528c,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0a611c),0x8c285280,uVar1));
  if (cVar5 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126230) = CONCAT44((*(undefined1 *)(unsigned)0x8c126234),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126230) = 0xffffffff00800000;
  }
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(9); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c285310,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0a60f8),0x8c285304,uVar1));
  uVar4 = 4;
  ({ unsigned long t0_ = (unsigned long)(9); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c285340,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  uVar1 = 0x8c285334;
  pcVar2 = ((void *)0x8c0a60d4);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0a60d4),0x8c285334,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02452c(0x8c285370,pcVar2,uVar1,uVar4));
  uVar3 = 0x8c285364;
  pcVar2 = ((void *)0x8c03a4ac);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a4ac),0x8c285364,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c024824(((undefined1 *)(unsigned)0x8c2854a0),pcVar2,uVar3,uVar4));
  uVar3 = 0x8c285494;
  pcVar2 = ((void *)0x8c03a454);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a454),0x8c285494,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2854bc,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c2854b0;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2854b0,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2854d8,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c2854cc;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2854cc,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2854f4,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c2854e8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2854e8,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c285510,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c285504;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285504,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c28552c,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c285520;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285520,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c285548,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c28553c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28553c,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c285564,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c285558;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285558,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c285580,pcVar2,uVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285574,uVar4));
  uVar4 = 0x8c2854f4;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c285510); unsigned long t1_ = (unsigned long)(0x8c28552c); unsigned long t2_ = (unsigned long)(0x8c285548); unsigned long t3_ = (unsigned long)(
                       0x8c285564); unsigned long t4_ = (unsigned long)(0x8c285580); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c28559c,0x8c2854bc,0x8c2854d8,0x8c2854f4); });
  uVar3 = 0x8c285590;
  pcVar2 = ((void *)0x8c017084);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c285590,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02452c(0x8c28563c,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c285630;
  pcVar2 = ((void *)0x8c03a4ac);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a4ac),0x8c285630,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c024824(0x8c28576c,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c285760;
  pcVar2 = ((void *)0x8c03a454);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a454),0x8c285760,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015b94(0x8c285788,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c28577c;
  pcVar2 = ((void *)0x8c0247b0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0247b0),0x8c28577c,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015bc8(0x8c285798,pcVar2,uVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a3dc),0x8c28578c,uVar4));
  uVar3 = 0x8c2854f4;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c285510); unsigned long t1_ = (unsigned long)(0x8c28552c); unsigned long t2_ = (unsigned long)(0x8c285548); unsigned long t3_ = (unsigned long)(
                       0x8c285564); unsigned long t4_ = (unsigned long)(0x8c285580); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c2857a8,0x8c2854bc,0x8c2854d8,0x8c2854f4); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c28579c,uVar3));
  return uVar1;
}

__asm__(".globl _FUN_8c0a5c90\n.set _FUN_8c0a5c90, _FUN_8c0a5c90_def\n");
//@unit 8c0a60d4
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
undefined4 FUN_8c0a60d4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a60d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c285340,((void *)0x8c03a3dc),4,9); });
  return uVar1;
}

__asm__(".globl _FUN_8c0a60d4\n.set _FUN_8c0a60d4, _FUN_8c0a60d4_def\n");
//@unit 8c0a60f8
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
undefined4 FUN_8c0a60f8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a60f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c285310,((void *)0x8c0247b0),4,9); });
  return uVar1;
}

__asm__(".globl _FUN_8c0a60f8\n.set _FUN_8c0a60f8, _FUN_8c0a60f8_def\n");
//@unit 8c0a611c
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
undefined4 FUN_8c0a611c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a611c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c28528c,((void *)0x8c03a3dc),4,9); });
  return uVar1;
}

__asm__(".globl _FUN_8c0a611c\n.set _FUN_8c0a611c, _FUN_8c0a611c_def\n");
//@unit 8c0a6140
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
undefined4 FUN_8c0a6140_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a6140";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c28525c,((void *)0x8c0247b0),4,9); });
  return uVar1;
}

__asm__(".globl _FUN_8c0a6140\n.set _FUN_8c0a6140, _FUN_8c0a6140_def\n");
//@unit 8c0a6164
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
undefined4 * FUN_8c0a6164_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a6164";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *ar5_00;
  undefined *ar6_00;
  undefined4 ar7_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030fa0(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12b088));
  ar7_00 = 0x10;
  ar5_00 = ((void *)(unsigned)0x8c022c4c);
  ar6_00 = ((void *)(unsigned)0x8c022cb0);
  ({ unsigned long t0_ = (unsigned long)(
             0x1f4); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c010120))))
            ((int)ar4 + 0x234,((void *)(unsigned)0x8c022c4c),((void *)(unsigned)0x8c022cb0),0x10); });
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x2174,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x2184,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero((int)ar4 + 0x21a8,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0a61f8(ar4,0,ar6_00,ar7_00));
  return ar4;
}

__asm__(".globl _FUN_8c0a6164\n.set _FUN_8c0a6164, _FUN_8c0a6164_def\n");
//@unit 8c0a61f8
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
undefined4 FUN_8c0a61f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a61f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  
  *(undefined ***)(unsigned)(ar4 + 0x1c8) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13b27c);
  *(undefined4 *)(unsigned)(ar4 + 0x1cc) = 6;
  *(undefined4 *)(unsigned)(ar4 + 0x230) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x220) = 2;
  *(undefined4 *)(unsigned)(ar4 + 0x224) = 2;
  *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x219c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2198) = 0;
  (vsp = ((unsigned long)(fr0_ - 24)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x14)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), vec3_copy_8c023d8c(ar4 + 0x21a8,((undefined1 *)(fr0_ - 0x14)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), object_dtor_delete(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x21a4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x21b8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x21bc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x21b4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1d0) = 1;
  return 0x1d0;
}

__asm__(".globl _FUN_8c0a61f8\n.set _FUN_8c0a61f8, _FUN_8c0a61f8_def\n");
//@unit 8c0a62cc
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
undefined4 * Class_12b088_m0_0a62cc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b088_m0_0a62cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12b088);
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x86a,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x861,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x85d,0xffffffff,ar6,ar7));
    ar7_00 = 500;
    ar6_00 = 0x10;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x8d,((void *)0x8c022cb0),0x10,500); });
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129cbc_m0_0312f4(ar4,0,ar6_00,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12b088_m0_0a62cc\n.set _Class_12b088_m0_0a62cc, _Class_12b088_m0_0a62cc_def\n");
//@unit 8c0a6370
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
undefined4 FUN_8c0a6370_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a6370";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c031684(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(0x21a4 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x2198 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x219c + ar4) = 0;
  *(undefined4 *)(unsigned)(0x230 + ar4) = 0;
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x18)),ar6,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x28)),uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c023d7c(ar4 + 0x21a8,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0a6370\n.set _FUN_8c0a6370, _FUN_8c0a6370_def\n");
//@unit 8c0a6430
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
int FUN_8c0a6430_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a6430";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c032160(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(0x21b8 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x21bc + ar4) = 0;
  iVar1 = 0x21b4;
  *(undefined4 *)(unsigned)(0x21b4 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0a6430\n.set _FUN_8c0a6430, _FUN_8c0a6430_def\n");
//@unit 8c0a6468
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
undefined4 Class_12b088_m1_0a6468_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b088_m1_0a6468";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 92; for (int i_ = 0; i_ < 92; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *a5;
  undefined1 *ar6_00;
  undefined4 uVar2;
  
  a5 = ar5;
  (vsp = ((unsigned long)(fr0_ - 92)), Class_129cbc_m1_031598(ar4,ar5,ar6,ar7));
  uVar2 = 1;
  if ((*(int *)(unsigned)(ar4 + 0x21a4) == 2) || (*(int *)(unsigned)(ar4 + 0x2198) != 0)) {
    if (*(int *)(unsigned)(ar4 + 0x2198) != 8) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 92)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x1a8))))((int *)(unsigned)(uint)ar5[6],a5,ar6,ar7));
      if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x124) != 4)) {
        ar7 = *(undefined4 *)(unsigned)(ar5[1] + 4);
        ar6 = ar5[6];
        (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c0aa70c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar6,ar7));
        goto LAB_8c0a64f8;
      }
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c0a6628(ar4,ar5,ar6,ar7));
    (*(undefined4 *)(fr0_ - 0x58)) = uVar2;
  }
  else {
    ar7 = *(undefined4 *)(unsigned)(ar5[1] + 4);
    ar6 = ar5[4];
    (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c0a99c4(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar6,ar7));
  }
LAB_8c0a64f8:
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x58))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 92)); FUN_8c02f2c0(*ar5,uVar2,ar6,ar7); });
  if (*(int *)(unsigned)(ar4 + 0x178) == 1) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x58))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 92)); FUN_8c02f2c0(*ar5,1,ar6,ar7); });
  }
  if ((*(int *)(unsigned)(ar4 + 0x2198) == 0) && (*(int *)(unsigned)(ar4 + 0x2198) != 8)) {
    (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c031ab4(ar4,*(undefined4 *)(unsigned)(ar5[1] + 4),ar6,ar7));
  }
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x20))); *(unsigned *)((((unsigned long)(fr0_ - 92)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 92)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 92)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 92)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x20)),ar4 + 0x90,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 92)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 92)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x30)),ar4 + 0x6c,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_assign(ar4 + 4,((undefined1 *)(fr0_ - 0x40)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 92)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 92)) - 8); FUN_8c03f480(*ar5,uVar2,ar6,ar7); });
  ar6_00 = ((undefined1 *)(fr0_ - 0x50));
  (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c03220c(ar4,ar5[1],ar6_00,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 92)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6_00,ar7));
  return uVar2;
}

__asm__(".globl _Class_12b088_m1_0a6468\n.set _Class_12b088_m1_0a6468, _Class_12b088_m1_0a6468_def\n");
//@unit 8c0a6628
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
int FUN_8c0a6628_def(int ar4,int *ar5,undefined1 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a6628";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 168; for (int i_ = 0; i_ < 168; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  undefined4 ar5_01;
  int iVar2;
  undefined8 in_dr0 = 0;
  float fVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  
  fVar3 = F32HI(in_dr0);
  cVar6 = '\0';
  cVar5 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = 1;
  iVar2 = 1;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 168)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 168)) - 8); FUN_8c03f480(*ar5,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_copy(&(*(float *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
  ar5_00 = -1;
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  if ((*(undefined1 *)(unsigned)0x8c2858ec) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2858e8) = 0;
    (*(undefined1 *)(unsigned)0x8c2858ec) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c2858f4) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2858f0) = 0;
    (*(undefined1 *)(unsigned)0x8c2858f4) = '\x01';
  }
  if (*(int *)(unsigned)(ar4 + 0x178) == 1) {
    ar5_00 = ar4 + 0x168;
    (vsp = ((unsigned long)(fr0_ - 168)), Vec3_assign(&(*(float *)(fr0_ - 0x20)),ar5_00,ar6,ar7));
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x124);
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 168)), get_field_24_026024(ar5[6],ar5_00,ar6,ar7));
      if (iVar2 == 0) {
        if (cVar6 == '\0') {
          fVar3 = 1000.0;
        }
        else {
          (*(float *)(fr0_ - 0x20)) = 1000.0;
          fVar3 = 180.0;
        }
        if (cVar5 == '\0' && fVar3 < (*(float *)(fr0_ - 0x20))) {
          (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(&(*(float *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
          return 2;
        }
        if (cVar6 == '\0') {
          (*(undefined8 *)(fr0_ - 0x1c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1c))+4)),0x43340000);
        }
        else {
          (*(undefined8 *)(fr0_ - 0x1c)) = 0x8843340000;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x4c)),*(undefined4 *)(unsigned)(uint)ar5[1],ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x5c)),&(*(float *)(fr0_ - 0x20)),ar6,ar7));
      ar6 = ((undefined1 *)(fr0_ - 0x5c));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c0a72b4(ar4,((undefined1 *)(fr0_ - 0x4c)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7));
      break;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x3c)),ar5[3],ar6,ar7));
      ar7 = *(undefined4 *)(unsigned)(ar5[1] + 4);
      ar6 = ((undefined1 *)(fr0_ - 0x3c));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c0a6974(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7));
      break;
    case 2:
      iVar2 = 0;
      break;
    case 3:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 168)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x1a8))))((int *)(unsigned)(uint)ar5[6],ar5_00,ar6,ar7));
      if (iVar2 == 1) {
        ar6 = (undefined1 *)(unsigned)*ar5;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c0aa11c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar6,ar7));
      }
      else {
        iVar2 = 2;
      }
      break;
    case 4:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x6c)),ar5_00,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x6c)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6,ar7));
      if (*(int *)(unsigned)(ar4 + 300) == 0) {
        ar5_01 = 6;
        (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c031de8(ar4,6,ar6,ar7));
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xa4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 168)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_01,ar6,ar7); });
        if (cVar6 == '\0') {
          pcVar4 = (code *)0x42b40000;
        }
        else {
          fVar3 = 90.0;
          pcVar4 = ((void *)0x8c033e68);
        }
        if (cVar5 != '\0' || (float)(uint)pcVar4 <= fVar3) {
          (vsp = ((unsigned long)(fr0_ - 168)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_01,ar6,ar7));
          iVar2 = 0;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
      }
      break;
    case 5:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c031de8(ar4,8,ar6,ar7));
    }
  }
  if ((*(int *)(unsigned)(ar4 + 0x178) == 1) && (iVar2 == 0)) {
    ar6 = (undefined1 *)(unsigned)(uint)ar5[6];
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c031ce8(ar4,ar5[3],ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 168)), Vec3_assign(ar4 + 0x168,((undefined1 *)(fr0_ - 0x7c)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(&(*(float *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  return iVar2;
}

__asm__(".globl _FUN_8c0a6628\n.set _FUN_8c0a6628, _FUN_8c0a6628_def\n");
//@unit 8c0a6974
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
int FUN_8c0a6974_def(int ar4,ulonglong *ar5,ulonglong *ar6,ulonglong *ar7)

{
  ring[rp++ & 255] = "FUN_8c0a6974";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 184; for (int i_ = 0; i_ < 184; i_++) z_[i_] = 0; }
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong *ar5_00;
  undefined4 ar6_00;
  ulonglong *ar6_01;
  undefined1 *puVar4;
  undefined4 ar7_00;
  ulonglong *ar7_01;
  int iVar5;
  ulonglong in_dr0 = 0;
  char cVar6;
  
  cVar6 = '\0';
  iVar5 = 1;
  iVar2 = *(int *)(unsigned)(ar4 + 0x134);
  if ((8 < iVar2) || (iVar2 < 0)) goto switchD_8c0a69b0_default;
  ar5_00 = ar5;
  puVar1 = ar6;
  ar7_01 = ar7;
                    
  switch(iVar2) {
  case 0:
    iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*((ulonglong *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x1a8))))(((ulonglong *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar5,ar6,ar7));
    if (iVar2 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x134) = 8;
      if (cVar6 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0 & 0xffffffff;
      }
      ar7_00 = 0;
      ar6_00 = 0xffffffff;
      uVar3 = 2;
      (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6_00,ar7_00));
      goto switchD_8c0a69b0_default;
    }
    ar5_00 = (ulonglong *)(unsigned)0x0;
    puVar1 = (ulonglong *)(unsigned)(vsp = ((unsigned long)(fr0_ - 184)), rand_range(ar4,0,7,ar7_01));
    if (((int)puVar1 < 7) && (-1 < (int)puVar1)) {
      ar6_01 = (ulonglong *)(unsigned)((int)puVar1 * 4);
                    
      switch((uint)puVar1) {
      case 0x0:
        ar5_00 = (ulonglong *)(unsigned)(ar4 + 0x28);
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar6 == '\0') {
          *(undefined4 *)(unsigned)ar5_00 = 0;
        }
        else {
          *ar5_00 = in_dr0;
        }
        if (*(int *)(unsigned)(ar4 + 0x2198) == 6) {
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x228) = 0;
        puVar1 = ar6_01;
        break;
      case 0x1:
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar6 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0;
        }
        if (*(int *)(unsigned)(ar4 + 0x2198) == 6) {
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x228) = 1;
        puVar1 = ar6_01;
        break;
      case 0x2:
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar6 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0;
        }
        if (*(int *)(unsigned)(ar4 + 0x2198) == 6) {
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x228) = 2;
        puVar1 = ar6_01;
        break;
      case 0x3:
        ar6_01 = (ulonglong *)(unsigned)(ar4 + 0x28);
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar6 == '\0') {
          *(int *)(unsigned)ar6_01 = 0;
        }
        else {
          *ar6_01 = in_dr0;
        }
        if (*(int *)(unsigned)(ar4 + 0x2198) == 6) {
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        ar5_00 = (ulonglong *)(unsigned)0x3;
        *(undefined4 *)(unsigned)(ar4 + 0x228) = 3;
        puVar1 = ar6_01;
        break;
      case 0x4:
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar6 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0;
        }
        if (*(int *)(unsigned)(ar4 + 0x2198) == 6) {
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x228) = 4;
        puVar1 = ar6_01;
        break;
      case 0x5:
switchD_8c0a6a7a_caseD_5:
        puVar1 = ar6_01;
        if (*(int *)(unsigned)(ar4 + 0x2198) == 6) {
          *(undefined4 *)(unsigned)(ar4 + 0x228) = 8;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x228) = 5;
        }
        break;
      case 0x6:
        if (*(int *)(unsigned)(ar4 + 0x2198) == 0) {
          iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), get_field_24_026024(((ulonglong *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar5_00,ar6_01,ar7_01));
          puVar1 = ar6_01;
          if (iVar2 == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x228) = 6;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x228) = 5;
          }
        }
        else if ((*(int *)(unsigned)(ar4 + 0x2198) == 5) || (*(int *)(unsigned)(ar4 + 0x2198) == 6)) {
          *(undefined4 *)(unsigned)(ar4 + 0x228) = 8;
          puVar1 = ar6_01;
        }
        else {
          puVar1 = (ulonglong *)(unsigned)0x2;
          ar5_00 = (ulonglong *)(unsigned)0x0;
          iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), rand_range(ar4,0,2,ar7_01));
          if (iVar2 == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x228) = 7;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x228) = 9;
          }
        }
      }
    }
    *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
    break;
  case 2:
    goto switchD_8c0a69b0_caseD_2;
  case 3:
    goto switchD_8c0a69b0_caseD_3;
  case 4:
    goto switchD_8c0a69b0_caseD_4;
  case 5:
    goto switchD_8c0a69b0_caseD_5;
  case 6:
    goto switchD_8c0a69b0_caseD_6;
  case 7:
    goto switchD_8c0a69b0_caseD_7;
  case 8:
    (vsp = ((unsigned long)(fr0_ - 184)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
    goto switchD_8c0a69b0_default;
  }
  uVar3 = (undefined4)in_dr0;
  iVar2 = *(int *)(unsigned)(ar4 + 0x228);
  if ((9 < iVar2) || (iVar2 < 0)) goto switchD_8c0a6c88_default;
                    
  switch(iVar2) {
  case 0:
    ar7_01 = (ulonglong *)(unsigned)0x0;
    puVar1 = (ulonglong *)(unsigned)0xffffffff;
    ar5_00 = (ulonglong *)(unsigned)0x2;
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,puVar1,ar7_01));
    break;
  case 1:
    ar7_01 = (ulonglong *)(unsigned)0x0;
    puVar1 = (ulonglong *)(unsigned)0xffffffff;
    ar5_00 = (ulonglong *)(unsigned)0x3;
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,puVar1,ar7_01));
    break;
  case 2:
    ar7_01 = (ulonglong *)(unsigned)0x0;
    puVar1 = (ulonglong *)(unsigned)0xffffffff;
    ar5_00 = (ulonglong *)(unsigned)0x4;
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,puVar1,ar7_01));
    break;
  case 3:
    ar7_01 = (ulonglong *)(unsigned)0x0;
    puVar1 = (ulonglong *)(unsigned)0xffffffff;
    ar5_00 = (ulonglong *)(unsigned)0x5;
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,puVar1,ar7_01));
    break;
  case 4:
    ar7_01 = (ulonglong *)(unsigned)0x0;
    puVar1 = (ulonglong *)(unsigned)0xffffffff;
    ar5_00 = (ulonglong *)(unsigned)0x6;
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,6,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,puVar1,ar7_01));
    break;
  case 5:
    iVar5 = (vsp = ((unsigned long)(fr0_ - 184)), get_field_24_026024(((ulonglong *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar5_00,puVar1,ar7_01));
    if (iVar5 == 0) {
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c10277c(((ulonglong *)(fr0_ - 0x28)),ar5_00,puVar1,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x38)),ar5_00,puVar1,ar7_01));
      if (cVar6 == '\0') {
        in_dr0 = CONCAT44(0x40000000,uVar3);
      }
      else {
        in_dr0 = 0x42c8000040000000;
      }
      puVar1 = ((ulonglong *)(fr0_ - 0x28));
      ar7_01 = ((ulonglong *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c032518(ar4,ar5,puVar1,((ulonglong *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x48)),puVar1,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,puVar1,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,puVar1,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 184)), free_if_nonnull_wrap_102790(((ulonglong *)(fr0_ - 0x28)),0xffffffff,puVar1,ar7_01));
    }
    else {
      if (cVar6 == '\0') {
        in_dr0 = CONCAT44(0x40400000,uVar3);
      }
      else {
        in_dr0 = 0x8c031ce840400000;
      }
      puVar1 = ((ulonglong *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031ce8(ar4,ar6,((ulonglong *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar7_01));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x58)),puVar1,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,puVar1,ar7_01));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 3;
switchD_8c0a69b0_caseD_3:
    if (*(int *)(unsigned)(ar4 + 0x2198) == 0) {
      (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*((ulonglong *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((ulonglong *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar4 + 0x54,puVar1,ar7_01));
      if (cVar6 == '\0') {
        *(int *)(unsigned)(ar4 + 0x58) = (int)(in_dr0 >> 0x20);
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x58) = in_dr0;
      }
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x68)),ar5,puVar1,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x78)),ar4 + 0x54,puVar1,ar7_01));
      puVar4 = ((undefined1 *)(fr0_ - 0x78));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c0a72b4(ar4,((undefined1 *)(fr0_ - 0x68)),puVar4,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,puVar4,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,puVar4,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,puVar4,ar7_01));
    }
    else {
      switch(*(undefined4 *)(unsigned)(ar4 + 0x2198)) {
      case 1:
        if (cVar6 == '\0') {
          *(int *)(unsigned)(ar4 + 0x5c) = (int)ar6[1];
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x5c) = ar6[1];
        }
        break;
      case 2:
        if (cVar6 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x5c) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x5c) = in_dr0 & 0xffffffff;
        }
        break;
      case 3:
        if (cVar6 == '\0') {
          *(int *)(unsigned)(ar4 + 0x54) = (int)*ar6;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x54) = *ar6;
        }
        break;
      case 4:
        if (cVar6 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x54) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x54) = in_dr0 & 0xffffffff;
        }
        break;
      case 5:
        if (cVar6 == '\0') {
          *(int *)(unsigned)(ar4 + 0x58) = *(int *)(unsigned)((int)ar6 + 4);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x58) = *(undefined8 *)(unsigned)((int)ar6 + 4);
        }
      }
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x84)),ar6,puVar1,ar7_01));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c0a8f94(ar4,ar5,ar4 + 0x54,((undefined1 *)(fr0_ - 0x84))));
      (vsp = ((unsigned long)(fr0_ - 184)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x84)),0xffffffff,((undefined1 *)(fr0_ - 0x84)),0xffffffff));
    }
    goto switchD_8c0a69b0_default;
  case 6:
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 4;
switchD_8c0a69b0_caseD_4:
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x90)),ar6,puVar1,ar7_01));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c0a861c(ar4,ar5,((undefined1 *)(fr0_ - 0x90)),ar7_01));
    (vsp = ((unsigned long)(fr0_ - 184)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x90)),0xffffffff,0xffffffff,ar7_01));
    goto switchD_8c0a69b0_default;
  case 7:
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 5;
switchD_8c0a69b0_caseD_5:
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x9c)),ar6,((void *)0x8c03f460),ar7_01));
    puVar4 = ((undefined1 *)(fr0_ - 0x9c));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c0a8c0c(ar4,ar5,puVar4,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,puVar4,ar7));
    goto switchD_8c0a69b0_default;
  case 8:
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 6;
switchD_8c0a69b0_caseD_6:
    if (*(int *)(unsigned)(ar4 + 0x2198) == 6) {
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c03f460(((undefined1 *)(fr0_ - 0xa8)),ar6,puVar1,ar7_01));
      puVar4 = ((undefined1 *)(fr0_ - 0xa8));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c0a8464(ar4,ar5,puVar4,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 184)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,puVar4,ar7_01));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*((ulonglong *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((ulonglong *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar5,puVar1,ar7_01));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c0a77c8(ar4,ar5,ar7,ar7_01));
    }
    goto switchD_8c0a69b0_default;
  case 9:
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 7;
switchD_8c0a69b0_caseD_7:
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c03f460(((undefined1 *)(fr0_ - 0xb4)),ar6,puVar1,ar7_01));
    puVar4 = ((undefined1 *)(fr0_ - 0xb4));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c0a9578(ar4,ar5,puVar4,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,puVar4,ar7));
    goto switchD_8c0a69b0_default;
  }
switchD_8c0a6c88_default:
  *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
switchD_8c0a69b0_caseD_2:
  iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,puVar1,ar7_01));
  if (iVar2 == 1) {
    iVar5 = 0;
  }
switchD_8c0a69b0_default:
  if (iVar5 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
  }
  return iVar5;
}

__asm__(".globl _FUN_8c0a6974\n.set _FUN_8c0a6974, _FUN_8c0a6974_def\n");
//@unit 8c0a72b4
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
undefined4 FUN_8c0a72b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a72b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 92; for (int i_ = 0; i_ < 92; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 unaff_r11 = 0;
  undefined4 uVar3;
  undefined4 unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  undefined8 *puVar4;
  undefined4 uVar5;
  float fVar6;
  ulonglong in_dr0 = 0;
  undefined8 uVar7;
  double dVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined8 in_dr14 = 0;
  undefined8 in_xd14 = 0;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x8)) = CONCAT44((int)in_dr14,(undefined4)(*(undefined8 *)(fr0_ - 0x8)));
    puVar4 = &(*(undefined8 *)(fr0_ - 0x8));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x8))+0)) = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar4 = (undefined8 *)(unsigned)((undefined1 *)(fr0_ - 0x10));
    (*(undefined8 *)(fr0_ - 0x8)) = in_xd14;
  }
  *(undefined4 *)(unsigned)((int)puVar4 + -4) = unaff_r14;
  *(undefined4 *)(unsigned)((int)puVar4 + -8) = unaff_r13;
  *(undefined4 *)(unsigned)((int)puVar4 + -0xc) = 1;
  *(undefined4 *)(unsigned)((int)puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)(unsigned)((int)puVar4 + -0x14) = in_PR;
  uVar3 = 1;
  uVar1 = ar5;
  ar6_00 = ar6;
  (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), Vec3_set_zero((undefined1 *)(unsigned)((int)puVar4 + -0x20),ar5,ar6,ar7));
  uVar10 = (undefined4)in_dr14;
  iVar2 = *(int *)(unsigned)(ar4 + 0x40);
  if ((5 < iVar2) || (iVar2 < 0)) goto switchD_8c0a72f4_caseD_2;
                    
  switch(iVar2) {
  case 0:
    uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), rand_range(ar4,0,2,ar7));
    uVar5 = (undefined4)in_dr0;
    *(undefined4 *)(unsigned)((int)puVar4 + -0x28) = uVar1;
    if (*(int *)(unsigned)((int)puVar4 + -0x28) == 1) {
      ar7 = 0;
      ar6_00 = 0xffffffff;
      uVar1 = 0;
      (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      *(undefined4 *)(unsigned)(ar4 + 0x220) = 0;
    }
    else {
      ar7 = 0;
      ar6_00 = 0xffffffff;
      uVar1 = 1;
      (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
      *(undefined4 *)(unsigned)(ar4 + 0x220) = 1;
    }
    (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_00,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(0xbf800000,uVar5);
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 0xbf800000;
    }
    else {
      in_dr0 = 0xb0bf800000;
      *(undefined8 *)(unsigned)(ar4 + 0x30) = 0xb0bf800000;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x224) = 2;
    break;
  case 2:
    goto switchD_8c0a72f4_caseD_2;
  case 3:
    goto switchD_8c0a72f4_caseD_3;
  case 4:
    *(int *)(unsigned)((int)puVar4 + -0x50) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar8 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c2858d8),*(undefined4 *)(unsigned)(ar4 + 0x22c));
    }
    else {
      dVar8 = CONCAT44D(((undefined4 *)(unsigned long)*(unsigned *)0x8c2858dc),(*(undefined4 *)(unsigned)(unsigned)0x8c2858d8));
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = F32LO(dVar8) / F32HI(dVar8);
    }
    else {
      fVar6 = SUB84(dVar8 / dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar4 + -0x50) + 0x28),fVar6);
    }
    else {
      dVar8 = *(double *)(unsigned)(*(int *)(unsigned)((int)puVar4 + -0x50) + 0x28);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = CONCAT44D(F32HI(dVar8) - F32LO(dVar8),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(*(int *)(unsigned)((int)puVar4 + -0x50) + 0x28) = (int)(D2U(dVar8) >> 0x20);
      dVar8 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x28);
    }
    else {
      *(double *)(unsigned)(*(int *)(unsigned)((int)puVar4 + -0x50) + 0x28) = dVar8;
    }
    if (in_FPSCR_PR != '\0' || SUB84(dVar8,0) <= 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = D2U(dVar8) & 0xffffffff;
      }
    }
    uVar9 = D2U(dVar8) & 0xffffffff;
    uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7));
    *(undefined4 *)(unsigned)((int)puVar4 + -0x48) = uVar1;
    if (*(int *)(unsigned)((int)puVar4 + -0x48) == 1) {
      (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7));
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar4 + -0x4c) = (int)(uVar9 >> 0x20);
        dVar8 = CONCAT44D(0x40000000,((undefined4 *)(unsigned long)*(unsigned *)0x8c2858dc));
      }
      else {
        *(ulonglong *)(unsigned)((int)puVar4 + -0x4c) = uVar9;
        dVar8 = 1.8924005974588927e+232;
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = F32LO(dVar8) * F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 * dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),fVar6);
      }
      else {
        dVar8 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = F32LO(dVar8) + F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 + dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar9 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar4 + -0x4c),fVar6);
      }
      else {
        uVar9 = *(ulonglong *)(unsigned)((int)puVar4 + -0x4c);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar9 < (float)(uVar9 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar9 & 0xffffffff;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x220) = *(undefined4 *)(unsigned)(ar4 + 0x224);
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
        if (*(int *)(unsigned)(ar4 + 0x220) == 0) {
          ar7 = 0;
          ar6_00 = 0xffffffff;
          ar6 = 0;
          (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        }
        else if (*(int *)(unsigned)(ar4 + 0x220) == 1) {
          ar7 = 0;
          ar6_00 = 0xffffffff;
          ar6 = 1;
          (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
        }
        (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar6,ar6_00,ar7));
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar9 & 0xffffffff;
        }
        uVar3 = 0;
      }
    }
    goto switchD_8c0a72f4_caseD_2;
  }
  fVar6 = (float)in_dr0;
  if (*(int *)(unsigned)(ar4 + 0x220) == 0) {
    if (in_FPSCR_SZ == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2858d4) = 1.0;
    }
    else {
      *(unsigned *)0x8c2858dc = (unsigned)(unsigned long)((code *)0x3f333333);
      (*(undefined4 *)(unsigned)(unsigned)0x8c2858e8) = 0x7104d120;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2858d4) = fVar6;
      fVar6 = 0.7;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c2858e4) = 0.7;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2858e0) = 0.7;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2858d8) = 0x41300000;
  }
  else if (*(int *)(unsigned)(ar4 + 0x220) == 1) {
    if (in_FPSCR_SZ != '\0') {
      fVar6 = 7.0;
      *(unsigned *)0x8c2858dc = (unsigned)(unsigned long)(((void *)0x8c031b68));
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c2858d8) = 0x40e00000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2858d4) = 10.0;
    if (in_FPSCR_SZ == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2858e0) = 1.0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2858e4) = 1.0;
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2858e8) = 0x3f800000;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2858e0) = fVar6;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2858e4) = fVar6;
    }
  }
  (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), FUN_8c031b68(ar4,0x8c2858d0,ar6_00,ar7));
  if (in_FPSCR_SZ == '\0') {
    fVar6 = *(float *)(unsigned)(ar4 + 0x30);
  }
  in_dr0 = (ulonglong)(uint)fVar6;
  if (in_FPSCR_PR != '\0' || 0.0 <= fVar6) {
    if (in_FPSCR_SZ == '\0') {
      uVar10 = *(undefined4 *)(unsigned)(ar4 + 0x30);
    }
    else {
      in_xd14 = *(undefined8 *)(unsigned)(ar4 + 0x30);
      uVar10 = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x2c);
    }
  }
  uVar1 = ar5;
  ar6_00 = ar6;
  (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), FUN_8c031bb4(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x224) != 2) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x30) = uVar10;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd14;
    }
  }
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
switchD_8c0a72f4_caseD_3:
  if (*(int *)(unsigned)(ar4 + 0x220) == 0) {
    (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), FUN_8c03f3ac(ar4 + 0xb0,uVar1,ar6_00,ar7));
    ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar4 + -0x50)); vin0 = (unsigned)ri0_; vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6_00,ar7); });
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar4 + -0x2c) = (int)(in_dr0 >> 0x20);
      uVar7 = CONCAT44(0x41e80000,*(undefined4 *)(unsigned)((int)puVar4 + -0x2c));
    }
    else {
      *(ulonglong *)(unsigned)((int)puVar4 + -0x2c) = in_dr0;
      uVar7 = 0x8c032a6441e80000;
    }
    if (in_FPSCR_PR != '\0' || F32HI(uVar7) <= (float)uVar7) {
      ar6_00 = 5;
      uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), rand_range(ar4,0,5,ar7));
      *(undefined4 *)(unsigned)((int)puVar4 + -0x30) = uVar1;
      if (*(int *)(unsigned)((int)puVar4 + -0x30) != 1) {
        (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar4 + -0x34) = (int)((ulonglong)uVar7 >> 0x20);
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),((undefined4 *)(unsigned long)*(unsigned *)0x8c2858dc));
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar4 + -0x34) = uVar7;
          dVar8 = *(double *)(unsigned)(ar4 + 0x28);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = F32LO(dVar8) + F32HI(dVar8);
        }
        else {
          fVar6 = SUB84(dVar8 + dVar8,0);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar7 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar4 + -0x34),fVar6);
        }
        else {
          uVar7 = *(undefined8 *)(unsigned)((int)puVar4 + -0x34);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar7 < F32HI(uVar7))
        goto LAB_8c0a761e;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x224) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x220) = 2;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x22c) = *(undefined4 *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x22c) = *(undefined8 *)(unsigned)(ar4 + 0x28);
      }
    }
  }
  else if (*(int *)(unsigned)(ar4 + 0x220) == 1) {
    (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), FUN_8c03f3ac(ar4 + 0xb0,uVar1,ar6_00,ar7));
    ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar4 + -0x50)); vin0 = (unsigned)ri0_; vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6_00,ar7); });
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar4 + -0x38) = (int)(in_dr0 >> 0x20);
      uVar7 = CONCAT44(0x41200000,*(undefined4 *)(unsigned)((int)puVar4 + -0x38));
    }
    else {
      *(ulonglong *)(unsigned)((int)puVar4 + -0x38) = in_dr0;
      uVar7 = 0xb041200000;
    }
    if (in_FPSCR_PR != '\0' || F32HI(uVar7) <= (float)uVar7) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x40a00000;
        uVar7 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x28),(float)uVar7);
        *(undefined4 *)(unsigned)(ar4 + 0x24) = *(undefined4 *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x4140000040a00000;
        uVar7 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        *(undefined8 *)(unsigned)(ar4 + 0x24) = uVar7;
      }
    }
    ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar4 + -0x50)); vin0 = (unsigned)ri0_; vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6_00,ar7); });
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar4 + -0x3c) = (int)((ulonglong)uVar7 >> 0x20);
      uVar7 = CONCAT44(0x41400000,*(undefined4 *)(unsigned)((int)puVar4 + -0x3c));
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar4 + -0x3c) = uVar7;
      uVar7 = 0x8c032a6441400000;
    }
    if (in_FPSCR_PR != '\0' || F32HI(uVar7) <= (float)uVar7) {
      ar6_00 = 2;
      uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), rand_range(ar4,0,2,ar7));
      *(undefined4 *)(unsigned)((int)puVar4 + -0x40) = uVar1;
      if (*(int *)(unsigned)((int)puVar4 + -0x40) != 1) {
        (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar4 + -0x44) = (int)((ulonglong)uVar7 >> 0x20);
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),((undefined4 *)(unsigned long)*(unsigned *)0x8c2858dc));
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar4 + -0x44) = uVar7;
          dVar8 = *(double *)(unsigned)(ar4 + 0x28);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = F32LO(dVar8) + F32HI(dVar8);
        }
        else {
          fVar6 = SUB84(dVar8 + dVar8,0);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar7 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar4 + -0x44),fVar6);
        }
        else {
          uVar7 = *(undefined8 *)(unsigned)((int)puVar4 + -0x44);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar7 < F32HI(uVar7))
        goto LAB_8c0a761e;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x224) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x220) = 2;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x22c) = *(undefined4 *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x22c) = *(undefined8 *)(unsigned)(ar4 + 0x28);
      }
    }
  }
LAB_8c0a761e:
  if (*(int *)(unsigned)(ar4 + 0x40) != 4) {
    (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), FUN_8c031764(ar4,ar6,ar5,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    ar6_00 = ar5;
  }
switchD_8c0a72f4_caseD_2:
  *(undefined4 *)(unsigned)((int)puVar4 + -0x24) = uVar3;
  (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), object_dtor_delete((undefined1 *)(unsigned)((int)puVar4 + -0x20),0xffffffff,ar6_00,ar7));
  return *(undefined4 *)(unsigned)((int)puVar4 + -0x24);
}

__asm__(".globl _FUN_8c0a72b4\n.set _FUN_8c0a72b4, _FUN_8c0a72b4_def\n");
//@unit 8c0a77c8
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
undefined4 FUN_8c0a77c8_def(int ar4,code *ar5,double *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a77c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  double *pdVar3;
  undefined4 uVar4;
  double *ar6_00;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double in_dr0 = 0;
  code *pcVar12;
  float fVar13;
  double dVar10;
  undefined8 uVar11;
  undefined8 in_dr4 = 0;
  undefined8 in_dr6 = 0;
  undefined4 in_fr14 = 0;
  double in_xd0 = 0;
  bool bVar14;
  char cVar15;
  char cVar16;
  
  cVar16 = '\0';
  cVar15 = '\0';
  fVar7 = F32HI(in_dr4);
  fVar9 = F32HI(in_dr6);
  uVar6 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    ar7 = 0;
    pdVar3 = (double *)(unsigned)0xffffffff;
    ar5 = (code *)0x0;
    (vsp = ((unsigned long)(fr0_ - 100)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
    fVar7 = F32LO(in_dr0);
    (vsp = ((unsigned long)(fr0_ - 100)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,pdVar3,ar7));
    if (cVar16 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar7;
    }
    if (cVar16 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
      fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x94) = (ulonglong)(uint)fVar7;
      in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
    }
    dVar10 = (double)(ulonglong)(uint)fVar7;
    if (cVar15 == '\0' && fVar7 < 0.0) {
      while( true ) {
        fVar7 = F32LO(dVar10);
        if (cVar16 == '\0') {
          fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
        }
        if (cVar15 == '\0' && 0.0 < fVar7) break;
        ar5 = (code *)(ar4 + 0x21ac);
        if (cVar16 == '\0') {
          dVar10 = CONCAT44D(0x43b40000,*(undefined4 *)(unsigned)(ar4 + 0x21ac));
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          dVar10 = -5629500670083072.0;
        }
        if (cVar15 == '\0') {
          dVar10 = (double)(ulonglong)(uint)(F32LO(dVar10) + F32HI(dVar10));
        }
        else {
          dVar10 = dVar10 + dVar10;
        }
        if (cVar16 == '\0') {
          *(float *)(unsigned)ar5 = SUB84(dVar10,0);
        }
        else {
          *(double *)(unsigned)ar5 = in_xd0;
        }
      }
      if (cVar16 == '\0') {
        dVar10 = CONCAT44D(0x43b40000,*(undefined4 *)(unsigned)(ar4 + 0x21ac));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
        dVar10 = -5629500670083072.0;
      }
      if (cVar15 == '\0') {
        fVar7 = F32LO(dVar10) - F32HI(dVar10);
      }
      else {
        fVar7 = SUB84(dVar10 - dVar10,0);
      }
      if (cVar16 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
        fVar9 = -180.0;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
        in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
        fVar7 = -180.0;
        fVar9 = 4.2039e-43;
      }
      if (cVar15 == '\0' && fVar7 < fVar9) {
        if (cVar16 == '\0') {
          dVar10 = CONCAT44D(0x43b40000,*(undefined4 *)(unsigned)(ar4 + 0x21ac));
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          dVar10 = -5629500670083072.0;
        }
        if (cVar15 == '\0') {
          fVar7 = F32LO(dVar10) + F32HI(dVar10);
        }
        else {
          fVar7 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar16 == '\0') {
          *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
        }
      }
    }
    else {
      while( true ) {
        fVar7 = F32LO(dVar10);
        if (cVar16 == '\0') {
          fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
        }
        if (cVar15 == '\0' && fVar7 < 0.0) break;
        if (cVar16 == '\0') {
          dVar10 = CONCAT44D(0x43b40000,*(undefined4 *)(unsigned)(ar4 + 0x21ac));
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          dVar10 = 5629500670083072.0;
        }
        if (cVar15 == '\0') {
          dVar10 = (double)(ulonglong)(uint)(F32LO(dVar10) - F32HI(dVar10));
        }
        else {
          dVar10 = dVar10 - dVar10;
        }
        if (cVar16 == '\0') {
          *(int *)(unsigned)(ar4 + 0x21ac) = SUB84(dVar10,0);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
        }
      }
      if (cVar16 == '\0') {
        dVar10 = CONCAT44D(0x43b40000,*(undefined4 *)(unsigned)(ar4 + 0x21ac));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
        dVar10 = 5629500670083072.0;
      }
      if (cVar15 == '\0') {
        fVar7 = F32LO(dVar10) + F32HI(dVar10);
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar16 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
        fVar9 = 180.0;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
        in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
        fVar7 = 180.0;
        fVar9 = -1.0;
      }
      if (cVar15 == '\0' && fVar9 < fVar7) {
        pdVar3 = (double *)(unsigned)(ar4 + 0x21ac);
        if (cVar16 == '\0') {
          dVar10 = CONCAT44D(*(float *)(unsigned)pdVar3,0x43b40000);
        }
        else {
          dVar10 = *pdVar3;
          in_xd0 = 5629500670083072.0;
        }
        if (cVar15 == '\0') {
          fVar7 = F32LO(dVar10) - F32HI(dVar10);
        }
        else {
          fVar7 = SUB84(dVar10 - dVar10,0);
        }
        if (cVar16 == '\0') {
          dVar10 = CONCAT44D(0xbf800000,fVar7);
        }
        else {
          dVar10 = 4.6047243762097055e-232;
        }
        if (cVar15 == '\0') {
          fVar7 = F32LO(dVar10) * F32HI(dVar10);
        }
        else {
          fVar7 = SUB84(dVar10 * dVar10,0);
        }
        if (cVar16 == '\0') {
          *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
        }
      }
    }
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else {
    pdVar3 = ar6;
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        *(float *)(unsigned)(ar4 + 0x21a8) = *(float *)(unsigned)(ar4 + 0x21a8) - 6.0;
        *(float *)(unsigned)(ar4 + 0x2194) = *(float *)(unsigned)(ar4 + 0x2194) + 6.0;
        fVar8 = *(float *)(unsigned)(ar4 + 0x2194);
        if (fVar8 < 90.0) {
          return 1;
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
        fVar13 = -fVar9;
        in_dr0 = CONCAT44D(fVar13,fVar8);
        *(float *)(unsigned)(ar4 + 0x94) = fVar13;
      }
      else if (iVar1 != 3) {
        return 1;
      }
      pdVar3 = (double *)(unsigned)ar5;
      ar6_00 = ar6;
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022fc0(ar4 + 0x54,ar5,ar6,ar7));
      fVar8 = F32HI(in_dr0);
      dVar10 = in_dr0;
      if (cVar16 == '\0') {
        (*(undefined8 *)(fr0_ - 0x60)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x60))+4)),fVar8);
        dVar10 = (*(undefined8 *)(fr0_ - 0x60));
      }
      (*(undefined8 *)(fr0_ - 0x60)) = dVar10;
      if (cVar15 == '\0') {
        bVar14 = fVar8 < fVar7;
      }
      else {
        bVar14 = in_dr0 < CONCAT44D(in_fr14,fVar7);
      }
      if (bVar14) goto LAB_8c0a82ca;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      if (cVar16 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x94) = (ulonglong)in_dr0 & 0xffffffff;
      }
      uVar6 = 0;
      ar6_00 = (double *)(unsigned)0x2;
      pdVar3 = (double *)(unsigned)(vsp = ((unsigned long)(fr0_ - 100)), rand_range(ar4,0,2,ar7));
      if ((pdVar3 != (double *)(unsigned)0x0) || (*(int *)(unsigned)(ar4 + 0x2198) == 7)) {
        *(undefined4 *)(unsigned)(ar4 + 0x2198) = 6;
        goto LAB_8c0a82ca;
      }
      (vsp = ((unsigned long)(fr0_ - 100)), Vec3_assign(ar4 + 0x54,ar5,ar6_00,ar7));
      if (cVar16 == '\0') {
        *(int *)(unsigned)(ar4 + 0x58) = (int)in_dr4;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x58) = CONCAT44(fVar9,(int)in_dr4);
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2198) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x21a4) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x230) = 0;
      if (cVar16 == '\0') {
        fVar9 = *(float *)(unsigned)((int)ar6 + 4);
        fVar8 = 90.0;
      }
      else {
        in_xd0 = *(double *)(unsigned)((int)ar6 + 4);
        fVar9 = 90.0;
        fVar8 = 4.2039e-43;
      }
      if (fVar9 == fVar8) {
        if (cVar16 == '\0') {
          fVar9 = *(float *)(unsigned)(ar4 + 0x21ac);
          fVar8 = 90.0;
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          fVar9 = 90.0;
          fVar8 = 4.2039e-43;
        }
        if (fVar9 != fVar8) goto LAB_8c0a80fe;
LAB_8c0a8154:
        if (cVar16 == '\0') {
          dVar10 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x5c));
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x5c);
          dVar10 = 3.73983522256399e-312;
        }
        if (cVar15 == '\0') {
          fVar9 = F32LO(dVar10) + F32HI(dVar10);
        }
        else {
          fVar9 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar16 == '\0') {
          *(float *)(unsigned)(ar4 + 0x5c) = fVar9;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x5c) = in_xd0;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2c))); *(unsigned *)((((unsigned long)(fr0_ - 100)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 100)) - 8); Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7); });
        uVar4 = (vsp = ((unsigned long)(fr0_ - 100)), Vec3_length(((undefined1 *)(fr0_ - 0x2c)),((void *)0x8c022f54),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 100)), Vec3_assign(ar4 + 0x80,uVar4,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 100)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
      }
      else {
LAB_8c0a80fe:
        if (cVar16 == '\0') {
          fVar9 = *(float *)(unsigned)((int)ar6 + 4);
          fVar8 = -90.0;
        }
        else {
          in_xd0 = *(double *)(unsigned)((int)ar6 + 4);
          fVar9 = -90.0;
          fVar8 = 180.0;
        }
        if (fVar9 == fVar8) {
          if (cVar16 == '\0') {
            fVar9 = *(float *)(unsigned)(ar4 + 0x21ac);
            fVar8 = -90.0;
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
            fVar9 = -90.0;
            fVar8 = 180.0;
          }
          if (fVar9 == fVar8) goto LAB_8c0a8154;
        }
        if (cVar16 == '\0') {
          fVar9 = *(float *)(unsigned)((int)ar6 + 4);
        }
        else {
          in_xd0 = *(double *)(unsigned)((int)ar6 + 4);
        }
        if (fVar9 == 0.0) {
          if (cVar16 == '\0') {
            fVar9 = *(float *)(unsigned)(ar4 + 0x21ac);
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          }
          if (fVar9 == 0.0) goto LAB_8c0a8154;
        }
        if (cVar16 == '\0') {
          fVar9 = *(float *)(unsigned)((int)ar6 + 4);
          fVar8 = 180.0;
        }
        else {
          in_xd0 = *(double *)(unsigned)((int)ar6 + 4);
          fVar9 = 180.0;
          fVar8 = 0.1;
        }
        if (fVar9 == fVar8) {
          if (cVar16 == '\0') {
            fVar9 = *(float *)(unsigned)(ar4 + 0x21ac);
            fVar8 = 180.0;
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
            fVar9 = 180.0;
            fVar8 = 0.1;
          }
          if (fVar9 == fVar8) goto LAB_8c0a8154;
        }
        if (cVar16 == '\0') {
          dVar10 = CONCAT44D(0xbdcccccd,*(undefined4 *)(unsigned)(ar4 + 0x5c));
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x5c);
          dVar10 = 3.41092587496438e-312;
        }
        if (cVar15 == '\0') {
          fVar9 = F32LO(dVar10) + F32HI(dVar10);
        }
        else {
          fVar9 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar16 == '\0') {
          *(float *)(unsigned)(ar4 + 0x5c) = fVar9;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x5c) = in_xd0;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x3c))); *(unsigned *)((((unsigned long)(fr0_ - 100)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 100)) - 8); Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7); });
        uVar4 = (vsp = ((unsigned long)(fr0_ - 100)), Vec3_length(((undefined1 *)(fr0_ - 0x3c)),((void *)0x8c022f54),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 100)), Vec3_assign(ar4 + 0x80,uVar4,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 100)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7));
      }
      iVar1 = ar4 + 0x80;
      (vsp = ((unsigned long)(fr0_ - 100)), Vec3_assign(ar4 + 0x14,iVar1,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c023d7c(ar4 + 0x21a8,iVar1,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c023d7c(ar6,iVar1,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c031ab4(ar4,ar6,ar6_00,ar7));
      pdVar3 = ar6;
LAB_8c0a82ca:
      if (499 < *(int *)(unsigned)(ar4 + 0x230)) {
        return uVar6;
      }
      if (cVar16 == '\0') {
        fVar9 = *(float *)(unsigned)(ar4 + 0x94);
        fVar8 = -3.0;
      }
      else {
        fVar9 = -3.0;
        fVar8 = 2.2959944e+08;
      }
      if (cVar15 != '\0' || fVar9 <= fVar8) {
        iVar1 = 0;
        while( true ) {
          if (cVar16 == '\0') {
            uVar11 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x94),(float)iVar1);
          }
          else {
            uVar11 = *(undefined8 *)(unsigned)(ar4 + 0x94);
          }
          if (cVar15 == '\0' && (float)uVar11 < F32HI(uVar11)) break;
          (vsp = ((unsigned long)(fr0_ - 100)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x4c)),pdVar3,ar6_00,ar7));
          ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x60)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 100)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 100)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0x4c)),ar6_00,ar7); });
          (vsp = ((unsigned long)(fr0_ - 100)), Vec3_assign(ar4 + *(int *)(unsigned)(ar4 + 0x230) * 0x10 + 0x234,(int)&(*(undefined8 *)(fr0_ - 0x60)) + 4,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 100)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x60)) + 4,0xffffffff,ar6_00,ar7));
          pdVar3 = (double *)(unsigned)0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 100)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6_00,ar7));
          iVar2 = *(int *)(unsigned)(ar4 + 0x230);
          *(int *)(unsigned)(ar4 + 0x230) = iVar2 + 1;
          if (499 < iVar2 + 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x230) = 500;
          }
          if (cVar15 == '\0') {
            bVar14 = (float)*(int *)(unsigned)(ar4 + 0x230) < fVar7;
          }
          else {
            bVar14 = (double)*(int *)(unsigned)(ar4 + 0x230) < CONCAT44D(in_fr14,fVar7);
          }
          if (!bVar14) {
            if (cVar15 == '\0') {
              iVar2 = (int)fVar7;
            }
            else {
              iVar2 = (int)CONCAT44D(in_fr14,fVar7);
            }
            *(int *)(unsigned)(ar4 + 0x230) = iVar2;
          }
          iVar1 = iVar1 + -2;
        }
        return uVar6;
      }
      (vsp = ((unsigned long)(fr0_ - 100)), Vec3_assign(ar4 + *(int *)(unsigned)(ar4 + 0x230) * 0x10 + 0x234,ar5,ar6_00,ar7));
      iVar1 = *(int *)(unsigned)(ar4 + 0x230);
      *(int *)(unsigned)(ar4 + 0x230) = iVar1 + 1;
      if (499 < iVar1 + 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x230) = 500;
      }
      if (cVar15 == '\0') {
        bVar14 = (float)*(int *)(unsigned)(ar4 + 0x230) < fVar7;
      }
      else {
        bVar14 = (double)*(int *)(unsigned)(ar4 + 0x230) < CONCAT44D(in_fr14,fVar7);
      }
      if (bVar14) {
        return uVar6;
      }
      if (cVar15 == '\0') {
        iVar1 = (int)fVar7;
      }
      else {
        iVar1 = (int)CONCAT44D(in_fr14,fVar7);
      }
      *(int *)(unsigned)(ar4 + 0x230) = iVar1;
      return uVar6;
    }
  }
  if (cVar16 == '\0') {
    fVar7 = *(float *)(unsigned)((int)ar6 + 4);
    fVar9 = 90.0;
  }
  else {
    in_xd0 = *(double *)(unsigned)((int)ar6 + 4);
    fVar7 = 90.0;
    fVar9 = -90.0;
  }
  if (fVar7 != fVar9) {
    if (cVar16 == '\0') {
      fVar7 = *(float *)(unsigned)((int)ar6 + 4);
      fVar9 = -90.0;
    }
    else {
      in_xd0 = *(double *)(unsigned)((int)ar6 + 4);
      fVar7 = -90.0;
      fVar9 = -1.0;
    }
    if (fVar7 != fVar9) {
      if (cVar16 == '\0') {
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
      }
      if (cVar15 != '\0' || 0.0 <= fVar7) {
        if (cVar16 == '\0') {
          fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
          fVar9 = 90.0;
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          fVar7 = 90.0;
          fVar9 = 180.0;
        }
        if (cVar15 == '\0' && fVar7 < fVar9) {
          if (cVar16 == '\0') {
            fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          }
          if (cVar15 == '\0') {
            fVar7 = fVar7 - 1.0;
          }
          else {
            fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7),0)
            ;
          }
          if (cVar16 == '\0') {
            *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
            fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
          }
          else {
            *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
          }
          if (cVar15 != '\0' || fVar7 <= 0.0) {
            if (cVar16 == '\0') {
              fVar7 = *(float *)(unsigned)((int)ar6 + 4);
            }
            if (fVar7 == 0.0) {
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
            }
            else {
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
            }
            if (cVar16 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x21ac) = 0;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x21ac) = (ulonglong)(uint)fVar7;
            }
          }
        }
        else {
          if (cVar16 == '\0') {
            fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          }
          if (cVar15 == '\0') {
            fVar7 = fVar7 + 1.0;
          }
          else {
            fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0)
            ;
          }
          if (cVar16 == '\0') {
            *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
            fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
            pcVar12 = (code *)0x43340000;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
            fVar7 = 180.0;
            pcVar12 = ((void *)0x8c022d04);
          }
          if (cVar15 != '\0' || (float)(uint)pcVar12 <= fVar7) {
            if (cVar16 == '\0') {
              fVar7 = *(float *)(unsigned)((int)ar6 + 4);
            }
            if (fVar7 == 0.0) {
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
            }
            else {
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
            }
            if (cVar16 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x21ac) = 0x43340000;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x21ac) = 0xfe6e04443340000;
            }
          }
        }
      }
      else {
        if (cVar16 == '\0') {
          fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
          fVar9 = -90.0;
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          fVar7 = -90.0;
          fVar9 = -180.0;
        }
        if (cVar15 == '\0' && fVar9 < fVar7) {
          if (cVar16 == '\0') {
            fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          }
          if (cVar15 == '\0') {
            fVar7 = fVar7 + 1.0;
          }
          else {
            fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0)
            ;
          }
          if (cVar16 == '\0') {
            *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
            fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
          }
          else {
            *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
          }
          if (cVar15 != '\0' || 0.0 <= fVar7) {
            if (cVar16 == '\0') {
              fVar7 = *(float *)(unsigned)((int)ar6 + 4);
            }
            if (fVar7 == 0.0) {
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
            }
            else {
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
            }
            if (cVar16 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x21ac) = 0;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x21ac) = (ulonglong)(uint)fVar7;
            }
          }
        }
        else {
          if (cVar16 == '\0') {
            fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          }
          if (cVar15 == '\0') {
            fVar7 = fVar7 - 1.0;
          }
          else {
            fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7),0)
            ;
          }
          if (cVar16 == '\0') {
            *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
            fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
            pcVar12 = (code *)0xc3340000;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
            fVar7 = -180.0;
            pcVar12 = ((void *)0x8c022d04);
          }
          if (cVar15 != '\0' || fVar7 <= (float)(uint)pcVar12) {
            if (cVar16 == '\0') {
              fVar7 = *(float *)(unsigned)((int)ar6 + 4);
            }
            if (fVar7 == 0.0) {
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
            }
            else {
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
            }
            if (cVar16 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x21ac) = 0x43340000;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x21ac) = 0x53ff1fef43340000;
            }
          }
        }
      }
      goto LAB_8c0a7e8a;
    }
  }
  if (cVar16 == '\0') {
    fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
  }
  if (cVar15 == '\0' && 0.0 < fVar7) {
    if (cVar16 == '\0') {
      fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
      fVar9 = 90.0;
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
      fVar7 = 90.0;
      fVar9 = -90.0;
    }
    if (cVar15 != '\0' || fVar9 <= fVar7) {
      ar5 = (code *)(ar4 + 0x21ac);
      if (cVar16 == '\0') {
        fVar7 = *(float *)(unsigned)ar5;
      }
      else {
        in_xd0 = *(double *)(unsigned)ar5;
      }
      if (cVar15 == '\0') {
        fVar7 = fVar7 - 1.0;
      }
      else {
        fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7),0);
      }
      if (cVar16 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
        fVar9 = 90.0;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
        in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
        fVar7 = 90.0;
        fVar9 = -90.0;
      }
      if (cVar15 != '\0' || fVar7 <= fVar9) {
        ar5 = (code *)(ar4 + 0x21ac);
        if (cVar16 == '\0') {
          *(float *)(unsigned)ar5 = 90.0;
          fVar7 = *(float *)(unsigned)((int)ar6 + 4);
          fVar9 = 90.0;
        }
        else {
          *(double *)(unsigned)ar5 = -21990236926976.0;
          in_xd0 = *(double *)(unsigned)((int)ar6 + 4);
          fVar7 = 90.0;
          fVar9 = -90.0;
        }
        if (fVar7 == fVar9) {
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
        }
      }
    }
    if (cVar16 == '\0') {
      fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
      fVar9 = 90.0;
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
      fVar7 = 90.0;
      fVar9 = -1.0;
    }
    if (cVar15 == '\0' && fVar7 < fVar9) {
      ar5 = (code *)(ar4 + 0x21ac);
      if (cVar16 == '\0') {
        fVar7 = *(float *)(unsigned)ar5;
      }
      else {
        in_xd0 = *(double *)(unsigned)ar5;
      }
      if (cVar15 == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0);
      }
      if (cVar16 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
        fVar9 = 90.0;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
        fVar7 = 90.0;
        fVar9 = -1.0;
      }
      if (cVar15 != '\0' || fVar9 <= fVar7) {
        ar5 = (code *)(ar4 + 0x21ac);
        if (cVar16 == '\0') {
          *(float *)(unsigned)ar5 = 90.0;
          fVar7 = *(float *)(unsigned)((int)ar6 + 4);
          fVar9 = 90.0;
        }
        else {
          *(double *)(unsigned)ar5 = -0.007812501941316441;
          fVar7 = 90.0;
          fVar9 = -1.0;
        }
        if (fVar7 == fVar9) {
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
        }
      }
    }
  }
  else {
    if (cVar16 == '\0') {
      fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
      fVar9 = -90.0;
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
      fVar7 = -90.0;
      fVar9 = 90.0;
    }
    if (cVar15 == '\0' && fVar7 < fVar9) {
      if (cVar16 == '\0') {
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
      }
      if (cVar15 == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0);
      }
      if (cVar16 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
        fVar9 = -90.0;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
        in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
        fVar7 = -90.0;
        fVar9 = 90.0;
      }
      if (cVar15 != '\0' || fVar9 <= fVar7) {
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x21ac) = 0xc2b40000;
          fVar7 = *(float *)(unsigned)((int)ar6 + 4);
          pcVar12 = (code *)0x42b40000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x21ac) = 0x42b40000c2b40000;
          in_xd0 = *(double *)(unsigned)((int)ar6 + 4);
          fVar7 = 90.0;
          pcVar12 = ((void *)0x8c022d04);
        }
        if (fVar7 == (float)(uint)pcVar12) {
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
        }
      }
    }
    ar5 = (code *)0x21ac;
    if (cVar16 == '\0') {
      fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
      fVar9 = -90.0;
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
      fVar7 = -90.0;
      fVar9 = 90.0;
    }
    if (cVar15 == '\0' && fVar9 < fVar7) {
      if (cVar16 == '\0') {
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
      }
      if (cVar15 == '\0') {
        fVar7 = fVar7 - 1.0;
      }
      else {
        fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7),0);
      }
      if (cVar16 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
        fVar9 = -90.0;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
        fVar7 = -90.0;
        fVar9 = 90.0;
      }
      if (cVar15 != '\0' || fVar7 <= fVar9) {
        ar5 = (code *)(ar4 + 0x21ac);
        if (cVar16 == '\0') {
          *(float *)(unsigned)ar5 = -90.0;
          fVar7 = *(float *)(unsigned)((int)ar6 + 4);
          fVar9 = 90.0;
        }
        else {
          *(double *)(unsigned)ar5 = 21990245315584.0;
          fVar7 = 90.0;
          fVar9 = -6.935439e+32;
        }
        if (fVar7 == fVar9) {
          ar5 = ((void *)0x8c022d04);
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,((void *)0x8c022d04),pdVar3,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
        }
      }
    }
  }
LAB_8c0a7e8a:
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c03f3ac(ar4 + 0xb0,ar5,pdVar3,ar7));
  if (cVar16 == '\0') {
    fVar7 = *(float *)(unsigned)((int)ar6 + 4);
    fVar9 = 90.0;
  }
  else {
    fVar7 = 90.0;
    fVar9 = -90.0;
  }
  if (fVar7 != fVar9) {
    if (cVar16 == '\0') {
      fVar7 = *(float *)(unsigned)((int)ar6 + 4);
      fVar9 = -90.0;
    }
    else {
      fVar7 = -90.0;
      fVar9 = 4.2039e-43;
    }
    if (fVar7 != fVar9) {
      if (cVar16 == '\0') {
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
      }
      if (fVar7 != 0.0) {
        if (cVar16 == '\0') {
          fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
          fVar9 = 180.0;
        }
        else {
          fVar7 = 180.0;
          fVar9 = 4.2039e-43;
        }
        if (fVar7 != fVar9) {
          return 1;
        }
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      uVar5 = 0;
      uVar4 = 0xffffffff;
      uVar6 = 2;
      (vsp = ((unsigned long)(fr0_ - 100)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 100)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar6,uVar4,uVar5));
      if (cVar16 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x94) = 0xc0000000;
        return 1;
      }
      *(undefined8 *)(unsigned)(ar4 + 0x94) = 0x55fc1fecc0000000;
      return 1;
    }
  }
  if (cVar16 == '\0') {
    fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
    fVar9 = 90.0;
  }
  else {
    fVar7 = 90.0;
    fVar9 = -90.0;
  }
  if (fVar7 != fVar9) {
    if (cVar16 == '\0') {
      fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
      fVar9 = -90.0;
    }
    else {
      fVar7 = -90.0;
      fVar9 = 4.2039e-43;
    }
    if (fVar7 != fVar9) {
      return 1;
    }
  }
  *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  uVar5 = 0;
  uVar4 = 0xffffffff;
  uVar6 = 2;
  (vsp = ((unsigned long)(fr0_ - 100)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
  (vsp = ((unsigned long)(fr0_ - 100)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar6,uVar4,uVar5));
  if (cVar16 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x94) = 0xc0000000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x94) = 0x60e3d11ac0000000;
  }
  return 1;
}

__asm__(".globl _FUN_8c0a77c8\n.set _FUN_8c0a77c8, _FUN_8c0a77c8_def\n");
//@unit 8c0a8464
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
undefined4 FUN_8c0a8464_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a8464";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  iVar2 = ar6;
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x40400000;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    (vsp = ((unsigned long)(fr0_ - 4)), Vec3_assign(ar4 + 0x54,ar5,ar6,ar7));
    if (cVar6 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x58) = *(undefined4 *)(unsigned)(ar6 + 4);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x58) = *(undefined8 *)(unsigned)(ar6 + 4);
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x40000000;
      *(float *)(unsigned)(ar4 + 0x21a8) = *(float *)(unsigned)(ar4 + 0x21a8) + 6.0;
      *(float *)(unsigned)(ar4 + 0x2194) = *(float *)(unsigned)(ar4 + 0x2194) + 6.0;
      if (*(float *)(unsigned)(ar4 + 0x2194) < 90.0) {
        return 1;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
      return 1;
    }
    if (iVar1 != 3) {
      return 1;
    }
    if (*(float *)(unsigned)(ar5 + 4) < *(float *)(unsigned)(ar6 + 4)) {
      return 1;
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x2198) = 5;
    return 0;
  }
  while( true ) {
    if (cVar6 == '\0') {
      uVar3 = CONCAT44(*(undefined4 *)(unsigned)(ar5 + 4),
                       *(undefined4 *)(unsigned)(ar4 + *(int *)(unsigned)(ar4 + 0x230) * 0x10 + 0x238));
    }
    else {
      uVar3 = *(undefined8 *)(unsigned)(ar5 + 4);
    }
    if (cVar5 == '\0' && F32HI(uVar3) < (float)uVar3) break;
    *(int *)(unsigned)(ar4 + 0x230) = *(int *)(unsigned)(ar4 + 0x230) + -1;
  }
  if (*(int *)(unsigned)(ar4 + 0x230) < 1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022fc0(ar5,ar4 + 0x54,iVar2,ar7));
    if (cVar6 == '\0') {
      uVar4 = CONCAT44(0x42b40000,(int)((ulonglong)uVar3 >> 0x20));
    }
    else {
      uVar4 = 0x219442b40000;
    }
    if (cVar5 != '\0' || (float)uVar4 <= (float)(uVar4 >> 0x20)) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x230) = 0;
      if (cVar6 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2194) = uVar4 & 0xffffffff;
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c0a8464\n.set _FUN_8c0a8464, _FUN_8c0a8464_def\n");
//@unit 8c0a861c
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
undefined4 FUN_8c0a861c_def(int ar4,undefined8 *ar5,ulonglong *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a861c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 224; for (int i_ = 0; i_ < 224; i_++) z_[i_] = 0; }
  ulonglong uVar1;
  int iVar2;
  undefined *ar5_00;
  undefined4 uVar3;
  uint *ar5_01;
  ulonglong *ar6_00;
  undefined4 uVar4;
  float fVar5;
  ulonglong in_dr0 = 0;
  double dVar6;
  uint uVar8;
  undefined8 uVar7;
  ulonglong in_xd0 = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar4 = 1;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 224)), Vec3_ctor_zero(&(*(undefined8 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0xb8)) = 1;
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar2 < 5) && (-1 < iVar2)) {
    uVar3 = (undefined4)in_dr0;
                    
    switch(iVar2) {
    case 0:
      ar6_00 = (ulonglong *)(unsigned)0x2;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 224)), rand_range(ar4,0,2,ar7));
      if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(&(*(undefined8 *)(fr0_ - 0x24)),ar5,ar6_00,ar7));
        if (cVar10 == '\0') {
        }
        else {
          (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x24))+4)) = 0x219c;
        }
        (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x24))+0)) = 0x42c80000;
        (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x54,&(*(undefined8 *)(fr0_ - 0x24)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(&(*(undefined8 *)(fr0_ - 0x24)),ar5,ar6_00,ar7));
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(0x42c80000,(int)*ar6);
        }
        else {
          in_xd0 = *ar6;
          dVar6 = 1.82582053383223e-310;
        }
        if (cVar9 == '\0') {
          fVar5 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar5,F32LO(dVar6) - fVar5);
        }
        else {
          dVar6 = dVar6 - dVar6;
        }
        uVar1 = in_xd0;
        if (cVar10 == '\0') {
          (*(undefined8 *)(fr0_ - 0x24)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x24))+4)),SUB84(dVar6,0));
          uVar1 = (*(undefined8 *)(fr0_ - 0x24));
        }
        (*(undefined8 *)(fr0_ - 0x24)) = uVar1;
        *(undefined4 *)(unsigned)(ar4 + 0x219c) = 4;
        (vsp = ((unsigned long)(fr0_ - 224)), FUN_8c022fc0(ar5,ar4 + 0x54,ar6_00,ar7));
        (*(undefined4 *)(fr0_ - 0xd0)) = (undefined4)(D2U(dVar6) >> 0x20);
        if (cVar10 == '\0') {
          (*(undefined4 *)(fr0_ - 0xd4)) = (*(undefined4 *)(fr0_ - 0xd0));
          (*(undefined4 *)(fr0_ - 0xd0)) = 0;
        }
        else {
          (*(undefined4 *)(fr0_ - 0xd4)) = SUB84(dVar6,0);
        }
        (vsp = ((unsigned long)(fr0_ - 224)), FUN_8c022fc0(ar5,&(*(undefined8 *)(fr0_ - 0x24)),ar6_00,ar7));
        uVar3 = (undefined4)(D2U(dVar6) >> 0x20);
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(uVar3,(*(undefined4 *)(fr0_ - 0xd4)));
        }
        else {
          in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0xd0)),uVar3);
        }
        if (cVar9 != '\0' || SUB84(dVar6,0) <= F32HI(dVar6)) {
          (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x54,&(*(undefined8 *)(fr0_ - 0x24)),ar6_00,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x219c) = 3;
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(&(*(undefined8 *)(fr0_ - 0x24)),ar5,ar6_00,ar7));
        if (cVar10 == '\0') {
        }
        else {
          (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1c))+4)) = 0xf0;
        }
        (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1c))+0)) = 0x42c80000;
        (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x54,&(*(undefined8 *)(fr0_ - 0x24)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(&(*(undefined8 *)(fr0_ - 0x24)),ar5,ar6_00,ar7));
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(0x42c80000,(int)ar6[1]);
        }
        else {
          in_xd0 = ar6[1];
          dVar6 = 5.09832542688757e-312;
        }
        if (cVar9 == '\0') {
          fVar5 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar5,F32LO(dVar6) - fVar5);
        }
        else {
          dVar6 = dVar6 - dVar6;
        }
        uVar1 = in_xd0;
        if (cVar10 == '\0') {
          (*(undefined8 *)(fr0_ - 0x1c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1c))+4)),SUB84(dVar6,0));
          uVar1 = (*(undefined8 *)(fr0_ - 0x1c));
        }
        (*(undefined8 *)(fr0_ - 0x1c)) = uVar1;
        *(undefined4 *)(unsigned)(ar4 + 0x219c) = 2;
        (vsp = ((unsigned long)(fr0_ - 224)), FUN_8c022fc0(ar5,ar4 + 0x54,ar6_00,ar7));
        uVar3 = (undefined4)(D2U(dVar6) >> 0x20);
        (*(undefined4 *)(fr0_ - 0xdc)) = uVar3;
        if (cVar10 != '\0') {
          (*(undefined4 *)(fr0_ - 0xdc)) = SUB84(dVar6,0);
          (*(undefined4 *)(fr0_ - 0xd8)) = uVar3;
        }
        (vsp = ((unsigned long)(fr0_ - 224)), FUN_8c022fc0(ar5,&(*(undefined8 *)(fr0_ - 0x24)),ar6_00,ar7));
        uVar3 = (undefined4)(D2U(dVar6) >> 0x20);
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(uVar3,(*(undefined4 *)(fr0_ - 0xdc)));
        }
        else {
          in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0xd8)),uVar3);
        }
        if (cVar9 != '\0' || SUB84(dVar6,0) <= F32HI(dVar6)) {
          (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x54,&(*(undefined8 *)(fr0_ - 0x24)),ar6_00,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x219c) = 1;
        }
      }
      fVar5 = F32LO(dVar6);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 224)) - 8); Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7); });
      ar5_00 = ((undefined1 *)(unsigned)0x8c13b298);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 224)) - 8); Vec3_scale(ar4 + 0x14,((undefined1 *)(unsigned)0x8c13b298),ar6_00,ar7); });
      uVar3 = (vsp = ((unsigned long)(fr0_ - 224)), Vec3_length(((undefined1 *)(fr0_ - 0x34)),ar5_00,ar6_00,ar7));
      (*(int *)(fr0_ - 0xc0)) = (vsp = ((unsigned long)(fr0_ - 224)), FUN_8c023cd4(uVar3,((undefined1 *)(fr0_ - 0x44)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
      if ((*(int *)(fr0_ - 0xc0)) != 0) {
        if (cVar10 == '\0') {
          fVar5 = *(float *)(unsigned)(ar4 + 0x54);
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x54);
        }
        if (cVar9 == '\0') {
          fVar5 = fVar5 + 1.0;
        }
        else {
          fVar5 = SUB84(CONCAT44D(0x3f800000,fVar5) + CONCAT44D(0x3f800000,fVar5),0);
        }
        if (cVar10 == '\0') {
          *(float *)(unsigned)(ar4 + 0x54) = fVar5;
          fVar5 = *(float *)(unsigned)(ar4 + 0x5c);
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x54) = in_xd0;
          in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x5c);
        }
        if (cVar9 == '\0') {
          fVar5 = fVar5 + 1.0;
        }
        else {
          fVar5 = SUB84(CONCAT44D(0x3f800000,fVar5) + CONCAT44D(0x3f800000,fVar5),0);
        }
        if (cVar10 == '\0') {
          *(float *)(unsigned)(ar4 + 0x5c) = fVar5;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x5c) = in_xd0;
        }
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x54)),ar5,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_ctor_copy(((ulonglong *)(fr0_ - 0x64)),ar4 + 0x54,ar6_00,ar7));
      ar6_00 = ((ulonglong *)(fr0_ - 0x64));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 224)), FUN_8c0a72b4(ar4,((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7));
      (*(uint *)(fr0_ - 0xc4)) = (uint)(iVar2 == 0);
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(((ulonglong *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
      if ((*(uint *)(fr0_ - 0xc4)) != 0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7));
      break;
    case 2:
      iVar2 = *(int *)(unsigned)(ar4 + 0x219c);
      if (iVar2 == 1) {
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x54) = *(undefined4 *)(unsigned)ar5;
          *(undefined4 *)(unsigned)(ar4 + 0x58) = 0x43480000;
          in_dr0 = CONCAT44((int)ar6[1],uVar3);
          *(int *)(unsigned)(ar4 + 0x5c) = (int)ar6[1];
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x54) = *ar5;
          *(undefined8 *)(unsigned)(ar4 + 0x58) = 0x9843480000;
          in_dr0 = ar6[1];
          *(ulonglong *)(unsigned)(ar4 + 0x5c) = in_dr0;
        }
      }
      else if (iVar2 == 2) {
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x54) = *(undefined4 *)(unsigned)ar5;
          in_dr0 = CONCAT44(0x43480000,uVar3);
          *(undefined4 *)(unsigned)(ar4 + 0x58) = 0x43480000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x54) = *ar5;
          in_dr0 = 0x705460e343480000;
          *(undefined8 *)(unsigned)(ar4 + 0x58) = 0x705460e343480000;
        }
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x5c) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x5c) = in_dr0;
        }
      }
      else if (iVar2 == 3) {
        if (cVar10 == '\0') {
          *(int *)(unsigned)(ar4 + 0x54) = (int)*ar6;
          *(undefined4 *)(unsigned)(ar4 + 0x58) = 0x43480000;
          in_dr0 = CONCAT44(*(undefined4 *)(unsigned)(ar5 + 1),uVar3);
          *(undefined4 *)(unsigned)(ar4 + 0x5c) = *(undefined4 *)(unsigned)(ar5 + 1);
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x54) = *ar6;
          *(undefined8 *)(unsigned)(ar4 + 0x58) = 0x705460e343480000;
          in_dr0 = ar5[1];
          *(ulonglong *)(unsigned)(ar4 + 0x5c) = in_dr0;
        }
      }
      else if (iVar2 == 4) {
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x54) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x58) = 0x43480000;
          in_dr0 = CONCAT44(*(undefined4 *)(unsigned)(ar5 + 1),uVar3);
          *(undefined4 *)(unsigned)(ar4 + 0x5c) = *(undefined4 *)(unsigned)(ar5 + 1);
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x54) = in_dr0 & 0xffffffff;
          *(undefined8 *)(unsigned)(ar4 + 0x58) = 0x705460e343480000;
          in_dr0 = ar5[1];
          *(ulonglong *)(unsigned)(ar4 + 0x5c) = in_dr0;
        }
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 224)) - 8); Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_length(ar4 + 0x14,uVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), FUN_8c022fc0(ar5,ar4 + 0x54,ar6_00,ar7));
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x40a00000,(int)(in_dr0 >> 0x20));
      }
      else {
        dVar6 = 2.72151140845083e-312;
        in_xd0 = in_dr0;
      }
      if (cVar9 == '\0') {
        fVar5 = F32LO(dVar6) / F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 / dVar6,0);
      }
      if (cVar10 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar5;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x2174,ar4 + 0x80,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 3:
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x2194));
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
        dVar6 = 0.007811875057814177;
      }
      if (cVar9 == '\0') {
        fVar5 = F32LO(dVar6) + F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar10 == '\0') {
        *(float *)(unsigned)(ar4 + 0x2194) = fVar5;
        fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2194) = in_xd0;
      }
      if (cVar9 != '\0' || 1.0 <= fVar5) {
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0x3f7fff58;
        }
        else {
          fVar5 = 0.99999;
          *(undefined8 *)(unsigned)(ar4 + 0x2194) = 0x883f7fff58;
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      if (cVar10 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
      }
      if (cVar9 == '\0') {
        dVar6 = CONCAT44D(1.0 - fVar5,fVar5);
      }
      else {
        dVar6 = CONCAT44D(0x3f800000,fVar5) - CONCAT44D(0x3f800000,fVar5);
      }
      uVar8 = (uint)(D2U(dVar6) >> 0x20);
      (*(uint *)(fr0_ - 0xc8)) = uVar8;
      if (cVar10 != '\0') {
        (*(uint *)(fr0_ - 0xc8)) = SUB84(dVar6,0);
        (*(uint *)(fr0_ - 0xc4)) = uVar8;
      }
      ar5_01 = &(*(uint *)(fr0_ - 0xc8));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 224)) - 8); Vec3_scale(ar4 + 0x2174,ar5_01,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x94)),ar5_01,ar6_00,ar7));
      if (cVar10 == '\0') {
        (*(undefined4 *)(fr0_ - 0xcc)) = *(undefined4 *)(unsigned)(ar4 + 0x2194);
      }
      else {
        uVar7 = *(undefined8 *)(unsigned)(ar4 + 0x2194);
        (*(undefined4 *)(fr0_ - 0xcc)) = (undefined4)uVar7;
        (*(uint *)(fr0_ - 0xc8)) = (uint)((ulonglong)uVar7 >> 0x20);
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 224)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x94)),&(*(undefined4 *)(fr0_ - 0xcc)),ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 224)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(fr0_ - 0xa4)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0xb4)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
      break;
    case 4:
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar10 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0;
      }
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6_00,ar7));
      uVar4 = 0;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      if (cVar10 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2194) = in_dr0 & 0xffffffff;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2198) = *(undefined4 *)(unsigned)(ar4 + 0x219c);
    }
  }
  (*(undefined4 *)(fr0_ - 0xbc)) = uVar4;
  (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(&(*(undefined8 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
  return (*(undefined4 *)(fr0_ - 0xbc));
}

__asm__(".globl _FUN_8c0a861c\n.set _FUN_8c0a861c, _FUN_8c0a861c_def\n");
//@unit 8c0a8c0c
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
undefined4 FUN_8c0a8c0c_def(int ar4,undefined4 ar5,undefined8 *ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c0a8c0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar6_00;
  undefined8 *puVar3;
  undefined1 *ar7_00;
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 in_dr0 = 0;
  double dVar7;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar5 = 1;
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar2 < 5) && (-1 < iVar2)) {
    puVar3 = ar6;
                    
    switch(iVar2) {
    case 0:
      *(undefined4 *)(unsigned)(ar4 + 0x230) = 0;
      (vsp = ((unsigned long)(fr0_ - 56)), Vec3_assign(ar4 + 0x54,ar5,ar6,ar7));
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(0x42480000,*(undefined4 *)(unsigned)((int)ar6 + 4));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)((int)ar6 + 4);
        dVar7 = 6.37148145623644e-312;
      }
      if (cVar8 == '\0') {
        fVar6 = F32LO(dVar7) - F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 0x58) = fVar6;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x58) = in_xd0;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x24)),ar6,puVar3,ar7));
      ar7_00 = ((undefined1 *)(fr0_ - 0x24));
      ar6_00 = ar4 + 0x54;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0a8f94(ar4,ar5,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 56)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7_00));
      if (iVar2 == 0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 2:
      iVar2 = *(int *)(unsigned)(ar4 + 0x2198);
      pfVar4 = ar7;
      if (iVar2 == 1) {
        (vsp = ((unsigned long)(fr0_ - 56)), Vec3_assign(ar4 + 0x54,ar5,ar6,ar7));
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(0x42480000,*(undefined4 *)(unsigned)(ar6 + 1));
        }
        else {
          in_xd0 = ar6[1];
          dVar7 = -7.956827045177258e-251;
        }
        if (cVar8 == '\0') {
          fVar6 = F32LO(dVar7) - F32HI(dVar7);
        }
        else {
          fVar6 = SUB84(dVar7 - dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(unsigned)(ar4 + 0x5c) = fVar6;
          in_dr0 = CONCAT44(*(undefined4 *)(unsigned)((int)ar6 + 4),fVar6);
          *(undefined4 *)(unsigned)(ar4 + 0x58) = *(undefined4 *)(unsigned)((int)ar6 + 4);
          ar6 = puVar3;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x5c) = in_xd0;
          in_dr0 = *(undefined8 *)(unsigned)((int)ar6 + 4);
          *(undefined8 *)(unsigned)(ar4 + 0x58) = in_dr0;
          ar6 = puVar3;
        }
      }
      else if (iVar2 == 2) {
        (vsp = ((unsigned long)(fr0_ - 56)), Vec3_assign(ar4 + 0x54,ar5,ar6,ar7));
        if (cVar9 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x5c) = 0x42480000;
          in_dr0 = CONCAT44(*(undefined4 *)(unsigned)((int)ar6 + 4),(int)in_dr0);
          *(undefined4 *)(unsigned)(ar4 + 0x58) = *(undefined4 *)(unsigned)((int)ar6 + 4);
          ar6 = puVar3;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x5c) = 0x64e365c342480000;
          in_dr0 = *(undefined8 *)(unsigned)((int)ar6 + 4);
          *(undefined8 *)(unsigned)(ar4 + 0x58) = in_dr0;
          ar6 = puVar3;
        }
      }
      else if (iVar2 == 3) {
        (vsp = ((unsigned long)(fr0_ - 56)), Vec3_assign(ar4 + 0x54,ar5,ar6,ar7));
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(0x42480000,*(undefined4 *)(unsigned)ar6);
        }
        else {
          in_xd0 = *ar6;
          dVar7 = 9.825472717289265e+177;
        }
        if (cVar8 == '\0') {
          fVar6 = F32LO(dVar7) - F32HI(dVar7);
        }
        else {
          fVar6 = SUB84(dVar7 - dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(unsigned)(ar4 + 0x54) = fVar6;
          in_dr0 = CONCAT44(*(undefined4 *)(unsigned)((int)ar6 + 4),fVar6);
          *(undefined4 *)(unsigned)(ar4 + 0x58) = *(undefined4 *)(unsigned)((int)ar6 + 4);
          ar6 = puVar3;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x54) = in_xd0;
          in_dr0 = *(undefined8 *)(unsigned)((int)ar6 + 4);
          *(undefined8 *)(unsigned)(ar4 + 0x58) = in_dr0;
          ar6 = puVar3;
        }
      }
      else if (iVar2 == 4) {
        (vsp = ((unsigned long)(fr0_ - 56)), Vec3_assign(ar4 + 0x54,ar5,ar6,ar7));
        if (cVar9 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x54) = 0x42480000;
          in_dr0 = CONCAT44(*(undefined4 *)(unsigned)((int)ar6 + 4),(int)in_dr0);
          *(undefined4 *)(unsigned)(ar4 + 0x58) = *(undefined4 *)(unsigned)((int)ar6 + 4);
          ar6 = puVar3;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x54) = 0x64e365c342480000;
          in_dr0 = *(undefined8 *)(unsigned)((int)ar6 + 4);
          *(undefined8 *)(unsigned)(ar4 + 0x58) = in_dr0;
          ar6 = puVar3;
        }
      }
      uVar1 = ar5;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 56)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 56)) - 8); Vec3_sub(ar4 + 0x54,ar5,ar6,pfVar4); });
      uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), Vec3_length(((undefined1 *)(fr0_ - 0x34)),uVar1,ar6,pfVar4));
      (vsp = ((unsigned long)(fr0_ - 56)), Vec3_assign(ar4 + 0x14,uVar1,ar6,pfVar4));
      (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,pfVar4));
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c022fc0(ar5,ar4 + 0x54,ar6,pfVar4));
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(0x40a00000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar7 = 6.3713441689111e-312;
        in_xd0 = in_dr0;
      }
      if (cVar8 == '\0') {
        fVar6 = F32LO(dVar7) / F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar6;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 3:
      iVar2 = *(int *)(unsigned)(ar4 + 0x2198);
      if (iVar2 == 1) {
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(0x41900000,*ar7);
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)ar7;
          dVar7 = 1.18886109352276e-311;
        }
        if (cVar8 == '\0') {
          fVar6 = F32LO(dVar7) - F32HI(dVar7);
        }
        else {
          fVar6 = SUB84(dVar7 - dVar7,0);
        }
        if (cVar9 == '\0') {
          *ar7 = fVar6;
        }
        else {
          *(undefined8 *)(unsigned)ar7 = in_xd0;
        }
      }
      else if (iVar2 == 2) {
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(0x41900000,*ar7);
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)ar7;
          dVar7 = 5.633371060283568e+86;
        }
        if (cVar8 == '\0') {
          fVar6 = F32LO(dVar7) - F32HI(dVar7);
        }
        else {
          fVar6 = SUB84(dVar7 - dVar7,0);
        }
        if (cVar9 == '\0') {
          *ar7 = fVar6;
        }
        else {
          *(undefined8 *)(unsigned)ar7 = in_xd0;
        }
      }
      else if (iVar2 == 3) {
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(0x41900000,ar7[2]);
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar7 + 2);
          dVar7 = 5.94420282588366e+86;
        }
        if (cVar8 == '\0') {
          fVar6 = F32LO(dVar7) + F32HI(dVar7);
        }
        else {
          fVar6 = SUB84(dVar7 + dVar7,0);
        }
        if (cVar9 == '\0') {
          ar7[2] = fVar6;
        }
        else {
          *(undefined8 *)(unsigned)(ar7 + 2) = in_xd0;
        }
      }
      else if (iVar2 == 4) {
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(0x41900000,ar7[2]);
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar7 + 2);
          dVar7 = 6.255034591483752e+86;
        }
        if (cVar8 == '\0') {
          fVar6 = F32LO(dVar7) - F32HI(dVar7);
        }
        else {
          fVar6 = SUB84(dVar7 - dVar7,0);
        }
        if (cVar9 == '\0') {
          ar7[2] = fVar6;
        }
        else {
          *(undefined8 *)(unsigned)(ar7 + 2) = in_xd0;
        }
      }
      *(int *)(unsigned)(ar4 + 0x230) = *(int *)(unsigned)(ar4 + 0x230) + 1;
      if (4 < *(int *)(unsigned)(ar4 + 0x230)) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 4:
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
      (vsp = ((unsigned long)(fr0_ - 56)), Vec3_length(ar4 + 0x14,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c023d7c(ar4 + 0x21a8,ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x230) = 0;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      uVar5 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2198) = 5;
      *(undefined4 *)(unsigned)(ar4 + 0x219c) = 0;
    }
  }
  return uVar5;
}

__asm__(".globl _FUN_8c0a8c0c\n.set _FUN_8c0a8c0c, _FUN_8c0a8c0c_def\n");
//@unit 8c0a8f94
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
uint FUN_8c0a8f94_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a8f94";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 352; for (int i_ = 0; i_ < 352; i_++) z_[i_] = 0; }
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *ar6_00;
  uint uVar5;
  float fVar6;
  double in_dr0 = 0;
  undefined4 uVar8;
  double dVar7;
  double in_dr14 = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar5 = 1;
  uVar4 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 352)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x21b8) == 0) {
    switch(*(undefined4 *)(unsigned)(ar4 + 0x2198)) {
    case 1:
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c023d7c((*(undefined4 *)(fr0_ + 0x00000000)),uVar4,ar6_00,ar7));
      break;
    case 2:
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c023d7c((*(undefined4 *)(fr0_ + 0x00000000)),uVar4,ar6_00,ar7));
      break;
    case 3:
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c023d7c((*(undefined4 *)(fr0_ + 0x00000000)),uVar4,ar6_00,ar7));
      break;
    case 4:
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c023d7c((*(undefined4 *)(fr0_ + 0x00000000)),uVar4,ar6_00,ar7));
    }
    *(int *)(unsigned)(ar4 + 0x21b8) = *(int *)(unsigned)(ar4 + 0x21b8) + 1;
  }
  else if (*(int *)(unsigned)(ar4 + 0x21b8) != 1) goto LAB_8c0a951a;
  (vsp = ((unsigned long)(fr0_ - 352)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),ar4 + 0x14,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 352)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x38)),ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 352)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x48)),ar6,ar6_00,ar7));
  ar6_00 = ((undefined1 *)(fr0_ - 0x48));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c0a72b4(ar4,((undefined1 *)(fr0_ - 0x38)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7));
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
  if (iVar3 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x21b8) = 0;
  }
  uVar5 = (uint)(iVar3 != 0);
  switch(*(undefined4 *)(unsigned)(ar4 + 0x2198)) {
  case 1:
  case 2:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023138(((undefined1 *)(fr0_ - 0x28)),uVar4,ar6_00,ar7); });
    uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc4))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023138(ar4 + 0x14,uVar4,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xb4)),((undefined1 *)(fr0_ - 0xc4)),ar6_00,ar7));
    if (cVar10 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),uVar8);
    }
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,ar6_00,ar7));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd4))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023138(ar4 + 0x14,uVar4,ar6_00,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe4))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023138(((undefined1 *)(fr0_ - 0x28)),uVar4,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xf0)),uVar4,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x100))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0xe4)),((undefined1 *)(fr0_ - 0xf0)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xd4)),((undefined1 *)(fr0_ - 0x100)),ar6_00,ar7));
    if (cVar10 == '\0') {
      in_dr0 = CONCAT44D(0x42b40000,uVar8);
    }
    else {
      in_dr0 = 3.65536181321395e-312;
    }
    bVar1 = cVar9 != '\0';
    fVar6 = F32LO(in_dr0);
    uVar2 = (ulonglong)in_dr0 >> 0x20;
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), object_dtor_delete(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd4)),0xffffffff,ar6_00,ar7));
    if (bVar1 || fVar6 <= (float)uVar2) {
      if (cVar10 == '\0') {
        in_dr0 = CONCAT44D(0xbf800000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = 1.0192512720885868e-72;
      }
      if (cVar9 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   F32LO(in_dr14) * F32HI(in_dr0));
      }
      else {
        in_dr14 = in_dr14 * in_dr0;
      }
    }
    break;
  case 3:
  case 4:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023180(((undefined1 *)(fr0_ - 0x28)),uVar4,ar6_00,ar7); });
    uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023180(ar4 + 0x14,uVar4,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x68)),ar6_00,ar7));
    if (cVar10 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),uVar8);
    }
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023180(ar4 + 0x14,uVar4,ar6_00,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023180(((undefined1 *)(fr0_ - 0x28)),uVar4,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x94)),uVar4,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x88)),((undefined1 *)(fr0_ - 0x94)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(fr0_ - 0xa4)),ar6_00,ar7));
    if (cVar10 == '\0') {
      in_dr0 = CONCAT44D(0x42b40000,uVar8);
    }
    else {
      in_dr0 = 5.607597940902e-312;
    }
    bVar1 = cVar9 != '\0';
    fVar6 = F32LO(in_dr0);
    uVar2 = (ulonglong)in_dr0 >> 0x20;
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), object_dtor_delete(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6_00,ar7));
    if (bVar1 || fVar6 <= (float)uVar2) {
      if (cVar10 == '\0') {
        in_dr0 = CONCAT44D(0xbf800000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = 1.0192410166384276e-72;
      }
      if (cVar9 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   F32LO(in_dr14) * F32HI(in_dr0));
      }
      else {
        in_dr14 = in_dr14 * in_dr0;
      }
    }
    break;
  case 5:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x110))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x28)),uVar4,ar6_00,ar7); });
    uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x120))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x110)),((undefined1 *)(fr0_ - 0x120)),ar6_00,ar7));
    if (cVar10 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),uVar8);
    }
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x120)),0xffffffff,ar6_00,ar7));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x110)),0xffffffff,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x130))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x140))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x28)),uVar4,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x14c)),uVar4,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x15c))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x140)),((undefined1 *)(fr0_ - 0x14c)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x130)),((undefined1 *)(fr0_ - 0x15c)),ar6_00,ar7));
    if (cVar10 == '\0') {
      in_dr0 = CONCAT44D(0x42b40000,uVar8);
    }
    else {
      in_dr0 = -7.961142730794258e-251;
    }
    bVar1 = cVar9 != '\0';
    fVar6 = F32LO(in_dr0);
    uVar2 = (ulonglong)in_dr0 >> 0x20;
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x15c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), object_dtor_delete(((undefined1 *)(fr0_ - 0x14c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x140)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x130)),0xffffffff,ar6_00,ar7));
    if (bVar1 || fVar6 <= (float)uVar2) {
      if (cVar10 == '\0') {
        in_dr0 = CONCAT44D(0xbf800000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = 1.82507511546215e-310;
      }
      if (cVar9 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   F32LO(in_dr14) * F32HI(in_dr0));
      }
      else {
        in_dr14 = in_dr14 * in_dr0;
      }
    }
  }
  if ((*(int *)(unsigned)(ar4 + 0x2198) == 4) || (*(int *)(unsigned)(ar4 + 0x2198) == 2)) {
    if (cVar10 == '\0') {
      in_dr0 = CONCAT44D(0xbf800000,SUB84(in_dr0,0));
    }
    else {
      in_dr0 = 1.82507511546215e-310;
    }
    if (cVar9 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 F32LO(in_dr14) * F32HI(in_dr0));
    }
    else {
      in_dr14 = in_dr14 * in_dr0;
    }
  }
  if (cVar10 == '\0') {
    dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x21ac),SUB84(in_dr0,0));
  }
  else {
    dVar7 = *(double *)(unsigned)(ar4 + 0x21ac);
  }
  if (cVar9 == '\0') {
    dVar7 = CONCAT44D(F32HI(dVar7) + F32LO(in_dr14),SUB84(dVar7,0));
  }
  else {
    dVar7 = dVar7 + in_dr14;
  }
  if (cVar10 == '\0') {
    *(int *)(unsigned)(ar4 + 0x21ac) = (int)(D2U(dVar7) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x21ac) = dVar7;
  }
LAB_8c0a951a:
  (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
  return uVar5;
}

__asm__(".globl _FUN_8c0a8f94\n.set _FUN_8c0a8f94, _FUN_8c0a8f94_def\n");
//@unit 8c0a9578
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
undefined4 FUN_8c0a9578_def(int ar4,undefined4 ar5,double *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a9578";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  undefined4 uVar2;
  double *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  ulonglong in_dr0 = 0;
  double dVar6;
  double dVar7;
  double in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar3 = 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  uVar4 = (uint)in_dr0;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(ar4 + 0x2174,ar4 + 0x80,ar6_00,ar7_00));
    dVar7 = (double)(ulonglong)uVar4;
    if (cVar9 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x2194) = dVar7;
    }
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(ar4 + 0x54,ar5,ar6_00,ar7_00));
    ar5_00 = ar4 + 0x14;
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(ar4 + 0x80,ar5_00,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023d7c(ar4 + 0x21a8,ar5_00,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023d7c(ar7,ar5_00,ar6_00,ar7_00));
    iVar1 = *(int *)(unsigned)(ar4 + 0x2198);
    if (iVar1 == 1) {
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(0x42c80000,*(undefined4 *)(unsigned)(ar6 + 1));
      }
      else {
        in_xd0 = ar6[1];
        dVar7 = 1.82072774393391e-310;
      }
      if (cVar8 == '\0') {
        fVar5 = F32HI(dVar7);
        dVar7 = CONCAT44D(fVar5,F32LO(dVar7) - fVar5);
      }
      else {
        dVar7 = dVar7 - dVar7;
      }
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x5c) = SUB84(dVar7,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x5c) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c022d04(ar4 + 0x2184,ar5_00,ar6_00,ar7_00));
    }
    else if (iVar1 == 2) {
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(0x42c80000,SUB84(dVar7,0));
        *(undefined4 *)(unsigned)(ar4 + 0x5c) = 0x42c80000;
      }
      else {
        dVar7 = 1.82072774393391e-310;
        *(undefined8 *)(unsigned)(ar4 + 0x5c) = 0x218442c80000;
      }
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c022d04(ar4 + 0x2184,ar5_00,ar6_00,ar7_00));
    }
    else if (iVar1 == 3) {
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(0x42c80000,*(undefined4 *)(unsigned)ar6);
      }
      else {
        in_xd0 = *ar6;
        dVar7 = 1.82072774393391e-310;
      }
      if (cVar8 == '\0') {
        fVar5 = F32HI(dVar7);
        dVar7 = CONCAT44D(fVar5,F32LO(dVar7) - fVar5);
      }
      else {
        dVar7 = dVar7 - dVar7;
      }
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x54) = SUB84(dVar7,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x54) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c022d04(ar4 + 0x2184,ar5_00,ar6_00,ar7_00));
    }
    else if (iVar1 == 4) {
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(0x42c80000,SUB84(dVar7,0));
        *(undefined4 *)(unsigned)(ar4 + 0x54) = 0x42c80000;
      }
      else {
        dVar7 = 1.82072774393391e-310;
        *(undefined8 *)(unsigned)(ar4 + 0x54) = 0x218442c80000;
      }
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c022d04(ar4 + 0x2184,ar5_00,ar6_00,ar7_00));
    }
    (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar4 + 0x54,ar6_00,ar7_00));
    uVar2 = (undefined4)(D2U(dVar7) >> 0x20);
    if (cVar9 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x58) = uVar2;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x58) = dVar7;
      (*(undefined4 *)(fr0_ - 0x70)) = uVar2;
    }
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c022fc0(ar5,ar4 + 0x54,ar6_00,ar7_00));
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D(0x40a00000,(int)(D2U(dVar7) >> 0x20));
    }
    else {
      dVar6 = -7.956827002088933e-251;
      in_xd0 = dVar7;
    }
    if (cVar8 == '\0') {
      fVar5 = F32LO(dVar6) / F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar5;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x38)),ar6_00,ar7_00));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length(ar4 + 0x14,uVar2,ar6_00,ar7_00));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (cVar9 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0 & 0xffffffff;
      }
      if (cVar9 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2194) = in_dr0 & 0xffffffff;
      }
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6_00,ar7_00));
      *(undefined4 *)(unsigned)(ar4 + 0x2198) = 0;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
    }
    goto LAB_8c0a984a;
  }
  if (cVar9 == '\0') {
    dVar7 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x2194));
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x2194);
    dVar7 = -7.957972460180408e-251;
  }
  if (cVar8 == '\0') {
    fVar5 = F32LO(dVar7) + F32HI(dVar7);
  }
  else {
    fVar5 = SUB84(dVar7 + dVar7,0);
  }
  if (cVar9 == '\0') {
    *(float *)(unsigned)(ar4 + 0x2194) = fVar5;
    fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x2194) = in_xd0;
  }
  if (cVar8 != '\0' || 1.0 <= fVar5) {
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    if (cVar9 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0x3f800000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x2194) = CONCAT44(0x3f800000,fVar5);
    }
  }
  if (cVar9 == '\0') {
    fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
  }
  if (cVar8 == '\0') {
    dVar7 = CONCAT44D(1.0 - fVar5,fVar5);
  }
  else {
    dVar7 = CONCAT44D(0x3f800000,fVar5) - CONCAT44D(0x3f800000,fVar5);
  }
  uVar2 = (undefined4)(D2U(dVar7) >> 0x20);
  (*(undefined4 *)(fr0_ - 0x70)) = uVar2;
  if (cVar9 != '\0') {
    (*(undefined4 *)(fr0_ - 0x70)) = SUB84(dVar7,0);
    (*(undefined4 *)(fr0_ - 0x6c)) = uVar2;
  }
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_scale(ar4 + 0x80,&(*(undefined4 *)(fr0_ - 0x70)),ar6_00,ar7_00); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_scale(ar4 + 0x2184,ar4 + 0x2194,ar6_00,ar7_00); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x68)),ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c031ab4(ar4,ar7,ar6_00,ar7_00));
LAB_8c0a984a:
  (*(undefined4 *)(fr0_ - 0x6c)) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7_00));
  return (*(undefined4 *)(fr0_ - 0x6c));
}

__asm__(".globl _FUN_8c0a9578\n.set _FUN_8c0a9578, _FUN_8c0a9578_def\n");
//@unit 8c0a98cc
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
undefined4
FUN_8c0a98cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a98cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);
  undefined4 s8 = *(undefined4 *)(vsp + 8);
  undefined4 s12 = *(undefined4 *)(vsp + 12);
  undefined4 s16 = *(undefined4 *)(vsp + 16);
  undefined4 s20 = *(undefined4 *)(vsp + 20);
  undefined4 s24 = *(undefined4 *)(vsp + 24);
  undefined4 s28 = *(undefined4 *)(vsp + 28);
  undefined4 s32 = *(undefined4 *)(vsp + 32);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8060; for (int i_ = 0; i_ < 8060; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar2 = 0x10;
  ({ unsigned long t0_ = (unsigned long)(500); *(unsigned *)((((unsigned long)(fr0_ - 8060)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 8060)) - 8); FUN_8c010120(((undefined1 *)(fr0_ - 0x1f4c)),((void *)0x8c022c4c),((void *)0x8c022cb0),0x10); });
  (*(undefined4 *)(fr0_ - 0x1f6c)) = 0xffffffff;
  (*(unsigned *)(fr0_ - 0x1f5c) = (unsigned)(unsigned long)(&(*(undefined8 *)(fr0_ - 0x1f68))));
  (*(unsigned *)(fr0_ - 0x1f58) = (unsigned)(unsigned long)(&(*(undefined4 *)(fr0_ - 0x1f6c))));
  (*(undefined4 *)(fr0_ - 0x1f54)) = 0;
  (*(undefined4 *)(fr0_ - 0x1f50)) = 1;
  for (iVar3 = 0; iVar3 < *(int *)(unsigned)(ar4 + 0x230) + -1; iVar3 = iVar3 + 1) {
    puVar1 = (undefined8 *)(unsigned)(ar4 + iVar3 * 0x10 + 0x234);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)(*(unsigned *)(fr0_ - 0x1f5c) = (unsigned)(unsigned long)(*(undefined4 *)(unsigned)puVar1));
    }
    else {
      *((undefined8 *)(unsigned long)*(unsigned *)(fr0_ - 0x1f5c)) = *puVar1;
    }
    puVar1 = (undefined8 *)(unsigned)(ar4 + iVar3 * 0x10 + 0x238);
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(0x41700000,*(undefined4 *)(unsigned)puVar1);
    }
    else {
      in_xd0 = *puVar1;
      dVar5 = 1.21432400688359e-311;
    }
    if (cVar6 == '\0') {
      fVar4 = F32LO(dVar5) + F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 == '\0') {
      *(float *)(unsigned)((int)((undefined8 *)(unsigned long)*(unsigned *)(fr0_ - 0x1f5c)) + 4) = fVar4;
    }
    else {
      *(undefined8 *)(unsigned)((int)((undefined8 *)(unsigned long)*(unsigned *)(fr0_ - 0x1f5c)) + 4) = in_xd0;
    }
    puVar1 = (undefined8 *)(unsigned)(ar4 + iVar3 * 0x10 + 0x23c);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)(((undefined8 *)(unsigned long)*(unsigned *)(fr0_ - 0x1f5c)) + 1) = *(undefined4 *)(unsigned)puVar1;
    }
    else {
      ((undefined8 *)(unsigned long)*(unsigned *)(fr0_ - 0x1f5c))[1] = *puVar1;
    }
    (*(int *)(fr0_ - 0x1f78)) = iVar3;
    (vsp = ((unsigned long)(fr0_ - 8060)), FUN_8c234fd0(((undefined8 * *)(fr0_ - 0x1f5c)),(*(undefined4 *)(fr0_ - 0x1f50)),0,uVar2));
  }
  uVar2 = ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1f78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 8060)); vec_delete_array(((undefined1 *)(fr0_ - 0x1f4c)),((void *)0x8c022cb0),0x10,500); });
  return uVar2;
}

__asm__(".globl _FUN_8c0a98cc\n.set _FUN_8c0a98cc, _FUN_8c0a98cc_def\n");
//@unit 8c0a99c4
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
undefined4 FUN_8c0a99c4_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a99c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 184; for (int i_ = 0; i_ < 184; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int ar6_00;
  undefined4 ar7_00;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  ulonglong in_dr0 = 0;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 in_xd0 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 184)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x20)),((void *)0x8c022c4c),ar6,ar7));
  (*(undefined4 *)(fr0_ - 0xa0)) = 1;
  if (*(int *)(unsigned)(ar4 + 0x2198) == 0) {
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c023d7c(ar7,0,ar6_00,ar7_00));
  }
  uVar3 = (uint)in_dr0;
  iVar1 = *(int *)(unsigned)(ar4 + 0x68);
  uVar2 = 5;
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      while( true ) {
        uVar3 = (uint)in_dr0;
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c03c314(ar4,((void *)0x8c03c314),ar6_00,ar7_00));
        in_dr0 = (ulonglong)uVar3;
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x21a0) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x21a0) = in_dr0;
        }
        (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x2174,ar4 + 0x14,ar6_00,ar7_00));
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2194) = in_dr0;
        }
        uVar2 = ar5;
        (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x54,ar5,ar6_00,ar7_00));
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x58) = in_dr0;
        }
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c023d7c(ar4 + 0x21a8,uVar2,ar6_00,ar7_00));
        uVar4 = (undefined4)in_dr0;
        if (ar6 != 0) {
          if (ar6 == 3) {
            ar7_00 = 0;
            ar6_00 = -1;
            uVar2 = 2;
            (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
            if (cVar11 == '\0') {
              in_dr0 = CONCAT44(0x3dcccccd,uVar4);
              *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0x3dcccccd;
            }
            else {
              in_dr0 = 0x8c0268583dcccccd;
              *(undefined8 *)(unsigned)(ar4 + 0xa0) = 0x8c0268583dcccccd;
            }
            in_dr0 = in_dr0 & 0xffffffff;
            if (cVar11 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0;
            }
            *(int *)(unsigned)(ar4 + 0x68) = *(int *)(unsigned)(ar4 + 0x68) + 1;
          }
          goto switchD_8c0a9a1a_caseD_1;
        }
        ar7_00 = 0;
        ar6_00 = -1;
        uVar2 = 7;
        (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        if (cVar11 == '\0') {
          in_dr0 = CONCAT44(0x3a83126f,uVar4);
          *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0x3a83126f;
        }
        else {
          in_dr0 = 0xc716e7003a83126f;
          *(undefined8 *)(unsigned)(ar4 + 0xa0) = 0xc716e7003a83126f;
        }
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x68) = 2;
switchD_8c0a9a1a_caseD_2:
        (vsp = ((unsigned long)(fr0_ - 184)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        uVar3 = (uint)in_dr0;
        if (ar6 != 3) break;
        *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x21a4) = 0;
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x18) = in_dr0 & 0xffffffff;
        }
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2194) = in_dr0;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x2c)),uVar2,ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x3c))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x2c)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x3c)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7_00));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 184)), object_dtor_delete(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7_00));
      if ((ar6 != 1) && (ar6 != 2)) {
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c03207c(ar4,uVar2,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c0324ac(ar4,uVar2,ar6_00,ar7_00));
        break;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x68) = 5;
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2194) = (ulonglong)uVar3;
      }
      iVar1 = ar4 + 0x14;
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x2174,iVar1,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031700(ar4,iVar1,ar6_00,ar7_00));
    case 5:
      *(undefined4 *)(unsigned)(ar4 + 0x21a4) = 2;
      break;
    case 1:
switchD_8c0a9a1a_caseD_1:
      uVar3 = (uint)in_dr0;
      (vsp = ((unsigned long)(fr0_ - 184)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
      if (ar6 == 0) {
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c073c9c(ar4,uVar2,ar6_00,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
        break;
      }
      if (ar6 != 1) {
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c0324ac(ar4,uVar2,ar6_00,ar7_00));
        break;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x68) = 3;
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2194) = (ulonglong)uVar3;
      }
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x94) = (ulonglong)uVar3;
      }
      uVar6 = (ulonglong)uVar3;
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xa0) = uVar6;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x21a4) = 1;
      if (*(char *)(unsigned)(ar4 + 0x210) == '\x01') {
        ar7_00 = 0xd;
        ar6_00 = 1;
        (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0xd0))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar5,1,0xd));
        uVar3 = (uint)uVar6;
        uVar2 = ar5;
      }
    case 3:
      uVar6 = (ulonglong)uVar3;
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xa0) = uVar6;
      }
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c073c9c(ar4,uVar2,ar6_00,ar7_00));
      uVar7 = uVar6 & 0xffffffff;
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar7;
      }
      if (ar6 == 1) {
        (vsp = ((unsigned long)(fr0_ - 184)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        uVar3 = (uint)uVar7;
        iVar1 = ar4 + 0x14;
        (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(((undefined1 *)(fr0_ - 0x20)),iVar1,ar6_00,ar7_00));
        uVar6 = (ulonglong)uVar3;
        if (cVar11 == '\0') {
          (*(undefined8 *)(fr0_ - 0x1c)) = (ulonglong)(*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1c))+4)) << 0x20;
          uVar6 = (*(undefined8 *)(fr0_ - 0x1c));
        }
        (*(undefined8 *)(fr0_ - 0x1c)) = uVar6;
        (vsp = ((unsigned long)(fr0_ - 184)), Vec3_length(((undefined1 *)(fr0_ - 0x20)),iVar1,ar6_00,ar7_00));
        if (cVar11 == '\0') {
          dVar8 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x2194));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2194);
          dVar8 = 1.81732883613961e-310;
        }
        if (cVar10 == '\0') {
          fVar5 = F32LO(dVar8) + F32HI(dVar8);
        }
        else {
          fVar5 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar11 == '\0') {
          *(float *)(unsigned)(ar4 + 0x2194) = fVar5;
          fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2194) = in_xd0;
        }
        if (cVar10 != '\0' || 1.0 <= fVar5) {
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0x3f800000;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x2194) = CONCAT44(0x3f800000,fVar5);
          }
        }
        if (cVar11 == '\0') {
          fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
        }
        if (cVar10 == '\0') {
          dVar8 = CONCAT44D(1.0 - fVar5,fVar5);
        }
        else {
          dVar8 = CONCAT44D(0x3f800000,fVar5) - CONCAT44D(0x3f800000,fVar5);
        }
        uVar2 = (undefined4)(D2U(dVar8) >> 0x20);
        (*(undefined4 *)(fr0_ - 0xa8)) = uVar2;
        if (cVar11 != '\0') {
          (*(undefined4 *)(fr0_ - 0xa8)) = SUB84(dVar8,0);
          (*(undefined4 *)(fr0_ - 0xa4)) = uVar2;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_scale(ar4 + 0x2174,&(*(undefined4 *)(fr0_ - 0xa8)),ar6_00,ar7_00); });
        if (cVar11 == '\0') {
          (*(undefined4 *)(fr0_ - 0xac)) = *(undefined4 *)(unsigned)(ar4 + 0x2194);
          uVar9 = CONCAT44((*(undefined4 *)(fr0_ - 0xac)),SUB84(dVar8,0));
        }
        else {
          uVar9 = *(undefined8 *)(unsigned)(ar4 + 0x2194);
          (*(undefined4 *)(fr0_ - 0xac)) = (undefined4)uVar9;
          (*(undefined4 *)(fr0_ - 0xa8)) = (undefined4)((ulonglong)uVar9 >> 0x20);
        }
        fVar5 = (float)uVar9;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x20)),&(*(undefined4 *)(fr0_ - 0xac)),ar6_00,ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0x5c)),ar6_00,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x6c)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6_00,ar7_00));
        if (cVar11 == '\0') {
          fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
        }
        if (fVar5 == 1.0) {
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2194) = (ulonglong)(uint)fVar5;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x21a4) = 2;
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x94) = (ulonglong)(uint)fVar5;
          }
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0xa0) = (ulonglong)(uint)fVar5;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
        }
        (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7_00));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x21a4) = 0;
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x18) = uVar6 & 0xffffffff;
        }
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2194) = uVar6 & 0xffffffff;
        }
      }
      break;
    case 2:
      goto switchD_8c0a9a1a_caseD_2;
    case 4:
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xa0) = in_dr0;
      }
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c073c9c(ar4,5,ar6_00,ar7_00));
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0;
      }
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c022d04(ar4 + 0x6c,uVar2,ar6_00,ar7_00));
      fVar5 = (float)in_dr0;
      if (ar6 == 1) {
        (vsp = ((unsigned long)(fr0_ - 184)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        if (cVar11 == '\0') {
          fVar5 = *(float *)(unsigned)(ar4 + 0x18);
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x18);
        }
        uVar6 = (ulonglong)(uint)fVar5;
        if (fVar5 != 0.0) {
          iVar1 = ar4 + 0x14;
          (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(((undefined1 *)(fr0_ - 0x20)),iVar1,ar6_00,ar7_00));
          uVar6 = uVar6 & 0xffffffff;
          if (cVar11 == '\0') {
            (*(undefined8 *)(fr0_ - 0x1c)) = (*(undefined8 *)(fr0_ - 0x1c)) & 0xffffffff00000000;
            uVar6 = (*(undefined8 *)(fr0_ - 0x1c));
          }
          (*(undefined8 *)(fr0_ - 0x1c)) = uVar6;
          (vsp = ((unsigned long)(fr0_ - 184)), Vec3_length(((undefined1 *)(fr0_ - 0x20)),iVar1,ar6_00,ar7_00));
          if (cVar11 == '\0') {
            dVar8 = CONCAT44D(0x3d4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x2194));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2194);
            dVar8 = 1.81732800723501e-310;
          }
          if (cVar10 == '\0') {
            fVar5 = F32LO(dVar8) + F32HI(dVar8);
          }
          else {
            fVar5 = SUB84(dVar8 + dVar8,0);
          }
          if (cVar11 == '\0') {
            *(float *)(unsigned)(ar4 + 0x2194) = fVar5;
            fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x2194) = in_xd0;
          }
          if (cVar10 != '\0' || 1.0 <= fVar5) {
            if (cVar11 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0x3f800000;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x2194) = CONCAT44(0x3f800000,fVar5);
            }
          }
          if (cVar11 == '\0') {
            fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
          }
          if (cVar10 == '\0') {
            dVar8 = CONCAT44D(1.0 - fVar5,fVar5);
          }
          else {
            dVar8 = CONCAT44D(0x3f800000,fVar5) - CONCAT44D(0x3f800000,fVar5);
          }
          uVar2 = (undefined4)(D2U(dVar8) >> 0x20);
          (*(undefined4 *)(fr0_ - 0xb0)) = uVar2;
          if (cVar11 != '\0') {
            (*(undefined4 *)(fr0_ - 0xb0)) = SUB84(dVar8,0);
            (*(undefined4 *)(fr0_ - 0xac)) = uVar2;
          }
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_scale(ar4 + 0x2174,&(*(undefined4 *)(fr0_ - 0xb0)),ar6_00,ar7_00); });
          if (cVar11 == '\0') {
            (*(undefined4 *)(fr0_ - 0xb4)) = *(undefined4 *)(unsigned)(ar4 + 0x2194);
            uVar9 = CONCAT44((*(undefined4 *)(fr0_ - 0xb4)),SUB84(dVar8,0));
          }
          else {
            uVar9 = *(undefined8 *)(unsigned)(ar4 + 0x2194);
            (*(undefined4 *)(fr0_ - 0xb4)) = (undefined4)uVar9;
            (*(undefined4 *)(fr0_ - 0xb0)) = (undefined4)((ulonglong)uVar9 >> 0x20);
          }
          fVar5 = (float)uVar9;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x20)),&(*(undefined4 *)(fr0_ - 0xb4)),ar6_00,ar7_00); });
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x7c)),((undefined1 *)(fr0_ - 0x8c)),ar6_00,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x9c)),ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6_00,ar7_00));
          if (cVar11 == '\0') {
            fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
          }
          if (fVar5 == 1.0) {
            if (cVar11 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x2194) = (ulonglong)(uint)fVar5;
            }
          }
        }
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x21a4) = 0;
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x18) = in_dr0 & 0xffffffff;
        }
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2194) = in_dr0 & 0xffffffff;
        }
      }
    }
  }
  (*(undefined4 *)(fr0_ - 0xa4)) = 0;
  (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7_00));
  return (*(undefined4 *)(fr0_ - 0xa4));
}

__asm__(".globl _FUN_8c0a99c4\n.set _FUN_8c0a99c4, _FUN_8c0a99c4_def\n");
//@unit 8c0aa11c
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
undefined4 FUN_8c0aa11c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0aa11c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 252; for (int i_ = 0; i_ < 252; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *ar5_00;
  undefined4 uVar4;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  undefined4 uVar5;
  float in_fr1 = 0;
  float fVar6;
  code *pcVar9;
  double dVar7;
  ulonglong uVar8;
  ulonglong in_xd0 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar5 = 1;
  uVar4 = ar5;
  uVar3 = ar6;
  (vsp = ((unsigned long)(fr0_ - 252)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 252)), get_field_6c_028cc4(ar6,uVar4,uVar3,ar7));
  ar7_00 = ((undefined1 *)(fr0_ - 0x24));
  ar6_00 = ((undefined1 *)(fr0_ - 0x28));
  ar5_00 = ((undefined1 *)(fr0_ - 0x2c));
  (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c0507a4(iVar2,ar5_00,ar6_00,ar7_00));
  if (iVar2 == 0) {
    (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7_00));
    uVar5 = 2;
  }
  else {
    iVar2 = *(int *)(unsigned)(ar4 + 300);
    if ((iVar2 < 6) && (-1 < iVar2)) {
                    
      switch(iVar2) {
      case 0:
        *(undefined4 *)(unsigned)(ar4 + 0x21bc) = 0;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c030f2c(ar4 + 0x1fc,ar5_00,ar6_00,ar7_00));
      case 1:
        ar6_00 = ((undefined1 *)(fr0_ - 0x2c));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c0ab0d8(ar4,ar5,ar6_00,ar7_00));
        if (iVar2 == 0) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2194) = (ulonglong)(uint)in_fr1;
          }
          (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c03f3e8(ar6,ar5,ar6_00,ar7_00));
        }
        break;
      case 2:
        if (cVar11 == '\0') {
          in_fr1 = *(float *)(unsigned)(ar4 + 0x2194);
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
        }
        if (cVar10 == '\0') {
          in_fr1 = in_fr1 + 1.0;
        }
        else {
          in_fr1 = SUB84(CONCAT44D(0x3f800000,in_fr1) + CONCAT44D(0x3f800000,in_fr1),0
                        );
        }
        (*(undefined8 *)(fr0_ - 0xf8)) = in_xd0;
        if (cVar11 == '\0') {
          (*(undefined8 *)(fr0_ - 0xf8)) = CONCAT44(ar4,in_fr1);
        }
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xf8))+4)) + 0x2194) = (undefined4)(*(undefined8 *)(fr0_ - 0xf8));
          uVar8 = CONCAT44(0x43160000,(undefined4)(*(undefined8 *)(fr0_ - 0xf8)));
        }
        else {
          *(ulonglong *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xf8))+4)) + 0x2194) = (*(undefined8 *)(fr0_ - 0xf8));
          uVar8 = 0x12c43160000;
        }
        if (cVar10 != '\0' || (float)(uVar8 >> 0x20) <= (float)uVar8) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2194) = uVar8 & 0xffffffff;
          }
        }
        break;
      case 3:
        (vsp = ((unsigned long)(fr0_ - 252)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x3c)),ar5_00,ar6_00,ar7_00));
        ar6_00 = ((undefined1 *)(fr0_ - 0x3c));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c0ab0d8(ar4,ar5,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7_00));
        if (iVar2 == 0) {
          ar7_00 = (undefined1 *)(unsigned)0x0;
          ar6_00 = (undefined1 *)(unsigned)0xffffffff;
          uVar4 = 0;
          (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7_00));
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          uVar8 = (ulonglong)(uint)in_fr1;
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x22c) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x22c) = uVar8;
          }
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x4c)),uVar4,ar6_00,ar7_00));
          uVar3 = (vsp = ((unsigned long)(fr0_ - 252)), Vec3_length(((undefined1 *)(fr0_ - 0x4c)),uVar4,ar6_00,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); FUN_8c023138(uVar3,uVar4,ar6_00,ar7_00); });
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); FUN_8c023138(ar4 + 0x14,uVar4,ar6_00,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x5c)),((undefined1 *)(fr0_ - 0x6c)),ar6_00,ar7_00));
          if (cVar11 == '\0') {
            *(int *)(unsigned)(ar4 + 0x2194) = (int)(uVar8 >> 0x20);
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2194) = uVar8;
          }
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6_00,ar7_00));
          uVar3 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6_00,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); FUN_8c023138(ar4 + 0x14,uVar3,ar6_00,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x8c)),uVar3,ar6_00,ar7_00));
          uVar4 = (vsp = ((unsigned long)(fr0_ - 252)), Vec3_length(((undefined1 *)(fr0_ - 0x8c)),uVar3,ar6_00,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); FUN_8c023138(uVar4,uVar3,ar6_00,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xa8)),uVar3,ar6_00,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb8))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x9c)),((undefined1 *)(fr0_ - 0xa8)),ar6_00,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x7c)),((undefined1 *)(fr0_ - 0xb8)),ar6_00,ar7_00));
          if (cVar11 == '\0') {
            fVar6 = (float)(uVar8 >> 0x20);
            pcVar9 = (code *)0x42b40000;
            uVar8 = in_xd0;
          }
          else {
            fVar6 = 90.0;
            pcVar9 = ((void *)0x8c023d68);
          }
          bVar1 = cVar10 != '\0';
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 252)), object_dtor_delete(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6_00,ar7_00));
          if (bVar1 || fVar6 <= (float)(uint)pcVar9) {
            if (cVar11 == '\0') {
              dVar7 = CONCAT44D(0xbf800000,*(undefined4 *)(unsigned)(ar4 + 0x2194));
            }
            else {
              uVar8 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
              dVar7 = 3.75058611530083e-312;
            }
            if (cVar10 == '\0') {
              fVar6 = F32LO(dVar7) * F32HI(dVar7);
            }
            else {
              fVar6 = SUB84(dVar7 * dVar7,0);
            }
            if (cVar11 == '\0') {
              *(float *)(unsigned)(ar4 + 0x2194) = fVar6;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x2194) = uVar8;
            }
          }
        }
        break;
      case 4:
        if (cVar11 == '\0') {
          in_fr1 = *(float *)(unsigned)(ar4 + 0x2194);
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
        }
        if (cVar10 != '\0' || in_fr1 <= 0.0) {
          if (cVar11 == '\0') {
            in_fr1 = *(float *)(unsigned)(ar4 + 0x22c);
          }
          else {
            in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x22c);
          }
          if (cVar10 == '\0') {
            in_fr1 = in_fr1 - 1.0;
          }
          else {
            in_fr1 = SUB84(CONCAT44D(0x3f800000,in_fr1) - CONCAT44D(0x3f800000,in_fr1)
                           ,0);
          }
          if (cVar11 == '\0') {
            *(float *)(unsigned)(ar4 + 0x22c) = in_fr1;
            uVar8 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x2194),*(undefined4 *)(unsigned)(ar4 + 0x22c));
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x22c) = in_xd0;
            in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x22c);
            uVar8 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
          }
          if (cVar10 == '\0' && (float)(uVar8 >> 0x20) < (float)uVar8) {
            if (cVar11 == '\0') {
              uVar8 = (ulonglong)*(uint *)(unsigned)(ar4 + 0x21ac);
            }
            else {
              in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x21ac);
            }
            dVar7 = CONCAT44D(0x3f800000,(float)uVar8);
            if (cVar10 == '\0') {
              fVar6 = (float)uVar8 - 1.0;
            }
            else {
              fVar6 = SUB84(dVar7 - dVar7,0);
            }
            if (cVar11 == '\0') {
              *(float *)(unsigned)(ar4 + 0x21ac) = fVar6;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x21ac) = in_xd0;
            }
          }
          else {
            if (cVar11 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x21ac) = 0;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x21ac) = uVar8 & 0xffffffff;
            }
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c022d04(ar4 + 0x14,ar5_00,ar6_00,ar7_00));
          }
        }
        else {
          if (cVar11 == '\0') {
            in_fr1 = *(float *)(unsigned)(ar4 + 0x22c);
          }
          else {
            in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x22c);
          }
          if (cVar10 == '\0') {
            in_fr1 = in_fr1 + 1.0;
          }
          else {
            in_fr1 = SUB84(CONCAT44D(0x3f800000,in_fr1) + CONCAT44D(0x3f800000,in_fr1)
                           ,0);
          }
          if (cVar11 == '\0') {
            *(float *)(unsigned)(ar4 + 0x22c) = in_fr1;
            uVar8 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x2194),*(undefined4 *)(unsigned)(ar4 + 0x22c));
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x22c) = in_xd0;
            in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x22c);
            uVar8 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
          }
          if (cVar10 == '\0' && (float)uVar8 < (float)(uVar8 >> 0x20)) {
            if (cVar11 == '\0') {
              uVar8 = (ulonglong)*(uint *)(unsigned)(ar4 + 0x21ac);
            }
            else {
              in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x21ac);
            }
            dVar7 = CONCAT44D(0x3f800000,(float)uVar8);
            if (cVar10 == '\0') {
              fVar6 = (float)uVar8 + 1.0;
            }
            else {
              fVar6 = SUB84(dVar7 + dVar7,0);
            }
            if (cVar11 == '\0') {
              *(float *)(unsigned)(ar4 + 0x21ac) = fVar6;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x21ac) = in_xd0;
            }
          }
          else {
            if (cVar11 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x21ac) = 0;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x21ac) = uVar8 & 0xffffffff;
            }
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c022d04(ar4 + 0x14,ar5_00,ar6_00,ar7_00));
          }
        }
        (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6_00,ar7_00));
        break;
      case 5:
        iVar2 = (vsp = ((unsigned long)(fr0_ - 252)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7_00));
        if (iVar2 == 1) {
          (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c030eb8(ar4 + 0x1fc,ar5_00,ar6_00,ar7_00));
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          uVar5 = 0;
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7_00));
  }
  return uVar5;
}

__asm__(".globl _FUN_8c0aa11c\n.set _FUN_8c0aa11c, _FUN_8c0aa11c_def\n");
//@unit 8c0aa70c
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
undefined4 FUN_8c0aa70c_def(int ar4,undefined4 ar5,int *ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c0aa70c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 236; for (int i_ = 0; i_ < 236; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  undefined4 *a5;
  int iVar2;
  undefined4 uVar3;
  float *a6;
  undefined8 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  double dVar8;
  float fVar11;
  ulonglong uVar9;
  double dVar10;
  undefined4 in_fr3 = 0;
  ulonglong in_xd0 = 0;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar5 = 1;
  (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c102748(&(*(undefined4 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  puVar4 = (undefined8 *)(unsigned)((undefined4 *)(fr0_ - 0x1c));
  a6 = &(*(float *)(fr0_ - 0x20));
  a5 = &(*(undefined4 *)(fr0_ - 0x24));
  (vsp = ((unsigned long)(fr0_ - 236)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x120))))(ar6,a5,a6,puVar4));
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),a5,a6,puVar4));
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_ctor_zero(((float *)(fr0_ - 0x44)),a5,a6,puVar4));
  iVar2 = ar4 + 0x14;
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),iVar2,a6,puVar4));
  if (cVar13 == '\0') {
    dVar8 = CONCAT44D(0x42c80000,(*(undefined4 *)(fr0_ - 0x24)));
  }
  else {
    in_xd0 = CONCAT44((*(float *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
    dVar8 = 4.92856576361035e-312;
  }
  if (cVar12 == '\0') {
    ((float *)(fr0_ - 0x44))[0] = F32LO(dVar8) - F32HI(dVar8);
  }
  else {
    ((float *)(fr0_ - 0x44))[0] = SUB84(dVar8 - dVar8,0);
  }
  fVar7 = ((float *)(fr0_ - 0x44))[0];
  if (cVar13 != '\0') {
    ((float *)(fr0_ - 0x44))[0] = (float)in_xd0;
    (*(undefined4 *)(fr0_ - 0x38)) = 0xe8;
    fVar7 = 100.0;
  }
  (*(undefined4 *)(fr0_ - 0x3c)) = 0x42c80000;
  iVar1 = *(int *)(unsigned)(ar4 + 0x21b4);
  if (iVar1 == 0) {
    if (*(int *)(unsigned)(ar4 + 0x2198) == 0) {
      (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03f460(((float *)(fr0_ - 0x50)),&(*(undefined4 *)(fr0_ - 0x24)),a6,puVar4));
      a6 = ((float *)(fr0_ - 0x50));
      (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c0a861c(ar4,ar5,a6,puVar4));
      (vsp = ((unsigned long)(fr0_ - 236)), free_if_nonnull_wrap_102790(((float *)(fr0_ - 0x50)),0xffffffff,a6,puVar4));
      goto LAB_8c0aacb4;
    }
    if (*(int *)(unsigned)(ar4 + 0x2198) != 5) {
      (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03f460(((float *)(fr0_ - 0x5c)),&(*(undefined4 *)(fr0_ - 0x24)),a6,puVar4));
      a6 = ((float *)(fr0_ - 0x5c));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c0a8c0c(ar4,ar5,a6,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 236)), free_if_nonnull_wrap_102790(((float *)(fr0_ - 0x5c)),0xffffffff,a6,ar7));
      puVar4 = ar7;
      if (iVar2 == 0) {
        *(int *)(unsigned)(ar4 + 0x21b4) = *(int *)(unsigned)(ar4 + 0x21b4) + 1;
        (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c022d04(ar4 + 0x54,uVar3,a6,ar7));
        puVar4 = ar7;
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x54) = (*(undefined4 *)(fr0_ - 0x24));
          *(float *)(unsigned)(ar4 + 0x58) = (*(float *)(fr0_ - 0x20));
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x54) = CONCAT44((*(float *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
          *(ulonglong *)(unsigned)(ar4 + 0x58) = CONCAT44(((undefined4 *)(fr0_ - 0x1c))[0],(*(float *)(fr0_ - 0x20)));
        }
      }
      goto LAB_8c0aacb4;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x21b4) = 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (cVar13 == '\0') {
        fVar7 = *(float *)(unsigned)(ar4 + 0x2194);
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
      }
      if (cVar12 == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0);
      }
      if (cVar13 == '\0') {
        *(float *)(unsigned)(ar4 + 0x2194) = fVar7;
        fVar7 = *(float *)(unsigned)(ar4 + 0x2194);
        fVar11 = 15.0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2194) = in_xd0;
        in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
        fVar7 = 15.0;
        fVar11 = 108.7;
      }
      if (cVar12 != '\0' || fVar7 <= fVar11) {
        if (cVar13 == '\0') {
          dVar8 = CONCAT44D(0xc0981b4f,*(undefined4 *)(unsigned)(ar4 + 0x21a8));
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x21a8);
          dVar8 = 1.8293200140039e-310;
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar8) + F32HI(dVar8);
        }
        else {
          fVar7 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(unsigned)(ar4 + 0x21a8) = fVar7;
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x21ac),in_fr3);
          dVar10 = CONCAT44D(0x41700000,*(undefined4 *)(unsigned)(ar4 + 0x22c));
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x21a8) = in_xd0;
          dVar8 = *(double *)(unsigned)(ar4 + 0x21ac);
          dVar10 = 1.82412182335889e-310;
        }
        if (cVar12 == '\0') {
          dVar8 = CONCAT44D(F32HI(dVar8) +
                                   F32LO(dVar10) / F32HI(dVar10),
                                   SUB84(dVar8,0));
        }
        else {
          dVar8 = dVar8 + dVar10 / dVar10;
        }
        if (cVar13 == '\0') {
          *(int *)(unsigned)(ar4 + 0x21ac) = (int)(D2U(dVar8) >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x21ac) = dVar8;
        }
      }
      else {
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)ar7 = 0x42d96666;
          uVar9 = CONCAT44(0xc1c9999a,fVar7);
          *(undefined4 *)(unsigned)((int)ar7 + 4) = 0xc1c9999a;
        }
        else {
          *ar7 = 0xc1c9999a42d96666;
          uVar9 = 0x21a8c1c9999a;
          *(undefined8 *)(unsigned)((int)ar7 + 4) = 0x21a8c1c9999a;
        }
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar7 + 1) = 0;
        }
        else {
          ar7[1] = uVar9 & 0xffffffff;
        }
        (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c023d7c(ar4 + 0x21a8,iVar2,a6,puVar4));
      }
      if (cVar13 == '\0') {
        uVar9 = CONCAT44(0x43480000,*(undefined4 *)(unsigned)(ar4 + 0x2194));
      }
      else {
        uVar9 = 0xbf80000043480000;
      }
      if (cVar12 != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar9 & 0xffffffff;
        }
        (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c022d04(ar4 + 0x14,iVar2,a6,puVar4));
        *(int *)(unsigned)(ar4 + 0x21b4) = *(int *)(unsigned)(ar4 + 0x21b4) + 1;
      }
      (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03f3ac(ar4 + 0xb0,iVar2,a6,puVar4));
    }
    else if ((iVar1 == 3) &&
            (iVar2 = (vsp = ((unsigned long)(fr0_ - 236)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar2,a6,puVar4)), iVar2 == 1)) {
      *(undefined4 *)(unsigned)(ar4 + 0x2198) = 8;
      uVar5 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x21b4) = 0;
    }
    goto LAB_8c0aacb4;
  }
  (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03f460(&(*(undefined8 *)(fr0_ - 0x68)),&(*(undefined4 *)(fr0_ - 0x24)),a6,puVar4));
  puVar4 = &(*(undefined8 *)(fr0_ - 0x68));
  a6 = ((float *)(fr0_ - 0x44));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c0a8f94(ar4,ar5,a6,puVar4));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 236)), free_if_nonnull_wrap_102790(&(*(undefined8 *)(fr0_ - 0x68)),0xffffffff,a6,puVar4));
  if (iVar2 == 0) {
    *(int *)(unsigned)(ar4 + 0x21b4) = *(int *)(unsigned)(ar4 + 0x21b4) + 1;
    uVar9 = (ulonglong)(uint)fVar7;
    if (cVar13 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar9;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar3,a6,puVar4); });
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x88)),uVar3,a6,puVar4));
    uVar3 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x98))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x88)),ar5,a6,puVar4); });
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 236)), Vec3_length(((undefined1 *)(fr0_ - 0x98)),uVar3,a6,puVar4));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa8))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c0230f0(ar4_00,uVar3,a6,puVar4); });
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(fr0_ - 0xa8)),a6,puVar4));
    if (cVar13 == '\0') {
      *(int *)(unsigned)(ar4 + 0x22c) = (int)(uVar9 >> 0x20);
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x22c) = uVar9;
    }
    uVar6 = (uint)uVar9;
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,a6,puVar4));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,a6,puVar4));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,a6,puVar4));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,a6,puVar4));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xb8)),uVar3,a6,puVar4));
    uVar3 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0xb8)),ar5,a6,puVar4); });
    uVar3 = (vsp = ((unsigned long)(fr0_ - 236)), Vec3_length(((undefined1 *)(fr0_ - 0xc8)),uVar3,a6,puVar4));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x14,uVar3,a6,puVar4));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,a6,puVar4));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,a6,puVar4));
    uVar9 = (ulonglong)uVar6;
    if (cVar13 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x21a8) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x21a8) = uVar9;
    }
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x54,ar5,a6,puVar4));
    uVar9 = uVar9 & 0xffffffff;
    if (cVar13 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x2194) = uVar9;
    }
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xd8)),ar5,a6,puVar4));
    iVar2 = ar4 + 0x54;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe8))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0xd8)),iVar2,a6,puVar4); });
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_length_sq(((undefined1 *)(fr0_ - 0xe8)),iVar2,a6,puVar4));
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(0x43480000,(int)(uVar9 >> 0x20));
      uVar9 = in_xd0;
    }
    else {
      dVar8 = -0.007812501958142093;
    }
    if (cVar12 == '\0') {
      fVar7 = F32LO(dVar8) / F32HI(dVar8);
    }
    else {
      fVar7 = SUB84(dVar8 / dVar8,0);
    }
    if (cVar13 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar7;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar9;
    }
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,a6,puVar4));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,a6,puVar4));
    puVar4 = (undefined8 *)(unsigned)0x0;
    a6 = (float *)(unsigned)0xffffffff;
    uVar3 = 0;
    (vsp = ((unsigned long)(fr0_ - 236)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 236)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,a6,puVar4));
  }
LAB_8c0aacb4:
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((float *)(fr0_ - 0x44)),0xffffffff,a6,puVar4));
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,a6,puVar4));
  (vsp = ((unsigned long)(fr0_ - 236)), free_if_nonnull_wrap_102790(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,a6,puVar4));
  return uVar5;
}

__asm__(".globl _FUN_8c0aa70c\n.set _FUN_8c0aa70c, _FUN_8c0aa70c_def\n");
//@unit 8c0aad1c
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
undefined4 FUN_8c0aad1c_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0aad1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 224; for (int i_ = 0; i_ < 224; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *puVar2;
  int ar6_00;
  undefined4 unaff_r12 = 0;
  undefined4 unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  undefined8 *puVar3;
  float fVar4;
  double in_dr0 = 0;
  undefined4 uVar7;
  ulonglong uVar5;
  double dVar6;
  double in_dr14 = 0;
  double dVar8;
  undefined8 in_xd0 = 0;
  undefined8 in_xd14 = 0;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar3 = (undefined8 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x8)) + 4);
    (*(undefined8 *)(fr0_ - 0x8)) = CONCAT44(SUB84(in_dr14,0),(undefined4)(*(undefined8 *)(fr0_ - 0x8)));
  }
  else {
    puVar3 = &(*(undefined8 *)(fr0_ - 0x8));
    (*(undefined8 *)(fr0_ - 0x8)) = in_xd14;
  }
  *(undefined4 *)(unsigned)((int)puVar3 + -4) = unaff_r14;
  *(undefined4 *)(unsigned)((int)puVar3 + -8) = unaff_r13;
  *(undefined4 *)(unsigned)((int)puVar3 + -0xc) = unaff_r12;
  *(undefined4 *)(unsigned)((int)puVar3 + -0x10) = in_PR;
  puVar2 = ar5;
  ar6_00 = ar6;
  (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), FUN_8c022d04(ar4 + 0x200,ar5,ar6,ar7));
  (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c4c))))
            ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),puVar2,ar6_00,ar7));
  (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c4c))))
            ((undefined1 *)(unsigned)((int)puVar3 + 0xa0 + -0xd0),puVar2,ar6_00,ar7));
  (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c4c))))
            ((undefined1 *)(unsigned)((int)puVar3 + 0x90 + -0xd0),puVar2,ar6_00,ar7));
  if ((*(int *)(unsigned)(ar6 + 0x68) != 0) && ((int)((uint)*(byte *)(unsigned)(0x1fc + ar4) << 0x1e) < 0)) {
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xa0 + -0xd0),ar5,ar6_00,ar7));
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0x90 + -0xd0),*(int *)(unsigned)(ar6 + 0x68) + 4,ar6_00,
               ar7));
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x68) + 0x158));
    }
    *(unsigned *)(unsigned)((int)puVar3 + -0xd4) = (undefined1 *)(unsigned)((int)puVar3 + 0x80 + -0xd0);
    ({ unsigned long t0_ = (unsigned long)(
               *(undefined4 *)(unsigned)((int)puVar3 + -0xd4)); *(unsigned *)(((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023ae0))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xa4 + -0xd4),
               (undefined1 *)(unsigned)((int)puVar3 + 0x94 + -0xd4),ar6_00,ar7); });
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),
               (undefined1 *)(unsigned)((int)puVar3 + 0x80 + -0xd0),ar6_00,ar7));
    uVar1 = 0xffffffff;
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0x80 + -0xd0),0xffffffff,ar6_00,ar7));
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022e78))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),uVar1,ar6_00,ar7));
    uVar7 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)puVar3 + -0xb8) = uVar7;
      in_dr0 = CONCAT44D(uVar7,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      *(double *)(unsigned)((int)puVar3 + -0xb8) = in_dr0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = F32LO(in_dr0) + F32LO(in_dr14);
    }
    else {
      fVar4 = SUB84(in_dr0 + in_dr14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar3 + -0xb8),fVar4);
    }
    else {
      dVar6 = *(double *)(unsigned)((int)puVar3 + -0xb8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = F32LO(dVar6) - F32HI(dVar6);
    }
    else {
      fVar4 = SUB84(dVar6 - dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar3 + -0xb4) = fVar4;
      fVar4 = *(float *)(unsigned)((int)puVar3 + -0xb4);
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar3 + -0xb4) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)((int)puVar3 + -0xb4);
    }
    uVar5 = (ulonglong)(uint)fVar4;
    if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44((*(undefined1 *)(unsigned)0x8c0ab0a4),fVar4);
        *(undefined4 *)(unsigned)((int)puVar3 + -0xb4) = (*(undefined1 *)(unsigned)0x8c0ab0a4);
      }
      else {
        uVar5 = CONCAT44(((void *)(unsigned)0x8c022f54),(*(undefined1 *)(unsigned)0x8c0ab0a4));
        *(ulonglong *)(unsigned)((int)puVar3 + -0xb4) = uVar5;
      }
    }
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022f54))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),uVar1,ar6_00,ar7));
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), Vec3_length_sq(ar4 + 4,uVar1,ar6_00,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar3 + -0xbc) = (int)(uVar5 >> 0x20);
      uVar5 = (ulonglong)*(uint *)(unsigned)((int)puVar3 + -0xbc);
    }
    else {
      *(ulonglong *)(unsigned)((int)puVar3 + -0xbc) = uVar5;
      in_xd0 = *(undefined8 *)(unsigned)((int)puVar3 + -0xbc);
    }
    fVar4 = (float)uVar5;
    if (in_FPSCR_PR == '\0' && 0.0 < fVar4) {
      *(unsigned *)(unsigned)((int)puVar3 + -0xd4) = (undefined1 *)(unsigned)((int)puVar3 + -0x60);
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar3 + -0xd4)); *(unsigned *)(((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023b8c))))
                (ar4 + 0x14,(&(*(undefined1 *)(unsigned)0x8c13b29c)),ar6_00,ar7); });
      *(unsigned *)(unsigned)((int)puVar3 + -0xd4) = (undefined1 *)(unsigned)((int)puVar3 + -0x70);
      puVar2 = (undefined1 *)(unsigned)((int)puVar3 + -0x60);
      ({ unsigned long t0_ = (unsigned long)(
                 *(undefined4 *)(unsigned)((int)puVar3 + -0xd4)); *(unsigned *)(((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a34))))
                ((undefined1 *)(unsigned)((int)puVar3 + 0xb4 + -0xd4),puVar2,ar6_00,ar7); });
      uVar1 = (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022f54))))
                        ((undefined1 *)(unsigned)((int)puVar3 + -0x70),puVar2,ar6_00,ar7));
      *(undefined4 *)(unsigned)((int)puVar3 + -0xc0) = uVar1;
      (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
                ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),
                 *(undefined4 *)(unsigned)((int)puVar3 + -0xc0),ar6_00,ar7));
      (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar3 + -0x70),0xffffffff,ar6_00,ar7));
      (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar3 + -0x60),0xffffffff,ar6_00,ar7));
    }
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023bf4))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),
               (undefined1 *)(unsigned)((int)puVar3 + -0xb4),ar6_00,ar7));
    in_dr0 = (double)(ulonglong)(uint)fVar4;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)puVar3 + 0xb4 + -0xd0) = 0;
    }
    else {
      *(double *)(unsigned)((int)puVar3 + 0xb4 + -0xd0) = in_dr0;
    }
    puVar2 = (undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0);
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x200,puVar2,ar6_00,ar7));
  }
  if ((*(int *)(unsigned)(ar6 + 100) != 0) && ((int)((uint)*(byte *)(unsigned)(0x1fc + ar4) << 0x1d) < 0)) {
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x170 + *(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8)))))
              (*(int *)(unsigned)(ar6 + 0x50),puVar2,ar6_00,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar3 + -0xc4) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(unsigned)((int)puVar3 + -0xc4));
      dVar6 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0ab0c4),SUB84(in_dr0,0));
    }
    else {
      *(double *)(unsigned)((int)puVar3 + -0xc4) = in_dr0;
      dVar6 = CONCAT44D(((void *)(unsigned)0x8c02f670),(*(undefined1 *)(unsigned)0x8c0ab0c4));
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                               F32LO(in_dr14) + F32HI(dVar6));
    }
    else {
      dVar8 = in_dr14 + dVar6;
    }
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xa0 + -0xd0),ar5,ar6_00,ar7));
    *(unsigned *)(unsigned)((int)puVar3 + -0xd4) = (undefined1 *)(unsigned)((int)puVar3 + -0x80);
    ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar3 + -0xd4)); *(unsigned *)(((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02f670))))
              (*(undefined4 *)(unsigned)(ar6 + 0x50),ar5,ar6_00,ar7); });
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0x90 + -0xd0),
               (undefined1 *)(unsigned)((int)puVar3 + -0x80),ar6_00,ar7));
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar3 + -0x80),0xffffffff,ar6_00,ar7));
    *(unsigned *)(unsigned)((int)puVar3 + -0xd4) = (undefined1 *)(unsigned)((int)puVar3 + -0x90);
    ({ unsigned long t0_ = (unsigned long)(
               *(undefined4 *)(unsigned)((int)puVar3 + -0xd4)); *(unsigned *)(((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023ae0))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xa4 + -0xd4),
               (undefined1 *)(unsigned)((int)puVar3 + 0x94 + -0xd4),ar6_00,ar7); });
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),
               (undefined1 *)(unsigned)((int)puVar3 + -0x90),ar6_00,ar7));
    uVar1 = 0xffffffff;
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar3 + -0x90),0xffffffff,ar6_00,ar7));
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022e78))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),uVar1,ar6_00,ar7));
    uVar7 = (undefined4)(D2U(dVar6) >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)puVar3 + -200) = uVar7;
      dVar6 = CONCAT44D(uVar7,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      *(double *)(unsigned)((int)puVar3 + -200) = dVar6;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = F32LO(dVar6) + F32LO(dVar8);
    }
    else {
      fVar4 = SUB84(dVar6 + dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar3 + -200),fVar4);
    }
    else {
      dVar6 = *(double *)(unsigned)((int)puVar3 + -200);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = F32LO(dVar6) - F32HI(dVar6);
    }
    else {
      fVar4 = SUB84(dVar6 - dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0ab0cc),fVar4);
    }
    else {
      dVar6 = CONCAT44D((&(*(undefined1 *)(unsigned)0x8c13b2a0)),(*(undefined1 *)(unsigned)0x8c0ab0cc));
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = F32LO(dVar6) * F32HI(dVar6);
    }
    else {
      fVar4 = SUB84(dVar6 * dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar3 + -0xb4) = fVar4;
      fVar4 = *(float *)(unsigned)((int)puVar3 + -0xb4);
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar3 + -0xb4) = in_xd0;
    }
    uVar5 = (ulonglong)(uint)fVar4;
    if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44((*(undefined1 *)(unsigned)0x8c0ab0a4),fVar4);
        *(undefined4 *)(unsigned)((int)puVar3 + -0xb4) = (*(undefined1 *)(unsigned)0x8c0ab0a4);
      }
      else {
        uVar5 = CONCAT44(((void *)(unsigned)0x8c022f54),(*(undefined1 *)(unsigned)0x8c0ab0a4));
        *(ulonglong *)(unsigned)((int)puVar3 + -0xb4) = uVar5;
      }
    }
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022f54))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),uVar1,ar6_00,ar7));
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), Vec3_length_sq(ar4 + 4,uVar1,ar6_00,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar3 + -0xcc) = (int)(uVar5 >> 0x20);
      uVar5 = (ulonglong)*(uint *)(unsigned)((int)puVar3 + -0xcc);
    }
    else {
      *(ulonglong *)(unsigned)((int)puVar3 + -0xcc) = uVar5;
    }
    if (in_FPSCR_PR == '\0' && 0.0 < (float)uVar5) {
      *(unsigned *)(unsigned)((int)puVar3 + -0xd4) = (undefined1 *)(unsigned)((int)puVar3 + -0xa0);
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar3 + -0xd4)); *(unsigned *)(((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023b8c))))
                (ar4 + 0x14,(&(*(undefined1 *)(unsigned)0x8c13b2a0)),ar6_00,ar7); });
      *(unsigned *)(unsigned)((int)puVar3 + -0xd4) = (undefined1 *)(unsigned)((int)puVar3 + -0xb0);
      puVar2 = (undefined1 *)(unsigned)((int)puVar3 + -0xa0);
      ({ unsigned long t0_ = (unsigned long)(
                 *(undefined4 *)(unsigned)((int)puVar3 + -0xd4)); *(unsigned *)(((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a34))))
                ((undefined1 *)(unsigned)((int)puVar3 + 0xb4 + -0xd4),puVar2,ar6_00,ar7); });
      uVar1 = (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022f54))))
                        ((undefined1 *)(unsigned)((int)puVar3 + -0xb0),puVar2,ar6_00,ar7));
      *(undefined4 *)(unsigned)((int)puVar3 + -0xd0) = uVar1;
      (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
                ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),
                 *(undefined4 *)(unsigned)((int)puVar3 + -0xd0),ar6_00,ar7));
      (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar3 + -0xb0),0xffffffff,ar6_00,ar7));
      (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar3 + -0xa0),0xffffffff,ar6_00,ar7));
    }
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023bf4))))
              ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),
               (undefined1 *)(unsigned)((int)puVar3 + -0xb4),ar6_00,ar7));
    (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023aa0))))
              (ar4 + 0x200,(undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),ar6_00,ar7));
  }
  (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
            ((undefined1 *)(unsigned)((int)puVar3 + 0x90 + -0xd0),0xffffffff,ar6_00,ar7));
  (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
            ((undefined1 *)(unsigned)((int)puVar3 + 0xa0 + -0xd0),0xffffffff,ar6_00,ar7));
  uVar1 = (vsp = (puVar3 ? (unsigned long)puVar3 - 212 : (unsigned long)(fr0_ - 224)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
                    ((undefined1 *)(unsigned)((int)puVar3 + 0xb0 + -0xd0),0xffffffff,ar6_00,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0aad1c\n.set _FUN_8c0aad1c, _FUN_8c0aad1c_def\n");
//@unit 8c0ab0d8
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
undefined4 FUN_8c0ab0d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ab0d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 184; for (int i_ = 0; i_ < 184; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  double in_dr0 = 0;
  undefined8 uVar8;
  ulonglong uVar9;
  double dVar10;
  undefined8 in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  iVar2 = *(int *)(unsigned)(ar4 + 0x21bc);
  if (iVar2 == 0) {
    ar7 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0;
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
    uVar6 = SUB84(in_dr0,0);
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar5,ar7));
    if (cVar12 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x22c) = 0;
      uVar8 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x21ac),uVar6);
      *(undefined4 *)(unsigned)(ar4 + 0x21a0) = *(undefined4 *)(unsigned)(ar4 + 0x21ac);
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x22c) = (ulonglong)uVar6;
      uVar8 = *(undefined8 *)(unsigned)(ar4 + 0x21ac);
      *(undefined8 *)(unsigned)(ar4 + 0x21a0) = uVar8;
    }
    uVar4 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_sub(ar6,ar5,uVar5,ar7); });
    uVar3 = (vsp = ((unsigned long)(fr0_ - 184)), Vec3_length(((undefined1 *)(fr0_ - 0x28)),uVar4,uVar5,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); FUN_8c023138(uVar3,uVar4,uVar5,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); FUN_8c023138(ar4 + 0x14,uVar4,uVar5,ar7); });
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x48)),uVar5,ar7));
    if (cVar12 == '\0') {
      *(int *)(unsigned)(ar4 + 0x2194) = (int)((ulonglong)uVar8 >> 0x20);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x2194) = uVar8;
    }
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,uVar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,uVar5,ar7));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,uVar5,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); FUN_8c023138(ar4 + 0x14,uVar4,uVar5,ar7); });
    uVar4 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_sub(ar6,ar5,uVar5,ar7); });
    uVar3 = (vsp = ((unsigned long)(fr0_ - 184)), Vec3_length(((undefined1 *)(fr0_ - 0x68)),uVar4,uVar5,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); FUN_8c023138(uVar3,uVar4,uVar5,ar7); });
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x84)),uVar4,uVar5,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(fr0_ - 0x84)),uVar5,ar7); });
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x94)),uVar5,ar7));
    if (cVar12 == '\0') {
      in_dr0 = CONCAT44D(0x42b40000,(int)((ulonglong)uVar8 >> 0x20));
    }
    else {
      in_dr0 = -7.961142730794258e-251;
      in_xd0 = uVar8;
    }
    bVar1 = cVar11 != '\0';
    fVar7 = F32LO(in_dr0);
    uVar9 = (ulonglong)in_dr0 >> 0x20;
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,uVar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), object_dtor_delete(((undefined1 *)(fr0_ - 0x84)),0xffffffff,uVar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,uVar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,uVar5,ar7));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,uVar5,ar7));
    if (bVar1 || fVar7 <= (float)uVar9) {
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D(0xbf800000,*(undefined4 *)(unsigned)(ar4 + 0x2194));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2194);
        dVar10 = 3.75058611530083e-312;
      }
      if (cVar11 == '\0') {
        in_dr0 = (double)(ulonglong)(uint)(F32LO(dVar10) * F32HI(dVar10));
      }
      else {
        in_dr0 = dVar10 * dVar10;
      }
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2194) = SUB84(in_dr0,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2194) = in_xd0;
      }
    }
    *(int *)(unsigned)(ar4 + 0x21bc) = *(int *)(unsigned)(ar4 + 0x21bc) + 1;
  }
  else {
    uVar4 = ar5;
    uVar5 = ar6;
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c022fc0(ar5,ar6,ar6,ar7));
        if (cVar12 == '\0') {
          in_dr0 = (double)((ulonglong)in_dr0 >> 0x20);
        }
        if (cVar11 != '\0' || SUB84(in_dr0,0) <= 1.0) {
          if (cVar12 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
          }
          *(int *)(unsigned)(ar4 + 0x21bc) = *(int *)(unsigned)(ar4 + 0x21bc) + 1;
        }
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c03f3ac(ar4 + 0xb0,ar6,uVar5,ar7));
        return 1;
      }
      if (iVar2 != 3) {
        return 1;
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      if (iVar2 != 1) {
        return 1;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x21bc) = 0;
      return 0;
    }
  }
  fVar7 = F32LO(in_dr0);
  if (cVar12 == '\0') {
    fVar7 = *(float *)(unsigned)(ar4 + 0x2194);
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2194);
  }
  if (cVar11 == '\0' && 0.0 < fVar7) {
    if (cVar12 == '\0') {
      fVar7 = *(float *)(unsigned)(ar4 + 0x22c);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x22c);
    }
    if (cVar11 == '\0') {
      fVar7 = fVar7 + 1.0;
    }
    else {
      fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0);
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)(ar4 + 0x22c) = fVar7;
      uVar9 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x2194),*(undefined4 *)(unsigned)(ar4 + 0x22c));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x22c) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x22c);
      uVar9 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
    }
    if (cVar11 == '\0' && (float)uVar9 < (float)(uVar9 >> 0x20)) {
      if (cVar12 == '\0') {
        uVar9 = (ulonglong)*(uint *)(unsigned)(ar4 + 0x21ac);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x21ac);
      }
      dVar10 = CONCAT44D(0x3f800000,(float)uVar9);
      if (cVar11 == '\0') {
        fVar7 = (float)uVar9 + 1.0;
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x21ac) = in_xd0;
      }
    }
    else {
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2194),*(undefined4 *)(unsigned)(ar4 + 0x21a0));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x21a0);
        dVar10 = *(double *)(unsigned)(ar4 + 0x2194);
      }
      if (cVar11 == '\0') {
        fVar7 = F32LO(dVar10) + F32HI(dVar10);
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x21ac) = in_xd0;
      }
      *(int *)(unsigned)(ar4 + 0x21bc) = *(int *)(unsigned)(ar4 + 0x21bc) + 1;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_sub(ar6,ar5,uVar5,ar7); });
      uVar4 = (vsp = ((unsigned long)(fr0_ - 184)), Vec3_length(((undefined1 *)(fr0_ - 0xa4)),ar5,uVar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x14,uVar4,uVar5,ar7));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,uVar5,ar7));
      if (cVar12 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3f333333;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x53f41fe43f333333;
      }
    }
  }
  else {
    if (cVar12 == '\0') {
      fVar7 = *(float *)(unsigned)(ar4 + 0x22c);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x22c);
    }
    if (cVar11 == '\0') {
      fVar7 = fVar7 - 1.0;
    }
    else {
      fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7),0);
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)(ar4 + 0x22c) = fVar7;
      uVar9 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x2194),*(undefined4 *)(unsigned)(ar4 + 0x22c));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x22c) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x22c);
      uVar9 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
    }
    if (cVar11 == '\0' && (float)(uVar9 >> 0x20) < (float)uVar9) {
      if (cVar12 == '\0') {
        uVar9 = (ulonglong)*(uint *)(unsigned)(ar4 + 0x21ac);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x21ac);
      }
      dVar10 = CONCAT44D(0x3f800000,(float)uVar9);
      if (cVar11 == '\0') {
        fVar7 = (float)uVar9 - 1.0;
      }
      else {
        fVar7 = SUB84(dVar10 - dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x21ac) = in_xd0;
      }
    }
    else {
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2194),*(undefined4 *)(unsigned)(ar4 + 0x21a0));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x21a0);
        dVar10 = *(double *)(unsigned)(ar4 + 0x2194);
      }
      if (cVar11 == '\0') {
        fVar7 = F32LO(dVar10) + F32HI(dVar10);
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x21ac) = in_xd0;
      }
      *(int *)(unsigned)(ar4 + 0x21bc) = *(int *)(unsigned)(ar4 + 0x21bc) + 1;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_sub(ar6,ar5,uVar5,ar7); });
      uVar4 = (vsp = ((unsigned long)(fr0_ - 184)), Vec3_length(((undefined1 *)(fr0_ - 0xb4)),ar5,uVar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x14,uVar4,uVar5,ar7));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,uVar5,ar7));
      if (cVar12 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3f333333;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x53f11fe13f333333;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c03f3ac(ar4 + 0xb0,uVar4,uVar5,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0ab0d8\n.set _FUN_8c0ab0d8, _FUN_8c0ab0d8_def\n");
//@unit 8c0ab5c0
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
undefined4 FUN_8c0ab5c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ab5c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 ar7_00;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126238)),ar5,ar6,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c285840;
  (vsp = ((unsigned long)(fr0_ - 28)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c285840,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126248)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c28584c;
  (vsp = ((unsigned long)(fr0_ - 28)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c28584c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126258)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c285858;
  (vsp = ((unsigned long)(fr0_ - 28)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c285858,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126268)),puVar3,uVar2,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), global_list_push(uVar2,((void *)(unsigned)0x8c022cb0),0x8c285864,ar7));
  uVar2 = 4;
  ({ unsigned long t0_ = (unsigned long)(9); *(unsigned *)((((unsigned long)(fr0_ - 28)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 28)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c010120))))
            (0x8c28587c,((void *)(unsigned)0x8c015b94),((void *)(unsigned)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 28)), global_list_push(0,((void *)(unsigned)0x8c0ab73c),0x8c285870,uVar2));
  ar7_00 = 4;
  ({ unsigned long t0_ = (unsigned long)(9); *(unsigned *)((((unsigned long)(fr0_ - 28)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 28)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c010120))))
            (0x8c2858ac,((void *)(unsigned)0x8c015bc8),((void *)(unsigned)0x8c03a3dc),4); });
  puVar3 = ((void *)(unsigned)0x8c0ab718);
  uVar2 = 0x8c2858a0;
  (vsp = ((unsigned long)(fr0_ - 28)), global_list_push(0,((void *)(unsigned)0x8c0ab718),0x8c2858a0,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x1c)),puVar3,uVar2,ar7_00));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c05d608(0x8c2858d0,uVar1,uVar2,ar7_00));
  return uVar2;
}

__asm__(".globl _FUN_8c0ab5c0\n.set _FUN_8c0ab5c0, _FUN_8c0ab5c0_def\n");
//@unit 8c0ab718
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
undefined4 FUN_8c0ab718_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ab718";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c2858ac,((void *)0x8c03a3dc),4,9); });
  return uVar1;
}

__asm__(".globl _FUN_8c0ab718\n.set _FUN_8c0ab718, _FUN_8c0ab718_def\n");
//@unit 8c0ab73c
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
undefined4 FUN_8c0ab73c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ab73c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c28587c,((void *)0x8c0247b0),4,9); });
  return uVar1;
}

__asm__(".globl _FUN_8c0ab73c\n.set _FUN_8c0ab73c, _FUN_8c0ab73c_def\n");
//@unit 8c0ab760
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
undefined4 * FUN_8c0ab760_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ab760";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f064(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12b0c4));
  *(undefined4 *)(unsigned)(0x9c + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0xa0 + (int)ar4) = 6;
  *(undefined4 *)(unsigned)(0xa4 + (int)ar4) = 6;
  *(undefined4 *)(unsigned)(0xa8 + (int)ar4) = 6;
  return ar4;
}

__asm__(".globl _FUN_8c0ab760\n.set _FUN_8c0ab760, _FUN_8c0ab760_def\n");
//@unit 8c0ab7ac
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
undefined4 * Class_12b0c4_m0_0ab7ac_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b0c4_m0_0ab7ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12b0c4);
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 12)), Class_129c70_m0_02f1b8(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12b0c4_m0_0ab7ac\n.set _Class_12b0c4_m0_0ab7ac, _Class_12b0c4_m0_0ab7ac_def\n");
//@unit 8c0ab7f4
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
undefined4 Class_12b0c4_m1_0ab7f4_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b0c4_m1_0ab7f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *ar6_00;
  
  (vsp = ((unsigned long)(fr0_ - 84)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  puVar4 = ((undefined1 *)(fr0_ - 0x50));
  puVar2 = ((undefined1 *)(unsigned)0x8c13b394);
  iVar5 = 0x10;
  do {
    puVar3 = puVar2 + 1;
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 2;
    puVar4[1] = *puVar3;
    puVar4 = puVar4 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  (*(undefined1 *)(unsigned)0x8c13b388) = *(undefined4 *)(unsigned)(ar4 + 0xa0);
  (*(undefined1 *)(unsigned)0x8c13b38c) = *(undefined4 *)(unsigned)(ar4 + 0xa4);
  (*(undefined1 *)(unsigned)0x8c13b390) = *(undefined4 *)(unsigned)(ar4 + 0xa8);
  piVar7 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0abfb0(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0abc30(ar6[3],piVar7,ar6_00,ar7));
  if (((char)uVar1 == '\x01') && (iVar5 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_24_026024(ar5,piVar7,ar6_00,ar7)), iVar5 == 1)) {
    iVar6 = ar6[3];
    iVar5 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_48_0abc28(iVar6,piVar7,ar6_00,ar7));
    if (iVar5 != 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), rand(iVar6,piVar7,ar6_00,ar7));
      piVar7 = (int *)(unsigned)0x12c;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 84)), libgcc_divide_helper_01031c(uVar1,300,ar6_00,ar7));
      if (iVar5 < 1) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_48_0abc28(ar6[3],piVar7,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x6c) = uVar1;
        if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
          *(undefined4 *)(unsigned)(ar4 + 4) = 6;
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
          *(undefined4 *)(unsigned)(ar4 + 8) = 0x55;
          *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
          uVar1 = 699;
          (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f298(ar4,699,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x74))))
                    (*(int *)(unsigned)(ar4 + 0x6c),uVar1,ar6_00,ar7));
          piVar7 = (int *)(unsigned)0x0;
          (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0996e4(ar6[3],0,ar6_00,ar7));
        }
      }
    }
  }
  iVar5 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_24_026024(ar5,piVar7,ar6_00,ar7));
  if (iVar5 == 0) {
    iVar5 = ar6[6];
    uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_a0_035724(iVar5,piVar7,ar6_00,ar7));
    if ((byte)uVar1 < 2) {
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 1;
    }
    else {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), rand(iVar5,piVar7,ar6_00,ar7));
      piVar7 = (int *)(unsigned)0x3e8;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 84)), libgcc_divide_helper_01031c(uVar1,1000,ar6_00,ar7));
      if ((iVar5 < 1) && (*(int *)(unsigned)(ar4 + 4) != 0xb)) {
        *(undefined4 *)(unsigned)(ar4 + 4) = 0xb;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0x5a;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0ac1f0(ar4,ar5,ar6_00,ar7));
        piVar7 = (int *)(unsigned)0x4a6;
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f298(ar4,0x4a6,ar6_00,ar7));
      }
    }
  }
  iVar5 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar6 + 8) + 0xb8))))(*ar6,piVar7,ar6_00,ar7));
  if (iVar5 == 1) {
    if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
      (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                (*(int *)(unsigned)(ar4 + 0x6c),piVar7,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
    }
    iVar5 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_6c_02f46c(*ar6,piVar7,ar6_00,ar7));
    if ((iVar5 == 0) && (iVar5 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_70_05f490(*ar6,piVar7,ar6_00,ar7)), iVar5 == 0)) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x148))))(ar5,piVar7,ar6_00,ar7));
      piVar7 = (int *)(unsigned)0x0;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0abc1c(uVar1,0,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0f4d84(*ar6,piVar7,ar6_00,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 84)), get_field_124_027930(ar6[2],piVar7,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), get_field_40_05eea0(ar4,piVar7,ar6_00,ar7));
  piVar7 = ar6;
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f20c(ar4,ar6,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), get_field_124_027930(ar6[2],piVar7,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), get_field_40_05eea0(ar4,piVar7,ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_4_05eed8(ar4,piVar7,ar6_00,ar7));
  piVar7 = ar6;
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0abe84(ar4,ar5,ar6,uVar1));
  (vsp = ((unsigned long)(fr0_ - 84)), get_field_124_027930(ar6[2],ar5,piVar7,uVar1));
  (vsp = ((unsigned long)(fr0_ - 84)), get_field_40_05eea0(ar4,ar5,piVar7,uVar1));
  if ((*(char *)(unsigned)(ar4 + 0x98) == '\x01') && ((*(int *)(unsigned)(ar4 + 0x40) != 4 || (*(int *)(unsigned)(ar4 + 4) != 1)))
     ) {
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 4) = 1;
    *(undefined4 *)(unsigned)(ar4 + 8) = 99;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
    if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
      (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                (*(int *)(unsigned)(ar4 + 0x6c),ar5,piVar7,uVar1));
      *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0ac19c(ar4,ar5,piVar7,uVar1));
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c05ee90(ar6[2],ar5,piVar7,uVar1));
  iVar5 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_124_027930(ar6[2],ar5,piVar7,uVar1));
  iVar6 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_40_05eea0(ar4,ar5,piVar7,uVar1));
  if (iVar5 != iVar6) {
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_40_05eea0(ar4,ar5,piVar7,uVar1));
    piVar7 = (int *)(unsigned)0x1;
    (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c031b08(ar6[2],ar5_00,1,uVar1));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,piVar7,uVar1));
  return uVar1;
}

__asm__(".globl _Class_12b0c4_m1_0ab7f4\n.set _Class_12b0c4_m1_0ab7f4, _Class_12b0c4_m1_0ab7f4_def\n");
//@unit 8c0abc1c
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
undefined1 * FUN_8c0abc1c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0abc1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  
  puVar1 = 0x8c438470;
  *(undefined4 *)(unsigned)0x8c438470 = (undefined1)ar5;
  return puVar1;
}

__asm__(".globl _FUN_8c0abc1c\n.set _FUN_8c0abc1c, _FUN_8c0abc1c_def\n");
//@unit 8c0abc28
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
undefined4 get_field_48_0abc28_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_48_0abc28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x48);
}

__asm__(".globl _get_field_48_0abc28\n.set _get_field_48_0abc28, _get_field_48_0abc28_def\n");
//@unit 8c0abc30
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
int FUN_8c0abc30_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0abc30";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x45);
}

__asm__(".globl _FUN_8c0abc30\n.set _FUN_8c0abc30, _FUN_8c0abc30_def\n");
//@unit 8c0abc38
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
undefined4 Class_12b0c4_m2_0abc38_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b0c4_m2_0abc38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  
  piVar8 = ar5;
  piVar7 = ar6;
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  puVar6 = ((undefined1 *)(fr0_ - 0x4c));
  iVar3 = 0x10;
  puVar5 = (&(*(undefined1 *)(unsigned)0x8c13b3b4));
  do {
    puVar4 = puVar5 + 1;
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar6[1] = *puVar4;
    puVar6 = puVar6 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13b2ec)) + 0x9c) = *(undefined4 *)(unsigned)(0xa0 + ar4);
  *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13b2ec)) + 0xa0) = *(undefined4 *)(unsigned)(0xa4 + ar4);
  *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13b2ec)) + 0xa4) = *(undefined4 *)(unsigned)(0xa8 + ar4);
  (vsp = ((unsigned long)(fr0_ - 80)), get_field_18_02d1a0(ar6[1] + 0xa8,piVar8,piVar7,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), get_field_24_026024(ar5,piVar8,piVar7,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x1a8 + *ar5))))(ar5,piVar8,piVar7,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_18_02d1a0(ar6[1] + 0xa8,piVar8,piVar7,ar7));
  if (((0 < iVar3) &&
      (iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_24_026024(ar5,piVar8,piVar7,ar7)), iVar3 == 1)) &&
     (iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x1a8 + *ar5))))(ar5,piVar8,piVar7,ar7)), iVar3 == 0)) {
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xbc + *ar5))))(ar5,piVar8,piVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), get_field_18_02d1a0(ar6[1] + 0xa8,piVar8,piVar7,ar7));
  }
  piVar8 = ar5;
  piVar7 = ar6;
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0abfb0(ar4,ar5,ar6,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb8 + *(int *)(unsigned)(*ar6 + 8)))))(*ar6,piVar8,piVar7,ar7));
  if (iVar3 == 1) {
    if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
      (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                (*(int *)(unsigned)(ar4 + 0x6c),piVar8,piVar7,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_6c_02f46c(*ar6,piVar8,piVar7,ar7));
    if ((iVar3 == 0) &&
       (iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_70_05f490(*ar6,piVar8,piVar7,ar7)), iVar3 == 0)) {
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0f4d84(*ar6,piVar8,piVar7,ar7));
    }
  }
  piVar8 = ar6;
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c02f20c(ar4,ar6,piVar7,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_4_05eed8(ar4,piVar8,piVar7,ar7));
  piVar8 = ar6;
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0abe84(ar4,ar5,ar6,uVar1));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0ac19c(ar4,ar5,piVar8,uVar1));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c05ee90(ar6[2],ar5,piVar8,uVar1));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_124_027930(ar6[2],ar5,piVar8,uVar1));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_40_05eea0(ar4,ar5,piVar8,uVar1));
  if (iVar3 != iVar2) {
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_40_05eea0(ar4,ar5,piVar8,uVar1));
    piVar8 = (int *)(unsigned)0x1;
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c031b08(ar6[2],ar5_00,1,uVar1));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,piVar8,uVar1));
  return uVar1;
}

__asm__(".globl _Class_12b0c4_m2_0abc38\n.set _Class_12b0c4_m2_0abc38, _Class_12b0c4_m2_0abc38_def\n");
//@unit 8c0abe7c
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
undefined4 ret_const_0_0abe7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0abe7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0abe7c\n.set _ret_const_0_0abe7c, _ret_const_0_0abe7c_def\n");
//@unit 8c0abe84
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
undefined4 FUN_8c0abe84_def(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c0abe84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 ar5_00;
  int *ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar2 = ar7;
  if (*(int *)(unsigned)(ar4 + 0x38) == 2) {
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) =
         *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13b2ec) + *(int *)(unsigned)(ar4 + 0xc) * 4 + ar7 * 0xc);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ac068(ar4,ar5,ar6,ar7));
    ar5_00 = 1;
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,1,ar6_00,ar7); });
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ac1f0(ar4,ar5,ar6_00,ar7));
  }
  else if (iVar1 == 1) {
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,3,ar6_00,ar7); });
  }
  else if (iVar1 == 3) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f414(ar4,ar5_00,ar6_00,ar7));
    if ((iVar2 == 1) && (*(int *)(unsigned)(ar4 + 0x88) == 1)) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_6c_02f46c(*(undefined4 *)(unsigned)(ar4 + 0x6c),ar5_00,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c05feec(*(undefined4 *)(unsigned)(ar4 + 0x6c),iVar2 + -1,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x88) = 0;
    }
  }
  else if ((iVar1 == 4) &&
          (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar6 + 8) + 0xb4))))(*ar6,ar5_00,ar6_00,ar7)), iVar2 == 1)) {
    iVar2 = *ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027954(iVar2,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(iVar2,ar5_00,ar6_00,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c0abe84\n.set _FUN_8c0abe84, _FUN_8c0abe84_def\n");
//@unit 8c0abfb0
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
int FUN_8c0abfb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0abfb0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar6_00;
  
  if (*(int *)(unsigned)(ar4 + 0x3c) == 0) {
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0ac124(ar4,ar5,ar6,ar7));
    *(int *)(unsigned)(ar4 + 0xc) = *(int *)(unsigned)(ar4 + 0xc) + 1;
    (*(int *)(fr0_ - 0x1c)) = *(int *)(unsigned)(ar4 + 0xc);
    *(undefined4 *)(unsigned)(ar4 + 0x40) =
         *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13b2ec) + (*(int *)(fr0_ - 0x1c)) * 4 + *(int *)(unsigned)(ar4 + 4) * 0xc);
    if ((*(int *)(unsigned)(ar4 + 0x40) == 6) || (*(int *)(unsigned)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,0,ar6_00,ar7); });
      ar6 = ar6_00;
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,3,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0ac068(ar4,ar5,ar6,ar7));
    }
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x3c);
  if (iVar1 == 2) {
    iVar1 = ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,2,ar6,ar7); });
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0abfb0\n.set _FUN_8c0abfb0, _FUN_8c0abfb0_def\n");
//@unit 8c0ac068
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
int FUN_8c0ac068_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ac068";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  int *a5;
  undefined4 ar5_00;
  
  a5 = ar5;
  if ((*(int *)(unsigned)(ar4 + 0x38) == 2) && (*(int *)(unsigned)(ar4 + 0x6c) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(int *)(unsigned)(ar4 + 0x6c),ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ac1f0(ar4,ar5,ar6,ar7));
  }
  else if (iVar1 == 4) {
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x148 + *ar5))))(ar5,a5,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0abc1c(ar4_00,0,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f414(ar4,ar5_00,ar6,ar7));
    if ((iVar1 == 1) && (iVar1 = 0, *(int *)(unsigned)(ar4 + 0x6c) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(int *)(unsigned)(ar4 + 0x6c),ar5_00,ar6,ar7));
      iVar1 = 0x6c;
      *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0ac068\n.set _FUN_8c0ac068, _FUN_8c0ac068_def\n");
//@unit 8c0ac124
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
int FUN_8c0ac124_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ac124";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 3) {
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c099850(*(undefined4 *)(unsigned)(ar6 + 0xc),0,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f414(ar4,ar5_00,ar6,ar7));
    if (iVar1 == 1) {
      if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                  (*(int *)(unsigned)(ar4 + 0x6c),ar5_00,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
      }
      iVar1 = 0x88;
      *(undefined4 *)(unsigned)(0x88 + ar4) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0ac124\n.set _FUN_8c0ac124, _FUN_8c0ac124_def\n");
//@unit 8c0ac19c
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
undefined4 * FUN_8c0ac19c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ac19c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  
  if (*(int *)(unsigned)(ar4 + 4) == 2) {
    (vsp = ((unsigned long)(fr0_ - 0)), get_field_8_066620(ar4,ar5,ar6,ar7));
    puVar1 = ((undefined4 *)(unsigned)0x8c0ac1e8);
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), get_field_8_066620(ar4,ar5,ar6,ar7));
    puVar1 = ((undefined4 *)(unsigned)0x8c0ac1ec);
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0ac19c\n.set _FUN_8c0ac19c, _FUN_8c0ac19c_def\n");
//@unit 8c0ac1f0
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
undefined4 FUN_8c0ac1f0_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ac1f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 228; for (int i_ = 0; i_ < 228; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *ar5_00;
  undefined1 *ar5_01;
  undefined4 uVar4;
  undefined4 *a6;
  undefined1 *ar6_00;
  undefined4 *a7;
  undefined4 *puVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  undefined4 in_fr3 = 0;
  undefined4 uVar9;
  double dVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 228)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 228)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x30)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 228)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x40)),ar5_00,ar6,ar7));
  a7 = &(*(undefined4 *)(fr0_ - 0xa4));
  a6 = &(*(undefined4 *)(fr0_ - 0xa0));
  puVar5 = &(*(undefined4 *)(fr0_ - 0x9c));
  (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x120))))(ar5,puVar5,a6,a7));
  iVar2 = ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 228)), get_field_4_05eed8(ar4,puVar5,a6,a7));
  if (iVar1 != 1) {
    if (iVar1 == 8) {
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0x9c)),in_fr3);
        dVar7 = CONCAT44D(0x3dcccccd,(*(undefined4 *)(fr0_ - 0x9c)));
      }
      else {
        dVar10 = CONCAT44D(((undefined4 *)(fr0_ - 0x98))[0],(*(undefined4 *)(fr0_ - 0x9c)));
        dVar7 = 1.3411048210842936e-08;
      }
      if (cVar11 == '\0') {
        dVar10 = CONCAT44D(F32HI(dVar10) -
                                  F32LO(dVar7) * F32HI(dVar7),SUB84(dVar10,0)
                                 );
      }
      else {
        dVar10 = dVar10 - dVar7 * dVar7;
      }
      (*(undefined4 *)(fr0_ - 0x9c)) = SUB84(dVar10,0);
      uVar3 = (undefined4)(D2U(dVar10) >> 0x20);
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0xa0)),(*(undefined4 *)(fr0_ - 0x9c)));
        dVar7 = CONCAT44D(0x3e4ccccd,(*(undefined4 *)(fr0_ - 0xa0)));
        (*(undefined4 *)(fr0_ - 0x9c)) = uVar3;
      }
      else {
        dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0x9c)),(*(undefined4 *)(fr0_ - 0xa0)));
        dVar7 = -7.532505548438758e-251;
        ((undefined4 *)(fr0_ - 0x98))[0] = uVar3;
      }
      if (cVar11 == '\0') {
        dVar10 = CONCAT44D(F32HI(dVar10) -
                                  F32LO(dVar7) * F32HI(dVar7),SUB84(dVar10,0)
                                 );
      }
      else {
        dVar10 = dVar10 - dVar7 * dVar7;
      }
      (*(undefined4 *)(fr0_ - 0xa0)) = SUB84(dVar10,0);
      uVar3 = (undefined4)(D2U(dVar10) >> 0x20);
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0xa4)),(*(undefined4 *)(fr0_ - 0xa0)));
        dVar7 = CONCAT44D(0x3dcccccd,(*(undefined4 *)(fr0_ - 0xa4)));
        (*(undefined4 *)(fr0_ - 0xa0)) = uVar3;
      }
      else {
        dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0xa0)),(*(undefined4 *)(fr0_ - 0xa4)));
        dVar7 = 1.3411048210842936e-08;
        (*(undefined4 *)(fr0_ - 0x9c)) = uVar3;
      }
      if (cVar11 == '\0') {
        fVar8 = F32HI(dVar7);
        fVar6 = F32LO(dVar7) * fVar8;
        dVar7 = CONCAT44D(fVar8,fVar6);
        dVar10 = CONCAT44D(F32HI(dVar10) - fVar6,SUB84(dVar10,0));
      }
      else {
        dVar7 = dVar7 * dVar7;
        dVar10 = dVar10 - dVar7;
      }
      uVar3 = SUB84(dVar7,0);
      uVar4 = (undefined4)(D2U(dVar10) >> 0x20);
      (*(undefined4 *)(fr0_ - 0xa4)) = uVar4;
      if (cVar12 != '\0') {
        (*(undefined4 *)(fr0_ - 0xa4)) = SUB84(dVar10,0);
        (*(undefined4 *)(fr0_ - 0xa0)) = uVar4;
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 228)), rand(iVar2,puVar5,a6,a7));
      uVar9 = SUB84(dVar10,0);
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0x9c)),uVar3);
      }
      else {
        dVar10 = CONCAT44D(((undefined4 *)(fr0_ - 0x98))[0],(*(undefined4 *)(fr0_ - 0x9c)));
      }
      if (cVar11 == '\0') {
        iVar2 = (int)F32HI(dVar10);
      }
      else {
        iVar2 = (int)dVar10;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 228)), libgcc_divide_helper_01031c(uVar4,iVar2,a6,a7));
      if (cVar11 == '\0') {
        dVar10 = CONCAT44D((float)iVar1,SUB84(dVar10,0));
      }
      else {
        dVar10 = (double)iVar1;
      }
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x28) = (int)(D2U(dVar10) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = dVar10;
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 228)), rand(uVar4,iVar2,a6,a7));
      (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x180))))(ar5,iVar2,a6,a7));
      if (cVar12 == '\0') {
        (*(undefined8 *)(fr0_ - 0xc0)) = CONCAT44D(uVar3,(int)(D2U(dVar10) >> 0x20));
        dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0xa0)),SUB84(dVar10,0));
      }
      else {
        dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x9c)),(*(undefined4 *)(fr0_ - 0xa0)));
        (*(undefined8 *)(fr0_ - 0xc0)) = dVar10;
      }
      if (cVar11 == '\0') {
        iVar2 = (int)F32HI(dVar7);
      }
      else {
        iVar2 = (int)dVar7;
      }
      uVar3 = (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc0))+4));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 228)), libgcc_divide_helper_01031c((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc0))+4)),iVar2,a6,a7));
      if (cVar11 == '\0') {
        dVar10 = CONCAT44D((float)iVar1,uVar9);
      }
      else {
        dVar10 = (double)iVar1;
      }
      if (cVar12 == '\0') {
        dVar7 = CONCAT44D(0x42c80000,(undefined4)(*(undefined8 *)(fr0_ - 0xc0)));
      }
      else {
        dVar7 = 6.03200357491229e-312;
      }
      if (cVar11 == '\0') {
        fVar8 = F32HI(dVar7);
        fVar6 = F32LO(dVar7) / fVar8;
        dVar7 = CONCAT44D(fVar8,fVar6);
        dVar10 = CONCAT44D(F32HI(dVar10) * fVar6,SUB84(dVar10,0));
      }
      else {
        dVar7 = dVar7 / dVar7;
        dVar10 = dVar10 * dVar7;
      }
      uVar4 = SUB84(dVar7,0);
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2c) = (int)(D2U(dVar10) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x2c) = dVar10;
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 228)), rand(uVar3,iVar2,a6,a7));
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0xa4)),uVar4);
      }
      else {
        dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0xa0)),(*(undefined4 *)(fr0_ - 0xa4)));
      }
      if (cVar11 == '\0') {
        iVar2 = (int)F32HI(dVar10);
      }
      else {
        iVar2 = (int)dVar10;
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 228)), libgcc_divide_helper_01031c(uVar3,iVar2,a6,a7));
      if (cVar11 == '\0') {
        dVar10 = CONCAT44D((float)iVar2,SUB84(dVar10,0));
      }
      else {
        dVar10 = (double)iVar2;
      }
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x30) = (int)(D2U(dVar10) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x30) = dVar10;
      }
    }
    else if (iVar1 == 0xb) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,5,a6,a7));
      if (iVar2 == 0) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xe0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 228)); FUN_8c02f404(ar4,2,a6,a7); });
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x43fa0000;
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x43fa0000;
          *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x43fa0000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x10043fa0000;
          *(undefined8 *)(unsigned)(ar4 + 0x2c) = 0x10043fa0000;
          *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x10043fa0000;
        }
      }
      else {
        for (puVar5 = (undefined4 *)(unsigned)0x0; iVar2 = (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,5,a6,a7)),
            (int)puVar5 < iVar2; puVar5 = (undefined4 *)(unsigned)((int)puVar5 + 1)) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,5,puVar5,a7));
          a7 = &(*(undefined4 *)(fr0_ - 0xb0));
          ar6_00 = ((undefined1 *)(fr0_ - 0xac));
          ar5_01 = ((undefined1 *)(fr0_ - 0xa8));
          (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c03f414(uVar3,ar5_01,ar6_00,a7));
          (vsp = ((unsigned long)(fr0_ - 228)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x4c)),ar5_01,ar6_00,a7));
          (vsp = ((unsigned long)(fr0_ - 228)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x68)),((undefined1 *)(fr0_ - 0x4c)),ar6_00,a7));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 228)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 228)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x68)),ar6_00,a7); });
          (vsp = ((unsigned long)(fr0_ - 228)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x5c)),((undefined1 *)(fr0_ - 0x78)),ar6_00,a7));
          (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6_00,a7));
          (vsp = ((unsigned long)(fr0_ - 228)), object_dtor_delete(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,a7));
          uVar4 = 5;
          a6 = puVar5;
          uVar3 = (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,5,puVar5,a7));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 228)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 228)) - 8); FUN_8c02f670(uVar3,uVar4,a6,a7); });
          ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x98))); *(unsigned *)((((unsigned long)(fr0_ - 228)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 228)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x88)),((undefined1 *)(fr0_ - 0x5c)),a6,a7); });
          (vsp = ((unsigned long)(fr0_ - 228)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x20)),((undefined4 *)(fr0_ - 0x98)),a6,a7));
          (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined4 *)(fr0_ - 0x98)),0xffffffff,a6,a7));
          (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,a6,a7));
          if (cVar12 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x28) = (*(undefined4 *)(fr0_ - 0x20));
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = (*(undefined4 *)(fr0_ - 0x1c));
            *(undefined4 *)(unsigned)(ar4 + 0x30) = (*(undefined4 *)(fr0_ - 0x18));
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x28) = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
            *(ulonglong *)(unsigned)(ar4 + 0x2c) = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
            *(ulonglong *)(unsigned)(ar4 + 0x30) = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
          }
          (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,a6,a7));
          (vsp = ((unsigned long)(fr0_ - 228)), object_dtor_delete(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,a6,a7));
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,a6,a7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x20)),0xffffffff,a6,a7));
  return uVar3;
}

__asm__(".globl _FUN_8c0ac1f0\n.set _FUN_8c0ac1f0, _FUN_8c0ac1f0_def\n");
//@unit 8c0ac598
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
int FUN_8c0ac598_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ac598";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x98;
  *(undefined1 *)(unsigned)(0x98 + ar4) = *ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0ac598\n.set _FUN_8c0ac598, _FUN_8c0ac598_def\n");
//@unit 8c0ac5a8
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
int FUN_8c0ac5a8_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ac5a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  
  cVar1 = *(char *)(unsigned)(0x98 + ar4);
  *ar5 = cVar1;
  return (int)cVar1;
}

__asm__(".globl _FUN_8c0ac5a8\n.set _FUN_8c0ac5a8, _FUN_8c0ac5a8_def\n");
//@unit 8c0ac5b8
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
undefined4 FUN_8c0ac5b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ac5b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126278),ar5,ar6,ar7));
  uVar3 = 0x8c2858f8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2858f8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126288),pcVar2,uVar3,ar7));
  uVar3 = 0x8c285904;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285904,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126298),pcVar2,uVar3,ar7));
  uVar3 = 0x8c285910;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285910,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1262a8),pcVar2,uVar3,ar7));
  uVar3 = 0x8c28591c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28591c,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c1262b8) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c1262bc),0x800000);
  }
  else {
                    
    (*(undefined4 *)(unsigned)(unsigned)0x8c1262b8) = 0xffffffff00800000;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1262bc),pcVar2,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285928,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0ac5b8\n.set _FUN_8c0ac5b8, _FUN_8c0ac5b8_def\n");
//@unit 8c0ac6a0
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
int s_GRAPHICS_SQUIDLINE_0ac6a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_SQUIDLINE_0ac6a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined *ar5_00;
  undefined2 *ar5_01;
  undefined4 uVar2;
  undefined4 ar7_00;
  int iVar3;
  
  ar7_00 = 0xc;
  uVar2 = 1;
  uVar1 = 2;
  ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(ar5); unsigned long t2_ = (unsigned long)(0x8c2868d8); unsigned long t3_ = (unsigned long)(0x8c286a08); unsigned long t4_ = (unsigned long)(*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b4d4))); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 4)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0254d0))))
            (ar4,2,1,0xc); });
  *(unsigned *)(unsigned)(ar4 + 8) = (&(*(undefined1 *)(unsigned)0x8c12b110));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0b5a30(ar4 + 0x490,uVar1,uVar2,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0afa50(ar4 + 0x53c,uVar1,uVar2,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c016fcc(ar4 + 0x894,uVar1,uVar2,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c015224(ar4 + 0x9bc,uVar1,uVar2,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(10); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c010120(ar4 + 0x9c4,((void *)(unsigned)0x8c016410),0,0x44); });
  uVar2 = 0x44;
  uVar1 = 0;
  ar5_00 = ((void *)(unsigned)0x8c016410);
  ({ unsigned long t0_ = (unsigned long)(0x28); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c010120(ar4 + 0xc6c,((void *)(unsigned)0x8c016410),0,0x44); });
  ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x338); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
            (ar4 + 0xc,ar5_00,uVar1,uVar2); });
  *(undefined4 *)(unsigned)(0x170c + ar4) = 0;
  *(undefined4 *)(unsigned)(0x1710 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x1714 + ar4) = 0xffffffff;
  *(int *)(unsigned)(0x308 + ar4) = ar4 + 0x490;
  *(int *)(unsigned)(0x30c + ar4) = ar4 + 0x53c;
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    *(undefined4 *)(unsigned)(0x928 + ar4 + iVar3 * 4) = 0;
    *(undefined4 *)(unsigned)(0x948 + ar4 + iVar3 * 4) = 0;
  }
  *(undefined1 *)(unsigned)(0x968 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x88c + ar4) = 0;
  *(undefined4 *)(unsigned)(0x890 + ar4) = 0;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x10;
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0f532c))))
            (ar4,*(undefined4 *)(unsigned)(0xb4 + *(int *)(unsigned)(0x328 + ar4)),ar4 + 0x894,
             uVar2));
  for (iVar3 = 0; iVar3 < 6; iVar3 = iVar3 + 1) {
    *(undefined4 *)(unsigned)(0x970 + iVar3 * 0xc + ar4) = 0;
  }
  uVar2 = 6;
  uVar1 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c239170(ar4 + 0x9b4,ar4 + 0x96c,0x8c4312a8,6));
  iVar3 = ar4 + 0x9b4;
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x9bc) + 8))))((int *)(unsigned)(ar4 + 0x9bc),iVar3,uVar1,uVar2));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_4_0253e4(ar4 + 0x9bc,iVar3,uVar1,uVar2));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02100c))))
                    (0x8c3eb334,(&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x342,
                     (&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x10,uVar1));
  if (iVar3 == -1) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x351,
               (&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x36a,0,2));
  }
  *(undefined4 *)(unsigned)0x8c286868 = 0;
  ((undefined1 *)(unsigned)1)[0x8c286868] = 0;
  ((undefined1 *)(unsigned)2)[0x8c286868] = (short)0xff;
  ((undefined1 *)(unsigned)3)[0x8c286868] = 0;
  ((undefined1 *)(unsigned)4)[0x8c286868] = (short)0xff;
  ((undefined1 *)(unsigned)5)[0x8c286868] = (short)0xff;
  ((undefined1 *)(unsigned)6)[0x8c286868] = 0;
  ((undefined1 *)(unsigned)7)[0x8c286868] = (short)0xff;
  *(undefined4 *)(unsigned)0x8c286858 = 0xffffffff;
  ((undefined1 *)(unsigned)1)[0x8c286858] = 0xffffffff;
  ((undefined1 *)(unsigned)2)[0x8c286858] = 0xffffffff;
  ((undefined1 *)(unsigned)3)[0x8c286858] = 0xffffffff;
  *(undefined1 *)(unsigned)((unsigned)0x8c286858 + 3) = 0;
  *(undefined1 *)(unsigned)((unsigned)0x8c286858 + 7) = 0;
  *(undefined1 *)(unsigned)((unsigned)0x8c286858 + 0xb) = 0;
  *(undefined1 *)(unsigned)((unsigned)0x8c286858 + 0xf) = 0;
  for (iVar3 = 0; iVar3 < 10; iVar3 = iVar3 + 1) {
    uVar2 = 4;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c016464(iVar3 * 0x44 + ar4 + 0x9c4,(&(*(undefined1 *)(unsigned)0x8c13b474)),0x8c286858,4));
    uVar1 = 4;
    ar5_01 = 0x8c286868;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0164c8(iVar3 * 0x44 + ar4 + 0x9c4,0x8c286868,4,uVar2));
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c014790(iVar3 * 0x44 + ar4 + 0x9c4,ar5_01,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c014764(iVar3 * 0x44 + ar4 + 0x9c4,ar5_01,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c014a64(iVar3 * 0x44 + ar4 + 0x9c4,ar5_01,uVar1,uVar2));
  }
  return ar4;
}

__asm__(".globl _s_GRAPHICS_SQUIDLINE_0ac6a4\n.set _s_GRAPHICS_SQUIDLINE_0ac6a4, _s_GRAPHICS_SQUIDLINE_0ac6a4_def\n");
//@unit 8c0aca4c
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
int CAnimal_m0_0aca4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m0_0aca4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12b110);
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x9bc,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0x894,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12b2ac_m0_0afbcc(ar4 + 0x53c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12b2e8_m0_0b5a88(ar4 + 0x490,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), CAnimal_m0_025688(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _CAnimal_m0_0aca4c\n.set _CAnimal_m0_0aca4c, _CAnimal_m0_0aca4c_def\n");
//@unit 8c0acaec
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
undefined4 CAnimal_m2_0acaec_def(int ar4,int *ar5,int *ar6,int *ar7)

{
  ring[rp++ & 255] = "CAnimal_m2_0acaec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *a4;
  int *ar5_00;
  int *ar7_00;
  
  ar5_00 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), CAnimal_m2_02573c(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((((((char)uVar1 == '\x01') && (*(int *)(unsigned)(0x948 + ar4) == 0)) &&
       (*(int *)(unsigned)(0x94c + ar4) == 0)) &&
      ((*(int *)(unsigned)(0x950 + ar4) == 0 && (*(int *)(unsigned)(0x954 + ar4) == 0)))) &&
     (((*(int *)(unsigned)(0x958 + ar4) == 0 &&
       ((*(int *)(unsigned)(0x95c + ar4) == 0 && (*(int *)(unsigned)(0x960 + ar4) == 0)))) &&
      (*(int *)(unsigned)(0x964 + ar4) == 0)))) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ad050(ar4,ar5,ar6,ar7_00));
  }
  if ((((*(int *)(unsigned)(0x948 + ar4) != 0) || (*(int *)(unsigned)(0x94c + ar4) != 0)) ||
      (*(int *)(unsigned)(0x950 + ar4) != 0)) ||
     (((*(int *)(unsigned)(0x954 + ar4) != 0 || (*(int *)(unsigned)(0x958 + ar4) != 0)) ||
      ((*(int *)(unsigned)(0x95c + ar4) != 0 ||
       ((*(int *)(unsigned)(0x960 + ar4) != 0 || (*(int *)(unsigned)(0x964 + ar4) != 0)))))))) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ad0e0(ar4,ar5,ar6,ar7_00));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((char)uVar1 == '\x02') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00));
    if (iVar2 != -1) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x44))))
                        (((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar5_00,ar6,ar7_00));
      if (iVar2 < iVar3) {
        if (*(char *)(unsigned)(0x968 + ar4) == '\0') {
          *(undefined1 *)(unsigned)(0x968 + ar4) = 1;
          *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bcc4)) = 0;
        }
        ar5_00 = ar7;
        (vsp = ((unsigned long)(fr0_ - 0)), s_CSquidLine_0ad244(ar4,ar7,ar5,ar7_00));
        ar6 = ar5;
      }
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((char)uVar1 == '\x02') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00));
    a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x44))))(a4,ar5_00,ar6,ar7_00));
    if ((iVar3 + -1 <= iVar2) && (*(char *)(unsigned)(0x968 + ar4) == '\x01')) {
      *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bcc4)) = 1;
      *(undefined1 *)(unsigned)(0x968 + ar4) = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(a4,ar5_00,ar6,ar7_00));
    }
  }
  if (*(int *)(unsigned)(0x77c + ar4) == 1) {
    *(undefined4 *)(unsigned)(0x170c + ar4) = 1;
  }
  if (*(int *)(unsigned)(0x75c + ar4) == 1) {
    if ((*(int *)(unsigned)(0x88c + ar4) != 0) && (*(int *)(unsigned)(0x890 + ar4) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb8 + *ar7))))
                (ar7,*(undefined4 *)(unsigned)(0x88c + ar4),*(undefined4 *)(unsigned)(0x890 + ar4),
                 ar4 + 0x760));
      *(undefined4 *)(unsigned)(0x88c + ar4) = 0;
      *(undefined4 *)(unsigned)(0x890 + ar4) = 0;
    }
    *(undefined4 *)(unsigned)(0x75c + ar4) = 0;
  }
  return 1;
}

__asm__(".globl _CAnimal_m2_0acaec\n.set _CAnimal_m2_0acaec, _CAnimal_m2_0acaec_def\n");
//@unit 8c0acd64
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
undefined4 noop_0acd64_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0acd64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0acd64\n.set _noop_0acd64, _noop_0acd64_def\n");
//@unit 8c0acd68
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
undefined4 get_field_328_0acd68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_328_0acd68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x328 + ar4);
}

__asm__(".globl _get_field_328_0acd68\n.set _get_field_328_0acd68, _get_field_328_0acd68_def\n");
//@unit 8c0acd74
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
undefined4 CAnimal_m3_0acd74_def(int ar4,int *ar5,int *ar6,int *ar7)

{
  ring[rp++ & 255] = "CAnimal_m3_0acd74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *ar5_00;
  int *ar7_00;
  
  ar5_00 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), CAnimal_m3_026078(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((((((char)uVar1 == '\x01') && (*(int *)(unsigned)(0x948 + ar4) == 0)) &&
       (*(int *)(unsigned)(0x94c + ar4) == 0)) &&
      ((*(int *)(unsigned)(0x950 + ar4) == 0 && (*(int *)(unsigned)(0x954 + ar4) == 0)))) &&
     (((*(int *)(unsigned)(0x958 + ar4) == 0 &&
       ((*(int *)(unsigned)(0x95c + ar4) == 0 && (*(int *)(unsigned)(0x960 + ar4) == 0)))) &&
      (*(int *)(unsigned)(0x964 + ar4) == 0)))) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ad050(ar4,ar5,ar6,ar7_00));
  }
  if ((((*(int *)(unsigned)(0x948 + ar4) != 0) || (*(int *)(unsigned)(0x94c + ar4) != 0)) ||
      (*(int *)(unsigned)(0x950 + ar4) != 0)) ||
     (((*(int *)(unsigned)(0x954 + ar4) != 0 || (*(int *)(unsigned)(0x958 + ar4) != 0)) ||
      ((*(int *)(unsigned)(0x95c + ar4) != 0 ||
       ((*(int *)(unsigned)(0x960 + ar4) != 0 || (*(int *)(unsigned)(0x964 + ar4) != 0)))))))) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ad0e0(ar4,ar5,ar6,ar7_00));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((char)uVar1 == '\x02') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00));
    if (iVar2 != -1) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x44))))
                        (((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar5_00,ar6,ar7_00));
      if (iVar2 < iVar3) {
        if (*(char *)(unsigned)(0x968 + ar4) == '\0') {
          *(undefined1 *)(unsigned)(0x968 + ar4) = 1;
          *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bcc4)) = 0;
        }
        ar5_00 = ar7;
        (vsp = ((unsigned long)(fr0_ - 0)), s_CSquidLine_0ad244(ar4,ar7,ar5,ar7_00));
        ar6 = ar5;
      }
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((char)uVar1 == '\x02') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x44))))
                      (((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar5_00,ar6,ar7_00));
    if ((iVar3 + -1 <= iVar2) && (*(char *)(unsigned)(0x968 + ar4) == '\x01')) {
      *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bcc4)) = 1;
      *(undefined1 *)(unsigned)(0x968 + ar4) = 0;
    }
  }
  if (*(int *)(unsigned)(0x77c + ar4) == 1) {
    *(undefined4 *)(unsigned)(0x170c + ar4) = 1;
  }
  if (*(int *)(unsigned)(0x75c + ar4) == 1) {
    if ((*(int *)(unsigned)(0x88c + ar4) != 0) && (*(int *)(unsigned)(0x890 + ar4) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb8 + *ar7))))
                (ar7,*(undefined4 *)(unsigned)(0x88c + ar4),*(undefined4 *)(unsigned)(0x890 + ar4),
                 ar4 + 0x760));
      *(undefined4 *)(unsigned)(0x88c + ar4) = 0;
      *(undefined4 *)(unsigned)(0x890 + ar4) = 0;
    }
    *(undefined4 *)(unsigned)(0x75c + ar4) = 0;
  }
  return 1;
}

__asm__(".globl _CAnimal_m3_0acd74\n.set _CAnimal_m3_0acd74, _CAnimal_m3_0acd74_def\n");
//@unit 8c0acfe4
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
undefined4 CAnimal_m4_0acfe4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m4_0acfe4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)) + 0x1c))))
                    (((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _CAnimal_m4_0acfe4\n.set _CAnimal_m4_0acfe4, _CAnimal_m4_0acfe4_def\n");
//@unit 8c0ad050
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
undefined4 FUN_8c0ad050_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ad050";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(0x8c3eb324,3,2,ar7));
    *(undefined4 *)(unsigned)(0x928 + ar4 + iVar2 * 4) = uVar1;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fed70))))
                      (*(undefined4 *)(unsigned)(0x7d0 + ar5),
                       *(undefined4 *)(unsigned)(0x928 + ar4 + iVar2 * 4),0,ar7));
    *(undefined4 *)(unsigned)(0x948 + ar4 + iVar2 * 4) = uVar1;
  }
  return 8;
}

__asm__(".globl _FUN_8c0ad050\n.set _FUN_8c0ad050, _FUN_8c0ad050_def\n");
//@unit 8c0ad0e0
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
int FUN_8c0ad0e0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ad0e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  for (iVar3 = 0; iVar3 < 7; iVar3 = iVar3 + 1) {
    if (*(int *)(unsigned)(0x948 + ar4 + iVar3 * 4) != 0) {
      ar5_00 = *(int *)(unsigned)(0x948 + ar4 + iVar3 * 4);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feef8(*(undefined4 *)(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
      if (iVar1 == 1) {
        ar5_00 = ar4 + iVar3 * 4 + 0x948;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feeb0(*(undefined4 *)(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
        *(undefined4 *)(unsigned)(0x928 + ar4 + iVar3 * 4) = uVar2;
      }
    }
  }
  if (*(int *)(unsigned)(0x964 + ar4) != 0) {
    ar5_00 = *(int *)(unsigned)(0x964 + ar4);
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feef8(*(undefined4 *)(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
    if (iVar3 == 1) {
      ar5_00 = ar4 + 0x964;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feeb0(*(undefined4 *)(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
      *(undefined4 *)(unsigned)(0x944 + ar4) = uVar2;
    }
  }
  iVar3 = *(int *)(unsigned)(0x948 + ar4);
  if (((((iVar3 == 0) && (iVar3 = *(int *)(unsigned)(0x94c + ar4), iVar3 == 0)) &&
       (iVar3 = *(int *)(unsigned)(0x950 + ar4), iVar3 == 0)) &&
      ((iVar3 = *(int *)(unsigned)(0x954 + ar4), iVar3 == 0 &&
       (iVar3 = *(int *)(unsigned)(0x958 + ar4), iVar3 == 0)))) &&
     ((iVar3 = *(int *)(unsigned)(0x95c + ar4), iVar3 == 0 &&
      ((iVar3 = *(int *)(unsigned)(0x960 + ar4), iVar3 == 0 &&
       (iVar3 = *(int *)(unsigned)(0x964 + ar4), iVar3 == 0)))))) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7));
    iVar3 = (int)(char)uVar2;
    if (iVar3 == 1) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035f4c(ar4 + 0x490,2,ar6,ar7));
    }
  }
  return iVar3;
}

__asm__(".globl _FUN_8c0ad0e0\n.set _FUN_8c0ad0e0, _FUN_8c0ad0e0_def\n");
//@unit 8c0ad240
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
int s_CSquidLine_0ad244_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CSquidLine_0ad244";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 a6;
  
  a6 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_328_0acd68(ar4 + 0x53c,ar5,ar6,ar7));
  if (*(int *)(unsigned)(0x928 + ar4 + iVar1 * 4) == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x379,
                       (&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x384,1,2));
  }
  else {
    iVar2 = *(int *)(unsigned)(0x928 + ar4 + iVar1 * 4);
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x10c + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,ar6,a6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036988(*(undefined4 *)(unsigned)(0x928 + ar4 + iVar1 * 4),ar6,a6,ar7));
    iVar2 = *(int *)(unsigned)(0x928 + ar4 + iVar1 * 4);
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar2 + 8) + 0x5c))))(iVar2,ar6,a6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x4c))))(ar5,*(undefined4 *)(unsigned)(0x928 + ar4 + iVar1 * 4),a6,ar7));
    *(undefined4 *)(unsigned)(0x928 + ar4 + iVar1 * 4) = 0;
    iVar1 = 0x170c;
    *(undefined4 *)(unsigned)(0x170c + ar4) = 1;
  }
  return iVar1;
}

__asm__(".globl _s_CSquidLine_0ad244\n.set _s_CSquidLine_0ad244, _s_CSquidLine_0ad244_def\n");
//@unit 8c0ad354
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
int FUN_8c0ad354_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ad354";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 188; for (int i_ = 0; i_ < 188; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 ar4_00;
  undefined4 ar6_00;
  int iVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  code *pcVar9;
  int ar7_00;
  int iVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  (vsp = ((unsigned long)(fr0_ - 188)), FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0xb8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 188)); FUN_8c256328(0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0xb8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 188)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
  if (cVar12 == '\0') {
    dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar6 = F32LO(dVar7) * F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar12 == '\0') {
    dVar7 = CONCAT44D(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    ar7_00 = (int)(F32LO(dVar7) / F32HI(dVar7));
  }
  else {
    ar7_00 = (int)(dVar7 / dVar7);
  }
  if (cVar12 == '\0') {
    dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar6 = F32LO(dVar7) * F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar12 == '\0') {
    dVar7 = CONCAT44D(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    (*(int *)(fr0_ - 0x7c)) = (int)(F32LO(dVar7) / F32HI(dVar7));
  }
  else {
    (*(int *)(fr0_ - 0x7c)) = (int)(dVar7 / dVar7);
  }
  if (cVar12 == '\0') {
    dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar6 = F32LO(dVar7) * F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar12 == '\0') {
    dVar7 = CONCAT44D(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    fVar8 = F32HI(dVar7);
    fVar6 = F32LO(dVar7) / fVar8;
    dVar7 = CONCAT44D(fVar8,fVar6);
    iVar10 = (int)fVar6;
  }
  else {
    dVar7 = dVar7 / dVar7;
    iVar10 = (int)dVar7;
  }
  iVar5 = (int)(D2U(dVar7) >> 0x20);
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0xb8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 188)); FUN_8c256b0c(0,iVar10,(*(int *)(fr0_ - 0x7c)),ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0xb8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 188)); FUN_8c256fec(0,iVar10,(*(int *)(fr0_ - 0x7c)),ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 188)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x328) + 0x78,iVar10,(*(int *)(fr0_ - 0x7c)),ar7_00));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 188)), get_field_124_027930(ar4 + 0x53c,iVar10,(*(int *)(fr0_ - 0x7c)),ar7_00));
  iVar3 = iVar10;
  if (iVar1 != 8) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 188)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,iVar10,(*(int *)(fr0_ - 0x7c)),ar7_00));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 188)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar10,(*(int *)(fr0_ - 0x7c)),ar7_00));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 188)), deref_u32(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0) + iVar3 * 4,iVar10,(*(int *)(fr0_ - 0x7c)),ar7_00));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 188)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar10,(*(int *)(fr0_ - 0x7c)),ar7_00));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 188)), FUN_8c026d74(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa8) + iVar1 * 4,iVar10,(*(int *)(fr0_ - 0x7c)),ar7_00))
    ;
    (vsp = ((unsigned long)(fr0_ - 188)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar10,(*(int *)(fr0_ - 0x7c)),ar7_00));
    (*(int *)(fr0_ - 0x7c)) = iVar5;
    if (cVar12 == '\0') {
      (*(int *)(fr0_ - 0x7c)) = iVar1;
    }
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0xb8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 188)); FUN_8c21bbb0(uVar2,iVar3,(*(int *)(fr0_ - 0x7c)),ar7_00); });
  }
  (vsp = ((unsigned long)(fr0_ - 188)), FUN_8c256210(1,iVar3,(*(int *)(fr0_ - 0x7c)),ar7_00));
  (vsp = ((unsigned long)(fr0_ - 188)), FUN_8c233dac(((undefined1 *)(unsigned)0x8c13b464),iVar3,(*(int *)(fr0_ - 0x7c)),ar7_00));
  if ((*(int *)(unsigned)(ar4 + 0x88c) != 0) && (*(int *)(unsigned)(ar4 + 0x890) != 0)) {
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0xb8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 188)); FUN_8c256328(0,iVar3,(*(int *)(fr0_ - 0x7c)),ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0xb8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 188)); FUN_8c25b5d0(0,iVar3,(*(int *)(fr0_ - 0x7c)),ar7_00); });
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x778));
    }
    else {
      dVar7 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar6 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(0x43b40000,fVar6);
    }
    else {
      dVar7 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      ar7_00 = (int)(F32LO(dVar7) / F32HI(dVar7));
    }
    else {
      ar7_00 = (int)(dVar7 / dVar7);
    }
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x774));
    }
    else {
      dVar7 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar6 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(0x43b40000,fVar6);
    }
    else {
      dVar7 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      (*(int *)(fr0_ - 0x7c)) = (int)(F32LO(dVar7) / F32HI(dVar7));
    }
    else {
      (*(int *)(fr0_ - 0x7c)) = (int)(dVar7 / dVar7);
    }
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x770));
    }
    else {
      dVar7 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar6 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(0x43b40000,fVar6);
    }
    else {
      dVar7 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      iVar3 = (int)(F32LO(dVar7) / F32HI(dVar7));
    }
    else {
      iVar3 = (int)(dVar7 / dVar7);
    }
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0xb8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 188)); FUN_8c256b0c(0,iVar3,(*(int *)(fr0_ - 0x7c)),ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 188)), FUN_8c25b3ec(*(undefined4 *)(unsigned)(ar4 + 0x890),iVar3,(*(int *)(fr0_ - 0x7c)),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 188)), FUN_8c21a80e(*(undefined4 *)(unsigned)(ar4 + 0x88c),iVar3,(*(int *)(fr0_ - 0x7c)),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 188)), FUN_8c256210(1,iVar3,(*(int *)(fr0_ - 0x7c)),ar7_00));
  }
  iVar10 = *(int *)(unsigned)(ar4 + 0x170c);
  if (iVar10 == 1) {
    (vsp = ((unsigned long)(fr0_ - 188)), FUN_8c0191c8(((undefined1 *)(fr0_ - 0x50)),iVar3,(*(int *)(fr0_ - 0x7c)),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 188)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x60)),ar4 + 0x30,(*(int *)(fr0_ - 0x7c)),ar7_00));
    ar6_00 = 0x1e;
    iVar10 = (vsp = ((unsigned long)(fr0_ - 188)), FUN_8c0ae84c(ar4,((undefined1 *)(fr0_ - 0x60)),0x1e,ar7_00));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 188)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6_00,ar7_00));
    if (iVar10 == 1) {
      iVar10 = 0;
    }
    else {
      for (iVar5 = 0; iVar10 = 10, iVar5 < 10; iVar5 = iVar5 + 1) {
        if (cVar12 == '\0') {
          fVar6 = *(float *)(unsigned)(iVar5 * 0x4c + -0x73d7a684);
          pcVar9 = (code *)0x44bb8000;
        }
        else {
          fVar6 = 1500.0;
          pcVar9 = (code *)0x44bb6000;
        }
        if (cVar11 == '\0' && (float)(uint)pcVar9 < fVar6) {
          puVar4 = (undefined8 *)(unsigned)(iVar5 * 0x4c + -0x73d7a684);
          if (cVar12 == '\0') {
            pcVar9 = (code *)0x44bb6000;
            *(undefined4 *)(unsigned)puVar4 = 0x44bb6000;
          }
          else {
            pcVar9 = ((void *)0x8c256328);
            *puVar4 = 0x8c25632844bb6000;
          }
        }
        ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0xb8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 188)); FUN_8c256328(0,uVar2,ar6_00,ar7_00); });
        ar4_00 = 0;
        ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0xb8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 188)); FUN_8c25b5d0(0,uVar2,ar6_00,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 188)), FUN_8c013b3c(ar4_00,uVar2,ar6_00,ar7_00));
        if (cVar12 == '\0') {
          dVar7 = CONCAT44D(0x47800000,pcVar9);
        }
        else {
          dVar7 = 12831.689682006836;
        }
        if (cVar11 == '\0') {
          fVar6 = F32LO(dVar7) * F32HI(dVar7);
        }
        else {
          fVar6 = SUB84(dVar7 * dVar7,0);
        }
        if (cVar12 == '\0') {
          dVar7 = CONCAT44D(0x40c90fd8,fVar6);
        }
        else {
          dVar7 = 1.0382059669001045e+34;
        }
        if (cVar11 == '\0') {
          iVar10 = (int)(F32LO(dVar7) / F32HI(dVar7));
        }
        else {
          iVar10 = (int)(dVar7 / dVar7);
        }
        if (cVar12 == '\0') {
          dVar7 = CONCAT44D(0x46fffe00,(float)iVar10);
        }
        else {
          dVar7 = -3.738952064572566e-250;
        }
        if (cVar11 == '\0') {
          iVar10 = (int)(F32LO(dVar7) - F32HI(dVar7));
        }
        else {
          iVar10 = (int)(dVar7 - dVar7);
        }
        ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0xb8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 188)); FUN_8c256a78(0,iVar10,ar6_00,ar7_00); });
        ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0xb8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 188)); FUN_8c256fec(0,iVar10,ar6_00,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 188)), FUN_8c01538c(ar4 + 0x9bc,iVar10,ar6_00,ar7_00));
        uVar2 = *(undefined4 *)(unsigned)(iVar5 * 0x4c + -0x73d7a644);
        (vsp = ((unsigned long)(fr0_ - 188)), FUN_8c014a94(ar4 + 0x9bc,uVar2,ar6_00,ar7_00));
        (*(int *)(fr0_ - 0xb8)) = iVar5;
        (vsp = ((unsigned long)(fr0_ - 188)), FUN_8c016524(iVar5 * 0x44 + ar4 + 0x9c4,uVar2,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 188)), FUN_8c256210(1,uVar2,ar6_00,ar7_00));
      }
    }
  }
  return iVar10;
}

__asm__(".globl _FUN_8c0ad354\n.set _FUN_8c0ad354, _FUN_8c0ad354_def\n");
//@unit 8c0ad7ec
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
int FUN_8c0ad7ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ad7ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 ar6_00;
  int iVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  int ar7_00;
  int iVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256328(0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar6 = F32LO(dVar7) * F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar10 == '\0') {
    ar7_00 = (int)(F32LO(dVar7) / F32HI(dVar7));
  }
  else {
    ar7_00 = (int)(dVar7 / dVar7);
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar6 = F32LO(dVar7) * F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar10 == '\0') {
    (*(int *)(fr0_ - 0x3c)) = (int)(F32LO(dVar7) / F32HI(dVar7));
  }
  else {
    (*(int *)(fr0_ - 0x3c)) = (int)(dVar7 / dVar7);
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar6 = F32LO(dVar7) * F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar10 == '\0') {
    fVar8 = F32HI(dVar7);
    fVar6 = F32LO(dVar7) / fVar8;
    dVar7 = CONCAT44D(fVar8,fVar6);
    iVar9 = (int)fVar6;
  }
  else {
    dVar7 = dVar7 / dVar7;
    iVar9 = (int)dVar7;
  }
  iVar5 = (int)(D2U(dVar7) >> 0x20);
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256b0c(0,iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256fec(0,iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x328) + 0x78,iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), get_field_124_027930(ar4 + 0x53c,iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
  iVar3 = iVar9;
  if (iVar1 != 8) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 120)), deref_u32(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0) + iVar3 * 4,iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c026d74(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa8) + iVar1 * 4,iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
    (*(int *)(fr0_ - 0x3c)) = iVar5;
    if (cVar11 == '\0') {
      (*(int *)(fr0_ - 0x3c)) = iVar1;
    }
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c21bbb0(uVar2,iVar3,(*(int *)(fr0_ - 0x3c)),ar7_00); });
  }
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c256210(1,iVar3,(*(int *)(fr0_ - 0x3c)),ar7_00));
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c233dac(((undefined1 *)(unsigned)0x8c13b464),iVar3,(*(int *)(fr0_ - 0x3c)),ar7_00));
  if ((*(int *)(unsigned)(ar4 + 0x88c) != 0) && (*(int *)(unsigned)(ar4 + 0x890) != 0)) {
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256328(0,iVar3,(*(int *)(fr0_ - 0x3c)),ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25b5d0(0,iVar3,(*(int *)(fr0_ - 0x3c)),ar7_00); });
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x778));
    }
    else {
      dVar7 = 1.4411521878487204e+18;
    }
    if (cVar10 == '\0') {
      fVar6 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x43b40000,fVar6);
    }
    else {
      dVar7 = -3.739346301775294e-250;
    }
    if (cVar10 == '\0') {
      ar7_00 = (int)(F32LO(dVar7) / F32HI(dVar7));
    }
    else {
      ar7_00 = (int)(dVar7 / dVar7);
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x774));
    }
    else {
      dVar7 = 1.4411521878487204e+18;
    }
    if (cVar10 == '\0') {
      fVar6 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x43b40000,fVar6);
    }
    else {
      dVar7 = -3.739346301775294e-250;
    }
    if (cVar10 == '\0') {
      (*(int *)(fr0_ - 0x3c)) = (int)(F32LO(dVar7) / F32HI(dVar7));
    }
    else {
      (*(int *)(fr0_ - 0x3c)) = (int)(dVar7 / dVar7);
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x770));
    }
    else {
      dVar7 = 1.4411521878487204e+18;
    }
    if (cVar10 == '\0') {
      fVar6 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x43b40000,fVar6);
    }
    else {
      dVar7 = -3.739346301775294e-250;
    }
    if (cVar10 == '\0') {
      iVar9 = (int)(F32LO(dVar7) / F32HI(dVar7));
    }
    else {
      iVar9 = (int)(dVar7 / dVar7);
    }
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256b0c(0,iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25b3ec(*(undefined4 *)(unsigned)(ar4 + 0x890),iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c219a9a(*(undefined4 *)(unsigned)(ar4 + 0x88c),iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c256210(1,iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
  }
  iVar9 = *(int *)(unsigned)(ar4 + 0x170c);
  if (iVar9 == 1) {
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x20)),ar4 + 0x30,(*(int *)(fr0_ - 0x3c)),ar7_00));
    ar6_00 = 0x1e;
    iVar9 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c0ae84c(ar4,((undefined1 *)(fr0_ - 0x20)),0x1e,ar7_00));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7_00));
    if (iVar9 == 1) {
      iVar9 = 0;
    }
    else {
      for (iVar5 = 0; iVar9 = 10, iVar5 < 10; iVar5 = iVar5 + 1) {
        if (cVar11 == '\0') {
          fVar6 = *(float *)(unsigned)(iVar5 * 0x4c + -0x73d7a684);
          fVar8 = 1500.0;
        }
        else {
          fVar6 = 1500.0;
          fVar8 = 1499.0;
        }
        if (cVar10 == '\0' && fVar8 < fVar6) {
          puVar4 = (undefined8 *)(unsigned)(iVar5 * 0x4c + -0x73d7a684);
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)puVar4 = 0x44bb6000;
          }
          else {
            *puVar4 = 0x9bc44bb6000;
          }
        }
        ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256328(0,uVar2,ar6_00,ar7_00); });
        ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25b5d0(0,uVar2,ar6_00,ar7_00); });
        ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256fec(0,uVar2,ar6_00,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c01538c(ar4 + 0x9bc,uVar2,ar6_00,ar7_00));
        uVar2 = *(undefined4 *)(unsigned)(iVar5 * 0x4c + -0x73d7a644);
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c014a94(ar4 + 0x9bc,uVar2,ar6_00,ar7_00));
        (*(int *)(fr0_ - 0x74)) = iVar5;
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c016524(iVar5 * 0x44 + ar4 + 0x9c4,uVar2,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c256210(1,uVar2,ar6_00,ar7_00));
      }
    }
  }
  return iVar9;
}

__asm__(".globl _FUN_8c0ad7ec\n.set _FUN_8c0ad7ec, _FUN_8c0ad7ec_def\n");
//@unit 8c0adc0c
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
undefined4 FUN_8c0adc0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0adc0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_fr0 = 0;
  char cVar5;
  
  cVar5 = '\0';
  iVar4 = *(int *)(unsigned)(ar4 + 0x328);
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c01538c(iVar4 + 0x78,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c015bb8(iVar4 + 0x70,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 32)), deref_u32(*(int *)(unsigned)(iVar4 + 0xa0) + iVar2 * 4,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c026d74(*(int *)(unsigned)(iVar4 + 0xa8) + iVar2 * 4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x20)) = extraout_fr0;
  if (cVar5 == '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = uVar3;
  }
  ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c21bbb0(uVar1,ar5_00,(*(undefined4 *)(fr0_ - 0x20)),ar7); });
  uVar1 = 0;
  if ((*(int *)(unsigned)(ar4 + 0x88c) != 0) && (uVar1 = 0, *(int *)(unsigned)(ar4 + 0x890) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c25b3ec(*(undefined4 *)(unsigned)(ar4 + 0x890),ar5_00,(*(undefined4 *)(fr0_ - 0x20)),ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c219a9a(*(undefined4 *)(unsigned)(ar4 + 0x88c),ar5_00,(*(undefined4 *)(fr0_ - 0x20)),ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0adc0c\n.set _FUN_8c0adc0c, _FUN_8c0adc0c_def\n");
//@unit 8c0add00
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
undefined4 FUN_8c0add00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0add00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  int ar7_00;
  int ar6_00;
  int ar5_01;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  iVar4 = *(int *)(unsigned)(ar4 + 0x328);
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c01538c(iVar4 + 0x78,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x2c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); FUN_8c256328(0,ar5,ar6,ar7); });
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar8 == '\0') {
    fVar5 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(0x43b40000,fVar5);
  }
  else {
    dVar6 = 21990236992512.0;
  }
  if (cVar8 == '\0') {
    ar7_00 = (int)(F32LO(dVar6) / F32HI(dVar6));
  }
  else {
    ar7_00 = (int)(dVar6 / dVar6);
  }
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar8 == '\0') {
    fVar5 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(0x43b40000,fVar5);
  }
  else {
    dVar6 = 21990236992512.0;
  }
  if (cVar8 == '\0') {
    ar6_00 = (int)(F32LO(dVar6) / F32HI(dVar6));
  }
  else {
    ar6_00 = (int)(dVar6 / dVar6);
  }
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(0x42b40000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar6 = -3.739346291369057e-250;
  }
  if (cVar8 == '\0') {
    fVar5 = F32LO(dVar6) + F32HI(dVar6);
  }
  else {
    fVar5 = SUB84(dVar6 + dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(0x47800000,fVar5);
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar8 == '\0') {
    fVar5 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(0x43b40000,fVar5);
  }
  else {
    dVar6 = 21990236992512.0;
  }
  if (cVar8 == '\0') {
    fVar7 = F32HI(dVar6);
    fVar5 = F32LO(dVar6) / fVar7;
    dVar6 = CONCAT44D(fVar7,fVar5);
    ar5_01 = (int)fVar5;
  }
  else {
    dVar6 = dVar6 / dVar6;
    ar5_01 = (int)dVar6;
  }
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)(D2U(dVar6) >> 0x20);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x2c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); FUN_8c256b0c(0,ar5_01,ar6_00,ar7_00); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c015bb8(iVar4 + 0x70,ar5_01,ar6_00,ar7_00));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_01,ar6_00,ar7_00));
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 44)), deref_u32(*(int *)(unsigned)(iVar4 + 0xa0) + iVar2 * 4,ar5_01,ar6_00,ar7_00));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_01,ar6_00,ar7_00));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c026d74(*(int *)(unsigned)(iVar4 + 0xa8) + iVar2 * 4,ar5_01,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_01,ar6_00,ar7_00));
  if (cVar9 == '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = uVar3;
  }
  ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); FUN_8c21bbb0(uVar1,ar5_00,(*(undefined4 *)(fr0_ - 0x20)),ar7_00); });
  if ((*(int *)(unsigned)(ar4 + 0x88c) != 0) && (*(int *)(unsigned)(ar4 + 0x890) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c25b3ec(*(undefined4 *)(unsigned)(ar4 + 0x890),ar5_00,(*(undefined4 *)(fr0_ - 0x20)),ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); FUN_8c25b5d0(0,ar5_00,(*(undefined4 *)(fr0_ - 0x20)),ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c219a9a(*(undefined4 *)(unsigned)(ar4 + 0x88c),ar5_00,(*(undefined4 *)(fr0_ - 0x20)),ar7_00));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c256210(1,ar5_00,(*(undefined4 *)(fr0_ - 0x20)),ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c0add00\n.set _FUN_8c0add00, _FUN_8c0add00_def\n");
//@unit 8c0ade84
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
undefined4 CAnimal_m7_0ade84_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m7_0ade84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined4 *a6;
  float fVar3;
  float fVar4;
  double in_dr0 = 0;
  double dVar5;
  double dVar6;
  double dVar7;
  double in_dr12 = 0;
  undefined4 in_fr15 = 0;
  undefined8 in_xd0 = 0;
  double in_xd12 = 0;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x3c)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x170))))(ar4,ar5_00,ar6,ar7));
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar10 == '\0') {
    in_fr15 = uVar2;
    uVar2 = (*(undefined4 *)(fr0_ - 0x3c));
  }
  (*(undefined4 *)(fr0_ - 0x3c)) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x174))))(ar4,ar5_00,ar6,ar7));
  dVar7 = in_dr0;
  if (cVar10 == '\0') {
    dVar7 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), get_field_124_027930(ar4 + 0x53c,ar5_00,ar6,ar7));
  if (((iVar1 == 8) || (iVar1 == 5)) || (iVar1 == 6)) {
    dVar7 = (double)(D2U(dVar7) & 0xffffffff);
  }
  a6 = &(*(undefined4 *)(fr0_ - 0x3c));
  (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x124))))(ar5,&(*(undefined4 *)(fr0_ - 0x2c)),a6,ar7));
  if (cVar10 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x30));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x30);
  }
  fVar4 = F32LO(dVar7);
  if (cVar9 == '\0') {
    fVar3 = F32LO(in_dr0) - fVar4;
  }
  else {
    fVar3 = SUB84(in_dr0 - dVar7,0);
  }
  if (cVar10 == '\0') {
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),fVar3);
  }
  else {
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x2c)));
  }
  fVar3 = F32HI(dVar5);
  if (cVar9 == '\0' && fVar3 < SUB84(dVar5,0)) {
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(fVar3,*(undefined4 *)(unsigned)(ar4 + 0x30));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x30);
    }
    if (cVar9 == '\0') {
      fVar3 = F32LO(dVar5) + fVar4;
    }
    else {
      fVar3 = SUB84(dVar5 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x3c)),fVar3);
    }
    else {
      dVar5 = CONCAT44D((*(float *)(fr0_ - 0x38)),(*(undefined4 *)(fr0_ - 0x3c)));
    }
    fVar3 = F32HI(dVar5);
    if (cVar9 != '\0' || fVar3 <= SUB84(dVar5,0)) {
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(fVar3,(*(undefined4 *)(fr0_ - 0x3c)));
      }
      else {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x38)),(*(undefined4 *)(fr0_ - 0x3c)));
      }
      if (cVar9 == '\0') {
        fVar3 = F32LO(dVar5) - fVar4;
      }
      else {
        fVar3 = SUB84(dVar5 - dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x30),fVar3);
      }
      else {
        dVar5 = *(double *)(unsigned)(ar4 + 0x30);
      }
      if (cVar9 == '\0') {
        fVar3 = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        fVar3 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x3dcccccd,fVar3);
      }
      else {
        dVar5 = 6.28623017172232e-312;
      }
      if (cVar9 == '\0') {
        fVar3 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar3 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x30),fVar3);
      }
      else {
        dVar5 = *(double *)(unsigned)(ar4 + 0x30);
      }
      if (cVar9 == '\0') {
        fVar3 = F32HI(dVar5);
        dVar5 = CONCAT44D(fVar3,F32LO(dVar5) + fVar3);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
      if (cVar10 == '\0') {
        *(int *)(unsigned)(ar4 + 0x30) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd0;
      }
    }
  }
  else {
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(fVar3,(*(undefined4 *)(fr0_ - 0x2c)));
    }
    else {
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x2c)));
    }
    if (cVar9 == '\0') {
      fVar3 = F32LO(dVar5) + fVar4;
    }
    else {
      fVar3 = SUB84(dVar5 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x30),fVar3);
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 0x30);
    }
    if (cVar9 == '\0') {
      fVar3 = F32LO(dVar5) - F32HI(dVar5);
    }
    else {
      fVar3 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(0x3dcccccd,fVar3);
    }
    else {
      dVar5 = 6.28623017172232e-312;
    }
    if (cVar9 == '\0') {
      fVar3 = F32LO(dVar5) * F32HI(dVar5);
    }
    else {
      fVar3 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x30),fVar3);
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 0x30);
    }
    if (cVar9 == '\0') {
      fVar3 = F32HI(dVar5);
      dVar5 = CONCAT44D(fVar3,F32LO(dVar5) + fVar3);
    }
    else {
      dVar5 = dVar5 + dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(ar4 + 0x30) = SUB84(dVar5,0);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd0;
    }
  }
  if (cVar10 == '\0') {
    dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x38));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x38);
  }
  if (cVar9 == '\0') {
    fVar3 = F32LO(dVar5) - fVar4;
  }
  else {
    fVar3 = SUB84(dVar5 - dVar7,0);
  }
  if (cVar10 == '\0') {
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),fVar3);
  }
  else {
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
  }
  fVar3 = F32HI(dVar5);
  if (cVar9 == '\0' && fVar3 < SUB84(dVar5,0)) {
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(fVar3,*(undefined4 *)(unsigned)(ar4 + 0x38));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x38);
    }
    if (cVar9 == '\0') {
      fVar3 = F32LO(dVar5) + fVar4;
    }
    else {
      fVar3 = SUB84(dVar5 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D((*(float *)(fr0_ - 0x34)),fVar3);
    }
    else {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),(*(float *)(fr0_ - 0x34)));
    }
    fVar3 = F32HI(dVar5);
    if (cVar9 != '\0' || fVar3 <= SUB84(dVar5,0)) {
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(fVar3,(*(float *)(fr0_ - 0x34)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x30)),(*(float *)(fr0_ - 0x34)));
      }
      if (cVar9 == '\0') {
        fVar4 = F32LO(dVar5) - fVar4;
      }
      else {
        fVar4 = SUB84(dVar5 - dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),fVar4);
      }
      else {
        dVar5 = *(double *)(unsigned)(ar4 + 0x38);
      }
      if (cVar9 == '\0') {
        fVar4 = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x3dcccccd,fVar4);
      }
      else {
        dVar5 = 6.28623017172232e-312;
      }
      if (cVar9 == '\0') {
        fVar4 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),fVar4);
      }
      else {
        dVar5 = *(double *)(unsigned)(ar4 + 0x38);
      }
      if (cVar9 == '\0') {
        fVar4 = F32HI(dVar5);
        dVar5 = CONCAT44D(fVar4,F32LO(dVar5) + fVar4);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
      if (cVar10 == '\0') {
        *(int *)(unsigned)(ar4 + 0x38) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x38) = in_xd0;
      }
    }
  }
  else {
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(fVar3,(*(undefined4 *)(fr0_ - 0x24)));
    }
    else {
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
    }
    if (cVar9 == '\0') {
      fVar4 = F32LO(dVar5) + fVar4;
    }
    else {
      fVar4 = SUB84(dVar5 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),fVar4);
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 0x38);
    }
    if (cVar9 == '\0') {
      fVar4 = F32LO(dVar5) - F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(0x3dcccccd,fVar4);
    }
    else {
      dVar5 = 6.28623017172232e-312;
    }
    if (cVar9 == '\0') {
      fVar4 = F32LO(dVar5) * F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),fVar4);
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 0x38);
    }
    if (cVar9 == '\0') {
      fVar4 = F32HI(dVar5);
      dVar5 = CONCAT44D(fVar4,F32LO(dVar5) + fVar4);
    }
    else {
      dVar5 = dVar5 + dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(ar4 + 0x38) = SUB84(dVar5,0);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x38) = in_xd0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,ar4 + 0x30,a6,ar7));
  if (cVar10 == '\0') {
    in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),(int)(D2U(dVar5) >> 0x20));
    dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),SUB84(dVar5,0));
    dVar5 = in_xd12;
  }
  else {
    dVar6 = *(double *)(unsigned)(ar4 + 0x34);
  }
  fVar4 = F32HI(dVar7);
  if (cVar9 == '\0') {
    fVar3 = F32HI(dVar6) - fVar4;
    dVar6 = CONCAT44D(fVar3,SUB84(dVar6,0));
    bVar8 = SUB84(in_dr12,0) < fVar3;
  }
  else {
    dVar6 = dVar6 - dVar7;
    bVar8 = in_dr12 < dVar6;
  }
  if (bVar8) {
    if (cVar10 == '\0') {
      fVar4 = *(float *)(unsigned)(ar4 + 0x34);
      fVar3 = (*(float *)(fr0_ - 0x38));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x34);
      fVar4 = (*(float *)(fr0_ - 0x38));
      fVar3 = (*(float *)(fr0_ - 0x34));
    }
    if (cVar9 != '\0' || fVar3 <= fVar4) {
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),(*(float *)(fr0_ - 0x38)));
      }
      else {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x34)),(*(float *)(fr0_ - 0x38)));
        dVar7 = *(double *)(unsigned)(ar4 + 0x34);
      }
      if (cVar9 == '\0') {
        fVar4 = F32LO(dVar7) - F32HI(dVar7);
      }
      else {
        fVar4 = SUB84(dVar7 - dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(0x3dcccccd,fVar4);
      }
      else {
        dVar7 = 6.28623017172232e-312;
      }
      if (cVar9 == '\0') {
        fVar4 = F32LO(dVar7) * F32HI(dVar7);
      }
      else {
        fVar4 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),fVar4);
      }
      else {
        dVar7 = *(double *)(unsigned)(ar4 + 0x34);
      }
      if (cVar9 == '\0') {
        fVar4 = F32LO(dVar7) + F32HI(dVar7);
      }
      else {
        fVar4 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar10 == '\0') {
        *(float *)(unsigned)(ar4 + 0x34) = fVar4;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x34) = in_xd0;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),F32LO(in_dr12) + fVar4);
    }
    else {
      in_dr12 = in_dr12 + dVar7;
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),SUB84(dVar6,0));
    }
    else {
      dVar7 = *(double *)(unsigned)(ar4 + 0x34);
    }
    if (cVar9 == '\0') {
      in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),
                                 F32LO(in_dr12) - F32HI(dVar7));
    }
    else {
      in_dr12 = in_dr12 - dVar7;
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(0x3dcccccd,SUB84(dVar7,0));
    }
    else {
      dVar7 = 6.28623017172232e-312;
    }
    if (cVar9 == '\0') {
      in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),
                                 F32LO(in_dr12) * F32HI(dVar7));
    }
    else {
      in_dr12 = in_dr12 * dVar7;
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),SUB84(dVar7,0));
    }
    else {
      dVar7 = *(double *)(unsigned)(ar4 + 0x34);
    }
    if (cVar9 == '\0') {
      fVar4 = F32LO(in_dr12) + F32HI(dVar7);
    }
    else {
      fVar4 = SUB84(in_dr12 + dVar7,0);
    }
    if (cVar10 == '\0') {
      *(float *)(unsigned)(ar4 + 0x34) = fVar4;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x34) = dVar5;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x3c)),0xffffffff,a6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,a6,ar7));
  return uVar2;
}

__asm__(".globl _CAnimal_m7_0ade84\n.set _CAnimal_m7_0ade84, _CAnimal_m7_0ade84_def\n");
//@unit 8c0ae0b0
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
undefined4 FUN_8c0ae0b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ae0b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = (float)*(int *)(unsigned)(ar4 + 0x458) / 1800.0;
  *(float *)(unsigned)(ar4 + 0x438) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b4f4) * fVar3;
  *(float *)(unsigned)(ar4 + 0x43c) = (*(undefined1 *)(unsigned)0x8c13b4f8) * fVar3;
  *(float *)(unsigned)(ar4 + 0x440) = (*(undefined1 *)(unsigned)0x8c13b4fc) * fVar3;
  *(float *)(unsigned)(ar4 + 0x444) = (*(undefined1 *)(unsigned)0x8c13b500) * fVar3;
  iVar1 = *(int *)(unsigned)(ar4 + 0x458);
  *(int *)(unsigned)(ar4 + 0x458) = iVar1 + 1;
  uVar2 = 0x708;
  if (0x708 < iVar1 + 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x458) = 0;
    uVar2 = 0x74;
    *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0x7fffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0ae0b0\n.set _FUN_8c0ae0b0, _FUN_8c0ae0b0_def\n");
//@unit 8c0ae160
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
int FUN_8c0ae160_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ae160";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_Load_CAnimal_LoadG_0284b8(ar4,ar5,ar6,ar7));
  iVar1 = *(int *)(unsigned)(0x460 + ar4);
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0ae544))))
                      (ar5,0x2ee0,ar4 + 0x88c,ar4 + 0x890));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0ae160\n.set _FUN_8c0ae160, _FUN_8c0ae160_def\n");
//@unit 8c0ae1bc
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
undefined4 s_Squid_FreeGraphicResource_0ae1c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Squid_FreeGraphicResource_0ae1c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028afc(ar4,ar5,ar6,ar7));
  if ((*(int *)(unsigned)(0x88c + ar4) != 0) && (*(int *)(unsigned)(0x890 + ar4) != 0)) {
    ar6 = *(undefined4 *)(unsigned)(0x890 + ar4);
    uVar2 = 0x2ee0;
    (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_SQUIDLINE_0ae646(ar5,0x2ee0,ar6,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x9bc,uVar2,ar6,ar7));
  if (iVar1 == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x38c,
                       (&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x39f,1,2));
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4 + 0x9bc,uVar2,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl _s_Squid_FreeGraphicResource_0ae1c0\n.set _s_Squid_FreeGraphicResource_0ae1c0, _s_Squid_FreeGraphicResource_0ae1c0_def\n");
//@unit 8c0ae270
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
undefined4 FUN_8c0ae270_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ae270";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_314_0b58d0(ar4 + 0x53c,ar5,ar6,ar7));
  if (iVar1 != 0) {
    *(undefined4 *)(unsigned)(0x460 + ar4) = 0;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028f60(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0ae270\n.set _FUN_8c0ae270, _FUN_8c0ae270_def\n");
//@unit 8c0ae2b8
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
int FUN_8c0ae2b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ae2b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ccc(ar4,ar5,ar6,ar7));
  iVar1 = *(int *)(unsigned)(0x460 + ar4);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b58dc(ar4 + 0x53c,3,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0ae2b8\n.set _FUN_8c0ae2b8, _FUN_8c0ae2b8_def\n");
//@unit 8c0ae2fc
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
undefined4 s_Sq_Bone_Home_njd_0ae2fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Sq_Bone_Home_njd_0ae2fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  double dVar4;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  *(unsigned *)0x8c2868dc = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c13b504));
  *(unsigned *)0x8c2868e0 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c13b568));
  (*(undefined4 *)(unsigned)(unsigned)0x8c2868e4) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b4dc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2868e8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2868ec) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b4e8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2868f0) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b4e0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2868f4) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b4f0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2868f8) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b4ec);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2868fc) = 7;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286908) = 0x8c286878;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28698c) = 0x8c286cf4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286994) = 0x3f800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2869a0) = CONCAT44(0x3ca3d70a,(*(undefined4 *)(unsigned)(unsigned)0x8c2869a0));
  (*(undefined4 *)(unsigned)(unsigned)0x8c2869a8) = 0x3f4ccccd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2869ac) = 0x43b40000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2869c0) = 0x42100000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286978) = 0x8c286a24;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28697c) = 0x19;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286980) = 0x8c286a94;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286984) = 0x19;
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x10)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), vec3_copy_8c023d8c(0x8c2869d0,((undefined1 *)(fr0_ - 0x10)),ar6,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 44)), object_dtor_delete(((undefined1 *)(fr0_ - 0x10)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x1c)),uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), vec3_copy_8c023d8c(0x8c2869dc,((undefined1 *)(fr0_ - 0x1c)),ar6,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 44)), object_dtor_delete(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x28)),uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), vec3_copy_8c023d8c(0x8c2869e8,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), object_dtor_delete(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  if (cVar6 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2869f8) = CONCAT44((*(undefined1 *)(unsigned)0x8c2869f8),0x43af0000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2869c4) = CONCAT44((*(undefined1 *)(unsigned)0x8c2869c4),0x42c80000);
    dVar4 = CONCAT44D(0x3f99999a,(*(undefined4 *)(unsigned)(unsigned)0x8c2869a0));
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2869f8) = 0xec43af0000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2869c4) = 0xc842c80000;
    dVar4 = -4.2624166816346474e-250;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c2869a0);
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  uVar1 = in_xd0;
  if (cVar6 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2869a0) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c2869a4),fVar3);
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c2869a0);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2869a0) = uVar1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286a08) = 0xffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286a0c) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286a10) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286a14) = 0;
  return 0;
}

__asm__(".globl _s_Sq_Bone_Home_njd_0ae2fc\n.set _s_Sq_Bone_Home_njd_0ae2fc, _s_Sq_Bone_Home_njd_0ae2fc_def\n");
//@unit 8c0ae544
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
int s_GRAPHICS_SQUIDLINE_0ae54a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_SQUIDLINE_0ae54a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0209fc))))
                    (ar4,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b5d8)),*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b4d4)),ar6));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x3bc,
               (&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x297,1,2));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020af4))))
                    (ar4,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b5d8)),*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b4d4)),ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x3dc,
               (&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x297,1,2));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020ef0))))
                    (ar4,(&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x3fe,
                     *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b4d4)),*ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x406,
                       (&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x297,1,2));
  }
  return iVar1;
}

__asm__(".globl _s_GRAPHICS_SQUIDLINE_0ae54a\n.set _s_GRAPHICS_SQUIDLINE_0ae54a, _s_GRAPHICS_SQUIDLINE_0ae54a_def\n");
//@unit 8c0ae640
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
undefined4 s_GRAPHICS_SQUIDLINE_0ae646_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_SQUIDLINE_0ae646";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar4,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b5d8)),*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b4d4)),ar5));
  ar6_00 = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b4d4));
  ar5_00 = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b5d8));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020b68(ar4,ar5_00,ar6_00,ar5));
  if (ar6 != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256670(ar6,ar5_00,ar6_00,ar5));
  }
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_SQUIDLINE_0ae646\n.set _s_GRAPHICS_SQUIDLINE_0ae646, _s_GRAPHICS_SQUIDLINE_0ae646_def\n");
//@unit 8c0ae6a0
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
undefined4 s_Nautilus_0ae6a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Nautilus_0ae6a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  char *ar5_00;
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  ar5_00 = ((undefined1 *)(unsigned)0x8c13ba15);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); strcpy(ar4,((undefined1 *)(unsigned)0x8c13ba15),ar6,ar7); });
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x18) = 2;
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0x44a28000;
    *(undefined4 *)(unsigned)(ar4 + 0x20) = 0x43480000;
    *(undefined4 *)(unsigned)(ar4 + 0x24) = 0x44048000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x1c) = 0x4348000044a28000;
    *(undefined8 *)(unsigned)(ar4 + 0x20) = 0x4404800043480000;
    *(undefined8 *)(unsigned)(ar4 + 0x24) = 0x8c02a1fc44048000;
  }
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02a1fc(ar4 + 0x2c,ar5_00,ar6,ar7));
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0xc1f00000;
    *(undefined4 *)(unsigned)(ar4 + 0x30) = 0xc2b40000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x2c) = 0xc2b40000c1f00000;
    *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x8c08a9b8c2b40000;
  }
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c08a9b8(ar4 + 0x38,ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 10;
  *(uint *)(unsigned)(ar4 + 0x48) = *(uint *)(unsigned)(ar4 + 0x48) | 0x80000001;
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0ae7a4(ar4 + 0x4c,ar5_00,ar6,ar7));
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)(unsigned)(ar4 + iVar1 + 0xd8) = 0;
  }
  *(undefined1 *)(unsigned)(ar4 + 0xd8) = 1;
  *(undefined1 *)(unsigned)(ar4 + 200) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xcc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xe8) = 1;
  return 0xe8;
}

__asm__(".globl _s_Nautilus_0ae6a4\n.set _s_Nautilus_0ae6a4, _s_Nautilus_0ae6a4_def\n");
//@unit 8c0ae7a4
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
undefined4 FUN_8c0ae7a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ae7a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined4 *)(unsigned)(ar4 + 4) = 6;
  *(undefined4 *)(unsigned)(ar4 + 8) = 0xc;
  *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x10) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x18) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x19) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x20) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x24) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x28) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x2a) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x30) = 0;
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(char *)(unsigned)(iVar1 * 0xc + ar4 + 0x34) = (char)iVar1;
    *(undefined1 *)(unsigned)(iVar1 * 0xc + ar4 + 0x35) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0xc + ar4 + 0x38) = 0;
    *(undefined1 *)(unsigned)(iVar1 * 0xc + ar4 + 0x3c) = 0;
  }
  return 6;
}

__asm__(".globl _FUN_8c0ae7a4\n.set _FUN_8c0ae7a4, _FUN_8c0ae7a4_def\n");
//@unit 8c0ae84c
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
uint FUN_8c0ae84c_def(int ar4,undefined8 *ar5,code *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c0ae84c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  double *pdVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined1 *ar4_00;
  int ar4_01;
  undefined4 uVar5;
  undefined8 *ar5_00;
  code *ar6_00;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  undefined8 in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  iVar6 = 0;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x30)),ar5,ar6,ar7));
  uVar4 = 0;
  for (iVar8 = 0; iVar8 < 10; iVar8 = iVar8 + 1) {
    ar6_00 = (code *)0x4c;
    if (*(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) == 0) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(uVar4,((void *)0x8c014200),0x4c,ar7));
      uVar5 = 0x1e;
      iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,0x1e,ar6_00,ar7));
      if (iVar7 == 0) {
        for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
          uVar5 = 0x8c285974;
          *(undefined1 *)(unsigned)(iVar8 * 0x4c + iVar7 * 4 + -0x73d7a659) = 1;
        }
        *(undefined4 *)(unsigned)(iVar8 * 0x4c + -0x73d7a648) = 10;
        *(undefined4 *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) = 1;
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023de0(((undefined1 *)(fr0_ - 0x3c)),uVar5,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023e04(iVar8 * 0x4c + -0x73d7a668,((undefined1 *)(fr0_ - 0x3c)),ar6_00,ar7));
        ar4_00 = ((undefined1 *)(fr0_ - 0x3c));
        (vsp = ((unsigned long)(fr0_ - 116)), free_if_nonnull_wrap_016ac4(ar4_00,0xffffffff,ar6_00,ar7));
        puVar1 = (undefined8 *)(unsigned)(iVar8 * 0x4c + -0x73d7a68c);
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)puVar1 = *(undefined4 *)(unsigned)ar5;
        }
        else {
          *puVar1 = *ar5;
        }
        puVar1 = (undefined8 *)(unsigned)(iVar8 * 0x4c + -0x73d7a688);
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)puVar1 = *(undefined4 *)(unsigned)((int)ar5 + 4);
        }
        else {
          *puVar1 = *(undefined8 *)(unsigned)((int)ar5 + 4);
        }
        puVar1 = (undefined8 *)(unsigned)(iVar8 * 0x4c + -0x73d7a684);
        ar5_00 = ar5 + 1;
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)puVar1 = *(undefined4 *)(unsigned)ar5_00;
        }
        else {
          *puVar1 = *ar5_00;
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(ar4_00,ar5_00,ar6_00,ar7));
        iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,0x14,ar6_00,ar7));
        if (cVar12 == '\0') {
          dVar10 = CONCAT44D(0x42c80000,(float)iVar7);
        }
        else {
          dVar10 = 7.64472037604589e-312;
        }
        if (cVar11 == '\0') {
          (*(float *)(fr0_ - 0x30)) = F32LO(dVar10) / F32HI(dVar10);
        }
        else {
          (*(float *)(fr0_ - 0x30)) = SUB84(dVar10 / dVar10,0);
        }
        if (cVar12 != '\0') {
          (*(float *)(fr0_ - 0x30)) = (float)in_xd0;
          (*(float *)(fr0_ - 0x2c)) = F32HI(in_xd0);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(((void *)0x8c014200),iVar7,ar6_00,ar7));
        uVar5 = 2;
        iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,2,ar6_00,ar7));
        if (iVar7 == 0) {
          if (cVar12 == '\0') {
            dVar10 = CONCAT44D(0xbf800000,(*(float *)(fr0_ - 0x30)));
          }
          else {
            in_xd0 = CONCAT44((*(float *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
            dVar10 = 6.04234156954332e-312;
          }
          if (cVar11 == '\0') {
            (*(float *)(fr0_ - 0x30)) = F32LO(dVar10) * F32HI(dVar10);
          }
          else {
            (*(float *)(fr0_ - 0x30)) = SUB84(dVar10 * dVar10,0);
          }
          if (cVar12 != '\0') {
            (*(float *)(fr0_ - 0x30)) = (float)in_xd0;
            (*(float *)(fr0_ - 0x2c)) = F32HI(in_xd0);
          }
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(uVar4,uVar5,ar6_00,ar7));
        uVar5 = 0x14;
        iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,0x14,ar6_00,ar7));
        if (cVar12 == '\0') {
          dVar10 = CONCAT44D(0x42c80000,(float)iVar7);
        }
        else {
          dVar10 = 7.64472037604589e-312;
        }
        if (cVar11 == '\0') {
          (*(float *)(fr0_ - 0x2c)) = F32LO(dVar10) / F32HI(dVar10);
        }
        else {
          (*(float *)(fr0_ - 0x2c)) = SUB84(dVar10 / dVar10,0);
        }
        if (cVar12 != '\0') {
          (*(float *)(fr0_ - 0x2c)) = (float)in_xd0;
          (*(float *)(fr0_ - 0x28)) = F32HI(in_xd0);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(uVar4,uVar5,ar6_00,ar7));
        uVar5 = 2;
        iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,2,ar6_00,ar7));
        if (iVar7 == 0) {
          if (cVar12 == '\0') {
            dVar10 = CONCAT44D(0xbf800000,(*(float *)(fr0_ - 0x2c)));
          }
          else {
            in_xd0 = CONCAT44((*(float *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
            dVar10 = 6.04234156954332e-312;
          }
          if (cVar11 == '\0') {
            (*(float *)(fr0_ - 0x2c)) = F32LO(dVar10) * F32HI(dVar10);
          }
          else {
            (*(float *)(fr0_ - 0x2c)) = SUB84(dVar10 * dVar10,0);
          }
          if (cVar12 != '\0') {
            (*(float *)(fr0_ - 0x2c)) = (float)in_xd0;
            (*(float *)(fr0_ - 0x28)) = F32HI(in_xd0);
          }
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(uVar4,uVar5,ar6_00,ar7));
        uVar5 = 100;
        iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,100,ar6_00,ar7));
        if (cVar12 == '\0') {
          dVar10 = CONCAT44D(0x42c80000,(float)iVar7);
        }
        else {
          dVar10 = 7.64472037604589e-312;
        }
        if (cVar11 == '\0') {
          fVar9 = F32LO(dVar10) / F32HI(dVar10);
        }
        else {
          fVar9 = SUB84(dVar10 / dVar10,0);
        }
        (*(float *)(fr0_ - 0x28)) = fVar9;
        if (cVar12 != '\0') {
          (*(float *)(fr0_ - 0x28)) = (float)in_xd0;
          (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(uVar4,uVar5,ar6_00,ar7));
        uVar5 = 2;
        iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,2,ar6_00,ar7));
        if (iVar7 == 0) {
          if (cVar12 == '\0') {
            dVar10 = CONCAT44D(0xbf800000,(*(float *)(fr0_ - 0x28)));
          }
          else {
            in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
            dVar10 = 6.04234156954332e-312;
          }
          if (cVar11 == '\0') {
            fVar9 = F32LO(dVar10) * F32HI(dVar10);
          }
          else {
            fVar9 = SUB84(dVar10 * dVar10,0);
          }
          (*(float *)(fr0_ - 0x28)) = fVar9;
          if (cVar12 != '\0') {
            (*(float *)(fr0_ - 0x28)) = (float)in_xd0;
            (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
          }
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); FUN_8c02ace4(ar4 + 0x53c,uVar5,ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(iVar8 * 0x4c + -0x73d7a67c,((undefined1 *)(fr0_ - 0x4c)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6_00,ar7));
        pfVar3 = &(*(float *)(fr0_ - 0x30));
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023aa0(iVar8 * 0x4c + -0x73d7a67c,pfVar3,ar6_00,ar7));
        iVar7 = iVar8 * 0x4c + -0x73d7a67c;
        (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length(iVar7,pfVar3,ar6_00,ar7));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(iVar7,pfVar3,ar6_00,ar7));
        uVar5 = 10;
        iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,10,ar6_00,ar7));
        pdVar2 = (double *)(unsigned)(iVar8 * 0x4c + -0x73d7a66c);
        if (cVar11 == '\0') {
          dVar10 = CONCAT44D((float)iVar7,fVar9);
        }
        else {
          dVar10 = (double)iVar7;
        }
        if (cVar12 == '\0') {
          *(int *)(unsigned)pdVar2 = (int)(D2U(dVar10) >> 0x20);
        }
        else {
          *pdVar2 = dVar10;
        }
        ar4_01 = ar4 + 0x53c;
        iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), get_field_314_0b58d0(ar4_01,uVar5,ar6_00,ar7));
        if (iVar7 < 1) {
          ar6_00 = ((void *)0x8c014200);
          uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(ar4_01,iVar7,((void *)0x8c014200),ar7));
          uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,3,ar6_00,ar7));
          *(undefined4 *)(unsigned)(iVar8 * 0x4c + -0x73d7a644) = uVar4;
        }
        else {
          uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(ar4_01,((void *)0x8c014200),ar6_00,ar7));
          ar6_00 = (code *)(vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,6,ar6_00,ar7));
          *(unsigned *)(unsigned)(iVar8 * 0x4c + -0x73d7a644) = ar6_00;
          iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), get_field_124_027930(ar4 + 0x53c,0x53c,ar6_00,ar7));
          if ((iVar7 == 2) && (*(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a644) < 3)) {
            iVar7 = iVar8 * 0x4c;
            ar7 = iVar7 + -0x73d7a68c;
            ar6_00 = (code *)(*(int *)(unsigned)(iVar7 + -0x73d7a644) + 3);
            *(unsigned *)(unsigned)(iVar7 + -0x73d7a644) = ar6_00;
          }
        }
      }
    }
    uVar4 = 0x4c;
    if (*(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) == 1) break;
  }
  for (iVar8 = 0; iVar8 < 10; iVar8 = iVar8 + 1) {
    if (0 < *(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c)) {
      if (*(int *)(unsigned)(ar4 + 0x1710) < (int)ar6) {
        *(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) =
             *(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) + *(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a648);
      }
      else if (1 < *(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c)) {
        ar6_00 = (code *)0x40;
        *(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) =
             *(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) + *(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a648);
      }
      pfVar3 = (float *)(unsigned)(iVar8 * 0x4c + -0x73d7a668);
      puVar1 = (undefined8 *)(unsigned)(iVar8 * 0x4c + -0x73d7a668);
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)puVar1);
      }
      else {
        in_xd0 = *puVar1;
        dVar10 = 6.71062932991538e-312;
      }
      if (cVar11 == '\0') {
        fVar9 = F32LO(dVar10) + F32HI(dVar10);
      }
      else {
        fVar9 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *pfVar3 = fVar9;
      }
      else {
        *(undefined8 *)(unsigned)pfVar3 = in_xd0;
      }
      pfVar3 = (float *)(unsigned)(iVar8 * 0x4c + -0x73d7a664);
      puVar1 = (undefined8 *)(unsigned)(iVar8 * 0x4c + -0x73d7a664);
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)puVar1);
      }
      else {
        in_xd0 = *puVar1;
        dVar10 = 6.71062932991538e-312;
      }
      if (cVar11 == '\0') {
        fVar9 = F32LO(dVar10) + F32HI(dVar10);
      }
      else {
        fVar9 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *pfVar3 = fVar9;
      }
      else {
        *(undefined8 *)(unsigned)pfVar3 = in_xd0;
      }
      pfVar3 = (float *)(unsigned)(iVar8 * 0x4c + -0x73d7a660);
      puVar1 = (undefined8 *)(unsigned)(iVar8 * 0x4c + -0x73d7a660);
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)puVar1);
      }
      else {
        in_xd0 = *puVar1;
        dVar10 = 6.71062932991538e-312;
      }
      if (cVar11 == '\0') {
        fVar9 = F32LO(dVar10) + F32HI(dVar10);
      }
      else {
        fVar9 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *pfVar3 = fVar9;
      }
      else {
        *(undefined8 *)(unsigned)pfVar3 = in_xd0;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_scale(iVar8 * 0x4c + -0x73d7a67c,iVar8 * 0x4c + -0x73d7a66c,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023aa0(iVar8 * 0x4c + -0x73d7a68c,((undefined1 *)(fr0_ - 0x5c)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6_00,ar7));
      if (0xfe < *(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c)) {
        *(undefined4 *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) = 0xff;
        *(undefined4 *)(unsigned)(iVar8 * 0x4c + -0x73d7a648) = 0xfffffff6;
      }
      if (*(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) < 1) {
        *(undefined4 *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) = 0;
        *(undefined4 *)(unsigned)(iVar8 * 0x4c + -0x73d7a648) = 10;
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023de0(((undefined1 *)(fr0_ - 0x68)),0x4c,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023e04(iVar8 * 0x4c + -0x73d7a668,((undefined1 *)(fr0_ - 0x68)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 116)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7));
      }
      for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
        *(char *)(unsigned)(iVar8 * 0x4c + iVar7 * 4 + -0x73d7a659) =
             (char)*(undefined4 *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c);
      }
    }
  }
  for (iVar8 = 0; iVar8 < 10; iVar8 = iVar8 + 1) {
    if (*(int *)(unsigned)(ar4 + 0x1710) < (int)ar6) {
      ar7 = 4;
      ar6_00 = (code *)(iVar8 * 0x4c + -0x73d7a65c);
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c016464(iVar8 * 0x44 + ar4 + 0x9c4,((undefined1 *)(unsigned)0x8c13b474),ar6_00,4));
    }
    else if (*(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) < 2) {
      iVar6 = iVar6 + 1;
      *(undefined4 *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) = 0;
    }
    else {
      ar7 = 4;
      ar6_00 = (code *)(iVar8 * 0x4c + -0x73d7a65c);
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c016464(iVar8 * 0x44 + ar4 + 0x9c4,((undefined1 *)(unsigned)0x8c13b474),ar6_00,4));
    }
  }
  *(int *)(unsigned)(ar4 + 0x1710) = *(int *)(unsigned)(ar4 + 0x1710) + 1;
  if (iVar6 == 10) {
    *(undefined4 *)(unsigned)(ar4 + 0x170c) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x1710) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(&(*(float *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7));
  return (uint)(iVar6 == 10);
}

__asm__(".globl _FUN_8c0ae84c\n.set _FUN_8c0ae84c, _FUN_8c0ae84c_def\n");
//@unit 8c0af2b8
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
int FUN_8c0af2b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0af2b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  
  (vsp = ((unsigned long)(fr0_ - 24)), Vec3_ctor_zero(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c023dac(ar4 + 0x24,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x14;
  *(undefined4 *)(unsigned)(ar4 + 0x48) = 0;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c023de0(((undefined1 *)(fr0_ - 0x14)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c023e04(ar4 + 0x24,((undefined1 *)(fr0_ - 0x14)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x30) = 0xff2f2f2f;
  *(undefined4 *)(unsigned)(ar4 + 0x34) = 0xff2f2f2f;
  *(undefined4 *)(unsigned)(ar4 + 0x38) = 0xff2f2f2f;
  *(undefined4 *)(unsigned)(ar4 + 0x3c) = 0xff2f2f2f;
  *(undefined1 *)(unsigned)(ar4 + 0x33) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x37) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x3b) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x3f) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0af2b8\n.set _FUN_8c0af2b8, _FUN_8c0af2b8_def\n");
//@unit 8c0af368
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
int FUN_8c0af368_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0af368";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016ac4(ar4 + 0x24,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x10,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0af368\n.set _FUN_8c0af368, _FUN_8c0af368_def\n");
//@unit 8c0af3c4
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
undefined4 FUN_8c0af3c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0af3c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  
  cVar5 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1262d0),ar5,ar6,ar7));
  uVar3 = 0x8c285938;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285938,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1262e0),pcVar2,uVar3,ar7));
  uVar3 = 0x8c285944;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285944,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1262f0),pcVar2,uVar3,ar7));
  uVar3 = 0x8c285950;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285950,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126300),pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28595c,ar7));
  if (cVar5 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126310) = CONCAT44((*(undefined1 *)(unsigned)0x8c126314),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126310) = 0xffffffff00800000;
  }
  uVar1 = 0x4c;
  ({ unsigned long t0_ = (unsigned long)(10); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c285974,((void *)0x8c0af2b8),((void *)0x8c0af368),0x4c); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0afa2c),0x8c285968,uVar1));
  uVar4 = 0x4c;
  ({ unsigned long t0_ = (unsigned long)(0x28); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c285c78,((void *)0x8c0af2b8),((void *)0x8c0af368),0x4c); });
  uVar1 = 0x8c285c6c;
  pcVar2 = ((void *)0x8c0afa08);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0afa08),0x8c285c6c,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02452c(0x8c2868d8,pcVar2,uVar1,uVar4));
  uVar3 = 0x8c2868cc;
  pcVar2 = ((void *)0x8c03a4ac);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a4ac),0x8c2868cc,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c024824(((undefined1 *)(unsigned)0x8c286a08),pcVar2,uVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a454),0x8c2869fc,uVar4));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x19); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c286a24,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0af9e4),0x8c286a18,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x19); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c286a94,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0af9c0),0x8c286a88,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(3); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c286b04,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0af99c),0x8c286af8,uVar1));
  uVar4 = 4;
  ({ unsigned long t0_ = (unsigned long)(3); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c286b1c,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  uVar1 = 0x8c286b10;
  pcVar2 = ((void *)0x8c0af978);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0af978),0x8c286b10,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286b34,pcVar2,uVar1,uVar4));
  uVar3 = 0x8c286b28;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286b28,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286b50,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286b44;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286b44,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286b6c,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286b60;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286b60,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286b88,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286b7c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286b7c,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286ba4,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286b98;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286b98,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286bc0,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286bb4;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286bb4,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286bdc,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286bd0;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286bd0,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286bf8,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286bec;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286bec,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286c14,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286c08;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286c08,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286c30,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286c24;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286c24,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286c4c,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286c40;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286c40,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286c68,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286c5c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286c5c,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286c84,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286c78;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286c78,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286ca0,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286c94;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286c94,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286cbc,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286cb0;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286cb0,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286cd8,pcVar2,uVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286ccc,uVar4));
  uVar3 = 0x8c286b6c;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c286b88); unsigned long t1_ = (unsigned long)(0x8c286ba4); unsigned long t2_ = (unsigned long)(0x8c286bc0); unsigned long t3_ = (unsigned long)(
                       0x8c286bdc); unsigned long t4_ = (unsigned long)(0x8c286bf8); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c286cf4,0x8c286b34,0x8c286b50,0x8c286b6c); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c286ce8,uVar3));
  return uVar1;
}

__asm__(".globl _FUN_8c0af3c4\n.set _FUN_8c0af3c4, _FUN_8c0af3c4_def\n");
//@unit 8c0af978
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
undefined4 FUN_8c0af978_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0af978";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c286b1c,((void *)0x8c03a3dc),4,3); });
  return uVar1;
}

__asm__(".globl _FUN_8c0af978\n.set _FUN_8c0af978, _FUN_8c0af978_def\n");
//@unit 8c0af99c
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
undefined4 FUN_8c0af99c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0af99c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c286b04,((void *)0x8c0247b0),4,3); });
  return uVar1;
}

__asm__(".globl _FUN_8c0af99c\n.set _FUN_8c0af99c, _FUN_8c0af99c_def\n");
//@unit 8c0af9c0
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
undefined4 FUN_8c0af9c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0af9c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c286a94,((void *)0x8c03a3dc),4,0x19); });
  return uVar1;
}

__asm__(".globl _FUN_8c0af9c0\n.set _FUN_8c0af9c0, _FUN_8c0af9c0_def\n");
//@unit 8c0af9e4
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
undefined4 FUN_8c0af9e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0af9e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c286a24,((void *)0x8c0247b0),4,0x19); });
  return uVar1;
}

__asm__(".globl _FUN_8c0af9e4\n.set _FUN_8c0af9e4, _FUN_8c0af9e4_def\n");
//@unit 8c0afa08
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
undefined4 FUN_8c0afa08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0afa08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c285c78,((void *)0x8c0af368),0x4c,0x28); });
  return uVar1;
}

__asm__(".globl _FUN_8c0afa08\n.set _FUN_8c0afa08, _FUN_8c0afa08_def\n");
//@unit 8c0afa2c
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
undefined4 FUN_8c0afa2c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0afa2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c285974,((void *)0x8c0af368),0x4c,10); });
  return uVar1;
}

__asm__(".globl _FUN_8c0afa2c\n.set _FUN_8c0afa2c, _FUN_8c0afa2c_def\n");
//@unit 8c0afa50
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
undefined4 * FUN_8c0afa50_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0afa50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030fa0(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12b2ac));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x224,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero((int)ar4 + 0x234,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c033954((int)ar4 + 0x248,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x2bc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x2d4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x2e4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x2f4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x304,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x338,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0afb1c(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c0afa50\n.set _FUN_8c0afa50, _FUN_8c0afa50_def\n");
//@unit 8c0afb1c
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
undefined4 FUN_8c0afb1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0afb1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint extraout_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  *(undefined4 *)(unsigned)(ar4 + 0x31c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x314) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x324) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031748(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x328) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x32c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x220) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x240) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x334) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x334) = (ulonglong)extraout_fr1;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_clear(ar4 + 0x338,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x348) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286dec) = 0;
  *(undefined ***)(unsigned)(ar4 + 0x1c8) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13ba24);
  *(undefined4 *)(unsigned)(ar4 + 0x1cc) = 9;
  return 0x1cc;
}

__asm__(".globl _FUN_8c0afb1c\n.set _FUN_8c0afb1c, _FUN_8c0afb1c_def\n");
//@unit 8c0afbcc
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
undefined4 * Class_12b2ac_m0_0afbcc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b2ac_m0_0afbcc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12b2ac);
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xce,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xc1,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xbd,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xb9,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xb5,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xaf,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_033978(ar4 + 0x92,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x8d,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x89,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129cbc_m0_0312f4(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12b2ac_m0_0afbcc\n.set _Class_12b2ac_m0_0afbcc, _Class_12b2ac_m0_0afbcc_def\n");
//@unit 8c0afcc0
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
undefined4 Class_12b2ac_m6_0afcc0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b2ac_m6_0afcc0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b68(ar4,0x8c286dbc,ar6,ar7));
  *(undefined4 *)(unsigned)(0x128 + ar4) = ar5;
  if (1 < *(int *)(unsigned)(0x314 + ar4)) {
    ar7 = 0;
    ar6 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033a8c))))
              (ar4 + 0xb0,0xe,0xffffffff,0));
  }
  uVar3 = 0x12;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x12,ar6,ar7));
  piVar2 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar1,uVar3,ar6,ar7));
  uVar1 = 0;
  if (*(int *)(unsigned)(*piVar2 + 0x18) != 0) {
    uVar3 = 0x12;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x12,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar1,uVar3,ar6,ar7));
    uVar5 = 1;
    puVar4 = (&(*(undefined1 *)(unsigned)0x8c13ba4c));
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar1,(&(*(undefined1 *)(unsigned)0x8c13ba4c)),1));
    uVar3 = 0x13;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x13,puVar4,uVar5));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar1,uVar3,puVar4,uVar5));
    uVar5 = 1;
    puVar4 = (&(*(undefined1 *)(unsigned)0x8c13ba4c)) + 0x18;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar1,puVar4,1));
    uVar3 = 0x14;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x14,puVar4,uVar5));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar1,uVar3,puVar4,uVar5));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar1,(&(*(undefined1 *)(unsigned)0x8c13ba4c)) + 0x30,1));
  }
  return uVar1;
}

__asm__(".globl _Class_12b2ac_m6_0afcc0\n.set _Class_12b2ac_m6_0afcc0, _Class_12b2ac_m6_0afcc0_def\n");
//@unit 8c0afddc
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
int Class_12b2ac_m5_0afddc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b2ac_m5_0afddc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 in_dr0 = 0;
  char cVar4;
  
  cVar4 = '\0';
  if (*(int *)(unsigned)(ar4 + 300) == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_10_031590(ar4 + 0xb0,ar5,ar6,ar7));
    uVar3 = 0;
    uVar2 = 0xffffffff;
    ar5_00 = iVar1 + -1;
    (vsp = ((unsigned long)(fr0_ - 32)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_00,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 32)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,uVar2,uVar3));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c032ab0(ar4,ar5_00,uVar2,uVar3));
    (*(undefined8 *)(fr0_ - 0x10)) = in_dr0;
    if (cVar4 == '\0') {
      (*(undefined8 *)(fr0_ - 0x10)) = CONCAT44(iVar1,(int)((ulonglong)in_dr0 >> 0x20));
    }
    iVar1 = 0x1c;
    if (cVar4 == '\0') {
      *(int *)(unsigned)(ar4 + 0x34c) = (int)(*(undefined8 *)(fr0_ - 0x10));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x34c) = (*(undefined8 *)(fr0_ - 0x10));
    }
  }
  else if (*(int *)(unsigned)(ar4 + 300) == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5,ar6,ar7));
    if (iVar1 == 7) {
      uVar3 = 100;
      uVar2 = 0;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), rand_range(ar4,0,100,ar7));
      if (iVar1 < 0x1f) {
        iVar1 = 300;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c032ab0(ar4,uVar2,uVar3,ar7));
        (*(undefined8 *)(fr0_ - 0x1c)) = in_dr0;
        if (cVar4 == '\0') {
          (*(undefined8 *)(fr0_ - 0x1c)) = CONCAT44(iVar1,(int)((ulonglong)in_dr0 >> 0x20));
        }
        iVar1 = 0x10;
        if (cVar4 == '\0') {
          *(int *)(unsigned)(ar4 + 0x34c) = (int)(*(undefined8 *)(fr0_ - 0x1c));
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x34c) = (*(undefined8 *)(fr0_ - 0x1c));
        }
      }
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7));
    if (iVar1 == 1) {
      iVar1 = 300;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + -1;
    }
  }
  return iVar1;
}

__asm__(".globl _Class_12b2ac_m5_0afddc\n.set _Class_12b2ac_m5_0afddc, _Class_12b2ac_m5_0afddc_def\n");
//@unit 8c0aff3c
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
undefined4 Class_12b2ac_m1_0aff3c_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b2ac_m1_0aff3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 356; for (int i_ = 0; i_ < 356; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *ar5_00;
  int iVar4;
  double in_dr0 = 0;
  double dVar5;
  double dVar6;
  float fVar8;
  double in_dr2 = 0;
  double in_dr14 = 0;
  undefined8 in_xd0 = 0;
  double in_xd14 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  float fVar7;
  
  cVar11 = '\0';
  cVar10 = '\0';
  *(undefined4 *)(unsigned)(ar4 + 0x240) = 0;
  puVar3 = ar5;
  if (*(int *)(unsigned)(ar4 + 0x124) == 5) {
    (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c03207c(ar4,ar5,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c03207c(ar4,ar5,ar6,ar7));
  }
  if (*(int *)(unsigned)(ar4 + 0x124) == 8) {
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x30)),puVar3,ar6,ar7));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c023cd4(ar4 + 0x14,((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
    ar5_00 = (code *)0x0;
    if (iVar4 != 0) {
      (vsp = ((unsigned long)(fr0_ - 356)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x3c)),ar4 + 0x14c,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x3c)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 356)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x4c)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 356)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 356)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x58)),ar4 + 0x14c,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); FUN_8c023484(ar4 + 0x80,((undefined1 *)(fr0_ - 0x58)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 356)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x68)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 356)), object_dtor_delete(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6,ar7));
      ar5_00 = ((void *)0x8c02a1fc);
      (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c02a1fc(ar4 + 0x14c,((void *)0x8c02a1fc),ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 356)), vec3_clear(ar4 + 0x13c,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c031700(ar4,ar5_00,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 356)), Class_129cbc_m1_031598(ar4,ar5,ar6,ar7));
  }
  if ((ar5[4] == 3) || (*(int *)(unsigned)(ar4 + 0x68) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c0b5344(ar4,ar5[4],ar6,ar7));
    uVar1 = 1;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x160))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 356)); FUN_8c02f2c0(*ar5,1,ar6,ar7); });
    if (*(int *)(unsigned)(ar4 + 0x124) != 2) {
      uVar1 = *(undefined4 *)(unsigned)(ar5[1] + 4);
      (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c031ab4(ar4,uVar1,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c0324ac(ar4,uVar1,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x78)),ar4 + 0x90,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x98))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x88)),ar4 + 0x6c,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa8))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x98)),ar4 + 0x13c,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb8))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xa8)),ar4 + 0x338,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_assign(ar4 + 4,((undefined1 *)(fr0_ - 0xb8)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6,ar7));
    iVar4 = -1;
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6,ar7));
  }
  else {
    ar7 = ar5[6];
    ar6 = ar5[3];
    uVar1 = (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c0b0784(ar4,*ar5,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x160))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 356)); FUN_8c02f2c0(*ar5,uVar1,ar6,ar7); });
    uVar1 = *(undefined4 *)(unsigned)(ar5[1] + 4);
    (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c031ab4(ar4,uVar1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c0324ac(ar4,uVar1,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xc8)),ar4 + 0x90,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe8))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xd8)),ar4 + 0x6c,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf8))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xe8)),ar4 + 0x13c,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x108))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xf8)),ar4 + 0x338,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_assign(ar4 + 4,((undefined1 *)(fr0_ - 0x108)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0x108)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6,ar7));
    uVar1 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), vec3_clear(ar4 + 0x338,uVar1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x20)),uVar1,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x118))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 4,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x118)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0x118)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],*(undefined4 *)(unsigned)(uint)ar5[1],ar6,ar7));
    if (cVar11 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20))
      ;
      in_dr0 = in_xd14;
    }
    if (((*(int *)(unsigned)(ar4 + 0x124) != 8) && (*(int *)(unsigned)(ar4 + 0x124) != 5)) &&
       (*(int *)(unsigned)(ar4 + 0x124) != 6)) {
      if (cVar11 == '\0') {
        in_dr2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),SUB84(in_dr2,0));
        dVar5 = CONCAT44D(SUB84(in_dr14,0),0x42100000);
      }
      else {
        in_dr2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
        in_xd0 = 0x4000000042100000;
        dVar5 = in_dr0;
      }
      if (cVar10 == '\0') {
        fVar7 = F32HI(dVar5) + F32LO(dVar5);
        dVar5 = CONCAT44D(fVar7,SUB84(dVar5,0));
        bVar9 = F32HI(in_dr2) < fVar7;
      }
      else {
        dVar5 = dVar5 + dVar5;
        bVar9 = in_dr2 < dVar5;
      }
      if (bVar9) {
        if (cVar11 == '\0') {
          dVar5 = CONCAT44D(0x42100000,SUB84(dVar5,0));
        }
        else {
          dVar5 = 2.0000004922039807;
        }
        if (cVar10 == '\0') {
          in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                     F32LO(in_dr14) + F32HI(dVar5));
        }
        else {
          in_dr14 = in_dr14 + dVar5;
        }
        if (cVar11 == '\0') {
          dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),SUB84(dVar5,0));
        }
        else {
          dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
        }
        if (cVar10 == '\0') {
          in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                     F32LO(in_dr14) - F32HI(dVar5));
        }
        else {
          in_dr14 = in_dr14 - dVar5;
        }
        if (cVar11 == '\0') {
          dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 8),SUB84(dVar5,0));
        }
        else {
          dVar5 = *(double *)(unsigned)(ar4 + 8);
        }
        if (cVar10 == '\0') {
          fVar7 = F32LO(in_dr14) + F32HI(dVar5);
        }
        else {
          fVar7 = SUB84(in_dr14 + dVar5,0);
        }
        if (cVar11 == '\0') {
          *(float *)(unsigned)(ar4 + 8) = fVar7;
        }
        else {
          *(double *)(unsigned)(ar4 + 8) = in_dr0;
        }
      }
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),SUB84(in_dr2,0));
      dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      bVar9 = F32HI(dVar5) < F32LO(dVar6) * F32HI(dVar6)
      ;
    }
    else {
      bVar9 = dVar5 < dVar6 * dVar6;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar6) * F32HI(dVar6);
      }
      else {
        fVar7 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),fVar7);
      }
      else {
        dVar6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar6) - F32HI(dVar6);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar6,0);
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 4),fVar7);
      }
      else {
        dVar6 = *(double *)(unsigned)(ar4 + 4);
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar6) + F32HI(dVar6);
      }
      else {
        fVar7 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar11 == '\0') {
        *(float *)(unsigned)(ar4 + 4) = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 4) = in_xd0;
      }
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(uint)ar5[3],SUB84(dVar5,0));
      dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      dVar5 = *(double *)(unsigned)(uint)ar5[3];
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      fVar7 = F32LO(dVar6) * F32HI(dVar6);
      dVar5 = CONCAT44D(F32HI(dVar5) - fVar7,SUB84(dVar5,0));
    }
    else {
      fVar7 = SUB84(dVar6 * dVar6,0);
      dVar5 = dVar5 - dVar6 * dVar6;
    }
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),fVar7);
    }
    else {
      dVar6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
    }
    if (cVar10 == '\0') {
      bVar9 = F32HI(dVar5) < F32HI(dVar6);
    }
    else {
      bVar9 = dVar5 < dVar6;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(uint)ar5[3],SUB84(dVar5,0));
        dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
      }
      else {
        dVar5 = *(double *)(unsigned)(uint)ar5[3];
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar8 = F32HI(dVar6);
        fVar7 = F32LO(dVar6) * fVar8;
        dVar6 = CONCAT44D(fVar8,fVar7);
        dVar5 = CONCAT44D(F32HI(dVar5) - fVar7,SUB84(dVar5,0));
      }
      else {
        dVar6 = dVar6 * dVar6;
        dVar5 = dVar5 - dVar6;
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),(*(undefined4 *)(fr0_ - 0x20)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar6) - F32HI(dVar5);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar5,0);
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 4),fVar7);
      }
      else {
        dVar6 = *(double *)(unsigned)(ar4 + 4);
      }
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) - F32LO(dVar6),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar6;
      }
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 4) = (int)(D2U(dVar6) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 4) = dVar6;
      }
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar5[3] + 4),SUB84(dVar5,0));
      dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      dVar5 = *(double *)(unsigned)(ar5[3] + 4);
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      fVar7 = F32LO(dVar6) * F32HI(dVar6);
      dVar5 = CONCAT44D(F32HI(dVar5) - fVar7,SUB84(dVar5,0));
    }
    else {
      fVar7 = SUB84(dVar6 * dVar6,0);
      dVar5 = dVar5 - dVar6 * dVar6;
    }
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),fVar7);
    }
    else {
      dVar6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
    }
    if (cVar10 == '\0') {
      bVar9 = F32HI(dVar5) < F32HI(dVar6);
    }
    else {
      bVar9 = dVar5 < dVar6;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar5[3] + 4),SUB84(dVar5,0));
        dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
      }
      else {
        dVar5 = *(double *)(unsigned)(ar5[3] + 4);
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar8 = F32HI(dVar6);
        fVar7 = F32LO(dVar6) * fVar8;
        dVar6 = CONCAT44D(fVar8,fVar7);
        dVar5 = CONCAT44D(F32HI(dVar5) - fVar7,SUB84(dVar5,0));
      }
      else {
        dVar6 = dVar6 * dVar6;
        dVar5 = dVar5 - dVar6;
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),(*(undefined4 *)(fr0_ - 0x1c)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar6) - F32HI(dVar5);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar5,0);
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 8),fVar7);
      }
      else {
        dVar6 = *(double *)(unsigned)(ar4 + 8);
      }
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) - F32LO(dVar6),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar6;
      }
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 8) = (int)(D2U(dVar6) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 8) = dVar6;
      }
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),SUB84(dVar5,0));
      dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      bVar9 = F32HI(dVar5) < F32LO(dVar6) * F32HI(dVar6)
      ;
    }
    else {
      bVar9 = dVar5 < dVar6 * dVar6;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar6) * F32HI(dVar6);
      }
      else {
        fVar7 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),fVar7);
      }
      else {
        dVar6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar6) - F32HI(dVar6);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar6,0);
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0xc),fVar7);
      }
      else {
        dVar6 = *(double *)(unsigned)(ar4 + 0xc);
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar6) + F32HI(dVar6);
      }
      else {
        fVar7 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar11 == '\0') {
        *(float *)(unsigned)(ar4 + 0xc) = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0xc) = in_xd0;
      }
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar5[3] + 8),SUB84(dVar5,0));
      dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      dVar5 = *(double *)(unsigned)(ar5[3] + 8);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      fVar7 = F32LO(dVar6) * F32HI(dVar6);
      dVar5 = CONCAT44D(F32HI(dVar5) - fVar7,SUB84(dVar5,0));
    }
    else {
      fVar7 = SUB84(dVar6 * dVar6,0);
      dVar5 = dVar5 - dVar6 * dVar6;
    }
    if (cVar11 == '\0') {
      in_dr0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),fVar7);
    }
    else {
      in_dr0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
    }
    if (cVar10 == '\0') {
      bVar9 = F32HI(dVar5) < F32HI(in_dr0);
    }
    else {
      bVar9 = dVar5 < in_dr0;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar5[3] + 8),SUB84(dVar5,0));
        dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
      }
      else {
        dVar5 = *(double *)(unsigned)(ar5[3] + 8);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar8 = F32HI(dVar6);
        fVar7 = F32LO(dVar6) * fVar8;
        dVar6 = CONCAT44D(fVar8,fVar7);
        dVar5 = CONCAT44D(F32HI(dVar5) - fVar7,SUB84(dVar5,0));
      }
      else {
        dVar6 = dVar6 * dVar6;
        dVar5 = dVar5 - dVar6;
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),(*(undefined4 *)(fr0_ - 0x18)));
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar6) - F32HI(dVar5);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar5,0);
      }
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0xc),fVar7);
      }
      else {
        in_dr0 = *(double *)(unsigned)(ar4 + 0xc);
      }
      if (cVar10 == '\0') {
        in_dr0 = CONCAT44D(F32HI(in_dr0) - F32LO(in_dr0),
                                  SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 - in_dr0;
      }
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 0xc) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0xc) = in_dr0;
      }
    }
    iVar4 = -1;
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  }
  iVar2 = *(int *)(unsigned)(ar4 + 0x314);
  if ((iVar2 < 5) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x128))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 4,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 356)), Vec3_assign(ar4 + 0x224,((undefined1 *)(fr0_ - 0x128)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0x128)),0xffffffff,ar6,ar7));
      iVar4 = *(int *)(unsigned)(ar5[1] + 4);
      (vsp = ((unsigned long)(fr0_ - 356)), vec3_copy_8c023d8c(ar4 + 0x234,iVar4,ar6,ar7));
      break;
    case 2:
      (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c023aa0(ar4 + 0x224,ar4 + 0x304,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c023bf4(ar4 + 0x304,((undefined1 *)(unsigned)0x8c13ba94),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 356)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],ar4 + 0x224,ar6,ar7));
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x228));
      }
      iVar4 = ar4 + 0x228;
      if (cVar10 != '\0' || SUB84(in_dr0,0) <= F32HI(in_dr0)) {
        (vsp = ((unsigned long)(fr0_ - 356)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],ar4 + 0x224,ar6,ar7));
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x228) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x228) = in_dr0;
        }
        *(int *)(unsigned)(ar4 + 0x314) = *(int *)(unsigned)(ar4 + 0x314) + 1;
        iVar4 = ar4;
      }
      break;
    case 3:
      *(undefined4 *)(unsigned)(ar4 + 0x220) = 1;
      *(int *)(unsigned)(ar4 + 0x314) = *(int *)(unsigned)(ar4 + 0x314) + 1;
      iVar4 = ar4;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 356)), vec3_clear(ar4 + 0x13c,iVar4,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 0;
  return 0x1d4;
}

__asm__(".globl _Class_12b2ac_m1_0aff3c\n.set _Class_12b2ac_m1_0aff3c, _Class_12b2ac_m1_0aff3c_def\n");
