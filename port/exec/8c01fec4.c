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
undefined4 FUN_8c01fec4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01fec4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  int iVar3;
  int ar7_00;
  
  iVar3 = ar5 + 0x10;
  ar6_00 = *(undefined4 *)(unsigned)(ar4 + 0x28);
  uVar2 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02051c(ar4,ar7,ar6_00,iVar3));
  if (iVar1 == 0) {
    ar7_00 = ar5 + 0x30;
    iVar3 = ar5 + 0x10;
    iVar1 = ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(ar5 + 0x50)); unsigned long t1_ = (unsigned long)(*(undefined4 *)(unsigned)(ar5 + 0x54)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02000c))))
                      (ar4,ar7,iVar3,ar7_00); })
    ;
    if (iVar1 == 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar6,ar7,iVar3,ar7_00));
    }
    else {
      *(undefined4 *)(unsigned)(iVar1 + 8) = ar6;
      for (iVar3 = 0; iVar3 < 0x20; iVar3 = iVar3 + 1) {
        *(undefined4 *)(unsigned)(iVar1 + iVar3 * 4 + 0x58) = *(undefined4 *)(unsigned)(ar5 + iVar3 * 4 + 0x58);
      }
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0205e8(ar4,ar4 + 0x28,iVar1,ar7_00));
    }
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar6,uVar2,ar6_00,iVar3));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01fec4\n.set _FUN_8c01fec4, _FUN_8c01fec4_def\n");
