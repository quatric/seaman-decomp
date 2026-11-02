#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c234b10_def(le<undefined4>* ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c234b10");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  iVar2 = ar5;
  if (ar6 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c236454(ar4,ar5,0,ar7));
    uVar3 = 0x80002;
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c237124(0x80002,ar5,ar6,ar7); });
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c236510(uVar3,ar5,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c236454(ar4,ar5,ar6,ar7));
    uVar3 = 0x2100002;
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c237124(0x2100002,ar5,ar6,ar7); });
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2365e2(uVar3,ar5,ar6,ar7));
  }
  iVar1 = iVar1 + 0x1c;
  while( true ) {
    uVar3 = *ar4;
    ar5_00 = ar4[1];
    ar6_00 = ar4[2];
    ar7_00 = ar4[3];
    ar4 = ar4 + 4;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) break;
    *(le<undefined4>* )(unsigned)(iVar1 + -4) = ar7_00;
    *(le<undefined4>* )(unsigned)(iVar1 + -0x10) = ar6_00;
    *(le<undefined4>* )(unsigned)(iVar1 + -0x14) = ar5_00;
    *(le<undefined4>* )(unsigned)(iVar1 + -0x18) = uVar3;
    *(le<undefined4>* )(unsigned)(iVar1 + -0x1c) = 0xe0000000;
    iVar1 = iVar1 + 0x20;
  }
  *(le<undefined4>* )(unsigned)(iVar1 + -4) = ar7_00;
  *(le<undefined4>* )(unsigned)(iVar1 + -0x10) = ar6_00;
  *(le<undefined4>* )(unsigned)(iVar1 + -0x14) = ar5_00;
  *(le<undefined4>* )(unsigned)(iVar1 + -0x18) = uVar3;
  *(le<undefined4>* )(unsigned)(iVar1 + -0x1c) = 0xf0000000;
  iVar1 = iVar1 + 4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2370dc(iVar1,ar5_00,ar6_00,ar7_00));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2364b2(iVar1,ar5_00,ar6_00,ar7_00));
  return uVar3;
}

__asm__(".globl FUN_8c234b10\n.set FUN_8c234b10, FUN_8c234b10_def\n");

}
