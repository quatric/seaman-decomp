#include "../decls.h"
int s_GRAPHICS_ENV_0d1fa0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar7_00;
  int iVar1;
  undefined **ar5_00;
  
  ar5_00 = &PTR_PTR_8c13f33c;
  Class_129920_m0_015248(0x8c4377f4,&PTR_PTR_8c13f33c,ar6,ar7,ar4);
  ar7_00 = get_field_4_0253e4(0x8c4377f4,ar5_00,ar6,ar7);
  iVar1 = FUN_8c020ef0(ar4,s_DEVICE_PANEL_8c13f8be,s_GRAPHICS_ENV_8c13f8cb,ar7_00);
  if (iVar1 == 0) {
    iVar1 = report_error_message
                      (s_Failed_to_load_device_panel_text_8c13f8d8,
                       s_CEnv__LoadDevicePanelTexture___8c13f8fe,0,2);
  }
  return iVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0d1fa0\n.set _s_GRAPHICS_ENV_0d1fa0, _s_GRAPHICS_ENV_0d1fa0_def\n");
