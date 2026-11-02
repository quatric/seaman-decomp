#include "../decls.h"
undefined4 FUN_8c217e18_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  float fVar2;
  double in_dr0;
  double dVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar10;
  double dVar9;
  undefined4 in_fr9;
  double dVar11;
  undefined4 in_fr11;
  double dVar12;
  undefined8 in_xd0;
  undefined8 in_xd2;
  double in_xd4;
  float in_xf6;
  float in_xf7;
  undefined8 in_xd8;
  float in_xf10;
  float in_xf11;
  float in_xf12;
  float in_xf13;
  float in_xf14;
  float in_xf15;
  bool bVar13;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  double dVar3;
  
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 8),*(undefined4 *)(ar4 + 0xc));
    fVar10 = *(float *)(ar4 + 0x10);
    pdVar1 = (double *)(ar4 + 0x14);
  }
  else {
    dVar6 = *(double *)(ar4 + 8);
    in_xd4 = *(double *)(ar4 + 0x10);
    fVar10 = (float)((ulonglong)*(undefined8 *)(ar4 + 0x18) >> 0x20);
    pdVar1 = (double *)(ar4 + 0x20);
  }
  dVar9 = (double)CONCAT44(fVar10,0x3f800000);
                    
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar6,0);
    fVar7 = (float)((ulonglong)dVar6 >> 0x20);
    fVar5 = (float)in_xd0 * fVar2 + SUB84(in_xd4,0) * fVar7 + (float)in_xd8 * 1.0 + in_xf12 * fVar10
    ;
    fVar5 = (float)((ulonglong)in_xd0 >> 0x20) * fVar2 + (float)((ulonglong)in_xd4 >> 0x20) * fVar7
            + (float)((ulonglong)in_xd8 >> 0x20) * 1.0 + in_xf13 * fVar10;
    fVar5 = (float)in_xd2 * fVar2 + in_xf6 * fVar7 + in_xf10 * 1.0 + in_xf14 * fVar10;
    fVar10 = (float)((ulonglong)in_xd2 >> 0x20) * fVar2 + in_xf7 * fVar7 + in_xf11 * 1.0 +
             in_xf15 * fVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(*(undefined4 *)pdVar1,in_fr9);
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)0x8c4aa4d8);
  }
  else {
    dVar11 = *pdVar1;
  }
  fVar5 = (float)((ulonglong)dVar11 >> 0x20);
  fVar10 = (float)((ulonglong)dVar9 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(in_dr0,0) + fVar5;
    dVar3 = (double)(ulonglong)(uint)fVar2;
    bVar13 = fVar2 < fVar10;
    dVar9 = (double)CONCAT44(fVar10 + fVar5,SUB84(dVar9,0));
  }
  else {
    dVar3 = in_dr0 + dVar11;
    bVar13 = dVar3 < dVar9;
    dVar9 = dVar9 + dVar11;
  }
  fVar10 = SUB84(dVar3,0);
  if (!bVar13) {
    if (in_FPSCR_SZ == '\0') {
      fVar10 = *(undefined4 *)0x8c4aa4d4;
    }
    fVar2 = (float)((ulonglong)dVar9 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar13 = fVar10 < fVar2;
      dVar9 = (double)CONCAT44(1.0 / fVar2,fVar10);
    }
    else {
      bVar13 = (double)CONCAT44(0x3f800000,fVar10) < dVar9;
      dVar9 = (double)CONCAT44(0x3f800000,fVar10) / dVar9;
    }
    if (bVar13) {
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),*(undefined4 *)0x8c4aa4a8);
        dVar3 = (double)CONCAT44(*(undefined4 *)0x8c4aa4dc,*(undefined4 *)0x8c4aa4e0);
      }
      else {
        dVar3 = *(undefined4 *)0x8c4aa4dc;
      }
      fVar10 = SUB84(dVar9,0);
      if (in_FPSCR_PR == '\0') {
        dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar10,SUB84(dVar3,0) * fVar10)
        ;
      }
      else {
        dVar3 = dVar3 * dVar9 * dVar9;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(fVar5,((undefined1 *)3)[0x8c4aa4a8]);
        pdVar1 = (double *)(0x8c4aa4a8 + 4);
      }
      else {
        pdVar1 = (double *)(0x8c4aa4a8 + 5);
      }
      fVar5 = (float)((ulonglong)dVar9 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar5,SUB84(dVar3,0));
      }
      else {
        dVar3 = dVar3 * dVar9;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar1,in_fr11);
      }
      else {
        dVar12 = *pdVar1;
      }
      if (in_FPSCR_PR == '\0') {
        dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),SUB84(dVar3,0) * fVar5);
      }
      else {
        dVar3 = dVar3 * dVar9;
      }
      uVar8 = (undefined4)((ulonglong)dVar6 >> 0x20);
      dVar9 = dVar6;
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(uVar8,fVar10);
      }
      fVar5 = (float)((ulonglong)dVar11 >> 0x20);
      fVar10 = (float)((ulonglong)dVar3 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar9 = (double)CONCAT44(((float)((ulonglong)dVar9 >> 0x20) - fVar5) * fVar10,SUB84(dVar9,0)
                                );
      }
      else {
        dVar9 = (dVar9 - dVar11) * dVar3;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),((undefined1 *)2)[0x8c4aa4c4]);
      }
      if (in_FPSCR_PR == '\0') {
        dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) + SUB84(dVar11,0),SUB84(dVar9,0))
        ;
      }
      else {
        dVar9 = dVar9 + dVar11;
      }
      dVar4 = dVar6;
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(uVar8,SUB84(dVar9,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar5,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 + dVar11;
      }
      if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar9 >> 0x20) <= SUB84(dVar9,0)) {
        if (in_FPSCR_SZ == '\0') {
          dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)0x8c4aa4c4);
        }
        if (in_FPSCR_PR == '\0') {
          dVar11 = (double)CONCAT44(fVar5,(float)((ulonglong)dVar4 >> 0x20) * fVar10 +
                                          SUB84(dVar11,0));
        }
        dVar9 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(SUB84(dVar6,0),SUB84(dVar4,0));
        }
        fVar10 = (float)((ulonglong)dVar11 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar13 = SUB84(dVar11,0) < SUB84(dVar9,0);
          dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) - fVar10,SUB84(dVar9,0));
        }
        else {
          bVar13 = dVar11 < dVar9;
          dVar9 = dVar9 - dVar11;
        }
        if (!bVar13) {
          if (in_FPSCR_PR == '\0') {
            dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) * SUB84(dVar3,0),
                                     SUB84(dVar9,0));
          }
          else {
            dVar9 = dVar9 * dVar3;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),((undefined1 *)3)[0x8c4aa4c4]);
          }
          fVar5 = (float)((ulonglong)dVar12 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) + fVar5,SUB84(dVar9,0));
          }
          else {
            dVar9 = dVar9 + dVar12;
          }
          if (in_FPSCR_SZ == '\0') {
            in_xd4 = (double)CONCAT44(SUB84(dVar6,0),SUB84(dVar9,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar11 = (double)CONCAT44((float)((ulonglong)in_xd4 >> 0x20) + fVar10,SUB84(in_xd4,0));
          }
          else {
            dVar11 = in_xd4 + dVar11;
          }
          if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar9 >> 0x20) <= SUB84(dVar9,0)) {
            if (in_FPSCR_SZ == '\0') {
              dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),((undefined1 *)1)[0x8c4aa4c4]);
            }
            if (in_FPSCR_PR == '\0') {
              bVar13 = (float)((ulonglong)dVar11 >> 0x20) * SUB84(dVar3,0) + fVar5 < SUB84(dVar11,0)
              ;
            }
            else {
              bVar13 = dVar12 < dVar11;
            }
            if (!bVar13) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c217e18\n.set _FUN_8c217e18, _FUN_8c217e18_def\n");
