#include "../decls.h"
int FUN_8c0cf9b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  short *ar4_00;
  code *ar5_00;
  code *ar6_00;
  undefined4 ar7_00;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  code *pcVar7;
  double dVar6;
  undefined4 uVar8;
  undefined8 in_dr2;
  double dVar9;
  char cVar10;
  char cVar11;
  undefined4 in_stack_ffffff3c;
  short asStack_7c [52];
  
  cVar11 = '\0';
  cVar10 = '\0';
  ar7_00 = 4;
  ar6_00 = free_if_nonnull_wrap_016660;
  ar5_00 = FUN_8c016690;
  ar4_00 = asStack_7c;
  FUN_8c010120(ar4_00,FUN_8c016690,free_if_nonnull_wrap_016660,4,0x19);
  iVar2 = 0;
  for (iVar3 = 0; uVar8 = (undefined4)in_dr2, iVar3 < 5; iVar3 = iVar3 + 1) {
    for (iVar4 = 0; iVar4 < 5; iVar4 = iVar4 + 1) {
      ar4_00 = (short *)(iVar3 * 0x78 + ar4 + iVar4 * 0x18 + 0x174);
      iVar1 = get_field_14_0cf620(ar4_00,ar5_00,ar6_00,ar7_00);
      if (iVar1 != 1) {
        if (cVar11 == '\0') {
          fVar5 = *(float *)(iVar3 * 0x78 + ar4 + iVar4 * 0x18 + 0x178);
          pcVar7 = (code *)0x44278000;
        }
        else {
          fVar5 = 670.0;
          pcVar7 = vec_delete_array;
        }
        if (fVar5 != (float)(uint)pcVar7) {
          asStack_7c[iVar2 * 2] = (short)iVar4;
          asStack_7c[iVar2 * 2 + 1] = (short)iVar3;
          iVar2 = iVar2 + 1;
        }
      }
    }
  }
  if (iVar2 == 0) {
    vec_delete_array(asStack_7c,free_if_nonnull_wrap_016660,4,0x19,in_stack_ffffff3c);
    iVar2 = 0;
  }
  else if (iVar2 == 1) {
    iVar2 = asStack_7c[1] * 0x78 + ar4 + asStack_7c[0] * 0x18 + 0x174;
    vec_delete_array(asStack_7c,free_if_nonnull_wrap_016660,4,0x19,in_stack_ffffff3c);
  }
  else {
    iVar3 = rand(ar4_00,ar5_00,ar6_00,ar7_00);
    if (cVar10 == '\0') {
      dVar9 = (double)CONCAT44((float)iVar2,uVar8);
    }
    else {
      dVar9 = (double)iVar2;
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(0x47000000,(float)iVar3);
    }
    else {
      dVar6 = 3.428006581677106e-307;
    }
    if (cVar10 == '\0') {
      iVar3 = (int)((float)((ulonglong)dVar9 >> 0x20) *
                   (SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20)));
    }
    else {
      iVar3 = (int)(dVar9 * (dVar6 / dVar6));
    }
    if (iVar2 == iVar3) {
      iVar3 = iVar2 + -1;
    }
    iVar2 = asStack_7c[iVar3 * 2 + 1] * 0x78 + ar4 + asStack_7c[iVar3 * 2] * 0x18 + 0x174;
    vec_delete_array(asStack_7c,free_if_nonnull_wrap_016660,4,0x19,iVar3);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0cf9b4\n.set _FUN_8c0cf9b4, _FUN_8c0cf9b4_def\n");
