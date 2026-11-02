#include "../decls.h"
undefined4 s_herb_seed_nj_06cb08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fb10) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fa70) = 0;
    *(undefined4 *)(&DAT_8c2805a4 + iVar1 * 0x124) = 0x8c280d68;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fb00) = 0;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7fa6c) = 0;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7fa64) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fb0c) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fb08) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7faf8) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fa70) = 0;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7fa6c) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fa68) = 0;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7fa64) = 0;
  }
  _DAT_8c2804fc = PTR_s_herb_seed_nj_8c136f50;
  _DAT_8c280504 = PTR_s_SEED_1_8c136f64;
  _DAT_8c2805ac = 0x3f800000;
  _DAT_8c2805bc = 0x3ca3d70a;
  _DAT_8c2805c0 = 0x3f4ccccd;
  _DAT_8c2805c4 = 0x43c80000;
  for (iVar1 = 1; iVar1 < 2; iVar1 = iVar1 + 1) {
    *(undefined ***)(iVar1 * 0x124 + -0x73d7fb0c) = &PTR_s_herb_3Leaves_die_njm_8c136f84;
    *(undefined ***)(iVar1 * 0x124 + -0x73d7fb08) = &PTR_s_herb_3Leaves_die_njs_8c136fb8;
    *(undefined **)(&DAT_8c2804fc + iVar1 * 0x124) = PTR_s_herb_3Leaves_home_njd_8c136f54;
    *(undefined **)(&DAT_8c280504 + iVar1 * 0x124) = PTR_s_HERB_1_8c136f68;
    *(undefined **)(iVar1 * 0x124 + -0x73d7faf8) = PTR_s_herb_motionpack_npd_8c136f80;
    *(undefined4 *)(&DAT_8c2805ac + iVar1 * 0x124) = 0x3f800000;
    *(undefined4 *)(&DAT_8c2805bc + iVar1 * 0x124) = 0x3ca3d70a;
    *(undefined4 *)(&DAT_8c2805c0 + iVar1 * 0x124) = 0x3f4ccccd;
    *(undefined4 *)(&DAT_8c2805c4 + iVar1 * 0x124) = 0x43c80000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fa70) = 0x8c280924;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7fa6c) = 0xd;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fa68) = 0x8c280964;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7fa64) = 0xd;
  }
  return 2;
}

__asm__(".globl _s_herb_seed_nj_06cb08\n.set _s_herb_seed_nj_06cb08, _s_herb_seed_nj_06cb08_def\n");
