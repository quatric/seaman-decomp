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
undefined4 FUN_8c122230_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c122230";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(unsigned)(ar4 + 0x124 + ar6 * 4);
  iVar4 = *(int *)(unsigned)(ar6 * 4 + ar4 + 0x118);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11d432(ar4,0,ar6,ar7));
  if ((uVar1 & 0xff) != 0) {
    return 1;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(iVar3 - iVar4,(uint)*(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 0xc),vr6,vr7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12215c(ar4,ar5,ar6,0));
  return uVar2;
}

__asm__(".globl _FUN_8c122230\n.set _FUN_8c122230, _FUN_8c122230_def\n");
