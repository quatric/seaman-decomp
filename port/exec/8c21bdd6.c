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
undefined4
FUN_8c21bdd6_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c21bdd6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined1 *a5;
  uint ar6_00;
  undefined4 uVar2;
  uint *unaff_r14 = 0;
  float fVar3;
  float in_fr4 = 0;
  char in_T = 0;
  
  if (in_T == '\x01') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad80) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0c0) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) = 0;
  }
  else {
    fVar3 = (float)(int)ar5[1];
    if ((int)ar5[1] < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    if (fVar3 <= in_fr4) {
      return ain0;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad80) = *(ushort *)(unsigned)((int)ar5 + 10) & 0xff3f;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0c0) = (ushort)((*(ushort *)(unsigned)((int)ar5 + 10) & 0xc0) != 0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) = *(ushort *)(unsigned)(ar5 + 2);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad48) = *ar5;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad58) = ar5[1];
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad5c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad60) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa340) = (&(*(undefined4 *)(unsigned)(unsigned)0x8c2759a0))[(*(undefined4 *)(unsigned)(unsigned)0x8c4aad80)];
  uVar2 = 0x20;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) & 1) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa344) = ((void *)0x8c21d108);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa344) = ((void *)0x8c21ce02);
  }
  ar6_00 = (uint)(*(undefined4 *)(unsigned)(unsigned)0x8c4aad82);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) & 2) == 0) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) & 0x2000) == 0) {
      if ((*unaff_r14 & 0x20) == 0) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa348) = ((void *)0x8c21d112);
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa348) = ((void *)0x8c21d11e);
      }
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa348) = ((void *)0x8c21d06c);
    }
  }
  else if ((*unaff_r14 & 0x20) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa348) = ((void *)0x8c21cf22);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa348) = ((void *)0x8c21cfd8);
  }
  a5 = ((undefined1 *)(unsigned)0x8c4aa350);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) & 4) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa350) = ((void *)0x8c21d13c);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa350) = ((void *)0x8c21ce92);
  }
  uVar1 = (uint)(*(undefined4 *)(unsigned)(unsigned)0x8c4ab0c0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0b4) = (&(*(undefined4 *)(unsigned)(unsigned)0x8c2759b4))[uVar1];
  (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0b8) = (&(*(undefined4 *)(unsigned)(unsigned)0x8c2759c4))[uVar1];
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad54) = in_fr4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c236454(uVar1 * 4,((undefined1 *)(unsigned)0x8c4aa350),ar6_00,0x20));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21b908(unaff_r14,a5,ar6_00,uVar2));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2364b2(unaff_r14,a5,ar6_00,uVar2));
  return uVar2;
}

__asm__(".globl _FUN_8c21bdd6\n.set _FUN_8c21bdd6, _FUN_8c21bdd6_def\n");
