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
int FUN_8c1f81dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f81dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint *a5;
  
  a5 = ((uint *)(fr0_ - 0x8));
  (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c1f826c(ar4,((uint *)(fr0_ - 0x8)),ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 8)), aica_reg_1f85a0(ar4,a5,ar6,ar7));
  if (((iVar1 == 0) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 8)), aica_reg_1f85c8(((uint *)(fr0_ - 0x8))[0] & 0xffff,a5,ar6,ar7)), iVar1 == 0)) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 8)), aica_reg_1f85ee(((uint *)(fr0_ - 0x8))[0] >> 0x10,a5,ar6,ar7)), iVar1 == 0)) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c1f84d8(0,a5,ar6,ar7));
    if ((uVar2 == ((uint *)(fr0_ - 0x8))[0]) || (uVar2 == ((uint *)(fr0_ - 0x8))[0] + 1)) {
      *(undefined4 *)(unsigned)0x8c474a10 = uVar2;
      iVar1 = 0;
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f81dc\n.set _FUN_8c1f81dc, _FUN_8c1f81dc_def\n");
