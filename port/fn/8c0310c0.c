#include "../decls.h"
undefined4 FUN_8c0310c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c022d04(ar4 + 0x14,ar5,ar6,ar7);
  Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x24) = 0x41200000;
  }
  else {
    in_fr1 = 0x41200000;
    *(undefined8 *)(ar4 + 0x24) = 0x41f0000041200000;
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x28) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x30) = 0x3f800000;
    *(undefined4 *)(ar4 + 0x34) = 0x41f00000;
    *(undefined4 *)(ar4 + 0x38) = 0x42700000;
  }
  else {
    *(undefined8 *)(ar4 + 0x30) = CONCAT44(0x3f800000,in_fr1);
    *(undefined8 *)(ar4 + 0x34) = 0x4270000041f00000;
    in_fr1 = 0x42700000;
    *(undefined8 *)(ar4 + 0x38) = 0x12442700000;
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x3c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x3c) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(ar4 + 0x40) = 0;
  *(undefined4 *)(ar4 + 0x44) = 0;
  *(undefined4 *)(ar4 + 0x124) = 0;
  *(undefined4 *)(ar4 + 300) = 0;
  *(undefined4 *)(ar4 + 0x138) = 0;
  *(undefined4 *)(ar4 + 0x134) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x130) = 0x42480000;
  }
  else {
    in_fr1 = 0x42480000;
    *(undefined8 *)(ar4 + 0x130) = 0xa042480000;
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x48) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x48) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0xa0) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xa0) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0xa8) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xa8) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0xac) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xac) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(ar4 + 0x128) = 0;
  *(undefined4 *)(ar4 + 100) = 3;
  *(undefined4 *)(ar4 + 0x68) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x7c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x7c) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(ar4 + 0x1d4) = 0;
  *(undefined4 *)(ar4 + 0x1e8) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x1f8) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x1f8) = (ulonglong)in_fr1;
  }
  *(undefined1 *)(ar4 + 0x210) = 1;
  *(undefined4 *)(ar4 + 0x214) = 1;
  *(undefined4 *)(ar4 + 0x218) = 0;
  *(undefined4 *)(ar4 + 0x21c) = 0;
  *(undefined4 *)(ar4 + 0x178) = 0;
  *(undefined4 *)(ar4 + 0x1a8) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x1a4) = 0xffffffff;
  *(int *)(ar4 + 0x17c) = ar4 + 0x18c;
  *(int *)(ar4 + 0x180) = ar4 + 0x1a4;
  *(undefined4 *)(ar4 + 0x184) = 0;
  *(undefined4 *)(ar4 + 0x188) = 2;
  *(undefined4 *)(ar4 + 0x1ac) = 0;
  FUN_8c015ad4(ar4 + 0x1b0,&DAT_8c12f2cc,ar6,ar7,0xffffffff);
  *(undefined4 *)(ar4 + 0x1b4) = 0;
  *(undefined4 *)(ar4 + 0x1b8) = 0;
  *(undefined4 *)(ar4 + 0x1bc) = 0;
  *(undefined4 *)(ar4 + 0x1c0) = 0;
  *(undefined4 *)(ar4 + 0x1c4) = 0;
  *(undefined4 *)(ar4 + 0x1c8) = 0;
  *(undefined4 *)(ar4 + 0x1cc) = 0;
  *(undefined4 *)(ar4 + 0x1d0) = 0;
  return 0x1d0;
}

__asm__(".globl _FUN_8c0310c0\n.set _FUN_8c0310c0, _FUN_8c0310c0_def\n");
