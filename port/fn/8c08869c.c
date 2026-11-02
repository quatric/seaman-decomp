#include "../decls.h"
undefined4 s_gme_Home_nj_08869c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c7fc) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c75c) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c748) = 0;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7c758) = 0;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7c750) = 0;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined ***)(iVar1 * 0x124 + -0x73d7c7f8) = &PTR_s_gme_Birth_njm_8c138588;
    *(undefined ***)(iVar1 * 0x124 + -0x73d7c7f4) = &PTR_s_gme_Birth_njs_8c13858c;
    *(undefined **)(iVar1 * 0x124 + -0x73d7c7f0) = PTR_s_gme_Home_nj_8c13857c;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c7ec) = 0;
    *(undefined **)(iVar1 * 0x124 + -0x73d7c7e8) = PTR_s_HIGYO_EGG_8c138584;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c7e4) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c75c) = 0x8c283950;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7c758) = 1;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c754) = 0x8c283960;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7c750) = 1;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c748) = 0x8c283a50;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c740) = 0x3f800000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c730) = 0x3ca3d70a;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c72c) = 0x3f4ccccd;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c728) = 0x42c80000;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined2 *)(iVar1 * 0x10 + -0x73d7c6cc) = 0xffff;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7c6c8) = 1;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7c6c4) = 0;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7c6c0) = 0;
  }
  return 1;
}

__asm__(".globl _s_gme_Home_nj_08869c\n.set _s_gme_Home_nj_08869c, _s_gme_Home_nj_08869c_def\n");
