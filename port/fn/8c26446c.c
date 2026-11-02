#include "../decls.h"
undefined4 s_E8101205_can_t_open_s_ADXT_S_26446e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ain0;
  int iVar2;
  int ain0_00;
  undefined4 uVar3;
  
  iVar2 = ar4;
  ain0_00 = ar5;
  FUN_8c263c64(ar4,ar5,ar6,ar7);
  FUN_8c260ca0(iVar2,ar5,ar6,ar7,ain0_00);
  uVar3 = *(undefined4 *)(ar4 + 0x10);
  iVar2 = ain0_00;
  iVar1 = s_E8101210_can_t_open_s_ADXSTM_2632ee(ain0_00,uVar3,ar6,ar7);
  *(int *)(ar4 + 8) = iVar1;
  if (iVar1 == 0) {
    FUN_8c260cc8(ain0_00,uVar3,ar6,ar7,iVar2);
    ain0 = FUN_8c25ece6(ain0_00,uVar3,ar6,ar7,"E8101205: can\'t open \'%s\' (ADXT_StartFname)",iVar2
                       );
    ar4 = ain0_00;
  }
  else {
    ain0 = FUN_8c263bc0(ar4,uVar3,ar6,ar7);
  }
  uVar3 = FUN_8c260cc8(ar4,uVar3,ar6,ar7,ain0);
  return uVar3;
}

__asm__(".globl _s_E8101205_can_t_open_s_ADXT_S_26446e\n.set _s_E8101205_can_t_open_s_ADXT_S_26446e, _s_E8101205_can_t_open_s_ADXT_S_26446e_def\n");
