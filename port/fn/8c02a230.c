#include "../decls.h"
float * FUN_8c02a230_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  float fVar2;
  undefined8 in_xd14;
  undefined4 in_PR;
  char cVar3;
  
  cVar3 = '\0';
  fVar2 = *(float *)(*(int *)(ar5 + 4) + 0x14);
  *(float *)(*(int *)(ar5 + 4) + 0x14) = fVar2 * *(float *)(ar4 + 0x468);
  FUN_8c256fec(0,ar5,ar6,ar7,in_PR);
  FUN_8c02a29c(ar4,*(undefined4 *)(ar5 + 4),ar6,ar7);
  pfVar1 = (float *)(*(int *)(ar5 + 4) + 0x14);
  if (cVar3 == '\0') {
    *pfVar1 = fVar2;
  }
  else {
    *(undefined8 *)pfVar1 = in_xd14;
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c02a230\n.set _FUN_8c02a230, _FUN_8c02a230_def\n");
