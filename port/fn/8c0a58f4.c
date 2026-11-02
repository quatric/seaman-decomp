#include "../decls.h"
undefined4 s_Cpe_Home_nj_0a58f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined ***)(iVar1 * 0x124 + -0x73d7a9c0) = &PTR_s_Cpe_BeCatapillar_njm_8c13b0f8;
    *(undefined ***)(iVar1 * 0x124 + -0x73d7a9bc) = &PTR_s_Cpe_BeCatapillar_njs_8c13b0fc;
    *(undefined **)(iVar1 * 0x124 + -0x73d7a9b8) = PTR_s_Cpe_Home_nj_8c13b0f0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7a9b4) = 0;
    *(undefined **)(iVar1 * 0x124 + -0x73d7a9b0) = PTR_s_MOTH_EGG_8c13b0f4;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7a9ac) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7a924) = 0x8c285788;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7a920) = 1;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7a91c) = 0x8c285798;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7a918) = 1;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7a910) = 0x8c2857a8;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7a908) = 0x3f800000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7a8f8) = 0x3ca3d70a;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7a8f4) = 0x3f4ccccd;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7a8f0) = 0x42c80000;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined2 *)(iVar1 * 0x10 + -0x73d7a894) = 0xffff;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7a890) = 0;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7a88c) = 1;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7a888) = 0;
  }
  return 1;
}

__asm__(".globl _s_Cpe_Home_nj_0a58f4\n.set _s_Cpe_Home_nj_0a58f4, _s_Cpe_Home_nj_0a58f4_def\n");
