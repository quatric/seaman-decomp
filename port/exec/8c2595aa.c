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
undefined4 FUN_8c2595aa_def(int ar4,undefined8 *ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c2595aa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined8 *puVar2;
  ulonglong *src;
  float fVar3;
  double in_dr2 = 0;
  double dVar4;
  ulonglong uVar5;
  double dVar6;
  float in_fr5 = 0;
  double dVar7;
  float fVar8;
  undefined8 in_xd2 = 0;
  undefined8 in_xd4 = 0;
  int iVar9;
  int iVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  puVar2 = ar5;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c277c6c) == 1) {
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c236454(1,ar5,ar6,ar7));
    uVar1 = 0x80012;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c237124(0x80012,puVar2,ar6,ar7); });
    uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c236510(uVar1,puVar2,ar6,ar7));
  }
  else {
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c277c6c) != 2) goto LAB_8c25962e;
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c236454(2,ar5,ar6,ar7));
    uVar1 = 0x2100012;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c237124(0x2100012,puVar2,ar6,ar7); });
    uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2365e2(uVar1,puVar2,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2370dc(uVar1,puVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2364b2(uVar1,puVar2,ar6,ar7));
LAB_8c25962e:
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c277ad0) != 0) {
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c277c7c));
    }
    else {
      in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c277c80),(*(undefined4 *)(unsigned)(unsigned)0x8c277c7c));
    }
    if (cVar11 == '\0') {
      ar7 = (int)SUB84(in_dr2,0);
    }
    else {
      ar7 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c277c78));
    }
    else {
      in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c277c7c),(*(undefined4 *)(unsigned)(unsigned)0x8c277c78));
    }
    if (cVar11 == '\0') {
      ar6 = (int)SUB84(in_dr2,0);
    }
    else {
      ar6 = (int)in_dr2;
    }
    puVar2 = (undefined8 *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2122ea(((undefined1 *)(unsigned)0x8c4aabdc),0,ar6,ar7));
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c277ad4) != 0) {
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c277c7c));
    }
    else {
      in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c277c80),(*(undefined4 *)(unsigned)(unsigned)0x8c277c7c));
    }
    if (cVar11 == '\0') {
      ar7 = (int)SUB84(in_dr2,0);
    }
    else {
      ar7 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c277c78));
    }
    else {
      in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c277c7c),(*(undefined4 *)(unsigned)(unsigned)0x8c277c78));
    }
    if (cVar11 == '\0') {
      ar6 = (int)SUB84(in_dr2,0);
    }
    else {
      ar6 = (int)in_dr2;
    }
    puVar2 = (undefined8 *)(unsigned)0x1;
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2122ea(((undefined1 *)(unsigned)0x8c4aabdc),1,ar6,ar7));
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c277ad8) != 0) {
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c277c7c));
    }
    else {
      in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c277c80),(*(undefined4 *)(unsigned)(unsigned)0x8c277c7c));
    }
    if (cVar11 == '\0') {
      ar7 = (int)SUB84(in_dr2,0);
    }
    else {
      ar7 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c277c78));
    }
    else {
      in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c277c7c),(*(undefined4 *)(unsigned)(unsigned)0x8c277c78));
    }
    if (cVar11 == '\0') {
      ar6 = (int)SUB84(in_dr2,0);
    }
    else {
      ar6 = (int)in_dr2;
    }
    puVar2 = (undefined8 *)(unsigned)0x2;
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2122ea(((undefined1 *)(unsigned)0x8c4aabdc),2,ar6,ar7));
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c277adc) != 0) {
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c277c7c));
    }
    else {
      in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c277c80),(*(undefined4 *)(unsigned)(unsigned)0x8c277c7c));
    }
    if (cVar11 == '\0') {
      ar7 = (int)SUB84(in_dr2,0);
    }
    else {
      ar7 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c277c78));
    }
    else {
      in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c277c7c),(*(undefined4 *)(unsigned)(unsigned)0x8c277c78));
    }
    if (cVar11 == '\0') {
      ar6 = (int)SUB84(in_dr2,0);
    }
    else {
      ar6 = (int)in_dr2;
    }
    puVar2 = (undefined8 *)(unsigned)0x3;
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2122ea(((undefined1 *)(unsigned)0x8c4aabdc),3,ar6,ar7));
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c277ae0) != 0) {
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c277c7c));
    }
    else {
      in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c277c80),(*(undefined4 *)(unsigned)(unsigned)0x8c277c7c));
    }
    if (cVar11 == '\0') {
      ar7 = (int)SUB84(in_dr2,0);
    }
    else {
      ar7 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c277c78));
    }
    else {
      in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c277c7c),(*(undefined4 *)(unsigned)(unsigned)0x8c277c78));
    }
    if (cVar11 == '\0') {
      ar6 = (int)SUB84(in_dr2,0);
    }
    else {
      ar6 = (int)in_dr2;
    }
    puVar2 = (undefined8 *)(unsigned)0x4;
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2122ea(((undefined1 *)(unsigned)0x8c4aabdc),4,ar6,ar7));
  }
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aabbc = (unsigned)(0x10000000);
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aabbc)[0x2f] = ar4;
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c20f640(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aabbc),puVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c20fe00(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aabbc),puVar2,ar6,ar7));
  src = ar5 + 1;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c277ad0) != 0) {
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)((int)ar5 + 4));
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)((int)ar5 + 4);
    }
    if (cVar11 == '\0') {
      iVar9 = (int)SUB84(in_dr2,0);
    }
    else {
      iVar9 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)ar5);
    }
    else {
      in_xd2 = *ar5;
    }
    if (cVar11 == '\0') {
      iVar10 = (int)SUB84(in_dr2,0);
    }
    else {
      iVar10 = (int)in_dr2;
    }
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2122ea(((undefined1 *)(unsigned)0x8c4aabdc),0,iVar10,iVar9));
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c277ad4) != 0) {
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)((int)ar5 + 4));
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)((int)ar5 + 4);
    }
    if (cVar11 == '\0') {
      iVar9 = (int)SUB84(in_dr2,0);
    }
    else {
      iVar9 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)ar5);
    }
    else {
      in_xd2 = *ar5;
    }
    if (cVar11 == '\0') {
      iVar10 = (int)SUB84(in_dr2,0);
    }
    else {
      iVar10 = (int)in_dr2;
    }
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2122ea(((undefined1 *)(unsigned)0x8c4aabdc),1,iVar10,iVar9));
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c277ad8) != 0) {
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)((int)ar5 + 4));
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)((int)ar5 + 4);
    }
    if (cVar11 == '\0') {
      iVar9 = (int)SUB84(in_dr2,0);
    }
    else {
      iVar9 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)ar5);
    }
    else {
      in_xd2 = *ar5;
    }
    if (cVar11 == '\0') {
      iVar10 = (int)SUB84(in_dr2,0);
    }
    else {
      iVar10 = (int)in_dr2;
    }
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2122ea(((undefined1 *)(unsigned)0x8c4aabdc),2,iVar10,iVar9));
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c277adc) != 0) {
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)((int)ar5 + 4));
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)((int)ar5 + 4);
    }
    if (cVar11 == '\0') {
      iVar9 = (int)SUB84(in_dr2,0);
    }
    else {
      iVar9 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)ar5);
    }
    else {
      in_xd2 = *ar5;
    }
    if (cVar11 == '\0') {
      iVar10 = (int)SUB84(in_dr2,0);
    }
    else {
      iVar10 = (int)in_dr2;
    }
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2122ea(((undefined1 *)(unsigned)0x8c4aabdc),3,iVar10,iVar9));
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c277ae0) != 0) {
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)((int)ar5 + 4));
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)((int)ar5 + 4);
    }
    if (cVar11 == '\0') {
      iVar9 = (int)SUB84(in_dr2,0);
    }
    else {
      iVar9 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)ar5);
    }
    else {
      in_xd2 = *ar5;
    }
    if (cVar11 == '\0') {
      iVar10 = (int)SUB84(in_dr2,0);
    }
    else {
      iVar10 = (int)in_dr2;
    }
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2122ea(((undefined1 *)(unsigned)0x8c4aabdc),4,iVar10,iVar9));
  }
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c010794(8,((undefined4 *)(unsigned)0x8c277c78),ar5,vr7));
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c010794(8,((undefined4 *)(unsigned)0x8c277c80),src,vr7));
  uVar1 = (undefined4)((ulonglong)in_dr2 >> 0x20);
  if (ar4 == 2) {
    if (cVar12 == '\0') {
      in_dr2 = CONCAT44D(uVar1,*(undefined4 *)(unsigned)ar5);
      dVar7 = CONCAT44D(0x42000000,in_fr5);
    }
    else {
      in_xd2 = *ar5;
      dVar7 = 6442452000.0;
    }
    fVar8 = F32HI(dVar7);
    if (cVar11 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4c4) = F32LO(in_dr2) * fVar8;
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4c4) = SUB84(in_dr2 * dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar4 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5 + 4),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4c4));
      dVar6 = (double)((ulonglong)(uint)fVar8 << 0x20);
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4c4) = (float)in_xd2;
      dVar4 = *(double *)(unsigned)((int)ar5 + 4);
      dVar6 = dVar7;
    }
    if (cVar11 == '\0') {
      dVar4 = CONCAT44D(F32HI(dVar4) * fVar8,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 * dVar7;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4c8) = F32HI(dVar4);
    if (cVar12 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d0) = 31.0;
      uVar5 = CONCAT44((int)*src,0x41f80000);
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4c8) = SUB84(dVar4,0);
      in_xd2 = 0xd63fe00441f80000;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d0) = SUB84(dVar7,0);
      uVar5 = *src;
      in_xd4 = in_xd2;
    }
    fVar8 = F32HI(dVar6);
    if (cVar11 == '\0') {
      uVar5 = (ulonglong)(uint)(fVar8 * (float)(uVar5 >> 0x20) + (float)uVar5);
    }
    if (cVar12 == '\0') {
      fVar3 = *(float *)(unsigned)((int)ar5 + 0xc);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4cc) = (float)uVar5;
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4cc) = (float)in_xd2;
      fVar3 = (float)uVar5;
    }
    if (cVar11 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d0) = fVar8 * fVar3 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d0);
    }
    if (cVar12 != '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d0) = (float)in_xd4;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4) = (undefined4)((ulonglong)in_xd4 >> 0x20);
    }
  }
  else {
    if (cVar12 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4c8) = 0.0;
      in_dr2 = CONCAT44D(uVar1,(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac));
    }
    else {
      in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4c8) = in_fr5;
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0xbf800000,in_fr5);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d0) = -1.0;
      dVar6 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),F32LO(in_dr2) + -1.0);
    }
    else {
      dVar7 = -CONCAT44D(0x3f800000,in_fr5);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d0) = F32HI(dVar7);
      dVar6 = in_dr2 + dVar7;
    }
    if (cVar12 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4cc) = SUB84(dVar6,0);
      dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b0));
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4cc) = (float)in_xd2;
      in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b0));
    }
    if (cVar11 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d0) = F32LO(dVar6) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d0);
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d0) = SUB84(dVar6 + dVar7,0);
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4c4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4c8);
    if (cVar12 != '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d0) = (float)in_xd2;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4) = (undefined4)((ulonglong)in_xd2 >> 0x20);
    }
  }
  return 4;
}

__asm__(".globl _FUN_8c2595aa\n.set _FUN_8c2595aa, _FUN_8c2595aa_def\n");
