#include "../decls.h"
undefined4 FUN_8c010c60_def(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *a6;
  int iVar3;
  char *ain0;
  undefined1 auStack_48 [4];
  byte bStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  byte bStack_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [8];
  char cStack_2c;
  char cStack_2b;
  char cStack_2a;
  char cStack_29;
  char cStack_28;
  char cStack_27;
  char cStack_26;
  char cStack_25;
  char cStack_24;
  char cStack_23;
  char cStack_22;
  char cStack_21;
  
  uVar2 = ar7;
  memset(&cStack_2c,0,4,ar7);
  memmove(&cStack_28,uVar2,8,ar7);
  memset(auStack_38,0,4,ar7);
  memmove(auStack_34,ar5,8,ar7);
  a6 = (undefined1 *)0x10;
  memset(auStack_48,0,0x10,ar7);
  ain0 = &cStack_3d;
  for (iVar3 = 0x42; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_8c012854(auStack_48,0xc,a6,ar7);
    ar7 = 0xc;
    a6 = auStack_38;
    iVar1 = FUN_8c012eac(0,&cStack_2c,auStack_38,0xc);
    if (iVar1 < 0) {
      a6 = (undefined1 *)0xc;
      FUN_8c010af8(&cStack_2c,auStack_38,0xc,ar7,ain0);
    }
    else {
      *ain0 = *ain0 + '\x01';
    }
    FUN_8c012854(&cStack_2c,0xc,a6,ar7);
  }
  for (iVar3 = 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_8c012d5c(auStack_48,0x10,a6,ar7);
  }
  if (((((cStack_2c != '\0') || (cStack_2b != '\0')) || (cStack_2a != '\0')) ||
      (((cStack_29 != '\0' || (cStack_28 != '\0')) ||
       ((cStack_27 != '\0' || ((cStack_26 != '\0' || (cStack_25 != '\0')))))))) ||
     ((cStack_24 != '\0' || (((cStack_23 != '\0' || (cStack_22 != '\0')) || (cStack_21 != '\0'))))))
  {
    bStack_3c = bStack_3c | 0x20;
  }
  *ar4 = (short)ar6 - *ar4;
  if ((((bStack_44 != 0) || (cStack_43 != '\0')) ||
      (((cStack_42 != '\0' || ((cStack_41 != '\0' || (cStack_40 != '\0')))) || (cStack_3f != '\0')))
      ) || (((cStack_3e != '\0' || (*ain0 != '\0')) || (bStack_3c != 0)))) {
    while ((bStack_44 & 0x80) == 0) {
      FUN_8c012854(&bStack_44,9,a6,ar7);
      *ar4 = *ar4 + -1;
    }
  }
  uVar2 = memmove(ar5,&bStack_44,9,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c010c60\n.set _FUN_8c010c60, _FUN_8c010c60_def\n");
