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
uint FUN_8c26b8c8_def(int ar4,int ar5,int ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c26b8c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 a5;
  int iVar1;
  int a6;
  int *a7;
  int iVar2;
  
  a6 = ar6;
  a7 = ar7;
  a5 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c26b4f4(ar4,ar5,ar6,ar7));
  if (ar5 == 0) {
    a6 = *(int *)(unsigned)(ar4 + 0x10);
    iVar1 = (*(int *)(unsigned)(ar4 + 0x20) - *(int *)(unsigned)(ar4 + 0x14)) + *(int *)(unsigned)(ar4 + 0x24);
    if (a6 < iVar1) {
      iVar1 = a6;
    }
  }
  else {
    if (ar5 != 1) {
      iVar2 = 0;
      if (*(int *)(unsigned)(ar4 + 0x28) != 0) {
        (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x28))))(*(undefined4 *)(unsigned)(ar4 + 0x2c),0xfffffffd,a6,a7));
      }
      goto LAB_8c26b934;
    }
    a6 = (*(int *)(unsigned)(ar4 + 0x20) - *(int *)(unsigned)(ar4 + 0x18)) + *(int *)(unsigned)(ar4 + 0x24);
    iVar1 = a6;
    if (*(int *)(unsigned)(ar4 + 0xc) < a6) {
      iVar1 = *(int *)(unsigned)(ar4 + 0xc);
    }
  }
  iVar2 = ar6;
  if (iVar1 < ar6) {
    iVar2 = iVar1;
  }
LAB_8c26b934:
  *ar7 = iVar2;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c26b50c(ar4,a5,a6,a7));
  return (uint)(iVar2 == ar6);
}

__asm__(".globl _FUN_8c26b8c8\n.set _FUN_8c26b8c8, _FUN_8c26b8c8_def\n");
