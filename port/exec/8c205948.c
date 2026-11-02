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
undefined4 FUN_8c205948_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c205948";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint ain0 = (uint)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char in_T = 0;
  
  if (in_T == '\0') {
    uVar2 = ~(~ain0 + 1 & 0x1f) + 1;
  }
  else {
    uVar2 = ain0 & 0x1f;
  }
  iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c275408);
  if (uVar2 != 0) {
    ar4 = ar4 + (0x20 - uVar2);
  }
  do {
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    if (ar4 <= *(int *)(unsigned)(iVar1 + 0x10)) {
      iVar5 = *(int *)(unsigned)(iVar1 + 0xc);
      iVar4 = *(int *)(unsigned)(iVar1 + 0x10);
      for (iVar6 = *(int *)(unsigned)(iVar1 + 0xc); iVar6 <= (iVar5 + iVar4) - ar4; iVar6 = iVar6 + 0x20) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20436c(1,(*(undefined4 *)(unsigned)(unsigned)0x8c2753f4) + iVar6,ar4,ar7));
        if (iVar3 == 0) {
          return iVar6;
        }
      }
    }
    iVar1 = *(int *)(unsigned)(iVar1 + 8);
  } while( true );
}

__asm__(".globl _FUN_8c205948\n.set _FUN_8c205948, _FUN_8c205948_def\n");
