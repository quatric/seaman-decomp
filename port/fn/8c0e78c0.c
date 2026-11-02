#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0e78c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  char *ar5_00;
  undefined4 uVar3;
  char *ar6_00;
  undefined4 ar7_00;
  int iVar4;
  
  uVar1 = get_field_4_0253e4(ar4 + 0x488,ar5,ar6,ar7);
  ar7_00 = 2;
  uVar3 = 0x8c4312a8;
  iVar2 = ar4 + 0x498;
  FUN_8c239170(uVar1,iVar2,0x8c4312a8,2);
  for (iVar4 = 0; iVar4 < 2; iVar4 = iVar4 + 1) {
    *(undefined4 *)(iVar4 * 0xc + ar4 + 0x49c) = 0x80000000;
  }
  uVar1 = get_field_4_0253e4(ar4 + 0x488,iVar2,uVar3,ar7_00);
  ar6_00 = s_GRAPHICS_ENV_8c13f8cb;
  ar5_00 = s_Incubater_pvm_8c1400cd;
  iVar2 = FUN_8c02100c(ar5,s_Incubater_pvm_8c1400cd,s_GRAPHICS_ENV_8c13f8cb,uVar1);
  if (iVar2 == 0) {
    uVar1 = 2;
    ar6_00 = (char *)0x0;
    ar5_00 = s_CIncubater__Create___8c1400ff;
    report_error_message
              (s_Failed_to_load_incubater_textuer_8c1400db,s_CIncubater__Create___8c1400ff,0,2);
  }
  uVar3 = get_field_4_0253e4(ar4 + 0x488,ar5_00,ar6_00,uVar1);
  FUN_8c015ccc(ar4 + 0x414,uVar3,ar6_00,uVar1,ar5);
  uVar1 = FUN_8c015cd4(ar4 + 0x414,&DAT_8c13f750,ar6_00,uVar1,ar5);
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0e78c4\n.set _s_GRAPHICS_ENV_0e78c4, _s_GRAPHICS_ENV_0e78c4_def\n");
