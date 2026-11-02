#include "../decls.h"
undefined4 FUN_8c0e4198_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  double *pdVar3;
  double *pdVar4;
  undefined8 in_dr0;
  double dVar5;
  undefined4 in_fr3;
  double dVar6;
  undefined4 in_fr15;
  double in_xd14;
  char cVar7;
  char cVar8;
  undefined4 in_stack_ffffffd0;
  double dStack_30;
  double *pdStack_2c;
  
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  iVar1 = FUN_8c015bb8(ar5,ar5,ar6,ar7);
  iVar1 = **(int **)(*(int *)(iVar1 + 0x2c) + 4);
  if (cVar8 == '\0') {
    in_fr15 = *(undefined4 *)(iVar1 + 0x24);
  }
  else {
    in_xd14 = *(double *)(iVar1 + 0x24);
  }
  pdVar3 = (double *)(iVar1 + 0x24);
  pdVar4 = (double *)(iVar1 + 0x54);
  FUN_8c0bf0e8(ar4 + 0x13b24,ar5_00,ar6,ar7,in_stack_ffffffd0);
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)pdVar3,in_fr3);
    dVar5 = (double)CONCAT44(0x4101999a,uVar2);
  }
  else {
    dVar6 = *pdVar3;
    dVar5 = 2.99312289147034e-309;
  }
  if (cVar7 == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) +
                             SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar5 * dVar5;
  }
  if (cVar8 == '\0') {
    *(int *)pdVar3 = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined4 *)pdVar4 = *(undefined4 *)pdVar3;
  }
  else {
    *pdVar3 = dVar6;
    *pdVar4 = *pdVar3;
  }
  FUN_8c01538c(ar4 + 0x226fc,ar5_00,ar6,ar7);
  uVar2 = 0;
  FUN_8c256328(0,ar5_00,ar6,ar7,in_stack_ffffffd0);
  FUN_8c019058(uVar2,ar5_00,ar6,ar7);
  FUN_8c015af8(ar5,ar5_00,ar6,ar7);
  FUN_8c256210(1,ar5_00,ar6,ar7);
  if (cVar8 == '\0') {
    dStack_30 = (double)CONCAT44(pdVar3,in_fr15);
    *(undefined4 *)pdVar4 = in_fr15;
  }
  else {
    *pdVar4 = in_xd14;
    dStack_30 = in_xd14;
  }
  if (cVar8 == '\0') {
    *(undefined4 *)pdVar3 = in_stack_ffffffd0;
  }
  else {
    *pdVar3 = dStack_30;
  }
  return 0;
}

__asm__(".globl _FUN_8c0e4198\n.set _FUN_8c0e4198, _FUN_8c0e4198_def\n");
