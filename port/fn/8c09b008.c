#include "../decls.h"
undefined4 s_Cpe_Home_nj_09b008_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined ***)(iVar1 * 0x124 + -0x73d7b890) = &PTR_s_Cpe_BeCatapillar_njm_8c13a9c8;
    *(undefined ***)(iVar1 * 0x124 + -0x73d7b88c) = &PTR_s_Cpe_BeCatapillar_njs_8c13a9cc;
    *(undefined **)(iVar1 * 0x124 + -0x73d7b888) = PTR_s_Cpe_Home_nj_8c13a9c0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b884) = 0;
    *(undefined **)(iVar1 * 0x124 + -0x73d7b880) = PTR_s_MOTH_EGG_8c13a9c4;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b87c) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b7f4) = 0x8c2848b8;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7b7f0) = 1;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b7ec) = 0x8c2848c8;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7b7e8) = 1;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b7e0) = 0x8c2849b8;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b7d8) = 0x3f800000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b7c8) = 0x3ca3d70a;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b7c4) = 0x3f4ccccd;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b7c0) = 0x42c80000;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined2 *)(iVar1 * 0x10 + -0x73d7b764) = 0xffff;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7b760) = 0;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7b75c) = 1;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7b758) = 0;
  }
  return 1;
}

__asm__(".globl _s_Cpe_Home_nj_09b008\n.set _s_Cpe_Home_nj_09b008, _s_Cpe_Home_nj_09b008_def\n");
