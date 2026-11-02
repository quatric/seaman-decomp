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
int FUN_8c261a4c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c261a4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  puVar1 = 0x8c4b5244;
  uVar4 = *(undefined4 *)(unsigned)0x8c4b5244;
  if ((int)uVar4 < 0) {
    uVar4 = ~(~uVar4 + 1 & (int)0xff) + 1;
  }
  else {
    uVar4 = uVar4 & (int)0xff;
  }
  *(undefined4 *)(unsigned)0x8c4b5244 = uVar4;
  iVar3 = ar4 * 2;
  puVar5 = (undefined1 *)(unsigned)(uVar4 * 0x10 + 0x8c4b4224);
  if (ar5 == 0) {
    *(short *)(unsigned)(0x8c4b5224 + iVar3) = *(short *)(unsigned)(0x8c4b5224 + iVar3) + 1;
  }
  *puVar5 = (char)ar4;
  puVar5[1] = (char)ar5;
  iVar2 = 0x8c4b5224;
  *(undefined2 *)(unsigned)(puVar5 + 2) = *(undefined2 *)(unsigned)(0x8c4b5224 + iVar3);
  *(undefined4 *)(unsigned)(puVar5 + 4) = ar6;
  *(undefined4 *)(unsigned)(puVar5 + 8) = ar7;
  *(undefined4 *)(unsigned)(puVar5 + 0xc) = s0;
  *puVar1 = *puVar1 + 1;
  return iVar2;
}

__asm__(".globl _FUN_8c261a4c\n.set _FUN_8c261a4c, _FUN_8c261a4c_def\n");
