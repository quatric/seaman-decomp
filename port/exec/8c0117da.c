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
int FUN_8c0117da_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0117da";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  char *unaff_r11 = 0;
  int iVar3;
  int *unaff_r14 = 0;
  
  iVar2 = *unaff_r14;
  if (iVar2 == 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), memmove(unaff_r14[1],unaff_r11,ar5,ar7));
    unaff_r14[1] = unaff_r14[1] + ar5;
    unaff_r14[2] = unaff_r14[2] + ar5;
  }
  else {
    iVar3 = 0;
    if (0 < ar5) {
      do {
        cVar1 = *unaff_r11;
        unaff_r11 = unaff_r11 + 1;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(unaff_r14[3])))((int)cVar1,unaff_r14[1],ar6,ar7));
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        iVar3 = iVar3 + 1;
        unaff_r14[2] = unaff_r14[2] + 1;
      } while (iVar3 < ar5);
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0117da\n.set _FUN_8c0117da, _FUN_8c0117da_def\n");
