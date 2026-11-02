#include "../decls.h"
undefined4 FUN_8c03525c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  float *ar6_00;
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  cVar4 = '\0';
  cVar3 = '\0';
  FUN_8c02f670(*(undefined4 *)(ar5 + 4),ar5,ar6,ar7,auStack_30);
  Vec3_ctor_copy(auStack_20,auStack_30,ar6,ar7);
  Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  ar6_00 = &fStack_38;
  FUN_8c256294(0,auStack_10,ar6_00,ar7);
  if (cVar4 == '\0') {
    fVar2 = 150.0;
    fVar1 = fStack_38;
  }
  else {
    fVar1 = 150.0;
    fVar2 = 500.0;
  }
  if (cVar3 == '\0' && fVar2 < fVar1) {
    if (cVar4 == '\0') {
      fVar1 = 500.0;
    }
    else {
      fStack_38 = 500.0;
      fVar1 = 80.0;
    }
    if (cVar3 == '\0' && fStack_38 < fVar1) {
      if (cVar4 == '\0') {
        fVar2 = 80.0;
        fVar1 = fStack_34;
      }
      else {
        fVar1 = 80.0;
        fVar2 = 400.0;
      }
      if (cVar3 == '\0' && fVar2 < fVar1) {
        if (cVar4 == '\0') {
          fVar1 = 400.0;
        }
        else {
          fStack_34 = 400.0;
          fVar1 = -9.917997e+27;
        }
        if (cVar3 == '\0' && fStack_34 < fVar1) {
          Vec3_dtor(auStack_20,0xffffffff,ar6_00,ar7);
          return 1;
        }
      }
    }
  }
  Vec3_dtor(auStack_20,0xffffffff,ar6_00,ar7);
  return 0;
}

__asm__(".globl _FUN_8c03525c\n.set _FUN_8c03525c, _FUN_8c03525c_def\n");
