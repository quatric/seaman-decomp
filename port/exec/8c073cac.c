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
undefined4 FUN_8c073cac_def(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c073cac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 300; for (int i_ = 0; i_ < 300; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  int ar4_00;
  code *pcVar8;
  double *ar6_00;
  code *pcVar9;
  code *ar7_00;
  undefined4 ar7_01;
  undefined4 ar5_00;
  code *pcVar10;
  double in_dr0 = 0;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 in_dr4 = 0;
  undefined4 ain0;
  double in_dr12 = 0;
  double in_dr14 = 0;
  undefined8 in_xd0 = 0;
  double in_xd14 = 0;
  bool bVar14;
  char cVar15;
  char cVar16;
  
  cVar16 = '\0';
  cVar15 = '\0';
  ain0 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  ar5_00 = 1;
  pcVar10 = (code *)0xffffffff;
  pcVar8 = ar5;
  uVar7 = ar6;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 300)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 300)) - 8); Vec3_sub(ar6,ar5,ar6,ar7); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 300)), Vec3_length(((undefined1 *)(fr0_ - 0x5c)),pcVar8,uVar7,ar7));
  (vsp = ((unsigned long)(fr0_ - 300)), Vec3_ctor_copy(((undefined4 *)(fr0_ - 0x34)),uVar1,uVar7,ar7));
  pcVar8 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 300)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,((void *)0x8c022cb0),ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 300)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 300)) - 8); FUN_8c0230f0(ar4 + 0x14,((undefined1 *)(fr0_ - 0x6c)),pcVar8,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 300)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 300)) - 8); FUN_8c0230f0(((undefined4 *)(fr0_ - 0x34)),((void *)0x8c0230f0),pcVar8,ar7); });
  pcVar9 = ((void *)0x8c022dac);
  (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0x7c)),pcVar8,((void *)0x8c022dac)));
  dVar13 = in_dr0;
  if (cVar16 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    dVar13 = in_xd14;
  }
  (vsp = ((unsigned long)(fr0_ - 300)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,pcVar8,pcVar9));
  uVar7 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 300)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,pcVar8,pcVar9));
  ar7_00 = ((void *)0x8c023d34);
  (vsp = ((unsigned long)(fr0_ - 300)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x40)),uVar7,pcVar8,((void *)0x8c023d34)));
  pcVar9 = ((void *)0x8c023d34);
  (vsp = ((unsigned long)(fr0_ - 300)), Vec3_set_zero(&(*(float *)(fr0_ - 0x4c)),((void *)0x8c023d34),pcVar8,ar7_00));
  iVar5 = *(int *)(unsigned)(ar4 + 0x40);
  if ((5 < iVar5) || (iVar5 < 0)) goto switchD_8c073da6_caseD_2;
                    
  switch(iVar5) {
  case 0:
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c073c9c(ar4,pcVar9,pcVar8,ar7_00));
    uVar1 = SUB84(in_dr0,0);
    pcVar8 = ar5;
    uVar7 = ar6;
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031bb4(ar4,ar5,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c02a1fc(ar4 + 0x254,pcVar8,uVar7,ar7_00));
    pcVar8 = ((void *)0x8c0321fc);
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c0321fc(ar4 + 0xb0,1,((void *)0x8c0321fc),ar7_00));
    if (cVar16 == '\0') {
      in_dr0 = CONCAT44D(0x42340000,uVar1);
    }
    else {
      in_dr0 = 6.79587413861226e-312;
    }
    if (cVar15 == '\0') {
      bVar14 = SUB84(in_dr14,0) < F32HI(in_dr0);
    }
    else {
      bVar14 = in_dr14 < in_dr0;
    }
    if (bVar14) {
      pcVar9 = (code *)0x0;
      *(undefined4 *)(unsigned)(ar4 + 0x220) = 0;
    }
    else {
      pcVar9 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), FUN_8c023334(ar4 + 0x14,((undefined4 *)(fr0_ - 0x34)),pcVar8,ar7_00));
      *(unsigned *)(unsigned)(ar4 + 0x220) = pcVar9;
    }
    iVar5 = *(int *)(unsigned)(ar4 + 0x220);
    if (iVar5 == 0) goto LAB_8c07441c;
    fVar6 = F32LO(in_dr14);
    if (iVar5 == 3) {
      if (cVar16 == '\0') {
        dVar11 = CONCAT44D(0x42f00000,SUB84(in_dr0,0));
      }
      else {
        dVar11 = -0.007812501948137651;
      }
      if (cVar15 == '\0') {
        bVar14 = F32HI(dVar11) < fVar6;
      }
      else {
        bVar14 = dVar11 < in_dr14;
      }
      if (bVar14) {
        ar7_01 = 0;
        pcVar8 = (code *)0xffffffff;
        pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
        uVar7 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c026db0(ar4,((void *)0x8c026db0),pcVar8,ar7_01));
        uVar1 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,ar7_01));
        pfVar2 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 300)), deref_u32(uVar1,uVar7,pcVar8,ar7_01));
        ar7_00 = (code *)(ar4 + 0xb4);
        fVar6 = pfVar2[1];
        *(float *)(unsigned)ar7_00 = *pfVar2;
        *(float *)(unsigned)(ar4 + 0xb8) = fVar6;
        *(float *)(unsigned)(ar4 + 0xbc) = pfVar2[2];
        if (*(int *)(unsigned)(ar4 + 0x128) == 2) {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137648);
        }
        else {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1376a8);
        }
        if (cVar16 == '\0') {
          dVar13 = CONCAT44D(SUB84(in_dr14,0),0x43340000);
        }
        else {
          in_xd0 = 0xf008c72143340000;
        }
        if (cVar15 == '\0') {
          in_dr0 = CONCAT44D(F32HI(dVar13) / F32LO(dVar13),
                                    SUB84(dVar13,0));
        }
        else {
          in_dr0 = dVar13 / dVar13;
        }
        if (cVar16 == '\0') {
          *(int *)(unsigned)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x240) = in_dr0;
        }
      }
      else {
        if (cVar16 == '\0') {
          dVar11 = CONCAT44D(0x42700000,SUB84(dVar11,0));
        }
        else {
          dVar11 = -0.007812501933585736;
        }
        if (cVar15 == '\0') {
          bVar14 = fVar6 < F32HI(dVar11);
        }
        else {
          bVar14 = in_dr14 < dVar11;
        }
        if (bVar14) {
          if (*(int *)(unsigned)(ar4 + 0x124) == 0) {
            puVar4 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f13c);
            if (cVar16 == '\0') {
              uVar12 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x28),*(undefined4 *)(unsigned)puVar4);
            }
            else {
              in_xd0 = *puVar4;
              uVar12 = *(undefined8 *)(unsigned)(ar4 + 0x28);
            }
            if (cVar15 != '\0' || (float)uVar12 <= F32HI(uVar12)) {
              ar7_00 = (code *)0x1;
              pcVar8 = (code *)0xffffffff;
              uVar7 = 0xd;
              pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xd,0xffffffff,1));
              ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c032204(ar4 + 0xb0,uVar7,pcVar8,ar7_00); });
              ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c074d14(ar4 + 0xb0,uVar7,pcVar8,ar7_00); });
              if (cVar16 == '\0') {
                dVar13 = CONCAT44D(SUB84(in_dr14,0),(int)((ulonglong)uVar12 >> 0x20));
                uVar12 = in_xd0;
              }
              in_xd0 = uVar12;
              if (cVar15 == '\0') {
                in_dr0 = CONCAT44D(F32HI(dVar13) / F32LO(dVar13),
                                          SUB84(dVar13,0));
              }
              else {
                in_dr0 = dVar13 / dVar13;
              }
              if (cVar16 == '\0') {
                *(int *)(unsigned)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
              }
              else {
                *(double *)(unsigned)(ar4 + 0x240) = in_dr0;
              }
              goto LAB_8c0743d2;
            }
          }
