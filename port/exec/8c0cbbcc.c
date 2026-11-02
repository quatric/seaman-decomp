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
undefined4 FUN_8c0cbbcc_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0cbbcc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int *a4;
  int ar6_00;
  
  iVar2 = ar5;
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100154(ar5,ar5,ar6,ar7));
  if (iVar1 == 1) {
    ar6_00 = 0;
    iVar2 = ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e58(ar5,ar6,0,ar7));
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_d0_0c51fc(ar5,iVar2,ar6_00,ar7));
  a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar2 * 4 + ar6));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x6c))))(a4,ar5,0,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0cbbcc\n.set _FUN_8c0cbbcc, _FUN_8c0cbbcc_def\n");
