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
int FUN_8c0fd8d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fd8d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 148; for (int i_ = 0; i_ < 148; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((*(int *)(unsigned)(0xb0 + ar4) == 1) || (*(int *)(unsigned)(0xc0 + ar4) == 0)) {
    if (*(int *)(unsigned)(ar4 + 4) == 0) {
      return 0;
    }
    *(undefined4 *)(unsigned)(ar4 + 4) = 3;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 4);
  if (iVar1 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c01d754(*(undefined4 *)(unsigned)(ar4 + 8),ar5,ar6,ar7));
    iVar1 = 0xc0;
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)(0xc0 + ar4) = 0;
    }
    else {
      iVar1 = 1;
      *(undefined4 *)(unsigned)(ar4 + 4) = 1;
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(unsigned)(0xc0 + ar4) = 2;
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c01bcf4(*(undefined4 *)(unsigned)(ar4 + 0xc),ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c01bd88(*(undefined4 *)(unsigned)(ar4 + 0xc),ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c01c964(*(undefined4 *)(unsigned)(ar4 + 0xc),(&(*(undefined1 *)(unsigned)0x8c140bd0)),ar6,ar7));
    *(undefined4 *)(unsigned)(0xb8 + ar4) = 0x12c;
    iVar1 = 2;
    *(undefined4 *)(unsigned)(ar4 + 4) = 2;
  }
  else if (iVar1 == 2) {
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c01d684(*(undefined4 *)(unsigned)(ar4 + 8),((undefined1 *)(fr0_ - 0x94)),ar6,ar7));
    if ((*(int *)(fr0_ - 0x8c)) != 0) {
      if ((*(int *)(fr0_ - 0x8c)) == 2) {
        *(undefined4 *)(unsigned)(0xc0 + ar4) = 3;
        *(undefined4 *)(unsigned)(ar4 + 4) = 1;
        return 1;
      }
      if ((*(int *)(fr0_ - 0x8c)) != 3) {
        *(undefined4 *)(unsigned)(0xc0 + ar4) = 4;
        if (0 < *(int *)(unsigned)(0xb8 + ar4)) {
          return *(int *)(unsigned)(0xb8 + ar4);
        }
        *(undefined4 *)(unsigned)(0xc0 + ar4) = 5;
        *(undefined4 *)(unsigned)(ar4 + 4) = 1;
        return 1;
      }
      *(undefined4 *)(unsigned)(0xc0 + ar4) = 6;
      piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c));
      *piVar3 = *piVar3 + 1;
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 100) =
           *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c));
    }
    iVar1 = 3;
    *(undefined4 *)(unsigned)(ar4 + 4) = 3;
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(unsigned)(0xc0 + ar4) = 0;
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c01d8a0(*(undefined4 *)(unsigned)(ar4 + 8),ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c0fda5c(ar4,ar5,ar6,ar7));
    iVar1 = 0;
    *(undefined4 *)(unsigned)(ar4 + 4) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0fd8d0\n.set _FUN_8c0fd8d0, _FUN_8c0fd8d0_def\n");
