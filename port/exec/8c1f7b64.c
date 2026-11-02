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
undefined4 FUN_8c1f7b64_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f7b64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(undefined1 *)(unsigned)0x8c273a10) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4748a8) = 5;
    return 0;
  }
  if (ar4 == 0) {
    ar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4748bc);
  }
  iVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f6dcc(3,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f6fc8(ar4,iVar1,ar6,ar7));
  if (iVar1 < 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4748a8) = 9;
LAB_8c1f7bfa:
    uVar3 = 0;
  }
  else {
    if (ar4 == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar5,0x8c4748c4,0xf0,ar7));
    }
    else {
      if ((*(undefined1 *)(unsigned)0x8c474a2b) == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4748a8) = 3;
        goto LAB_8c1f7bfa;
      }
      if (ar5 != 0) {
        iVar4 = 0;
        iVar1 = iVar1 * 4 + 0x18;
        do {
          iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f6e0c(iVar1,ar5,ar6,ar7));
          if (iVar2 != 1) {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4748a8) = 7;
            return 0;
          }
          iVar4 = iVar4 + 1;
          ar5 = ar5 + 0x3c;
          iVar1 = iVar1 + 1;
        } while (iVar4 < 4);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c1f7b64\n.set _FUN_8c1f7b64, _FUN_8c1f7b64_def\n");
