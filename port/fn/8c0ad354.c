#include "../decls.h"
int FUN_8c0ad354_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 ar4_00;
  undefined4 ar6_00;
  int iVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  code *pcVar9;
  int ar7_00;
  int iVar10;
  char cVar11;
  char cVar12;
  int in_stack_ffffff48;
  int iStack_7c;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [68];
  
  cVar12 = '\0';
  cVar11 = '\0';
  FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffff48);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_stack_ffffff48);
  if (cVar12 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar12 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    ar7_00 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar7 / dVar7);
  }
  if (cVar12 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar12 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    iStack_7c = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iStack_7c = (int)(dVar7 / dVar7);
  }
  if (cVar12 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar12 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    fVar8 = (float)((ulonglong)dVar7 >> 0x20);
    fVar6 = SUB84(dVar7,0) / fVar8;
    dVar7 = (double)CONCAT44(fVar8,fVar6);
    iVar10 = (int)fVar6;
  }
  else {
    dVar7 = dVar7 / dVar7;
    iVar10 = (int)dVar7;
  }
  iVar5 = (int)((ulonglong)dVar7 >> 0x20);
  FUN_8c256b0c(0,iVar10,iStack_7c,ar7_00,in_stack_ffffff48);
  FUN_8c256fec(0,iVar10,iStack_7c,ar7_00,in_stack_ffffff48);
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,iVar10,iStack_7c,ar7_00);
  iVar1 = get_field_124_027930(ar4 + 0x53c,iVar10,iStack_7c,ar7_00);
  iVar3 = iVar10;
  if (iVar1 != 8) {
    uVar2 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,iVar10,iStack_7c,ar7_00);
    iVar3 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),iVar10,iStack_7c,ar7_00);
    iVar3 = deref_u32(*(int *)(*(int *)(ar4 + 0x328) + 0xa0) + iVar3 * 4,iVar10,iStack_7c,ar7_00);
    iVar1 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),iVar10,iStack_7c,ar7_00);
    iVar1 = FUN_8c026d74(*(int *)(*(int *)(ar4 + 0x328) + 0xa8) + iVar1 * 4,iVar10,iStack_7c,ar7_00)
    ;
    FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),iVar10,iStack_7c,ar7_00);
    iStack_7c = iVar5;
    if (cVar12 == '\0') {
      iStack_7c = iVar1;
    }
    FUN_8c21bbb0(uVar2,iVar3,iStack_7c,ar7_00,in_stack_ffffff48);
  }
  FUN_8c256210(1,iVar3,iStack_7c,ar7_00);
  FUN_8c233dac(&DAT_8c13b464,iVar3,iStack_7c,ar7_00);
  if ((*(int *)(ar4 + 0x88c) != 0) && (*(int *)(ar4 + 0x890) != 0)) {
    FUN_8c256328(0,iVar3,iStack_7c,ar7_00,in_stack_ffffff48);
    FUN_8c25b5d0(0,iVar3,iStack_7c,ar7_00,in_stack_ffffff48);
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x778));
    }
    else {
      dVar7 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0x43b40000,fVar6);
    }
    else {
      dVar7 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      ar7_00 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      ar7_00 = (int)(dVar7 / dVar7);
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x774));
    }
    else {
      dVar7 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0x43b40000,fVar6);
    }
    else {
      dVar7 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      iStack_7c = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      iStack_7c = (int)(dVar7 / dVar7);
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x770));
    }
    else {
      dVar7 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0x43b40000,fVar6);
    }
    else {
      dVar7 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      iVar3 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      iVar3 = (int)(dVar7 / dVar7);
    }
    FUN_8c256b0c(0,iVar3,iStack_7c,ar7_00,in_stack_ffffff48);
    FUN_8c25b3ec(*(undefined4 *)(ar4 + 0x890),iVar3,iStack_7c,ar7_00);
    FUN_8c21a80e(*(undefined4 *)(ar4 + 0x88c),iVar3,iStack_7c,ar7_00);
    FUN_8c256210(1,iVar3,iStack_7c,ar7_00);
  }
  iVar10 = *(int *)(ar4 + 0x170c);
  if (iVar10 == 1) {
    FUN_8c0191c8(auStack_50,iVar3,iStack_7c,ar7_00);
    Vec3_ctor_copy(auStack_60,ar4 + 0x30,iStack_7c,ar7_00);
    ar6_00 = 0x1e;
    iVar10 = FUN_8c0ae84c(ar4,auStack_60,0x1e,ar7_00);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_60,0xffffffff,ar6_00,ar7_00);
    if (iVar10 == 1) {
      iVar10 = 0;
    }
    else {
      for (iVar5 = 0; iVar10 = 10, iVar5 < 10; iVar5 = iVar5 + 1) {
        if (cVar12 == '\0') {
          fVar6 = *(float *)(iVar5 * 0x4c + -0x73d7a684);
          pcVar9 = (code *)0x44bb8000;
        }
        else {
          fVar6 = 1500.0;
          pcVar9 = (code *)0x44bb6000;
        }
        if (cVar11 == '\0' && (float)(uint)pcVar9 < fVar6) {
          puVar4 = (undefined8 *)(iVar5 * 0x4c + -0x73d7a684);
          if (cVar12 == '\0') {
            pcVar9 = (code *)0x44bb6000;
            *(undefined4 *)puVar4 = 0x44bb6000;
          }
          else {
            pcVar9 = FUN_8c256328;
            *puVar4 = 0x8c25632844bb6000;
          }
        }
        FUN_8c256328(0,uVar2,ar6_00,ar7_00,in_stack_ffffff48);
        ar4_00 = 0;
        FUN_8c25b5d0(0,uVar2,ar6_00,ar7_00,in_stack_ffffff48);
        FUN_8c013b3c(ar4_00,uVar2,ar6_00,ar7_00);
        if (cVar12 == '\0') {
          dVar7 = (double)CONCAT44(0x47800000,pcVar9);
        }
        else {
          dVar7 = 12831.689682006836;
        }
        if (cVar11 == '\0') {
          fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 * dVar7,0);
        }
        if (cVar12 == '\0') {
          dVar7 = (double)CONCAT44(0x40c90fd8,fVar6);
        }
        else {
          dVar7 = 1.0382059669001045e+34;
        }
        if (cVar11 == '\0') {
          iVar10 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
        }
        else {
          iVar10 = (int)(dVar7 / dVar7);
        }
        if (cVar12 == '\0') {
          dVar7 = (double)CONCAT44(0x46fffe00,(float)iVar10);
        }
        else {
          dVar7 = -3.738952064572566e-250;
        }
        if (cVar11 == '\0') {
          iVar10 = (int)(SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20));
        }
        else {
          iVar10 = (int)(dVar7 - dVar7);
        }
        FUN_8c256a78(0,iVar10,ar6_00,ar7_00,in_stack_ffffff48);
        FUN_8c256fec(0,iVar10,ar6_00,ar7_00,in_stack_ffffff48);
        FUN_8c01538c(ar4 + 0x9bc,iVar10,ar6_00,ar7_00);
        uVar2 = *(undefined4 *)(iVar5 * 0x4c + -0x73d7a644);
        FUN_8c014a94(ar4 + 0x9bc,uVar2,ar6_00,ar7_00);
        in_stack_ffffff48 = iVar5;
        FUN_8c016524(iVar5 * 0x44 + ar4 + 0x9c4,uVar2,ar6_00,ar7_00);
        FUN_8c256210(1,uVar2,ar6_00,ar7_00);
      }
    }
  }
  return iVar10;
}

__asm__(".globl _FUN_8c0ad354\n.set _FUN_8c0ad354, _FUN_8c0ad354_def\n");
