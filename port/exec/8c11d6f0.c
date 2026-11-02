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
uint FUN_8c11d6f0_def(int ar4,uint *ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d6f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 a5;
  uint uVar6;
  
  puVar5 = ar5;
  uVar3 = ar6;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  puVar1 = ((void *)(unsigned)0x8c1204c4);
  if (iVar2 == 0) {
    if ((ar5 == (uint *)(unsigned)0x0) && (ar6 != 0)) {
      a5 = 0x13;
override_prt_8c11d780_7a4d7f16:
      uVar3 = (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,a5,uVar3,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c10ca2e(((undefined4 *)(fr0_ - 0x64)),puVar5,uVar3,ar7));
      ((undefined4 *)(fr0_ - 0x64))[0] = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x104 + ar4));
      iVar2 = (*((code *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)))(((undefined4 *)(fr0_ - 0x64)),puVar5,uVar3,ar7);
      iVar4 = (*((code *)(unsigned long)*(unsigned *)(fr0_ - 0x58)))(((undefined4 *)(fr0_ - 0x64)),puVar5,uVar3,ar7);
      uVar6 = 0;
      uVar3 = iVar2 + iVar4;
      puVar5 = ar5;
      if (ar6 != 0) {
        do {
          if (uVar3 <= *puVar5) {
            a5 = 0x19;
            goto override_prt_8c11d780_7a4d7f16;
          }
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 < ar6);
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c120348(ar4 + 0x48,0x19,ar5,ar6));
    }
    uVar3 = uVar3 & 0xff;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11d6f0\n.set _FUN_8c11d6f0, _FUN_8c11d6f0_def\n");
