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
undefined4 FUN_8c0e1f90_def(int ar4,undefined4 *ar5,undefined1 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e1f90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
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
  double in_dr2 = 0;
  undefined8 in_xd0 = 0;
  bool bVar11;
  undefined4 in_PR = 0;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  (*(undefined4 *)(fr0_ - 0x1c)) = 0;
  (*(undefined4 *)(fr0_ - 0x20)) = 0;
  if ((*(undefined1 *)(unsigned)0x8c43826c) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438268) = CONCAT35((int3)((*(undefined4 *)(unsigned)(unsigned)0x8c438268) >> 0x28),0x100000000);
  }
  (*(undefined4 *)(fr0_ - 0x28)) = 0;
  if ((*(undefined1 *)(unsigned)0x8c438270) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438268) = (*(undefined4 *)(unsigned)(unsigned)0x8c438268) & 0xffffffffffff;
    (*(undefined1 *)(unsigned)0x8c438270) = '\x01';
  }
  puVar6 = ar5;
  (*(undefined4 *)(fr0_ - 0xc)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0dc61c(ar4,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1003b0(ar5,puVar6,ar6,ar7));
  if ((iVar1 != 1) && (*(int *)(unsigned)(ar4 + 0x9d8) != 0)) {
    *(undefined4 *)(unsigned)(ar4 + 0x9d8) = 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c100ce8(ar5,puVar6,ar6,ar7));
  if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x88))))(*(int *)(unsigned)(ar4 + 0x9d4),puVar6,ar6,ar7));
  }
  puVar6 = &(*(undefined4 *)(fr0_ - 0x28));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c100e4c(ar5,puVar6,ar6,ar7));
  if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x184))))(*(int *)(unsigned)(ar4 + 0x9d4),puVar6,ar6,ar7))
    ;
  }
  else {
    puVar6 = &(*(undefined4 *)(fr0_ - 0x28));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c100e4c(ar5,puVar6,ar6,ar7));
    if ((iVar1 == 2) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x188))))
                (*(int *)(unsigned)(ar4 + 0x9d4),puVar6,ar6,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0dc8fc(ar4,ar5,ar6,ar7));
  puVar6 = ar5;
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0dc7e8(ar4,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c10031c(ar5,puVar6,ar6,ar7));
  if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 200))))
                      (*(int *)(unsigned)(ar4 + 0x9d4),puVar6,ar6,ar7));
    if (iVar1 == 1) {
      puVar6 = ar5;
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0e4298(ar4,ar5,ar6,ar7));
    }
    else {
      puVar6 = (undefined4 *)(unsigned)0x2;
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c021720(0x8c2b59d0,2,ar6,ar7));
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1003b0(ar5,puVar6,ar6,ar7));
  if (((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d8) != 0)) && (*(int *)(unsigned)(ar4 + 0x9d4) == 0)) {
    puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 4);
    if (cVar13 == '\0') {
      (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)puVar2;
    }
    else {
      (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)*puVar2;
    }
    puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 8);
    if (cVar13 == '\0') {
      (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)puVar2;
    }
    else {
      (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)*puVar2;
    }
    puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0xc);
    if (cVar13 == '\0') {
      (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)puVar2;
    }
    else {
      uVar8 = *puVar2;
      (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)uVar8;
      (*(undefined4 *)(fr0_ - 0xc)) = (undefined4)((ulonglong)uVar8 >> 0x20);
    }
    ar6 = ((undefined1 *)(fr0_ - 0x30));
    puVar6 = &(*(undefined4 *)(fr0_ - 0x18));
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c256294(0,puVar6,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c90d0(ar5,puVar6,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d723c(ar4 + 0x22d48,puVar6,ar6,ar7));
  if ((*(int *)(unsigned)(ar4 + 0x9d8) == 0) || (*(int *)(unsigned)(ar4 + 0x9d8) == ar4 + 0x22d48)) {
    if (*(int *)(unsigned)(ar4 + 0x9d8) == ar4 + 0x22d48) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c100850(ar5,puVar6,ar6,ar7));
      if (iVar1 == 1) {
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d74cc(ar4 + 0x22d48,puVar6,ar6,ar7));
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c100874(ar5,puVar6,ar6,ar7));
        if (iVar1 == 1) {
          (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d74cc(ar4 + 0x22d48,puVar6,ar6,ar7));
        }
      }
      if (cVar13 == '\0') {
        uVar8 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x22d74),(*(undefined4 *)(unsigned)(unsigned)0x8c438268));
      }
      else {
        uVar8 = *(undefined8 *)(unsigned)(ar4 + 0x22d74);
      }
      if (((float)uVar8 != F32HI(uVar8)) && ((*(undefined4 *)(unsigned)(unsigned)0x8c43826e) == 0)) {
        (*(undefined4 *)(fr0_ - 0x24)) = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02190c(0x8c2b59d0,puVar6,ar6,ar7));
        ar6 = (undefined1 *)(unsigned)0x10;
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c021994(0x8c2b59d0,(*(undefined4 *)(fr0_ - 0x24)),0x10,ar7));
        puVar6 = &(*(undefined4 *)(fr0_ - 0x24));
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c021a8c(0x8c2b59d0,puVar6,ar6,ar7));
        (*(undefined4 *)(unsigned)(unsigned)0x8c438268) = CONCAT26(8,(*(undefined4 *)(unsigned)(unsigned)0x8c438268));
      }
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c100808(ar5,puVar6,ar6,ar7));
    if (iVar1 == 1) {
      pfVar5 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0xc);
      puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0xc);
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(0x3f4ccccd,*(undefined4 *)(unsigned)puVar2);
      }
      else {
        in_xd0 = *puVar2;
        dVar9 = 3848291215769.6;
      }
      if (cVar12 == '\0') {
        fVar7 = F32LO(dVar9) - F32HI(dVar9);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar13 == '\0') {
        *pfVar5 = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)pfVar5 = in_xd0;
      }
      pdVar3 = (double *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0xc);
      if (cVar13 == '\0') {
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = *pdVar3;
      }
      puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0x1c);
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(0x428c0000,*(undefined4 *)(unsigned)puVar2);
      }
      else {
        in_xd0 = *puVar2;
        dVar9 = -1.701787568380408e+78;
      }
      if (cVar12 == '\0') {
        bVar11 = F32HI(in_dr2) <
                 F32LO(dVar9) - F32HI(dVar9);
      }
      else {
        bVar11 = in_dr2 < dVar9 - dVar9;
      }
      if (bVar11) {
        pfVar5 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0xc);
        puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0x1c);
        if (cVar13 == '\0') {
          dVar9 = CONCAT44D(0x428c0000,*(undefined4 *)(unsigned)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = -1.701787568380408e+78;
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar9) - F32HI(dVar9);
        }
        else {
          fVar7 = SUB84(dVar9 - dVar9,0);
        }
        if (cVar13 == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)(unsigned)pfVar5 = in_xd0;
        }
      }
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c10082c(ar5,puVar6,ar6,ar7));
      if (iVar1 == 1) {
        pfVar5 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0xc);
        puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0xc);
        if (cVar13 == '\0') {
          dVar9 = CONCAT44D(0x3f4ccccd,*(undefined4 *)(unsigned)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = 3848291215769.6;
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar9) + F32HI(dVar9);
        }
        else {
          fVar7 = SUB84(dVar9 + dVar9,0);
        }
        if (cVar13 == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)(unsigned)pfVar5 = in_xd0;
        }
        pdVar3 = (double *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0xc);
        if (cVar13 == '\0') {
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *pdVar3;
        }
        puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0x1c);
        if (cVar13 == '\0') {
          dVar9 = CONCAT44D(0x428c0000,*(undefined4 *)(unsigned)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = -1.3995363365918915e-250;
        }
        if (cVar12 == '\0') {
          bVar11 = F32LO(dVar9) + F32HI(dVar9) <
                   F32HI(in_dr2);
        }
        else {
          bVar11 = dVar9 + dVar9 < in_dr2;
        }
        if (bVar11) {
          pfVar5 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0xc);
          puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0x1c);
          if (cVar13 == '\0') {
            dVar9 = CONCAT44D(0x428c0000,*(undefined4 *)(unsigned)puVar2);
          }
          else {
            in_xd0 = *puVar2;
            dVar9 = -1.3995363365918915e-250;
          }
          if (cVar12 == '\0') {
            fVar7 = F32LO(dVar9) + F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 + dVar9,0);
          }
          if (cVar13 == '\0') {
            *pfVar5 = fVar7;
          }
          else {
            *(undefined8 *)(unsigned)pfVar5 = in_xd0;
          }
        }
      }
    }
    uVar4 = SUB84(in_dr2,0);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c100850(ar5,puVar6,ar6,ar7));
    if (iVar1 == 1) {
      pfVar5 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 4);
      puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 4);
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(0x3f4ccccd,*(undefined4 *)(unsigned)puVar2);
      }
      else {
        in_xd0 = *puVar2;
        dVar9 = 3848291215769.6;
      }
      if (cVar12 == '\0') {
        fVar7 = F32LO(dVar9) + F32HI(dVar9);
      }
      else {
        fVar7 = SUB84(dVar9 + dVar9,0);
      }
      if (cVar13 == '\0') {
        *pfVar5 = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)pfVar5 = in_xd0;
      }
      pdVar3 = (double *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 4);
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,uVar4);
      }
      else {
        dVar9 = *pdVar3;
      }
      puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0x14);
      if (cVar13 == '\0') {
        dVar10 = CONCAT44D(0x428c0000,*(undefined4 *)(unsigned)puVar2);
      }
      else {
        in_xd0 = *puVar2;
        dVar10 = -1.3995363365918915e-250;
      }
      if (cVar12 == '\0') {
        bVar11 = F32LO(dVar10) + F32HI(dVar10) <
                 F32HI(dVar9);
      }
      else {
        bVar11 = dVar10 + dVar10 < dVar9;
      }
      if (bVar11) {
        pfVar5 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 4);
        puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0x14);
        if (cVar13 == '\0') {
          dVar9 = CONCAT44D(0x428c0000,*(undefined4 *)(unsigned)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = -1.3995363365918915e-250;
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar9) + F32HI(dVar9);
        }
        else {
          fVar7 = SUB84(dVar9 + dVar9,0);
        }
        if (cVar13 == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)(unsigned)pfVar5 = in_xd0;
        }
      }
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c100874(ar5,puVar6,ar6,ar7));
      if (iVar1 == 1) {
        pfVar5 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 4);
        puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 4);
        if (cVar13 == '\0') {
          dVar9 = CONCAT44D(0x3f4ccccd,*(undefined4 *)(unsigned)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = 3848291215769.6;
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar9) - F32HI(dVar9);
        }
        else {
          fVar7 = SUB84(dVar9 - dVar9,0);
        }
        if (cVar13 == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)(unsigned)pfVar5 = in_xd0;
        }
        pdVar3 = (double *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 4);
        if (cVar13 == '\0') {
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,uVar4);
        }
        else {
          dVar9 = *pdVar3;
        }
        puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0x14);
        if (cVar13 == '\0') {
          dVar10 = CONCAT44D(0x428c0000,*(undefined4 *)(unsigned)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar10 = 9.880610002640478e-290;
        }
        if (cVar12 == '\0') {
          bVar11 = F32HI(dVar9) <
                   F32LO(dVar10) - F32HI(dVar10);
        }
        else {
          bVar11 = dVar9 < dVar10 - dVar10;
        }
        if (bVar11) {
          pfVar5 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 4);
          puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0x14);
          if (cVar13 == '\0') {
            dVar9 = CONCAT44D(0x428c0000,*(undefined4 *)(unsigned)puVar2);
          }
          else {
            in_xd0 = *puVar2;
            dVar9 = 9.880610002640478e-290;
          }
          if (cVar12 == '\0') {
            fVar7 = F32LO(dVar9) - F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 - dVar9,0);
          }
          if (cVar13 == '\0') {
            *pfVar5 = fVar7;
          }
          else {
            *(undefined8 *)(unsigned)pfVar5 = in_xd0;
          }
        }
      }
    }
  }
  if (cVar13 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438268) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c43826c),*(undefined4 *)(unsigned)(ar4 + 0x22d74));
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438268) = *(undefined8 *)(unsigned)(ar4 + 0x22d74);
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c43826e) != 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438268) = CONCAT26((*(undefined4 *)(unsigned)(unsigned)0x8c43826e) + -1,(*(undefined4 *)(unsigned)(unsigned)0x8c438268));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0e2554(ar5,puVar6,ar6,ar7));
  if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d8) == 0)) {
    puVar6 = ar5;
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0e4348(ar4,ar5,ar6,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0e252c(ar5,puVar6,ar6,ar7));
  if (iVar1 == 1) {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_cc_0dfee8(ar5,puVar6,ar6,ar7));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01f528(uVar4,puVar6,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01d9e0(uVar4,puVar6,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c0e1f90\n.set _FUN_8c0e1f90, _FUN_8c0e1f90_def\n");
