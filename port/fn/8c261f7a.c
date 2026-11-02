#include "../decls.h"
int s_E9040901_can_t_find_s_ADXF_O_261f82_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 a4;
  undefined4 *ar5_00;
  undefined4 *a5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 auStack_18 [2];
  
  a5 = &uStack_20;
  ar5_00 = auStack_18;
  a4 = ar5;
  iVar2 = FUN_8c2637ca(ar5,ar5_00,ar6,ar7);
  puVar1 = (&FUN_8c25ece6);
  if (-1 < iVar2) {
    ar5_00 = &uStack_1c;
    a4 = ar5;
    iVar2 = FUN_8c2637e8(ar5,ar5_00,ar6,ar7);
    if (-1 < iVar2) {
      iVar2 = FUN_8c263816(ar5,&uStack_20,ar6,ar7);
      if (iVar2 < 0) {
        (*(code *)puVar1)(ar5,a5,ar6,ar7);
        return iVar2;
      }
      *(undefined4 *)(ar4 + 0xc) = auStack_18[0];
      *(undefined4 *)(ar4 + 0x10) = uStack_1c;
      *(undefined4 *)(ar4 + 0x14) = uStack_20;
      return 0;
    }
  }
  (*(code *)puVar1)(a4,ar5_00,ar6,ar7);
  return iVar2;
}

__asm__(".globl _s_E9040901_can_t_find_s_ADXF_O_261f82\n.set _s_E9040901_can_t_find_s_ADXF_O_261f82, _s_E9040901_can_t_find_s_ADXF_O_261f82_def\n");
