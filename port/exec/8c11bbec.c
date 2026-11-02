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
undefined4 FUN_8c11bbec_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11bbec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  int in_r0 = (int)(unsigned long)vin0;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int a5;
  int a6;
  uint uVar6;
  int iVar7;
  int unaff_r13 = 0;
  int a5_00;
  int *piVar8;
  int unaff_r14 = 0;
  undefined1 *puVar9;
  double in_dr0 = 0;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  undefined4 in_PR = 0;
  byte in_FPSCR_CAUSE = 0;
  byte bVar10;
  byte in_FPSCR_DN = 0;
  byte bVar11;
  byte in_FPSCR_PR = 0;
  byte bVar12;
  byte in_FPSCR_SZ = 0;
  byte bVar13;
  
  puVar1 = ((void *)(unsigned)0x8c013ef4);
  if (in_FPSCR_SZ == 0) {
    puVar9 = ((undefined1 *)(fr0_ - 0x8));
  }
  else {
    puVar9 = ((undefined1 *)(fr0_ - 0xc));
  }
  *(undefined4 *)(unsigned)(puVar9 + -4) = in_PR;
  uVar6 = *(uint *)(unsigned)(in_r0 + unaff_r14);
  *(short *)(unsigned)(unaff_r14 + 0x28) = (short)*ar4;
  iVar7 = uVar6 * 4;
  *(short *)(unsigned)(unaff_r14 + 0x2a) = (short)ar4[1];
  (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(unaff_r14 + 0x2c),ar5,iVar7,ar7));
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  bVar10 = 0;
  bVar11 = 0;
  bVar12 = (byte)((uVar3 & 0x80000) >> 0x13);
  bVar13 = (byte)((uVar3 & 0x100000) >> 0x14);
  (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(unaff_r14 + 0x34),unaff_r13 + iVar7,iVar7,ar7));
  a5_00 = unaff_r13 + iVar7 + iVar7;
  uVar3 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 | (uint)bVar13 << 0x14)
          & 0xffe7ffff;
  bVar10 = 0;
  bVar11 = 0;
  bVar12 = (byte)((uVar3 & 0x80000) >> 0x13);
  bVar13 = (byte)((uVar3 & 0x100000) >> 0x14);
  a5 = a5_00;
  a6 = iVar7;
  (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(unaff_r14 + 0x38),a5_00,iVar7,ar7));
  puVar2 = ((void *)(unsigned)0x8c11fb98);
  uVar5 = 0;
  piVar8 = (int *)(unsigned)(a5_00 + iVar7);
  uVar3 = 0;
  iVar7 = 0;
  if (bVar13 == 0) {
    in_fr15 = (float)(*(undefined1 *)(unsigned)0x8c11bdfc);
  }
  if (uVar6 != 0) {
    do {
      *(int *)(unsigned)(puVar9 + -8) = *(int *)(unsigned)(unaff_r14 + 0x30) + iVar7;
      uVar4 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 |
              (uint)bVar13 << 0x14) & 0xffe7ffff;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = (byte)((uVar4 & 0x80000) >> 0x13);
      bVar13 = (byte)((uVar4 & 0x100000) >> 0x14);
      (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(puVar2)))(uVar5,a5,a6,ar7));
      uVar3 = uVar3 + 1;
      uVar4 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 |
              (uint)bVar13 << 0x14) & 0xffe7ffff;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = (byte)((uVar4 & 0x80000) >> 0x13);
      bVar13 = (byte)((uVar4 & 0x100000) >> 0x14);
      if (bVar12 == 0) {
        in_dr0 = CONCAT44D(F32HI(in_dr0) * in_fr15,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 * CONCAT44D(in_fr14,in_fr15);
      }
      if (bVar13 == 0) {
        *(int *)(unsigned)*(unsigned *)(unsigned)(puVar9 + -8) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *((double *)(unsigned long)*(unsigned *)(unsigned)(puVar9 + -8)) = in_dr0;
      }
      iVar7 = iVar7 + 4;
    } while (uVar3 < uVar6);
  }
  *(int *)(unsigned)(unaff_r14 + 0x44) = *piVar8 * 4 + *(int *)(unsigned)(unaff_r14 + 0x3c);
  *(int *)(unsigned)(unaff_r14 + 0x48) = piVar8[1] * 4 + *(int *)(unsigned)(unaff_r14 + 0x3c);
  uVar5 = (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(unaff_r14 + 0x3c),piVar8 + 2,
                            uVar6 * (*(ushort *)(unsigned)(unaff_r14 + 0x4c) + 1) * 4,ar7));
  return uVar5;
}

__asm__(".globl _FUN_8c11bbec\n.set _FUN_8c11bbec, _FUN_8c11bbec_def\n");
