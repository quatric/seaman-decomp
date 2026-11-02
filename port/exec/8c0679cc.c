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
undefined4 FUN_8c0679cc_def(undefined **ar4,undefined **ar5,undefined **ar6,undefined *ar7)

{
  ring[rp++ & 255] = "FUN_8c0679cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 14120; for (int i_ = 0; i_ < 14120; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *ar5_00;
  code *pcVar8;
  undefined **ppuVar9;
  uint in_fr1 = 0;
  undefined4 uVar10;
  float fVar11;
  ulonglong uVar12;
  float fVar14;
  double dVar13;
  undefined8 in_xd0 = 0;
  char cVar15;
  char cVar16;
  
  cVar16 = '\0';
  cVar15 = '\0';
  ppuVar7 = ar5;
  ppuVar9 = ar6;
  (vsp = ((unsigned long)(fr0_ - 14120)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 14120)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x38)),ppuVar7,ppuVar9,ar7));
  if (0 < (int)ar4[0x8c]) {
    pcVar8 = ((void *)0x8c06add8);
    ppuVar7 = ar6;
    (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c06add8(ar4,ar6,((void *)0x8c06add8),ar7));
    ppuVar9 = (undefined **)(unsigned)pcVar8;
  }
  puVar6 = ar4[0x8c];
  if (((int)puVar6 < 8) && (-1 < (int)puVar6)) {
    ppuVar9 = &(*(undefined1 *)(unsigned)0x8c067a50);
                    
    switch((uint)puVar6) {
    case 0x0:
      ar5_00 = ((undefined1 *)(unsigned)0x8c2809a8);
      (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) + 1;
      ppuVar7 = ar6;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 14120)), get_field_24_026024(ar6,((undefined1 *)(unsigned)0x8c2809a8),&(*(undefined1 *)(unsigned)0x8c067a50),ar7));
      if (iVar4 == 0) {
        ar4[0x86] = (undefined *)(unsigned)0x0;
        uVar5 = (vsp = ((unsigned long)(fr0_ - 14120)), rand(((void *)0x8c014200),ar5_00,ppuVar9,ar7));
        puVar6 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 14120)), libgcc_divide_helper_01031c(uVar5,7,ppuVar9,ar7));
        iVar4 = 7;
        while( true ) {
          ar7 = (undefined *)(unsigned)((int)puVar6 * 8);
          ppuVar9 = (undefined **)(unsigned)0x8c2809b8;
          if ((*(int *)(unsigned)(ar7 + -0x73d7f648) != 1) || (iVar4 < 1)) break;
          puVar6 = puVar6 + 1;
          iVar4 = iVar4 + -1;
          if (6 < (int)puVar6) {
            puVar6 = (undefined *)(unsigned)0x0;
          }
        }
        if (0 < iVar4) {
          *(undefined4 *)(unsigned)((int)puVar6 * 8 + -0x73d7f648) = 1;
          ar4[0x87] = puVar6;
        }
        ar5_00 = (undefined1 *)(unsigned)((int)puVar6 * 0x10 + -0x73d7f544);
        (vsp = ((unsigned long)(fr0_ - 14120)), Vec3_assign(ar4 + 0xc,ar5_00,0x8c2809b8,ar7));
      }
      else if (iVar4 == 1) {
        ar4[0x86] = (undefined *)(unsigned)0x1;
        uVar5 = (vsp = ((unsigned long)(fr0_ - 14120)), rand(ppuVar7,ar5_00,ppuVar9,ar7));
        puVar6 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 14120)), libgcc_divide_helper_01031c(uVar5,6,ppuVar9,ar7));
        iVar4 = 6;
        while ((*(int *)(unsigned)((int)puVar6 * 8 + -0x73d7f604) == 1 && (0 < iVar4))) {
          puVar6 = puVar6 + 1;
          iVar4 = iVar4 + -1;
          if (5 < (int)puVar6) {
            puVar6 = (undefined *)(unsigned)0x0;
          }
        }
        if (0 < iVar4) {
          *(undefined4 *)(unsigned)((int)puVar6 * 8 + -0x73d7f604) = 1;
          ar4[0x87] = puVar6;
        }
        ar5_00 = (undefined1 *)(unsigned)((int)puVar6 * 0x10 + -0x73d7f48c);
        (vsp = ((unsigned long)(fr0_ - 14120)), Vec3_assign(ar4 + 0xc,ar5_00,ppuVar9,ar7));
      }
      else if (iVar4 == 2) {
        ar4[0x86] = (undefined *)(unsigned)0x2;
        uVar5 = (vsp = ((unsigned long)(fr0_ - 14120)), rand(ppuVar7,ar5_00,ppuVar9,ar7));
        puVar6 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 14120)), libgcc_divide_helper_01031c(uVar5,6,ppuVar9,ar7));
        iVar4 = 6;
        while ((*(int *)(unsigned)((int)puVar6 * 8 + -0x73d7f5c8) == 1 && (0 < iVar4))) {
          puVar6 = puVar6 + 1;
          iVar4 = iVar4 + -1;
          if (5 < (int)puVar6) {
            puVar6 = (undefined *)(unsigned)0x0;
          }
        }
        if (0 < iVar4) {
          *(undefined4 *)(unsigned)((int)puVar6 * 8 + -0x73d7f5c8) = 1;
          ar4[0x87] = puVar6;
        }
        ar5_00 = (undefined1 *)(unsigned)((int)puVar6 * 0x10 + -0x73d7f3e4);
        (vsp = ((unsigned long)(fr0_ - 14120)), Vec3_assign(ar4 + 0xc,ar5_00,ppuVar9,ar7));
      }
      ppuVar7 = ar4 + 0x14;
      uVar12 = (ulonglong)in_fr1;
      if (cVar16 == '\0') {
        *ppuVar7 = (undefined *)(unsigned)0x0;
      }
      else {
        *(ulonglong *)(unsigned)ppuVar7 = uVar12;
      }
      uVar5 = (vsp = ((unsigned long)(fr0_ - 14120)), rand(ppuVar7,ar5_00,ppuVar9,ar7));
      uVar10 = (undefined4)uVar12;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 14120)), libgcc_divide_helper_01031c(uVar5,0x168,ppuVar9,ar7));
      if (cVar15 == '\0') {
        dVar13 = CONCAT44D((float)iVar4,uVar10);
      }
      else {
        dVar13 = (double)iVar4;
      }
      if (cVar16 == '\0') {
        ar4[0x15] = (undefined *)(unsigned)(D2U(dVar13) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x15) = dVar13;
      }
      uVar5 = SUB84(dVar13,0);
      if (cVar16 == '\0') {
        ar4[0x16] = (undefined *)(unsigned)0x0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x16) = D2U(dVar13) & 0xffffffff;
      }
      if (cVar16 == '\0') {
        ar4[0x17] = (undefined *)(unsigned)0x3f800000;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x17) = CONCAT44(0x3f800000,uVar5);
      }
      if (cVar16 == '\0') {
        ar4[0x18] = (undefined *)(unsigned)0x3f800000;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x18) = CONCAT44(0x3f800000,uVar5);
      }
      if (cVar16 == '\0') {
        ar4[0x19] = (undefined *)(unsigned)0x3f800000;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x19) = CONCAT44(0x3f800000,uVar5);
      }
      ar4[0x8c] = ar4[0x8c] + 1;
    case 0x1:
      if (((uint)ar4[0x1d] & 0x20) == 0x20) {
        ar4[0x8c] = ar4[0x8c] + 1;
        (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c068890(((undefined1 *)(fr0_ - 0x804)),ar5,ppuVar9,ar7));
        (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c06af5c(ar4,((undefined1 *)(fr0_ - 0x804)),ppuVar9,ar7));
        (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c068818(((undefined1 *)(fr0_ - 0x804)),0xffffffff,ppuVar9,ar7));
        if (((undefined4 *)(unsigned long)*(unsigned *)0x8c2804e0) == (undefined *)(unsigned)0x1) {
          ar7 = (undefined *)(unsigned)0xe;
          ppuVar9 = (undefined **)(unsigned)0x1;
          (vsp = ((unsigned long)(fr0_ - 14120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0xd0))))(ar6,ar4 + 0xc,1,0xe));
        }
      }
      else if (((uint)ar4[0x1d] & 0x40) == 0x40) {
        if (cVar16 == '\0') {
          dVar13 = CONCAT44D(0x41000000,ar4[0xd]);
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0xd);
          dVar13 = 5.062009702363989e+233;
        }
        if (cVar15 == '\0') {
          puVar6 = (undefined *)(unsigned)(uint)(F32LO(dVar13) - F32HI(dVar13));
        }
        else {
          puVar6 = SUB84(dVar13 - dVar13,0);
        }
        if (cVar16 == '\0') {
          ar4[0xd] = puVar6;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0xd) = in_xd0;
        }
      }
      else if (((uint)ar4[0x1d] & 0x10) == 0x10) {
        if (cVar16 == '\0') {
          dVar13 = CONCAT44D(0x40000000,ar4[0xd]);
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0xd);
          dVar13 = -1.8982214199917473e+78;
        }
        if (cVar15 == '\0') {
          puVar6 = (undefined *)(unsigned)(uint)(F32LO(dVar13) - F32HI(dVar13));
        }
        else {
          puVar6 = SUB84(dVar13 - dVar13,0);
        }
        if (cVar16 == '\0') {
          ar4[0xd] = puVar6;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0xd) = in_xd0;
        }
      }
      break;
    case 0x2:
      iVar4 = (vsp = ((unsigned long)(fr0_ - 14120)), get_field_24_026024(ar6,ppuVar7,&(*(undefined1 *)(unsigned)0x8c067a50),ar7));
      if ((iVar4 == 0) || (iVar2 = (vsp = ((unsigned long)(fr0_ - 14120)), get_field_24_026024(ar6,iVar4,ppuVar9,ar7)), iVar2 == 2)) {
        iVar4 = (vsp = ((unsigned long)(fr0_ - 14120)), get_field_24_026024(ar6,iVar4,ppuVar9,ar7));
        if (iVar4 == 0) {
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c280998) < 4) && (-1 < (int)ar4[0x87])) {
            (*(undefined4 *)(unsigned)(unsigned)0x8c280998) = (*(undefined4 *)(unsigned)(unsigned)0x8c280998) + 1;
            (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) + -1;
            *(undefined ***)(unsigned)((int)ar4[0x87] * 8 + -0x73d7f644) = ar4;
            ar4[0x84] = ar4[0x84] + 4;
            ar4[0x8c] = ar4[0x8c] + 1;
            ppuVar9 = ar4;
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c068890(((undefined1 *)(fr0_ - 0xfd0)),ar5,ppuVar9,ar7));
            uVar5 = (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c06afb0(ar4,((undefined1 *)(fr0_ - 0xfd0)),ppuVar9,ar7));
            (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c068818(((undefined1 *)(fr0_ - 0xfd0)),0xffffffff,ppuVar9,ar7));
            if (0x383f < (ushort)uVar5) {
              if (-1 < (int)ar4[0x87]) {
                *(undefined4 *)(unsigned)((int)ar4[0x87] * 8 + -0x73d7f648) = 0;
                *(undefined4 *)(unsigned)((int)ar4[0x87] * 8 + -0x73d7f644) = 0;
              }
              ar4[0x8c] = (undefined *)(unsigned)0x7;
            }
          }
        }
        else if (((*(undefined4 *)(unsigned)(unsigned)0x8c2809a4) < 3) && (-1 < (int)ar4[0x87])) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c2809a4) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a4) + 1;
          (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) + -1;
          *(undefined ***)(unsigned)((int)ar4[0x87] * 8 + -0x73d7f5c4) = ar4;
          ar4[0x84] = ar4[0x84] + 4;
          ar4[0x8c] = ar4[0x8c] + 1;
          ppuVar9 = ar4;
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c068890(((undefined1 *)(fr0_ - 0x179c)),ar5,ppuVar9,ar7));
          uVar5 = (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c06afb0(ar4,((undefined1 *)(fr0_ - 0x179c)),ppuVar9,ar7));
          (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c068818(((undefined1 *)(fr0_ - 0x179c)),0xffffffff,ppuVar9,ar7));
          if (0x383f < (ushort)uVar5) {
            if (-1 < (int)ar4[0x87]) {
              ar7 = ar4[0x87];
              ppuVar9 = (undefined **)(unsigned)((int)ar7 * 8);
              ppuVar9[-0x1cf5fd72] = (undefined *)(unsigned)0x0;
              *(undefined4 *)(unsigned)((int)ar4[0x87] * 8 + -0x73d7f5c4) = 0;
            }
            ar4[0x8c] = (undefined *)(unsigned)0x7;
          }
        }
      }
      else if (((*(undefined4 *)(unsigned)(unsigned)0x8c28099c) + (*(undefined4 *)(unsigned)(unsigned)0x8c2809a0) < 2) && (-1 < (int)ar4[0x87])) {
        uVar5 = (vsp = ((unsigned long)(fr0_ - 14120)), rand(0x21c,2,ppuVar9,ar7));
        iVar4 = (vsp = ((unsigned long)(fr0_ - 14120)), libgcc_divide_helper_01031c(uVar5,100,ppuVar9,ar7));
        if ((iVar4 < 0x32) && (1 < (*(undefined4 *)(unsigned)(unsigned)0x8c2809a0))) {
          ar4[0x84] = ar4[0x84] + 4;
          (*(undefined4 *)(unsigned)(unsigned)0x8c28099c) = (*(undefined4 *)(unsigned)(unsigned)0x8c28099c) + 1;
        }
        else {
          (*(undefined4 *)(unsigned)(unsigned)0x8c2809a0) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a0) + 1;
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) + -1;
        ar4[0x8c] = ar4[0x8c] + 1;
        *(undefined ***)(unsigned)((int)ar4[0x87] * 8 + -0x73d7f600) = ar4;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c068890(((undefined1 *)(fr0_ - 0x1f68)),ar5,ppuVar9,ar7));
        uVar5 = (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c06afb0(ar4,((undefined1 *)(fr0_ - 0x1f68)),ppuVar9,ar7));
        (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c068818(((undefined1 *)(fr0_ - 0x1f68)),0xffffffff,ppuVar9,ar7));
        if (0x383f < (ushort)uVar5) {
          if (-1 < (int)ar4[0x87]) {
            *(undefined4 *)(unsigned)((int)ar4[0x87] * 8 + -0x73d7f604) = 0;
            *(undefined4 *)(unsigned)((int)ar4[0x87] * 8 + -0x73d7f600) = 0;
          }
          ar4[0x8c] = (undefined *)(unsigned)0x7;
        }
      }
      break;
    case 0x3:
      (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c068890(((undefined1 *)(fr0_ - 0x2734)),ar5,&(*(undefined1 *)(unsigned)0x8c067a50),ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c06afb0(ar4,((undefined1 *)(fr0_ - 0x2734)),ppuVar9,ar7));
      fVar11 = (float)(uVar3 & 0xffff);
      if (cVar16 == '\0') {
        fVar14 = 600.0;
      }
      else {
        fVar11 = 600.0;
        fVar14 = 3.08286e-43;
      }
      bVar1 = cVar15 != '\0';
      (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c068818(((undefined1 *)(fr0_ - 0x2734)),0xffffffff,ppuVar9,ar7));
      if (bVar1 || fVar14 <= fVar11) {
        (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c068890(((undefined1 *)(fr0_ - 0x2f00)),ar5,ppuVar9,ar7));
        (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c06af5c(ar4,((undefined1 *)(fr0_ - 0x2f00)),ppuVar9,ar7));
        ar7 = ((undefined1 *)(fr0_ - 0x2f00));
        pcVar8 = ((void *)0x8c068818);
        (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c068818(ar7,0xffffffff,((void *)0x8c068818),ar7));
        ar4[0x88] = ar4[0x88] + 1;
        ar4[0x8c] = (undefined *)(unsigned)0x0;
        ppuVar7 = ar4;
        iVar4 = (vsp = ((unsigned long)(fr0_ - 14120)), get_field_24_026024(ar6,ar4,pcVar8,ar7));
        if (iVar4 == 0) {
          uVar5 = (vsp = ((unsigned long)(fr0_ - 14120)), rand(ar6,ppuVar7,pcVar8,ar7));
          puVar6 = ar4[0x87];
          iVar4 = (vsp = ((unsigned long)(fr0_ - 14120)), libgcc_divide_helper_01031c(uVar5,3,pcVar8,ar7));
          if (cVar16 == '\0') {
            dVar13 = CONCAT44D(0x41200000,
                                      (float)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c136fec) + (int)puVar6 * 4) + iVar4));
          }
          else {
            dVar13 = 227873.6567993164;
          }
          if (cVar15 == '\0') {
            puVar6 = (undefined *)(unsigned)(uint)(F32LO(dVar13) / F32HI(dVar13));
          }
          else {
            puVar6 = SUB84(dVar13 / dVar13,0);
          }
          ppuVar9 = (undefined **)(unsigned)pcVar8;
          if (cVar16 == '\0') {
            ar4[0x90] = puVar6;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x90) = in_xd0;
          }
        }
        else if (iVar4 == 1) {
          uVar5 = (vsp = ((unsigned long)(fr0_ - 14120)), rand(ar6,ppuVar7,pcVar8,ar7));
          iVar4 = (vsp = ((unsigned long)(fr0_ - 14120)), libgcc_divide_helper_01031c(uVar5,3,pcVar8,ar7));
          if (cVar16 == '\0') {
            dVar13 = CONCAT44D(0x41200000,(float)(iVar4 + 6));
          }
          else {
            dVar13 = 3.4765896880999207;
          }
          if (cVar15 == '\0') {
            puVar6 = (undefined *)(unsigned)(uint)(F32LO(dVar13) / F32HI(dVar13));
          }
          else {
            puVar6 = SUB84(dVar13 / dVar13,0);
          }
          ppuVar9 = (undefined **)(unsigned)pcVar8;
          if (cVar16 == '\0') {
            ar4[0x90] = puVar6;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x90) = in_xd0;
          }
        }
        else {
          ppuVar9 = (undefined **)(unsigned)pcVar8;
          if (iVar4 == 2) {
            uVar5 = (vsp = ((unsigned long)(fr0_ - 14120)), rand(ar6,ppuVar7,pcVar8,ar7));
            iVar4 = (vsp = ((unsigned long)(fr0_ - 14120)), libgcc_divide_helper_01031c(uVar5,3,pcVar8,ar7));
            if (cVar16 == '\0') {
              dVar13 = CONCAT44D(0x41200000,(float)(iVar4 + 10));
            }
            else {
              dVar13 = 7.937828837308101e+110;
            }
            if (cVar15 == '\0') {
              puVar6 = (undefined *)(unsigned)(uint)(F32LO(dVar13) / F32HI(dVar13));
            }
            else {
              puVar6 = SUB84(dVar13 / dVar13,0);
            }
            ppuVar9 = (undefined **)(unsigned)pcVar8;
            if (cVar16 == '\0') {
              ar4[0x90] = puVar6;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x90) = in_xd0;
            }
          }
        }
      }
      break;
    case 0x4:
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(0x3dcccccd,ar4[0x8b]);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x8b);
        dVar13 = 4.89807854859436e-311;
      }
      if (cVar15 == '\0') {
        puVar6 = (undefined *)(unsigned)(uint)(F32LO(dVar13) + F32HI(dVar13));
      }
      else {
        puVar6 = SUB84(dVar13 + dVar13,0);
      }
      if (cVar16 == '\0') {
        ar4[0x8b] = puVar6;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x8b) = in_xd0;
      }
      ppuVar7 = ar4;
      (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c06abb8(ar4,ar4 + 0x8b,ar4,ar7));
      (vsp = ((unsigned long)(fr0_ - 14120)), vec3_copy_8c023d8c(ar4 + 0x14,((undefined1 *)(fr0_ - 0x2f0c)),ppuVar7,ar7));
      uVar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 14120)), object_dtor_delete(((undefined1 *)(fr0_ - 0x2f0c)),0xffffffff,ppuVar7,ar7));
      if (cVar16 == '\0') {
        ar4[0x15] = ar4[0x9f];
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x15) = *(undefined8 *)(unsigned)(ar4 + 0x9f);
      }
      (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c06aa04(ar4,uVar5,ppuVar7,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2f2c))); *(unsigned *)((((unsigned long)(fr0_ - 14120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 14120)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x2f1c)),ar4 + 0x18,ppuVar7,ar7); });
      (vsp = ((unsigned long)(fr0_ - 14120)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x2f38)),((void *)0x8c023d68),ppuVar7,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2f48))); *(unsigned *)((((unsigned long)(fr0_ - 14120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 14120)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x2f2c)),((undefined1 *)(fr0_ - 0x2f38)),ppuVar7,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2f58))); *(unsigned *)((((unsigned long)(fr0_ - 14120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 14120)) - 8); Vec3_add(ar4 + 0x9a,((undefined1 *)(fr0_ - 0x2f48)),ppuVar7,ar7); });
      (vsp = ((unsigned long)(fr0_ - 14120)), Vec3_assign(ar4 + 0xc,((undefined1 *)(fr0_ - 0x2f58)),ppuVar7,ar7));
      (vsp = ((unsigned long)(fr0_ - 14120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2f58)),0xffffffff,ppuVar7,ar7));
      (vsp = ((unsigned long)(fr0_ - 14120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2f48)),0xffffffff,ppuVar7,ar7));
      (vsp = ((unsigned long)(fr0_ - 14120)), object_dtor_delete(((undefined1 *)(fr0_ - 0x2f38)),0xffffffff,ppuVar7,ar7));
      (vsp = ((unsigned long)(fr0_ - 14120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2f2c)),0xffffffff,ppuVar7,ar7));
      ppuVar9 = (undefined **)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 14120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2f1c)),0xffffffff,0xffffffff,ar7));
      if (cVar16 == '\0') {
        puVar6 = ar4[0x8b];
        fVar11 = 45.0;
      }
      else {
        puVar6 = (undefined *)(unsigned)0x42340000;
        fVar11 = 7.84727e-43;
      }
      if (cVar15 != '\0' || fVar11 <= (float)(uint)puVar6) {
        ar4[0x8c] = ar4[0x8c] + 1;
        ppuVar9 = (undefined **)(unsigned)0x230;
      }
      break;
    case 0x5:
      if (((uint)ar4[0x1d] & 0x20) == 0x20) {
        ar4[0x8c] = ar4[0x8c] + 1;
        (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c068890(((undefined1 *)(fr0_ - 0x3724)),ar5,&(*(undefined1 *)(unsigned)0x8c067a50),ar7));
        (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c06af5c(ar4,((undefined1 *)(fr0_ - 0x3724)),ppuVar9,ar7));
        (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c068818(((undefined1 *)(fr0_ - 0x3724)),0xffffffff,ppuVar9,ar7));
        ar7 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c2804e0);
        if (((undefined4 *)(unsigned long)*(unsigned *)0x8c2804e0) == (undefined *)(unsigned)0x1) {
          ar7 = (undefined *)(unsigned)0xe;
          ppuVar9 = (undefined **)(unsigned)0x1;
          (vsp = ((unsigned long)(fr0_ - 14120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0xd0))))(ar6,ar4 + 0xc,1,0xe));
        }
      }
      else if (((uint)ar4[0x1d] & 0x40) == 0x40) {
        if (cVar16 == '\0') {
          dVar13 = CONCAT44D(0x41000000,ar4[0xd]);
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0xd);
          dVar13 = 5.062009702363989e+233;
        }
        if (cVar15 == '\0') {
          puVar6 = (undefined *)(unsigned)(uint)(F32LO(dVar13) - F32HI(dVar13));
        }
        else {
          puVar6 = SUB84(dVar13 - dVar13,0);
        }
        if (cVar16 == '\0') {
          ar4[0xd] = puVar6;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0xd) = in_xd0;
        }
      }
      else if (((uint)ar4[0x1d] & 0x10) == 0x10) {
        if (cVar16 == '\0') {
          dVar13 = CONCAT44D(0x40000000,ar4[0xd]);
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0xd);
          dVar13 = 5.633522802342751e+86;
        }
        if (cVar15 == '\0') {
          puVar6 = (undefined *)(unsigned)(uint)(F32LO(dVar13) - F32HI(dVar13));
        }
        else {
          puVar6 = SUB84(dVar13 - dVar13,0);
        }
        if (cVar16 == '\0') {
          ar4[0xd] = puVar6;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0xd) = in_xd0;
        }
      }
      break;
    case 0x7:
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(0x3a83126f,ar4[0x91]);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x91);
        dVar13 = -4.1966905022930605e-250;
      }
      if (cVar15 == '\0') {
        puVar6 = (undefined *)(unsigned)(uint)(F32LO(dVar13) + F32HI(dVar13));
      }
      else {
        puVar6 = SUB84(dVar13 + dVar13,0);
      }
      if (cVar16 == '\0') {
        ar4[0x91] = puVar6;
        puVar6 = ar4[0x91];
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x91) = in_xd0;
      }
      if (cVar15 == '\0' && 1.0 < (float)(uint)puVar6) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) + -1;
        (vsp = ((unsigned long)(fr0_ - 14120)), FUN_8c0f4d84(ar4,ar4,&(*(undefined1 *)(unsigned)0x8c067a50),ar7));
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 14120)), object_dtor_delete(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ppuVar9,ar7));
  uVar5 = (vsp = ((unsigned long)(fr0_ - 14120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ppuVar9,ar7));
  return uVar5;
}

__asm__(".globl _FUN_8c0679cc\n.set _FUN_8c0679cc, _FUN_8c0679cc_def\n");
