#include "../decls.h"
undefined4 FUN_8c09cca8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  double *pdVar3;
  float *pfVar4;
  ulonglong *puVar5;
  undefined4 in_fr1;
  float fVar6;
  undefined4 uVar7;
  double dVar8;
  float fVar9;
  undefined4 in_fr3;
  undefined4 uVar10;
  double dVar11;
  undefined4 in_fr4;
  undefined8 in_dr14;
  double dVar12;
  undefined8 in_xd0;
  undefined8 in_xd14;
  int iVar13;
  char cVar14;
  char cVar15;
  
  cVar15 = '\0';
  cVar14 = '\0';
  dVar12 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  uVar1 = rand(ar4,ar5,ar6,ar7);
  if (cVar14 == '\0') {
    iVar13 = (int)SUB84(dVar12,0);
  }
  else {
    iVar13 = (int)dVar12;
  }
  iVar2 = libgcc_divide_helper_01031c(uVar1,iVar13,ar6,ar7);
  pdVar3 = (double *)(ar4 + ar5 * 0x10 + 0x5c4);
  if (cVar14 == '\0') {
    dVar11 = (double)CONCAT44((float)iVar2,in_fr3);
  }
  else {
    dVar11 = (double)iVar2;
  }
  if (cVar15 == '\0') {
    dVar8 = (double)CONCAT44(0x42c80000,in_fr1);
  }
  else {
    dVar8 = 2.0000004975590855;
  }
  if (cVar14 == '\0') {
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) / (float)((ulonglong)dVar8 >> 0x20)
                              ,SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 / dVar8;
  }
  if (cVar15 == '\0') {
    dVar8 = (double)CONCAT44(0x42c80000,SUB84(dVar12,0));
  }
  else {
    dVar8 = 2.0000004975590855;
    in_xd0 = in_xd14;
  }
  if (cVar14 == '\0') {
    fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar8 / dVar8,0);
  }
  if (cVar15 == '\0') {
    dVar8 = (double)CONCAT44(0x40000000,fVar6);
  }
  else {
    dVar8 = 3.14108426957634e-311;
  }
  if (cVar14 == '\0') {
    fVar9 = (float)((ulonglong)dVar8 >> 0x20);
    fVar6 = SUB84(dVar8,0) / fVar9;
    dVar8 = (double)CONCAT44(fVar9,fVar6);
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) - fVar6,SUB84(dVar11,0));
  }
  else {
    dVar8 = dVar8 / dVar8;
    dVar11 = dVar11 - dVar8;
  }
  uVar7 = SUB84(dVar8,0);
  if (cVar15 == '\0') {
    *(int *)pdVar3 = (int)((ulonglong)dVar11 >> 0x20);
  }
  else {
    *pdVar3 = dVar11;
  }
  uVar1 = rand(uVar1,iVar13,ar6,ar7);
  uVar10 = SUB84(dVar11,0);
  if (cVar14 == '\0') {
    iVar13 = (int)SUB84(dVar12,0);
  }
  else {
    iVar13 = (int)dVar12;
  }
  iVar2 = libgcc_divide_helper_01031c(uVar1,iVar13,ar6,ar7);
  pdVar3 = (double *)(ar4 + ar5 * 0x10 + 0x5c8);
  if (cVar14 == '\0') {
    dVar11 = (double)CONCAT44((float)iVar2,uVar10);
  }
  else {
    dVar11 = (double)iVar2;
  }
  if (cVar15 == '\0') {
    dVar8 = (double)CONCAT44(0x42c80000,uVar7);
  }
  else {
    dVar8 = 2.0000004975590855;
  }
  if (cVar14 == '\0') {
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) / (float)((ulonglong)dVar8 >> 0x20)
                              ,SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 / dVar8;
  }
  if (cVar15 == '\0') {
    dVar8 = (double)CONCAT44(0x42c80000,SUB84(dVar12,0));
    in_xd14 = in_xd0;
  }
  else {
    dVar8 = 2.0000004975590855;
  }
  if (cVar14 == '\0') {
    fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar8 / dVar8,0);
  }
  if (cVar15 == '\0') {
    dVar8 = (double)CONCAT44(0x40000000,fVar6);
  }
  else {
    dVar8 = 3.14108426957634e-311;
  }
  if (cVar14 == '\0') {
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) -
                              SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 - dVar8 / dVar8;
  }
  if (cVar15 == '\0') {
    *(int *)pdVar3 = (int)((ulonglong)dVar11 >> 0x20);
  }
  else {
    *pdVar3 = dVar11;
  }
  uVar1 = rand(uVar1,iVar13,ar6,ar7);
  if (cVar14 == '\0') {
    iVar13 = (int)SUB84(dVar12,0);
  }
  else {
    iVar13 = (int)dVar12;
  }
  iVar13 = libgcc_divide_helper_01031c(uVar1,iVar13,ar6,ar7);
  pfVar4 = (float *)(ar4 + ar5 * 0x10 + 0x5cc);
  if (cVar15 == '\0') {
    dVar11 = (double)CONCAT44(0x42c80000,(float)iVar13);
  }
  else {
    dVar11 = 2.0000004975590855;
  }
  if (cVar14 == '\0') {
    fVar6 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar11 / dVar11,0);
  }
  if (cVar15 == '\0') {
    dVar11 = (double)CONCAT44(0x42c80000,fVar6);
  }
  else {
    dVar11 = 2.0000004975590855;
  }
  if (cVar14 == '\0') {
    dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),
                              SUB84(dVar12,0) / (float)((ulonglong)dVar11 >> 0x20));
  }
  else {
    dVar12 = dVar12 / dVar11;
  }
  if (cVar15 == '\0') {
    dVar11 = (double)CONCAT44(0x40000000,SUB84(dVar11,0));
  }
  else {
    dVar11 = 3.14108426957634e-311;
  }
  if (cVar14 == '\0') {
    fVar6 = SUB84(dVar11,0) - SUB84(dVar12,0) / (float)((ulonglong)dVar11 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar11 - dVar12 / dVar11,0);
  }
  if (cVar15 == '\0') {
    *pfVar4 = fVar6;
  }
  else {
    *(undefined8 *)pfVar4 = in_xd14;
  }
  puVar5 = (ulonglong *)(ar4 + ar5 * 0x10 + 0x644);
  if (cVar15 == '\0') {
    *(undefined4 *)puVar5 = 0;
  }
  else {
    *puVar5 = (ulonglong)(uint)fVar6;
  }
  puVar5 = (ulonglong *)(ar4 + ar5 * 0x10 + 0x648);
  if (cVar15 == '\0') {
    *(undefined4 *)puVar5 = 0;
  }
  else {
    *puVar5 = (ulonglong)(uint)fVar6;
  }
  puVar5 = (ulonglong *)(ar4 + ar5 * 0x10 + 0x64c);
  if (cVar15 == '\0') {
    *(undefined4 *)puVar5 = 0;
  }
  else {
    *puVar5 = (ulonglong)(uint)fVar6;
  }
  return 0x64c;
}

__asm__(".globl _FUN_8c09cca8\n.set _FUN_8c09cca8, _FUN_8c09cca8_def\n");
