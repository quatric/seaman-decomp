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
undefined4 FUN_8c1f3682_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f3682";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint ar4_00;
  int a4;
  undefined4 a5;
  uint uVar4;
  int *unaff_r14 = 0;
  char in_T = 0;
  
  puVar1 = ((void *)(unsigned)0x8c1f88e6);
  if ((in_T == '\x01') || ((short)unaff_r14[0x13] == 0)) {
    uVar3 = 0xfffffff6;
  }
  else {
    ar4_00 = (uint)(short)unaff_r14[0x14];
    if ((ar4_00 == 2) || (ar4_00 == 4)) {
      if (((int *)(unsigned long)*(unsigned *)(unsigned)(*unaff_r14 + 0x1c)) == unaff_r14) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 24)), sh4_tmu_1f88e6(ar4_00,ar5,ar6,ar7));
        while (puVar2 = ((void *)(unsigned)0x8c1f88f0), unaff_r14[0x10] != 1) {
          a4 = (int)(short)unaff_r14[0x14];
          if ((a4 != 2) && (a4 != 4)) goto LAB_8c1f36d4;
          a5 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(puVar1)))(a4,ar5,ar6,ar7));
          ar4_00 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(puVar2)))(uVar3,a5,ar6,ar7));
          if (0xee6b28 < ar4_00) {
            return 0xffffffeb;
          }
          ar5 = 0xee6b28;
          (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*unaff_r14 + 0x3c) + 0x48))))(ar4_00,0xee6b28,ar6,ar7));
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(puVar1)))(ar4_00,ar5,ar6,ar7));
        uVar4 = (uint)0x61b;
        do {
          ar5 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(puVar1)))(ar4_00,ar5,ar6,ar7));
          ar4_00 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(puVar2)))(uVar3,ar5,ar6,ar7));
        } while (ar4_00 < uVar4);
        uVar3 = 0xfffffff3;
        if (((short)unaff_r14[0x14] == 2) || ((short)unaff_r14[0x14] == 4)) {
          if (((int *)(unsigned long)*(unsigned *)(unsigned)(*unaff_r14 + 0x1c)) == unaff_r14) {
            (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*unaff_r14 + 0xc) + 0x14))))(unaff_r14[0xf],0xfffffff3,ar6,ar7));
            *(undefined2 *)(unsigned)(unaff_r14 + 0x12) = 3;
            uVar3 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c1f2f98(unaff_r14,uVar3,ar6,ar7));
          }
          else {
            uVar3 = 0xfffffff3;
          }
        }
        else {
          *(undefined2 *)(unsigned)(unaff_r14 + 0x14) = 0;
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0xfffffff3;
      }
    }
    else {
LAB_8c1f36d4:
      *(undefined2 *)(unsigned)(unaff_r14 + 0x14) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c1f3682\n.set _FUN_8c1f3682, _FUN_8c1f3682_def\n");