LAB_8c07441c:
          if (cVar16 == '\0') {
            in_dr0 = CONCAT44D(0x40933333,*(undefined4 *)(unsigned)(ar4 + 0x24));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x24);
            in_dr0 = 7782.3994228363035;
          }
          if (cVar15 == '\0' && SUB84(in_dr0,0) < F32HI(in_dr0)) {
            if (cVar16 == '\0') {
              in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
              in_dr0 = *(double *)(unsigned)(ar4 + 0x24);
            }
            if (cVar15 == '\0' && SUB84(in_dr0,0) < F32HI(in_dr0)) {
              ar7_00 = (code *)0x0;
              pcVar8 = (code *)0xffffffff;
              pcVar9 = (code *)0x1;
              pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
            }
            else {
              ar7_00 = (code *)0x0;
              pcVar8 = (code *)0xffffffff;
              pcVar9 = (code *)0x12;
              pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x12,0xffffffff,0));
            }
            if (*(int *)(unsigned)(ar4 + 0x124) == 0) {
              pcVar8 = (code *)0x64;
              iVar5 = (vsp = ((unsigned long)(fr0_ - 300)), rand_range(ar4,0,100,ar7_00));
              if (iVar5 < 10) {
                ar7_00 = (code *)0x0;
                pcVar8 = (code *)0xffffffff;
                pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xf,0xffffffff,0));
              }
              pcVar9 = (code *)(ar4 + 0x24);
              if (cVar16 == '\0') {
                in_dr0 = CONCAT44D(0x3f4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x24));
              }
              else {
                in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x24);
                in_dr0 = -8.399316818224296e-251;
              }
              if (cVar15 == '\0') {
                fVar6 = F32HI(in_dr0);
                in_dr0 = CONCAT44D(fVar6,F32LO(in_dr0) * fVar6);
              }
              else {
                in_dr0 = in_dr0 * in_dr0;
              }
              if (cVar16 == '\0') {
                *(int *)(unsigned)pcVar9 = SUB84(in_dr0,0);
              }
              else {
                *(undefined8 *)(unsigned)pcVar9 = in_xd0;
              }
            }
          }
          else {
            ar7_00 = (code *)0x0;
            pcVar8 = (code *)0xffffffff;
            pcVar9 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0));
            pcVar10 = pcVar9;
          }
          goto LAB_8c074542;
        }
        ar7_00 = (code *)0x0;
        pcVar8 = (code *)0xffffffff;
        uVar7 = 9;
        pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0));
        uVar7 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c026db0(ar4,uVar7,pcVar8,ar7_00));
        uVar1 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,ar7_00));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 300)), deref_u32(uVar1,uVar7,pcVar8,ar7_00));
        uVar7 = puVar3[1];
        *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar3;
        *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
        *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar3[2];
        if (*(int *)(unsigned)(ar4 + 0x128) == 2) {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137618);
        }
        else {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137678);
        }
        if (cVar16 == '\0') {
          dVar13 = CONCAT44D(SUB84(in_dr14,0),0x42700000);
        }
        else {
          in_xd0 = 0xeed02542700000;
        }
        if (cVar15 == '\0') {
          in_dr0 = CONCAT44D(F32HI(dVar13) / F32LO(dVar13),
                                    SUB84(dVar13,0));
        }
        else {
          in_dr0 = dVar13 / dVar13;
        }
        if (cVar16 == '\0') {
          *(int *)(unsigned)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x240) = in_dr0;
        }
      }
