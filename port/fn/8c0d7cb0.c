#include "../decls.h"
int * FUN_8c0d7cb0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float fVar4;
  undefined8 in_dr0;
  undefined8 uVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  cVar7 = '\0';
  cVar6 = '\0';
  piVar2 = (int *)0x0;
  if (*ar4 != 0) {
    for (uVar3 = 0; fVar4 = (float)in_dr0, uVar3 < (uint)ar4[4]; uVar3 = uVar3 + 1) {
      iVar1 = get_field_2c_0d7ca8(uVar3 * 0x38 + ar4[3],ar5,ar6,ar7);
      if (iVar1 == 1) {
        piVar2 = (int *)(uVar3 * 0x38 + ar4[3]);
        (**(code **)(*piVar2 + 0xc))(piVar2,ar5,ar6,ar7);
      }
    }
    ar4[1] = ar4[1] + 1;
    piVar2 = (int *)*ar4;
    if (piVar2 == (int *)0x1) {
      if (cVar7 == '\0') {
        fVar4 = (float)ar4[5];
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 5);
      }
      if (cVar6 == '\0') {
        fVar4 = fVar4 + 1.0;
      }
      else {
        fVar4 = SUB84((double)CONCAT44(0x3f800000,fVar4) + (double)CONCAT44(0x3f800000,fVar4),0);
      }
      uStack_28 = in_xd0;
      if (cVar7 == '\0') {
        uStack_28 = CONCAT44(ar4,fVar4);
      }
      if (cVar7 == '\0') {
        *(undefined4 *)((*(uint*)((uchar*)&uStack_28+4)) + 0x14) = (undefined4)uStack_28;
        uVar5 = CONCAT44(ar4[6],(undefined4)uStack_28);
      }
      else {
        *(undefined8 *)((*(uint*)((uchar*)&uStack_28+4)) + 0x14) = uStack_28;
        uVar5 = *(undefined8 *)(ar4 + 6);
      }
      piVar2 = ar4 + 6;
      if (cVar6 == '\0' && (float)((ulonglong)uVar5 >> 0x20) < (float)uVar5) {
        _DAT_8c437c8c = ar4[1];
        if (cVar7 == '\0') {
          ar4[5] = ar4[6];
        }
        else {
          *(undefined8 *)(ar4 + 5) = *(undefined8 *)(ar4 + 6);
        }
        piVar2 = (int *)0x2;
        *ar4 = 2;
      }
    }
    else if (piVar2 == (int *)0x2) {
      piVar2 = (int *)(uint)ar4[2];
      if (piVar2 < (int *)(uint)ar4[1]) {
        piVar2 = (int *)0x3;
        *ar4 = 3;
      }
    }
    else if (piVar2 == (int *)0x3) {
      if (cVar7 == '\0') {
        fVar4 = (float)ar4[5];
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 5);
      }
      if (cVar6 == '\0') {
        fVar4 = fVar4 - 1.0;
      }
      else {
        fVar4 = SUB84((double)CONCAT44(0x3f800000,fVar4) - (double)CONCAT44(0x3f800000,fVar4),0);
      }
      uStack_30 = in_xd0;
      if (cVar7 == '\0') {
        uStack_30 = CONCAT44(ar4,fVar4);
      }
      if (cVar7 == '\0') {
        *(float *)((*(uint*)((uchar*)&uStack_30+4)) + 0x14) = (float)uStack_30;
        uVar5 = CONCAT44((float)uStack_30,fVar4);
      }
      else {
        *(undefined8 *)((*(uint*)((uchar*)&uStack_30+4)) + 0x14) = uStack_30;
        uVar5 = uStack_30;
      }
      fVar4 = (float)uVar5;
      piVar2 = (int *)0x0;
      if (cVar7 == '\0') {
        fVar4 = (float)uStack_30;
      }
      if (cVar6 == '\0' && fVar4 < 0.0) {
        if (cVar7 == '\0') {
          ar4[5] = 0;
        }
        else {
          *(ulonglong *)(ar4 + 5) = (ulonglong)(uint)fVar4;
        }
        piVar2 = (int *)0x0;
        *ar4 = 0;
      }
    }
  }
  return piVar2;
}

__asm__(".globl _FUN_8c0d7cb0\n.set _FUN_8c0d7cb0, _FUN_8c0d7cb0_def\n");
