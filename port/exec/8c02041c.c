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
uint FUN_8c02041c_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02041c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(unsigned)(ar5 + 8) = 0;
  ar4[5] = 0;
  iVar2 = ar5;
  for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
    iVar2 = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26201c(ar5 + 0x10,0,ar6,ar7));
    *ar4 = iVar1;
    if (*ar4 != 0) break;
  }
  iVar3 = *ar4;
  if (iVar3 != 0) {
    ar4[5] = 1;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_E9040829_adxf_is_NULL_ADXF_G_262646(*ar4,iVar2,ar6,ar7));
    ar4[6] = iVar2;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02049c(ar4,ar5,ar6,ar7));
  }
  return (uint)(iVar3 != 0);
}

__asm__(".globl _FUN_8c02041c\n.set _FUN_8c02041c, _FUN_8c02041c_def\n");
