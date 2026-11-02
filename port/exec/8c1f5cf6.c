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
undefined4 FUN_8c1f5cf6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f5cf6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *ar5_00;
  int ar4_00;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c013ec0(ar4 + 0x30,((undefined1 *)(unsigned)0x8c26c744),0x10,ar7));
  if (iVar1 == 0) {
    iVar1 = 1;
    while( true ) {
      ar5_00 = ((undefined1 *)(unsigned)0x8c26c744) + 0x10;
      ar4_00 = iVar1 * 0x20 + ar4 + 0x20;
      uVar2 = 0x10;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c013ec0(ar4_00 + 0x10,((undefined1 *)(unsigned)0x8c26c744) + 0x10,0x10,ar7
                          ));
      if (iVar3 == 0) break;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f5c04(ar4_00,ar5_00,uVar2,ar7));
      iVar1 = iVar1 + 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f5cf6\n.set _FUN_8c1f5cf6, _FUN_8c1f5cf6_def\n");
