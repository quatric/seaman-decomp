#include "../decls.h"
int FUN_8c0d2fd8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *pcVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 ar7_00;
  uint in_fr1;
  ulonglong uVar5;
  char cVar6;
  undefined4 in_stack_fffffff0;
  
  cVar6 = '\0';
  FUN_8c015224(ar4 + 8,ar5,ar6,ar7);
  FUN_8c015ab8(ar4 + 0x10,ar5,ar6,ar7);
  FUN_8c015ab8(ar4 + 0x1c,ar5,ar6,ar7);
  uVar4 = 4;
  pcVar3 = free_if_nonnull_wrap_016bfc;
  pcVar1 = FUN_8c015ab8;
  FUN_8c010120(ar4 + 0x20,FUN_8c015ab8,free_if_nonnull_wrap_016bfc,4,3);
  FUN_8c0d33bc(ar4 + 0x34,pcVar1,pcVar3,uVar4);
  FUN_8c015224(ar4 + 0x108,pcVar1,pcVar3,uVar4);
  FUN_8c016410(ar4 + 0x110,pcVar1,pcVar3,uVar4);
  FUN_8c015ab8(ar4 + 0x154,pcVar1,pcVar3,uVar4);
  FUN_8c010120(ar4 + 0x470,FUN_8c0d2050,FUN_8c0d336c,0x44,5);
  FUN_8c010120(ar4 + 0x5fc,FUN_8c02145c,free_if_nonnull_wrap_0cffc8,0x18,2);
  uVar4 = 0x88;
  pcVar3 = FUN_8c0d3304;
  pcVar1 = FUN_8c0d25b4;
  FUN_8c010120(ar4 + 0x62c,FUN_8c0d25b4,FUN_8c0d3304,0x88,0x226);
  FUN_8c0153b8(ar4 + 0x12a5c,pcVar1,pcVar3,uVar4);
  *(undefined4 *)(ar4 + 0x2c) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x18) = 0x3ec8c155;
  }
  else {
    in_fr1 = 0x3ec8c155;
    *(undefined8 *)(ar4 + 0x18) = 0x8c13e7803ec8c155;
  }
  FUN_8c015ad4(ar4 + 0x20,&DAT_8c13e780,pcVar3,uVar4,in_stack_fffffff0);
  FUN_8c015ad4(ar4 + 0x24,&DAT_8c13ea48,pcVar3,uVar4,in_stack_fffffff0);
  FUN_8c015ad4(ar4 + 0x28,&DAT_8c13ed20,pcVar3,uVar4,in_stack_fffffff0);
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x430) = 0xc3960000;
  }
  else {
    in_fr1 = 0xc3960000;
    *(undefined8 *)(ar4 + 0x430) = 0x434c3960000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x434) = 0;
    *(undefined4 *)(ar4 + 0x438) = 0xc3960000;
    *(undefined4 *)(ar4 + 0x43c) = 0xc3960000;
  }
  else {
    *(ulonglong *)(ar4 + 0x434) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0x438) = 0x434c3960000;
    in_fr1 = 0xc3960000;
    *(undefined8 *)(ar4 + 0x43c) = 0x434c3960000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x440) = 0;
    *(undefined4 *)(ar4 + 0x444) = 0x43960000;
    *(undefined4 *)(ar4 + 0x448) = 0x43960000;
  }
  else {
    *(ulonglong *)(ar4 + 0x440) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0x444) = 0x44843960000;
    in_fr1 = 0x43960000;
    *(undefined8 *)(ar4 + 0x448) = 0x44843960000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x44c) = 0;
    *(undefined4 *)(ar4 + 0x450) = 0x43960000;
    uVar5 = CONCAT44(0x43960000,in_fr1);
    *(undefined4 *)(ar4 + 0x454) = 0x43960000;
  }
  else {
    *(ulonglong *)(ar4 + 0x44c) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0x450) = 0x44843960000;
    uVar5 = 0x44843960000;
    *(undefined8 *)(ar4 + 0x454) = 0x44843960000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x458) = 0;
    *(undefined4 *)(ar4 + 0x45c) = 0xc3960000;
  }
  else {
    *(ulonglong *)(ar4 + 0x458) = uVar5 & 0xffffffff;
    *(undefined8 *)(ar4 + 0x45c) = 0x434c3960000;
  }
  *(undefined2 *)(ar4 + 0x460) = 0;
  *(undefined2 *)(ar4 + 0x462) = 0xff;
  *(undefined2 *)(ar4 + 0x464) = 0;
  *(undefined2 *)(ar4 + 0x466) = 0;
  *(undefined2 *)(ar4 + 0x468) = 0xff;
  *(undefined2 *)(ar4 + 0x46a) = 0;
  *(undefined2 *)(ar4 + 0x46c) = 0xff;
  *(undefined2 *)(ar4 + 0x46e) = 0xff;
  ar7_00 = 4;
  FUN_8c016464(ar4 + 0x110,ar4 + 0x430,0,4);
  uVar4 = 4;
  iVar2 = ar4 + 0x460;
  FUN_8c0164c8(ar4 + 0x110,iVar2,4,ar7_00);
  FUN_8c014790(ar4 + 0x110,iVar2,uVar4,ar7_00);
  FUN_8c014764(ar4 + 0x110,iVar2,uVar4,ar7_00);
  FUN_8c014a64(ar4 + 0x110,iVar2,uVar4,ar7_00);
  FUN_8c0d56dc(ar4,iVar2,uVar4,ar7_00);
  for (iVar2 = 0; iVar2 < 0x226; iVar2 = iVar2 + 1) {
    FUN_8c0d261c(iVar2 * 0x88 + ar4 + 0x62c,ar4 + 0x12a5c,&DAT_8c13f344,ar7_00);
  }
  return ar4;
}

__asm__(".globl _FUN_8c0d2fd8\n.set _FUN_8c0d2fd8, _FUN_8c0d2fd8_def\n");
