#include "../decls.h"
undefined4 s_REACTION_TITILLATE_064bb8_def(int ar4,undefined4 ar5,int ar6,char *ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *ar5_00;
  char cVar5;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [36];
  
  cVar5 = '\0';
  ar5_00 = auStack_2c;
  puVar3 = &DAT_8c136968;
  iVar2 = 0x10;
  do {
    puVar4 = puVar3 + 1;
    *ar5_00 = *puVar3;
    puVar3 = puVar3 + 2;
    ar5_00[1] = *puVar4;
    ar5_00 = ar5_00 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = ar6;
  if (*(char *)(ar4 + 0x84) == '\x01') {
    if (((*(int *)(ar4 + 0x40) == 0x15) || (*(int *)(ar4 + 0x40) != 0)) ||
       (*(int *)(ar4 + 4) == 0xd)) {
      if (((*(int *)(ar4 + 0x40) == 0x15) &&
          ((*(undefined4 *)(ar4 + 0x40) = 0x15, *(int *)(ar4 + 0x874) == 6 ||
           (*(int *)(ar4 + 0x874) == 7)))) && (*(int *)(ar4 + 900) == -1)) {
        FUN_8c030870(ar4 + 0x9c,0,ar6,ar7);
        ar7 = s_REACTION_TITILLATE_8c136d3b;
        FUN_8c0303b8(ar4 + 0x9c,0x28,0,s_REACTION_TITILLATE_8c136d3b,&DAT_8c1369bf);
        *(undefined4 *)(ar4 + 0xfc) = 0;
        iVar2 = ar4 + 0x9c;
        uVar1 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),iVar2,ar7);
        *(undefined4 *)(ar4 + 900) = uVar1;
        *(undefined4 *)(ar4 + 0x14c) = 0;
        ar5_00 = (undefined1 *)0x2;
        FUN_8c030870(ar4 + 0x9c,2,iVar2,ar7);
      }
    }
    else {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x15;
      *(undefined4 *)(ar4 + 0x840) = 0x15;
      DAT_8c136908 = 0x15;
      *(undefined4 *)(ar4 + 0x844) = 0x36;
      DAT_8c13690c = 0x36;
      *(undefined4 *)(ar4 + 0x848) = 0x36;
      DAT_8c136910 = 0x36;
      ar5_00 = (undefined1 *)0x1;
      FUN_8c0fdd68(ar4 + 0x9c,1,ar6,ar7);
    }
  }
  else if (*(int *)(ar4 + 0x40) == 0x15) {
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 8) = 0x14;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 0x840) = 0;
    DAT_8c136908 = 0;
  }
  if (*(char *)(ar4 + 0x85) == '\x01') {
    if (((*(int *)(ar4 + 0x40) == 0x16) || (*(int *)(ar4 + 0x40) != 0)) ||
       (*(int *)(ar4 + 4) == 0xd)) {
      if (*(int *)(ar4 + 0x40) == 0x16) {
        *(undefined4 *)(ar4 + 0x40) = 0x16;
      }
    }
    else {
      ar5_00 = (undefined1 *)0x1;
      FUN_8c0fdd68(ar4 + 0x9c,1,iVar2,ar7);
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x16;
      *(undefined4 *)(ar4 + 0x840) = 0x16;
      DAT_8c136908 = 0x16;
      *(undefined4 *)(ar4 + 0x844) = 0x36;
      DAT_8c13690c = 0x36;
      *(undefined4 *)(ar4 + 0x848) = 0x36;
      DAT_8c136910 = 0x36;
    }
  }
  if (*(char *)(ar4 + 0x87) == '\x01') {
    if (*(int *)(ar4 + 0x40) == 0x14) {
      if (*(int *)(ar4 + 0x40) == 0x14) {
        *(undefined4 *)(ar4 + 0x40) = 0x14;
      }
    }
    else if (((*(int *)(ar4 + 0x40) == 0) || (*(int *)(ar4 + 0x40) == 0x12)) ||
            (*(int *)(ar4 + 0x40) == 0x10)) {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x14;
      *(undefined4 *)(ar4 + 0x840) = 0x14;
      DAT_8c136908 = 0x14;
      *(undefined4 *)(ar4 + 0x844) = 0x36;
      DAT_8c13690c = 0x36;
      *(undefined4 *)(ar4 + 0x848) = 0x36;
      DAT_8c136910 = 0x36;
      FUN_8c0fdd68(ar4 + 0x9c,0xffffffff,iVar2,ar7);
      ar7 = s_REACTION_DEKOPIN_8c136d4e;
      iVar2 = 0;
      ar5_00 = (undefined1 *)0x27;
      FUN_8c0306d4(ar4 + 0x9c,0x27,0,s_REACTION_DEKOPIN_8c136d4e);
    }
  }
  if (((*(char *)(ar4 + 0x86) == '\x01') &&
      (uVar1 = FUN_8c025f68(*(int *)(ar6 + 4) + 0x78,ar5_00,iVar2,ar7), (char)uVar1 != '\x01')) &&
     (uVar1 = FUN_8c02bef8(*(undefined4 *)(ar6 + 4),ar5_00,iVar2,ar7), 2 < (short)uVar1)) {
    if ((*(int *)(ar4 + 4) == 0xd) || (*(int *)(ar4 + 0x40) != 0)) {
      if ((*(int *)(ar4 + 0x40) == 0x2a) || (*(int *)(ar4 + 0x40) == 0x2b)) {
        uVar1 = get_field_b8_101178(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),ar5_00,iVar2,ar7);
        if ((char)uVar1 == '\x01') {
          *(undefined4 *)(ar4 + 0x844) = 0x2a;
          DAT_8c13690c = 0x2a;
          *(undefined1 *)(ar4 + 0x91) = 1;
          FUN_8c0fdd68(ar4 + 0x9c,1,iVar2,ar7);
          *(int *)(ar4 + 0x860) = *(int *)(ar4 + 0x860) + 1;
        }
        uVar1 = get_field_b8_101178(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),
                                    get_field_b8_101178,iVar2,ar7);
        if ((char)uVar1 == '\x02') {
          *(undefined4 *)(ar4 + 0x40) = 0x2b;
          *(undefined4 *)(ar4 + 0x844) = 0x2b;
          DAT_8c13690c = 0x2b;
          *(undefined1 *)(ar4 + 0x91) = 1;
          *(int *)(ar4 + 0x860) = *(int *)(ar4 + 0x860) + 1;
        }
      }
    }
    else {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x29;
      *(undefined4 *)(ar4 + 0x840) = 0x29;
      DAT_8c136908 = 0x29;
      *(undefined4 *)(ar4 + 0x844) = 0x2a;
      DAT_8c13690c = 0x2a;
      *(undefined4 *)(ar4 + 0x848) = 0x36;
      DAT_8c136910 = 0x36;
      Vec3_ctor_copy(auStack_3c,*(int *)(ar6 + 0x14) + 0x10,iVar2,ar7);
      Vec3_assign_wrap_063818(ar4,auStack_3c,iVar2,ar7);
      Vec3_dtor(auStack_3c,0xffffffff,iVar2,ar7);
      Vec3_ctor_copy(auStack_4c,*(int *)(ar6 + 0x14) + 0x10,iVar2,ar7);
      Vec3_assign_wrap_05f640(ar4,auStack_4c,iVar2,ar7);
      Vec3_dtor(auStack_4c,0xffffffff,iVar2,ar7);
      if (cVar5 == '\0') {
        *(undefined4 *)(ar4 + 0x30) = 0x44960000;
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = 0x714061e344960000;
      }
    }
  }
  else if ((*(int *)(ar4 + 0x40) == 0x29) || (*(int *)(ar4 + 0x40) == 0x2a)) {
    if ((*(int *)(ar4 + 0x40) == 0x2a) && (0x1e < *(int *)(ar4 + 0x860))) {
      FUN_8c0306d4(ar4 + 0x9c,0x15,0,s_STATUS_AFTER_DANCE_8c136d5f);
      *(undefined4 *)(ar4 + 0x860) = 0;
    }
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 8) = 0x14;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 0x840) = 0;
    DAT_8c136908 = 0;
  }
  *(undefined1 *)(ar4 + 0x84) = 0;
  *(undefined1 *)(ar4 + 0x85) = 0;
  *(undefined1 *)(ar4 + 0x87) = 0;
  return 0x87;
}

__asm__(".globl _s_REACTION_TITILLATE_064bb8\n.set _s_REACTION_TITILLATE_064bb8, _s_REACTION_TITILLATE_064bb8_def\n");
