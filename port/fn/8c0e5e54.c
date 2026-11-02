#include "../decls.h"
undefined4 * s_Outside_0e5e56_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *ar5_00;
  code *ar5_01;
  undefined4 uVar1;
  code *ar6_00;
  undefined4 uVar2;
  undefined4 in_fr1;
  char cVar3;
  
  cVar3 = '\0';
  uVar2 = 0;
  uVar1 = 2;
  ar5_00 = s_Outside_8c140040;
  FUN_8c0d9c80(ar4,s_Outside_8c140040,2,0);
  *ar4 = &DAT_8c12b580;
  FUN_8c015224(ar4 + 0x430,ar5_00,uVar1,uVar2);
  FUN_8c015ab8(ar4 + 0x432,ar5_00,uVar1,uVar2);
  Vec3_ctor_zero(ar4 + 0x433,ar5_00,uVar1,uVar2);
  s_66_JUNGLE_RAIN_5_0d7f1a(ar4 + 0x437,ar5_00,uVar1,uVar2);
  FUN_8c010120(ar4 + 0x1fd2,FUN_8c0d6ee0,free_if_nonnull_wrap_0d6ef8,0xc,100);
  uVar1 = 0x18;
  ar6_00 = free_if_nonnull_wrap_0cffc8;
  ar5_01 = FUN_8c02145c;
  FUN_8c010120(ar4 + 0x20fe,FUN_8c02145c,free_if_nonnull_wrap_0cffc8,0x18,1);
  FUN_8c0e6ef0(ar4,ar5_01,ar6_00,uVar1);
  if (cVar3 == '\0') {
    ar4[0x2e9] = 0x425dae14;
    ar4[0x2af] = 0x453b7ff4;
    ar4[0x2b0] = 0x4506eccd;
    ar4[0x2b1] = 0x45520000;
    ar4[0x20] = 0x430c0000;
    ar4[0x21] = 0x42c80000;
    ar4[0x23] = 0x43a00000;
    ar4[0x24] = 0x42e00000;
    ar4[0x25] = 0x41000000;
  }
  else {
    *(undefined8 *)(ar4 + 0x2e9) = 0xabc425dae14;
    *(undefined8 *)(ar4 + 0x2af) = 0xac0453b7ff4;
    *(undefined8 *)(ar4 + 0x2b0) = 0x440ea6664506eccd;
    *(undefined8 *)(ar4 + 0x2b1) = 0x8045520000;
    *(undefined8 *)(ar4 + 0x20) = 0x84430c0000;
    *(undefined8 *)(ar4 + 0x21) = 0x8c42c80000;
    *(undefined8 *)(ar4 + 0x23) = 0x9043a00000;
    *(undefined8 *)(ar4 + 0x24) = 0x9442e00000;
    in_fr1 = 0x41000000;
    *(undefined8 *)(ar4 + 0x25) = 0x9841000000;
  }
  if (cVar3 == '\0') {
    ar4[0x26] = 0x3f800000;
    ar4[0x27] = 0x41300000;
    ar4[0x28] = 0x40400000;
  }
  else {
    *(ulonglong *)(ar4 + 0x26) = CONCAT44(0x3f800000,in_fr1);
    *(undefined8 *)(ar4 + 0x27) = 0xa041300000;
    *(undefined8 *)(ar4 + 0x28) = 0x106c40400000;
  }
  uVar2 = DAT_8c13f718;
  ar4[0x41b] = DAT_8c13f714;
  ar4[0x41c] = uVar2;
  ar4[0x41d] = PTR_FUN_8c13f71c;
  uVar2 = DAT_8c13f724;
  ar4[0x41e] = DAT_8c13f720;
  ar4[0x41f] = uVar2;
  ar4[0x420] = PTR_FUN_8c13f728;
  uVar2 = DAT_8c13f730;
  ar4[0x421] = DAT_8c13f72c;
  ar4[0x422] = uVar2;
  ar4[0x423] = PTR_FUN_8c13f734;
  uVar2 = DAT_8c13f73c;
  ar4[0x42a] = DAT_8c13f738;
  ar4[0x42b] = uVar2;
  ar4[0x42c] = PTR_FUN_8c13f740;
  uVar2 = DAT_8c13f748;
  ar4[0x427] = DAT_8c13f744;
  ar4[0x428] = uVar2;
  ar4[0x429] = PTR_FUN_8c13f74c;
  ar4[0x2104] = 0;
  ar4[0x20fe] = (&PTR_s_62_JUNGLE_DAYTIME1_8c13f2fc)[ar4[0x2104]];
  ar4[0x2100] = 500;
  FUN_8c0d76e8(ar4 + 0x427,ar5_01,ar6_00,uVar1);
  return ar4;
}

__asm__(".globl _s_Outside_0e5e56\n.set _s_Outside_0e5e56, _s_Outside_0e5e56_def\n");
