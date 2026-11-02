#include "../decls.h"
undefined4 FUN_8c0d3d6c_def(ulonglong *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  float fVar9;
  double dVar7;
  ulonglong uVar8;
  code *pcVar10;
  double in_xd0;
  int ar4_01;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  if (((ar4[0xbd] & 1) == 0) &&
     (*(short *)((int)ar4 + 4) = *(short *)((int)ar4 + 4) + 1, *(short *)((int)ar4 + 4) == 0x19)) {
    *(undefined2 *)((int)ar4 + 4) = 0;
  }
  uVar3 = ar5;
  iVar1 = get_field_d0_0d3f70((int)ar4 + 0x34,ar5,ar6,ar7);
  ar4_00 = FUN_8c0d3f50((int)ar4 + 0x34,ar5,ar6,ar7);
  for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
    if (cVar12 == '\0') {
      dVar6 = (double)CONCAT44(0x47800000,_DAT_8c437c68);
    }
    else {
      dVar6 = 1.4411521878487204e+18;
      in_xd0 = _DAT_8c437c68;
    }
    if (cVar11 == '\0') {
      fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar12 == '\0') {
      dVar6 = (double)CONCAT44(0x43b40000,fVar5);
    }
    else {
      dVar6 = -3.745782517784109e-250;
    }
    if (cVar11 == '\0') {
      fVar9 = (float)((ulonglong)dVar6 >> 0x20);
      fVar5 = SUB84(dVar6,0) / fVar9;
      dVar6 = (double)CONCAT44(fVar9,fVar5);
      ar4_01 = (int)fVar5;
    }
    else {
      dVar6 = dVar6 / dVar6;
      ar4_01 = (int)dVar6;
    }
    FUN_8c25747c(ar4_01,ar5,ar6,ar7,uVar3);
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0x3f000000,(int)((ulonglong)dVar6 >> 0x20));
      dVar6 = in_xd0;
    }
    else {
      dVar7 = 3.5242919858872394e-14;
    }
    if (cVar11 == '\0') {
      fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar12 == '\0') {
      *(float *)(ar4_00 + 0x1c) = fVar5;
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar4_00 + 0x1c),*(undefined4 *)(ar4_00 + 0xc));
    }
    else {
      *(double *)(ar4_00 + 0x1c) = dVar6;
      dVar6 = *(double *)(ar4_00 + 0xc);
      dVar7 = *(double *)(ar4_00 + 0x1c);
    }
    if (cVar11 == '\0') {
      fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar12 == '\0') {
      *(float *)(ar4_00 + 0xc) = fVar5;
      uVar8 = CONCAT44((int)*ar4,*(undefined4 *)(ar4_00 + 0xc));
    }
    else {
      *(double *)(ar4_00 + 0xc) = dVar6;
      dVar6 = *(double *)(ar4_00 + 0xc);
      uVar8 = *ar4;
    }
    if (cVar11 != '\0' || (float)uVar8 <= (float)(uVar8 >> 0x20)) {
      if (cVar12 == '\0') {
        uVar8 = (ulonglong)*(uint *)(ar4_00 + 0xc);
      }
      else {
        dVar6 = *(double *)(ar4_00 + 0xc);
      }
      if (cVar11 == '\0' && (float)uVar8 < 0.0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4_00 + 0xc) = 0;
        }
        else {
          *(ulonglong *)(ar4_00 + 0xc) = uVar8 & 0xffffffff;
        }
      }
    }
    else if (cVar12 == '\0') {
      *(int *)(ar4_00 + 0xc) = (int)*ar4;
    }
    else {
      *(ulonglong *)(ar4_00 + 0xc) = *ar4;
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0x3d23d70a,_DAT_8c437c68);
      in_xd0 = dVar6;
    }
    else {
      dVar7 = -1.276550078099057e-250;
      in_xd0 = _DAT_8c437c68;
    }
    if (cVar11 == '\0') {
      fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar12 == '\0') {
      _DAT_8c437c68 = (double)CONCAT44(_DAT_8c437c6c,fVar5);
      pcVar10 = (code *)0x43b40000;
    }
    else {
      fVar5 = 360.0;
      pcVar10 = FUN_8c25747c;
      _DAT_8c437c68 = in_xd0;
    }
    dVar6 = _DAT_8c437c68;
    if (cVar11 == '\0' && (float)(uint)pcVar10 < fVar5) {
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0x43b40000,SUB84(_DAT_8c437c68,0));
      }
      else {
        dVar6 = -3.745782517784109e-250;
        in_xd0 = _DAT_8c437c68;
      }
      if (cVar11 == '\0') {
        fVar5 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 - dVar6,0);
      }
      dVar6 = in_xd0;
      if (cVar12 == '\0') {
        _DAT_8c437c68 = (double)CONCAT44(_DAT_8c437c6c,fVar5);
        dVar6 = _DAT_8c437c68;
      }
    }
    _DAT_8c437c68 = dVar6;
    ar4_00 = list_node_next(ar4_00,ar5,ar6,ar7);
  }
  if (((int)ar4[6] == 1) && ((int)ar4[0xc3] == -1)) {
    uVar2 = FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0xc3) = uVar2;
    ar6 = 1;
    FUN_8c021994(0x8c2b59d0,(int)ar4[0xc3],1,ar7);
  }
  if ((int)ar4[0xc3] != -1) {
    ar6 = *(undefined4 *)((int)ar4 + 0x61c);
    FUN_8c021a0c(0x8c2b59d0,(int)ar4[0xc3],ar6,ar7);
  }
  if (((int)ar4[6] == 0) && ((int)ar4[0xc3] != -1)) {
    FUN_8c021a60(0x8c2b59d0,(int)ar4[0xc3],ar6,ar7);
    FUN_8c021a8c(0x8c2b59d0,ar4 + 0xc3,ar6,ar7);
    *(undefined4 *)(ar4 + 0xc3) = 0xffffffff;
  }
  uVar3 = FUN_8c0d3c08(ar4,uVar3,ar6,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c0d3d6c\n.set _FUN_8c0d3d6c, _FUN_8c0d3d6c_def\n");
