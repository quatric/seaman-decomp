#include "../decls.h"
char * FUN_8c010998_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char *in_r0;
  undefined4 uVar2;
  char *in_r1;
  char *pcVar3;
  
  if (((uint)in_r1 & 3) == 0 && ((uint)in_r0 & 3) == 0) {
    uVar2 = FUN_8c0108fc(ar4);
    return (char *)uVar2;
  }
  cVar1 = *in_r1;
  pcVar3 = in_r0;
  while( true ) {
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return in_r0;
    }
    cVar1 = in_r1[1];
    pcVar3[1] = cVar1;
    if (cVar1 == '\0') {
      return in_r0;
    }
    cVar1 = in_r1[2];
    pcVar3[2] = cVar1;
    if (cVar1 == '\0') {
      return in_r0;
    }
    cVar1 = in_r1[3];
    in_r1 = in_r1 + 4;
    pcVar3[3] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = *in_r1;
    pcVar3 = pcVar3 + 4;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c010998\n.set _FUN_8c010998, _FUN_8c010998_def\n");
