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
undefined4 FUN_8c234bc0_def(undefined4 *ar4,int ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c234bc0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 uVar4;
  
  if (ar7 == 0) {
    iVar1 = ar5;
    uVar3 = ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c236454(ar4,ar5,ar6,0));
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c237124(0x8000a,iVar1,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c23728c(uVar3,iVar1,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c23666c(uVar3,iVar1,ar6,ar7));
  }
  else {
    iVar1 = ar5;
    uVar3 = ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c236454(ar4,ar5,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c237124(0x210000a,iVar1,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c23728c(uVar3,iVar1,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c236718(uVar3,iVar1,ar6,ar7));
  }
  iVar1 = iVar1 + 0x1c;
  while( true ) {
    uVar3 = *ar4;
    ar5_00 = ar4[1];
    ar6_00 = ar4[2];
    ar7_00 = ar4[3];
    uVar4 = ar4[4];
    puVar2 = ar4 + 5;
    ar4 = ar4 + 6;
    ar5 = ar5 + -1;
    if (ar5 == 0) break;
    *(undefined4 *)(unsigned)(iVar1 + -4) = *puVar2;
    *(undefined4 *)(unsigned)(iVar1 + -8) = uVar4;
    *(undefined4 *)(unsigned)(iVar1 + -0xc) = ar7_00;
    *(undefined4 *)(unsigned)(iVar1 + -0x10) = ar6_00;
    *(undefined4 *)(unsigned)(iVar1 + -0x14) = ar5_00;
    *(undefined4 *)(unsigned)(iVar1 + -0x18) = uVar3;
    *(undefined4 *)(unsigned)(iVar1 + -0x1c) = 0xe0000000;
    iVar1 = iVar1 + 0x20;
  }
  *(undefined4 *)(unsigned)(iVar1 + -4) = *puVar2;
  *(undefined4 *)(unsigned)(iVar1 + -8) = uVar4;
  *(undefined4 *)(unsigned)(iVar1 + -0xc) = ar7_00;
  *(undefined4 *)(unsigned)(iVar1 + -0x10) = ar6_00;
  *(undefined4 *)(unsigned)(iVar1 + -0x14) = ar5_00;
  *(undefined4 *)(unsigned)(iVar1 + -0x18) = uVar3;
  *(undefined4 *)(unsigned)(iVar1 + -0x1c) = 0xf0000000;
  iVar1 = iVar1 + 4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2370dc(iVar1,ar5_00,ar6_00,ar7_00));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2364b2(iVar1,ar5_00,ar6_00,ar7_00));
  return uVar3;
}

__asm__(".globl _FUN_8c234bc0\n.set _FUN_8c234bc0, _FUN_8c234bc0_def\n");
