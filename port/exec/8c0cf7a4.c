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
undefined4 FUN_8c0cf7a4_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0cf7a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  short sVar1;
  short sVar2;
  undefined8 *puVar3;
  double *pdVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  double in_dr0 = 0;
  double dVar11;
  undefined8 in_xd0 = 0;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  iVar8 = ar6;
  for (iVar6 = 0; iVar6 < 5; iVar6 = iVar6 + 1) {
    for (iVar7 = 0; iVar7 < 5; iVar7 = iVar7 + 1) {
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c01538c(ar4 + 0x158,ar5,iVar8,ar7));
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c014a94(ar4 + 0x158,(int)(short)ar6,iVar8,ar7));
      sVar1 = (short)iVar7;
      *(short *)(unsigned)(ar4 + 0x508) = sVar1 * 0x32;
      sVar2 = (short)iVar6;
      *(short *)(unsigned)(ar4 + 0x50a) = sVar2 * 0x32 + 0x32;
      *(short *)(unsigned)(ar4 + 0x50c) = sVar1 * 0x32;
      *(short *)(unsigned)(ar4 + 0x50e) = sVar2 * 0x32;
      *(short *)(unsigned)(ar4 + 0x510) = sVar1 * 0x32 + 0x32;
      *(short *)(unsigned)(ar4 + 0x512) = sVar2 * 0x32;
      *(short *)(unsigned)(ar4 + 0x514) = sVar1 * 0x32 + 0x32;
      *(short *)(unsigned)(ar4 + 0x516) = sVar2 * 0x32 + 0x32;
      for (iVar8 = 0; uVar9 = SUB84(in_dr0,0), iVar8 < 4; iVar8 = iVar8 + 1) {
        puVar3 = (undefined8 *)(unsigned)(iVar6 * 0x78 + ar4 + iVar7 * 0x18 + 0x174);
        if (cVar13 == '\0') {
          uVar9 = *(undefined4 *)(unsigned)puVar3;
        }
        else {
          in_xd0 = *puVar3;
        }
        pdVar4 = (double *)(unsigned)(ar4 + iVar8 * 8 + 0x4e8);
        if (cVar13 == '\0') {
          dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,uVar9);
        }
        else {
          dVar11 = *pdVar4;
        }
        if (cVar12 == '\0') {
          fVar10 = F32LO(dVar11) + F32HI(dVar11);
        }
        else {
          fVar10 = SUB84(dVar11 + dVar11,0);
        }
        if (cVar13 == '\0') {
          (&(*(float *)(fr0_ - 0x38)))[iVar8 * 2] = fVar10;
        }
        else {
          *(undefined8 *)(unsigned)(&(*(float *)(fr0_ - 0x38)) + iVar8 * 2) = in_xd0;
        }
        pfVar5 = (float *)(unsigned)(iVar6 * 0x78 + ar4 + iVar7 * 0x18 + 0x178);
        if (cVar13 == '\0') {
          fVar10 = *pfVar5;
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)pfVar5;
        }
        pdVar4 = (double *)(unsigned)(ar4 + iVar8 * 8 + 0x4ec);
        if (cVar13 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,fVar10);
        }
        else {
          in_dr0 = *pdVar4;
        }
        if (cVar12 == '\0') {
          in_dr0 = (double)(ulonglong)(uint)(F32LO(in_dr0) + F32HI(in_dr0));
        }
        else {
          in_dr0 = in_dr0 + in_dr0;
        }
        if (cVar13 == '\0') {
          *(int *)(unsigned)(((undefined8 *)(fr0_ - 0x34)) + iVar8) = SUB84(in_dr0,0);
        }
        else {
          ((undefined8 *)(fr0_ - 0x34))[iVar8] = in_xd0;
        }
        (*(int *)(fr0_ - 0x78)) = iVar7;
      }
      ar7 = 4;
      iVar8 = ar4 + 0x4c8;
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c016318(ar4 + 0x3cc,&(*(float *)(fr0_ - 0x38)),iVar8,4); });
      ar5 = ar4 + 0x508;
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c016324(ar4 + 0x3cc,ar5,iVar8,ar7));
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c016340(ar4 + 0x3cc,ar5,iVar8,ar7));
    }
  }
  return 5;
}

__asm__(".globl _FUN_8c0cf7a4\n.set _FUN_8c0cf7a4, _FUN_8c0cf7a4_def\n");
