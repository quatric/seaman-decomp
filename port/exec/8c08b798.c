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
undefined8 * FUN_8c08b798_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08b798";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined8 *puVar2;
  ulonglong in_dr0 = 0;
  char cVar3;
  
  cVar3 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  if ((short)uVar1 == 2) {
    *(undefined4 *)(unsigned)(ar4 + 0x478) = 0;
  }
  else if (*(int *)(unsigned)(ar4 + 0x460) == 2) {
    *(undefined4 *)(unsigned)(ar4 + 0x478) = 1;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02702c(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  if ((short)uVar1 < 2) {
    puVar2 = ((undefined1 *)(unsigned)0x8c08b828);
    if (cVar3 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x334) = 0x40800000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x334) = 0x2fd62fe640800000;
    }
  }
  else {
    puVar2 = (undefined8 *)(unsigned)0x334;
    if (cVar3 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x334) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x334) = in_dr0 & 0xffffffff;
    }
  }
  return puVar2;
}

__asm__(".globl _FUN_8c08b798\n.set _FUN_8c08b798, _FUN_8c08b798_def\n");
