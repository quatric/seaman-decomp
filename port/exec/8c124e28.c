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
uint FUN_8c124e28_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c124e28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int a4;
  
  if (*(char *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + 0x30) == '\0') {
    uVar3 = (((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x28)))[1];
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x28)),uVar3,ar6,ar7));
    if (iVar1 != 0) {
      puVar2 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*(undefined4 *)(unsigned)(ar4 + 0x2c),uVar3,ar6,ar7));
      a4 = *(int *)(unsigned)(ar4 + 0x30);
      iVar4 = 0;
      if (*(short *)(unsigned)(ar4 + 0x34) != 0) {
        do {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c124d10(a4,(uint)*(ushort *)(unsigned)(a4 + 4) * 4 + iVar1,ar6,ar7));
          *puVar2 = (char)uVar3;
          iVar4 = iVar4 + 1;
          a4 = a4 + 0x14;
          puVar2 = puVar2 + 1;
        } while (iVar4 < (int)(uint)*(ushort *)(unsigned)(ar4 + 0x34));
      }
    }
  }
  iVar1 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x28));
  return *(int *)(unsigned)((((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x28)))[1] * 4 + *(int *)(unsigned)(iVar1 + 0x40)) == *(int *)(unsigned)(iVar1 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c124e28\n.set _FUN_8c124e28, _FUN_8c124e28_def\n");
