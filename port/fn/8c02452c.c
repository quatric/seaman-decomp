#include "../decls.h"
undefined4 * FUN_8c02452c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint in_fr1;
  char cVar4;
  
  cVar4 = '\0';
  FUN_8c010120(ar4 + 8,FUN_8c024518,free_if_nonnull_wrap_0247e0,0x14,2);
  FUN_8c010120(ar4 + 0x12,FUN_8c024518,free_if_nonnull_wrap_0247e0,0x14,2);
  uVar3 = 4;
  pcVar2 = free_if_nonnull_wrap_016bfc;
  pcVar1 = FUN_8c015ab8;
  FUN_8c010120(ar4 + 0x1c,FUN_8c015ab8,free_if_nonnull_wrap_016bfc,4,1);
  FUN_8c015ab8(ar4 + 0x1d,pcVar1,pcVar2,uVar3);
  FUN_8c010120(ar4 + 0x1e,FUN_8c015224,free_if_nonnull_wrap_0153e4,8,2);
  uVar3 = 8;
  pcVar2 = free_if_nonnull_wrap_0153e4;
  pcVar1 = FUN_8c015224;
  FUN_8c010120(ar4 + 0x22,FUN_8c015224,free_if_nonnull_wrap_0153e4,8,2);
  FUN_8c015224(ar4 + 0x26,pcVar1,pcVar2,uVar3);
  FUN_8c015b94(ar4 + 0x2c,pcVar1,pcVar2,uVar3);
  Vec3_ctor_zero(ar4 + 0x36,pcVar1,pcVar2,uVar3);
  FUN_8c02447c(ar4 + 0x3e,pcVar1,pcVar2,uVar3);
  *ar4 = 0;
  ar4[2] = 0;
  ar4[1] = 0;
  ar4[3] = 0;
  ar4[5] = 0;
  ar4[4] = 0;
  ar4[6] = 0;
  ar4[7] = 0;
  ar4[0x28] = 0;
  ar4[0x2a] = 0;
  *(undefined2 *)(ar4 + 0x2b) = 0;
  *(undefined2 *)(ar4 + 0x29) = 0;
  ar4[0x2d] = 0;
  if (cVar4 == '\0') {
    ar4[0x2f] = 0x3f800000;
    ar4[0x2e] = 0x3f800000;
    ar4[0x30] = 0x3c23d70a;
  }
  else {
    *(ulonglong *)(ar4 + 0x2f) = CONCAT44(0x3f800000,in_fr1);
    *(ulonglong *)(ar4 + 0x2e) = CONCAT44(0x3f800000,in_fr1);
    in_fr1 = 0x3c23d70a;
    *(undefined8 *)(ar4 + 0x30) = 0xc43c23d70a;
  }
  *(undefined2 *)(ar4 + 0x31) = 0;
  if (cVar4 == '\0') {
    ar4[0x32] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 0x32) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar4 == '\0') {
    ar4[0x33] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 0x33) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar4 == '\0') {
    ar4[0x34] = 0x3f800000;
    ar4[0x35] = 0x42c80000;
  }
  else {
    *(ulonglong *)(ar4 + 0x34) = CONCAT44(0x3f800000,in_fr1);
    in_fr1 = 0x42c80000;
    *(undefined8 *)(ar4 + 0x35) = 0xe842c80000;
  }
  if (cVar4 == '\0') {
    ar4[0x3a] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x3a) = (ulonglong)in_fr1;
  }
  if (cVar4 == '\0') {
    ar4[0x3b] = 0x3f800000;
    ar4[0x3c] = 0x43160000;
    ar4[0x3d] = 0x43480000;
  }
  else {
    *(ulonglong *)(ar4 + 0x3b) = CONCAT44(0x3f800000,in_fr1);
    *(undefined8 *)(ar4 + 0x3c) = 0xf443160000;
    *(undefined8 *)(ar4 + 0x3d) = 0x4f222fe643480000;
  }
  return ar4;
}

__asm__(".globl _FUN_8c02452c\n.set _FUN_8c02452c, _FUN_8c02452c_def\n");
