#include "../decls.h"
undefined4 Class_12c3c4_m2_104264_def(int *ar4,int ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  DAT_8c1eee30 = ar4[0x210];
  DAT_8c1eee34 = ar4[0x211];
  DAT_8c1eee38 = ar4[0x212];
  iVar5 = ar5;
  piVar2 = ar6;
  uVar1 = FUN_8c02602c(ar6[6],ar5,ar6,ar7);
  if ((short)uVar1 == 3) {
    uVar1 = FUN_8c02bef8(ar6[1],iVar5,piVar2,ar7);
    piVar2 = (int *)(int)(short)uVar1;
    iVar5 = ar6[6];
    (**(code **)(*ar4 + 0x18))(ar4,iVar5,piVar2,ar7);
  }
  iVar5 = get_field_13c_028d9c(ar6[1],iVar5,piVar2,ar7);
  ar4[0x218] = iVar5;
  iVar5 = ar5;
  piVar2 = ar6;
  FUN_8c104f5c(ar4,ar5,ar6,ar7);
  iVar3 = (**(code **)(*(int *)(*ar6 + 8) + 0xb8))(*ar6,iVar5,piVar2,ar7);
  if ((iVar3 == 1) && (ar4[1] != 1)) {
    iVar3 = get_field_6c_02f46c(*ar6,iVar5,piVar2,ar7);
    if ((iVar3 == 0) && (iVar5 = get_field_70_05f490(*ar6,iVar5,piVar2,ar7), iVar5 == 0)) {
      ar4[0xe] = 2;
      ar4[1] = 2;
      ar4[3] = 0;
      ar4[2] = 99;
      FUN_8c02f298(ar4,199,piVar2,ar7);
      FUN_8c05febc(ar6[3],0,piVar2,ar7);
    }
    else {
      ar4[0xe] = 2;
      ar4[1] = 0xb;
      ar4[2] = 99;
      ar4[0x10] = 0xd;
      uVar1 = 0x577;
      FUN_8c02f298(ar4,0x577,piVar2,ar7);
      if (ar4[0x1b] != 0) {
        (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],uVar1,piVar2,ar7);
        ar4[0x1b] = 0;
      }
    }
  }
  piVar6 = ar6;
  FUN_8c02f20c(ar4,ar6,piVar2,ar7);
  uVar1 = get_field_4_05eed8(ar4,piVar6,piVar2,ar7);
  piVar2 = ar6;
  s_STATUS_SNORE_10485e(ar4,ar5,ar6,uVar1);
  iVar5 = get_field_124_027930(ar6[2],ar5,piVar2,uVar1);
  if (((iVar5 != 2) && (iVar5 = (int)(char)ar4[0x26], iVar5 < 0xb)) && (-1 < iVar5)) {
                    
    switch(iVar5) {
    case 0:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[0x210] = 9;
      ar4[0x10] = 9;
      DAT_8c1eee30 = 9;
      break;
    case 3:
      uVar4 = FUN_8c05eea8(ar6[3],ar5,piVar2,uVar1);
      *(char *)((int)ar4 + 0x99) = (char)uVar4;
      break;
    case 8:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[0x210] = 0x1d;
      ar4[0x10] = 0x1d;
      DAT_8c1eee30 = 0x1d;
      break;
    case 9:
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[2] = 99;
      ar4[0x210] = 0x13;
      ar4[0x10] = 0x13;
      DAT_8c1eee30 = 0x13;
      break;
    case 10:
      if ((ar4[0x10] != 2) || (ar4[1] != 1)) {
        ar4[3] = 0;
        ar4[1] = 1;
        ar4[2] = 99;
        ar4[0x10] = 2;
        if (ar4[0x1b] != 0) {
          (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],ar5,piVar2,uVar1);
          ar4[0x1b] = 0;
        }
      }
    }
  }
  if (ar4[0xe1] != -1) {
    iVar5 = FUN_8c0fa2b8(0x8c35468c,ar5,piVar2,uVar1);
    if (iVar5 == 0) {
      ar4[0x25] = 0;
      FUN_8c030870(ar4 + 0x27,3,piVar2,uVar1);
      ar4[1] = 0;
      ar4[0x10] = 0;
      ar4[2] = 0x19;
      *(undefined1 *)((int)ar4 + 0x91) = 1;
      ar4[3] = 0;
      *(undefined1 *)(ar4 + 0x20) = 1;
      ar4[0xe1] = -1;
    }
    else {
      FUN_8c0f8214(0x8c35468c,ar5,piVar2,uVar1);
    }
    ar4[0x25] = ar4[0x55];
  }
  if (ar4[0x22] == 1) {
    ar4[0x22] = 0;
  }
  piVar6 = ar6;
  FUN_8c109b18(ar4,ar6,piVar2,uVar1);
  FUN_8c05ee90(ar6[2],piVar6,piVar2,uVar1);
  if (*(char *)((int)ar4 + 0x91) != '\x01') {
    iVar5 = get_field_124_027930(ar6[2],piVar6,piVar2,uVar1);
    iVar3 = get_field_40_05eea0(ar4,piVar6,piVar2,uVar1);
    if (iVar5 == iVar3) {
      return iVar3;
    }
  }
  uVar4 = get_field_40_05eea0(ar4,piVar6,piVar2,uVar1);
  uVar1 = FUN_8c031b08(ar6[2],uVar4,1,uVar1);
  return uVar1;
}

__asm__(".globl _Class_12c3c4_m2_104264\n.set _Class_12c3c4_m2_104264, _Class_12c3c4_m2_104264_def\n");
