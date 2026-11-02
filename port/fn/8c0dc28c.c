#include "../decls.h"
undefined4 FUN_8c0dc28c_def(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  piVar3 = ar5;
  iVar1 = FUN_8c0dc520(ar5,ar5,ar6,ar7);
  if ((((iVar1 == 1) && (ar4[0x275] == ar4[0x2b2])) ||
      ((iVar1 = FUN_8c0dc520(ar5,piVar3,ar6,ar7), iVar1 == 1 && (ar4[0x275] == 0)))) ||
     (ar4[0x2b2] == 0)) {
    if (cVar8 == '\0') {
      uVar5 = CONCAT44(ar4[0x2b0],ar4[0x29c]);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x29c);
      uVar5 = *(undefined8 *)(ar4 + 0x2b0);
    }
    if (cVar7 != '\0' || (float)((ulonglong)uVar5 >> 0x20) <= (float)uVar5) {
      if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44(0x43160000,ar4[0x29c]);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x29c);
        dVar6 = 5.66204084872116e-311;
      }
      if (cVar7 == '\0') {
        fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar8 == '\0') {
        ar4[0x2a8] = (int)fVar4;
      }
      else {
        *(undefined8 *)(ar4 + 0x2a8) = in_xd0;
      }
    }
    else if (cVar8 == '\0') {
      ar4[0x2a8] = ar4[0x2b0];
    }
    else {
      *(undefined8 *)(ar4 + 0x2a8) = *(undefined8 *)(ar4 + 0x2b0);
    }
    FUN_8c0dca2c(ar4,ar5,ar6,ar7);
  }
  else {
    iVar1 = FUN_8c0dc520(ar5,piVar3,ar6,ar7);
    if ((iVar1 == 1) && (ar4[0x275] != ar4[0x2b2])) {
      piVar3 = (int *)(uint)ar4[0x275];
      FUN_8c0d69a8(ar4 + 0x29a,piVar3,ar6,ar7);
      ar4[0x275] = 0;
      FUN_8c0c51c4(ar5,piVar3,ar6,ar7);
    }
    iVar1 = get_field_24_05c284(ar4[0x2b2],piVar3,ar6,ar7);
    if ((iVar1 == 0xe) &&
       (uVar2 = (**(code **)(*(int *)(ar4[0x2b2] + 8) + 0x148))(ar4[0x2b2],piVar3,ar6,ar7),
       (short)uVar2 == 1)) {
      if (cVar8 == '\0') {
        uVar5 = CONCAT44(ar4[0x2b0],ar4[0x29c]);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x29c);
        uVar5 = *(undefined8 *)(ar4 + 0x2b0);
      }
      if (cVar7 != '\0' || (float)((ulonglong)uVar5 >> 0x20) <= (float)uVar5) {
        if (cVar8 == '\0') {
          dVar6 = (double)CONCAT44(0x42480000,ar4[0x29c]);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x29c);
          dVar6 = -1.4004953740190736e-250;
        }
        if (cVar7 == '\0') {
          fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar6 + dVar6,0);
        }
        if (cVar8 == '\0') {
          ar4[0x2a8] = (int)fVar4;
        }
        else {
          *(undefined8 *)(ar4 + 0x2a8) = in_xd0;
        }
      }
      else if (cVar8 == '\0') {
        ar4[0x2a8] = ar4[0x2b0];
      }
      else {
        *(undefined8 *)(ar4 + 0x2a8) = *(undefined8 *)(ar4 + 0x2b0);
      }
      FUN_8c0dca2c(ar4,ar5,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c100b20(ar5,piVar3,ar6,ar7);
      if (iVar1 == 1) {
        FUN_8c1004b4(ar5,piVar3,ar6,ar7);
      }
      else {
        iVar1 = FUN_8c100b84(ar5,piVar3,ar6,ar7);
        if (iVar1 == 1) {
          FUN_8c10052c(ar5,piVar3,ar6,ar7);
        }
      }
      iVar1 = FUN_8c100be8(ar5,piVar3,ar6,ar7);
      if (iVar1 == 1) {
        FUN_8c1005a4(ar5,piVar3,ar6,ar7);
      }
      else {
        iVar1 = FUN_8c100c34(ar5,piVar3,ar6,ar7);
        if (iVar1 == 1) {
          FUN_8c10061c(ar5,piVar3,ar6,ar7);
        }
      }
      piVar3 = ar5;
      FUN_8c0dc990(ar4,ar5,ar6,ar7);
      iVar1 = FUN_8c10022c(ar5,piVar3,ar6,ar7);
      if (iVar1 == 1) {
        piVar3 = ar4 + 0x29a;
        (**(code **)(*ar4 + 0x68))(ar4,piVar3,ar6,ar7);
      }
      FUN_8c1002a8(ar5,piVar3,ar6,ar7);
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c0dc28c\n.set _FUN_8c0dc28c, _FUN_8c0dc28c_def\n");
