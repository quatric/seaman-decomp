#include "../decls.h"
int s_GRAPHICS_MESSAGE_0cef1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a7;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 0x10; iVar2 = iVar2 + 1) {
    *(undefined4 *)(0x3ec + iVar2 * 0xc + ar4) = 0;
  }
  a7 = 0x10;
  uVar1 = 0x8c4312a8;
  FUN_8c239170(ar4 + 0x3e0,ar4 + 0x3e8,0x8c4312a8,0x10);
  iVar2 = ar4 + 0x3e0;
  (**(code **)(*(int *)(ar4 + 0x158) + 8))((int *)(ar4 + 0x158),iVar2,uVar1,a7);
  uVar1 = get_field_4_0253e4(ar4 + 0x158,iVar2,uVar1,a7);
  iVar2 = (*(code *)(&FUN_8c02100c))
                    (ar5,(&DATA_8c13d004) + 0x261,
                     (&DATA_8c13d004) + 0x19,uVar1);
  if (iVar2 == -1) {
    iVar2 = (*(code *)(&report_error_message))
                      ((&DATA_8c13d004) + 0x26c,
                       (&DATA_8c13d004) + 0x287,0,2);
  }
  return iVar2;
}

__asm__(".globl _s_GRAPHICS_MESSAGE_0cef1c\n.set _s_GRAPHICS_MESSAGE_0cef1c, _s_GRAPHICS_MESSAGE_0cef1c_def\n");
