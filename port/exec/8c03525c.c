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
undefined4 FUN_8c03525c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c03525c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  float *ar6_00;
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 60)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 60)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar5 + 4),ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  ar6_00 = &(*(float *)(fr0_ - 0x38));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c256294(0,((undefined1 *)(fr0_ - 0x10)),ar6_00,ar7));
  if (cVar4 == '\0') {
    fVar2 = 150.0;
    fVar1 = (*(float *)(fr0_ - 0x38));
  }
  else {
    fVar1 = 150.0;
    fVar2 = 500.0;
  }
  if (cVar3 == '\0' && fVar2 < fVar1) {
    if (cVar4 == '\0') {
      fVar1 = 500.0;
    }
    else {
      (*(float *)(fr0_ - 0x38)) = 500.0;
      fVar1 = 80.0;
    }
    if (cVar3 == '\0' && (*(float *)(fr0_ - 0x38)) < fVar1) {
      if (cVar4 == '\0') {
        fVar2 = 80.0;
        fVar1 = (*(float *)(fr0_ - 0x34));
      }
      else {
        fVar1 = 80.0;
        fVar2 = 400.0;
      }
      if (cVar3 == '\0' && fVar2 < fVar1) {
        if (cVar4 == '\0') {
          fVar1 = 400.0;
        }
        else {
          (*(float *)(fr0_ - 0x34)) = 400.0;
          fVar1 = -9.917997e+27;
        }
        if (cVar3 == '\0' && (*(float *)(fr0_ - 0x34)) < fVar1) {
          (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7));
          return 1;
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7));
  return 0;
}

__asm__(".globl _FUN_8c03525c\n.set _FUN_8c03525c, _FUN_8c03525c_def\n");
