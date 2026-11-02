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
uint FUN_8c10d3ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10d3ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  short sVar4;
  ushort *puVar5;
  short *psVar6;
  
  iVar1 = (int)0xb4;
  puVar3 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + ar4));
  puVar5 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + -0xc + ar4));
  uVar2 = (uint)0xb0;
  psVar6 = ((short *)(unsigned long)*(unsigned *)(unsigned)(uVar2 + ar4));
  puVar5 = puVar3 + ((uint)puVar5[*(ushort *)(unsigned)(iVar1 + -0x18 + ar4)] - (uint)*puVar5);
  for (; puVar3 < puVar5; puVar3 = puVar3 + 1) {
    uVar2 = (uint)(short)*puVar3;
    sVar4 = (short)((int)uVar2 >> 2);
    if ((uVar2 & 1) != 0) {
      uVar2 = (uint)0x96;
      sVar4 = sVar4 + *(short *)(unsigned)(uVar2 + ar4);
    }
    if ((*puVar3 & 2) != 0) {
      uVar2 = (uint)0x94;
      sVar4 = sVar4 + *(short *)(unsigned)(uVar2 + ar4);
    }
    *psVar6 = sVar4;
    psVar6 = psVar6 + 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10d3ec\n.set _FUN_8c10d3ec, _FUN_8c10d3ec_def\n");
