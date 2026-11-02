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
undefined4 s_GRAPHICS_COMMON_0d377a_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_COMMON_0d377a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  int iVar2;
  undefined4 ar4_00;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  undefined4 uVar8;
  double in_dr2 = 0;
  undefined8 in_xd0 = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  ((int *)(fr0_ - 0x1c))[0] = 0;
  (*(undefined4 *)(fr0_ - 0x20)) = 0;
  *(undefined4 *)(unsigned)ar4 = 0x43200000;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13f8cb),((int *)(fr0_ - 0x1c))));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13fa26),0,2)
    ;
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x20));
  pcVar3 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13f8cb),puVar4));
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)(unsigned)0x2;
    pcVar3 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13fa50),0,2)
    ;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); FUN_8c015ad4(ar4 + 2,((int *)(fr0_ - 0x1c))[0],pcVar3,puVar4); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13f8cb),((int *)(fr0_ - 0x1c))));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13fa26),0,2);
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x20));
  pcVar3 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13f8cb),puVar4));
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)(unsigned)0x2;
    pcVar3 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13fa50),0,2);
  }
  iVar1 = ((int *)(fr0_ - 0x1c))[0];
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); FUN_8c015ad4((undefined4 *)(unsigned)((int)ar4 + 0x1c),((int *)(fr0_ - 0x1c))[0],pcVar3,puVar4); });
  iVar5 = 0;
  do {
    uVar8 = SUB84(in_dr2,0);
    if (0x31 < iVar5) {
LAB_8c0d395e:
      (vsp = ((unsigned long)(fr0_ - 64)), s_GRAPHICS_ENV_0d39ea(ar4,ar5,((undefined1 *)(unsigned)0x8c13faaa),puVar4));
      return 1;
    }
    ar4_00 = 0x8c3e7d30;
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0febf0(0x8c3e7d30,iVar1,pcVar3,puVar4));
    if (ar5_00 == 0) {
      puVar4 = (undefined4 *)(unsigned)0x2;
      (vsp = ((unsigned long)(fr0_ - 64)), report_error_message(((undefined1 *)(unsigned)0x8c13f9d6),((undefined1 *)(unsigned)0x8c13fa91),1,2));
      goto LAB_8c0d395e;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), rand(ar4_00,iVar1,pcVar3,puVar4));
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(0x47000000,(float)iVar2);
    }
    else {
      dVar7 = 1.1215622395287742e+23;
    }
    if (cVar9 == '\0') {
      fVar6 = F32LO(dVar7) / F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 / dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(0x44b7c000,fVar6);
    }
    else {
      dVar7 = 7.673846743559028e+21;
    }
    if (cVar9 == '\0') {
      fVar6 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(0x447a0000,fVar6);
    }
    else {
      dVar7 = 2.8924499526186286e+22;
    }
    if (cVar9 == '\0') {
      fVar6 = F32LO(dVar7) + F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar10 == '\0') {
      *(float *)(unsigned)(ar5_00 + 8) = fVar6;
    }
    else {
      *(undefined8 *)(unsigned)(ar5_00 + 8) = in_xd0;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), rand(ar4_00,iVar1,pcVar3,puVar4));
    if (cVar10 == '\0') {
      in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)ar4,uVar8);
    }
    else {
      in_dr2 = *ar4;
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(0x47000000,(float)iVar2);
    }
    else {
      dVar7 = 1.1215622395287742e+23;
    }
    if (cVar9 == '\0') {
      in_dr2 = CONCAT44D(F32HI(in_dr2) *
                                (F32LO(dVar7) / F32HI(dVar7)),SUB84(in_dr2,0)
                               );
    }
    else {
      in_dr2 = in_dr2 * (dVar7 / dVar7);
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(ar5_00 + 0xc) = (int)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar5_00 + 0xc) = in_dr2;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), rand(ar4_00,iVar1,pcVar3,puVar4));
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(0x47000000,(float)iVar1);
    }
    else {
      dVar7 = 1.1215622395287742e+23;
    }
    if (cVar9 == '\0') {
      fVar6 = F32LO(dVar7) / F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 / dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(0x44988000,fVar6);
    }
    else {
      dVar7 = 2.5220161595978547e+17;
    }
    if (cVar9 == '\0') {
      fVar6 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(0x438c0000,fVar6);
    }
    else {
      dVar7 = -1.392258127104201e-250;
    }
    if (cVar9 == '\0') {
      fVar6 = F32LO(dVar7) + F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar10 == '\0') {
      *(float *)(unsigned)(ar5_00 + 0x10) = fVar6;
    }
    else {
      *(undefined8 *)(unsigned)(ar5_00 + 0x10) = in_xd0;
    }
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0fe5f0((undefined4 *)(unsigned)((int)ar4 + 0x34),ar5_00,pcVar3,puVar4));
    iVar5 = iVar5 + 1;
    iVar1 = ar5_00;
  } while( true );
}

__asm__(".globl _s_GRAPHICS_COMMON_0d377a\n.set _s_GRAPHICS_COMMON_0d377a, _s_GRAPHICS_COMMON_0d377a_def\n");
