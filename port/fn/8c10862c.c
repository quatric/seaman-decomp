#include "../decls.h"
int FUN_8c10862c_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int ar6_00;
  char cVar4;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar4 = '\0';
  ar6_00 = ar6;
  iVar1 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      *(undefined4 *)(ar4 + 0x118) = 0;
      uVar3 = FUN_8c02c5ac(*(undefined4 *)(ar6 + 4),ar5,ar6_00,ar7);
      *(int *)(ar4 + 0xfc) = (int)(char)uVar3;
      break;
    case 1:
      *(undefined4 *)(ar4 + 0x118) = 1;
      uVar3 = FUN_8c02c5ac(*(int *)(ar6 + 4) + 0x18,ar5,ar6_00,ar7);
      *(int *)(ar4 + 0xfc) = (int)(char)uVar3;
      break;
    case 2:
      *(undefined4 *)(ar4 + 0x118) = 2;
      uVar3 = FUN_8c02c5ac(*(int *)(ar6 + 4) + 0x30,ar5,ar6_00,ar7);
      *(int *)(ar4 + 0xfc) = (int)(char)uVar3;
      break;
    case 3:
      goto switchD_8c108664_caseD_3;
    case 4:
      *(undefined4 *)(ar4 + 0x118) = 4;
      uVar3 = FUN_8c02c5ac(*(int *)(ar6 + 4) + 0x60,ar5,ar6_00,ar7);
      *(int *)(ar4 + 0xfc) = (int)(char)uVar3;
      break;
    case 5:
      *(undefined4 *)(ar4 + 0x118) = 5;
      uVar3 = FUN_8c02c5ac(*(int *)(ar6 + 4) + 0x78,ar5,ar6_00,ar7);
      *(int *)(ar4 + 0xfc) = (int)(char)uVar3;
    }
  }
  else {
switchD_8c108664_caseD_3:
    *(undefined4 *)(ar4 + 0x118) = 7;
    *(undefined4 *)(ar4 + 0xfc) = 0;
    if (*(int *)(ar4 + 0x40) == 6) {
      *(undefined4 *)(ar4 + 0x118) = 9;
    }
    iVar1 = get_field_24_05eed0(*(int *)(ar6 + 4) + 0xf8,ar5,ar6_00,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(ar4 + 0x118) = 8;
    }
  }
  if ((*(int *)(ar4 + 0x40) == 0) || (*(int *)(ar4 + 0x40) == 6)) {
    if ((*(int *)(ar4 + 900) == -1) &&
       ((iVar1 = get_field_178_035734(*(undefined4 *)(ar6 + 8),ar5,ar6_00,ar7), iVar1 == 0 &&
        (iVar1 = get_field_770_05eeb8(ar4 + 0x9c,ar5,ar6_00,ar7), iVar1 == 0)))) {
      uVar3 = 0;
      iVar1 = s_JUNGLE_0309ca(ar4 + 0x9c,0,ar6_00,ar7);
      if (iVar1 != 0) {
        for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
          uVar2 = FUN_8c025f68(iVar1 * 0x18 + *(int *)(ar6 + 4),uVar3,ar6_00,ar7);
          if ((char)uVar2 == '\x01') {
            *(undefined4 *)(ar4 + iVar1 * 4 + 0x11c) = 1;
          }
          else {
            *(undefined4 *)(ar4 + iVar1 * 4 + 0x11c) = 0;
          }
        }
        uVar3 = FUN_8c02d1c8(*(int *)(ar6 + 4) + 0xa8,uVar3,ar6_00,ar7);
        if ((char)uVar3 == '\x01') {
          *(undefined4 *)(ar4 + 0x148) = 1;
        }
        ar6_00 = ar4 + 0x9c;
        uVar3 = FUN_8c0f8320(0x8c35468c,1,ar6_00,ar7);
        *(undefined4 *)(ar4 + 900) = uVar3;
      }
    }
    if ((*(int *)(ar4 + 0x40) == 6) && (*(int *)(ar4 + 900) != -1)) {
      FUN_8c030870(ar4 + 0x9c,1,ar6_00,ar7);
    }
  }
  iVar1 = *(int *)(ar4 + 4);
  if (((iVar1 == 0) && (iVar1 = 0, *(int *)(ar4 + 0x14c) != 0)) &&
     (iVar1 = *(int *)(ar4 + 900), iVar1 != -1)) {
    *(undefined4 *)(ar4 + 4) = 0xd;
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x840) = 0x14;
    DAT_8c1eee30 = 0x14;
    *(undefined4 *)(ar4 + 0x844) = 0xb;
    DAT_8c1eee34 = 0xb;
    *(undefined4 *)(ar4 + 0x848) = 10;
    DAT_8c1eee38 = 10;
    Vec3_ctor_copy(auStack_24,*(int *)(ar6 + 0x14) + 0x10,ar6_00,ar7);
    Vec3_assign_wrap_063818(ar4,auStack_24,ar6_00,ar7);
    Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
    if (cVar4 == '\0') {
      *(undefined4 *)(ar4 + 0x30) = 0x44960000;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = 0x8c05f64044960000;
    }
    Vec3_ctor_copy(auStack_34,*(int *)(ar6 + 0x14) + 0x10,ar6_00,ar7);
    Vec3_assign_wrap_05f640(ar4,auStack_34,ar6_00,ar7);
    Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
    iVar1 = 0x80;
    *(undefined1 *)(ar4 + 0x80) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10862c\n.set _FUN_8c10862c, _FUN_8c10862c_def\n");
