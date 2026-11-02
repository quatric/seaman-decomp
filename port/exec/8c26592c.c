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
uint FUN_8c26592c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26592c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 268; for (int i_ = 0; i_ < 268; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  byte in_MD = 0;
  byte bVar3;
  byte in_RB = 0;
  byte bVar4;
  byte in_BL = 0;
  byte bVar5;
  byte in_FD = 0;
  byte bVar6;
  byte in_M = 0;
  byte extraout_M = 0;
  byte extraout_M_00 = 0;
  byte extraout_M_01 = 0;
  byte extraout_M_02 = 0;
  byte bVar7;
  byte in_Q = 0;
  byte extraout_Q = 0;
  byte extraout_Q_00 = 0;
  byte extraout_Q_01 = 0;
  byte extraout_Q_02 = 0;
  byte bVar8;
  byte in_IMASK = 0;
  byte bVar9;
  byte in_S = 0;
  byte extraout_S = 0;
  byte extraout_S_00 = 0;
  byte extraout_S_01 = 0;
  byte extraout_S_02 = 0;
  byte bVar10;
  byte in_T = 0;
  byte extraout_T = 0;
  byte extraout_T_00 = 0;
  byte bVar11;
  
  puVar1 = ((void *)(unsigned)0x8c2659dc);
  (*(uint *)(fr0_ - 0xc)) = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  bVar5 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar3 = bVar5 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar9 = (byte)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  bVar6 = (byte)((((uint)in_Q << 8 | (uint)in_M << 9 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar5 = (bVar5 & 0x10) >> 4;
  bVar4 = (bVar3 & 0x20) >> 5;
  bVar3 = ((bVar3 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  *(undefined4 *)(unsigned)(ar4 + 4) = 1;
  (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,ar5,ar6,ar7));
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c2784c0));
  *(undefined4 *)(unsigned)((int)0x190 + *(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c0))) = 0;
  iVar2 = *(int *)(unsigned)puVar1;
  *(int *)(unsigned)(0x18c + iVar2) = *(int *)(unsigned)(0x18c + iVar2) + 1;
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c265b68(&(*(int *)(fr0_ - 0x10)),ar5,ar6,ar7));
  bVar11 = 0;
  bVar7 = extraout_M;
  bVar8 = extraout_Q;
  bVar10 = extraout_S;
  if (0 < (*(int *)(fr0_ - 0x10))) {
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c265c50(&(*(undefined4 *)(fr0_ - 0x18)),&(*(undefined4 *)(fr0_ - 0x14)),ar6,ar7));
    iVar2 = *(int *)(unsigned)(*(int *)(unsigned)puVar1 + (int)0x1a8);
    if (iVar2 == 0) {
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c265ff4((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x14)),ar6,ar7));
      bVar7 = extraout_M_01;
      bVar8 = extraout_Q_01;
      bVar10 = extraout_S_01;
      bVar11 = extraout_T;
    }
    else if (iVar2 == 1) {
      (vsp = ((unsigned long)(fr0_ - 268)), aica_ram_2657ec((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x14)),ar6,ar7));
      bVar7 = extraout_M_02;
      bVar8 = extraout_Q_02;
      bVar10 = extraout_S_02;
      bVar11 = extraout_T_00;
    }
    else {
      bVar11 = 0;
      bVar7 = extraout_M_00;
      bVar8 = extraout_Q_00;
      bVar10 = extraout_S_00;
    }
  }
  return ((*(uint *)(fr0_ - 0xc)) & 0xf) << 4 |
         ((uint)bVar11 | (uint)bVar10 << 1 | (uint)bVar9 << 4 | (uint)bVar8 << 8 | (uint)bVar7 << 9
          | (uint)bVar6 << 0xf | (uint)bVar5 << 0x1c | (uint)bVar4 << 0x1d | (uint)bVar3 << 0x1e) &
         (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c26592c\n.set _FUN_8c26592c, _FUN_8c26592c_def\n");
