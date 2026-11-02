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
int FUN_8c200772_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c200772";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint ar5_00;
  int iVar1;
  uint uVar2;
  int in_r3 = 0;
  int iVar3;
  int a6;
  int a7;
  int ar6_00;
  undefined4 unaff_r10 = 0;
  int iVar4;
  int iVar5;
  
  ar5_00 = 0xfffc;
  iVar3 = *(int *)(unsigned)(ar5 + in_r3 + 0x1c);
  ar6_00 = *(int *)(unsigned)(iVar3 + 0x1c);
  iVar4 = *(int *)(unsigned)(iVar3 + 0x10);
  iVar3 = *(int *)(unsigned)(iVar3 + 0x20) + ar6_00 + -1;
  do {
    a6 = ar6_00;
    a7 = iVar3;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1fe1e4(unaff_r10,ar5_00,ar6_00,iVar3));
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2009d0(unaff_r10,iVar1 - iVar5,a6,a7));
        if ((uVar2 & 0xffff) != ar5_00) {
          iVar3 = (iVar1 - iVar5) + -1;
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
    if (iVar5 == iVar4) {
      return (iVar1 - iVar4) + 1;
    }
  } while( true );
}

__asm__(".globl _FUN_8c200772\n.set _FUN_8c200772, _FUN_8c200772_def\n");
