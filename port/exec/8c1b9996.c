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
undefined4 FUN_8c1b9996_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1b9996";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int a7;
  int in_GBR = (void *)0x8cf80000;
  
  a7 = (int)(*(undefined1 *)(unsigned)0x8c1b9a52);
  *(undefined2 *)(unsigned)(in_GBR + 0xc) = (undefined2)ain0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9702(ar4,ar5,ar6,a7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b982c(ar4,ar5,ar6,a7));
  *(char *)(unsigned)(in_GBR + 0xeb) = (char)uVar1;
  *(char *)(unsigned)(in_GBR + 0x93) = (char)uVar1;
  *(short *)(unsigned)(in_GBR + 0x108) = (short)uVar1;
  *(unsigned *)(unsigned)(ar5 + 0x38) = register0x0000003c;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9802(ar4,ar5,ar6,a7));
  *(char *)(unsigned)(in_GBR + 0x98) = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1ba442(ar4,ar5,ar6,a7));
  *(short *)(unsigned)(in_GBR + 0x116) = (short)uVar1;
  *(char *)(unsigned)(in_GBR + 0xf) = (char)uVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9834(ar4,ar5,ar6,a7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b95f2(ar4,ar5,ar6,a7));
  uVar1 = ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1b9996(ar4,ar5,ar6,a7); });
  *(short *)(unsigned)(in_GBR + 0x12a) = (short)uVar1;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9996\n.set _FUN_8c1b9996, _FUN_8c1b9996_def\n");
