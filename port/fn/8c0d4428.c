#include "../decls.h"
undefined4 * FUN_8c0d4428_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int *piVar2;
  float *pfVar3;
  int ar5_00;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float fVar8;
  code *pcVar9;
  double dVar7;
  undefined8 in_xd0;
  undefined4 in_PR;
  int ar4_00;
  char cVar10;
  char cVar11;
  undefined4 in_stack_ffffff9c;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  
  cVar11 = '\0';
  cVar10 = '\0';
  ar5_00 = ar5;
  uStack_1c = in_PR;
  piVar2 = (int *)get_field_4_0253e4(ar4 + 8,ar5,ar6,ar7);
  uVar4 = *(undefined4 *)(*piVar2 + 8);
  *(undefined4 *)(*piVar2 + 8) = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar2 + 8);
  *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar2 + 8) = uVar4;
  FUN_8c01538c(ar4 + 8,ar5_00,ar6,ar7);
  FUN_8c015af8(ar4 + 0x1c,ar5_00,ar6,ar7);
  for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
    FUN_8c0d43cc(&fStack_24,ar5_00,ar6,ar7);
    if (cVar11 == '\0') {
      fVar8 = -150.0;
      fVar6 = fStack_24;
    }
    else {
      in_xd0 = CONCAT44(fStack_20,fStack_24);
      fVar6 = -150.0;
      fVar8 = 800.0;
    }
    if (cVar10 != '\0' || fVar8 <= fVar6) {
      if (cVar11 == '\0') {
        fVar8 = 800.0;
        fVar6 = fStack_24;
      }
      else {
        in_xd0 = CONCAT44(fStack_20,fStack_24);
        fVar6 = 800.0;
        fVar8 = -100.0;
      }
      if (cVar10 != '\0' || fVar6 <= fVar8) {
        if (cVar11 == '\0') {
          fVar8 = -100.0;
          fVar6 = fStack_20;
        }
        else {
          in_xd0 = CONCAT44(uStack_1c,fStack_20);
          fVar6 = -100.0;
          fVar8 = 600.0;
        }
        if (cVar10 != '\0' || fVar8 <= fVar6) {
          if (cVar11 == '\0') {
            fVar8 = 600.0;
            fVar6 = fStack_20;
          }
          else {
            in_xd0 = CONCAT44(uStack_1c,fStack_20);
            fVar6 = 600.0;
            fVar8 = 4.87652e-43;
          }
          if (cVar10 != '\0' || fVar6 <= fVar8) {
            pfVar3 = (float *)(ar5 + iVar5 * 0x16c + 0x15c);
            if (cVar11 == '\0') {
              fVar6 = *pfVar3;
              pcVar9 = (code *)0xbf6b851f;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar3;
              fVar6 = -0.92;
              pcVar9 = FUN_8c256328;
            }
            if (cVar10 != '\0' || (float)(uint)pcVar9 <= fVar6) {
              uVar4 = 0;
              FUN_8c256328(0,ar5_00,ar6,ar7,in_stack_ffffff9c);
              FUN_8c019058(uVar4,ar5_00,ar6,ar7);
              FUN_8c019160(uVar4,ar5_00,ar6,ar7);
              FUN_8c015af8(ar4 + iVar5 * 4 + 0x20,ar5_00,ar6,ar7);
              FUN_8c256210(1,ar5_00,ar6,ar7);
            }
          }
        }
      }
    }
  }
  uVar4 = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar2 + 8);
  iVar5 = (int)*(short *)(ar4 + 4);
  *(undefined4 *)(iVar5 * 0xc + *piVar2 + 8) = *(undefined4 *)(*piVar2 + 8);
  *(undefined4 *)(*piVar2 + 8) = uVar4;
  FUN_8c0d49cc(ar4,ar5_00,ar6,ar7);
  FUN_8c0d4a90(ar4,ar5_00,ar6,ar7);
  FUN_8c0d5d28(ar4,ar5_00,ar6,ar7);
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,_DAT_8c437c70);
  }
  else {
    dVar7 = 1.4411521878487204e+18;
    in_xd0 = _DAT_8c437c70;
  }
  if (cVar10 == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.745782517784109e-250;
  }
  if (cVar10 == '\0') {
    ar4_00 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    ar4_00 = (int)(dVar7 / dVar7);
  }
  FUN_8c25747c(ar4_00,ar5_00,ar6,ar7,iVar5);
  FUN_8c010e38(ar4_00,ar5_00,ar6,ar7,iVar5);
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x41200000,(int)_DAT_8c437c70);
  }
  else {
    dVar7 = 6.207226606352174e-78;
    in_xd0 = _DAT_8c437c70;
  }
  if (cVar10 == '\0') {
    fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 + dVar7,0);
  }
  if (cVar11 == '\0') {
    _DAT_8c437c70 = CONCAT44(_DAT_8c437c74,fVar6);
    pcVar9 = (code *)0x43b40000;
  }
  else {
    fVar6 = 360.0;
    pcVar9 = FUN_8c25747c;
    _DAT_8c437c70 = in_xd0;
  }
  uVar1 = _DAT_8c437c70;
  if (cVar10 != '\0' || (float)(uint)pcVar9 <= fVar6) {
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x43b40000,(int)_DAT_8c437c70);
    }
    else {
      dVar7 = -3.745782517784109e-250;
      in_xd0 = _DAT_8c437c70;
    }
    if (cVar10 == '\0') {
      fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    uVar1 = in_xd0;
    if (cVar11 == '\0') {
      _DAT_8c437c70 = CONCAT44(_DAT_8c437c74,fVar6);
      uVar1 = _DAT_8c437c70;
    }
  }
  _DAT_8c437c70 = uVar1;
  return &DAT_8c0d46bc;
}

__asm__(".globl _FUN_8c0d4428\n.set _FUN_8c0d4428, _FUN_8c0d4428_def\n");
