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
undefined4 FUN_8c12182e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c12182e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined8 in_dr4 = 0;
  float fVar2;
  
  fVar2 = F32HI(in_dr4);
  if ((float)in_dr4 <= fVar2) {
    iVar1 = *(int *)(unsigned)(ar4 + 0x30) + 1;
    *(int *)(unsigned)(ar4 + 0x30) = iVar1;
    if (iVar1 == 6) {
      *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
    }
  }
  else {
    *(int *)(unsigned)(ar4 + 0x2c) = *(int *)(unsigned)(ar4 + 0x2c) + 1;
    *(undefined4 *)(unsigned)(ar4 + 0x30) = 0;
  }
  if ((float)in_dr4 + *(float *)(unsigned)(ar4 + 0x60) <= fVar2) {
    *(int *)(unsigned)(ar4 + 0x34) = *(int *)(unsigned)(ar4 + 0x34) + 1;
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x34) = 0;
  }
  if (*(uint *)(unsigned)(ar4 + 0x50) < *(uint *)(unsigned)(ar4 + 0x34)) {
    *(undefined1 *)(unsigned)(ar4 + 0x44) = 1;
  }
  if ((*(uint *)(unsigned)(ar4 + 0x5c) < *(uint *)(unsigned)(ar4 + 0x2c)) && (*(char *)(unsigned)(ar4 + 0x44) != '\0')) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c12182e\n.set _FUN_8c12182e, _FUN_8c12182e_def\n");
