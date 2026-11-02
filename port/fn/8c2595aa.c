#include "../decls.h"
undefined4 FUN_8c2595aa_def(int ar4,undefined8 *ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulonglong *src;
  float fVar3;
  double in_dr2;
  double dVar4;
  ulonglong uVar5;
  double dVar6;
  float in_fr5;
  double dVar7;
  float fVar8;
  undefined8 in_xd2;
  undefined8 in_xd4;
  int iVar9;
  int iVar10;
  char cVar11;
  char cVar12;
  undefined4 in_stack_ffffffe0;
  
  cVar12 = '\0';
  cVar11 = '\0';
  puVar2 = ar5;
  if (DAT_8c277c6c == 1) {
    FUN_8c236454(1,ar5,ar6,ar7);
    uVar1 = 0x80012;
    FUN_8c237124(0x80012,puVar2,ar6,ar7,in_stack_ffffffe0);
    uVar1 = FUN_8c236510(uVar1,puVar2,ar6,ar7);
  }
  else {
    if (DAT_8c277c6c != 2) goto LAB_8c25962e;
    FUN_8c236454(2,ar5,ar6,ar7);
    uVar1 = 0x2100012;
    FUN_8c237124(0x2100012,puVar2,ar6,ar7,in_stack_ffffffe0);
    uVar1 = FUN_8c2365e2(uVar1,puVar2,ar6,ar7);
  }
  FUN_8c2370dc(uVar1,puVar2,ar6,ar7);
  FUN_8c2364b2(uVar1,puVar2,ar6,ar7);
LAB_8c25962e:
  if (DAT_8c277ad0 != 0) {
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),DAT_8c277c7c);
    }
    else {
      in_xd2 = CONCAT44(DAT_8c277c80,DAT_8c277c7c);
    }
    if (cVar11 == '\0') {
      ar7 = (int)SUB84(in_dr2,0);
    }
    else {
      ar7 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),DAT_8c277c78);
    }
    else {
      in_xd2 = CONCAT44(DAT_8c277c7c,DAT_8c277c78);
    }
    if (cVar11 == '\0') {
      ar6 = (int)SUB84(in_dr2,0);
    }
    else {
      ar6 = (int)in_dr2;
    }
    puVar2 = (undefined8 *)0x0;
    FUN_8c2122ea(&DAT_8c4aabdc,0,ar6,ar7);
  }
  if (DAT_8c277ad4 != 0) {
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),DAT_8c277c7c);
    }
    else {
      in_xd2 = CONCAT44(DAT_8c277c80,DAT_8c277c7c);
    }
    if (cVar11 == '\0') {
      ar7 = (int)SUB84(in_dr2,0);
    }
    else {
      ar7 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),DAT_8c277c78);
    }
    else {
      in_xd2 = CONCAT44(DAT_8c277c7c,DAT_8c277c78);
    }
    if (cVar11 == '\0') {
      ar6 = (int)SUB84(in_dr2,0);
    }
    else {
      ar6 = (int)in_dr2;
    }
    puVar2 = (undefined8 *)0x1;
    FUN_8c2122ea(&DAT_8c4aabdc,1,ar6,ar7);
  }
  if (DAT_8c277ad8 != 0) {
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),DAT_8c277c7c);
    }
    else {
      in_xd2 = CONCAT44(DAT_8c277c80,DAT_8c277c7c);
    }
    if (cVar11 == '\0') {
      ar7 = (int)SUB84(in_dr2,0);
    }
    else {
      ar7 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),DAT_8c277c78);
    }
    else {
      in_xd2 = CONCAT44(DAT_8c277c7c,DAT_8c277c78);
    }
    if (cVar11 == '\0') {
      ar6 = (int)SUB84(in_dr2,0);
    }
    else {
      ar6 = (int)in_dr2;
    }
    puVar2 = (undefined8 *)0x2;
    FUN_8c2122ea(&DAT_8c4aabdc,2,ar6,ar7);
  }
  if (DAT_8c277adc != 0) {
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),DAT_8c277c7c);
    }
    else {
      in_xd2 = CONCAT44(DAT_8c277c80,DAT_8c277c7c);
    }
    if (cVar11 == '\0') {
      ar7 = (int)SUB84(in_dr2,0);
    }
    else {
      ar7 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),DAT_8c277c78);
    }
    else {
      in_xd2 = CONCAT44(DAT_8c277c7c,DAT_8c277c78);
    }
    if (cVar11 == '\0') {
      ar6 = (int)SUB84(in_dr2,0);
    }
    else {
      ar6 = (int)in_dr2;
    }
    puVar2 = (undefined8 *)0x3;
    FUN_8c2122ea(&DAT_8c4aabdc,3,ar6,ar7);
  }
  if (DAT_8c277ae0 != 0) {
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),DAT_8c277c7c);
    }
    else {
      in_xd2 = CONCAT44(DAT_8c277c80,DAT_8c277c7c);
    }
    if (cVar11 == '\0') {
      ar7 = (int)SUB84(in_dr2,0);
    }
    else {
      ar7 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),DAT_8c277c78);
    }
    else {
      in_xd2 = CONCAT44(DAT_8c277c7c,DAT_8c277c78);
    }
    if (cVar11 == '\0') {
      ar6 = (int)SUB84(in_dr2,0);
    }
    else {
      ar6 = (int)in_dr2;
    }
    puVar2 = (undefined8 *)0x4;
    FUN_8c2122ea(&DAT_8c4aabdc,4,ar6,ar7);
  }
  *_DAT_8c4aabbc = 0x10000000;
  _DAT_8c4aabbc[0x2f] = ar4;
  FUN_8c20f640(_DAT_8c4aabbc,puVar2,ar6,ar7);
  FUN_8c20fe00(_DAT_8c4aabbc,puVar2,ar6,ar7);
  src = ar5 + 1;
  if (DAT_8c277ad0 != 0) {
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)((int)ar5 + 4));
    }
    else {
      in_xd2 = *(undefined8 *)((int)ar5 + 4);
    }
    if (cVar11 == '\0') {
      iVar9 = (int)SUB84(in_dr2,0);
    }
    else {
      iVar9 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)ar5);
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
    FUN_8c2122ea(&DAT_8c4aabdc,0,iVar10,iVar9);
  }
  if (DAT_8c277ad4 != 0) {
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)((int)ar5 + 4));
    }
    else {
      in_xd2 = *(undefined8 *)((int)ar5 + 4);
    }
    if (cVar11 == '\0') {
      iVar9 = (int)SUB84(in_dr2,0);
    }
    else {
      iVar9 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)ar5);
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
    FUN_8c2122ea(&DAT_8c4aabdc,1,iVar10,iVar9);
  }
  if (DAT_8c277ad8 != 0) {
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)((int)ar5 + 4));
    }
    else {
      in_xd2 = *(undefined8 *)((int)ar5 + 4);
    }
    if (cVar11 == '\0') {
      iVar9 = (int)SUB84(in_dr2,0);
    }
    else {
      iVar9 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)ar5);
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
    FUN_8c2122ea(&DAT_8c4aabdc,2,iVar10,iVar9);
  }
  if (DAT_8c277adc != 0) {
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)((int)ar5 + 4));
    }
    else {
      in_xd2 = *(undefined8 *)((int)ar5 + 4);
    }
    if (cVar11 == '\0') {
      iVar9 = (int)SUB84(in_dr2,0);
    }
    else {
      iVar9 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)ar5);
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
    FUN_8c2122ea(&DAT_8c4aabdc,3,iVar10,iVar9);
  }
  if (DAT_8c277ae0 != 0) {
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)((int)ar5 + 4));
    }
    else {
      in_xd2 = *(undefined8 *)((int)ar5 + 4);
    }
    if (cVar11 == '\0') {
      iVar9 = (int)SUB84(in_dr2,0);
    }
    else {
      iVar9 = (int)in_dr2;
    }
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)ar5);
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
    FUN_8c2122ea(&DAT_8c4aabdc,4,iVar10,iVar9);
  }
  FUN_8c010794(8,&DAT_8c277c78,ar5);
  FUN_8c010794(8,&DAT_8c277c80,src);
  uVar1 = (undefined4)((ulonglong)in_dr2 >> 0x20);
  if (ar4 == 2) {
    if (cVar12 == '\0') {
      in_dr2 = (double)CONCAT44(uVar1,*(undefined4 *)ar5);
      dVar7 = (double)CONCAT44(0x42000000,in_fr5);
    }
    else {
      in_xd2 = *ar5;
      dVar7 = 6442452000.0;
    }
    fVar8 = (float)((ulonglong)dVar7 >> 0x20);
    if (cVar11 == '\0') {
      _DAT_8c4aa4c4 = SUB84(in_dr2,0) * fVar8;
    }
    else {
      _DAT_8c4aa4c4 = SUB84(in_dr2 * dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),_DAT_8c4aa4c4);
      dVar6 = (double)((ulonglong)(uint)fVar8 << 0x20);
    }
    else {
      _DAT_8c4aa4c4 = (float)in_xd2;
      dVar4 = *(double *)((int)ar5 + 4);
      dVar6 = dVar7;
    }
    if (cVar11 == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * fVar8,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 * dVar7;
    }
    _DAT_8c4aa4c8 = (float)((ulonglong)dVar4 >> 0x20);
    if (cVar12 == '\0') {
      _DAT_8c4aa4d0 = 31.0;
      uVar5 = CONCAT44((int)*src,0x41f80000);
    }
    else {
      _DAT_8c4aa4c8 = SUB84(dVar4,0);
      in_xd2 = 0xd63fe00441f80000;
      _DAT_8c4aa4d0 = SUB84(dVar7,0);
      uVar5 = *src;
      in_xd4 = in_xd2;
    }
    fVar8 = (float)((ulonglong)dVar6 >> 0x20);
    if (cVar11 == '\0') {
      uVar5 = (ulonglong)(uint)(fVar8 * (float)(uVar5 >> 0x20) + (float)uVar5);
    }
    if (cVar12 == '\0') {
      fVar3 = *(float *)((int)ar5 + 0xc);
      _DAT_8c4aa4cc = (float)uVar5;
    }
    else {
      _DAT_8c4aa4cc = (float)in_xd2;
      fVar3 = (float)uVar5;
    }
    if (cVar11 == '\0') {
      _DAT_8c4aa4d0 = fVar8 * fVar3 + _DAT_8c4aa4d0;
    }
    if (cVar12 != '\0') {
      _DAT_8c4aa4d0 = (float)in_xd4;
      _DAT_8c4aa4d4 = (undefined4)((ulonglong)in_xd4 >> 0x20);
    }
  }
  else {
    if (cVar12 == '\0') {
      _DAT_8c4aa4c8 = 0.0;
      in_dr2 = (double)CONCAT44(uVar1,_DAT_8c4aa4ac);
    }
    else {
      in_xd2 = CONCAT44(_DAT_8c4aa4b0,_DAT_8c4aa4ac);
      _DAT_8c4aa4c8 = in_fr5;
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0xbf800000,in_fr5);
      _DAT_8c4aa4d0 = -1.0;
      dVar6 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) + -1.0);
    }
    else {
      dVar7 = -(double)CONCAT44(0x3f800000,in_fr5);
      _DAT_8c4aa4d0 = (float)((ulonglong)dVar7 >> 0x20);
      dVar6 = in_dr2 + dVar7;
    }
    if (cVar12 == '\0') {
      _DAT_8c4aa4cc = SUB84(dVar6,0);
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),_DAT_8c4aa4b0);
    }
    else {
      _DAT_8c4aa4cc = (float)in_xd2;
      in_xd2 = CONCAT44(_DAT_8c4aa4b4,_DAT_8c4aa4b0);
    }
    if (cVar11 == '\0') {
      _DAT_8c4aa4d0 = SUB84(dVar6,0) + _DAT_8c4aa4d0;
    }
    else {
      _DAT_8c4aa4d0 = SUB84(dVar6 + dVar7,0);
    }
    _DAT_8c4aa4c4 = _DAT_8c4aa4c8;
    if (cVar12 != '\0') {
      _DAT_8c4aa4d0 = (float)in_xd2;
      _DAT_8c4aa4d4 = (undefined4)((ulonglong)in_xd2 >> 0x20);
    }
  }
  return 4;
}

__asm__(".globl _FUN_8c2595aa\n.set _FUN_8c2595aa, _FUN_8c2595aa_def\n");
