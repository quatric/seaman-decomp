#include "../decls.h"
undefined4 s_SPEECH_01f60c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar4_00;
  char *ar5_00;
  int iVar2;
  undefined4 ar6_00;
  
  *ar4 = 0;
  ar4[1] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  ar4[10] = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 0;
  ar4[0xd] = 0;
  uVar1 = malloc_thunk(0x4b800,ar5,ar6,ar7);
  ar4[4] = uVar1;
  _DAT_8c2792a0 = 0;
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    *(undefined1 *)(ar4 + iVar2 * 0x580d + 0xe) = 0;
  }
  FUN_8c01f6dc(ar4,"\\",0,ar7);
  ar6_00 = 2;
  FUN_8c01f6dc(ar4,"SPEECH",1,ar7);
  ar5_00 = "GRAPHICS";
  ar4_00 = ar4;
  uVar1 = ar6_00;
  FUN_8c01f6dc(ar4,"GRAPHICS",2,ar7);
  FUN_8c262810(ar4_00,ar5_00,ar6_00,ar7,uVar1);
  *(undefined1 *)(ar4 + 7) = 0;
  return 1;
}

__asm__(".globl _s_SPEECH_01f60c\n.set _s_SPEECH_01f60c, _s_SPEECH_01f60c_def\n");
