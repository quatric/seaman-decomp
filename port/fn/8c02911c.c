#include "../decls.h"
undefined4 FUN_8c02911c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  undefined4 in_fr1;
  ulonglong uVar2;
  char cVar3;
  
  cVar3 = '\0';
  *(undefined4 *)(ar4 + 0x330) = 0;
  *(undefined4 *)(ar4 + 0x308) = 0;
  *(undefined4 *)(ar4 + 0x30c) = 0;
  *(undefined4 *)(ar4 + 0x328) = 0;
  *(undefined4 *)(ar4 + 0x32c) = 0;
  *(undefined4 *)(ar4 + 0x424) = 1;
  *(undefined4 *)(ar4 + 0x428) = 0;
  *(undefined4 *)(ar4 + 0x364) = 0;
  *(undefined4 *)(ar4 + 0x368) = 0;
  *(undefined4 *)(ar4 + 0x36c) = 0x3f800000;
  *(undefined4 *)(ar4 + 0x390) = 0;
  *(undefined4 *)(ar4 + 0x394) = 0;
  *(undefined4 *)(ar4 + 0x398) = 0x3f800000;
  uVar2 = CONCAT44(0x3e4ccccd,in_fr1);
  *(undefined4 *)(ar4 + 0x170) = 0x3e4ccccd;
  FUN_8c0293d4(ar4 + 0x174,ar5,ar6,ar7);
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 1;
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x334) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x334) = uVar2 & 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x430) = 0;
  *(undefined4 *)(ar4 + 0x42c) = 0;
  *(undefined4 *)(ar4 + 0x434) = 0;
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x408) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x408) = uVar2 & 0xffffffff;
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x40c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x40c) = CONCAT44(0x3f800000,(int)uVar2);
  }
  *(undefined4 *)(ar4 + 0x410) = 0;
  *(undefined2 *)(ar4 + 0x414) = 0;
  *(undefined4 *)(ar4 + 0x418) = 0;
  *(undefined4 *)(ar4 + 0x420) = 0;
  *(undefined2 *)(ar4 + 0x41c) = 0;
  *(undefined4 *)(ar4 + 0x45c) = 0;
  *(undefined4 *)(ar4 + 0x470) = 0;
  *(undefined4 *)(ar4 + 0x458) = 0;
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x438) = 0;
    *(undefined4 *)(ar4 + 0x43c) = 0;
    *(undefined4 *)(ar4 + 0x440) = 0;
    *(undefined4 *)(ar4 + 0x444) = 0;
    *(undefined4 *)(ar4 + 0x448) = 0;
    *(undefined4 *)(ar4 + 0x44c) = 0;
    *(undefined4 *)(ar4 + 0x450) = 0;
    uVar2 = uVar2 & 0xffffffff;
    *(undefined4 *)(ar4 + 0x454) = 0;
  }
  else {
    *(undefined8 *)(ar4 + 0x438) = 0;
    *(undefined8 *)(ar4 + 0x43c) = 0;
    *(undefined8 *)(ar4 + 0x440) = 0;
    *(undefined8 *)(ar4 + 0x444) = 0x3f80000000000000;
    *(undefined8 *)(ar4 + 0x448) = 0;
    *(undefined8 *)(ar4 + 0x44c) = 0;
    *(undefined8 *)(ar4 + 0x450) = 0;
    uVar2 = 0;
    *(undefined8 *)(ar4 + 0x454) = 0x3f80000000000000;
  }
  *(undefined2 *)(ar4 + 0x464) = 0;
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x468) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x468) = uVar2;
  }
  *(undefined1 *)(ar4 + 0x46c) = 1;
  *(undefined4 *)(ar4 + 0x474) = 0;
  *(undefined4 *)(ar4 + 0x47c) = 0;
  *(undefined4 *)(ar4 + 0x478) = 0;
  *(undefined4 *)(ar4 + 0x48c) = 0;
  ar4_00 = rand(ar4,ar5,ar6,ar7);
  iVar1 = libgcc_divide_helper_01031c(ar4_00,100,ar6,ar7);
  if (iVar1 < 0x14) {
    *(undefined4 *)(ar4 + 0x460) = 0;
  }
  else if (iVar1 < 0x5a) {
    *(undefined4 *)(ar4 + 0x460) = 1;
  }
  else {
    *(undefined4 *)(ar4 + 0x460) = 2;
  }
  return 1;
}

__asm__(".globl _FUN_8c02911c\n.set _FUN_8c02911c, _FUN_8c02911c_def\n");
