#include "../decls.h"
int s_STATUS_SUCKED_0660da_def(int ar4,int *ar5,int *ar6,char *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *a5;
  int *a6;
  char *ar7_00;
  undefined4 in_stack_ffffffbc;
  
  a5 = ar5;
  a6 = ar6;
  if (((*(int *)(ar4 + 0x6c) == 0) && (*(int *)(ar4 + 0x40) == 0)) && (*(int *)(ar4 + 0x874) == 7))
  {
    uVar1 = FUN_8c066834(ar4,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = uVar1;
    if ((*(int *)(ar4 + 0x6c) == 0) || (*(int *)(ar4 + 4) != 0)) {
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
    else {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x74))(*(int *)(ar4 + 0x6c),a5,a6,ar7);
      *(undefined4 *)(ar4 + 0x40) = 6;
      *(undefined4 *)(ar4 + 4) = 6;
      *(undefined4 *)(ar4 + 0xc) = 0;
      a5 = (int *)0x2bb;
      FUN_8c02f298(ar4,699,a6,ar7);
    }
  }
  iVar2 = (**(code **)(*(int *)(*ar6 + 8) + 0xb8))(*ar6,a5,a6,ar7);
  if ((iVar2 == 1) && (*(int *)(ar4 + 4) != 1)) {
    iVar2 = get_field_6c_02f46c(*ar6,a5,a6,ar7);
    if (iVar2 == 0) {
      iVar2 = get_field_70_05f490(*ar6,a5,a6,ar7);
      if (iVar2 != 0) goto LAB_8c0661e8;
      a6 = (int *)0x1b;
      FUN_8c0b9ed4(ar6[6],0x1b,0x1b,ar7);
      *(undefined4 *)(ar4 + 0x38) = 2;
      *(undefined4 *)(ar4 + 4) = 1;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 8) = 99;
      a5 = (int *)0xc7;
      FUN_8c02f298(ar4,199,a6,ar7);
    }
    else {
LAB_8c0661e8:
      if (*(int *)(ar4 + 4) != 0xb) {
        *(undefined4 *)(ar4 + 0x38) = 2;
        *(undefined4 *)(ar4 + 4) = 0xb;
        *(undefined4 *)(ar4 + 8) = 99;
        *(undefined4 *)(ar4 + 0x40) = 0xe;
        a5 = (int *)0x4af;
        FUN_8c02f298(ar4,0x4af,a6,ar7);
        iVar2 = get_field_c8_061174(ar6[3],a5,a6,ar7);
        if ((iVar2 == 0) || (*(int *)(ar4 + 900) != -1)) {
          ar7 = s_STATUS_SUCKED_8c136e43;
          a6 = (int *)0x0;
          a5 = (int *)0x19;
          FUN_8c0306d4(ar4 + 0x9c,0x19,0,s_STATUS_SUCKED_8c136e43);
        }
        if (*(int *)(ar4 + 0x6c) != 0) {
          (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),a5,a6,ar7);
          *(undefined4 *)(ar4 + 0x6c) = 0;
        }
      }
    }
    if ((*(char *)(ar4 + 0x878) == '\x01') && (*(int *)(ar4 + 4) == 0)) {
      *(undefined1 *)(ar4 + 0x878) = 0;
    }
  }
  uVar1 = FUN_8c02bef8(ar6[1],a5,a6,ar7);
  if ((short)uVar1 != 1) {
    uVar1 = FUN_8c02bef8(ar6[1],a5,a6,ar7);
    in_stack_ffffffbc = CONCAT22((short)uVar1,(short)in_stack_ffffffbc);
    if ((short)uVar1 != 2) goto LAB_8c0662e6;
  }
  iVar2 = get_field_c_06645c(ar6[3],a5,a6,ar7);
  if (((iVar2 == 1) && (*(char *)(ar4 + 0x878) != '\x01')) && (*(int *)(ar4 + 4) != 0xd)) {
    *(undefined1 *)(ar4 + 0x878) = 1;
    FUN_8c02f298(ar4,0x2b9,a6,ar7);
    a5 = (int *)0x0;
    FUN_8c066454(ar6[3],0,a6,ar7,in_stack_ffffffbc);
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 4) = 6;
    *(undefined4 *)(ar4 + 0x38) = 2;
  }
LAB_8c0662e6:
  if (*(int *)(ar4 + 0x6c) == 0) {
    iVar2 = get_field_13c_028d9c(ar6[1],a5,a6,ar7);
    if ((iVar2 == 6) && (*(int *)(ar4 + 0x40) == 0)) {
      a5 = (int *)0xf;
      iVar2 = (**(code **)(*ar5 + 0x11c))(ar5,0xf,a6,ar7);
      if ((0 < iVar2) && ((*(int *)(ar4 + 4) != 0xd && (*(int *)(ar4 + 4) != 6)))) {
        a5 = (int *)0x2b9;
        FUN_8c02f298(ar4,0x2b9,a6,ar7);
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 4) = 6;
        *(undefined4 *)(ar4 + 0x38) = 2;
      }
    }
  }
  iVar2 = get_field_c4_066448(ar6[3],a5,a6,ar7);
  if (((iVar2 == 0) && (iVar2 = *(int *)(ar4 + 0x40), iVar2 == 0)) &&
     (iVar2 = *(int *)(ar4 + 900), iVar2 == -1)) {
    iVar2 = get_field_13c_028d9c(ar6[1],a5,a6,ar7);
    if (iVar2 == 7) {
      uVar1 = 10;
      iVar3 = (**(code **)(*ar5 + 0x11c))(ar5,10,a6,ar7);
      iVar2 = 1;
      if (0 < iVar3) {
        uVar1 = FUN_8c03584c(ar6[3],uVar1,a6,ar7);
        iVar2 = (int)(char)uVar1;
        if (iVar2 == 2) {
          ar7_00 = s_REACTION_FEED_FULL_8c136e51;
          uVar1 = 0;
          FUN_8c0306d4(ar4 + 0x9c,0x2c,0,s_REACTION_FEED_FULL_8c136e51);
          iVar2 = FUN_8c06643c(ar6[3],1,uVar1,ar7_00);
        }
      }
    }
  }
  return iVar2;
}

__asm__(".globl _s_STATUS_SUCKED_0660da\n.set _s_STATUS_SUCKED_0660da, _s_STATUS_SUCKED_0660da_def\n");
