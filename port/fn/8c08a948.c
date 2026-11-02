#include "../decls.h"
undefined4 FUN_8c08a948_def(int ar4,float *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float *ar5_00;
  int ar6_00;
  float fVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  undefined1 auStack_20 [20];
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar6_00 = ar6;
  FUN_8c0f5398(ar4,ar5,ar6,ar7);
  ar5_00 = ar5;
  Vec3_ctor_copy(auStack_20,ar5,ar6_00,ar7);
  if (ar6 == 0) {
    FUN_8c08a9b8(ar4 + 0x5c,ar5_00,ar6_00,ar7);
    if (cVar5 == '\0') {
      fVar2 = *ar5;
      pcVar3 = (code *)0x447a0000;
    }
    else {
      fVar2 = 1000.0;
      pcVar3 = Vec3_dtor;
    }
    if (cVar4 == '\0' && (float)(uint)pcVar3 < fVar2) {
      if (cVar5 == '\0') {
        *ar5 = 1000.0;
      }
      else {
        ar5[0] = 1000.0;
        ar5[1] = -1.0028283e-31;
      }
    }
  }
  uVar1 = Vec3_dtor(auStack_20,0xffffffff,ar6_00,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c08a948\n.set _FUN_8c08a948, _FUN_8c08a948_def\n");
