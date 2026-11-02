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
undefined4 s_GRAPHICS_COMMON_0d33f4_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_COMMON_0d33f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  char *ar5_00;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *ar6_00;
  undefined4 *puVar6;
  undefined4 uVar7;
  float fVar8;
  double dVar9;
  double in_dr2 = 0;
  undefined8 in_xd0 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  ((undefined4 *)(fr0_ - 0x20))[0] = 0;
  (*(undefined4 *)(fr0_ - 0x24)) = 0;
  *(undefined4 *)(unsigned)ar4 = 0x44610000;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13f91e),((undefined1 *)(unsigned)0x8c13f8cb),((undefined4 *)(fr0_ - 0x20))));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13f91e),((undefined1 *)(unsigned)0x8c13f932),0,2);
  }
  puVar6 = &(*(undefined4 *)(fr0_ - 0x24));
  pcVar4 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13f91e),((undefined1 *)(unsigned)0x8c13f8cb),puVar6));
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)(unsigned)0x2;
    pcVar4 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13f91e),((undefined1 *)(unsigned)0x8c13f95c),0,2);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x58))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); FUN_8c015ad4(ar4 + 2,((undefined4 *)(fr0_ - 0x20))[0],pcVar4,puVar6); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13f986),((undefined1 *)(unsigned)0x8c13f8cb),((undefined4 *)(fr0_ - 0x20))));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13f986),((undefined1 *)(unsigned)0x8c13f932),0,2);
  }
  puVar6 = &(*(undefined4 *)(fr0_ - 0x24));
  pcVar4 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13f986),((undefined1 *)(unsigned)0x8c13f8cb),puVar6));
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)(unsigned)0x2;
    pcVar4 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13f986),((undefined1 *)(unsigned)0x8c13f95c),0,2);
  }
  uVar2 = ((undefined4 *)(fr0_ - 0x20))[0];
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x58))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); FUN_8c015ad4((undefined4 *)(unsigned)((int)ar4 + 0x1c),((undefined4 *)(fr0_ - 0x20))[0],pcVar4,puVar6); });
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)((int)ar4 + iVar1 * 0xc + 0x12a70) = 0;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 88)), get_field_4_0253e4((undefined4 *)(unsigned)((int)ar4 + 0x12a5c),uVar2,pcVar4,puVar6));
  uVar7 = 1;
  uVar5 = 0x8c4312a8;
  puVar6 = (undefined4 *)(unsigned)((int)ar4 + 0x12a6c);
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c239170(uVar2,puVar6,0x8c4312a8,1));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 88)), get_field_4_0253e4((undefined4 *)(unsigned)((int)ar4 + 0x12a5c),puVar6,uVar5,uVar7));
  ar6_00 = ((undefined1 *)(unsigned)0x8c13f8cb);
  pcVar4 = ((undefined1 *)(unsigned)0x8c13f997);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c02100c(ar5,((undefined1 *)(unsigned)0x8c13f997),((undefined1 *)(unsigned)0x8c13f8cb),uVar2));
  if (iVar1 == 0) {
    uVar2 = 2;
    ar6_00 = (char *)(unsigned)0x0;
    pcVar4 = ((undefined1 *)(unsigned)0x8c13f9c3);
    report_error_message
              (((undefined1 *)(unsigned)0x8c13f9a3),((undefined1 *)(unsigned)0x8c13f9c3),0,2);
  }
  iVar1 = 0;
  do {
    uVar5 = SUB84(in_dr2,0);
    if (0x59 < iVar1) {
LAB_8c0d3658:
      for (iVar1 = 0; iVar1 < 0x226; iVar1 = iVar1 + 1) {
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d2690((int)ar4 + iVar1 * 0x88 + 0x62c,pcVar4,ar6_00,uVar2));
      }
      for (iVar1 = 0; iVar1 < 0x3c; iVar1 = iVar1 + 1) {
        uVar7 = 1;
        uVar5 = ar6;
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d59a4(ar4,1,ar6,uVar2));
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d5ca8(ar4,uVar7,uVar5,uVar2));
      }
      (vsp = ((unsigned long)(fr0_ - 88)), s_GRAPHICS_ENV_0d39ea(ar4,ar5,((undefined1 *)(unsigned)0x8c13fa03),uVar2));
      return 1;
    }
    uVar7 = 0x8c3e7d30;
    ar5_00 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0febf0(0x8c3e7d30,pcVar4,ar6_00,uVar2));
    if (ar5_00 == (char *)(unsigned)0x0) {
      uVar2 = 2;
      ar6_00 = (char *)(unsigned)0x1;
      pcVar4 = ((undefined1 *)(unsigned)0x8c13f9e4);
      (vsp = ((unsigned long)(fr0_ - 88)), report_error_message(((undefined1 *)(unsigned)0x8c13f9d6),((undefined1 *)(unsigned)0x8c13f9e4),1,2));
      goto LAB_8c0d3658;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 88)), rand(uVar7,pcVar4,ar6_00,uVar2));
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 7.971355902106255e+24;
    }
    if (cVar10 == '\0') {
      fVar8 = F32LO(dVar9) / F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x451a6000,fVar8);
    }
    else {
      dVar9 = 1.2986509772968826e+23;
    }
    if (cVar10 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(unsigned)(ar5_00 + 8) = fVar8;
    }
    else {
      *(undefined8 *)(unsigned)(ar5_00 + 8) = in_xd0;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 88)), rand(uVar7,pcVar4,ar6_00,uVar2));
    if (cVar11 == '\0') {
      in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)ar4,uVar5);
    }
    else {
      in_dr2 = *ar4;
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 7.971355902106255e+24;
    }
    if (cVar10 == '\0') {
      in_dr2 = CONCAT44D(F32HI(in_dr2) *
                                (F32LO(dVar9) / F32HI(dVar9)),SUB84(in_dr2,0)
                               );
    }
    else {
      in_dr2 = in_dr2 * (dVar9 / dVar9);
    }
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar5_00 + 0xc) = (int)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar5_00 + 0xc) = in_dr2;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 88)), rand(uVar7,pcVar4,ar6_00,uVar2));
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 7.971355902106255e+24;
    }
    if (cVar10 == '\0') {
      fVar8 = F32LO(dVar9) / F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x44bb8000,fVar8);
    }
    else {
      dVar9 = -1.3922581301884715e-250;
    }
    if (cVar10 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(unsigned)(ar5_00 + 0x10) = fVar8;
    }
    else {
      *(undefined8 *)(unsigned)(ar5_00 + 0x10) = in_xd0;
    }
    (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0fe5f0((undefined4 *)(unsigned)((int)ar4 + 0x34),ar5_00,ar6_00,uVar2));
    iVar1 = iVar1 + 1;
    pcVar4 = ar5_00;
  } while( true );
}

__asm__(".globl _s_GRAPHICS_COMMON_0d33f4\n.set _s_GRAPHICS_COMMON_0d33f4, _s_GRAPHICS_COMMON_0d33f4_def\n");
