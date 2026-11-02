#include "../decls.h"
undefined * s_GRATIFIC_EAT_1063b2_def(int ar4,int *ar5,int *ar6,char *ar7)

{
  int iVar1;
  undefined *puVar2;
  undefined4 ar6_00;
  undefined4 uVar3;
  int *ar4_00;
  char *ar7_00;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 a7;
  code *ar7_01;
  int iVar7;
  undefined4 in_stack_ffffff6c;
  
  iVar7 = 0;
  piVar4 = ar5;
  piVar6 = ar6;
  iVar1 = get_field_124_027930(ar6[2],ar5,ar6,ar7);
  puVar2 = (undefined *)0x21;
  if ((iVar1 < 0x22) && (puVar2 = (undefined *)0x1, 0 < iVar1)) {
    puVar2 = (&switchdata_8c1063ec_8c1063f4)[iVar1 + -1];
                    
    switch(iVar1) {
    case 4:
      iVar1 = FUN_8c02f414(ar4,piVar4,piVar6,ar7);
      if (iVar1 == 1) {
        iVar1 = get_field_24_05c284(*(undefined4 *)(ar4 + 0x6c),piVar4,piVar6,ar7);
        if ((iVar1 == 0xf) &&
           (ar7 = (char *)get_field_13c_028d9c(ar6[1],piVar4,piVar6,get_field_13c_028d9c),
           ar7 == (char *)0x2)) {
          piVar4 = (int *)0x1e;
          FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),0x1e,piVar6,2);
        }
        else {
          iVar1 = get_field_24_05c284(*(undefined4 *)(ar4 + 0x6c),piVar4,piVar6,ar7);
          if (iVar1 == 0xf) {
            uVar3 = get_field_6c_02f46c(*(undefined4 *)(ar4 + 0x6c),piVar4,piVar6,ar7);
            piVar4 = (int *)FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),uVar3,piVar6,ar7);
            FUN_8c05fec4(ar6[1],piVar4,piVar6,ar7);
          }
          else {
            piVar4 = (int *)FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),0x1e,piVar6,ar7);
            FUN_8c05fec4(ar6[1],piVar4,piVar6,ar7);
          }
        }
      }
      if (*(int *)(ar4 + 0x6c) == 0) {
        puVar2 = (undefined *)0x0;
      }
      else {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                  (*(int *)(ar4 + 0x6c),piVar4,piVar6,ar7);
        *(undefined4 *)(ar4 + 0x6c) = 0;
        puVar2 = (undefined *)FUN_8c0306d4(ar4 + 0x9c,2,0,"GRATIFIC_EAT");
      }
      break;
    case 6:
      *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + -1;
      puVar2 = (undefined *)0x32;
      *(undefined4 *)(ar4 + 8) = 0x32;
      break;
    case 8:
      puVar2 = (undefined *)0x98;
      *(undefined1 *)(ar4 + 0x98) = 3;
      break;
    case 9:
      *(undefined4 *)(ar4 + 8) = 0;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0;
      puVar2 = (undefined *)0x98;
      *(undefined1 *)(ar4 + 0x98) = 3;
      break;
    case 0xb:
      if (*(int *)(ar4 + 900) == -1) {
        puVar2 = (undefined *)0xffffffff;
      }
      else {
        puVar2 = (undefined *)FUN_8c030870(ar4 + 0x9c,2,piVar6,ar7);
      }
      break;
    case 0xc:
      iVar1 = FUN_8c02f414(ar4,piVar4,piVar6,ar7);
      if (iVar1 == 1) {
        uVar3 = get_field_6c_02f46c(*(undefined4 *)(ar4 + 0x6c),piVar4,piVar6,ar7);
        uVar3 = FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),uVar3,piVar6,ar7);
        FUN_8c05fec4(ar6[1],uVar3,piVar6,ar7);
        piVar6 = *(int **)(*(int *)(ar4 + 0x6c) + 8);
        (*(code *)piVar6[0x1e])(*(int *)(ar4 + 0x6c),uVar3,piVar6,ar7);
        *(undefined4 *)(ar4 + 0x6c) = 0;
        uVar3 = FUN_8c02bef8(ar6[1],FUN_8c02bef8,piVar6,ar7);
        if ((short)uVar3 == 2) {
          piVar4 = (int *)0x0;
          while( true ) {
            uVar3 = 3;
            ar4_00 = ar5;
            iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,3,piVar6,ar7);
            if (iVar1 <= (int)piVar4) break;
            uVar3 = 3;
            piVar6 = piVar4;
            iVar1 = (**(code **)(*ar5 + 0x100))(ar5,3,piVar4,ar7);
            iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,uVar3,piVar6,ar7);
            if (iVar1 == 2) {
              uVar3 = 3;
              iVar1 = (**(code **)(*ar5 + 0x100))(ar5,3,piVar4,ar7);
              piVar6 = *(int **)(iVar1 + 8);
              iVar1 = (*(code *)piVar6[0x2d])(iVar1,uVar3,piVar6,ar7);
              if (iVar1 == 1) {
                uVar3 = 3;
                piVar6 = piVar4;
                iVar1 = (**(code **)(*ar5 + 0x100))(ar5,3,piVar4,ar7);
                piVar6 = (int *)(**(code **)(*(int *)(iVar1 + 8) + 0xb8))(iVar1,uVar3,piVar6,ar7);
                if (piVar6 == (int *)0x0) {
                  iVar7 = iVar7 + 1;
                }
              }
            }
            piVar4 = (int *)((int)piVar4 + 1);
          }
          if (iVar7 == 2) {
            piVar6 = (int *)0x1b;
            FUN_8c0b9ed4(ar6[6],0xf,0x1b,ar7);
            uVar3 = 1;
            ar4_00 = (int *)(uint)ar6[3];
            FUN_8c061180(ar4_00,1,piVar6,ar7,in_stack_ffffff6c);
          }
          FUN_8c0c4e2c(ar4_00,uVar3,piVar6,ar7);
        }
      }
      puVar2 = (undefined *)FUN_8c05febc(ar6[3],0,piVar6,ar7);
      break;
    case 0xe:
      FUN_8c02ce10(ar6[1] + 0x90,0,piVar6,ar7);
      uVar3 = get_field_13c_028d9c(ar6[1],ar6[1],piVar6,ar7);
      puVar2 = (undefined *)FUN_8c0b9ed4(ar6[6],0x11,uVar3,ar7);
      break;
    case 0x10:
      (**(code **)(*(int *)(*ar6 + 8) + 0xbc))(*ar6,piVar4,piVar6,ar7);
      uVar3 = (**(code **)(*ar5 + 0x148))(ar5,piVar4,piVar6,ar7);
      uVar5 = FUN_8c02bfd8(ar6[1],piVar4,piVar6,ar7);
      ar6_00 = get_field_140_025f70(ar6[1],piVar4,piVar6,ar7);
      a7 = 1;
      iVar1 = (int)(short)uVar5;
      FUN_8c0620bc(uVar3,iVar1,ar6_00,1);
      uVar3 = (**(code **)(*ar5 + 0x148))(ar5,iVar1,ar6_00,a7);
      uVar5 = FUN_8c02bfd8(ar6[1],iVar1,ar6_00,a7);
      iVar1 = get_field_140_025f70(ar6[1],iVar1,ar6_00,a7);
      uVar3 = FUN_8c0620a4(uVar3,(int)(short)uVar5,1 - iVar1,a7);
      if ((char)uVar3 == '\x01') {
        puVar2 = (undefined *)0x1;
      }
      else {
        puVar2 = (undefined *)(*(int *)(ar4 + 0xc) + -1);
        *(undefined **)(ar4 + 0xc) = puVar2;
      }
      break;
    case 0x11:
      iVar1 = get_field_140_025f70(ar6[1],piVar4,piVar6,ar7);
      if (iVar1 == 1) {
        *(undefined1 *)(ar4 + 0x98) = 5;
        (**(code **)(*(int *)(*ar6 + 8) + 0xc0))(*ar6,piVar4,piVar6,ar7);
        piVar4 = (int *)0x1;
        FUN_8c02cb74(ar6[1] + 0xa8,1,piVar6,ar7);
        DAT_8c13bcc4 = 1;
      }
      iVar1 = get_field_140_025f70(ar6[1],piVar4,piVar6,ar7);
      if (iVar1 == 0) {
        *(undefined1 *)(ar4 + 0x98) = 10;
        FUN_8c0fa688(0x8c35468c,piVar4,piVar6,ar7);
        ar7 = "GRATIFIC_COPULATION_DONE";
        FUN_8c0306d4(ar4 + 0x9c,9,0,"GRATIFIC_COPULATION_DONE");
        piVar6 = (int *)0x1b;
        FUN_8c0b9ed4(ar6[6],0x14,0x1b,ar7);
      }
      *(undefined4 *)(ar4 + 4) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0;
      *(undefined4 *)(ar4 + 8) = 0;
      *(undefined4 *)(ar4 + 0xc) = 0;
      FUN_8c02cb84(ar6[1] + 0xa8,0,piVar6,ar7,in_stack_ffffff6c);
      uVar3 = 1;
      iVar1 = ar6[1] + 0xa8;
      FUN_8c06209c(iVar1,1,piVar6,ar7);
      puVar2 = (undefined *)FUN_8c0c4e2c(iVar1,uVar3,piVar6,ar7);
      break;
    case 0x13:
      *(undefined1 *)(ar4 + 0x98) = 10;
      DAT_8c13bcc4 = 1;
      uVar3 = get_field_13c_028d9c(ar6[1],piVar4,piVar6,ar7);
      uVar5 = 0x19;
      FUN_8c0b9ed4(ar6[6],0x19,uVar3,ar7);
      FUN_8c0fa688(0x8c35468c,uVar5,uVar3,ar7);
      ar7_00 = "GRATIFIC_GROAN_DONE";
      uVar3 = 0;
      iVar1 = ar4 + 0x9c;
      FUN_8c0306d4(iVar1,0x1f,0,"GRATIFIC_GROAN_DONE");
      puVar2 = (undefined *)FUN_8c0c4e2c(iVar1,FUN_8c0c4e2c,uVar3,ar7_00);
      break;
    case 0x18:
      FUN_8c0fa688(0x8c35468c,piVar4,piVar6,ar7);
      uVar3 = FUN_8c0e98f0(ar6[3],piVar4,piVar6,ar7);
      uVar5 = CONCAT13((char)uVar3,(int3)in_stack_ffffff6c);
      if ('\x03' < (char)uVar3) {
        uVar3 = FUN_8c0e98f0(ar6[3],piVar4,piVar6,ar7);
        uVar5 = CONCAT13((char)((uint)uVar5 >> 0x18),CONCAT12((char)uVar3,(short)uVar5));
        FUN_8c0fa5bc(0x8c35468c,(int)(char)uVar3,piVar6,ar7);
        ar7 = "EVENT_AFTER_ROCK_PUSH";
        piVar6 = (int *)0x0;
        FUN_8c0306d4(ar4 + 0x9c,0x26,0,"EVENT_AFTER_ROCK_PUSH");
        FUN_8c02cbbc(ar6[1] + 0x90,1,piVar6,ar7);
        FUN_8c02c330(ar6[1],0,piVar6,ar7,uVar5);
        FUN_8c02c330(ar6[1] + 0x18,0,piVar6,ar7,uVar5);
        FUN_8c02c330(ar6[1] + 0x60,0,piVar6,ar7,uVar5);
        FUN_8c02c330(ar6[1] + 0x30,0,piVar6,ar7,uVar5);
        piVar4 = (int *)0x1;
        FUN_8c02cb84(ar6[1] + 0xa8,1,piVar6,ar7,uVar5);
        *(undefined4 *)(ar4 + 0x870) = 1;
      }
      uVar3 = FUN_8c0e98f0(ar6[3],piVar4,piVar6,ar7);
      puVar2 = (undefined *)(int)(char)uVar3;
      if ((char)uVar3 < '\x04') {
        ar7_01 = FUN_8c0b9ed4;
        FUN_8c0b9ed4(ar6[6],0x17,0x1b,FUN_8c0b9ed4);
        iVar1 = ar6[3];
        uVar3 = FUN_8c0e98f0(iVar1,FUN_8c0e98f0,iVar1,ar7_01);
        FUN_8c0fa5bc(0x8c35468c,(int)(char)uVar3,iVar1,ar7_01);
        if (*(char *)(ar4 + 0x87c) < '\x03') {
          FUN_8c0fa5f0(0x8c35468c,0,iVar1,ar7_01);
        }
        else {
          FUN_8c0fa5f0(0x8c35468c,1,iVar1,ar7_01);
        }
        puVar2 = (undefined *)FUN_8c0306d4(ar4 + 0x9c,0x1e,0,"EVENT_AFTER_ROCK_PUSH");
      }
      break;
    case 0x19:
      puVar2 = (undefined *)FUN_8c0303b8(ar4 + 0x9c,0x1f,0,"REACTION_AFTER_DEKOPIN",&DAT_8c1eeec3);
      break;
    case 0x1f:
      if (*(int *)(ar4 + 0x6c) == 0) {
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar2 = (undefined *)0x6c;
        *(undefined4 *)(ar4 + 0x6c) = 0;
      }
    }
  }
  return puVar2;
}

__asm__(".globl _s_GRATIFIC_EAT_1063b2\n.set _s_GRATIFIC_EAT_1063b2, _s_GRATIFIC_EAT_1063b2_def\n");
