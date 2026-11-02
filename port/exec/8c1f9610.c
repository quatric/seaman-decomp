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
undefined4 FUN_8c1f9610_def(undefined4 *ar4,undefined4 *ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c1f9610";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);
  int s4 = *(int *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined4 ar4_00;
  undefined4 ar5_00;
  int ar6_00;
  int ar7_00;
  uint uVar3;
  int unaff_r9 = 0;
  int unaff_r10 = 0;
  
  ar5_00 = 1;
  ar4_00 = 0xffffffff;
  if (s0 == 0) {
    unaff_r10 = 0;
  }
  else if (s0 == 1) {
    unaff_r10 = 1;
  }
  else if (s0 == 2) {
    unaff_r10 = -1;
  }
  if (s4 == 0) {
    unaff_r9 = 0;
  }
  else if (s4 == 1) {
    unaff_r9 = 1;
  }
  else if (s4 == 2) {
    unaff_r9 = -1;
  }
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c1f9150(0xffffffff,1,ar6,ar7));
  puVar1 = ((void *)(unsigned)0x8c1f9284);
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c1f9284(ar4_00,ar5_00,ar6_00,ar7_00));
  puVar2 = ((void *)(unsigned)0x8c1f8c80);
  (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)(ar4));
  (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(ar5));
  if (ar6 == 1) {
    uVar3 = 0;
    if (0 < ar7) {
      do {
        if ((uVar3 & 7) == 0) {
          (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(ar4_00,ar5_00,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar2)))(ar4_00,ar5_00,ar6_00,ar7_00));
        }
        uVar3 = uVar3 + 1;
        *(undefined1 *)(unsigned)(*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(*(undefined1 *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x30))));
        (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)((undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x30)) + unaff_r10)));
        (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)((undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)) + unaff_r9)));
      } while ((int)uVar3 < ar7);
    }
  }
  else if (ar6 == 2) {
    uVar3 = 0;
    if (0 < ar7) {
      do {
        if ((uVar3 & 7) == 0) {
          (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(ar4_00,ar5_00,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar2)))(ar4_00,ar5_00,ar6_00,ar7_00));
        }
        uVar3 = uVar3 + 1;
        *(undefined2 *)(unsigned)(*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(*(undefined2 *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x30))));
        (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)((undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x30)) + unaff_r10 * 2)));
        (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)((undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)) + unaff_r9 * 2)));
      } while ((int)uVar3 < ar7);
    }
  }
  else if ((ar6 == 4) && (uVar3 = 0, 0 < ar7)) {
    do {
      if ((uVar3 & 7) == 0) {
        (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(ar4_00,ar5_00,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar2)))(ar4_00,ar5_00,ar6_00,ar7_00));
      }
      uVar3 = uVar3 + 1;
      *((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)) = *((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x30));
      (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x30)) + unaff_r10));
      (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)) + unaff_r9));
    } while ((int)uVar3 < ar7);
  }
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c1f8fc8(ar4_00,ar5_00,ar6_00,ar7_00));
  return 0;
}

__asm__(".globl _FUN_8c1f9610\n.set _FUN_8c1f9610, _FUN_8c1f9610_def\n");
