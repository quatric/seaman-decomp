#include "../decls.h"
undefined4 s_Squid_FreeGraphicResource_0ae1c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar5;
  FUN_8c028afc(ar4,ar5,ar6,ar7);
  if ((*(int *)(0x88c + ar4) != 0) && (*(int *)(0x890 + ar4) != 0)) {
    ar6 = *(undefined4 *)(0x890 + ar4);
    uVar2 = 0x2ee0;
    s_GRAPHICS_SQUIDLINE_0ae646(ar5,0x2ee0,ar6,ar7);
  }
  iVar1 = get_field_4_0253e4(ar4 + 0x9bc,uVar2,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = (*(code *)(&report_error_message))
                      ((&DATA_8c13b5ec) + 0x38c,
                       (&DATA_8c13b5ec) + 0x39f,1,2);
  }
  else {
    uVar2 = s_Failed_s_015312(ar4 + 0x9bc,uVar2,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _s_Squid_FreeGraphicResource_0ae1c0\n.set _s_Squid_FreeGraphicResource_0ae1c0, _s_Squid_FreeGraphicResource_0ae1c0_def\n");