LAB_8c0743d2:
      pcVar9 = ((void *)0x8c033e68);
      (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,((void *)0x8c033e68),pcVar8,ar7_00));
    }
    else if (iVar5 == 4) {
      if (cVar16 == '\0') {
        dVar11 = CONCAT44D(0x42f00000,SUB84(in_dr0,0));
      }
      else {
        dVar11 = -0.007812501948137651;
      }
      if (cVar15 == '\0') {
        bVar14 = F32HI(dVar11) < fVar6;
      }
      else {
        bVar14 = dVar11 < in_dr14;
      }
      if (bVar14) {
        ar7_00 = (code *)0x0;
        pcVar8 = (code *)0xffffffff;
        uVar7 = 3;
        pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0));
        uVar7 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c026db0(ar4,uVar7,pcVar8,ar7_00));
        uVar7 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,ar7_00));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 300)), deref_u32(uVar7,((void *)0x8c015b4c),pcVar8,ar7_00));
        uVar7 = puVar3[1];
        *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar3;
        *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
        pcVar9 = (code *)puVar3[2];
        *(unsigned *)(unsigned)(ar4 + 0xbc) = pcVar9;
        if (*(int *)(unsigned)(ar4 + 0x128) == 2) {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137660);
        }
        else {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1376c0);
        }
        if (cVar16 == '\0') {
          dVar13 = CONCAT44D(SUB84(in_dr14,0),0x43340000);
        }
        else {
          in_xd0 = 0xf008c72243340000;
        }
        if (cVar15 == '\0') {
          in_dr0 = CONCAT44D(F32HI(dVar13) / F32LO(dVar13),
                                    SUB84(dVar13,0));
        }
        else {
          in_dr0 = dVar13 / dVar13;
        }
        if (cVar16 == '\0') {
          *(int *)(unsigned)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x240) = in_dr0;
        }
      }
      else {
        if (cVar16 == '\0') {
          dVar11 = CONCAT44D(0x42700000,SUB84(dVar11,0));
        }
        else {
          dVar11 = -0.007812501933585736;
        }
        if (cVar15 == '\0') {
          bVar14 = fVar6 < F32HI(dVar11);
        }
        else {
          bVar14 = in_dr14 < dVar11;
        }
        if (bVar14) {
          if (*(int *)(unsigned)(ar4 + 0x124) == 0) {
            puVar4 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f13c);
            if (cVar16 == '\0') {
              (*(undefined8 *)(fr0_ - 0xc0)) = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x28),*(undefined4 *)(unsigned)puVar4);
            }
            else {
              in_xd0 = *puVar4;
              (*(undefined8 *)(fr0_ - 0xc0)) = *(undefined8 *)(unsigned)(ar4 + 0x28);
            }
            if (cVar15 != '\0' || (float)(*(undefined8 *)(fr0_ - 0xc0)) <= F32HI((*(undefined8 *)(fr0_ - 0xc0)))) {
              ar7_00 = (code *)0x1;
              uVar1 = 0xffffffff;
              uVar7 = 0xe;
              pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xe,0xffffffff,1));
              ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c032204(ar4 + 0xb0,uVar7,uVar1,ar7_00); });
              pcVar8 = ((void *)0x8c074d14);
              (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c074d14(ar4 + 0xb0,uVar7,((void *)0x8c074d14),ar7_00));
              if (cVar16 == '\0') {
                (*(undefined8 *)(fr0_ - 0xc0)) = CONCAT44(pcVar10,(int)((ulonglong)(*(undefined8 *)(fr0_ - 0xc0)) >> 0x20));
              }
              pcVar9 = (code *)0x240;
              uVar12 = (*(undefined8 *)(fr0_ - 0xc0));
              if (cVar16 == '\0') {
                dVar13 = CONCAT44D(SUB84(in_dr14,0),(undefined4)(*(undefined8 *)(fr0_ - 0xc0)));
                uVar12 = in_xd0;
              }
              in_xd0 = uVar12;
              if (cVar15 == '\0') {
                in_dr0 = CONCAT44D(F32HI(dVar13) / F32LO(dVar13),
                                          SUB84(dVar13,0));
              }
              else {
                in_dr0 = dVar13 / dVar13;
              }
              if (cVar16 == '\0') {
                *(int *)(unsigned)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
              }
              else {
                *(double *)(unsigned)(ar4 + 0x240) = in_dr0;
              }
              goto LAB_8c07412a;
            }
          }
          goto LAB_8c07441c;
        }
        ar7_00 = (code *)0x0;
        pcVar8 = (code *)0xffffffff;
        uVar7 = 10;
        pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0));
        uVar7 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c026db0(ar4,uVar7,pcVar8,ar7_00));
        uVar1 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,ar7_00));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 300)), deref_u32(uVar1,uVar7,pcVar8,ar7_00));
        pcVar9 = (code *)(ar4 + 0xb4);
        uVar7 = puVar3[1];
        *(undefined4 *)(unsigned)pcVar9 = *puVar3;
        *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
        *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar3[2];
        if (*(int *)(unsigned)(ar4 + 0x128) == 2) {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137630);
        }
        else {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137690);
        }
        if (cVar16 == '\0') {
          dVar13 = CONCAT44D(SUB84(in_dr14,0),0x42700000);
        }
        else {
          in_xd0 = 0x1eed02742700000;
        }
        if (cVar15 == '\0') {
          in_dr0 = CONCAT44D(F32HI(dVar13) / F32LO(dVar13),
                                    SUB84(dVar13,0));
        }
        else {
          in_dr0 = dVar13 / dVar13;
        }
        if (cVar16 == '\0') {
          *(int *)(unsigned)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x240) = in_dr0;
        }
      }
