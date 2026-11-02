#include "../decls.h"
int s_GRAPHICS_SQUIDLINE_0ae54a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 *ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)(&FUN_8c0209fc))
                    (ar4,*(undefined4 *)(&DATA_8c13b5d8),*(undefined4 *)(&DATA_8c13b4d4),ar6);
  if (iVar1 == 0) {
    (*(code *)(&report_error_message))
              ((&DATA_8c13b5ec) + 0x3bc,
               (&DATA_8c13b5ec) + 0x297,1,2);
  }
  iVar1 = (*(code *)(&FUN_8c020af4))
                    (ar4,*(undefined4 *)(&DATA_8c13b5d8),*(undefined4 *)(&DATA_8c13b4d4),ar7);
  if (iVar1 == 0) {
    (*(code *)(&report_error_message))
              ((&DATA_8c13b5ec) + 0x3dc,
               (&DATA_8c13b5ec) + 0x297,1,2);
  }
  iVar1 = (*(code *)(&FUN_8c020ef0))
                    (ar4,(&DATA_8c13b5ec) + 0x3fe,
                     *(undefined4 *)(&DATA_8c13b4d4),*ar7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)(&report_error_message))
                      ((&DATA_8c13b5ec) + 0x406,
                       (&DATA_8c13b5ec) + 0x297,1,2);
  }
  return iVar1;
}

__asm__(".globl _s_GRAPHICS_SQUIDLINE_0ae54a\n.set _s_GRAPHICS_SQUIDLINE_0ae54a, _s_GRAPHICS_SQUIDLINE_0ae54a_def\n");
