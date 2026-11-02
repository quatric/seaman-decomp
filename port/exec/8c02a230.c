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
float * FUN_8c02a230_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02a230";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float *pfVar1;
  float fVar2;
  undefined8 in_xd14 = 0;
  undefined4 in_PR = 0;
  char cVar3;
  
  cVar3 = '\0';
  fVar2 = *(float *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
  *(float *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14) = fVar2 * *(float *)(unsigned)(ar4 + 0x468);
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256fec(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02a29c(ar4,*(undefined4 *)(unsigned)(ar5 + 4),ar6,ar7));
  pfVar1 = (float *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
  if (cVar3 == '\0') {
    *pfVar1 = fVar2;
  }
  else {
    *(undefined8 *)(unsigned)pfVar1 = in_xd14;
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c02a230\n.set _FUN_8c02a230, _FUN_8c02a230_def\n");
