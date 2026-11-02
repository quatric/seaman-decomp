#include "../decls.h"
undefined4 s_GRAPHICS_0ffcb6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  wchar16 *ar5_00;
  undefined4 uVar2;
  undefined4 ar7_00;
  
  ar7_00 = 2;
  uVar2 = 0x8c4413f4;
  FUN_8c239170(0x8c4413d4,0x8c4413dc,0x8c4413f4,2);
  FUN_8c015ccc(ar4 + 0x15c,0x8c4413d4,uVar2,ar7_00,ar5);
  ar5_00 = u____8c1421cc;
  FUN_8c015cd4(ar4 + 0x15c,u____8c1421cc,uVar2,ar7_00,ar5);
  FUN_8c014a0c(ar4 + 0x15c,ar5_00,uVar2,ar7_00);
  uVar2 = get_field_1c_0ffd74(ar4 + 0x15c,ar5_00,uVar2,ar7_00);
  iVar1 = FUN_8c02100c(ar5,s_UsrPointer_pvm_8c142254,s_GRAPHICS_8c142263,uVar2);
  if (iVar1 == -1) {
    report_error_message(s_Failed_to_load_user_pointer_text_8c14226c,&DAT_8c142292,1,2);
  }
  return 1;
}

__asm__(".globl _s_GRAPHICS_0ffcb6\n.set _s_GRAPHICS_0ffcb6, _s_GRAPHICS_0ffcb6_def\n");
