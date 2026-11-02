#include "../decls.h"
undefined4 FUN_8c0125b6_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_PR;
  char cVar4;
  undefined1 uStack_30;
  byte abStack_2f [3];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined2 uStack_24;
  ushort uStack_22;
  undefined4 uStack_20;
  
  cVar4 = '\0';
  uStack_24 = (undefined2)in_fr4;
  uStack_22 = (ushort)((uint)in_fr4 >> 0x10);
  uStack_28 = in_fr5;
  uStack_20 = in_PR;
  iVar1 = FUN_8c010df4(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if (cVar4 == '\0') {
      dVar3 = 0.0;
      dVar2 = (double)CONCAT44(CONCAT22(uStack_22,uStack_24),uStack_28);
    }
    else {
      dVar3 = -7.491824698174533e-251;
      dVar2 = (double)CONCAT44(uStack_20,CONCAT22(uStack_22,uStack_24));
    }
    if (dVar2 == dVar3) {
      *ar4 = 0;
      return &DAT_8c0126c0;
    }
    iVar1 = (uStack_22 >> 4 & 0x7ff) - 0x3fe;
    *ar4 = iVar1;
    if (iVar1 == -0x3fe) {
      *ar4 = *ar4 + 1;
      uStack_22 = uStack_22 & 0x800f;
      FUN_8c012a24(&uStack_30,&uStack_24,ar6,ar7);
      FUN_8c012a24(auStack_2c,&uStack_28,ar6,ar7);
      while ((abStack_2f[0] & 0x10) == 0) {
        FUN_8c012854(abStack_2f,7,ar6,ar7);
        *ar4 = *ar4 + -1;
      }
      FUN_8c012a24(&uStack_24,&uStack_30,ar6,ar7);
      FUN_8c012a24(&uStack_28,auStack_2c,ar6,ar7);
    }
  }
  else {
    if (iVar1 == 1) {
      _DAT_8c2787a8 = 0x4b8;
    }
    if (iVar1 == 2) {
      _DAT_8c2787a8 = 0x44c;
    }
  }
  return 0x18;
}

__asm__(".globl _FUN_8c0125b6\n.set _FUN_8c0125b6, _FUN_8c0125b6_def\n");
