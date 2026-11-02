#include "../decls.h"
undefined4 FUN_8c234fd0_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 *ar7)

{
  undefined4 uVar1;
  double *pdVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int a5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  double dVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  double in_dr6;
  undefined4 uVar14;
  undefined4 uVar15;
  double in_dr8;
  undefined4 uVar16;
  double in_dr10;
  double dVar17;
  undefined8 in_dr12;
  undefined8 in_dr14;
  float fVar19;
  double dVar18;
  double in_xd4;
  double in_xd6;
  double in_xd8;
  double in_xd12;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_3c [16];
  undefined8 uStack_2c;
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)in_dr14,(undefined4)uStack_24);
                    
    (*(uint*)((uchar*)&uStack_24+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar8 = &uStack_2c;
    uStack_2c = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar8 = (undefined8 *)auStack_3c;
    uStack_24 = in_xd14;
    uStack_2c = in_dr14;
  }
  *(undefined4 *)((int)puVar8 + -4) = in_PR;
  *(undefined4 *)((int)puVar8 + -0x20) = ar6;
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(*(undefined4 *)0x8c4aa4e0,*(undefined4 *)0x8c4aa4dc);
    dVar11 = (double)CONCAT44(*(undefined4 *)0x8c4aa4a8,(int)in_dr12);
    dVar18 = (double)CONCAT44(*(undefined4 *)0x8c4aa4a8,(int)in_dr14);
  }
  else {
    dVar11 = *(undefined4 *)0x8c4aa4a8;
    dVar9 = *(undefined4 *)0x8c4aa4e0;
    dVar18 = dVar11;
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = (float)((ulonglong)dVar18 >> 0x20) * (float)((ulonglong)dVar9 >> 0x20);
    dVar11 = (double)((ulonglong)dVar11 & 0xffffffff);
  }
  else {
    fVar19 = (float)((ulonglong)(dVar18 * dVar9) >> 0x20);
    dVar11 = dVar11 * dVar9;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar8 + -0x24) = *(undefined4 *)((int)0x8c4aa4a8 + 0xc);
    dVar11 = (double)(ulonglong)*(uint *)(0x8c4aa4a8 + 2);
  }
  else {
    *(undefined8 *)((int)puVar8 + -0x24) = *(undefined8 *)((int)0x8c4aa4a8 + 0xc);
    in_xd12 = ((undefined1 *)2)[0x8c4aa4a8];
  }
  a5 = ar5;
  FUN_8c236454(0x8c4aa4a8,ar5,ar6,ar7);
  uVar1 = 0xe0000000;
  uVar4 = 0xf0000000;
  dVar18 = (double)CONCAT44(fVar19,0x3f800000);
  if ((*(uint *)((int)puVar8 + -0x20) & 0x80000000) == 0) {
    if ((*(uint *)((int)puVar8 + -0x20) & 0x40) == 0) {
      uVar5 = 0x80002;
      FUN_8c237124(0x80002,a5,ar6,ar7);
      pdVar2 = (double *)FUN_8c236510(uVar5,a5,ar6,ar7);
    }
    else {
      uVar5 = 0x2100002;
      FUN_8c237124(0x2100002,a5,ar6,ar7);
      pdVar2 = (double *)FUN_8c2365e2(uVar5,a5,ar6,ar7);
    }
    puVar7 = (undefined4 *)((int)puVar8 + -0x1c);
    iVar6 = 0;
    if (0 < ar5) {
      do {
        if (in_FPSCR_SZ == '\0') {
          in_dr6 = (double)((ulonglong)in_dr6 & 0xffffffff);
        }
        else {
          in_dr6 = *(double *)((int)puVar8 + -0x24);
        }
        ar6 = 1;
        dVar12 = dVar18;
        dVar9 = in_xd12;
        if (in_FPSCR_SZ == '\0') {
          in_dr6 = (double)((ulonglong)dVar11 & 0xffffffff);
          dVar12 = in_xd4;
          dVar9 = in_xd6;
        }
        in_xd4 = dVar12;
        a5 = iVar6;
        ar7 = puVar7;
        iVar3 = FUN_8c233f1c(ar4,iVar6,1,puVar7);
        iVar6 = iVar6 + 1;
        in_xd6 = dVar9;
        if (iVar3 == 0) {
          uVar5 = *puVar7;
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(*(undefined4 *)((int)puVar8 + -0x18),
                                      *(undefined4 *)((int)puVar8 + -0x14));
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)puVar8 + -0x10),SUB84(in_dr6,0));
          }
          else {
            dVar12 = *(double *)((int)puVar8 + -0x18);
            in_xd4 = *(double *)((int)puVar8 + -0x14);
            in_dr6 = *(double *)((int)puVar8 + -0x10);
          }
          *(undefined4 *)(pdVar2 + 3) = uVar5;
          uVar13 = (undefined4)((ulonglong)dVar12 >> 0x20);
          uVar10 = SUB84(dVar12,0);
          uVar15 = (undefined4)((ulonglong)in_dr6 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)pdVar2 + 0xc) = uVar13;
            *(undefined4 *)(pdVar2 + 1) = uVar10;
            pdVar2 = (double *)((int)pdVar2 + 4);
            *(undefined4 *)pdVar2 = uVar15;
          }
          else {
            pdVar2[1] = dVar12;
            *pdVar2 = in_xd4;
            pdVar2 = pdVar2 + -1;
            *pdVar2 = in_dr6;
          }
          *(undefined4 *)((int)pdVar2 + -4) = uVar1;
          in_xd6 = in_dr6;
          if (in_FPSCR_SZ == '\0') {
            in_dr6 = (double)CONCAT44(uVar15,uVar15);
            in_xd6 = dVar9;
          }
          if (in_FPSCR_PR == '\0') {
            in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),
                                      SUB84(in_dr6,0) + SUB84(dVar18,0));
          }
          else {
            in_dr6 = in_dr6 + dVar18;
          }
          *(undefined4 *)((int)pdVar2 + 0x34) = uVar5;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(pdVar2 + 5) = uVar13;
            *(undefined4 *)((int)pdVar2 + 0x24) = uVar10;
            pdVar2 = pdVar2 + 4;
            *(int *)pdVar2 = SUB84(in_dr6,0);
          }
          else {
            *(double *)((int)pdVar2 + 0x24) = dVar12;
            *(double *)((int)pdVar2 + 0x1c) = in_xd4;
            pdVar2 = (double *)((int)pdVar2 + 0x14);
            *pdVar2 = in_xd6;
          }
          *(undefined4 *)((int)pdVar2 + -4) = uVar1;
          dVar9 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar9 = (double)CONCAT44(uVar10,SUB84(in_dr8,0));
          }
          if (in_FPSCR_PR == '\0') {
            in_dr8 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) + SUB84(dVar18,0),
                                      SUB84(dVar9,0));
          }
          else {
            in_dr8 = dVar9 + dVar18;
          }
          *(undefined4 *)((int)pdVar2 + 0x34) = uVar5;
          uVar10 = (undefined4)((ulonglong)in_dr8 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(pdVar2 + 5) = uVar13;
            *(undefined4 *)((int)pdVar2 + 0x24) = uVar10;
            pdVar2 = pdVar2 + 4;
            *(int *)pdVar2 = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            *(double *)((int)pdVar2 + 0x24) = dVar12;
            *(double *)((int)pdVar2 + 0x1c) = in_dr8;
            pdVar2 = (double *)((int)pdVar2 + 0x14);
            *pdVar2 = in_dr6;
          }
          *(undefined4 *)((int)pdVar2 + -4) = uVar1;
          *(undefined4 *)((int)pdVar2 + 0x34) = uVar5;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(pdVar2 + 5) = uVar13;
            *(undefined4 *)((int)pdVar2 + 0x24) = uVar10;
            pdVar2 = pdVar2 + 4;
            *(int *)pdVar2 = SUB84(in_dr6,0);
          }
          else {
            *(double *)((int)pdVar2 + 0x24) = dVar12;
            *(double *)((int)pdVar2 + 0x1c) = in_dr8;
            pdVar2 = (double *)((int)pdVar2 + 0x14);
            *pdVar2 = in_xd6;
          }
          *(undefined4 *)((int)pdVar2 + -4) = uVar4;
          pdVar2 = (double *)((int)pdVar2 + 0x1c);
        }
      } while (iVar6 < ar5);
    }
  }
  else {
    if ((*(uint *)((int)puVar8 + -0x20) & 0x40) == 0) {
      uVar5 = 0x8000a;
      FUN_8c237124(0x8000a,a5,ar6,ar7);
      pdVar2 = (double *)FUN_8c23666c(uVar5,a5,ar6,ar7);
    }
    else {
      uVar5 = 0x210000a;
      FUN_8c237124(0x210000a,a5,ar6,ar7);
      pdVar2 = (double *)FUN_8c236718(uVar5,a5,ar6,ar7);
    }
    puVar7 = (undefined4 *)((int)puVar8 + -0x1c);
    iVar6 = 0;
    if (0 < ar5) {
      do {
        ar6 = 1;
        dVar9 = dVar18;
        dVar11 = in_xd12;
        if (in_FPSCR_SZ == '\0') {
          dVar9 = in_xd4;
          dVar11 = in_xd6;
        }
        in_xd6 = dVar11;
        in_xd4 = dVar9;
        a5 = iVar6;
        ar7 = puVar7;
        iVar3 = FUN_8c233e70(ar4,iVar6,1,puVar7);
        iVar6 = iVar6 + 1;
        dVar9 = in_xd8;
        if (iVar3 == 0) {
          uVar5 = *puVar7;
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(*(undefined4 *)((int)puVar8 + -0x18),
                                      *(undefined4 *)((int)puVar8 + -0x14));
            dVar11 = (double)CONCAT44(*(undefined4 *)((int)puVar8 + -0x10),
                                      *(undefined4 *)((int)puVar8 + -0xc));
            in_dr8 = (double)CONCAT44(*(undefined4 *)((int)puVar8 + -8),SUB84(in_dr8,0));
          }
          else {
            dVar12 = *(double *)((int)puVar8 + -0x18);
            in_xd4 = *(double *)((int)puVar8 + -0x14);
            dVar11 = *(double *)((int)puVar8 + -0x10);
            in_xd6 = *(double *)((int)puVar8 + -0xc);
            in_dr8 = *(double *)((int)puVar8 + -8);
          }
          *(undefined4 *)(pdVar2 + 3) = uVar5;
          uVar13 = (undefined4)((ulonglong)dVar12 >> 0x20);
          uVar10 = SUB84(dVar12,0);
          uVar14 = (undefined4)((ulonglong)dVar11 >> 0x20);
          uVar15 = SUB84(dVar11,0);
          uVar16 = (undefined4)((ulonglong)in_dr8 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)pdVar2 + 0x14) = uVar13;
            *(undefined4 *)(pdVar2 + 2) = uVar10;
            *(undefined4 *)((int)pdVar2 + 0xc) = uVar14;
            *(undefined4 *)(pdVar2 + 1) = uVar15;
            pdVar2 = (double *)((int)pdVar2 + 4);
            *(undefined4 *)pdVar2 = uVar16;
          }
          else {
            pdVar2[2] = dVar12;
            pdVar2[1] = in_xd4;
            *pdVar2 = dVar11;
            pdVar2[-1] = in_xd6;
            pdVar2 = pdVar2 + -2;
            *pdVar2 = in_dr8;
          }
          *(undefined4 *)((int)pdVar2 + -4) = uVar1;
          dVar9 = in_dr8;
          if (in_FPSCR_SZ == '\0') {
            in_dr8 = (double)CONCAT44(uVar16,uVar16);
            dVar9 = in_xd8;
          }
          *(undefined4 *)((int)pdVar2 + 0x34) = uVar5;
          if (in_FPSCR_PR == '\0') {
            in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),
                                      SUB84(in_dr8,0) + SUB84(dVar18,0));
          }
          else {
            in_dr8 = in_dr8 + dVar18;
          }
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(pdVar2 + 6) = uVar13;
            *(undefined4 *)((int)pdVar2 + 0x2c) = uVar10;
            *(undefined4 *)(pdVar2 + 5) = uVar14;
            *(undefined4 *)((int)pdVar2 + 0x24) = uVar15;
            pdVar2 = pdVar2 + 4;
            *(int *)pdVar2 = SUB84(in_dr8,0);
          }
          else {
            *(double *)((int)pdVar2 + 0x2c) = dVar12;
            *(double *)((int)pdVar2 + 0x24) = in_xd4;
            *(double *)((int)pdVar2 + 0x1c) = dVar11;
            *(double *)((int)pdVar2 + 0x14) = in_xd6;
            pdVar2 = (double *)((int)pdVar2 + 0xc);
            *pdVar2 = dVar9;
          }
          *(undefined4 *)((int)pdVar2 + -4) = uVar1;
          dVar17 = in_xd6;
          if (in_FPSCR_SZ == '\0') {
            dVar17 = (double)CONCAT44(uVar15,SUB84(in_dr10,0));
          }
          if (in_FPSCR_PR == '\0') {
            in_dr10 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar18,0),
                                       SUB84(dVar17,0));
          }
          else {
            in_dr10 = dVar17 + dVar18;
          }
          *(undefined4 *)((int)pdVar2 + 0x34) = uVar5;
          uVar15 = (undefined4)((ulonglong)in_dr10 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(pdVar2 + 6) = uVar13;
            *(undefined4 *)((int)pdVar2 + 0x2c) = uVar10;
            *(undefined4 *)(pdVar2 + 5) = uVar14;
            *(undefined4 *)((int)pdVar2 + 0x24) = uVar15;
            pdVar2 = pdVar2 + 4;
            *(int *)pdVar2 = (int)((ulonglong)in_dr8 >> 0x20);
          }
          else {
            *(double *)((int)pdVar2 + 0x2c) = dVar12;
            *(double *)((int)pdVar2 + 0x24) = in_xd4;
            *(double *)((int)pdVar2 + 0x1c) = dVar11;
            *(double *)((int)pdVar2 + 0x14) = in_dr10;
            pdVar2 = (double *)((int)pdVar2 + 0xc);
            *pdVar2 = in_dr8;
          }
          *(undefined4 *)((int)pdVar2 + -4) = uVar1;
          *(undefined4 *)((int)pdVar2 + 0x34) = uVar5;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(pdVar2 + 6) = uVar13;
            *(undefined4 *)((int)pdVar2 + 0x2c) = uVar10;
            *(undefined4 *)(pdVar2 + 5) = uVar14;
            *(undefined4 *)((int)pdVar2 + 0x24) = uVar15;
            pdVar2 = pdVar2 + 4;
            *(int *)pdVar2 = SUB84(in_dr8,0);
          }
          else {
            *(double *)((int)pdVar2 + 0x2c) = dVar12;
            *(double *)((int)pdVar2 + 0x24) = in_xd4;
            *(double *)((int)pdVar2 + 0x1c) = dVar11;
            *(double *)((int)pdVar2 + 0x14) = in_dr10;
            pdVar2 = (double *)((int)pdVar2 + 0xc);
            *pdVar2 = dVar9;
          }
          *(undefined4 *)((int)pdVar2 + -4) = uVar4;
          pdVar2 = (double *)((int)pdVar2 + 0x1c);
        }
        in_xd8 = dVar9;
      } while (iVar6 < ar5);
    }
  }
  FUN_8c2370dc(pdVar2,a5,ar6,ar7);
  uVar4 = FUN_8c2364b2(pdVar2,a5,ar6,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c234fd0\n.set _FUN_8c234fd0, _FUN_8c234fd0_def\n");
