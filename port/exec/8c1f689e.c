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
int FUN_8c1f689e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f689e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  *(int *)(unsigned)(0x20c + ar4) = *(int *)(unsigned)(0x20c + ar4) + -1;
  iVar1 = (int)0x118;
  *(undefined4 *)(unsigned)(ar5 + 0xc) = 0;
  if (*(int *)(unsigned)(iVar1 + ar5) != 0) {
                    
                    
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar1 + ar5))))(vr4,vr5,vr6,vr7));
    return uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f689e\n.set _FUN_8c1f689e, _FUN_8c1f689e_def\n");
