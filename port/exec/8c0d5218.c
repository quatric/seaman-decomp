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
undefined4 s_GRAPHICS_ENV_0d5220_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0d5220";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 ar4_00;
  undefined4 ***ar5_00;
  char *pcVar4;
  double *pdVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined4 **ppuVar8;
  double dVar9;
  double in_dr2 = 0;
  undefined8 in_xd0 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  ((undefined4 ** *)(fr0_ - 0x18))[0] = (undefined4 ***)(unsigned)0x0;
  (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)((undefined4 ***)(unsigned)0x0));
  (*(undefined4 *)(fr0_ - 0x20)) = 0;
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c235ee4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c020a70(ar5,((undefined1 *)(unsigned)0x8c13f91e),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
  pcVar4 = ((undefined1 *)(unsigned)0x8c13f8cb);
  pdVar5 = ar4;
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c020b68(ar5,((undefined1 *)(unsigned)0x8c13f91e),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c015ad4(ar4 + 2,0,pcVar4,pdVar5); });
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c020a70(ar5,((undefined1 *)(unsigned)0x8c13f986),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
  pcVar4 = ((undefined1 *)(unsigned)0x8c13f8cb);
  pdVar5 = ar4;
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c020b68(ar5,((undefined1 *)(unsigned)0x8c13f986),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c015ad4((int)ar4 + 0x1c,0,pcVar4,pdVar5); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13f8cb),((undefined4 ** *)(fr0_ - 0x1c))
                      ));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13fb30),0,2)
    ;
  }
  puVar6 = &(*(undefined4 *)(fr0_ - 0x20));
  pcVar4 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13f8cb),puVar6));
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)(unsigned)0x2;
    pcVar4 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13fb67),0,2)
    ;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c015ad4(ar4 + 2,((undefined4 **)(unsigned long)*(unsigned *)(fr0_ - 0x1c)),pcVar4,puVar6); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13f8cb),((undefined4 ** *)(fr0_ - 0x1c))));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13fb30),0,2);
  }
  puVar6 = &(*(undefined4 *)(fr0_ - 0x20));
  pcVar4 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13f8cb),puVar6));
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)(unsigned)0x2;
    pcVar4 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13fb67),0,2);
  }
  ar5_00 = (undefined4 ***)(unsigned)((undefined4 **)(unsigned long)*(unsigned *)(fr0_ - 0x1c));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c015ad4((int)ar4 + 0x1c,((undefined4 **)(unsigned long)*(unsigned *)(fr0_ - 0x1c)),pcVar4,puVar6); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c015bb8((int)ar4 + 0x1c,ar5_00,pcVar4,puVar6));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0151fc(*(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar1 + 4) + 4),ar5_00,pcVar4,puVar6));
  *(undefined4 *)(unsigned)((int)ar4 + 0x2c) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0d5de0(ar4,ar5_00,pcVar4,puVar6));
  while (iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_d0_0d3f70((int)ar4 + 0x34,ar5_00,pcVar4,puVar6)), iVar1 != 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_d0_0d3f70((int)ar4 + 0x34,ar5_00,pcVar4,puVar6));
    ((undefined4 ** *)(fr0_ - 0x18))[0] =
         (undefined4 **)(unsigned)
         (vsp = ((unsigned long)(fr0_ - 84)), s_CWaterSnowList_GetWaterSnowO_0fe76c((int)ar4 + 0x34,iVar1 + -1,pcVar4,puVar6));
    (vsp = ((unsigned long)(fr0_ - 84)), s_CWaterSnowList_TakeOut_0fe694((int)ar4 + 0x34,((undefined4 ** *)(fr0_ - 0x18))[0],pcVar4,puVar6));
    ar5_00 = ((undefined4 ** *)(fr0_ - 0x18));
    (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0fec4c(0x8c3e7d30,ar5_00,pcVar4,puVar6));
  }
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0fe7f4((int)ar4 + 0x34,ar5_00,pcVar4,puVar6));
  for (iVar1 = 0; uVar2 = SUB84(in_dr2,0), iVar1 < 0x32; iVar1 = iVar1 + 1) {
    ar4_00 = 0x8c3e7d30;
    ((undefined4 ** *)(fr0_ - 0x18))[0] = (undefined4 **)(unsigned)(vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0febf0(0x8c3e7d30,ar5_00,pcVar4,puVar6));
    if ((undefined4 ***)(unsigned)((undefined4 ** *)(fr0_ - 0x18))[0] == (undefined4 ***)(unsigned)0x0) break;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 84)), rand(ar4_00,ar5_00,pcVar4,puVar6));
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 1.1215622395287742e+23;
    }
    if (cVar10 == '\0') {
      fVar7 = F32LO(dVar9) / F32HI(dVar9);
    }
    else {
      fVar7 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x44b7c000,fVar7);
    }
    else {
      dVar9 = 7.673846743559028e+21;
    }
    if (cVar10 == '\0') {
      fVar7 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x447a0000,fVar7);
    }
    else {
      dVar9 = 2.8924499526186286e+22;
    }
    if (cVar10 == '\0') {
      ppuVar8 = (undefined4 **)(unsigned)(uint)(F32LO(dVar9) + F32HI(dVar9));
    }
    else {
      ppuVar8 = SUB84(dVar9 + dVar9,0);
    }
    if (cVar11 == '\0') {
      ((undefined4 ** *)(fr0_ - 0x18))[0][2] = ppuVar8;
    }
    else {
      *(undefined8 *)(unsigned)(((undefined4 ** *)(fr0_ - 0x18))[0] + 2) = in_xd0;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 84)), rand(ar4_00,ar5_00,pcVar4,puVar6));
    if (cVar11 == '\0') {
      in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)ar4,uVar2);
    }
    else {
      in_dr2 = *ar4;
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 1.1215622395287742e+23;
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
      ((undefined4 ** *)(fr0_ - 0x18))[0][3] = (undefined4 **)(unsigned)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(unsigned)(((undefined4 ** *)(fr0_ - 0x18))[0] + 3) = in_dr2;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 84)), rand(ar4_00,ar5_00,pcVar4,puVar6));
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 1.1215622395287742e+23;
    }
    if (cVar10 == '\0') {
      fVar7 = F32LO(dVar9) / F32HI(dVar9);
    }
    else {
      fVar7 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x44988000,fVar7);
    }
    else {
      dVar9 = 2.5220161595978547e+17;
    }
    if (cVar10 == '\0') {
      fVar7 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x438c0000,fVar7);
    }
    else {
      dVar9 = -1.392258127104201e-250;
    }
    if (cVar10 == '\0') {
      ppuVar8 = (undefined4 **)(unsigned)(uint)(F32LO(dVar9) + F32HI(dVar9));
    }
    else {
      ppuVar8 = SUB84(dVar9 + dVar9,0);
    }
    if (cVar11 == '\0') {
      ((undefined4 ** *)(fr0_ - 0x18))[0][4] = ppuVar8;
    }
    else {
      *(undefined8 *)(unsigned)(((undefined4 ** *)(fr0_ - 0x18))[0] + 4) = in_xd0;
    }
    ar5_00 = (undefined4 ***)(unsigned)((undefined4 ** *)(fr0_ - 0x18))[0];
    (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0fe5f0((int)ar4 + 0x34,((undefined4 ** *)(fr0_ - 0x18))[0],pcVar4,puVar6));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0d5040(ar4,ar5_00,pcVar4,puVar6));
  return uVar2;
}

__asm__(".globl _s_GRAPHICS_ENV_0d5220\n.set _s_GRAPHICS_ENV_0d5220, _s_GRAPHICS_ENV_0d5220_def\n");
