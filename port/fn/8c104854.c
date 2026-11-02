#include "../decls.h"
undefined4 s_STATUS_SNORE_10485e_def(int ar4,undefined4 ar5,int *ar6,char *ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int a5;
  undefined4 ar5_00;
  int *piVar4;
  code *pcVar5;
  char *pcVar6;
  char cVar7;
  char cVar8;
  undefined4 in_stack_ffffff84;
  undefined4 ain0;
  undefined1 auStack_38 [4];
  float fStack_34;
  undefined1 auStack_28 [20];
  
  cVar8 = '\0';
  cVar7 = '\0';
  piVar4 = ar6;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c1eed94 + *(int *)(ar4 + 0xc) * 4 + (int)ar7 * 0xc);
    FUN_8c105094(ar4,ar5,ar6,ar7);
    uVar3 = 1;
    FUN_8c02f404(ar4,1,piVar4,ar7,in_stack_ffffff84);
  }
  else {
    uVar3 = *(undefined4 *)(&DAT_8c1eed94 + *(int *)(ar4 + 0xc) * 4 + (int)ar7 * 0xc);
    *(undefined4 *)(ar4 + 0x40) = uVar3;
  }
  iVar2 = *(int *)(ar4 + 0x40);
  if ((iVar2 < 0x22) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      FUN_8c02f404(ar4,3,piVar4,ar7,in_stack_ffffff84);
      break;
    case 1:
      uVar3 = 3;
      FUN_8c02f404(ar4,3,piVar4,ar7,in_stack_ffffff84);
      iVar2 = FUN_8c02f414(ar4,uVar3,piVar4,ar7);
      if (iVar2 == 1) {
        FUN_8c109b98(ar4,ar5,piVar4,ar7);
      }
      else {
        *(undefined4 *)(ar4 + 0x6c) = 0;
        *(undefined4 *)(ar4 + 0x38) = 2;
      }
      FUN_8c02fdd8(ar4,ar5,piVar4,ar7);
      break;
    case 2:
      a5 = *(int *)(*ar6 + 8);
      iVar2 = (**(code **)(a5 + 0xb4))(*ar6,a5,piVar4,ar7);
      if (iVar2 == 1) {
        iVar2 = *ar6;
        FUN_8c027954(iVar2,a5,piVar4,ar7);
        FUN_8c0c4e2c(iVar2,a5,piVar4,FUN_8c0c4e2c);
      }
      break;
    case 4:
      iVar2 = FUN_8c02f414(ar4,uVar3,piVar4,ar7);
      if (iVar2 == 1) {
        if (*(int *)(ar4 + 0x88) == 1) {
          FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),1,piVar4,ar7);
        }
        FUN_8c109b98(ar4,ar5,piVar4,ar7);
      }
      else {
        *(undefined4 *)(ar4 + 0x38) = 2;
      }
      break;
    case 6:
      pcVar5 = FUN_8c02602c;
      uVar1 = FUN_8c02602c(ar6[6],uVar3,piVar4,FUN_8c02602c);
      iVar2 = libgcc_divide_helper_01031c(uVar1 & 0xffff,0x25,piVar4,pcVar5);
      if (iVar2 == 0xe) {
        pcVar6 = "STATUS_SNORE";
        uVar3 = 0;
        FUN_8c0306d4(ar4 + 0x9c,0x11,0,"STATUS_SNORE");
        FUN_8c02f404(ar4,3,uVar3,pcVar6,in_stack_ffffff84);
      }
      break;
    case 7:
      FUN_8c02f404(ar4,3,piVar4,ar7,in_stack_ffffff84);
      break;
    case 10:
    case 0x14:
      Vec3_ctor_copy(auStack_28,ar6[5] + 0x10,piVar4,ar7);
      Vec3_assign_wrap_05f640(ar4,auStack_28,piVar4,ar7);
      Vec3_dtor(auStack_28,0xffffffff,piVar4,ar7);
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
      }
      else {
        *(undefined8 *)(ar4 + 0x78) = 0x6513e10344af0000;
      }
      break;
    case 0xc:
      iVar2 = FUN_8c02f414(ar4,uVar3,piVar4,ar7);
      if (iVar2 == 1) {
        if (*(int *)(ar4 + 0x88) == 1) {
          FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),1,piVar4,ar7);
          *(undefined4 *)(ar4 + 0x88) = 0;
        }
        FUN_8c109b98(ar4,ar5,piVar4,ar7);
      }
      else {
        *(undefined4 *)(ar4 + 0x38) = 2;
        FUN_8c05febc(ar6[3],0,piVar4,ar7);
      }
      break;
    case 0x11:
      uVar1 = FUN_8c02602c(ar6[6],uVar3,piVar4,ar7);
      uVar3 = 10;
      iVar2 = libgcc_divide_helper_01031c(uVar1 & 0xffff,10,piVar4,ar7);
      if (((iVar2 == 5) && (*(char *)(ar4 + 0x855) == '\0')) &&
         (iVar2 = get_field_140_025f70(ar6[1],uVar3,piVar4,ar7), iVar2 == 0)) {
        FUN_8c0fa5bc(0x8c35468c,(int)*(char *)(ar4 + 0x855),piVar4,ar7);
        iVar2 = FUN_8c02fcc4(ar4,ar6,piVar4,ar7);
        if (iVar2 == 0) {
          FUN_8c0306d4(ar4 + 0x9c,10,0,"STATUS_UNCONSIDERED");
        }
        else {
          FUN_8c0306d4(ar4 + 0x9c,10,0,"STATUS_COUPLING");
        }
        *(undefined1 *)(ar4 + 0x855) = 1;
      }
      break;
    case 0x18:
      if (*(int *)(ar4 + 0x8c) == 1) {
        FUN_8c104f44(ar6[3],uVar3,piVar4,ar7);
        ar5_00 = 0;
        FUN_8c0637c0(ar6[3],0,piVar4,ar7);
        *(char *)(ar4 + 0x87c) = *(char *)(ar4 + 0x87c) + '\x01';
        *(undefined4 *)(ar4 + 0x878) = 0xb4;
        uVar3 = FUN_8c0e98f0(ar6[3],ar5_00,piVar4,ar7);
        ain0 = CONCAT13((char)((uint)in_stack_ffffff84 >> 0x18),
                        CONCAT12((char)uVar3,(short)in_stack_ffffff84));
        if ((char)uVar3 < '\x04') {
          uVar3 = FUN_8c0e98f0(ar6[3],ar5_00,piVar4,ar7);
          ain0 = CONCAT22((short)((uint)ain0 >> 0x10),CONCAT11((char)uVar3,(char)ain0));
          if ((char)uVar3 == '\x01') {
            FUN_8c02cb84(ar6[1] + 0xa8,0,piVar4,ar7,ain0);
          }
          piVar4 = (int *)0x1b;
          ar5_00 = 0x17;
          iVar2 = ar6[6];
          FUN_8c0b9ed4(iVar2,0x17,0x1b,ar7);
          FUN_8c0c4e2c(iVar2,ar5_00,piVar4,ar7);
        }
        uVar3 = FUN_8c0e98f0(ar6[3],ar5_00,piVar4,ar7);
        if ((char)uVar3 == '\x04') {
          *(undefined1 *)(ar4 + 0x98) = 7;
          FUN_8c02cb84(ar6[1] + 0xa8,1,piVar4,ar7,CONCAT31((int3)((uint)ain0 >> 8),(char)uVar3));
          FUN_8c064ba0(ar6[6],2,piVar4,ar7);
          FUN_8c0b9ed4(ar6[6],0x18,0x1b,ar7);
        }
        FUN_8c0306d4(ar4 + 0x9c,0x1f,0,"EVENT_ROCK_PUSH");
        *(undefined4 *)(ar4 + 0x8c) = 0;
      }
      break;
    case 0x1b:
      if (*(int *)(ar4 + 0x8c) == 1) {
        FUN_8c0306d4(ar4 + 0x9c,0x2a,0,"REACTION_GURUGURU");
        *(undefined4 *)(ar4 + 0x8c) = 0;
      }
      break;
    case 0x1d:
      if (*(int *)(ar4 + 0x8c) == 1) {
        ar7 = "EVENT_LANDING";
        piVar4 = (int *)0x0;
        FUN_8c0306d4(ar4 + 0x9c,0x2a,0,"EVENT_LANDING");
        *(undefined4 *)(ar4 + 0x8c) = 0;
      }
      FUN_8c02f670(*ar6,*ar6,piVar4,ar7,auStack_38);
      if (cVar8 == '\0') {
        pcVar5 = (code *)0x432a0000;
      }
      else {
        fStack_34 = 170.0;
        pcVar5 = Vec3_dtor;
      }
      Vec3_dtor(auStack_38,0xffffffff,piVar4,ar7);
      if (cVar7 != '\0' || (float)(uint)pcVar5 <= fStack_34) {
        FUN_8c0306d4(ar4 + 0x9c,0x14,0,"STATUS_GROAN");
      }
      break;
    case 0x1f:
      iVar2 = FUN_8c02f414(ar4,uVar3,piVar4,ar7);
      if (iVar2 == 1) {
        pcVar6 = "REACTION_INSPIDER";
        uVar3 = 0;
        FUN_8c030568(ar4 + 0x9c,0x26,0,"REACTION_INSPIDER",&DAT_8c1eeec3);
        FUN_8c109b98(ar4,ar5,uVar3,pcVar6);
      }
      else {
        *(undefined4 *)(ar4 + 0x38) = 2;
        if (*(int *)(ar4 + 0x6c) != 0) {
          *(undefined4 *)(ar4 + 0x6c) = 0;
        }
      }
    }
  }
  return 1;
}

__asm__(".globl _s_STATUS_SNORE_10485e\n.set _s_STATUS_SNORE_10485e, _s_STATUS_SNORE_10485e_def\n");
