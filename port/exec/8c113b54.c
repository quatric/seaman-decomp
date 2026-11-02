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
int FUN_8c113b54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c113b54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = (int)0xfc;
  puVar3 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + ar4));
  *puVar3 = *(undefined4 *)(unsigned)(ar4 + 0x38);
  puVar3[1] = *(undefined4 *)(unsigned)(iVar1 + 0x48 + ar4);
  puVar3[2] = *(undefined4 *)(unsigned)(ar4 + 0x44);
  puVar3[3] = *(undefined4 *)(unsigned)(ar4 + 0x48);
  iVar1 = (int)0x1c0;
  puVar3[4] = *(undefined4 *)(unsigned)(ar4 + 0xc0);
  iVar2 = (int)0x98;
  puVar3[5] = *(undefined4 *)(unsigned)(iVar1 + ar4);
  puVar3[6] = *(undefined4 *)(unsigned)(iVar2 + ar4);
  iVar1 = (int)0x148;
  puVar3[7] = *(undefined4 *)(unsigned)(iVar2 + 4 + ar4);
  puVar3[8] = *(undefined4 *)(unsigned)(iVar1 + ar4);
  iVar2 = (int)0xa8;
  puVar3[9] = *(undefined4 *)(unsigned)(iVar1 + 0x10 + ar4);
  puVar3[10] = *(undefined4 *)(unsigned)(iVar2 + ar4);
  puVar3[0xb] = *(undefined4 *)(unsigned)(iVar2 + 4 + ar4);
  puVar3[0xc] = *(undefined4 *)(unsigned)(iVar2 + -8 + ar4);
  puVar3[0xd] = *(undefined4 *)(unsigned)(iVar2 + 0x10 + ar4);
  puVar3[0xe] = *(undefined4 *)(unsigned)(iVar2 + 0xc + ar4);
  return iVar2 + 0xc;
}

__asm__(".globl _FUN_8c113b54\n.set _FUN_8c113b54, _FUN_8c113b54_def\n");
