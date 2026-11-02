#include "../decls.h"
undefined4 s_CEnv_AddItem_0da93a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_8c0feb3c(ar4 + 0x7a4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    ar7 = 2;
    ar6 = 1;
    (*(code *)(&report_error_message))
              ((&DATA_8c13f7c0) + 0x5b2,
               (&DATA_8c13f7c0) + 0x5c1,1,2);
  }
  iVar2 = ar5;
  FUN_8c0c4da0(ar4,ar5,ar6,ar7);
  *(int *)(iVar1 + 8) = ar5;
  iVar2 = get_field_24_05c284(ar5,iVar2,ar6,ar7);
  FUN_8c0fe2a0(iVar2 * 0x3c + ar4 + 0x3a8,iVar1,ar6,ar7);
  FUN_8c0daa28(ar5,iVar1,ar6,ar7);
  (**(code **)(*(int *)(ar5 + 8) + 0x60))(ar5,iVar1,ar6,ar7);
  iVar1 = ar5;
  FUN_8c0fdf74(ar4 + 0xa4,ar5,ar6,ar7);
  Vec3_assign_wrap_0f4da4(ar5,iVar1,ar6,ar7);
  return 0;
}

__asm__(".globl _s_CEnv_AddItem_0da93a\n.set _s_CEnv_AddItem_0da93a, _s_CEnv_AddItem_0da93a_def\n");
