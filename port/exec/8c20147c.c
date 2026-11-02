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
int FUN_8c20147c_def(undefined4 ar4,undefined4 ar5,undefined2 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20147c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 316; for (int i_ = 0; i_ < 316; i_++) z_[i_] = 0; }
  int a5;
  uint uVar1;
  undefined1 *a6;
  int iVar2;
  
  a6 = ((undefined1 *)(fr0_ - 0x40));
  a5 = (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c200566(ar4,ar5,a6,ar7));
  if (a5 < 0) {
    a5 = (int)(int)0xffffff05;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c200a84(ar4,a5,a6,ar7));
    *ar6 = (short)(*(uint *)(fr0_ - 0x34));
    for (iVar2 = 0; ar6 = ar6 + 1, iVar2 < (*(int *)(fr0_ - 0x18)); iVar2 = iVar2 + 1) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c2009d0(ar4,(*(uint *)(fr0_ - 0x34)),a6,ar7));
      (*(uint *)(fr0_ - 0x34)) = uVar1 & 0xffff;
      *ar6 = (short)uVar1;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c200b10(ar4,ar5,a6,ar7));
    if (iVar2 < 0) {
      a5 = iVar2;
    }
  }
  return a5;
}

__asm__(".globl _FUN_8c20147c\n.set _FUN_8c20147c, _FUN_8c20147c_def\n");
