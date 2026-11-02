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
uint FUN_8c234834_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c234834";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 *ar4_00;
  char *pcVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 in_dr0 = 0;
  undefined4 uVar12;
  float fVar13;
  float fVar15;
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  double in_dr14 = 0;
  undefined8 in_xd14 = 0;
  bool bVar16;
  undefined4 in_PR = 0;
  int a4;
  undefined1 *a5;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  double dVar14;
  
  uVar12 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    puVar10 = (undefined8 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x24)) + 4);
    (*(undefined8 *)(fr0_ - 0x24)) = CONCAT44(SUB84(in_dr14,0),(undefined4)(*(undefined8 *)(fr0_ - 0x24)));
  }
  else {
    puVar10 = &(*(undefined8 *)(fr0_ - 0x24));
    (*(undefined8 *)(fr0_ - 0x24)) = in_xd14;
  }
  *(undefined4 *)(unsigned)((int)puVar10 + -4) = in_PR;
  puVar6 = ((undefined1 *)(unsigned)0x8c4aa3d4);
  *(undefined4 *)(unsigned)((int)puVar10 + -0x1c) = ar5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c277b10) = 0xfffffffe;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3d4) = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aabdc) + 8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3dc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3d4) & 0xfc000000;
  puVar5 = ((undefined1 *)(unsigned)0x8c4aa3d8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3d8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3d4) >> 0x18 & 0x1c;
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  }
  else {
    in_xd14 = CONCAT44(in_fr4,in_fr5);
  }
  *(unsigned *)0x8c4aa3d0 = (unsigned)(unsigned long)((undefined4 *)(unsigned)(((*(undefined4 *)(unsigned)(unsigned)0x8c4aa3d4) & 0x3ffffff | 0xe0000000) + 0x10));
  (*(undefined4 *)(unsigned)(unsigned)0xff000038) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3d8);
  (*(undefined4 *)(unsigned)(unsigned)0xff00003c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3d8);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3d0 = (unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa390));
  *(unsigned *)0x8c4aa3d0 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3d0) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3d0 = (unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa3c0));
  *(unsigned *)0x8c4aa3d0 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3d0) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3d0 = (unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa3c4));
  *(unsigned *)0x8c4aa3d0 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3d0) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3d0 = (unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa3cc));
  *(unsigned *)0x8c4aa3d0 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3d0) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3d0 = (unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa3c8));
  *(unsigned *)0x8c4aa3d0 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3d0) + 8);
  if (in_FPSCR_SZ == '\0') {
    dVar14 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa394),(float)(int)(short)((uint)ar4 >> 0x10));
  }
  else {
    dVar14 = CONCAT44D((*(float *)(unsigned)0x8c4aa398),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa394));
  }
  if (in_FPSCR_PR == '\0') {
    fVar15 = F32HI(dVar14);
    fVar13 = F32LO(dVar14) * fVar15;
    dVar14 = CONCAT44D(fVar15,fVar13);
    a4 = (int)fVar13;
  }
  else {
    dVar14 = dVar14 * dVar14;
    a4 = (int)dVar14;
  }
  fVar13 = F32HI(dVar14);
  dVar14 = CONCAT44D(fVar13,(float)(int)(short)ar4);
  if (in_FPSCR_PR == '\0') {
    fVar13 = (float)(int)(short)ar4 * fVar13;
  }
  else {
    fVar13 = SUB84(dVar14 * dVar14,0);
  }
  dVar14 = (double)(ulonglong)(uint)fVar13;
  if (in_FPSCR_PR == '\0') {
    bVar16 = SUB84(in_dr14,0) < 0.0;
    a5 = (undefined1 *)(unsigned)(int)fVar13;
  }
  else {
    bVar16 = in_dr14 < dVar14;
    a5 = (undefined1 *)(unsigned)(int)dVar14;
  }
  if (bVar16) {
    puVar6 = (undefined1 *)(unsigned)0x2d;
    puVar5 = a5;
    (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c2340a0(a4,a5,0x2d,ar7));
    fVar13 = (*(float *)(unsigned)0x8c4aa398);
    if (in_FPSCR_SZ == '\0') {
      fVar13 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa394);
    }
    dVar14 = CONCAT44D(fVar13,0xbf800000);
    if (in_FPSCR_PR == '\0') {
      in_dr14 = (double)(ulonglong)(uint)(F32LO(in_dr14) * -1.0);
    }
    else {
      in_dr14 = in_dr14 * dVar14;
    }
    if (in_FPSCR_PR == '\0') {
      a4 = (int)((float)(int)(short)a4 + fVar13);
    }
    else {
      a4 = (int)(CONCAT44D(uVar12,(float)(int)(short)a4) + dVar14);
    }
  }
  ar4_00 = (undefined1 *)(unsigned)((int)puVar10 + -0x18);
  if (in_FPSCR_SZ == '\0') {
    puVar11 = (undefined1 *)(unsigned)((int)puVar10 + -0x20);
    *(int *)(unsigned)((int)puVar10 + -0x20) = SUB84(in_dr14,0);
  }
  else {
    puVar11 = (undefined1 *)(unsigned)((int)puVar10 + -0x24);
    *(undefined8 *)(unsigned)((int)puVar10 + -0x24) = in_xd14;
  }
  *(undefined4 *)(unsigned)(puVar11 + -4) = 5;
  *(unsigned *)(unsigned)(puVar11 + -8) = ((undefined1 *)(unsigned)0x8c26d958);
  ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar11 + -8)); *(unsigned *)((((unsigned long)(fr0_ - 84)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 84)) - 8); FUN_8c014334(ar4_00,puVar5,puVar6,ar7); });
  iVar2 = (vsp = ((unsigned long)(fr0_ - 84)), log_message(ar4_00,puVar5,puVar6,ar7));
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      if (ar4_00[iVar4] == '.') break;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  iVar4 = *(int *)(unsigned)(puVar11 + 4) - iVar4;
  iVar8 = iVar2 + iVar4;
  puVar5 = ar4_00 + iVar8 + 1;
  for (iVar7 = iVar8; iVar4 <= iVar7; iVar7 = iVar7 + -1) {
    puVar6 = ar4_00 + iVar2;
    iVar2 = iVar2 + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *puVar6;
  }
  iVar2 = 0;
  *(unsigned *)(unsigned)(puVar11 + 4) = ar4_00;
  if (0 < iVar4) {
    puVar5 = (undefined1 *)(unsigned)0x30;
    do {
      iVar2 = iVar2 + 1;
      *ar4_00 = 0x30;
      ar4_00 = ar4_00 + 1;
    } while (iVar2 < iVar4);
  }
  iVar2 = 0;
  pcVar9 = ((char *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + 4));
  if (0 < iVar8) {
    do {
      fVar13 = F32LO(dVar14);
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c2340a0(a4,a5,(int)cVar1,puVar5));
      if (in_FPSCR_SZ == '\0') {
        fVar13 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa394);
      }
      iVar2 = iVar2 + 1;
      if (in_FPSCR_PR == '\0') {
        fVar15 = (float)(int)(short)a4 + fVar13;
        dVar14 = CONCAT44D(fVar15,fVar13);
        a4 = (int)fVar15;
      }
      else {
        dVar14 = (double)(int)(short)a4;
        dVar14 = dVar14 + dVar14;
        a4 = (int)dVar14;
      }
    } while (iVar2 < iVar8);
  }
  uVar3 = (uint)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3d0) & 0x3ffffff | (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3dc);
  *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aabdc) + 8) = uVar3;
  return uVar3;
}

__asm__(".globl _FUN_8c234834\n.set _FUN_8c234834, _FUN_8c234834_def\n");
