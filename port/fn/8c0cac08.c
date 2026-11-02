#include "../decls.h"
undefined4 FUN_8c0cac08_def(int ar4,undefined4 ar5,undefined4 ar6,float *ar7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 in_fr1;
  double dVar4;
  float fVar5;
  code *pcVar6;
  char cVar7;
  char cVar8;
  undefined4 in_stack_ffffff7c;
  undefined1 auStack_5c [32];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  float afStack_24 [2];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  float afStack_14 [3];
  
  cVar8 = '\0';
  cVar7 = '\0';
  puVar3 = &DAT_8c4372ca;
  if (DAT_8c4372ca == '\0') {
    _DAT_8c4372c8 = 0;
    DAT_8c4372ca = '\x01';
  }
  if (DAT_8c4372ce == '\0') {
    _DAT_8c4372cc = 0;
    DAT_8c4372ce = '\x01';
  }
  puVar2 = &DAT_8c4372d2;
  if (DAT_8c4372d2 == '\0') {
    _DAT_8c4372d0 = 0;
    puVar2 = (undefined1 *)0x1;
    DAT_8c4372d2 = '\x01';
  }
  if (DAT_8c4372d8 == '\0') {
    _DAT_8c4372d4 = 0;
    DAT_8c4372d8 = '\x01';
  }
  if (DAT_8c4372e0 == '\0') {
    _DAT_8c4372dc = 0;
    DAT_8c4372e0 = '\x01';
  }
  Vec3_ctor_zero(auStack_1c,puVar2,&DAT_8c4372ca,ar7);
  Vec3_ctor_zero(auStack_2c,puVar2,puVar3,ar7);
  Vec3_ctor_zero(auStack_3c,puVar2,puVar3,ar7);
  FUN_8c0c84cc(auStack_5c,puVar2,puVar3,ar7);
  if (DAT_8c4372e8 == '\0') {
    _DAT_8c4372e4 =
         (**(code **)(**(int **)(ar4 + 0x10) + 0x144))(*(int **)(ar4 + 0x10),puVar2,puVar3,ar7);
    DAT_8c4372e8 = '\x01';
  }
  if (DAT_8c4372f0 == '\0') {
    _DAT_8c4372ec = 0xaa;
    DAT_8c4372f0 = '\x01';
  }
  iVar1 = (int)*(short *)(ar4 + 0x2d1ac);
  if ((iVar1 < 8) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      FUN_8c019384(0x8c436f4c,puVar2,puVar3,ar7);
      _DAT_8c4372c8 = 0;
      _DAT_8c4372cc = 0;
      _DAT_8c4372d0 = 0;
      _DAT_8c436a18 = 0xffffff;
      _DAT_8c436a14 = 0xffffff;
      _DAT_8c436a10 = 0xffffff;
      _DAT_8c436a0c = 0xffffff;
      ar7 = (float *)0x4;
      puVar3 = &DAT_8c436a0c;
      puVar2 = &DAT_8c4369ec;
      FUN_8c016318(0x8c436978,&DAT_8c4369ec,&DAT_8c436a0c,4,in_stack_ffffff7c);
      _DAT_8c4372dc =
           (**(code **)(**(int **)(ar4 + 8) + 0x10c))(*(int **)(ar4 + 8),puVar2,puVar3,ar7);
      *(undefined2 *)(ar4 + 0x2d1ac) = 1;
      break;
    case 1:
      if (cVar8 == '\0') {
        in_fr1 = *(undefined4 *)(_DAT_8c4372dc + 0x14);
      }
      if (cVar7 == '\0') {
        dVar4 = (double)CONCAT44((float)_DAT_8c4372ec,in_fr1);
      }
      else {
        dVar4 = (double)_DAT_8c4372ec;
      }
      if (cVar7 == '\0' && (float)((ulonglong)dVar4 >> 0x20) < SUB84(dVar4,0)) {
        _DAT_8c4372d4 =
             (**(code **)(**(int **)(ar4 + 8) + 0xe4))(*(int **)(ar4 + 8),puVar2,puVar3,ar7);
        *(undefined2 *)(ar4 + 0x2d1ac) = 2;
      }
      break;
    case 2:
      (**(code **)(**(int **)(ar4 + 8) + 0xe0))(*(int **)(ar4 + 8),puVar2,puVar3,ar7);
      (**(code **)(**(int **)(ar4 + 0x10) + 0xc4))
                (*(int **)(ar4 + 0x10),_DAT_8c4372e4 >> 2,puVar3,ar7);
      _DAT_8c4372cc = _DAT_8c4372c8;
      *(undefined2 *)(ar4 + 0x2d1ac) = 3;
      break;
    case 3:
      (**(code **)(**(int **)(ar4 + 8) + 0xec))(*(int **)(ar4 + 8),puVar2,puVar3,ar7);
      if ((4 < (int)_DAT_8c4372c8 - (int)_DAT_8c4372cc) &&
         ((int)_DAT_8c4372c8 - (int)_DAT_8c4372cc < 0x88)) {
        puVar2 = (undefined1 *)0x2;
        iVar1 = libgcc_divide_helper_01031c((int)_DAT_8c4372c8 - (int)_DAT_8c4372cc,2,puVar3,ar7);
        if (iVar1 == 0) {
          FUN_8c019b38(0x8c436f4c,puVar2,puVar3,ar7);
        }
        else {
          FUN_8c019b48(0x8c436f4c,puVar2,puVar3,ar7);
        }
      }
      iVar1 = (**(code **)(**(int **)(ar4 + 8) + 0xf0))(*(int **)(ar4 + 8),puVar2,puVar3,ar7);
      if (iVar1 == 1) {
        _DAT_8c4372c8 = 0;
        FUN_8c0cb1e0(0x8c436f4c,auStack_1c,auStack_18,afStack_14);
        (**(code **)(*(int *)(_DAT_8c4372d4 + 8) + 0x134))
                  (_DAT_8c4372d4,auStack_3c,auStack_38,auStack_34);
        ar7 = afStack_24;
        puVar3 = auStack_28;
        puVar2 = auStack_2c;
        FUN_8c0507a4(_DAT_8c4372d4,puVar2,puVar3,ar7);
        FUN_8c019560(0x8c436f4c,puVar2,puVar3,ar7);
        *(undefined2 *)(ar4 + 0x2d1ac) = 4;
      }
      break;
    case 4:
      ar7 = afStack_24;
      puVar3 = auStack_28;
      FUN_8c0507a4(_DAT_8c4372d4,auStack_2c,puVar3,ar7);
      if (cVar8 == '\0') {
        fVar5 = 10.0;
      }
      else {
        afStack_24[0] = 10.0;
        fVar5 = 2.58887e-40;
      }
      if (cVar7 == '\0' && afStack_24[0] < fVar5) {
        *(undefined2 *)(ar4 + 0x2d1ac) = 5;
      }
      break;
    case 5:
      FUN_8c019b58(0x8c436f4c,puVar2,puVar3,ar7);
      ar7 = afStack_14;
      puVar3 = auStack_18;
      puVar2 = auStack_1c;
      FUN_8c0cb1e0(0x8c436f4c,puVar2,puVar3,ar7);
      if (cVar8 == '\0') {
        pcVar6 = (code *)0x426b3340;
      }
      else {
        afStack_14[0] = 58.80005;
        pcVar6 = FUN_8c019560;
      }
      if (cVar7 == '\0' && afStack_14[0] < (float)(uint)pcVar6) {
        FUN_8c019560(0x8c436f4c,puVar2,puVar3,ar7);
        *(undefined2 *)(ar4 + 0x2d1ac) = 6;
      }
      break;
    case 6:
      iVar1 = (**(code **)(*(int *)(_DAT_8c4372d4 + 8) + 0xfc))(_DAT_8c4372d4,puVar2,puVar3,ar7);
      if (iVar1 == 1) {
        _DAT_8c4372cc = _DAT_8c4372c8;
        *(undefined2 *)(ar4 + 0x2d1ac) = 7;
      }
      break;
    case 7:
      if (0x59 < (int)_DAT_8c4372c8 - (int)_DAT_8c4372cc) {
        *(undefined2 *)(ar4 + 0x2d1ac) = 0;
        _DAT_8c4372d4 = 0;
        *(undefined4 *)(ar4 + 0x2d15c) = 3;
      }
    }
  }
  (**(code **)(**(int **)(ar4 + 0x10) + 0xc4))(*(int **)(ar4 + 0x10),_DAT_8c4372e4 >> 2,puVar3,ar7);
  (**(code **)(**(int **)(ar4 + 0x10) + 0xc))(*(int **)(ar4 + 0x10),ar5,auStack_5c,ar7);
  puVar3 = auStack_5c;
  (**(code **)(**(int **)(ar4 + 8) + 0x14))(*(int **)(ar4 + 8),ar5,puVar3,ar7);
  Class_129a24_m1_019b68(0x8c436f4c,ar5,puVar3,ar7);
  _DAT_8c4372c8 = _DAT_8c4372c8 + 1;
  FUN_8c0c8480(auStack_5c,0xffffffff,puVar3,ar7);
  Vec3_dtor(auStack_3c,0xffffffff,puVar3,ar7);
  Vec3_dtor(auStack_2c,0xffffffff,puVar3,ar7);
  Vec3_dtor(auStack_1c,0xffffffff,puVar3,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0cac08\n.set _FUN_8c0cac08, _FUN_8c0cac08_def\n");
