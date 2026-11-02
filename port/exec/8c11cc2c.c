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
undefined4 FUN_8c11cc2c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11cc2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int a4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(int *)(unsigned)(0x108 + ar4) != 0) {
    a4 = *(int *)(unsigned)(0x108 + ar4);
    uVar4 = ar5;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x3c))))(a4,ar5,ar6,ar7));
    puVar2 = (uint *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0x108 + ar4) + 0x6c))))
                               (*(int *)(unsigned)(0x108 + ar4),uVar4,ar6,ar7));
    uVar4 = 0;
    puVar3 = puVar2;
    if (uVar1 != 0) {
      do {
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 | *puVar3;
        puVar3 = puVar3 + 2;
      } while (uVar4 < uVar1);
    }
    if (((ar5 & uVar5) == 0) || ((ar5 != 0xffffffff && ((~uVar5 & ar5) != 0)))) {
      return 1;
    }
    uVar5 = 0;
    do {
      uVar4 = (uint)((puVar2[uVar5 * 2] & ar5) != 0);
      if ((uVar4 != *(byte *)(unsigned)(0xe4 + ar4 + uVar5)) &&
         (uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c11cbbc(ar4,uVar5,uVar4,ar7)), (uVar4 & 0xff) != 0)) {
        return 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 3);
  }
  return 0;
}

__asm__(".globl _FUN_8c11cc2c\n.set _FUN_8c11cc2c, _FUN_8c11cc2c_def\n");
