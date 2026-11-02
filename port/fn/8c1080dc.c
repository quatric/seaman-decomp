#include "../decls.h"
int s_REACTION_TITILLATE_1080e0_def(int ar4,int *ar5,int ar6,undefined *ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 a6;
  
  iVar2 = ar6;
  if (*(char *)(0x84 + ar4) == '\x01') {
    if ((*(int *)(ar4 + 0x40) == 0x1a) || (*(int *)(ar4 + 0x40) != 0)) {
      if ((*(int *)(ar4 + 0x40) == 0x1a) &&
         (*(undefined4 *)(ar4 + 0x40) = 0x1a, *(int *)(0x384 + ar4) == -1)) {
        FUN_8c030870(ar4 + 0x9c,0,ar6,ar7);
        ar7 = (&DATA_8c1eee90) + 0x376;
        (*(code *)(&FUN_8c0303b8))
                  (ar4 + 0x9c,0x28,0,ar7,(&DATA_8c1eee90) + 0x33);
        *(undefined4 *)(0xfc + ar4) = 0;
        iVar2 = ar4 + 0x9c;
        uVar1 = (*(code *)(&FUN_8c0f8320))
                          (0x8c35468c,*(undefined4 *)(0x388 + ar4),iVar2,ar7);
        *(undefined4 *)(0x384 + ar4) = uVar1;
        *(undefined4 *)(0x14c + ar4) = 0;
        FUN_8c030870(ar4 + 0x9c,2,iVar2,ar7);
      }
    }
    else {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x1a;
      *(undefined4 *)(0x840 + ar4) = 0x1a;
      *(undefined4 *)((&DATA_8c1eed94) + 0x9c) = 0x1a;
      *(undefined4 *)(0x844 + ar4) = 0x22;
      *(undefined4 *)((&DATA_8c1eed94) + 0xa0) = 0x22;
      *(undefined4 *)(0x848 + ar4) = 0x22;
      *(undefined4 *)((&DATA_8c1eed94) + 0xa4) = 0x22;
      FUN_8c0fdd68(ar4 + 0x9c,1,ar6,ar7);
    }
  }
  else if (*(int *)(ar4 + 0x40) == 0x1a) {
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 8) = 0x14;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(0x840 + ar4) = 0;
    *(undefined4 *)((&DATA_8c1eed94) + 0x9c) = 0;
  }
  if (*(char *)(0x85 + ar4) == '\x01') {
    if ((*(int *)(ar4 + 0x40) == 0x1b) || (*(int *)(ar4 + 0x40) != 0)) {
      if (*(int *)(ar4 + 0x40) == 0x1b) {
        *(undefined4 *)(ar4 + 0x40) = 0x1b;
      }
    }
    else {
      FUN_8c0fdd68(ar4 + 0x9c,1,iVar2,ar7);
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x1b;
      *(undefined4 *)(0x840 + ar4) = 0x1b;
      *(undefined4 *)((&DATA_8c1eed94) + 0x9c) = 0x1b;
      *(undefined4 *)(0x844 + ar4) = 0x22;
      *(undefined4 *)((&DATA_8c1eed94) + 0xa0) = 0x22;
      *(undefined4 *)(0x848 + ar4) = 0x22;
      *(undefined4 *)((&DATA_8c1eed94) + 0xa4) = 0x22;
    }
  }
  if ((*(char *)(0x87 + ar4) == '\x01') && (*(int *)(ar4 + 0x40) != 0x19)) {
    if ((*(int *)(ar4 + 0x40) == 0) ||
       ((*(int *)(ar4 + 0x40) == 3 || (*(int *)(ar4 + 0x40) == 0x14)))) {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x19;
      *(undefined4 *)(0x840 + ar4) = 0x19;
      *(undefined4 *)((&DATA_8c1eed94) + 0x9c) = 0x19;
      *(undefined4 *)(0x844 + ar4) = 0x22;
      *(undefined4 *)((&DATA_8c1eed94) + 0xa0) = 0x22;
      *(undefined4 *)(0x848 + ar4) = 0x22;
      *(undefined4 *)((&DATA_8c1eed94) + 0xa4) = 0x22;
      FUN_8c0fdd68(ar4 + 0x9c,0xffffffff,iVar2,ar7);
      ar7 = (&DATA_8c1eee90) + 0x389;
      iVar2 = 4;
      FUN_8c0306d4(ar4 + 0x9c,0x27,4,ar7);
    }
    else if (*(int *)(ar4 + 0x40) == 0x19) {
      *(undefined4 *)(ar4 + 0x40) = 0x19;
    }
  }
  iVar2 = (**(code **)(0x11c + *ar5))(ar5,0xd,iVar2,ar7);
  if (0 < iVar2) {
    a6 = 0;
    uVar1 = 0xd;
    iVar2 = (**(code **)(0x100 + *ar5))(ar5,0xd,0,ar7);
    iVar2 = (**(code **)(0xb4 + *(int *)(iVar2 + 8)))(iVar2,uVar1,a6,ar7);
    if (((iVar2 == 1) &&
        (uVar1 = (*(code *)(&get_field_a0_035724))
                           (*(undefined4 *)(ar6 + 0x18),uVar1,a6,ar7), (byte)uVar1 < 2)) &&
       (*(int *)(ar4 + 0x40) != 0x1f)) {
      if (*(int *)(ar4 + 0x40) == 0) {
        uVar1 = (**(code **)(0x100 + *ar5))(ar5,0xd,0,ar7);
        *(undefined4 *)(ar4 + 0x6c) = uVar1;
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x41;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0x1f;
        *(undefined4 *)(0x840 + ar4) = 0x1f;
        *(undefined4 *)((&DATA_8c1eed94) + 0x9c) = 0x1f;
        *(undefined4 *)(0x844 + ar4) = 0x22;
        *(undefined4 *)((&DATA_8c1eed94) + 0xa0) = 0x22;
        *(undefined4 *)(0x848 + ar4) = 0x22;
        *(undefined4 *)((&DATA_8c1eed94) + 0xa4) = 0x22;
      }
      else if (*(int *)(ar4 + 0x40) == 0x1f) {
        *(undefined4 *)(ar4 + 0x40) = 0x1f;
      }
    }
  }
  *(undefined1 *)(0x84 + ar4) = 0;
  *(undefined1 *)(0x85 + ar4) = 0;
  iVar2 = 0x87;
  *(undefined1 *)(0x87 + ar4) = 0;
  return iVar2;
}

__asm__(".globl _s_REACTION_TITILLATE_1080e0\n.set _s_REACTION_TITILLATE_1080e0, _s_REACTION_TITILLATE_1080e0_def\n");
