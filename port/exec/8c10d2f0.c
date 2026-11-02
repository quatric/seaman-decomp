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
int FUN_8c10d2f0_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10d2f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (int)0x114;
  *(undefined4 *)(unsigned)(iVar1 + ar4) = *ar5;
  puVar3 = ar5 + 2;
  *(undefined4 *)(unsigned)(iVar1 + 4 + ar4) = ar5[1];
  iVar1 = (int)0x90;
  iVar4 = 0;
  if (*(short *)(unsigned)(iVar1 + ar4) != 0) {
    do {
      iVar5 = iVar4 * 0xc;
      iVar1 = 0;
      if (*(short *)(unsigned)(*(int *)(unsigned)(0x84 + ar4) + iVar5 + 4) != 0) {
        do {
          puVar2 = (undefined1 *)(unsigned)((int)puVar3 + 1);
          *(undefined1 *)(unsigned)(*(int *)(unsigned)(0xc0 + ar4 + iVar4 * 4) + iVar1) = *(undefined1 *)(unsigned)puVar3;
          puVar3 = (undefined4 *)(unsigned)((int)puVar3 + 2);
          *(undefined1 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(0x84 + ar4) + iVar5 + 8) + iVar1) = *puVar2;
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(uint)*(ushort *)(unsigned)(*(int *)(unsigned)(0x84 + ar4) + iVar5 + 4));
      }
      iVar1 = (int)0x90;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)(unsigned)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10d2f0\n.set _FUN_8c10d2f0, _FUN_8c10d2f0_def\n");
