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
uint FUN_8c10e7de_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10e7de";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  if (*(short *)(unsigned)(ar4 + 4) != 0) {
    do {
      *(byte *)(unsigned)(iVar2 + ar5) =
           *(byte *)(unsigned)(*(int *)(unsigned)((uint)*(byte *)(unsigned)(*(int *)(unsigned)(ar4 + 8) + iVar2) * 4 + ar6) +
                    (uint)*(byte *)(unsigned)(iVar2 + ar5));
      *(undefined1 *)(unsigned)(*(int *)(unsigned)(ar4 + 8) + iVar2) = 0;
      iVar2 = iVar2 + 1;
      uVar1 = (uint)*(ushort *)(unsigned)(ar4 + 4);
    } while (iVar2 < (int)uVar1);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c10e7de\n.set _FUN_8c10e7de, _FUN_8c10e7de_def\n");
