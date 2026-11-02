#include "../decls.h"
int s_GRAPHICS_ENV_0d5ee6_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 ar7_00;
  int *ar5_00;
  char *ar6_00;
  int **ar7_01;
  uint uVar3;
  uint in_stack_ffffffd0;
  int *piStack_18;
  undefined4 auStack_14 [2];
  
  auStack_14[0] = 0;
  piStack_18 = (int *)0x0;
  iVar2 = FUN_8c0209fc(ar5,s_kumonosu_nj_8c13fb9e,s_GRAPHICS_ENV_8c13f8cb,auStack_14);
  if (iVar2 == 0) {
    report_error_message(s_kumonosu_nj_8c13fb9e,s_Read_NJCM_Failed___SPIDER_WEB__C_8c13fbaa,0,2);
  }
  ar7_01 = &piStack_18;
  ar6_00 = s_GRAPHICS_ENV_8c13f8cb;
  iVar2 = FUN_8c020af4(ar5,s_kumonosu_nj_8c13fb9e,s_GRAPHICS_ENV_8c13f8cb,ar7_01);
  if (iVar2 == 0) {
    ar7_01 = (int **)0x2;
    ar6_00 = (char *)0x0;
    report_error_message(s_kumonosu_nj_8c13fb9e,s_Read_NJTL_Failed___SPIDER_WEB__C_8c13fbd2,0,2);
  }
  uVar1 = 0;
  while (uVar3 = uVar1, uVar3 < (uint)piStack_18[1]) {
    *(uint *)(uVar3 * 0xc + *piStack_18 + 4) = *(uint *)(uVar3 * 0xc + *piStack_18 + 4) | 0x80000000
    ;
    in_stack_ffffffd0 = uVar3;
    uVar1 = uVar3 + 1;
  }
  FUN_8c015ad4(ar4 + 2,auStack_14[0],ar6_00,ar7_01,in_stack_ffffffd0);
  ar5_00 = piStack_18;
  (**(code **)(*ar4 + 8))(ar4,piStack_18,ar6_00,ar7_01);
  ar7_00 = get_field_4_0253e4(ar4,ar5_00,ar6_00,ar7_01);
  iVar2 = FUN_8c020ef0(ar5,s_SPIDER_WEB_8c13fbfa,s_GRAPHICS_ENV_8c13f8cb,ar7_00);
  if (iVar2 == 0) {
    iVar2 = report_error_message
                      (s_Failed_to_load_web_tex_8c13fc05,s_SoilTank__Createt___8c13fc1c,0,2);
  }
  return iVar2;
}

__asm__(".globl _s_GRAPHICS_ENV_0d5ee6\n.set _s_GRAPHICS_ENV_0d5ee6, _s_GRAPHICS_ENV_0d5ee6_def\n");
