#include "../decls.h"
undefined4
s_E8101210_can_t_open_s_ADXSTM_2632ee_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 ar4_00;
  int ar4_01;
  undefined4 ar5_00;
  undefined1 *ar5_01;
  undefined4 in_stack_ffffffec;
  
  ar5_01 = &stack0xffffffec;
  ar5_00 = 0;
  ar4_00 = ar4;
  iVar1 = FUN_8c1f397e(ar4,0,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c25ece6(ar4_00,ar5_00,ar6,ar7,"E8101210: can\'t open \'%s\' (ADXSTM_OpenFname)",ar4);
  }
  else {
    ar4_01 = iVar1;
    iVar2 = FUN_8c1f30d4(iVar1,&stack0xffffffec,ar6,ar7);
    if (iVar2 != 0) {
      iVar1 = FUN_8c26325e(iVar1,0,in_stack_ffffffec,ar5);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_8c0143c0(iVar1 + 0x40,ar4,0x20,ar5);
      return iVar1;
    }
    FUN_8c25ece6(ar4_01,ar5_01,ar6,ar7,"E8101211: can\'t GetFileSize (ADXSTM_OpenFname)",
                 in_stack_ffffffec);
    FUN_8c1f309c(iVar1,ar5_01,ar6,ar7,in_stack_ffffffec);
  }
  return 0;
}

__asm__(".globl _s_E8101210_can_t_open_s_ADXSTM_2632ee\n.set _s_E8101210_can_t_open_s_ADXSTM_2632ee, _s_E8101210_can_t_open_s_ADXSTM_2632ee_def\n");
