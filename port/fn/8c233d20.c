#include "../decls.h"
uint FUN_8c233d20_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  double *unaff_r13;
  undefined4 *unaff_r14;
  undefined8 *puVar1;
  undefined4 in_fr1;
  double dVar2;
  double dVar3;
  undefined4 in_fr5;
  undefined4 uVar4;
  float fVar5;
  double in_dr12;
  undefined8 in_dr14;
  double dVar6;
  double in_xd2;
  double in_xd12;
  bool bVar7;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_8);
    puVar1 = &uStack_8;
                    
    (*(uint*)((uchar*)&uStack_8+0)) = SUB84(in_dr12,0);
  }
  else {
    puVar1 = (undefined8 *)auStack_10;
    uStack_8 = in_dr14;
  }
  *(undefined4 *)((int)puVar1 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ain0 + (int)unaff_r13),in_fr1);
    dVar6 = (double)CONCAT44(*(undefined4 *)(ain0 + (int)unaff_r14),*unaff_r14);
  }
  else {
    dVar6 = *(double *)(ain0 + (int)unaff_r14);
    dVar2 = *(double *)(ain0 + (int)unaff_r13);
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - (float)((ulonglong)dVar2 >> 0x20),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 - dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(unaff_r13 + 1),*(undefined4 *)unaff_r13);
  }
  else {
    in_xd2 = *unaff_r13;
    dVar3 = unaff_r13[1];
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),SUB84(dVar6,0) - SUB84(dVar3,0));
  }
  else {
    dVar6 = dVar6 - dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),unaff_r14[2]);
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),(int)((ulonglong)dVar6 >> 0x20));
  }
  else {
    in_xd12 = *(double *)(unaff_r14 + 2);
    in_xd2 = dVar6;
  }
  uVar4 = SUB84(in_xd2,0);
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(in_dr12,0) - (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar5 = SUB84(in_dr12 - dVar3 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    in_xd12 = (double)CONCAT44(fVar5,SUB84(dVar2,0));
    uVar4 = in_fr5;
  }
  FUN_8c258030(ar4,ar5,ar6,ar7,*(undefined4 *)((int)puVar1 + -4));
  if (in_FPSCR_SZ == '\0') {
    in_xd12 = (double)CONCAT44((int)((ulonglong)in_xd12 >> 0x20),uVar4);
    dVar2 = (double)CONCAT44(unaff_r14[3],*(undefined4 *)((int)unaff_r13 + 0xc));
  }
  else {
    dVar2 = *(double *)(unaff_r14 + 3);
  }
  if (in_FPSCR_PR == '\0') {
    bVar7 = (float)((ulonglong)in_xd12 >> 0x20) < (float)((ulonglong)dVar2 >> 0x20) + SUB84(dVar2,0)
    ;
  }
  else {
    bVar7 = in_xd12 < dVar2 + dVar2;
  }
  return (uint)bVar7;
}

__asm__(".globl _FUN_8c233d20\n.set _FUN_8c233d20, _FUN_8c233d20_def\n");
