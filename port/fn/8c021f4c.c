#include "../decls.h"
undefined4 FUN_8c021f4c_def(int *ar4,int ar5,int *ar6,int *ar7,int *s0)

{
  undefined4 uVar1;
  ushort *ar6_00;
  int *ar7_00;
  ushort auStack_18 [2];
  int iStack_14;
  undefined1 *puStack_c;
  
  puStack_c = &DAT_8c4366c0;
  if (*ar4 == 0) {
    return 2;
  }
  if ((ar5 < 0) || (2 < ar5)) {
    return 2;
  }
  ar6_00 = auStack_18;
  ar7_00 = ar7;
  iStack_14 = FUN_8c022a1c(ar4 + 1,ar5,ar6_00,ar7);
  if (iStack_14 == 1) {
    pack_release_entry_handle(ar4,ar5,ar6_00,ar7_00);
    return 1;
  }
  if (iStack_14 == 2) {
    return 3;
  }
  if (iStack_14 != 3) {
    return 2;
  }
  *ar6 = (int)(auStack_18[0] & 0xf0) >> 4;
  *ar7 = (int)(auStack_18[0] & 0xf00) >> 8;
  *s0 = (int)(auStack_18[0] & 0xf000) >> 0xc;
  if ((auStack_18[0] & 0xf) < 8) {
                    
    switch(auStack_18[0] & 0xf) {
    case 0:
      uVar1 = 5;
      break;
    default:
      uVar1 = 6;
      break;
    case 4:
    case 5:
    case 6:
      uVar1 = 7;
      break;
    case 7:
      goto switchD_8c022008_caseD_7;
    }
  }
  else {
switchD_8c022008_caseD_7:
    uVar1 = 8;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c021f4c\n.set _FUN_8c021f4c, _FUN_8c021f4c_def\n");
