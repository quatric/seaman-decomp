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
int FUN_8c26270c_def(int ar4,uint ar5,int *ar6,uint *ar7)

{
  ring[rp++ & 255] = "FUN_8c26270c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), s_E9040828_ptid_is_range_outsi_2626d2(ar4,ar5,ar6,ar7));
  if (iVar2 < 0) {
    *ar6 = -1;
    *ar7 = 0xffffffff;
  }
  else {
    for (piVar4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x8c4b3e20 + ar4 * 4)); iVar5 = 0, *piVar4 != 0;
        piVar4 = (int *)(unsigned)*piVar4) {
      for (; iVar5 < (int)(uint)*(ushort *)(unsigned)(piVar4 + 4); iVar5 = iVar5 + 1) {
        puVar3 = (ushort *)(unsigned)(piVar4 + iVar5 * 2 + 5);
        if (*puVar3 == ar5) {
          *ar6 = piVar4[2] + *(int *)(unsigned)(puVar3 + 2);
          *ar7 = (uint)puVar3[1];
          return iVar2;
        }
      }
    }
    iVar5 = 0;
    uVar6 = (uint)*(ushort *)(unsigned)(piVar4 + 5);
    puVar3 = (ushort *)(unsigned)((int)piVar4 + 0x16);
    if (0 < (int)ar5) {
      do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        iVar5 = iVar5 + 1;
        uVar6 = uVar6 + uVar1;
      } while (iVar5 < (int)ar5);
    }
    *ar6 = uVar6 + piVar4[2];
    *ar7 = (uint)((ushort *)(unsigned)((int)piVar4 + 0x16))[ar5];
  }
  return iVar2;
}

__asm__(".globl _FUN_8c26270c\n.set _FUN_8c26270c, _FUN_8c26270c_def\n");
