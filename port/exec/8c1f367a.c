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
undefined4 FUN_8c1f367a_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f367a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  puVar1 = ((void *)(unsigned)0x8c1f88e6);
  uVar7 = 0;
  if ((ar4 == (int *)(unsigned)0x0) || ((short)ar4[0x13] == 0)) {
    uVar7 = 0xfffffff6;
  }
  else if (((short)ar4[0x14] == 2) || ((short)ar4[0x14] == 4)) {
    if (((int *)(unsigned long)*(unsigned *)(unsigned)(*ar4 + 0x1c)) == ar4) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 24)), sh4_tmu_1f88e6(0,vr5,vr6,vr7));
      while (puVar2 = ((void *)(unsigned)0x8c1f88f0), ar4[0x10] != 1) {
        if (((short)ar4[0x14] != 2) && ((short)ar4[0x14] != 4)) goto LAB_8c1f36d4;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(puVar1)))(uVar7,vr5,vr6,vr7));
        uVar6 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(puVar2)))(uVar3,uVar4,vr6,vr7));
        if (0xee6b28 < uVar6) {
          return 0xffffffeb;
        }
        (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar4 + 0x3c) + 0x48))))(vr4,vr5,vr6,vr7));
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(puVar1)))(uVar7,vr5,vr6,vr7));
      uVar6 = (uint)0x61b;
      do {
        uVar4 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(puVar1)))(uVar7,vr5,vr6,vr7));
        uVar5 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(puVar2)))(uVar3,uVar4,vr6,vr7));
      } while (uVar5 < uVar6);
      uVar7 = 0xfffffff3;
      if (((short)ar4[0x14] == 2) || ((short)ar4[0x14] == 4)) {
        if (((int *)(unsigned long)*(unsigned *)(unsigned)(*ar4 + 0x1c)) == ar4) {
          (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar4 + 0xc) + 0x14))))(ar4[0xf],vr5,vr6,vr7));
          *(undefined2 *)(unsigned)(ar4 + 0x12) = 3;
          uVar7 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c1f2f98(ar4,uVar7,ar6,ar7));
        }
        else {
          uVar7 = 0xfffffff3;
        }
      }
      else {
        *(undefined2 *)(unsigned)(ar4 + 0x14) = 0;
        uVar7 = 0;
      }
    }
    else {
      uVar7 = 0xfffffff3;
    }
  }
  else {
LAB_8c1f36d4:
    *(undefined2 *)(unsigned)(ar4 + 0x14) = 0;
    uVar7 = 0;
  }
  return uVar7;
}

__asm__(".globl _FUN_8c1f367a\n.set _FUN_8c1f367a, _FUN_8c1f367a_def\n");
