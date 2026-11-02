#include "../decls.h"
undefined4 FUN_8c03263c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined1 *ar5_01;
  ulonglong uVar1;
  double dVar2;
  undefined8 in_dr4;
  float fVar3;
  undefined4 in_fr7;
  undefined4 in_fr6;
  float fVar5;
  double dVar4;
  undefined8 in_xd12;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined4 in_stack_00000000;
  float fStack_54;
  float fStack_48;
  float afStack_44 [4];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar3 = (float)((ulonglong)in_dr4 >> 0x20);
  dVar4 = (double)CONCAT44((int)in_dr4,in_fr7);
  uVar1 = (ulonglong)(uint)fVar3;
  ar5_00 = ar5;
  fVar5 = fStack_48;
  if (0.0 < fVar3) {
    uVar1 = CONCAT44(0xbf000000,fVar3);
    FUN_8c032ab0(ar4,ar5,ar6,ar7);
    fVar5 = (float)(uVar1 >> 0x20);
    if (cVar8 == '\0') {
      fVar5 = fStack_48;
    }
  }
  fStack_48 = fVar5;
  dVar2 = (double)(uVar1 & 0xffffffff);
  fVar5 = (float)((ulonglong)dVar4 >> 0x20);
  if (cVar7 == '\0') {
    bVar6 = 0.0 < fVar5;
  }
  else {
    bVar6 = dVar2 < dVar4;
  }
  if (bVar6) {
    if (cVar8 == '\0') {
      dVar2 = (double)CONCAT44(0xbf000000,(int)uVar1);
    }
    else {
      dVar2 = -8.365700502157518e-251;
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(fVar5 * (float)((ulonglong)dVar2 >> 0x20),SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 * dVar2;
    }
    FUN_8c032ab0(ar4,ar5_00,ar6,ar7);
  }
  if (cVar8 == '\0') {
    dVar2 = (double)CONCAT44(in_fr6,SUB84(dVar2,0));
  }
  else {
    dVar2 = (double)CONCAT44(ar5,in_fr6);
  }
  if (cVar7 == '\0') {
    bVar6 = SUB84(dVar4,0) < (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    bVar6 = dVar4 < dVar2;
  }
  if (bVar6) {
    fStack_48 = SUB84(dVar4,0);
    if (cVar8 != '\0') {
      fStack_48 = (float)in_xd12;
      afStack_44[0] = (float)((ulonglong)in_xd12 >> 0x20);
    }
  }
  else {
    FUN_8c032ab0(ar4,ar5_00,ar6,ar7);
    fVar5 = (float)((ulonglong)dVar2 >> 0x20);
    fStack_48 = fVar5;
    if (cVar8 != '\0') {
      fStack_54 = SUB84(dVar2,0);
      fStack_48 = fStack_54;
      afStack_44[0] = fVar5;
    }
  }
  Vec3_set_xyz(auStack_24,ar5_00,ar6,ar7);
  ar5_01 = auStack_24;
  FUN_8c023484(ar5,ar5_01,ar6,ar7,auStack_34);
  FUN_8c02374c(auStack_34,ar5_01,ar6,ar7);
  Vec3_scale(afStack_44,&fStack_48,ar6,ar7,in_stack_00000000);
  Vec3_dtor(afStack_44,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
  object_dtor_delete(auStack_24,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c03263c\n.set _FUN_8c03263c, _FUN_8c03263c_def\n");
