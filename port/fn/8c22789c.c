#include "../decls.h"
undefined4 * FUN_8c22789c_def(short *ar4,int ar5,uint ar6,undefined4 *ar7)

{
  bool bVar1;
  ulonglong uVar2;
  short *psVar3;
  undefined4 *ar4_00;
  double *pdVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  undefined4 *ar6_00;
  undefined4 *ar5_00;
  float fVar11;
  double in_dr0;
  double dVar12;
  float fVar13;
  double in_dr2;
  float fVar14;
  undefined4 uVar15;
  double in_dr4;
  undefined4 uVar16;
  double in_dr6;
  undefined8 uVar17;
  float fVar19;
  undefined4 in_fr12;
  undefined4 in_fr15;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  double in_xd12;
  double in_xd14;
  bool bVar24;
  char cVar25;
  char cVar26;
  short *psStack_3c;
  uint uStack_34;
  undefined4 uVar18;
  
  cVar26 = '\0';
  cVar25 = '\0';
  uStack_34 = ar6 & 0x3fff;
  iVar7 = 0;
  iVar8 = 0;
  fVar19 = 1.0;
  dVar20 = (double)CONCAT44(0x3f800000,in_fr15);
  psStack_3c = ar4;
  if ((_DAT_8c4aa4f0 & 0x80000000) != 0) {
    dVar20 = (double)CONCAT44(0xbf800000,in_fr15);
  }
  do {
    psVar9 = psStack_3c + 1;
    iVar10 = (int)*psStack_3c;
    psVar3 = psStack_3c + 2;
    dVar21 = dVar20;
    if (cVar26 == '\0') {
      uVar15 = (undefined4)((ulonglong)dVar20 >> 0x20);
      dVar20 = (double)CONCAT44(uVar15,uVar15);
      dVar21 = in_xd14;
    }
    in_xd14 = dVar21;
    if (iVar10 < 0) {
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),-SUB84(dVar20,0));
      iVar10 = -iVar10;
    }
    iVar8 = iVar8 + iVar10;
    iVar6 = 0;
    psStack_3c = psStack_3c + 3;
    iVar10 = iVar10 + -2;
    ar4_00 = (undefined4 *)(*psVar9 * 0x20 + ar5);
    ar5_00 = (undefined4 *)(*psVar3 * 0x20 + ar5);
    do {
      ar6_00 = (undefined4 *)(*psStack_3c * 0x20 + ar5);
      if (cVar26 == '\0') {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*ar4_00);
      }
      if (cVar25 == '\0') {
        bVar24 = fVar19 < SUB84(in_dr2,0);
      }
      else {
        bVar24 = (double)CONCAT44(in_fr12,fVar19) < in_dr2;
      }
      bVar1 = false;
      fVar14 = SUB84(in_dr4,0);
      if (bVar24) {
        if (cVar26 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*ar5_00);
        }
        if (cVar25 == '\0') {
          bVar24 = fVar19 < SUB84(in_dr2,0);
        }
        else {
          bVar24 = (double)CONCAT44(in_fr12,fVar19) < in_dr2;
        }
        if (!bVar24) goto LAB_8c22795e;
        if (cVar26 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*ar6_00);
        }
        if (cVar25 == '\0') {
          bVar24 = fVar19 < SUB84(in_dr2,0);
        }
        else {
          bVar24 = (double)CONCAT44(in_fr12,fVar19) < in_dr2;
        }
        if (!bVar24) goto LAB_8c22795e;
        if (cVar26 == '\0') {
          fVar14 = (float)ar5_00[1];
          in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),fVar14);
          dVar21 = (double)CONCAT44(fVar14,ar4_00[1]);
        }
        else {
          dVar21 = *(double *)(ar5_00 + 1);
        }
        if (cVar25 == '\0') {
          dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) - SUB84(dVar21,0),
                                    SUB84(dVar21,0));
        }
        else {
          dVar21 = dVar21 - dVar21;
        }
        if (cVar26 == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),ar6_00[2]);
          in_dr6 = (double)CONCAT44(ar5_00[2],SUB84(in_dr6,0));
        }
        else {
          in_dr6 = *(double *)(ar5_00 + 2);
        }
        fVar11 = (float)((ulonglong)in_dr6 >> 0x20);
        if (cVar25 == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) - fVar11);
        }
        else {
          dVar21 = dVar21 - in_dr6;
        }
        if (cVar26 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar11);
        }
        if (cVar25 == '\0') {
          dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) * SUB84(dVar21,0),
                                    SUB84(dVar21,0));
        }
        else {
          dVar21 = dVar21 * dVar21;
        }
        if (cVar26 == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),ar4_00[2]);
        }
        if (cVar25 == '\0') {
          dVar12 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    SUB84(in_dr0,0) - SUB84(dVar21,0));
        }
        else {
          dVar12 = in_dr0 - dVar21;
        }
        if (cVar26 == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),ar6_00[1]);
        }
        if (cVar25 == '\0') {
          fVar13 = SUB84(dVar21,0) - fVar14;
          fVar11 = SUB84(dVar12,0) * fVar13;
          in_dr0 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),fVar11);
          in_dr2 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) - fVar11,fVar13);
        }
        else {
          in_dr0 = dVar12 * (dVar21 - in_dr4);
          in_dr2 = (dVar21 - in_dr4) - in_dr0;
        }
        dVar21 = in_dr2;
        if (cVar26 == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar14);
        }
        if (cVar25 == '\0') {
          in_dr4 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) * SUB84(dVar20,0),
                                    SUB84(dVar21,0));
        }
        else {
          in_dr4 = dVar21 * dVar20;
        }
      }
      else {
LAB_8c22795e:
        bVar1 = true;
        in_dr4 = in_xd12;
        if (cVar26 == '\0') {
          in_dr4 = (double)CONCAT44(fVar19,fVar14);
        }
      }
      uVar2 = (ulonglong)in_dr2 >> 0x20;
      in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
      if (cVar25 == '\0') {
        bVar24 = (float)((ulonglong)in_dr4 >> 0x20) < 0.0;
      }
      else {
        bVar24 = in_dr4 < in_dr2;
      }
      if (bVar24) {
        if (iVar6 == 0) {
          if (cVar26 == '\0') {
            uVar16 = ar4_00[1];
            uVar18 = ar4_00[2];
            uVar15 = ar4_00[3];
            ar7[6] = ar4_00[4];
            ar7[3] = uVar15;
            ar7[2] = uVar18;
            puVar5 = (undefined8 *)(ar7 + 1);
            *(undefined4 *)puVar5 = uVar16;
          }
          else {
            uVar23 = *(undefined8 *)(ar4_00 + 1);
            uVar17 = *(undefined8 *)(ar4_00 + 3);
            uVar22 = *(undefined8 *)(ar4_00 + 5);
            *(undefined8 *)(ar7 + 5) = *(undefined8 *)(ar4_00 + 7);
            *(undefined8 *)(ar7 + 1) = uVar22;
            *(undefined8 *)(ar7 + -1) = uVar17;
            puVar5 = (undefined8 *)(ar7 + -3);
            *puVar5 = uVar23;
          }
          *(undefined4 *)((int)puVar5 + -4) = 0xe0000000;
          iVar6 = 1;
          ar7 = (undefined4 *)((int)puVar5 + 0x1c);
        }
        if (cVar26 == '\0') {
          uVar16 = ar5_00[1];
          uVar15 = ar5_00[2];
          uVar18 = ar5_00[3];
          in_dr6 = (double)CONCAT44(uVar18,uVar16);
          in_dr4 = (double)CONCAT44(ar5_00[4],uVar15);
          ar7[6] = ar5_00[4];
          ar7[3] = uVar18;
          ar7[2] = uVar15;
          puVar5 = (undefined8 *)(ar7 + 1);
          *(undefined4 *)puVar5 = uVar16;
        }
        else {
          uVar22 = *(undefined8 *)(ar5_00 + 1);
          uVar17 = *(undefined8 *)(ar5_00 + 3);
          in_dr6 = *(double *)(ar5_00 + 5);
          in_dr4 = *(double *)(ar5_00 + 7);
          *(double *)(ar7 + 5) = in_dr4;
          *(double *)(ar7 + 1) = in_dr6;
          *(undefined8 *)(ar7 + -1) = uVar17;
          puVar5 = (undefined8 *)(ar7 + -3);
          *puVar5 = uVar22;
        }
        *(undefined4 *)((int)puVar5 + -4) = 0xe0000000;
        ar7 = (undefined4 *)((int)puVar5 + 0x1c);
        iVar6 = iVar6 + 1;
      }
      else if (iVar6 != 0) {
        if (cVar26 == '\0') {
          uVar18 = ar5_00[1];
          uVar16 = ar5_00[2];
          in_dr6 = (double)CONCAT44(uVar18,uVar16);
          uVar15 = ar5_00[3];
          in_dr4 = *(double *)(ar5_00 + 3);
          ar7[6] = ar5_00[4];
          ar7[3] = uVar15;
          ar7[2] = uVar16;
          pdVar4 = (double *)(ar7 + 1);
          *(undefined4 *)pdVar4 = uVar18;
        }
        else {
          in_dr6 = *(double *)(ar5_00 + 1);
          uVar22 = *(undefined8 *)(ar5_00 + 3);
          uVar17 = *(undefined8 *)(ar5_00 + 5);
          in_dr4 = *(double *)(ar5_00 + 7);
          *(double *)(ar7 + 5) = in_dr4;
          *(undefined8 *)(ar7 + 1) = uVar17;
          *(undefined8 *)(ar7 + -1) = uVar22;
          pdVar4 = (double *)(ar7 + -3);
          *pdVar4 = in_dr6;
        }
        *(undefined4 *)((int)pdVar4 + -4) = 0xf0000000;
        iVar7 = iVar7 + iVar6 + 1;
        iVar6 = 0;
        ar7 = (undefined4 *)((int)pdVar4 + 0x1c);
      }
      if (bVar1) {
        if (cVar26 == '\0') {
          in_dr2 = (double)CONCAT44((int)uVar2,*ar4_00);
        }
        if (cVar25 == '\0') {
          bVar24 = fVar19 < SUB84(in_dr2,0);
        }
        else {
          bVar24 = (double)CONCAT44(in_fr12,fVar19) < in_dr2;
        }
        if (!bVar24) {
          if (cVar26 == '\0') {
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*ar5_00);
          }
          if (cVar25 == '\0') {
            bVar24 = fVar19 < SUB84(in_dr2,0);
          }
          else {
            bVar24 = (double)CONCAT44(in_fr12,fVar19) < in_dr2;
          }
          if (!bVar24) {
            if (cVar26 == '\0') {
              in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*ar6_00);
            }
            if (cVar25 == '\0') {
              bVar24 = fVar19 < SUB84(in_dr2,0);
            }
            else {
              bVar24 = (double)CONCAT44(in_fr12,fVar19) < in_dr2;
            }
            if (!bVar24) goto LAB_8c227a3a;
          }
        }
        dVar21 = in_xd14;
        if (cVar26 == '\0') {
          dVar21 = (double)CONCAT44(SUB84(dVar20,0),SUB84(in_dr4,0));
        }
        in_dr4 = dVar21;
        ar7 = (undefined4 *)FUN_8c228a5c(ar4_00,ar5_00,ar6_00,ar7);
      }
