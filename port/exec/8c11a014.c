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
undefined4 * FUN_8c11a014_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11a014";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x114 + ar4));
  puVar1 = (undefined4 *)(unsigned)0x0;
  for (; ar5 != 0; ar5 = *(int *)(unsigned)(ar5 + 8)) {
    puVar5 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x114 + ar4));
    if (puVar5[1] == 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112fd8(ar4,puVar5,vr6,vr7));
      *(undefined4 *)(unsigned)(0x114 + ar4) = uVar2;
    }
    else {
      *(undefined4 *)(unsigned)(0x114 + ar4) = puVar5[1];
    }
    puVar5[4] = *(undefined4 *)(unsigned)(ar5 + 0x10);
    *puVar5 = 1;
    puVar5[3] = *(undefined4 *)(unsigned)(ar5 + 0xc);
    puVar5[5] = *(undefined4 *)(unsigned)(ar5 + 0x14);
    piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
    puVar5[1] = piVar3;
    *piVar3 = *piVar3 + 1;
    puVar5[2] = 0;
    if (puVar1 != (undefined4 *)(unsigned)0x0) {
      puVar1[2] = puVar5;
    }
    puVar1 = puVar5;
  }
  *puVar4 = 0;
  return puVar4;
}

__asm__(".globl _FUN_8c11a014\n.set _FUN_8c11a014, _FUN_8c11a014_def\n");