LAB_8c07412a:
      (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,pcVar9,pcVar8,ar7_00));
    }
LAB_8c074542:
    if (pcVar10 != (code *)0x6) {
      ar7_00 = (code *)0xb0;
      pcVar8 = (code *)(ar4 + 0xb0);
      (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetFrame_033e6e(pcVar8,pcVar9,pcVar8,0xb0));
    }
  case 1:
    uVar7 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c026db0(ar4,pcVar9,pcVar8,ar7_00));
    switch(uVar7) {
    case 1:
    case 4:
    case 0x10:
    case 0x11:
    case 0x12:
      iVar5 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c034148(ar4 + 0xb0,0,pcVar8,ar7_00));
      if (0 < iVar5) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      }
      ar5_00 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031764(ar4,ar6,ar5,ar7_00));
      pcVar8 = ar5;
      break;
    case 2:
    case 3:
    case 9:
    case 10:
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,pcVar8,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c034574(ar4 + 0xb0,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xb4) + 4),pcVar8,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 300)), vec3_copy_8c023d8c(&(*(undefined4 *)(fr0_ - 0x40)),((undefined1 *)(fr0_ - 0x88)),pcVar8,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 300)), object_dtor_delete(((undefined1 *)(fr0_ - 0x88)),0xffffffff,pcVar8,ar7_00));
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x254),(*(undefined4 *)(fr0_ - 0x40)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x3c)),(*(undefined4 *)(fr0_ - 0x40)));
        dVar13 = *(double *)(unsigned)(ar4 + 0x254);
      }
      if (cVar15 == '\0') {
        fVar6 = F32LO(dVar13) - F32HI(dVar13);
      }
      else {
        fVar6 = SUB84(dVar13 - dVar13,0);
      }
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x240),fVar6);
      }
      else {
        dVar13 = *(double *)(unsigned)(ar4 + 0x240);
      }
      if (cVar15 == '\0') {
        (*(float *)(fr0_ - 0x4c)) = F32LO(dVar13) * F32HI(dVar13);
      }
      else {
        (*(float *)(fr0_ - 0x4c)) = SUB84(dVar13 * dVar13,0);
      }
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 600),(*(undefined4 *)(fr0_ - 0x3c)));
      }
      else {
        (*(float *)(fr0_ - 0x4c)) = (float)in_xd0;
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x38)),(*(undefined4 *)(fr0_ - 0x3c)));
        dVar13 = *(double *)(unsigned)(ar4 + 600);
      }
      if (cVar15 == '\0') {
        fVar6 = F32LO(dVar13) - F32HI(dVar13);
      }
      else {
        fVar6 = SUB84(dVar13 - dVar13,0);
      }
      ar6_00 = (double *)(unsigned)(ar4 + 0x240);
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)ar6_00,fVar6);
      }
      else {
        dVar13 = *ar6_00;
      }
      if (cVar15 == '\0') {
        (*(float *)(fr0_ - 0x48)) = F32LO(dVar13) * F32HI(dVar13);
      }
      else {
        (*(float *)(fr0_ - 0x48)) = SUB84(dVar13 * dVar13,0);
      }
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x25c),(*(undefined4 *)(fr0_ - 0x38)));
      }
      else {
        (*(float *)(fr0_ - 0x48)) = (float)in_xd0;
        in_xd0 = CONCAT44(((undefined4 *)(fr0_ - 0x34))[0],(*(undefined4 *)(fr0_ - 0x38)));
        dVar13 = *(double *)(unsigned)(ar4 + 0x25c);
      }
      if (cVar15 == '\0') {
        fVar6 = F32LO(dVar13) - F32HI(dVar13);
      }
      else {
        fVar6 = SUB84(dVar13 - dVar13,0);
      }
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x240),fVar6);
      }
      else {
        dVar13 = *(double *)(unsigned)(ar4 + 0x240);
      }
      if (cVar15 == '\0') {
        fVar6 = F32LO(dVar13) * F32HI(dVar13);
      }
      else {
        fVar6 = SUB84(dVar13 * dVar13,0);
      }
      (*(float *)(fr0_ - 0x44)) = fVar6;
      if (cVar16 != '\0') {
        (*(float *)(fr0_ - 0x44)) = (float)in_xd0;
        (*(undefined4 *)(fr0_ - 0x40)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      (vsp = ((unsigned long)(fr0_ - 300)), vec3_copy_8c023d8c(ar4 + 0x254,&(*(undefined4 *)(fr0_ - 0x40)),ar6_00,0x240));
      ar7_00 = (code *)&(*(float *)(fr0_ - 0x4c));
      ar5_00 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c07c318(ar4,ar6,ar5,ar7_00));
      if (*(int *)(unsigned)(ar4 + 0x44) == 0) {
        (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031e84(ar4,ar6,ar5,ar7_00));
      }
      iVar5 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c034148(ar4 + 0xb0,0,ar5,ar7_00));
      pcVar8 = ar5;
      if (0 < iVar5) {
        if (cVar16 == '\0') {
          dVar13 = CONCAT44D(0x42340000,fVar6);
        }
        else {
          dVar13 = 524288.1293029785;
        }
        if (cVar15 == '\0') {
          bVar14 = SUB84(in_dr14,0) < F32HI(dVar13);
        }
        else {
          bVar14 = in_dr14 < dVar13;
        }
        if (bVar14) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          if (cVar16 == '\0') {
            dVar13 = CONCAT44D(0x41200000,*(undefined4 *)(unsigned)(ar4 + 0x48));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
            dVar13 = -2.1831133447441e+159;
          }
          if (cVar15 == '\0') {
            dVar13 = (double)(ulonglong)(uint)(F32LO(dVar13) + F32HI(dVar13))
            ;
          }
          else {
            dVar13 = dVar13 + dVar13;
          }
          if (cVar16 == '\0') {
            *(int *)(unsigned)(ar4 + 0x48) = SUB84(dVar13,0);
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x48) = in_xd0;
          }
        }
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x3f800000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(dVar13,0));
        }
      }
      break;
    case 0xd:
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c026d7c(ar4,pcVar9,pcVar8,ar7_00));
      (*(undefined4 *)(fr0_ - 0x110)) = SUB84(in_dr0,0);
      uVar7 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar16 == '\0') {
        in_dr0 = CONCAT44D(uVar7,SUB84(in_dr14,0));
        dVar13 = CONCAT44D(0x42700000,(*(undefined4 *)(fr0_ - 0x110)));
        (*(undefined4 *)(fr0_ - 0x110)) = uVar7;
      }
      else {
        dVar13 = 3.74021962707397e-312;
      }
      if (cVar15 == '\0') {
        in_dr0 = CONCAT44D(F32HI(in_dr0) /
                                  F32HI(dVar13),SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 / dVar13;
      }
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c074d14(ar4 + 0xb0,pcVar9,pcVar8,ar7_00); });
      uVar7 = (undefined4)(D2U(dVar13) >> 0x20);
      (*(undefined4 *)(fr0_ - 0x114)) = uVar7;
      if (cVar16 != '\0') {
        (*(undefined4 *)(fr0_ - 0x114)) = SUB84(dVar13,0);
        (*(undefined4 *)(fr0_ - 0x110)) = uVar7;
      }
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c074d14(ar4 + 0xb0,pcVar9,pcVar8,ar7_00); });
      uVar7 = (undefined4)(D2U(dVar13) >> 0x20);
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(uVar7,(*(undefined4 *)(fr0_ - 0x114)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x110)),uVar7);
      }
      if (cVar15 == '\0') {
        fVar6 = F32HI(dVar13);
        in_dr0 = CONCAT44D(fVar6,F32LO(dVar13) * fVar6 * F32HI(in_dr0)
                                 );
      }
      else {
        in_dr0 = dVar13 * dVar13 * in_dr0;
      }
      if (cVar16 == '\0') {
        (*(float *)(fr0_ - 0x48)) = SUB84(in_dr0,0);
      }
      else {
        (*(float *)(fr0_ - 0x48)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x44)) = F32HI(in_xd0);
      }
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c07c318(ar4,ar6,ar5,&(*(float *)(fr0_ - 0x4c))));
      ar7_00 = (code *)0x1;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
      pcVar8 = (code *)0xb0;
      ar4_00 = ar4 + 0xb0;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 300)), CAnimBody_AdvanceFrame_wrapper(ar4_00,ar4_00,0xb0,1));
      if (iVar5 == 1) {
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x3f800000;
          dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(in_dr0,0));
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar13 = *(double *)(unsigned)(ar4 + 0x38);
        }
        if (cVar15 == '\0') {
          fVar6 = F32LO(dVar13) / F32HI(dVar13);
        }
        else {
          fVar6 = SUB84(dVar13 / dVar13,0);
        }
        if (cVar16 == '\0') {
          *(float *)(unsigned)(ar4 + 0x3c) = fVar6;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x3c) = in_xd0;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
        uVar7 = 0;
        (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        ar7_00 = (code *)(ar4 + 0xb0);
        pcVar8 = ((void *)0x8c032204);
        (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c032204(ar7_00,uVar7,((void *)0x8c032204),ar7_00));
        ar5_00 = 0;
      }
      else {
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar4_00,pcVar8,ar7_00); });
        if (cVar16 == '\0') {
          uVar12 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x240),(int)((ulonglong)in_dr0 >> 0x20));
        }
        else {
          uVar12 = *(undefined8 *)(unsigned)(ar4 + 0x240);
        }
        if (cVar15 != '\0' || F32HI(uVar12) <= (float)uVar12) {
          ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c0321fc(ar4 + 0xb0,0xffffffff,pcVar8,ar7_00); });
        }
      }
      break;
    case 0xe:
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c026d7c(ar4,pcVar9,pcVar8,ar7_00));
      (*(undefined4 *)(fr0_ - 0x124)) = SUB84(in_dr0,0);
      uVar7 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar16 == '\0') {
        in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),uVar7);
        dVar13 = CONCAT44D(0x42700000,(*(undefined4 *)(fr0_ - 0x124)));
        (*(undefined4 *)(fr0_ - 0x124)) = uVar7;
      }
      else {
        dVar13 = 3.74021962707397e-312;
      }
      if (cVar15 == '\0') {
        in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),
                                   F32LO(in_dr12) / F32HI(dVar13));
      }
      else {
        in_dr12 = in_dr12 / dVar13;
      }
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c074d14(ar4 + 0xb0,pcVar9,pcVar8,ar7_00); });
      uVar7 = (undefined4)(D2U(dVar13) >> 0x20);
      (*(undefined4 *)(fr0_ - 0x128)) = uVar7;
      if (cVar16 != '\0') {
        (*(undefined4 *)(fr0_ - 0x128)) = SUB84(dVar13,0);
        (*(undefined4 *)(fr0_ - 0x124)) = uVar7;
      }
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c074d14(ar4 + 0xb0,pcVar9,pcVar8,ar7_00); });
      uVar7 = (undefined4)(D2U(dVar13) >> 0x20);
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(uVar7,(*(undefined4 *)(fr0_ - 0x128)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x124)),uVar7);
      }
      if (cVar15 == '\0') {
        fVar6 = F32LO(dVar13) * F32HI(dVar13) * F32LO(in_dr12);
      }
      else {
        fVar6 = SUB84(dVar13 * dVar13 * in_dr12,0);
      }
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(0xbf800000,fVar6);
      }
      else {
        dVar13 = 6.38186089609776e-312;
      }
      if (cVar15 == '\0') {
        fVar6 = F32HI(dVar13);
        dVar13 = CONCAT44D(fVar6,F32LO(dVar13) * fVar6);
      }
      else {
        dVar13 = dVar13 * dVar13;
      }
      if (cVar16 == '\0') {
        (*(float *)(fr0_ - 0x48)) = SUB84(dVar13,0);
      }
      else {
        (*(float *)(fr0_ - 0x48)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x44)) = F32HI(in_xd0);
      }
      ar7_00 = (code *)&(*(float *)(fr0_ - 0x4c));
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c07c318(ar4,ar6,ar5,ar7_00));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 300)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7_00));
      if (iVar5 == 1) {
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x3f800000;
          dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(dVar13,0));
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar13 = *(double *)(unsigned)(ar4 + 0x38);
        }
        if (cVar15 == '\0') {
          fVar6 = F32LO(dVar13) / F32HI(dVar13);
        }
        else {
          fVar6 = SUB84(dVar13 / dVar13,0);
        }
        if (cVar16 == '\0') {
          *(float *)(unsigned)(ar4 + 0x3c) = fVar6;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x3c) = in_xd0;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
        ar7_00 = (code *)0x0;
        pcVar8 = (code *)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c032204(ar4 + 0xb0,((void *)0x8c032204),pcVar8,ar7_00); });
        ar5_00 = 0;
      }
      else {
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar6,ar5,ar7_00); });
        if (cVar16 == '\0') {
          uVar12 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x240),(int)(D2U(dVar13) >> 0x20));
        }
        else {
          uVar12 = *(undefined8 *)(unsigned)(ar4 + 0x240);
        }
        pcVar8 = ar5;
        if (cVar15 != '\0' || F32HI(uVar12) <= (float)uVar12) {
          ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c0321fc(ar4 + 0xb0,0xffffffff,ar5,ar7_00); });
          pcVar8 = ar5;
        }
      }
      break;
    case 0xf:
      ar7_00 = ((void *)0x8c031e84);
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031e84(ar4,pcVar9,pcVar8,((void *)0x8c031e84)));
      pcVar8 = (code *)0x40;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c034148(ar4 + 0xb0,0,0x40,ar7_00));
      if (0 < iVar5) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        ar5_00 = 0;
      }
    }
    break;
  case 3:
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031764(ar4,ar6,ar5,ar7_00));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c026db0(ar4,ar6,ar5,ar7_00));
    pcVar8 = ar5;
    if ((iVar5 < 0x13) && (-1 < iVar5)) {
                    
      switch(iVar5) {
      case 0:
        iVar5 = ar4 + 0xb0;
        pcVar8 = ((void *)0x8c026858);
        (vsp = ((unsigned long)(fr0_ - 300)), CAnimBody_AdvanceFrame_wrapper(iVar5,((void *)0x8c026858),iVar5,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031e84(ar4,pcVar8,iVar5,ar7_00));
        pcVar8 = (code *)0x64;
        ar7_00 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), rand_range(ar4,0,100,ar7_00));
        if ((int)ar7_00 < 10) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        }
        break;
      default:
        (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c034148(ar4 + 0xb0,0,ar5,ar7_00));
        pcVar8 = ar5;
        break;
      case 5:
        break;
      }
    }
    break;
  case 4:
    ar7_00 = ((void *)0x8c031764);
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031764(ar4,ar6,ar5,((void *)0x8c031764)));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 300)), get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar5,ar7_00));
    if (iVar5 == 0) {
      (vsp = ((unsigned long)(fr0_ - 300)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,((void *)0x8c026858),ar5,ar7_00));
      pcVar8 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x128));
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031b68(ar4,(int)pcVar8 * 0x18 + -0x73d7f14c,pcVar8,ar7_00));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c034148(ar4 + 0xb0,0,ar5,ar7_00));
      pcVar8 = ar5;
    }
  }
switchD_8c073da6_caseD_2:
  (vsp = ((unsigned long)(fr0_ - 300)), object_dtor_delete(&(*(float *)(fr0_ - 0x4c)),0xffffffff,pcVar8,ar7_00));
  uVar7 = 0xffffffff;
  puVar3 = &(*(undefined4 *)(fr0_ - 0x40));
  (vsp = ((unsigned long)(fr0_ - 300)), object_dtor_delete(puVar3,0xffffffff,puVar3,0xffffffff));
  (vsp = ((unsigned long)(fr0_ - 300)), Vec3_dtor(((undefined4 *)(fr0_ - 0x34)),0xffffffff,puVar3,uVar7));
  return ar5_00;
}

__asm__(".globl _FUN_8c073cac\n.set _FUN_8c073cac, _FUN_8c073cac_def\n");
