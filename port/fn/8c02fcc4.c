#include "../decls.h"
uint FUN_8c02fcc4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  float *ar6_00;
  float fVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  float fStack_3c;
  float fStack_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar5_00 = ar5;
  uVar1 = FUN_8c1011b0(*(undefined4 *)(ar5[6] + 0x7cc),ar5,ar6,ar7);
  if ((ushort)uVar1 < 5) {
    FUN_8c02f670(*ar5,ar5_00,ar6,ar7,auStack_34);
    Vec3_ctor_copy(auStack_24,auStack_34,ar6,ar7);
    Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
    ar6_00 = &fStack_3c;
    FUN_8c256294(0,auStack_14,ar6_00,ar7);
    if (cVar5 == '\0') {
      fVar3 = 150.0;
      fVar2 = fStack_3c;
    }
    else {
      fVar2 = 150.0;
      fVar3 = 500.0;
    }
    if (cVar4 == '\0' && fVar3 < fVar2) {
      if (cVar5 == '\0') {
        fVar2 = 500.0;
      }
      else {
        fStack_3c = 500.0;
        fVar2 = 80.0;
      }
      if (cVar4 == '\0' && fStack_3c < fVar2) {
        if (cVar5 == '\0') {
          fVar3 = 80.0;
          fVar2 = fStack_38;
        }
        else {
          fVar2 = 80.0;
          fVar3 = 400.0;
        }
        if (cVar4 == '\0' && fVar3 < fVar2) {
          if (cVar5 == '\0') {
            fVar2 = 400.0;
          }
          else {
            fStack_38 = 400.0;
            fVar2 = 1.82169e-43;
          }
          if (cVar4 == '\0' && fStack_38 < fVar2) {
            Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
            return 1;
          }
        }
      }
    }
    Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
  }
  return (uint)(*(char *)(ar4 + 0x82) == '\x01');
}

__asm__(".globl _FUN_8c02fcc4\n.set _FUN_8c02fcc4, _FUN_8c02fcc4_def\n");
