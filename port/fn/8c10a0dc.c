#include "../decls.h"
int Class_12c3c4_m5_10a0dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(int *)(0x384 + ar4);
  if (iVar1 != -1) {
    FUN_8c0f8214(0x8c35468c,ar5,ar6,ar7);
    ar5_00 = 3;
    FUN_8c030870(ar4 + 0x9c,3,ar6,ar7);
    *(undefined1 *)(0x80 + ar4) = 1;
    *(undefined4 *)(0x384 + ar4) = 0xffffffff;
    *(undefined4 *)(0xfc + ar4) = 0;
    s_STATUS_FORMAT_030306(ar4 + 0x9c,ar5_00,ar6,ar7);
    if ((*(int *)(ar4 + 0x40) == 0xb) || (iVar1 = *(int *)(ar4 + 0x40), iVar1 == 10)) {
      *(undefined4 *)(ar4 + 4) = 0;
      *(undefined4 *)(ar4 + 8) = 0x14;
      *(undefined4 *)(ar4 + 0xc) = 0;
      iVar1 = 0x40;
      *(undefined4 *)(ar4 + 0x40) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _Class_12c3c4_m5_10a0dc\n.set _Class_12c3c4_m5_10a0dc, _Class_12c3c4_m5_10a0dc_def\n");
