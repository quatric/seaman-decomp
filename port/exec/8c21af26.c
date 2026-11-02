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
undefined4 FUN_8c21af26_def(uint *ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c21af26";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint ar5_00;
  undefined4 uVar1;
  undefined1 *ar7_00;
  float fVar2;
  float in_fr4 = 0;
  
  ar7_00 = ((undefined1 *)(unsigned)0x8c4aad82);
  *(unsigned *)0x8c4aa338 = (unsigned)(unsigned long)(((void *)0x8c21a854));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa368) = ((void *)0x8c21a678);
  if (ar5 == (undefined4 *)(unsigned)0x0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad80) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0c0) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) = 0;
  }
  else {
    fVar2 = (float)(int)ar5[1];
    if ((int)ar5[1] < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    if (fVar2 <= in_fr4) {
      return ((undefined1 *)(unsigned)0x8c4aa368);
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad80) = *(ushort *)(unsigned)((int)ar5 + 10) & 0xff3f;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0c0) = (ushort)((*(ushort *)(unsigned)((int)ar5 + 10) & 0xc0) != 0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) = *(ushort *)(unsigned)(ar5 + 2);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad48) = *ar5;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad58) = ar5[1];
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad5c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad60) = 0;
  if (ar6 == (undefined4 *)(unsigned)0x0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad86) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0c2) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad84) = 0;
  }
  else {
    fVar2 = (float)(int)ar6[1];
    if ((int)ar6[1] < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    if (fVar2 <= in_fr4) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad60) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad5c) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad54) = in_fr4;
      return 0xc;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad86) = *(undefined2 *)(unsigned)(ar6 + 2);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad84) = *(ushort *)(unsigned)((int)ar6 + 10) & 0xff3f;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0c2) = (ushort)((*(ushort *)(unsigned)((int)ar6 + 10) & 0xc0) != 0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad64) = *ar6;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad74) = ar6[1];
    (*(undefined4 *)(unsigned)(unsigned)0x8c2759d8) = 0;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad7c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa36c) = (&(*(undefined4 *)(unsigned)(unsigned)0x8c2759dc))[(*(undefined4 *)(unsigned)(unsigned)0x8c4aad84)];
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa370) = ((void *)0x8c21ee94);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa340) = (&(*(undefined4 *)(unsigned)(unsigned)0x8c2759a0))[(*(undefined4 *)(unsigned)(unsigned)0x8c4aad80)];
  uVar1 = 0x20;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) & 1) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa344) = ((void *)0x8c21d108);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa344) = ((void *)0x8c21ce02);
  }
  ar5_00 = (uint)(*(undefined4 *)(unsigned)(unsigned)0x8c4aad82);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) & 2) == 0) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) & 0x2000) == 0) {
      if ((*ar4 & 0x20) == 0) {
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
  else if ((*ar4 & 0x20) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa348) = ((void *)0x8c21cf22);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa348) = ((void *)0x8c21cfd8);
  }
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) & 4) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa350) = ((void *)0x8c21d13c);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa350) = ((void *)0x8c21ce92);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0b4) = ((void *)0x8c21c2ea);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0b8) = ((void *)0x8c21c398);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad54) = in_fr4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad70) = in_fr4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c236454(((undefined1 *)(unsigned)0x8c4aa350),ar5_00,0x20,((undefined1 *)(unsigned)0x8c4aad82)));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aa338)))(vr4,vr5,vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21a942(ar4,ar5_00,uVar1,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2364b2(ar4,ar5_00,uVar1,ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c21af26\n.set _FUN_8c21af26, _FUN_8c21af26_def\n");
