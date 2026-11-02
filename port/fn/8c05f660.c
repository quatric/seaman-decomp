#include "../decls.h"
undefined4 s_STATUS_SNORE_05f668_def(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  uint uVar1;
  undefined *ar5_00;
  int a5;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *ar7_00;
  char cVar5;
  undefined4 in_stack_ffffff94;
  undefined1 auStack_24 [20];
  
  cVar5 = '\0';
  piVar3 = ar6;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    iVar4 = 0x40;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13686c + *(int *)(ar4 + 0xc) * 4 + ar7 * 0xc);
    FUN_8c060044(ar4,ar5,ar6,0x40);
    ar5_00 = (undefined *)0x1;
    FUN_8c02f404(ar4,1,piVar3,iVar4,in_stack_ffffff94);
    ar7 = iVar4;
  }
  else {
    ar5_00 = &DAT_8c13686c + ar7 * 0xc;
    *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)(ar5_00 + *(int *)(ar4 + 0xc) * 4);
  }
  iVar4 = *(int *)(ar4 + 0x40);
  if (iVar4 < 0x28) {
    if (-1 < iVar4) {
                    
      switch(iVar4) {
      case 0:
        FUN_8c02f404(ar4,3,piVar3,ar7,in_stack_ffffff94);
        break;
      case 1:
        FUN_8c02f404(ar4,3,piVar3,ar7,in_stack_ffffff94);
        iVar4 = FUN_8c02f414(ar4,FUN_8c02f414,piVar3,ar7);
        if (iVar4 == 1) {
          FUN_8c066628(ar4,ar5,piVar3,ar7);
        }
        else {
          *(undefined4 *)(ar4 + 0x6c) = 0;
          *(undefined4 *)(ar4 + 0x38) = 2;
        }
        FUN_8c02fdd8(ar4,ar5,piVar3,ar7);
        break;
      case 2:
        a5 = *(int *)(*ar6 + 8);
        iVar4 = (**(code **)(a5 + 0xb4))(*ar6,a5,piVar3,ar7);
        if (iVar4 == 1) {
          iVar4 = *ar6;
          FUN_8c027954(iVar4,a5,piVar3,ar7);
          FUN_8c0c4e2c(iVar4,a5,piVar3,ar7);
        }
        break;
      case 3:
        uVar1 = FUN_8c02602c(ar6[6],ar5_00,piVar3,ar7);
        iVar4 = libgcc_divide_helper_01031c(uVar1 & 0xffff,0x25,libgcc_divide_helper_01031c,ar7);
        if (iVar4 == 0xe) {
          ar7_00 = s_STATUS_SNORE_8c136a31;
          FUN_8c0306d4(ar4 + 0x9c,0x11,0,s_STATUS_SNORE_8c136a31);
          FUN_8c02f404(ar4,3,FUN_8c02f404,ar7_00,in_stack_ffffff94);
        }
        break;
      case 4:
        FUN_8c02f404(ar4,3,piVar3,ar7,in_stack_ffffff94);
        break;
      case 6:
        iVar4 = FUN_8c02f414(ar4,ar5_00,piVar3,ar7);
        if (iVar4 == 1) {
          if (*(int *)(ar4 + 0x88) == 1) {
            uVar2 = get_field_6c_02f46c(*(undefined4 *)(ar4 + 0x6c),ar5_00,piVar3,ar7);
            uVar2 = FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),uVar2,piVar3,ar7);
            FUN_8c05fec4(ar6[1],uVar2,piVar3,ar7);
            if (*(int *)(ar4 + 0x6c) != 0) {
              (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                        (*(int *)(ar4 + 0x6c),uVar2,piVar3,ar7);
              ar7 = 0;
              *(undefined4 *)(ar4 + 0x6c) = 0;
            }
          }
          FUN_8c066628(ar4,ar5,FUN_8c066628,ar7);
        }
        else {
          *(undefined4 *)(ar4 + 0x38) = 2;
        }
        break;
      case 9:
        uVar1 = FUN_8c02602c(ar6[6],ar5_00,piVar3,ar7);
        uVar2 = 10;
        iVar4 = libgcc_divide_helper_01031c(uVar1 & 0xffff,10,piVar3,ar7);
        if (((iVar4 == 5) && (*(char *)(ar4 + 0x870) == '\0')) &&
           (iVar4 = get_field_140_025f70(ar6[1],uVar2,piVar3,ar7), iVar4 == 0)) {
          FUN_8c0fa5bc(0x8c35468c,(int)*(char *)(ar4 + 0x870),piVar3,ar7);
          iVar4 = FUN_8c02fcc4(ar4,ar6,piVar3,ar7);
          if (iVar4 == 0) {
            FUN_8c0306d4(ar4 + 0x9c,10,0,s_STATUS_UNCONSIDERED_8c136a60);
          }
          else {
            FUN_8c0306d4(ar4 + 0x9c,10,0,s_STATUS_COUPLING_8c136a50);
          }
          *(undefined1 *)(ar4 + 0x870) = 1;
        }
        break;
      case 0xc:
      case 0x12:
        Vec3_ctor_copy(auStack_24,ar6[5] + 0x10,piVar3,ar7);
        Vec3_assign_wrap_05f640(ar4,auStack_24,piVar3,ar7);
        Vec3_dtor(auStack_24,0xffffffff,piVar3,ar7);
        if (cVar5 == '\0') {
          *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
        }
        else {
          *(undefined8 *)(ar4 + 0x78) = 0x64e3e50344af0000;
        }
        break;
      case 0xf:
        iVar4 = FUN_8c02f414(ar4,ar5_00,piVar3,ar7);
        if (iVar4 == 1) {
          if (*(int *)(ar4 + 0x88) == 1) {
            FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),1,piVar3,ar7);
            *(undefined4 *)(ar4 + 0x88) = 0;
          }
          FUN_8c066628(ar4,ar5,piVar3,ar7);
          FUN_8c02fdd8(ar4,ar5,piVar3,ar7);
        }
        else {
          *(undefined4 *)(ar4 + 0x38) = 2;
          FUN_8c05febc(ar6[3],0,piVar3,ar7);
        }
        break;
      case 0x10:
        if (((*(int *)(ar4 + 4) != 0xd) &&
            (iVar4 = FUN_8c02c518(ar6[1],ar5_00,piVar3,ar7), iVar4 < 6)) && (-1 < iVar4)) {
                    
          switch(iVar4) {
          case 0:
            uVar2 = FUN_8c02c5ac(ar6[1],ar5_00,piVar3,ar7);
            FUN_8c0303b8(ar4 + 0x9c,4,(int)(char)uVar2,s_REQUEST_HOT_8c136a74,&DAT_8c1369bf);
            break;
          case 1:
            uVar2 = FUN_8c02c5ac(ar6[1] + 0x18,ar5_00,piVar3,ar7);
            FUN_8c0303b8(ar4 + 0x9c,5,(int)(char)uVar2,s_REQUEST_COLD_8c136a80,&DAT_8c1369bf);
            break;
          case 3:
            uVar2 = FUN_8c02c5ac(ar6[1] + 0x48,ar5_00,piVar3,ar7);
            FUN_8c0303b8(ar4 + 0x9c,0x10,(int)(char)uVar2,s_REQUEST_HUMIDITY_8c136a9c,&DAT_8c1369bf)
            ;
            break;
          case 4:
            uVar2 = FUN_8c02c5ac(ar6[1] + 0x60,ar5_00,piVar3,ar7);
            FUN_8c0303b8(ar4 + 0x9c,0xd,(int)(char)uVar2,s_REQUEST_HUNGRY_8c136a8d,&DAT_8c1369bf);
            break;
          case 5:
            uVar2 = FUN_8c02c5ac(ar6[1] + 0x78,ar5_00,piVar3,ar7);
            FUN_8c0303b8(ar4 + 0x9c,0x12,(int)(char)uVar2,s_STATUS_SICK_8c1369c1,&DAT_8c1369bf);
          }
        }
        break;
      case 0x16:
        if (*(int *)(ar4 + 0x8c) == 1) {
          FUN_8c0306d4(ar4 + 0x9c,0x2a,0,s_REACTION_GURUGURU_8c136a3e);
          *(undefined4 *)(ar4 + 0x8c) = 0;
        }
        break;
      case 0x22:
        if (*(int *)(ar4 + 0x8c) == 1) {
          FUN_8c0306d4(ar4 + 0x9c,0x2c,0,s_STATUS_AFTER_BINTA_8c136ac1);
          *(undefined4 *)(ar4 + 0x8c) = 0;
        }
        break;
      case 0x23:
        if (*(int *)(ar4 + 0x8c) == 1) {
          FUN_8c0306d4(ar4 + 0x9c,0x2c,0,s_STATUS_BEFORE_BINTA_8c136aad);
          *(undefined4 *)(ar4 + 0x8c) = 0;
        }
        break;
      case 0x26:
        if (*(int *)(ar4 + 0x8c) == 1) {
          FUN_8c0306d4(ar4 + 0x9c,0x2c,0,s_STATUS_AFTER_FIGHT_8c136ae8);
          *(undefined4 *)(ar4 + 0x8c) = 0;
        }
        break;
      case 0x27:
        if (*(int *)(ar4 + 0x8c) == 1) {
          FUN_8c0306d4(ar4 + 0x9c,0x2c,0,s_STATUS_BEFORE_FIGHT_8c136ad4);
          *(undefined4 *)(ar4 + 0x8c) = 0;
        }
      }
    }
  }
  else if ((iVar4 == 0x34) && (*(int *)(ar4 + 0x8c) == 1)) {
    FUN_8c0306d4(ar4 + 0x9c,0x2c,0,s_STATUS_SNIFFING_8c136afb);
    *(undefined4 *)(ar4 + 0x8c) = 0;
  }
  return 1;
}

__asm__(".globl _s_STATUS_SNORE_05f668\n.set _s_STATUS_SNORE_05f668, _s_STATUS_SNORE_05f668_def\n");
