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
undefined4 FUN_8c1f2a74_def(char *ar4,char *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f2a74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *ar5_00;
  int ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  while( true ) {
    if (ar6 < 1) {
      return 1;
    }
    if (*ar4 == '\0') break;
    cVar1 = *ar4;
    ar4 = ar4 + 1;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f2a48((int)cVar1,ar5_00,ar6_00,ar7));
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f2a48((int)cVar1,ar5_00,ar6_00,ar7));
    if ((char)uVar2 != (char)uVar3) {
      return 0;
    }
    ar6 = ar6 + -1;
  }
  if (*ar5 == '\0') {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f2a74\n.set _FUN_8c1f2a74, _FUN_8c1f2a74_def\n");
