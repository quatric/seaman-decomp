#include "../decls.h"
undefined4 FUN_8c0dfa84_def(int ar4,undefined4 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  int iVar2;
  int iVar3;
  float fVar5;
  double dVar4;
  double in_dr14;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [12];
  undefined1 auStack_a0 [132];
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  FUN_8c0191e4(auStack_a0,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_b0,ar5_00,ar6,ar7);
  if (cVar8 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),0x7f7fffff);
  }
  iVar3 = 0;
  iVar2 = 0;
  if (*(int *)(ar4 + 0x9d8) == 0) {
    iVar2 = FUN_8c0dac50(ar4,ar5,ar6,ar7);
  }
  if (iVar2 == 0) {
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c1264b8,*ar5);
    }
    else {
      dVar4 = (double)CONCAT44(_UNK_8c1264bc,DAT_8c1264b8);
    }
    if (SUB84(dVar4,0) == (float)((ulonglong)dVar4 >> 0x20)) {
      *(undefined4 *)(ar4 + 0x9d8) = 0;
    }
    else {
      for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
        ar7 = auStack_ac;
        ar6 = auStack_b0;
        FUN_8c019508(auStack_a0,ar4 + iVar2 * 0x16c + 0x22d4c,ar6,ar7);
        uVar1 = SUB84(in_dr14,0);
        FUN_8c022fc0(auStack_b0,ar5,ar6,ar7);
        fVar5 = (float)((ulonglong)dVar4 >> 0x20);
        in_dr14 = dVar4;
        if (cVar8 == '\0') {
          in_dr14 = (double)CONCAT44(fVar5,uVar1);
        }
        if (cVar7 == '\0') {
          bVar6 = fVar5 < SUB84(in_dr14,0);
        }
        else {
          bVar6 = dVar4 < in_dr14;
        }
        if (bVar6) {
          if (cVar8 == '\0') {
            uVar1 = (undefined4)((ulonglong)in_dr14 >> 0x20);
            in_dr14 = (double)CONCAT44(uVar1,uVar1);
          }
          iVar3 = ar4 + iVar2 * 0x16c + 0x22d48;
        }
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x428c0000,SUB84(dVar4,0));
      }
      else {
        dVar4 = 5.33949302018055e-311;
      }
      if (cVar7 == '\0') {
        bVar6 = SUB84(in_dr14,0) < (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        bVar6 = in_dr14 < dVar4;
      }
      if (bVar6) {
        *(int *)(ar4 + 0x9d8) = iVar3;
      }
      else {
        *(undefined4 *)(ar4 + 0x9d8) = 0;
      }
    }
  }
  uVar1 = *(undefined4 *)(ar4 + 0x9d4);
  Vec3_dtor(auStack_b0,0xffffffff,ar6,ar7);
  free_if_nonnull_wrap_019270(auStack_a0,0xffffffff,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0dfa84\n.set _FUN_8c0dfa84, _FUN_8c0dfa84_def\n");
