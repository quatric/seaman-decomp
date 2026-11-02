#include "../decls.h"
int s_STATUS_SUCKED_1093aa_def(int ar4,int *ar5,int *ar6,char *ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *ar5_00;
  int *ar6_00;
  undefined4 in_stack_ffffffac;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar1 = (**(code **)(*(int *)(*ar6 + 8) + 0xb8))(*ar6,ar5,ar6,ar7);
  if ((iVar1 == 1) && (*(int *)(ar4 + 4) != 1)) {
    iVar1 = get_field_6c_02f46c(*ar6,ar5_00,ar6_00,ar7);
    if ((iVar1 == 0) && (iVar1 = get_field_70_05f490(*ar6,ar5_00,ar6_00,ar7), iVar1 == 0)) {
      ar6_00 = (int *)0x1b;
      FUN_8c0b9ed4(ar6[6],0xe,0x1b,ar7);
      *(undefined4 *)(ar4 + 0x38) = 2;
      *(undefined4 *)(ar4 + 4) = 1;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 8) = 99;
      ar5_00 = (int *)0xc7;
      FUN_8c02f298(ar4,199,ar6_00,ar7);
      *(undefined1 *)(ar4 + 0x98) = 10;
    }
    else if (*(int *)(ar4 + 4) != 0xb) {
      *(undefined4 *)(ar4 + 0x38) = 2;
      *(undefined4 *)(ar4 + 4) = 0xb;
      *(undefined4 *)(ar4 + 8) = 99;
      *(undefined4 *)(ar4 + 0x40) = 0xd;
      FUN_8c02f298(ar4,0x4af,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x840) = 0xd;
      DAT_8c1eee30 = 0xd;
      *(undefined4 *)(ar4 + 0x844) = 0x22;
      DAT_8c1eee34 = 0x22;
      ar7 = "STATUS_SUCKED";
      ar6_00 = (int *)0x0;
      ar5_00 = (int *)0x19;
      FUN_8c0306d4(ar4 + 0x9c,0x19,0,"STATUS_SUCKED");
      if (*(int *)(ar4 + 0x6c) != 0) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                  (*(int *)(ar4 + 0x6c),ar5_00,ar6_00,ar7);
        *(undefined4 *)(ar4 + 0x6c) = 0;
      }
    }
    if ((*(char *)(ar4 + 0x864) == '\x01') && (*(int *)(ar4 + 4) == 0)) {
      *(undefined1 *)(ar4 + 0x864) = 0;
    }
  }
  uVar2 = FUN_8c02bef8(ar6[1],ar5_00,ar6_00,ar7);
  if ((short)uVar2 == 1) {
LAB_8c109510:
    iVar1 = get_field_8_1097a0(ar6[3],ar5_00,ar6_00,ar7);
    if ((((iVar1 == 1) && (*(char *)(ar4 + 0x864) != '\x01')) &&
        (iVar1 = FUN_8c02c518(ar6[1],ar5_00,ar6_00,ar7), iVar1 == -1)) && (*(int *)(ar4 + 4) != 0xd)
       ) {
      *(undefined1 *)(ar4 + 0x864) = 1;
      FUN_8c02f298(ar4,0x2b9,ar6_00,ar7);
      ar5_00 = (int *)0x0;
      FUN_8c109798(ar6[3],0,ar6_00,ar7,in_stack_ffffffac);
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 6;
      *(undefined4 *)(ar4 + 0x38) = 2;
    }
  }
  else {
    uVar2 = FUN_8c02bef8(ar6[1],ar5_00,ar6_00,ar7);
    in_stack_ffffffac = CONCAT22((short)uVar2,(short)in_stack_ffffffac);
    if ((short)uVar2 == 2) goto LAB_8c109510;
  }
  iVar1 = get_field_c4_066448(ar6[3],ar5_00,ar6_00,ar7);
  if (((iVar1 == 0) && (*(int *)(ar4 + 0x40) == 0)) && (*(int *)(ar4 + 900) == -1)) {
    iVar1 = get_field_13c_028d9c(ar6[1],ar5_00,ar6_00,ar7);
    if ((iVar1 == 3) || (iVar1 = get_field_13c_028d9c(ar6[1],ar5_00,ar6_00,ar7), iVar1 == 4)) {
      ar5_00 = (int *)0xf;
      iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,0xf,ar6_00,ar7);
      if (iVar1 < 1) {
        ar7 = (char *)0xa;
        ar5_00 = ar5;
        ar6_00 = ar6;
        iVar1 = FUN_8c02f880(ar4,ar5,ar6,10);
        if (iVar1 == 0) goto LAB_8c1096ec;
      }
      uVar2 = FUN_8c03584c(ar6[3],ar5_00,ar6_00,ar7);
      if (((char)uVar2 == '\x02') && (*(char *)(ar4 + 0x98) < '\b')) {
        ar7 = "REACTION_FEED_FULL";
        ar6_00 = (int *)0x0;
        FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_FEED_FULL");
        ar5_00 = (int *)0x1;
        FUN_8c06643c(ar6[3],1,ar6_00,ar7);
      }
    }
    else {
      ar5_00 = (int *)0xf;
      iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,0xf,ar6_00,ar7);
      if ((0 < iVar1) && (*(char *)(ar4 + 0x865) == '\x01')) {
        ar7 = "REACTION_FEED_FULL";
        ar6_00 = (int *)0x0;
        FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_FEED_FULL");
        ar5_00 = (int *)0x1;
        FUN_8c06643c(ar6[3],1,ar6_00,ar7);
      }
    }
  }
LAB_8c1096ec:
  iVar1 = *(int *)(ar4 + 0x6c);
  if (((iVar1 == 0) && (iVar1 = get_field_13c_028d9c(ar6[1],ar5_00,ar6_00,ar7), iVar1 == 2)) &&
     (iVar1 = *(int *)(ar4 + 0x40), iVar1 == 0)) {
    iVar3 = (**(code **)(*ar5 + 0x11c))(ar5,0xf,ar6_00,ar7);
    iVar1 = 1;
    if (((0 < iVar3) && (iVar1 = (int)*(char *)(ar4 + 0x865), iVar1 == 0)) &&
       ((iVar1 = *(int *)(ar4 + 4), iVar1 != 0xd && (iVar1 = *(int *)(ar4 + 4), iVar1 != 6)))) {
      FUN_8c02f298(ar4,0x2b9,ar6_00,ar7);
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 6;
      *(undefined4 *)(ar4 + 0x38) = 2;
      iVar1 = 0x865;
      *(undefined1 *)(ar4 + 0x865) = 1;
    }
  }
  return iVar1;
}

__asm__(".globl _s_STATUS_SUCKED_1093aa\n.set _s_STATUS_SUCKED_1093aa, _s_STATUS_SUCKED_1093aa_def\n");
