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
undefined4 FUN_8c1f2236_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f2236";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int a5;
  int iVar1;
  undefined4 a6;
  int unaff_r13 = 0;
  int *piVar2;
  int a4;
  char in_T = 0;
  int iVar3;
  
  a6 = 0;
  if (in_T != '\0') {
    unaff_r13 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[4];
  }
  a5 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f2cce(ar4,unaff_r13,0,ar7));
  if (a5 == 0) {
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f175c(0xfffffff8,0,a6,ar7));
  }
  else {
    iVar3 = (a5 + -1) * 0x2c;
    a4 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[6];
    for (iVar1 = 0; iVar1 < *((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0); iVar1 = iVar1 + 1) {
      if (*(short *)(unsigned)(a4 + 0x4c) == 0) {
        piVar2 = (int *)(unsigned)(unaff_r13 + 0x10 + iVar3);
        iVar3 = piVar2[1];
        iVar1 = *piVar2 + 0x96;
        (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f21bc(a4,a5,iVar1,iVar3));
        (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f175c(0,a5,iVar1,iVar3));
        return a4;
      }
      a4 = a4 + 0x54;
    }
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f175c(0xfffffff7,a5,((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0),iVar3));
  }
  return 0;
}

__asm__(".globl _FUN_8c1f2236\n.set _FUN_8c1f2236, _FUN_8c1f2236_def\n");
