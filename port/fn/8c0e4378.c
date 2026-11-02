#include "../decls.h"
undefined4 * s_SoilTank_0e437e_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_fr1;
  char cVar6;
  
  cVar6 = '\0';
  FUN_8c0d9c80(ar4,s_SoilTank_8c13ff6e,1,0);
  *ar4 = &DAT_8c12b758;
  uVar3 = 0x24;
  pcVar2 = FUN_8c0e468c;
  pcVar1 = FUN_8c0d611c;
  FUN_8c010120(ar4 + 0x41c,FUN_8c0d611c,FUN_8c0e468c,0x24,3);
  FUN_8c015224(ar4 + 0x437,pcVar1,pcVar2,uVar3);
  FUN_8c015ab8(ar4 + 0x439,pcVar1,pcVar2,uVar3);
  Vec3_ctor_zero(ar4 + 0x43b,pcVar1,pcVar2,uVar3);
  Vec3_ctor_zero(ar4 + 0x43f,pcVar1,pcVar2,uVar3);
  uVar3 = 0xc;
  pcVar2 = free_if_nonnull_wrap_0d6ef8;
  pcVar1 = FUN_8c0d6ee0;
  FUN_8c010120(ar4 + 0x443,FUN_8c0d6ee0,free_if_nonnull_wrap_0d6ef8,0xc,100);
  FUN_8c0d5e9c(ar4 + 0x56f,pcVar1,pcVar2,uVar3);
  uVar3 = 0x18;
  pcVar2 = free_if_nonnull_wrap_0cffc8;
  pcVar1 = FUN_8c02145c;
  FUN_8c010120(ar4 + 0x578,FUN_8c02145c,free_if_nonnull_wrap_0cffc8,0x18,1);
  FUN_8c0e5c4c(ar4,pcVar1,pcVar2,uVar3);
  if (cVar6 == '\0') {
    ar4[0x2e9] = 0x41f00000;
    ar4[0x2af] = 0x45176000;
    ar4[0x2b0] = 0x44898000;
    ar4[0x2b1] = 0x44c80000;
  }
  else {
    *(undefined8 *)(ar4 + 0x2e9) = 0xabc41f00000;
    *(undefined8 *)(ar4 + 0x2af) = 0xac045176000;
    *(undefined8 *)(ar4 + 0x2b0) = 0xac444898000;
    in_fr1 = 0x44c80000;
    *(undefined8 *)(ar4 + 0x2b1) = 0x42c8000044c80000;
  }
  for (iVar4 = 0; iVar4 < 10; iVar4 = iVar4 + 1) {
    for (iVar5 = 0; iVar5 < 10; iVar5 = iVar5 + 1) {
      if (cVar6 == '\0') {
        ar4[iVar4 * 0x1e + iVar5 * 3 + 0x443] = 0x42c80000;
      }
      else {
        in_fr1 = 0x42c80000;
        *(undefined8 *)(ar4 + iVar4 * 0x1e + iVar5 * 3 + 0x443) = 0x111042c80000;
      }
    }
    ar4[iVar4 * 0x1e + iVar5 * 3 + 0x444] = 0;
  }
  if (cVar6 == '\0') {
    ar4[0x20] = 0x430c0000;
    ar4[0x21] = 0x42c80000;
    ar4[0x23] = 0x43a00000;
    ar4[0x24] = 0x42e00000;
  }
  else {
    *(undefined8 *)(ar4 + 0x20) = 0x84430c0000;
    *(undefined8 *)(ar4 + 0x21) = 0x111042c80000;
    *(undefined8 *)(ar4 + 0x23) = 0x9043a00000;
    in_fr1 = 0x42e00000;
    *(undefined8 *)(ar4 + 0x24) = 0x10e842e00000;
  }
  ar4[0x43a] = 0;
  if (cVar6 == '\0') {
    ar4[0x25] = 0x41000000;
  }
  else {
    in_fr1 = 0x41000000;
    *(undefined8 *)(ar4 + 0x25) = 0x9841000000;
  }
  if (cVar6 == '\0') {
    ar4[0x26] = 0x3f800000;
    ar4[0x27] = 0x41300000;
    ar4[0x28] = 0x40400000;
  }
  else {
    *(ulonglong *)(ar4 + 0x26) = CONCAT44(0x3f800000,in_fr1);
    *(undefined8 *)(ar4 + 0x27) = 0xa041300000;
    *(undefined8 *)(ar4 + 0x28) = 0x4f222fe640400000;
  }
  return ar4;
}

__asm__(".globl _s_SoilTank_0e437e\n.set _s_SoilTank_0e437e, _s_SoilTank_0e437e_def\n");
