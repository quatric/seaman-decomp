#include "../decls.h"
int FUN_8c091854_def(undefined4 ar4,int *ar5,float *ar6,undefined1 *ar7)

{
  int iVar1;
  int ar4_00;
  undefined4 uVar2;
  undefined1 *ar5_00;
  int iVar3;
  int a6;
  float fVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  undefined1 auStack_28 [4];
  float fStack_24;
  undefined1 auStack_20 [12];
  
  cVar7 = '\0';
  cVar6 = '\0';
  iVar3 = 0;
  a6 = 0;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,10,ar6,ar7);
  while ((a6 < iVar1 && (iVar3 == 0))) {
    ar4_00 = (**(code **)(*ar5 + 0x100))(ar5,10,a6,ar7);
    ar7 = auStack_20;
    ar6 = &fStack_24;
    ar5_00 = auStack_28;
    FUN_8c0507a4(ar4_00,ar5_00,ar6,ar7);
    uVar2 = (**(code **)(*(int *)(ar4_00 + 8) + 0x148))(ar4_00,ar5_00,ar6,ar7);
    if ((short)uVar2 == 2) {
      if (cVar7 == '\0') {
        pcVar5 = (code *)0x42dc0000;
        fVar4 = fStack_24;
      }
      else {
        fVar4 = 110.0;
        pcVar5 = Vec3_dtor;
      }
      if (cVar6 != '\0' || (float)(uint)pcVar5 <= fVar4) {
        iVar3 = 1;
      }
    }
    a6 = a6 + 1;
  }
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  return iVar3;
}

__asm__(".globl _FUN_8c091854\n.set _FUN_8c091854, _FUN_8c091854_def\n");
