#include "../decls.h"
undefined4 Class_12a078_m2_05eee0_def(int *ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_stack_ffffffa0;
  
  uVar2 = ar5;
  piVar3 = ar6;
  uVar1 = FUN_8c02602c(ar6[6],ar5,ar6,ar7);
  if ((short)uVar1 == 3) {
    uVar2 = FUN_8c02bef8(ar6[1],uVar2,piVar3,ar7);
    in_stack_ffffffa0 = CONCAT22((short)uVar2,(short)in_stack_ffffffa0);
    piVar3 = (int *)(int)(short)uVar2;
    (**(code **)(*ar4 + 0x18))(ar4,ar6[6],piVar3,ar7);
  }
  iVar4 = get_field_40_03598c(ar6[3],get_field_40_03598c,piVar3,ar7);
  if (iVar4 == 2) {
    FUN_8c05f498(ar6[3],0,piVar3,ar7);
  }
  DAT_8c136908 = ar4[0x210];
  DAT_8c13690c = ar4[0x211];
  DAT_8c136910 = ar4[0x212];
  uVar2 = ar5;
  piVar3 = ar6;
  FUN_8c05ff40(ar4,ar5,ar6,ar7);
  iVar4 = (**(code **)(*(int *)(*ar6 + 8) + 0xb8))(*ar6,uVar2,piVar3,ar7);
  if ((iVar4 == 1) && (ar4[1] != 1)) {
    iVar4 = get_field_6c_02f46c(*ar6,uVar2,piVar3,ar7);
    if ((iVar4 == 0) && (iVar4 = get_field_70_05f490(*ar6,uVar2,piVar3,ar7), iVar4 == 0)) {
      piVar3 = (int *)0x1b;
      FUN_8c0b9ed4(ar6[6],0x1b,0x1b,ar7);
      ar4[0x10] = 2;
      ar4[0xe] = 2;
      ar4[1] = 1;
      ar4[3] = 0;
      ar4[2] = 99;
      FUN_8c02f298(ar4,199,piVar3,ar7);
    }
    else {
      ar4[0xe] = 2;
      ar4[1] = 0xb;
      ar4[2] = 99;
      ar4[0x10] = 0xe;
      uVar2 = 0x577;
      FUN_8c02f298(ar4,0x577,piVar3,ar7);
      if (ar4[0x1b] != 0) {
        (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],uVar2,piVar3,ar7);
        ar4[0x1b] = 0;
      }
    }
    if (((char)ar4[0x21e] == '\x01') && (ar4[1] == 0)) {
      *(undefined1 *)(ar4 + 0x21e) = 0;
    }
  }
  piVar6 = ar6;
  FUN_8c02f20c(ar4,ar6,piVar3,ar7);
  uVar2 = get_field_4_05eed8(ar4,piVar6,piVar3,ar7);
  piVar3 = ar6;
  s_STATUS_SNORE_05f668(ar4,ar5,ar6,uVar2);
  if (((ar4[1] != 1) && (iVar4 = (int)(char)ar4[0x26], iVar4 < 10)) && (-1 < iVar4)) {
                    
    switch(iVar4) {
    case 0:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[0x210] = 0x2e;
      ar4[0x10] = 0x2e;
      DAT_8c136908 = 0x2e;
      break;
    case 1:
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[2] = 99;
      ar4[0x210] = 0x18;
      ar4[0x10] = 0x18;
      DAT_8c136908 = 0x18;
      break;
    case 2:
      uVar1 = FUN_8c05eea8(ar6[3],ar5,piVar3,uVar2);
      *(char *)((int)ar4 + 0x99) = (char)uVar1;
      break;
    case 4:
      ar5 = 0;
      FUN_8c02cb7c(ar6[1] + 0xa8,0,piVar3,uVar2,in_stack_ffffffa0);
      break;
    case 7:
      ar5 = 0;
      FUN_8c02cb7c(ar6[1] + 0xa8,0,piVar3,uVar2,in_stack_ffffffa0);
      if ((ar4[0x10] != 2) || (ar4[1] != 1)) {
        ar4[3] = 0;
        ar4[1] = 1;
        ar4[2] = 99;
        ar4[0x10] = 2;
        if (ar4[0x1b] != 0) {
          (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],ar5,piVar3,uVar2);
          ar4[0x1b] = 0;
        }
      }
      break;
    case 8:
      ar5 = 0;
      FUN_8c02cb7c(ar6[1] + 0xa8,0,piVar3,uVar2,in_stack_ffffffa0);
      if (ar4[0x21f] == 1) {
        *(undefined1 *)(ar4 + 0x26) = 9;
      }
      if (ar4[0x10] != 0x2c) {
        s_STATUS_FORMAT_030306(ar4 + 0x27,ar5,piVar3,uVar2);
        FUN_8c02ce10(ar6[1] + 0x90,1,piVar3,uVar2);
        FUN_8c02cbbc(ar6[1] + 0x90,1,piVar3,uVar2);
        ar5 = 0;
        FUN_8c02c330(ar6[1] + 0x60,0,piVar3,uVar2,in_stack_ffffffa0);
        ar4[0x10] = 0x2c;
      }
      break;
    case 9:
      if (ar4[0x10] == 0x2c) {
        ar4[1] = 0;
        ar4[2] = 0x4b;
        ar4[3] = 0;
        ar4[0x10] = 0;
        ar4[0x210] = 0;
        DAT_8c136908 = 0;
        ar4[0x211] = 0x36;
        DAT_8c13690c = 0x36;
        ar4[0x212] = 0x36;
        DAT_8c136910 = 0x36;
      }
    }
  }
  if (ar4[0xe1] != -1) {
    iVar4 = FUN_8c0fa2b8(0x8c35468c,ar5,piVar3,uVar2);
    if (iVar4 == 0) {
      ar4[0x25] = 0;
      FUN_8c030870(ar4 + 0x27,3,piVar3,uVar2);
      ar4[1] = 0;
      ar4[0x10] = 0;
      ar4[2] = 0x19;
      *(undefined1 *)((int)ar4 + 0x91) = 1;
      ar4[3] = 0;
      *(undefined1 *)(ar4 + 0x20) = 1;
      ar4[0xe1] = -1;
    }
    else {
      FUN_8c0f8214(0x8c35468c,ar5,piVar3,uVar2);
    }
    ar4[0x25] = ar4[0x55];
  }
  if (ar4[0x22] == 1) {
    ar4[0x22] = 0;
  }
  piVar6 = ar6;
  FUN_8c0665a0(ar4,ar6,piVar3,uVar2);
  FUN_8c05ee90(ar6[2],piVar6,piVar3,uVar2);
  iVar4 = get_field_4_05eed8(ar4,piVar6,piVar3,uVar2);
  iVar4 = *(int *)(&DAT_8c13686c + ar4[3] * 4 + iVar4 * 0xc);
  FUN_8c05f488(ar4,iVar4,piVar3,uVar2);
  if (*(char *)((int)ar4 + 0x91) != '\x01') {
    iVar5 = get_field_124_027930(ar6[2],iVar4,piVar3,uVar2);
    iVar4 = get_field_40_05eea0(ar4,iVar4,piVar3,uVar2);
    if (iVar5 == iVar4) {
      return iVar5;
    }
  }
  uVar1 = get_field_40_05eea0(ar4,iVar4,piVar3,uVar2);
  uVar2 = FUN_8c031b08(ar6[2],uVar1,1,uVar2);
  return uVar2;
}

__asm__(".globl _Class_12a078_m2_05eee0\n.set _Class_12a078_m2_05eee0, _Class_12a078_m2_05eee0_def\n");
