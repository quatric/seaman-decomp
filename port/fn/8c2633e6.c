#include "../decls.h"
int s_E8101213_can_t_open_s_ADXSTM_2633ea_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  
  ar5_00 = 0;
  iVar1 = ar6;
  uVar2 = ar7;
  a4 = FUN_8c1f397e(ar4,0,ar6,ar7);
  if (a4 == 0) {
    FUN_8c25ece6(0,ar5_00,iVar1,uVar2,s_E8101213__can_t_open___s__ADXSTM_8c272fd4,ar4);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_8c26325e(a4,ar5,ar6 << 0xb,ar7);
    if (iVar1 != 0) {
      uVar2 = 0x20;
      FUN_8c0143c0(iVar1 + 0x40,ar4,0x20,ar7);
      FUN_8c263534(iVar1,0,uVar2,ar7);
    }
  }
  return iVar1;
}

__asm__(".globl _s_E8101213_can_t_open_s_ADXSTM_2633ea\n.set _s_E8101213_can_t_open_s_ADXSTM_2633ea, _s_E8101213_can_t_open_s_ADXSTM_2633ea_def\n");
