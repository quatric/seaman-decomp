#include "../decls.h"
undefined8 * FUN_8c25b650_def(undefined4 *ar4,int ar5,undefined8 *ar6,int ar7)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined4 *ar6_00;
  undefined4 *ar5_00;
  undefined8 in_dr2;
  double dVar10;
  float fVar11;
  double in_dr4;
  float fVar12;
  undefined8 in_dr14;
  double dVar13;
  bool bVar14;
  char cVar15;
  char cVar16;
  int iStack_38;
  int iStack_2c;
  int iStack_28;
  
  cVar16 = '\0';
  cVar15 = '\0';
  iVar3 = 0;
  iVar6 = 0;
  bVar9 = false;
  if (ar7 < 1) {
    uVar7 = 0xe0000000;
    iVar5 = ar5;
    do {
      puVar4 = ar4 + iVar3 * 4;
      *(undefined4 *)(ar6 + 3) = *puVar4;
      *(undefined4 *)((int)ar6 + 0xc) = puVar4[1];
      *(undefined4 *)(ar6 + 1) = puVar4[2];
      *(undefined4 *)((int)ar6 + 4) = puVar4[3];
      *(undefined4 *)ar6 = uVar7;
      bVar9 = (bool)(bVar9 ^ 1);
      ar6 = ar6 + 4;
      if (bVar9) {
        iVar3 = iVar5 + -1;
        iVar5 = iVar3;
      }
      else {
        iVar3 = iVar6 + 1;
        iVar6 = iVar3;
      }
      ar5 = ar5 + -1;
      if (ar5 == 0) {
        uVar7 = 0xf0000000;
      }
    } while (-1 < ar5);
    return ar6;
  }
                    
  bVar9 = false;
  iStack_28 = 1;
  iStack_2c = ar5 + -1;
  bVar2 = false;
  iVar6 = 1;
  iStack_38 = ar5 + -2;
  dVar10 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),_DAT_8c4aa4d4);
  dVar13 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),1.0 / _DAT_8c4aa4d4);
  puVar4 = ar4;
  ar5_00 = ar4 + iStack_2c * 4;
  do {
    dVar10 = (double)((ulonglong)dVar10 & 0xffffffff00000000);
    if (cVar16 == '\0') {
      in_dr4 = (double)CONCAT44(puVar4[1],SUB84(in_dr4,0));
    }
    else {
      in_dr4 = *(double *)(puVar4 + 1);
    }
    fVar11 = (float)((ulonglong)in_dr4 >> 0x20);
    if (cVar15 == '\0') {
      bVar14 = 0.0 < fVar11;
    }
    else {
      bVar14 = dVar10 < in_dr4;
    }
    ar6_00 = ar4 + iVar6 * 4;
    bVar1 = false;
    fVar12 = SUB84(dVar13,0);
    if (bVar14) {
      if (cVar15 == '\0') {
        bVar14 = fVar11 < fVar12;
      }
      else {
        bVar14 = in_dr4 < dVar13;
      }
      if (!bVar14) goto LAB_8c25b742;
      if (cVar16 == '\0') {
        dVar10 = (double)((ulonglong)(uint)ar5_00[1] << 0x20);
      }
      else {
        dVar10 = *(double *)(ar5_00 + 1);
      }
      fVar11 = (float)((ulonglong)dVar10 >> 0x20);
      if (cVar15 != '\0' || fVar11 <= SUB84(dVar10,0)) goto LAB_8c25b742;
      if (cVar16 == '\0') {
        dVar10 = (double)CONCAT44(fVar11,ar5_00[1]);
      }
      if (cVar15 == '\0') {
        bVar14 = SUB84(dVar10,0) < fVar12;
      }
      else {
        bVar14 = dVar10 < dVar13;
      }
      if (!bVar14) goto LAB_8c25b742;
      if (cVar16 == '\0') {
        fVar11 = (float)ar6_00[1];
      }
      else {
        fVar11 = (float)((ulonglong)*(undefined8 *)(ar6_00 + 1) >> 0x20);
      }
      dVar10 = (double)((ulonglong)(uint)fVar11 << 0x20);
      if (cVar15 != '\0' || fVar11 <= 0.0) goto LAB_8c25b742;
      if (cVar16 == '\0') {
        dVar10 = (double)CONCAT44(fVar11,ar6_00[1]);
      }
      if (cVar15 == '\0') {
        bVar14 = SUB84(dVar10,0) < fVar12;
      }
      else {
        bVar14 = dVar10 < dVar13;
      }
      if (!bVar14) goto LAB_8c25b742;
    }
    else {
LAB_8c25b742:
      bVar1 = true;
    }
    uVar7 = (undefined4)((ulonglong)dVar10 >> 0x20);
    if (bVar1) {
      if (bVar9) {
        *(undefined4 *)(ar6 + 3) = *ar5_00;
        if (cVar16 == '\0') {
          *(undefined4 *)((int)ar6 + 0xc) = ar5_00[1];
          *(undefined4 *)(ar6 + 1) = ar5_00[2];
          dVar10 = (double)CONCAT44(uVar7,ar5_00[3]);
          puVar8 = (undefined8 *)((int)ar6 + 4);
          *(undefined4 *)puVar8 = ar5_00[3];
        }
        else {
          ar6[1] = *(undefined8 *)(ar5_00 + 1);
          *ar6 = *(undefined8 *)(ar5_00 + 2);
          puVar8 = ar6 + -1;
          *puVar8 = *(undefined8 *)(ar5_00 + 3);
        }
        *(undefined4 *)((int)puVar8 + -4) = 0xf0000000;
        bVar9 = false;
        ar6 = (undefined8 *)((int)puVar8 + 0x1c);
      }
      dVar10 = (double)((ulonglong)dVar10 & 0xffffffff00000000);
      if (cVar16 == '\0') {
        in_dr4 = (double)CONCAT44(puVar4[1],SUB84(in_dr4,0));
      }
      else {
        in_dr4 = *(double *)(puVar4 + 1);
      }
      fVar11 = (float)((ulonglong)in_dr4 >> 0x20);
      if (cVar15 == '\0') {
        bVar14 = 0.0 < fVar11;
      }
      else {
        bVar14 = dVar10 < in_dr4;
      }
      if (bVar14) {
        if (cVar15 == '\0') {
          bVar14 = fVar11 < fVar12;
        }
        else {
          bVar14 = in_dr4 < dVar13;
        }
        if (!bVar14) goto LAB_8c25b7c2;
LAB_8c25b7de:
        ar6 = (undefined8 *)FUN_8c25b858(puVar4,ar5_00,ar6_00,ar6);
      }
      else {
LAB_8c25b7c2:
        if (cVar16 == '\0') {
          fVar11 = (float)ar5_00[1];
        }
        else {
          fVar11 = (float)((ulonglong)*(undefined8 *)(ar5_00 + 1) >> 0x20);
        }
        if (cVar15 == '\0' && 0.0 < fVar11) {
          if (cVar16 == '\0') {
            dVar10 = (double)((ulonglong)(uint)ar5_00[1] << 0x20);
          }
          else {
            dVar10 = *(double *)(ar5_00 + 1);
          }
          if (cVar15 == '\0') {
            bVar14 = (float)((ulonglong)dVar10 >> 0x20) < fVar12;
          }
          else {
            bVar14 = dVar10 < dVar13;
          }
          if (bVar14) goto LAB_8c25b7de;
        }
        if (cVar16 == '\0') {
          fVar11 = (float)ar6_00[1];
        }
        else {
          fVar11 = (float)((ulonglong)*(undefined8 *)(ar6_00 + 1) >> 0x20);
        }
        dVar10 = (double)((ulonglong)(uint)fVar11 << 0x20);
        if (cVar15 == '\0' && 0.0 < fVar11) {
          if (cVar16 == '\0') {
            dVar10 = (double)((ulonglong)(uint)ar6_00[1] << 0x20);
          }
          else {
            dVar10 = *(double *)(ar6_00 + 1);
          }
          if (cVar15 == '\0') {
            bVar14 = (float)((ulonglong)dVar10 >> 0x20) < fVar12;
          }
          else {
            bVar14 = dVar10 < dVar13;
          }
          if (bVar14) goto LAB_8c25b7de;
        }
      }
    }
    else {
      if (!bVar9) {
        *(undefined4 *)(ar6 + 3) = *puVar4;
        if (cVar16 == '\0') {
          *(undefined4 *)((int)ar6 + 0xc) = puVar4[1];
          *(undefined4 *)(ar6 + 1) = puVar4[2];
          dVar10 = (double)CONCAT44(uVar7,puVar4[3]);
          puVar8 = (undefined8 *)((int)ar6 + 4);
          *(undefined4 *)puVar8 = puVar4[3];
        }
        else {
          ar6[1] = *(undefined8 *)(puVar4 + 1);
          *ar6 = *(undefined8 *)(puVar4 + 2);
          puVar8 = ar6 + -1;
          *puVar8 = *(undefined8 *)(puVar4 + 3);
        }
        *(undefined4 *)((int)puVar8 + -4) = 0xe0000000;
        bVar9 = true;
        ar6 = (undefined8 *)((int)puVar8 + 0x1c);
      }
      *(undefined4 *)(ar6 + 3) = *ar5_00;
      if (cVar16 == '\0') {
        *(undefined4 *)((int)ar6 + 0xc) = ar5_00[1];
        *(undefined4 *)(ar6 + 1) = ar5_00[2];
        dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),ar5_00[3]);
        puVar8 = (undefined8 *)((int)ar6 + 4);
        *(undefined4 *)puVar8 = ar5_00[3];
      }
      else {
        ar6[1] = *(undefined8 *)(ar5_00 + 1);
        *ar6 = *(undefined8 *)(ar5_00 + 2);
        puVar8 = ar6 + -1;
        *puVar8 = *(undefined8 *)(ar5_00 + 3);
      }
      *(undefined4 *)((int)puVar8 + -4) = 0xe0000000;
      ar6 = (undefined8 *)((int)puVar8 + 0x1c);
    }
    bVar2 = (bool)(bVar2 ^ 1);
    if (bVar2) {
      iVar6 = iStack_2c + -1;
      iStack_2c = iVar6;
    }
    else {
      iVar6 = iStack_28 + 1;
      iStack_28 = iVar6;
    }
    iStack_38 = iStack_38 + -1;
    puVar4 = ar5_00;
    ar5_00 = ar6_00;
    if (iStack_38 < 1) {
      if (bVar9) {
        *(undefined4 *)(ar6 + 3) = *ar6_00;
        if (cVar16 == '\0') {
          *(undefined4 *)((int)ar6 + 0xc) = ar6_00[1];
          *(undefined4 *)(ar6 + 1) = ar6_00[2];
          puVar8 = (undefined8 *)((int)ar6 + 4);
          *(undefined4 *)puVar8 = ar6_00[3];
        }
        else {
          ar6[1] = *(undefined8 *)(ar6_00 + 1);
          *ar6 = *(undefined8 *)(ar6_00 + 2);
          puVar8 = ar6 + -1;
          *puVar8 = *(undefined8 *)(ar6_00 + 3);
        }
        *(undefined4 *)((int)puVar8 + -4) = 0xf0000000;
        ar6 = (undefined8 *)((int)puVar8 + 0x1c);
      }
      return ar6;
    }
  } while( true );
}

__asm__(".globl _FUN_8c25b650\n.set _FUN_8c25b650, _FUN_8c25b650_def\n");
