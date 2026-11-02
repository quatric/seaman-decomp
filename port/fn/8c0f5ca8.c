#include "../decls.h"
undefined4 Class_12bec0_m2_0f5ca8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  (**(code **)(*(int *)(ar4 + 8) + 0x28))(ar4,ar7,ar6,ar7);
  FUN_8c0f5fdc(ar4,ar7,ar6,ar7_00);
  iVar1 = get_field_6c_02f46c(ar4,ar7,ar6,ar7_00);
  if (iVar1 == 0) {
    iVar1 = get_field_70_05f490(ar4,ar7,ar6,ar7_00);
    if (iVar1 == 0) {
      FUN_8c0f4d84(ar4,ar7,ar6,ar7_00);
    }
  }
  FUN_8c0f5368(ar4,ar7,ar6,ar7_00);
  return 1;
}

__asm__(".globl _Class_12bec0_m2_0f5ca8\n.set _Class_12bec0_m2_0f5ca8, _Class_12bec0_m2_0f5ca8_def\n");
