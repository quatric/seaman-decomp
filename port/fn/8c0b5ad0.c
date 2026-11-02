#include "../decls.h"
undefined4 Class_12b2e8_m1_0b5ad0_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int *piVar9;
  int *piVar10;
  int *a6;
  int in_stack_ffffff6c;
  undefined2 uVar11;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [20];
  
  Vec3_ctor_zero(auStack_28,Vec3_ctor_zero,ar6,ar7);
  puVar8 = auStack_48;
  puVar5 = &DAT_8c13bbf4;
  iVar7 = 0x10;
  do {
    puVar6 = puVar5 + 1;
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar8[1] = *puVar6;
    puVar8 = puVar8 + 2;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 0;
  piVar9 = ar5;
  piVar10 = ar6;
  FUN_8c0b6328(ar4,ar5,ar6,ar7);
  uVar11 = (undefined2)((uint)in_stack_ffffff6c >> 0x10);
  if (*(int *)(ar4 + 0x40) != 2) {
    uVar1 = FUN_8c02602c(ar6[6],piVar9,piVar10,ar7);
    piVar9 = (int *)0xf;
    iVar3 = libgcc_divide_helper_01031c(uVar1 & 0xffff,0xf,piVar10,ar7);
    if ((iVar3 == 0) && (*(int *)(ar4 + 0x40) == 0)) {
      uVar1 = FUN_8c02602c(ar6[6],piVar9,piVar10,ar7);
      in_stack_ffffff6c = uVar1 << 0x10;
      if (*(uint *)(ar4 + 0xa8) != (uVar1 & 0xffff)) {
        *(undefined4 *)(ar4 + 0xa0) = 1;
      }
    }
    if ((((*(int *)(ar4 + 0x6c) == 0) && (*(int *)(ar4 + 0x40) == 0)) &&
        (*(char *)(ar4 + 0x98) == '\x03')) &&
       ((piVar9 = ar6, iVar3 = FUN_8c02fcc4(ar4,ar6,piVar10,ar7), iVar3 == 1 &&
        (*(int *)(ar4 + 0xa0) == 1)))) {
      piVar9 = ar5;
      piVar10 = ar6;
      uVar2 = FUN_8c0b67cc(ar4,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x6c) = uVar2;
    }
    uVar11 = (undefined2)((uint)in_stack_ffffff6c >> 0x10);
    if (*(int *)(ar4 + 0xa0) == 1) {
      a6 = (int *)0x0;
      while( true ) {
        piVar9 = (int *)0x1;
        iVar3 = (**(code **)(*ar5 + 0x11c))(ar5,1,piVar10,ar7);
        uVar11 = (undefined2)((uint)in_stack_ffffff6c >> 0x10);
        if (iVar3 <= (int)a6) break;
        uVar2 = 1;
        piVar10 = a6;
        iVar3 = (**(code **)(*ar5 + 0x100))(ar5,1,a6,ar7);
        iVar3 = (**(code **)(*(int *)(iVar3 + 8) + 0xb4))(iVar3,uVar2,piVar10,ar7);
        if (iVar3 == 1) {
          iVar7 = iVar7 + 1;
        }
        a6 = (int *)((int)a6 + 1);
      }
      if (((iVar7 == 0) && (*(char *)(ar4 + 0x9c) < '\x04')) && ('\x01' < *(char *)(ar4 + 0x98))) {
        *(undefined1 *)(ar4 + 0x98) = 1;
      }
    }
    if ((*(int *)(ar4 + 0x6c) != 0) && (*(int *)(ar4 + 4) != 6)) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x74))
                (*(int *)(ar4 + 0x6c),piVar9,piVar10,ar7);
      *(undefined4 *)(ar4 + 0x40) = 4;
      *(undefined4 *)(ar4 + 4) = 6;
      *(undefined4 *)(ar4 + 0xc) = 0;
      piVar9 = (int *)0x2bb;
      FUN_8c02f298(ar4,699,piVar10,ar7);
      *(undefined4 *)(ar4 + 0xa0) = 0;
    }
  }
  uVar1 = FUN_8c02602c(ar6[6],piVar9,piVar10,ar7);
  uVar4 = CONCAT22(uVar11,(short)uVar1);
  *(uint *)(ar4 + 0xa8) = uVar1 & 0xffff;
  piVar9 = ar6;
  FUN_8c02f20c(ar4,ar6,piVar10,ar7);
  uVar2 = get_field_4_05eed8(ar4,piVar9,piVar10,ar7);
  piVar9 = ar5;
  piVar10 = ar6;
  FUN_8c0b61bc(ar4,ar5,ar6,uVar2);
  iVar7 = (int)*(char *)(ar4 + 0x98);
  if ((iVar7 < 8) && (-1 < iVar7)) {
                    
    switch(iVar7) {
    default:
      piVar10 = ar6;
      iVar7 = FUN_8c0b67cc(ar4,ar5,ar6,uVar2);
      piVar9 = ar5;
      if ((iVar7 == 0) || (piVar9 = ar6, iVar7 = FUN_8c02fcc4(ar4,ar6,piVar10,uVar2), iVar7 != 1)) {
        if (*(int *)(ar4 + 0x40) != 5) {
          *(undefined4 *)(ar4 + 8) = 0x5f;
          *(undefined4 *)(ar4 + 0xc) = 0;
          *(undefined4 *)(ar4 + 4) = 0xd;
          *(undefined4 *)(ar4 + 0x40) = 8;
          DAT_8c13bbe8 = 8;
        }
      }
      else {
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 0x40) = 5;
        DAT_8c13bbe8 = 5;
        piVar10 = (int *)0x1b;
        piVar9 = (int *)0x6;
        FUN_8c0b9ed4(ar6[6],6,0x1b,uVar2);
        if ('\0' < *(char *)(ar4 + 0x9d)) {
          *(undefined1 *)(ar4 + 0x98) = 2;
        }
      }
      break;
    case 2:
      if (*(char *)(ar4 + 0x9d) < '\x01') {
        *(undefined1 *)(ar4 + 0x9d) = 1;
      }
      piVar10 = ar6;
      iVar7 = FUN_8c0b67cc(ar4,ar5,ar6,uVar2);
      if (((iVar7 == 0) || (*(int *)(ar4 + 0x40) == 6)) ||
         (ar5 = ar6, iVar7 = FUN_8c02fcc4(ar4,ar6,piVar10,uVar2), iVar7 != 1)) {
        piVar9 = ar5;
        if (*(int *)(ar4 + 0x40) != 6) {
          *(undefined4 *)(ar4 + 8) = 0x5f;
          *(undefined4 *)(ar4 + 0xc) = 0;
          *(undefined4 *)(ar4 + 4) = 0xd;
          *(undefined4 *)(ar4 + 0x40) = 8;
          DAT_8c13bbe8 = 8;
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x40) = 6;
        DAT_8c13bbe8 = 6;
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(char *)(ar4 + 0x9d) = *(char *)(ar4 + 0x9d) + '\x01';
        piVar9 = ar5;
      }
      break;
    case 3:
      break;
    case 4:
    case 6:
      *(undefined4 *)(ar4 + 0x40) = 3;
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 0xd;
      DAT_8c13bbe8 = 3;
      iVar7 = (**(code **)(*ar5 + 0x11c))(ar5,1,piVar10,uVar2);
      if (iVar7 == 0) {
        piVar10 = (int *)0x1b;
        FUN_8c0b9ed4(ar6[6],8,0x1b,uVar2);
      }
      piVar9 = (int *)0x1;
      FUN_8c02cb84(ar6[1] + 0xa8,1,piVar10,uVar2,uVar4);
      break;
    case 5:
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 0x40) = 7;
      DAT_8c13bbe8 = 7;
      piVar9 = (int *)0x1;
      FUN_8c02cb84(ar6[1] + 0xa8,1,piVar10,uVar2,uVar4);
      break;
    case 7:
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 0x40) = 2;
      DAT_8c13bbe8 = 2;
      piVar10 = (int *)0x1b;
      piVar9 = (int *)0x9;
      FUN_8c0b9ed4(ar6[6],9,0x1b,uVar2);
    }
  }
  FUN_8c0b65b0(ar4,piVar9,piVar10,uVar2);
  FUN_8c05ee90(ar6[2],piVar9,piVar10,uVar2);
  iVar7 = get_field_124_027930(ar6[2],piVar9,piVar10,uVar2);
  iVar3 = get_field_40_05eea0(ar4,piVar9,piVar10,uVar2);
  if (iVar7 != iVar3) {
    uVar4 = get_field_40_05eea0(ar4,piVar9,piVar10,uVar2);
    piVar10 = (int *)0x1;
    FUN_8c031b08(ar6[2],uVar4,1,uVar2);
  }
  uVar2 = Vec3_dtor(auStack_28,0xffffffff,piVar10,uVar2);
  return uVar2;
}

__asm__(".globl _Class_12b2e8_m1_0b5ad0\n.set _Class_12b2e8_m1_0b5ad0, _Class_12b2e8_m1_0b5ad0_def\n");
