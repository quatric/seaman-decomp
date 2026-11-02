#include "../decls.h"
undefined4 FUN_8c029d64_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  double *pdVar2;
  undefined4 ar5_00;
  double dVar3;
  undefined4 uVar4;
  double in_xd14;
  undefined4 in_PR;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar4 = *(undefined4 *)(*(int *)(ar5 + 4) + 0x14);
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  uVar1 = ar6;
  FUN_8c029af0(ar4,ar5,ar6,ar7);
  pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
  dVar3 = in_xd14;
  if (cVar6 == '\0') {
    dVar3 = (double)CONCAT44(uVar4,*(undefined4 *)(ar4 + 0x5c));
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * SUB84(dVar3,0),SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar3;
  }
  if (cVar6 == '\0') {
    *(int *)pdVar2 = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *pdVar2 = dVar3;
  }
  ar5_00 = *(undefined4 *)(ar5 + 4);
  FUN_8c02a29c(ar4,ar5_00,uVar1,ar7);
  pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
  if (cVar6 == '\0') {
    *(undefined4 *)pdVar2 = uVar4;
  }
  else {
    *pdVar2 = in_xd14;
  }
  if (*(int *)(ar5 + 0x2c) != 0) {
    ar5_00 = *(undefined4 *)(ar5 + 0x2c);
    FUN_8c029d64(ar4,ar5_00,ar6,ar7);
    uVar1 = ar6;
  }
  uVar1 = FUN_8c256210(1,ar5_00,uVar1,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c029d64\n.set _FUN_8c029d64, _FUN_8c029d64_def\n");
