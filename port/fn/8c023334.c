#include "../decls.h"
undefined4 FUN_8c023334_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 in_dr0;
  code *pcVar4;
  char cVar5;
  char cVar6;
  float afStack_6c [4];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar6 = '\0';
  cVar5 = '\0';
  uStack_c = 1;
  uVar2 = ar5;
  FUN_8c02327c(ar5,ar5,ar6,ar7);
  fVar1 = fVar3;
  if (cVar6 == '\0') {
    fVar1 = afStack_6c[0];
  }
  afStack_6c[0] = fVar1;
  FUN_8c02327c(ar4,uVar2,ar6,ar7);
  FUN_8c0230f0(ar4,uVar2,ar6,ar7,auStack_40);
  Vec3_ctor_copy(auStack_20,auStack_40,ar6,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_40,0xffffffff,ar6,ar7);
  FUN_8c0230f0(ar5,uVar2,ar6,ar7,auStack_50);
  Vec3_ctor_copy(auStack_30,auStack_50,ar6,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_50,0xffffffff,ar6,ar7);
  Vec3_set_xyz(auStack_5c,uVar2,ar6,ar7);
  FUN_8c023484(auStack_20,auStack_5c,ar6,ar7,afStack_6c);
  Vec3_assign(auStack_20,afStack_6c,ar6,ar7);
  Vec3_dtor(afStack_6c,0xffffffff,ar6,ar7);
  object_dtor_delete(auStack_5c,0xffffffff,ar6,ar7);
  FUN_8c022dac(auStack_20,auStack_30,ar6,ar7);
  if (cVar6 == '\0') {
    pcVar4 = (code *)0x42b40000;
  }
  else {
    fVar3 = 90.0;
    pcVar4 = Vec3_set_xyz;
  }
  if (cVar5 == '\0' && (float)(uint)pcVar4 < fVar3) {
    uVar2 = 4;
  }
  else {
    uVar2 = 3;
  }
  Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c023334\n.set _FUN_8c023334, _FUN_8c023334_def\n");
