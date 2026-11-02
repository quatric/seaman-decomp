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
undefined4 FUN_8c08a948_def(int ar4,float *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08a948";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float *ar5_00;
  int ar6_00;
  float fVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0f5398(ar4,ar5,ar6,ar7));
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 36)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x20)),ar5,ar6_00,ar7));
  if (ar6 == 0) {
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c08a9b8(ar4 + 0x5c,ar5_00,ar6_00,ar7));
    if (cVar5 == '\0') {
      fVar2 = *ar5;
      pcVar3 = (code *)0x447a0000;
    }
    else {
      fVar2 = 1000.0;
      pcVar3 = ((void *)0x8c022cb0);
    }
    if (cVar4 == '\0' && (float)(uint)pcVar3 < fVar2) {
      if (cVar5 == '\0') {
        *ar5 = 1000.0;
      }
      else {
        ar5[0] = 1000.0;
        ar5[1] = -1.0028283e-31;
      }
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c08a948\n.set _FUN_8c08a948, _FUN_8c08a948_def\n");
