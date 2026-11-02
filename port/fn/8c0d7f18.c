#include "../decls.h"
undefined4 * s_66_JUNGLE_RAIN_5_0d7f1a_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *ar5_00;
  code *ar6_00;
  undefined4 uVar1;
  uint in_fr1;
  ulonglong uVar2;
  char cVar3;
  
  cVar3 = '\0';
  Vec3_ctor_zero(ar4 + 2,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 6,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 10,ar5,ar6,ar7);
  FUN_8c102800(ar4 + 0xd,ar5,ar6,ar7);
  FUN_8c0d7688(ar4 + 0x14,ar5,ar6,ar7);
  FUN_8c0d7af8(ar4 + 0x1e,ar4 + 0x2f,500,ar7);
  FUN_8c010120(ar4 + 0x2f,FUN_8c0d77d8,FUN_8c0d8094,0x38,500);
  uVar1 = 0x18;
  ar6_00 = free_if_nonnull_wrap_0cffc8;
  ar5_00 = FUN_8c02145c;
  FUN_8c010120(ar4 + 0x1b88,FUN_8c02145c,free_if_nonnull_wrap_0cffc8,0x18,2);
  FUN_8c0153b8(ar4 + 0x1b94,ar5_00,ar6_00,uVar1);
  FUN_8c0d92b0(ar4,ar5_00,ar6_00,uVar1);
  if (cVar3 == '\0') {
    ar4[6] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 6) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar3 == '\0') {
    ar4[7] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 7) = (ulonglong)in_fr1;
  }
  uVar2 = (ulonglong)in_fr1;
  if (cVar3 == '\0') {
    ar4[8] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 8) = uVar2;
  }
  Vec3_assign(ar4 + 2,ar4 + 6,ar6_00,uVar1);
  if (cVar3 == '\0') {
    uVar1 = (undefined4)uVar2;
    ar4[0xb] = 0x41700000;
  }
  else {
    uVar1 = 0x41700000;
    *(undefined8 *)(ar4 + 0xb) = 0x3e4ccccd41700000;
  }
  if (cVar3 == '\0') {
    ar4[0xe] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 0xe) = CONCAT44(0x3f800000,uVar1);
  }
  if (cVar3 == '\0') {
    ar4[0xf] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 0xf) = CONCAT44(0x3f800000,uVar1);
  }
  if (cVar3 == '\0') {
    ar4[0x10] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 0x10) = CONCAT44(0x3f800000,uVar1);
  }
  if (cVar3 == '\0') {
    ar4[0x11] = 0x3f800000;
    ar4[0x12] = 0x3e4ccccd;
  }
  else {
    *(ulonglong *)(ar4 + 0x11) = CONCAT44(0x3f800000,uVar1);
    *(undefined8 *)(ar4 + 0x12) = 0x8c13f3083e4ccccd;
  }
  *ar4 = 0;
  ar4[0x1b88] = PTR_s_66_JUNGLE_RAIN_5_8c13f308;
  ar4[0x1b8e] = PTR_s_68_JUNGLE_THUNDER_8c13f30c;
  ar4[0x1b91] = 0;
  if (cVar3 == '\0') {
    ar4[0x1b87] = 0x41000000;
  }
  else {
    *(undefined8 *)(ar4 + 0x1b87) = 0x4f222fe641000000;
  }
  return ar4;
}

__asm__(".globl _s_66_JUNGLE_RAIN_5_0d7f1a\n.set _s_66_JUNGLE_RAIN_5_0d7f1a, _s_66_JUNGLE_RAIN_5_0d7f1a_def\n");
