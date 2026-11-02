#include "../decls.h"
int s_GRAPHICS_MESSAGE_0c5a08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *ar6_00;
  undefined4 uVar1;
  undefined4 a7;
  int iVar2;
  undefined4 in_fr1;
  char cVar3;
  
  cVar3 = '\0';
  _DAT_8c4369d8 = 0xff000000;
  _DAT_8c4369d4 = 0xff000000;
  _DAT_8c4369d0 = 0xff000000;
  _DAT_8c4369cc = 0xff000000;
  _DAT_8c4369e8 = 0xff000000;
  _DAT_8c4369e4 = 0xff000000;
  _DAT_8c4369e0 = 0xff000000;
  _DAT_8c4369dc = 0xff000000;
  FUN_8c016318(0x8c436938,0x8c43698c,&DAT_8c4369cc,4,ar5);
  FUN_8c016318(0x8c436958,0x8c4369ac,&DAT_8c4369dc,4,ar5);
  if (cVar3 == '\0') {
    _DAT_8c4369ec = 0;
    uVar1 = in_fr1;
  }
  else {
    uVar1 = 0x43f00000;
    _DAT_8c4369ec = in_fr1;
  }
  _DAT_8c4369f0 = 0x43f00000;
  if (cVar3 == '\0') {
    _DAT_8c4369f8 = 0;
    _DAT_8c436a00 = uVar1;
  }
  else {
    _DAT_8c436a00 = 0x44200000;
    _DAT_8c4369f8 = uVar1;
  }
  _DAT_8c4369fc = 0x44200000;
  if (cVar3 == '\0') {
    _DAT_8c436a00 = 0;
  }
  _DAT_8c436a08 = 0x43f00000;
  _DAT_8c436a04 = 0x44200000;
  _DAT_8c436a18 = 0xffffff;
  _DAT_8c436a14 = 0xffffff;
  _DAT_8c436a10 = 0xffffff;
  _DAT_8c436a0c = 0xffffff;
  uVar1 = 4;
  ar6_00 = &DAT_8c436a0c;
  _DAT_8c4369f4 = _DAT_8c4369f8;
  FUN_8c016318(0x8c436978,&DAT_8c4369ec,&DAT_8c436a0c,4,ar5);
  FUN_8c015198(0x8c436938,0x20,ar6_00,uVar1,ar5);
  FUN_8c015198(0x8c436958,0x20,ar6_00,uVar1,ar5);
  FUN_8c015198(0x8c436978,0x60,ar6_00,uVar1,ar5);
  for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
    *(undefined4 *)(iVar2 * 0xc + ar4 + 0x2d3c0) = 0;
  }
  a7 = 4;
  uVar1 = 0x8c4312a8;
  FUN_8c239170(ar4 + 0x2d3ec,ar4 + 0x2d3bc,0x8c4312a8,4);
  iVar2 = ar4 + 0x2d3ec;
  (**(code **)(*(int *)(ar4 + 0x2d3f4) + 8))((int *)(ar4 + 0x2d3f4),iVar2,uVar1,a7);
  uVar1 = get_field_4_0253e4(ar4 + 0x2d3f4,iVar2,uVar1,a7);
  iVar2 = FUN_8c02100c(ar5,s_exit_pvm_8c13d014,s_GRAPHICS_MESSAGE_8c13d01d,uVar1);
  if (iVar2 == -1) {
    iVar2 = report_error_message
                      (s_Failed_to_load_ExitMenu_message_p_8c13d02e,s_CGame__Init___8c13d054,0,2);
  }
  return iVar2;
}

__asm__(".globl _s_GRAPHICS_MESSAGE_0c5a08\n.set _s_GRAPHICS_MESSAGE_0c5a08, _s_GRAPHICS_MESSAGE_0c5a08_def\n");
