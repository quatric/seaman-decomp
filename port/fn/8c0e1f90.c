#include "../decls.h"
undefined4 FUN_8c0e1f90_def(int ar4,undefined4 *ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double in_dr2;
  undefined8 in_xd0;
  bool bVar11;
  undefined4 in_PR;
  char cVar12;
  char cVar13;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uStack_1c = 0;
  uStack_20 = 0;
  if (DAT_8c43826c == '\0') {
    _DAT_8c438268 = CONCAT35((int3)(_DAT_8c438268 >> 0x28),0x100000000);
  }
  uStack_28 = 0;
  if (DAT_8c438270 == '\0') {
    _DAT_8c438268 = _DAT_8c438268 & 0xffffffffffff;
    DAT_8c438270 = '\x01';
  }
  puVar6 = ar5;
  uStack_c = in_PR;
  FUN_8c0dc61c(ar4,ar5,ar6,ar7);
  iVar1 = FUN_8c1003b0(ar5,puVar6,ar6,ar7);
  if ((iVar1 != 1) && (*(int *)(ar4 + 0x9d8) != 0)) {
    *(undefined4 *)(ar4 + 0x9d8) = 0;
  }
  iVar1 = FUN_8c100ce8(ar5,puVar6,ar6,ar7);
  if ((iVar1 == 1) && (*(int *)(ar4 + 0x9d4) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x88))(*(int *)(ar4 + 0x9d4),puVar6,ar6,ar7);
  }
  puVar6 = &uStack_28;
  iVar1 = FUN_8c100e4c(ar5,puVar6,ar6,ar7);
  if ((iVar1 == 1) && (*(int *)(ar4 + 0x9d4) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x184))(*(int *)(ar4 + 0x9d4),puVar6,ar6,ar7)
    ;
  }
  else {
    puVar6 = &uStack_28;
    iVar1 = FUN_8c100e4c(ar5,puVar6,ar6,ar7);
    if ((iVar1 == 2) && (*(int *)(ar4 + 0x9d4) != 0)) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x188))
                (*(int *)(ar4 + 0x9d4),puVar6,ar6,ar7);
    }
  }
  FUN_8c0dc8fc(ar4,ar5,ar6,ar7);
  puVar6 = ar5;
  FUN_8c0dc7e8(ar4,ar5,ar6,ar7);
  iVar1 = FUN_8c10031c(ar5,puVar6,ar6,ar7);
  if ((iVar1 == 1) && (*(int *)(ar4 + 0x9d4) != 0)) {
    iVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 200))
                      (*(int *)(ar4 + 0x9d4),puVar6,ar6,ar7);
    if (iVar1 == 1) {
      puVar6 = ar5;
      FUN_8c0e4298(ar4,ar5,ar6,ar7);
    }
    else {
      puVar6 = (undefined4 *)0x2;
      FUN_8c021720(0x8c2b59d0,2,ar6,ar7);
    }
  }
  iVar1 = FUN_8c1003b0(ar5,puVar6,ar6,ar7);
  if (((iVar1 == 1) && (*(int *)(ar4 + 0x9d8) != 0)) && (*(int *)(ar4 + 0x9d4) == 0)) {
    puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 4);
    if (cVar13 == '\0') {
      uStack_18 = *(undefined4 *)puVar2;
    }
    else {
      uStack_18 = (undefined4)*puVar2;
    }
    puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 8);
    if (cVar13 == '\0') {
      uStack_14 = *(undefined4 *)puVar2;
    }
    else {
      uStack_14 = (undefined4)*puVar2;
    }
    puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0xc);
    if (cVar13 == '\0') {
      uStack_10 = *(undefined4 *)puVar2;
    }
    else {
      uVar8 = *puVar2;
      uStack_10 = (undefined4)uVar8;
      uStack_c = (undefined4)((ulonglong)uVar8 >> 0x20);
    }
    ar6 = auStack_30;
    puVar6 = &uStack_18;
    FUN_8c256294(0,puVar6,ar6,ar7);
    FUN_8c0c90d0(ar5,puVar6,ar6,ar7);
  }
  FUN_8c0d723c(ar4 + 0x22d48,puVar6,ar6,ar7);
  if ((*(int *)(ar4 + 0x9d8) == 0) || (*(int *)(ar4 + 0x9d8) == ar4 + 0x22d48)) {
    if (*(int *)(ar4 + 0x9d8) == ar4 + 0x22d48) {
      iVar1 = FUN_8c100850(ar5,puVar6,ar6,ar7);
      if (iVar1 == 1) {
        FUN_8c0d74cc(ar4 + 0x22d48,puVar6,ar6,ar7);
      }
      else {
        iVar1 = FUN_8c100874(ar5,puVar6,ar6,ar7);
        if (iVar1 == 1) {
          FUN_8c0d74cc(ar4 + 0x22d48,puVar6,ar6,ar7);
        }
      }
      if (cVar13 == '\0') {
        uVar8 = CONCAT44(*(undefined4 *)(ar4 + 0x22d74),_DAT_8c438268);
      }
      else {
        uVar8 = *(undefined8 *)(ar4 + 0x22d74);
      }
      if (((float)uVar8 != (float)((ulonglong)uVar8 >> 0x20)) && (_DAT_8c43826e == 0)) {
        uStack_24 = FUN_8c02190c(0x8c2b59d0,puVar6,ar6,ar7);
        ar6 = (undefined1 *)0x10;
        FUN_8c021994(0x8c2b59d0,uStack_24,0x10,ar7);
        puVar6 = &uStack_24;
        FUN_8c021a8c(0x8c2b59d0,puVar6,ar6,ar7);
        _DAT_8c438268 = CONCAT26(8,_DAT_8c438268);
      }
    }
  }
  else {
    iVar1 = FUN_8c100808(ar5,puVar6,ar6,ar7);
    if (iVar1 == 1) {
      pfVar5 = (float *)(*(int *)(ar4 + 0x9d8) + 0xc);
      puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0xc);
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44(0x3f4ccccd,*(undefined4 *)puVar2);
      }
      else {
        in_xd0 = *puVar2;
        dVar9 = 3848291215769.6;
      }
      if (cVar12 == '\0') {
        fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar13 == '\0') {
        *pfVar5 = fVar7;
      }
      else {
        *(undefined8 *)pfVar5 = in_xd0;
      }
      pdVar3 = (double *)(*(int *)(ar4 + 0x9d8) + 0xc);
      if (cVar13 == '\0') {
        in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar3,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = *pdVar3;
      }
      puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0x1c);
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44(0x428c0000,*(undefined4 *)puVar2);
      }
      else {
        in_xd0 = *puVar2;
        dVar9 = -1.701787568380408e+78;
      }
      if (cVar12 == '\0') {
        bVar11 = (float)((ulonglong)in_dr2 >> 0x20) <
                 SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        bVar11 = in_dr2 < dVar9 - dVar9;
      }
      if (bVar11) {
        pfVar5 = (float *)(*(int *)(ar4 + 0x9d8) + 0xc);
        puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0x1c);
        if (cVar13 == '\0') {
          dVar9 = (double)CONCAT44(0x428c0000,*(undefined4 *)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = -1.701787568380408e+78;
        }
        if (cVar12 == '\0') {
          fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar9 - dVar9,0);
        }
        if (cVar13 == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)pfVar5 = in_xd0;
        }
      }
    }
    else {
      iVar1 = FUN_8c10082c(ar5,puVar6,ar6,ar7);
      if (iVar1 == 1) {
        pfVar5 = (float *)(*(int *)(ar4 + 0x9d8) + 0xc);
        puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0xc);
        if (cVar13 == '\0') {
          dVar9 = (double)CONCAT44(0x3f4ccccd,*(undefined4 *)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = 3848291215769.6;
        }
        if (cVar12 == '\0') {
          fVar7 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar9 + dVar9,0);
        }
        if (cVar13 == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)pfVar5 = in_xd0;
        }
        pdVar3 = (double *)(*(int *)(ar4 + 0x9d8) + 0xc);
        if (cVar13 == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar3,SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *pdVar3;
        }
        puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0x1c);
        if (cVar13 == '\0') {
          dVar9 = (double)CONCAT44(0x428c0000,*(undefined4 *)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = -1.3995363365918915e-250;
        }
        if (cVar12 == '\0') {
          bVar11 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20) <
                   (float)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          bVar11 = dVar9 + dVar9 < in_dr2;
        }
        if (bVar11) {
          pfVar5 = (float *)(*(int *)(ar4 + 0x9d8) + 0xc);
          puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0x1c);
          if (cVar13 == '\0') {
            dVar9 = (double)CONCAT44(0x428c0000,*(undefined4 *)puVar2);
          }
          else {
            in_xd0 = *puVar2;
            dVar9 = -1.3995363365918915e-250;
          }
          if (cVar12 == '\0') {
            fVar7 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 + dVar9,0);
          }
          if (cVar13 == '\0') {
            *pfVar5 = fVar7;
          }
          else {
            *(undefined8 *)pfVar5 = in_xd0;
          }
        }
      }
    }
    uVar4 = SUB84(in_dr2,0);
    iVar1 = FUN_8c100850(ar5,puVar6,ar6,ar7);
    if (iVar1 == 1) {
      pfVar5 = (float *)(*(int *)(ar4 + 0x9d8) + 4);
      puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 4);
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44(0x3f4ccccd,*(undefined4 *)puVar2);
      }
      else {
        in_xd0 = *puVar2;
        dVar9 = 3848291215769.6;
      }
      if (cVar12 == '\0') {
        fVar7 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 + dVar9,0);
      }
      if (cVar13 == '\0') {
        *pfVar5 = fVar7;
      }
      else {
        *(undefined8 *)pfVar5 = in_xd0;
      }
      pdVar3 = (double *)(*(int *)(ar4 + 0x9d8) + 4);
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)pdVar3,uVar4);
      }
      else {
        dVar9 = *pdVar3;
      }
      puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0x14);
      if (cVar13 == '\0') {
        dVar10 = (double)CONCAT44(0x428c0000,*(undefined4 *)puVar2);
      }
      else {
        in_xd0 = *puVar2;
        dVar10 = -1.3995363365918915e-250;
      }
      if (cVar12 == '\0') {
        bVar11 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20) <
                 (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        bVar11 = dVar10 + dVar10 < dVar9;
      }
      if (bVar11) {
        pfVar5 = (float *)(*(int *)(ar4 + 0x9d8) + 4);
        puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0x14);
        if (cVar13 == '\0') {
          dVar9 = (double)CONCAT44(0x428c0000,*(undefined4 *)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = -1.3995363365918915e-250;
        }
        if (cVar12 == '\0') {
          fVar7 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar9 + dVar9,0);
        }
        if (cVar13 == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)pfVar5 = in_xd0;
        }
      }
    }
    else {
      iVar1 = FUN_8c100874(ar5,puVar6,ar6,ar7);
      if (iVar1 == 1) {
        pfVar5 = (float *)(*(int *)(ar4 + 0x9d8) + 4);
        puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 4);
        if (cVar13 == '\0') {
          dVar9 = (double)CONCAT44(0x3f4ccccd,*(undefined4 *)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = 3848291215769.6;
        }
        if (cVar12 == '\0') {
          fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar9 - dVar9,0);
        }
        if (cVar13 == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)pfVar5 = in_xd0;
        }
        pdVar3 = (double *)(*(int *)(ar4 + 0x9d8) + 4);
        if (cVar13 == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)pdVar3,uVar4);
        }
        else {
          dVar9 = *pdVar3;
        }
        puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0x14);
        if (cVar13 == '\0') {
          dVar10 = (double)CONCAT44(0x428c0000,*(undefined4 *)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar10 = 9.880610002640478e-290;
        }
        if (cVar12 == '\0') {
          bVar11 = (float)((ulonglong)dVar9 >> 0x20) <
                   SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          bVar11 = dVar9 < dVar10 - dVar10;
        }
        if (bVar11) {
          pfVar5 = (float *)(*(int *)(ar4 + 0x9d8) + 4);
          puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0x14);
          if (cVar13 == '\0') {
            dVar9 = (double)CONCAT44(0x428c0000,*(undefined4 *)puVar2);
          }
          else {
            in_xd0 = *puVar2;
            dVar9 = 9.880610002640478e-290;
          }
          if (cVar12 == '\0') {
            fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 - dVar9,0);
          }
          if (cVar13 == '\0') {
            *pfVar5 = fVar7;
          }
          else {
            *(undefined8 *)pfVar5 = in_xd0;
          }
        }
      }
    }
  }
  if (cVar13 == '\0') {
    _DAT_8c438268 = CONCAT44(_DAT_8c43826c,*(undefined4 *)(ar4 + 0x22d74));
  }
  else {
    _DAT_8c438268 = *(undefined8 *)(ar4 + 0x22d74);
  }
  if (_DAT_8c43826e != 0) {
    _DAT_8c438268 = CONCAT26(_DAT_8c43826e + -1,_DAT_8c438268);
  }
  iVar1 = FUN_8c0e2554(ar5,puVar6,ar6,ar7);
  if ((iVar1 == 1) && (*(int *)(ar4 + 0x9d8) == 0)) {
    puVar6 = ar5;
    FUN_8c0e4348(ar4,ar5,ar6,ar7);
  }
  iVar1 = FUN_8c0e252c(ar5,puVar6,ar6,ar7);
  if (iVar1 == 1) {
    uVar4 = get_field_cc_0dfee8(ar5,puVar6,ar6,ar7);
    uVar4 = FUN_8c01f528(uVar4,puVar6,ar6,ar7);
    FUN_8c01d9e0(uVar4,puVar6,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c0e1f90\n.set _FUN_8c0e1f90, _FUN_8c0e1f90_def\n");
