#include "../decls.h"
uint FUN_8c0d7b60_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int *a4;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  double in_dr0;
  float fVar8;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined8 in_dr8;
  ulonglong uVar9;
  undefined8 in_xd14;
  float in_PR;
  int iVar10;
  int ar5_00;
  char cVar11;
  char cVar12;
  uint in_stack_00000000;
  undefined4 auStack_5c [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint auStack_40 [4];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  cVar12 = '\0';
  cVar11 = '\0';
  puVar7 = auStack_5c + 1;
  auStack_5c[1] = (undefined4)((ulonglong)in_dr4 >> 0x20);
  auStack_5c[2] = (undefined4)in_dr4;
  auStack_5c[3] = (undefined4)((ulonglong)in_dr6 >> 0x20);
  uStack_4c = (undefined4)in_dr6;
  uStack_48 = (undefined4)((ulonglong)in_dr8 >> 0x20);
  uVar9 = (ulonglong)in_stack_00000000;
  iVar4 = 0;
  uVar2 = 0;
  if (*ar4 != 0) {
    fStack_28 = in_PR;
    (**(code **)(ar4[7] + 8))(ar4 + 7,ar5,ar6,ar7);
    fStack_2c = SUB84(in_dr0,0);
    fVar8 = (float)((ulonglong)in_dr0 >> 0x20);
    fVar1 = fVar8;
    if (cVar12 == '\0') {
      fStack_2c = fVar8;
      fVar1 = fStack_28;
    }
    fStack_28 = fVar1;
    if (cVar11 == '\0') {
      iVar10 = (int)fVar8;
    }
    else {
      iVar10 = (int)in_dr0;
    }
    (**(code **)(ar4[0xc] + 8))(ar4 + 0xc,ar5,ar6,ar7);
    fStack_30 = SUB84(in_dr0,0);
    fVar8 = (float)((ulonglong)in_dr0 >> 0x20);
    fVar1 = fVar8;
    if (cVar12 == '\0') {
      fStack_30 = fVar8;
      fVar1 = fStack_2c;
    }
    fStack_2c = fVar1;
    if (cVar11 == '\0') {
      ar5_00 = (int)fVar8;
    }
    else {
      ar5_00 = (int)in_dr0;
    }
    uVar2 = libgcc_divide_helper_0103d0(ar4[1],ar5_00,ar6,ar7);
    if (uVar2 == 0) {
      uVar5 = 0;
      auStack_40[2] = 0;
      while ((uVar2 = ar4[4], uVar5 < uVar2 && (iVar4 <= iVar10))) {
        puVar7[7] = uVar5;
        uVar3 = get_field_2c_0d7ca8((puVar7[7] * 8 - puVar7[7]) * 8 + ar4[3],ar5_00,ar6,ar7);
        puVar7[9] = uVar3;
        if (puVar7[9] == 0) {
          puVar7[6] = uVar5;
          if (cVar12 == '\0') {
            puVar6 = puVar7 + 0xffffffff;
            puVar7[0xffffffff] = (int)uVar9;
          }
          else {
            puVar6 = puVar7 + 0xfffffffe;
            *(undefined8 *)(puVar7 + 0xfffffffe) = in_xd14;
          }
          a4 = (int *)((*(int *)((int)puVar6 + 0x1c) * 8 - *(int *)((int)puVar6 + 0x1c)) * 8 +
                      ar4[3]);
          (**(code **)(*a4 + 8))(a4,ar5_00,ar6,ar7);
          puVar7 = (undefined4 *)((int)puVar6 + 4);
          *(uint *)((int)puVar6 + 0x18) = uVar5;
          FUN_8c0d7ca0((*(int *)((int)puVar6 + 0x18) * 8 - *(int *)((int)puVar6 + 0x18)) * 8 +
                       ar4[3],ar5_00,ar6,ar7);
          iVar4 = iVar4 + 1;
        }
        uVar5 = uVar5 + 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0d7b60\n.set _FUN_8c0d7b60, _FUN_8c0d7b60_def\n");
