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
undefined4 FUN_8c12394c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c12394c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float fVar2;
  undefined8 uVar3;
  char cVar4;
  
  if (*(char *)(unsigned)(ar4 + 0x4ac) != (char)ar5) {
    *(char *)(unsigned)(ar4 + 0x4ac) = (char)ar5;
    if ((char)ar5 == '\0') {
      fVar2 = *(float *)(unsigned)(ar4 + 0x2c) + *(float *)(unsigned)(ar4 + 0x38) + *(float *)(unsigned)(ar4 + 0x3c);
    }
    else {
      *(undefined2 *)(unsigned)(ar4 + 0x4b8) = 0;
      ar7_00 = 0;
      ar6_00 = 0;
      *(undefined1 *)(unsigned)(ar4 + 0x4bc) = 0;
      ar5_00 = 10;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4,10,0,0));
      if ((uVar1 & 0xff) != 0) {
        return 1;
      }
      cVar4 = '\0';
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12356c(ar4,ar5_00,ar6_00,ar7_00));
      if (cVar4 == '\0') {
        uVar3 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x38),*(undefined4 *)(unsigned)(ar4 + 0x3c));
      }
      else {
        uVar3 = *(undefined8 *)(unsigned)(ar4 + 0x38);
      }
      fVar2 = *(float *)(unsigned)(ar4 + 0x2c) - (F32HI(uVar3) + (float)uVar3);
    }
    *(float *)(unsigned)(ar4 + 0x2c) = fVar2;
  }
  return 0;
}

__asm__(".globl _FUN_8c12394c\n.set _FUN_8c12394c, _FUN_8c12394c_def\n");
