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
undefined4
FUN_8c0208ec_def(undefined4 ar4,int ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0208ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02051c(ar4,ar5,*ar6,ar7));
  uVar2 = 0;
  if (iVar1 != 0) {
    if (((ar5 == 0xc) || (ar5 == 0xd)) || (ar5 == 0xe)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020600(ar4,ar5,ar6,ar7));
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020714(ar4,iVar1,s4,ar7_00));
      if (iVar1 == 1) {
        return 1;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020600(ar4,ar5,ar6,ar7));
      if (*(int *)(unsigned)(iVar1 + 8) != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(*(undefined4 *)(unsigned)(iVar1 + 8),ar5,ar6,ar7));
      }
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(iVar1,ar5,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0208ec\n.set _FUN_8c0208ec, _FUN_8c0208ec_def\n");