LAB_8c227a3a:
      psStack_3c = psStack_3c + (ar6 >> 0xe & 3) + 1;
      iVar10 = iVar10 + -1;
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),-SUB84(dVar20,0));
      ar4_00 = ar5_00;
      ar5_00 = ar6_00;
    } while (iVar10 != 0);
    if (iVar6 != 0) {
      if (cVar26 == '\0') {
        uVar15 = ar6_00[1];
        uVar16 = ar6_00[2];
        uVar18 = ar6_00[3];
        in_dr6 = *(double *)(ar6_00 + 2);
        in_dr4 = (double)CONCAT44(ar6_00[4],uVar15);
        ar7[6] = ar6_00[4];
        ar7[3] = uVar18;
        ar7[2] = uVar16;
        puVar5 = (undefined8 *)(ar7 + 1);
        *(undefined4 *)puVar5 = uVar15;
      }
      else {
        uVar17 = *(undefined8 *)(ar6_00 + 1);
        uVar22 = *(undefined8 *)(ar6_00 + 3);
        in_dr6 = *(double *)(ar6_00 + 5);
        in_dr4 = *(double *)(ar6_00 + 7);
        *(double *)(ar7 + 5) = in_dr4;
        *(double *)(ar7 + 1) = in_dr6;
        *(undefined8 *)(ar7 + -1) = uVar22;
        puVar5 = (undefined8 *)(ar7 + -3);
        *puVar5 = uVar17;
      }
      *(undefined4 *)((int)puVar5 + -4) = 0xf0000000;
      iVar7 = iVar7 + iVar6 + 1;
      ar7 = (undefined4 *)((int)puVar5 + 0x1c);
    }
    uStack_34 = uStack_34 - 1;
    if (uStack_34 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar7;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar8;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c22789c\n.set _FUN_8c22789c, _FUN_8c22789c_def\n");
