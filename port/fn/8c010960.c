#include "../decls.h"
int FUN_8c010960_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int in_r0;
  int iVar2;
  char *in_r1;
  char *in_r2;
  char *pcVar3;
  
  iVar2 = 0;
  if (in_r0 != 0) {
    pcVar3 = in_r2 + in_r0;
    do {
      cVar1 = *in_r2;
      *in_r1 = cVar1;
      if (pcVar3 <= in_r2 + 1) {
        return (int)cVar1;
      }
      cVar1 = in_r2[1];
      in_r1[1] = cVar1;
      if (pcVar3 <= in_r2 + 2) {
        return (int)cVar1;
      }
      cVar1 = in_r2[2];
      in_r1[2] = cVar1;
      if (pcVar3 <= in_r2 + 3) {
        return (int)cVar1;
      }
      cVar1 = in_r2[3];
      iVar2 = (int)cVar1;
      in_r2 = in_r2 + 4;
      in_r1[3] = cVar1;
      in_r1 = in_r1 + 4;
    } while (in_r2 < pcVar3);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c010960\n.set _FUN_8c010960, _FUN_8c010960_def\n");
