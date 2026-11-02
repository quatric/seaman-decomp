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
int FUN_8c11c86c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11c86c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(undefined4 *)(fr0_ - 0xc)) = ar7;
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c11c5e4(ar4,&(*(undefined4 *)(fr0_ - 0x10)),ar7,s0));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xc4 + ar4))))((*(undefined4 *)(fr0_ - 0x10)),0xf4 + ar4,ar7,s0));
  (*(undefined4 *)(fr0_ - 0xc)) = CONCAT31((*(uint*)((uchar*)&(*(undefined4 *)(fr0_ - 0xc))+1)),(char)uVar1);
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c11c7b8(ar4,(*(undefined4 *)(fr0_ - 0x10)),ar7,s0));
  return (int)(char)(*(undefined4 *)(fr0_ - 0xc));
}

__asm__(".globl _FUN_8c11c86c\n.set _FUN_8c11c86c, _FUN_8c11c86c_def\n");
