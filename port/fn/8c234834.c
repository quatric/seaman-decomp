#include "../decls.h"
uint FUN_8c234834_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
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
  undefined8 in_dr0;
  undefined4 uVar12;
  float fVar13;
  float fVar15;
  undefined4 in_fr5;
  undefined4 in_fr4;
  double in_dr14;
  undefined8 in_xd14;
  bool bVar16;
  undefined4 in_PR;
  int a4;
  undefined1 *a5;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  int aiStack_50 [11];
  undefined8 uStack_24;
  double dVar14;
  
  uVar12 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    puVar10 = (undefined8 *)((int)&uStack_24 + 4);
    uStack_24 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_24);
  }
  else {
    puVar10 = &uStack_24;
    uStack_24 = in_xd14;
  }
  *(undefined4 *)((int)puVar10 + -4) = in_PR;
  puVar6 = &DAT_8c4aa3d4;
  *(undefined4 *)((int)puVar10 + -0x1c) = ar5;
  DAT_8c277b10 = 0xfffffffe;
  _DAT_8c4aa3d4 = *(uint *)(_DAT_8c4aabdc + 8);
  _DAT_8c4aa3dc = _DAT_8c4aa3d4 & 0xfc000000;
  puVar5 = &DAT_8c4aa3d8;
  _DAT_8c4aa3d8 = _DAT_8c4aa3d4 >> 0x18 & 0x1c;
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  }
  else {
    in_xd14 = CONCAT44(in_fr4,in_fr5);
  }
  _DAT_8c4aa3d0 = (undefined4 *)((_DAT_8c4aa3d4 & 0x3ffffff | 0xe0000000) + 0x10);
  _DAT_ff000038 = _DAT_8c4aa3d8;
  _DAT_ff00003c = _DAT_8c4aa3d8;
  *_DAT_8c4aa3d0 = _DAT_8c4aa390;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = _DAT_8c4aa3c0;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = _DAT_8c4aa3c4;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = _DAT_8c4aa3cc;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = _DAT_8c4aa3c8;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + 8;
  if (in_FPSCR_SZ == '\0') {
    dVar14 = (double)CONCAT44(_DAT_8c4aa394,(float)(int)(short)((uint)ar4 >> 0x10));
  }
  else {
    dVar14 = (double)CONCAT44((*(float *)0x8c4aa398),_DAT_8c4aa394);
  }
  if (in_FPSCR_PR == '\0') {
    fVar15 = (float)((ulonglong)dVar14 >> 0x20);
    fVar13 = SUB84(dVar14,0) * fVar15;
    dVar14 = (double)CONCAT44(fVar15,fVar13);
    a4 = (int)fVar13;
  }
  else {
    dVar14 = dVar14 * dVar14;
    a4 = (int)dVar14;
  }
  fVar13 = (float)((ulonglong)dVar14 >> 0x20);
  dVar14 = (double)CONCAT44(fVar13,(float)(int)(short)ar4);
  if (in_FPSCR_PR == '\0') {
    fVar13 = (float)(int)(short)ar4 * fVar13;
  }
  else {
    fVar13 = SUB84(dVar14 * dVar14,0);
  }
  dVar14 = (double)(ulonglong)(uint)fVar13;
  if (in_FPSCR_PR == '\0') {
    bVar16 = SUB84(in_dr14,0) < 0.0;
    a5 = (undefined1 *)(int)fVar13;
  }
  else {
    bVar16 = in_dr14 < dVar14;
    a5 = (undefined1 *)(int)dVar14;
  }
  if (bVar16) {
    puVar6 = (undefined1 *)0x2d;
    puVar5 = a5;
    FUN_8c2340a0(a4,a5,0x2d,ar7);
    fVar13 = (*(float *)0x8c4aa398);
    if (in_FPSCR_SZ == '\0') {
      fVar13 = _DAT_8c4aa394;
    }
    dVar14 = (double)CONCAT44(fVar13,0xbf800000);
    if (in_FPSCR_PR == '\0') {
      in_dr14 = (double)(ulonglong)(uint)(SUB84(in_dr14,0) * -1.0);
    }
    else {
      in_dr14 = in_dr14 * dVar14;
    }
    if (in_FPSCR_PR == '\0') {
      a4 = (int)((float)(int)(short)a4 + fVar13);
    }
    else {
      a4 = (int)((double)CONCAT44(uVar12,(float)(int)(short)a4) + dVar14);
    }
  }
  ar4_00 = (undefined1 *)((int)puVar10 + -0x18);
  if (in_FPSCR_SZ == '\0') {
    puVar11 = (undefined1 *)((int)puVar10 + -0x20);
    *(int *)((int)puVar10 + -0x20) = SUB84(in_dr14,0);
  }
  else {
    puVar11 = (undefined1 *)((int)puVar10 + -0x24);
    *(undefined8 *)((int)puVar10 + -0x24) = in_xd14;
  }
  *(undefined4 *)(puVar11 + -4) = 5;
  *(char **)(puVar11 + -8) = s__0__f_8c26d958;
  FUN_8c014334(ar4_00,puVar5,puVar6,ar7,*(undefined4 *)(puVar11 + -8));
  iVar2 = log_message(ar4_00,puVar5,puVar6,ar7);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      if (ar4_00[iVar4] == '.') break;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  iVar4 = *(int *)(puVar11 + 4) - iVar4;
  iVar8 = iVar2 + iVar4;
  puVar5 = ar4_00 + iVar8 + 1;
  for (iVar7 = iVar8; iVar4 <= iVar7; iVar7 = iVar7 + -1) {
    puVar6 = ar4_00 + iVar2;
    iVar2 = iVar2 + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *puVar6;
  }
  iVar2 = 0;
  *(undefined1 **)(puVar11 + 4) = ar4_00;
  if (0 < iVar4) {
    puVar5 = (undefined1 *)0x30;
    do {
      iVar2 = iVar2 + 1;
      *ar4_00 = 0x30;
      ar4_00 = ar4_00 + 1;
    } while (iVar2 < iVar4);
  }
  iVar2 = 0;
  pcVar9 = *(char **)(puVar11 + 4);
  if (0 < iVar8) {
    do {
      fVar13 = SUB84(dVar14,0);
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      FUN_8c2340a0(a4,a5,(int)cVar1,puVar5);
      if (in_FPSCR_SZ == '\0') {
        fVar13 = _DAT_8c4aa394;
      }
      iVar2 = iVar2 + 1;
      if (in_FPSCR_PR == '\0') {
        fVar15 = (float)(int)(short)a4 + fVar13;
        dVar14 = (double)CONCAT44(fVar15,fVar13);
        a4 = (int)fVar15;
      }
      else {
        dVar14 = (double)(int)(short)a4;
        dVar14 = dVar14 + dVar14;
        a4 = (int)dVar14;
      }
    } while (iVar2 < iVar8);
  }
  uVar3 = (uint)_DAT_8c4aa3d0 & 0x3ffffff | _DAT_8c4aa3dc;
  *(uint *)(_DAT_8c4aabdc + 8) = uVar3;
  return uVar3;
}

__asm__(".globl _FUN_8c234834\n.set _FUN_8c234834, _FUN_8c234834_def\n");
