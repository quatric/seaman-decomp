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
undefined4 FUN_8c235a80_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c235a80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_r8 = 0;
  uint unaff_r11 = 0;
  int unaff_r12 = 0;
  uint uVar5;
  int *unaff_r14 = 0;
  float fVar6;
  undefined8 in_dr2 = 0;
  double dVar7;
  float fVar8;
  undefined4 in_fr14 = 0;
  undefined8 in_xd2 = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  *(undefined4 *)(unsigned)(ain0 + (int)ar4) = *(undefined4 *)(unsigned)*unaff_r14;
  ar4[2] = *(undefined4 *)(unsigned)(ain0 + *unaff_r14);
  fVar8 = 0.00390625;
  ar4[4] = (float)(int)*(short *)(unsigned)unaff_r14[2] * 0.00390625;
  fVar6 = (float)(int)*(short *)(unsigned)(unaff_r14[2] + 2) * 0.00390625;
  dVar7 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar6);
  ar4[5] = fVar6;
  ar4[6] = *(undefined4 *)(unsigned)unaff_r14[1];
  *ar4 = 0xe0000000;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c010794(0x20,ar4 + 0x10,ar4,vr7));
  uVar5 = 1;
  if (1 < unaff_r8) {
    do {
      if ((int)uVar5 < 0) {
        unaff_r11 = ~(~uVar5 + 1 & 1) + 1;
      }
      else {
        unaff_r11 = uVar5 & 1;
      }
      puVar2 = (undefined8 *)(unsigned)(*unaff_r14 + uVar5 * 8);
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),*(undefined4 *)(unsigned)puVar2);
      }
      else {
        in_xd2 = *puVar2;
      }
      puVar3 = (undefined4 *)(unsigned)(unaff_r11 * 0x20 + unaff_r12);
      if (cVar10 == '\0') {
        puVar3[1] = SUB84(dVar7,0);
      }
      else {
        *(undefined8 *)(unsigned)(puVar3 + 1) = in_xd2;
      }
      iVar4 = uVar5 * 8 + *unaff_r14;
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 4));
      }
      else {
        in_xd2 = *(undefined8 *)(unsigned)(iVar4 + 4);
      }
      iVar4 = uVar5 * 4;
      if (cVar10 == '\0') {
        puVar3[2] = SUB84(dVar7,0);
      }
      else {
        *(undefined8 *)(unsigned)(puVar3 + 2) = in_xd2;
      }
      uVar1 = (undefined4)(D2U(dVar7) >> 0x20);
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(uVar1,(float)(int)*(short *)(unsigned)(unaff_r14[2] + iVar4) * fVar8);
      }
      else {
        dVar7 = CONCAT44D(uVar1,(float)(int)*(short *)(unsigned)(unaff_r14[2] + iVar4)) *
                CONCAT44D(in_fr14,fVar8);
      }
      if (cVar10 == '\0') {
        puVar3[4] = SUB84(dVar7,0);
      }
      else {
        *(undefined8 *)(unsigned)(puVar3 + 4) = in_xd2;
      }
      uVar1 = (undefined4)(D2U(dVar7) >> 0x20);
      fVar6 = (float)(int)*(short *)(unsigned)(unaff_r14[2] + iVar4 + 2);
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(uVar1,fVar6 * fVar8);
      }
      else {
        dVar7 = CONCAT44D(uVar1,fVar6) * CONCAT44D(in_fr14,fVar8);
      }
      if (cVar10 == '\0') {
        puVar3[5] = SUB84(dVar7,0);
      }
      else {
        *(undefined8 *)(unsigned)(puVar3 + 5) = in_xd2;
      }
      puVar3[6] = *(undefined4 *)(unsigned)(iVar4 + unaff_r14[1]);
      *puVar3 = 0xe0000000;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c23541c(unaff_r12,ar4 + 8,ar6,ar7));
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < unaff_r8);
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c23541c(unaff_r11 * 0x20 + unaff_r12,unaff_r12 + 0x40,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c235a80\n.set _FUN_8c235a80, _FUN_8c235a80_def\n");
