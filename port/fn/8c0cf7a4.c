#include "../decls.h"
undefined4 FUN_8c0cf7a4_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
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
  double in_dr0;
  double dVar11;
  undefined8 in_xd0;
  char cVar12;
  char cVar13;
  int in_stack_ffffff88;
  float fStack_38;
  undefined8 auStack_34 [4];
  
  cVar13 = '\0';
  cVar12 = '\0';
  iVar8 = ar6;
  for (iVar6 = 0; iVar6 < 5; iVar6 = iVar6 + 1) {
    for (iVar7 = 0; iVar7 < 5; iVar7 = iVar7 + 1) {
      FUN_8c01538c(ar4 + 0x158,ar5,iVar8,ar7);
      FUN_8c014a94(ar4 + 0x158,(int)(short)ar6,iVar8,ar7);
      sVar1 = (short)iVar7;
      *(short *)(ar4 + 0x508) = sVar1 * 0x32;
      sVar2 = (short)iVar6;
      *(short *)(ar4 + 0x50a) = sVar2 * 0x32 + 0x32;
      *(short *)(ar4 + 0x50c) = sVar1 * 0x32;
      *(short *)(ar4 + 0x50e) = sVar2 * 0x32;
      *(short *)(ar4 + 0x510) = sVar1 * 0x32 + 0x32;
      *(short *)(ar4 + 0x512) = sVar2 * 0x32;
      *(short *)(ar4 + 0x514) = sVar1 * 0x32 + 0x32;
      *(short *)(ar4 + 0x516) = sVar2 * 0x32 + 0x32;
      for (iVar8 = 0; uVar9 = SUB84(in_dr0,0), iVar8 < 4; iVar8 = iVar8 + 1) {
        puVar3 = (undefined8 *)(iVar6 * 0x78 + ar4 + iVar7 * 0x18 + 0x174);
        if (cVar13 == '\0') {
          uVar9 = *(undefined4 *)puVar3;
        }
        else {
          in_xd0 = *puVar3;
        }
        pdVar4 = (double *)(ar4 + iVar8 * 8 + 0x4e8);
        if (cVar13 == '\0') {
          dVar11 = (double)CONCAT44(*(undefined4 *)pdVar4,uVar9);
        }
        else {
          dVar11 = *pdVar4;
        }
        if (cVar12 == '\0') {
          fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
        }
        else {
          fVar10 = SUB84(dVar11 + dVar11,0);
        }
        if (cVar13 == '\0') {
          (&fStack_38)[iVar8 * 2] = fVar10;
        }
        else {
          *(undefined8 *)(&fStack_38 + iVar8 * 2) = in_xd0;
        }
        pfVar5 = (float *)(iVar6 * 0x78 + ar4 + iVar7 * 0x18 + 0x178);
        if (cVar13 == '\0') {
          fVar10 = *pfVar5;
        }
        else {
          in_xd0 = *(undefined8 *)pfVar5;
        }
        pdVar4 = (double *)(ar4 + iVar8 * 8 + 0x4ec);
        if (cVar13 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar10);
        }
        else {
          in_dr0 = *pdVar4;
        }
        if (cVar12 == '\0') {
          in_dr0 = (double)(ulonglong)(uint)(SUB84(in_dr0,0) + (float)((ulonglong)in_dr0 >> 0x20));
        }
        else {
          in_dr0 = in_dr0 + in_dr0;
        }
        if (cVar13 == '\0') {
          *(int *)(auStack_34 + iVar8) = SUB84(in_dr0,0);
        }
        else {
          auStack_34[iVar8] = in_xd0;
        }
        in_stack_ffffff88 = iVar7;
      }
      ar7 = 4;
      iVar8 = ar4 + 0x4c8;
      FUN_8c016318(ar4 + 0x3cc,&fStack_38,iVar8,4,in_stack_ffffff88);
      ar5 = ar4 + 0x508;
      FUN_8c016324(ar4 + 0x3cc,ar5,iVar8,ar7);
      FUN_8c016340(ar4 + 0x3cc,ar5,iVar8,ar7);
    }
  }
  return 5;
}

__asm__(".globl _FUN_8c0cf7a4\n.set _FUN_8c0cf7a4, _FUN_8c0cf7a4_def\n");
