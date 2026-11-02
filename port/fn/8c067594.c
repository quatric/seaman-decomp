#include "../decls.h"
undefined4 s_herb3_pvm_067598_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fr1;
  ulonglong uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = rand(ar4,ar5,ar6,ar7);
  uVar1 = libgcc_divide_helper_01031c(uVar1,4,ar6,ar7);
  *(undefined4 *)(ar4 + 0x210) = uVar1;
  *(undefined4 *)(ar4 + 0x214) = 0x1ff;
  *(undefined4 *)(ar4 + 0x21c) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x218) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x220) = 0;
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x244) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x244) = (ulonglong)in_fr1;
  }
  for (iVar2 = 0; iVar2 < 9; iVar2 = iVar2 + 1) {
    *(undefined1 *)(ar4 + iVar2 + 0x248) = 0;
  }
  *(undefined4 *)(ar4 + 0x230) = 0;
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x234) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x234) = (ulonglong)in_fr1;
  }
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x238) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x238) = (ulonglong)in_fr1;
  }
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x23c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x23c) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(ar4 + 0x290) = 0;
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x254) = DAT_8c136f2c;
    *(undefined4 *)(ar4 + 600) = DAT_8c136f30;
    *(undefined4 *)(ar4 + 0x25c) = DAT_8c136f34;
    uVar3 = CONCAT44(DAT_8c136f38,in_fr1);
    *(undefined4 *)(ar4 + 0x260) = DAT_8c136f38;
  }
  else {
    *(undefined8 *)(ar4 + 0x254) = CONCAT44(DAT_8c136f30,DAT_8c136f2c);
    *(ulonglong *)(ar4 + 600) = CONCAT44(DAT_8c136f34,DAT_8c136f30);
    *(ulonglong *)(ar4 + 0x25c) = CONCAT44(DAT_8c136f38,DAT_8c136f34);
    uVar3 = CONCAT44((undefined4)DAT_8c136f3c,DAT_8c136f38);
    *(ulonglong *)(ar4 + 0x260) = uVar3;
  }
  iVar2 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6,ar7);
  *(int *)(ar4 + 0x228) = iVar2 * 3 + 2;
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x22c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x22c) = uVar3 & 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x224) = 0x8c2804f0;
  iVar2 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6,ar7);
  _DAT_8c280620 = (&PTR_s_herb_3Leaves_home_njd_8c136f54)[iVar2];
  iVar2 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6,ar7);
  _DAT_8c280628 = (&PTR_s_HERB_1_8c136f68)[iVar2];
  _DAT_8c280618 = &PTR_s_herb_3Leaves_die_njm_8c136f84;
  _DAT_8c28061c = &PTR_s_herb_3Leaves_die_njs_8c136fb8;
  _DAT_8c280634 = PTR_s_herb3_pvm_8c136f78;
  _DAT_8c280648 = PTR_s_herb5_pvm_8c136f7c;
  _DAT_8c280638 = 0x12;
  _DAT_8c28064c = 0x16;
  _DAT_8c280644 = 0x8c280738;
  _DAT_8c280658 = 0x8c280810;
  uVar1 = FUN_8c0f532c(ar4,*(undefined4 *)(*(int *)(ar4 + 0x224) + 0xb4),ar4 + 0x170,ar7);
  return uVar1;
}

__asm__(".globl _s_herb3_pvm_067598\n.set _s_herb3_pvm_067598, _s_herb3_pvm_067598_def\n");
