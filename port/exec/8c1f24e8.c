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
undefined4 FUN_8c1f24e8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f24e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  int a4;
  int a5;
  undefined4 a6;
  undefined4 a7;
  
  if (*((undefined4 *)(unsigned long)*(unsigned *)0x8c470f90) == 1) {
    ar5 = ar5 + ((undefined4 *)(unsigned long)*(unsigned *)0x8c470f90)[1] + -4;
    ar4 = ar4 + ((undefined4 *)(unsigned long)*(unsigned *)0x8c470f90)[1] + -4;
  }
  if (2 < ar4) {
    a7 = 0;
    piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f302a(*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x14),0,0,0));
    if (piVar1 != (int *)(unsigned)0x0) {
      a4 = ar4;
      a5 = ar5;
      a6 = ar6;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0xc) + 0x28))))(ar4,ar5,ar6,a7));
      if (iVar2 != 0) {
        piVar1[0xf] = iVar2;
        *(undefined2 *)(unsigned)(piVar1 + 0x14) = 4;
        if (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x2c) < 0x10001) {
          *(undefined2 *)(unsigned)(piVar1 + 0x12) = 6;
        }
        else {
          a4 = 1;
          *(undefined2 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x3a) = 1;
          (*(undefined4 *)(unsigned)(unsigned)0x8c470fa0) = 1;
          (*(undefined4 *)(unsigned)(unsigned)0x8c470fa4) = ar4;
          (*(undefined4 *)(unsigned)(unsigned)0x8c470fa8) = ar5;
          (*(undefined4 *)(unsigned)(unsigned)0x8c470fac) = ar6;
          piVar1[1] = (int)((undefined1 *)(unsigned)0x8c470fb0);
          *(undefined2 *)(unsigned)(piVar1 + 0x12) = 8;
        }
        *(unsigned *)(unsigned)(*piVar1 + 0x1c) = piVar1;
        (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0xc) + 0x40))))(a4,a5,a6,a7));
      }
      if (iVar2 != 0) {
        return 0;
      }
    }
  }
  return 0xfffffff3;
}

__asm__(".globl _FUN_8c1f24e8\n.set _FUN_8c1f24e8, _FUN_8c1f24e8_def\n");
