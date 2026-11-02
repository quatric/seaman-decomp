#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c017630_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c017630";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 in_fr1 = 0;
  undefined4 uVar2;
  undefined8 uVar1;
  char cVar3;
  
  cVar3 = '\0';
  *(undefined4 *)(unsigned)(ar4 + 0x30) = *ar5;
  *(undefined4 *)(unsigned)(ar4 + 0x34) = ar5[1];
  *(undefined4 *)(unsigned)(ar4 + 0x38) = ar5[2];
  *(undefined4 *)(unsigned)(ar4 + 0x3c) = ar5[4];
  *(undefined4 *)(unsigned)(ar4 + 0x40) = ar5[5];
  *(undefined4 *)(unsigned)(ar4 + 0x44) = ar5[6];
  *(undefined4 *)(unsigned)(ar4 + 0x48) = ar5[8];
  *(undefined4 *)(unsigned)(ar4 + 0x4c) = ar5[9];
  *(undefined4 *)(unsigned)(ar4 + 0x50) = ar5[10];
  *(undefined4 *)(unsigned)(ar4 + 0x54) = ar5[0xc];
  *(undefined4 *)(unsigned)(ar4 + 0x58) = ar5[0xd];
  *(undefined4 *)(unsigned)(ar4 + 0x5c) = ar5[0xe];
  *(undefined4 *)(unsigned)(ar4 + 0x60) = ar5[0x10];
  *(undefined4 *)(unsigned)(ar4 + 100) = ar5[0x11];
  *(undefined4 *)(unsigned)(ar4 + 0x68) = ar5[0x12];
  *(undefined4 *)(unsigned)(ar4 + 0x6c) = ar5[0x14];
  *(undefined4 *)(unsigned)(ar4 + 0x70) = ar5[0x15];
  *(undefined4 *)(unsigned)(ar4 + 0x74) = ar5[0x16];
  *(undefined4 *)(unsigned)(ar4 + 0x78) = ar5[0x18];
  *(undefined4 *)(unsigned)(ar4 + 0x7c) = ar5[0x19];
  *(undefined4 *)(unsigned)(ar4 + 0x80) = ar5[0x1a];
  *(undefined4 *)(unsigned)(ar4 + 0x84) = ar5[0x1c];
  *(undefined4 *)(unsigned)(ar4 + 0x88) = ar5[0x1d];
  uVar2 = ar5[0x1e];
  *(undefined4 *)(unsigned)(ar4 + 0x8c) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c022fc0(ar5,ar5 + 0xc,ar6,ar7));
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x20) = uVar2;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x20) = CONCAT44(uVar2,in_fr1);
  }
  uVar1 = CONCAT44(uVar2,in_fr1);
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c022fc0(ar5,ar5 + 0x10,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)uVar1;
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x24) = uVar2;
    (*(undefined4 *)(fr0_ - 0x14)) = uVar2;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x24) = uVar1;
  }
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c022fc0(ar5,ar5 + 4,ar6,ar7));
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x18)) = uVar2;
  if (cVar3 != '\0') {
    (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)uVar1;
    (*(undefined4 *)(fr0_ - 0x14)) = uVar2;
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x28) = (*(undefined4 *)(fr0_ - 0x18));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x28) = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
  }
  return 0;
}

__asm__(".globl _FUN_8c017630\n.set _FUN_8c017630, _FUN_8c017630_def\n");
