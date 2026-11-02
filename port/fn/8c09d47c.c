#include "../decls.h"
undefined4 s_MrEgg_Home_nj_09d47c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b570) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b56c) = 0;
    *(undefined **)(iVar1 * 0x124 + -0x73d7b568) = PTR_s_MrEgg_Home_nj_8c13aa70;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b564) = 0;
    *(undefined **)(iVar1 * 0x124 + -0x73d7b560) = PTR_s_MUSHROOMER_EGG_8c13aa74;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b55c) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b4c0) = 0x8c284cb8;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b4b8) = 0x3f800000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b4a8) = 0x3ca3d70a;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b4a4) = 0x3ecccccd;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b4a0) = 0x43480000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b4ac) = 0x3eb33333;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b454) = 0x43898000;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined2 *)(iVar1 * 0x10 + -0x73d7b444) = 0xffff;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7b440) = 1;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7b43c) = 0;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7b438) = 0;
  }
  return 1;
}

__asm__(".globl _s_MrEgg_Home_nj_09d47c\n.set _s_MrEgg_Home_nj_09d47c, _s_MrEgg_Home_nj_09d47c_def\n");
