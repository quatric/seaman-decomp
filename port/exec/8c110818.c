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
undefined4 FUN_8c110818_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c110818";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int *unaff_r14 = 0;
  float extraout_fr0 = 0;
  float extraout_fr0_00 = 0;
  float extraout_fr0_01 = 0;
  char cVar2;
  
  iVar1 = *unaff_r14;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,1,ar6,ar7));
  unaff_r14[0xb] = (int)extraout_fr0 & 0xffff;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,2,ar6,ar7));
  unaff_r14[0xc] = (int)extraout_fr0_00 & 0xffff;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,3,ar6,ar7));
  cVar2 = '\0';
  unaff_r14[0xd] = (int)(float)(int)(short)(int)extraout_fr0_01;
  *(undefined2 *)(unsigned)(*(int *)(unsigned)unaff_r14[4] + 0xc) = 1;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar1 + 0x14))))(iVar1,unaff_r14[0xc],4,ar7));
  unaff_r14[0xe] = iVar1;
  unaff_r14[0xf] = iVar1;
  unaff_r14[0x10] = unaff_r14[0xc] * 4 + unaff_r14[0xe];
  if (cVar2 == '\0') {
    unaff_r14[0x11] = 0;
  }
  else {
    unaff_r14[0x11] = 0;
    unaff_r14[0x12] = 0x41700000;
  }
  unaff_r14[0x12] = 0;
  return 0;
}

__asm__(".globl _FUN_8c110818\n.set _FUN_8c110818, _FUN_8c110818_def\n");
