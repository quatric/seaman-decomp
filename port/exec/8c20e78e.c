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
int FUN_8c20e78e_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20e78e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *ar4;
  iVar4 = ar4[1];
  iVar2 = ar4[2];
  if ((((*(int *)(unsigned)(iVar3 + 8) == 0) &&
       (((*(int *)(unsigned)(iVar3 + 0x20) == 2 || (*(int *)(unsigned)(iVar3 + 0x20) == 3)) &&
        (*(int *)(unsigned)(iVar3 + 0x54) == 1)))) &&
      (((*(int *)(unsigned)(iVar3 + 0x2c) == 10 && (*(int *)(unsigned)(iVar3 + 0x30) == 0xb)) &&
       (*(int *)(unsigned)(iVar3 + 0x34) == 0)))) && (*(int *)(unsigned)(iVar3 + 0x38) == 0)) {
    *(undefined4 *)(unsigned)(iVar4 + 8) = 2;
    *(undefined4 *)(unsigned)(iVar4 + 0x54) = 3;
    *(undefined4 *)(unsigned)(iVar4 + 0x2c) = 10;
    *(undefined4 *)(unsigned)(iVar4 + 0x30) = 10;
    *(undefined4 *)(unsigned)(iVar4 + 0x34) = 0;
    *(undefined4 *)(unsigned)(iVar4 + 0x38) = 0;
  }
  iVar1 = *(int *)(unsigned)(iVar3 + 8);
  if ((((iVar1 == 2) &&
       ((*(int *)(unsigned)(iVar3 + 0x20) == 2 || (iVar1 = *(int *)(unsigned)(iVar3 + 0x20), iVar1 == 3)))) &&
      (iVar1 = *(int *)(unsigned)(iVar3 + 0x54), iVar1 == 1)) &&
     ((((iVar1 = *(int *)(unsigned)(iVar3 + 0x2c), iVar1 == 10 &&
        (iVar1 = *(int *)(unsigned)(iVar3 + 0x30), iVar1 == 0xb)) && (*(int *)(unsigned)(iVar3 + 0x34) == 0)) &&
      (iVar1 = *(int *)(unsigned)(iVar3 + 0x38), iVar1 == 1)))) {
    *(undefined4 *)(unsigned)(iVar4 + 8) = 2;
    iVar1 = 0x54;
    *(undefined4 *)(unsigned)(iVar4 + 0x54) = 3;
    *(undefined4 *)(unsigned)(iVar4 + 0x2c) = 10;
    *(undefined4 *)(unsigned)(iVar4 + 0x30) = 10;
    *(undefined4 *)(unsigned)(iVar4 + 0x34) = 0;
    *(undefined4 *)(unsigned)(iVar4 + 0x38) = 1;
    *(undefined4 *)(unsigned)(iVar2 + 8) = 2;
    *(undefined4 *)(unsigned)(iVar2 + 0x54) = 3;
    *(undefined4 *)(unsigned)(iVar2 + 0x2c) = 8;
    *(undefined4 *)(unsigned)(iVar2 + 0x30) = 6;
    *(undefined4 *)(unsigned)(iVar2 + 0x34) = 1;
    *(undefined4 *)(unsigned)(iVar2 + 0x38) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c20e78e\n.set _FUN_8c20e78e, _FUN_8c20e78e_def\n");
