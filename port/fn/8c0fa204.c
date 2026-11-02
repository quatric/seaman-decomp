#include "../decls.h"
undefined4 s_CHAPTER_02d_0fa206_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  FUN_8c014334(*(undefined4 *)(ar4 + 0x1050),ar5,ar6,ar7,s_CHAPTER_02d_8c140bbd);
  strcpy(*(int *)(ar4 + 0x1050) + 0x20,*(undefined4 *)(ar4 + 0x1050),ar6_00,ar7,ar5);
  FUN_8c01437c(*(int *)(ar4 + 0x1050) + 0x20,&DAT_8c140bc9,ar6_00,ar7);
  FUN_8c01437c(*(int *)(ar4 + 0x1050) + 0x20,ar6,ar6_00,ar7);
  strcpy(*(int *)(ar4 + 0x1050) + 0x40,&DAT_8c1408e9,ar6_00,ar7,ar5);
  *(undefined4 *)(*(int *)(ar4 + 0x1050) + 0x70) = 0;
  FUN_8c0fda28(ar4 + 0x1054,0,ar6_00,ar7);
  *(undefined4 *)(ar4 + 0x89130) = 3;
  return 0x89130;
}

__asm__(".globl _s_CHAPTER_02d_0fa206\n.set _s_CHAPTER_02d_0fa206, _s_CHAPTER_02d_0fa206_def\n");
