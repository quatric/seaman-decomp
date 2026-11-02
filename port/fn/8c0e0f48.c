#include "../decls.h"
undefined4 FUN_8c0e0f48_def(int *ar4,undefined4 ar5,float *ar6,float *ar7)

{
  int ar4_00;
  int iVar1;
  int iVar2;
  int *ar5_00;
  float *ar5_01;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  double in_dr0;
  double dVar7;
  uint uVar9;
  double dVar8;
  undefined4 in_fr3;
  double in_dr14;
  double in_xd0;
  double dVar10;
  double in_xd14;
  bool bVar11;
  char cVar12;
  char cVar13;
  float afStack_4c [3];
  float fStack_40;
  float fStack_3c;
  double dStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  cVar13 = '\0';
  cVar12 = '\0';
  get_field_300_0bf154(ar4 + 0x29,ar5,ar6,ar7);
  ar4_00 = FUN_8c0da588(ar4 + 0x29,ar5,ar6,ar7);
  Vec3_ctor_zero(&fStack_30,ar5,ar6,ar7);
  Vec3_ctor_zero(&fStack_40,ar5,ar6,ar7);
  Vec3_set_xyz(afStack_4c,ar5,ar6,ar7);
  FUN_8c023040(ar4 + 0x8bae,ar5,ar6,ar7);
  if (cVar13 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
    dVar7 = (double)CONCAT44(0x3f400000,ar4[0x8c03]);
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x8c03);
    dVar7 = 7.38978817419112e-312;
  }
  if (cVar12 == '\0') {
    fVar6 = (float)((ulonglong)dVar7 >> 0x20);
    fVar5 = SUB84(dVar7,0) * fVar6;
    dVar7 = (double)CONCAT44(fVar6,fVar5);
    bVar11 = (float)((ulonglong)in_dr0 >> 0x20) < fVar5;
  }
  else {
    dVar7 = dVar7 * dVar7;
    bVar11 = in_dr0 < dVar7;
  }
  if (bVar11) {
    (**(code **)(*ar4 + 0x15c))(ar4,ar5,ar6,ar7);
    FUN_8c0d56b4(ar4 + 0x42b,ar5,ar6,ar7);
  }
  ar5_00 = ar4 + 0x8bad;
  iVar1 = FUN_8c0d3d6c(ar4 + 0x42b,ar5_00,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c0e1320(ar4 + 0x4edc,ar5_00,ar6,ar7);
  }
  else {
    FUN_8c0d0aac(ar4 + 0x4edc,ar5_00,ar6,ar7);
    FUN_8c0d568c(ar4 + 0x42b,ar5_00,ar6,ar7);
  }
  FUN_8c0d08c0(ar4 + 0x4edc,ar5_00,ar6,ar7);
  iVar1 = get_field_14_0e1318(ar4 + 0x4edc,ar5_00,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = get_field_300_0bf154(ar4 + 0x29,ar5_00,ar6,ar7);
    for (iVar4 = 0; uVar3 = SUB84(in_dr14,0), iVar4 < iVar1; iVar4 = iVar4 + 1) {
      ar7 = &fStack_28;
      ar6 = &fStack_2c;
      ar5_01 = &fStack_30;
      FUN_8c0507a4(ar4_00,ar5_01,ar6,ar7);
      if (cVar13 == '\0') {
        in_dr14 = (double)CONCAT44(fStack_2c,uVar3);
      }
      else {
        in_dr14 = (double)CONCAT44(fStack_28,fStack_2c);
      }
      FUN_8c0e130c(ar4 + 0x42b,ar5_01,ar6,ar7);
      if (cVar12 == '\0') {
        bVar11 = (float)((ulonglong)dVar7 >> 0x20) < (float)((ulonglong)in_dr14 >> 0x20);
      }
      else {
        bVar11 = dVar7 < in_dr14;
      }
      if ((!bVar11) &&
         (iVar2 = (**(code **)(*(int *)(ar4_00 + 8) + 200))(ar4_00,ar5_01,ar6,ar7), iVar2 == 1)) {
        if (cVar13 == '\0') {
          dVar7 = (double)CONCAT44(0x44861000,fStack_30);
        }
        else {
          in_xd0 = (double)CONCAT44(fStack_2c,fStack_30);
          dVar7 = 3.03513869969298e-309;
        }
        if (cVar12 == '\0') {
          fStack_30 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fStack_30 = SUB84(dVar7 - dVar7,0);
        }
        if (cVar13 == '\0') {
          dVar7 = (double)CONCAT44(0x43320000,fStack_2c);
        }
        else {
          fStack_30 = SUB84(in_xd0,0);
          fStack_2c = (float)((ulonglong)in_xd0 >> 0x20);
          in_xd0 = (double)CONCAT44(fStack_28,fStack_2c);
          dVar7 = 1.3023403680263821e+22;
        }
        if (cVar12 == '\0') {
          fStack_2c = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fStack_2c = SUB84(dVar7 - dVar7,0);
        }
        if (cVar13 == '\0') {
          dVar7 = (double)CONCAT44(0x44358000,fStack_28);
        }
        else {
          fStack_2c = SUB84(in_xd0,0);
          fStack_28 = (float)((ulonglong)in_xd0 >> 0x20);
          in_xd0 = (double)CONCAT44(uStack_24,fStack_28);
          dVar7 = 5066550725148672.0;
        }
        if (cVar12 == '\0') {
          fStack_28 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fStack_28 = SUB84(dVar7 - dVar7,0);
        }
        if (cVar13 == '\0') {
          dStack_38 = (double)CONCAT44((*(uint*)((uchar*)&dStack_38+4)),fStack_28);
          dVar10 = (double)CONCAT44(fStack_28,fStack_28);
        }
        else {
          fStack_28 = SUB84(in_xd0,0);
          uStack_24 = (undefined4)((ulonglong)in_xd0 >> 0x20);
          dVar10 = in_xd0;
          dStack_38 = in_xd0;
          fStack_3c = fStack_2c;
        }
        fStack_40 = CONCAT44(fStack_3c,fStack_30);
        Vec3_length_sq(&fStack_40,ar5_01,ar6,ar7);
        uVar3 = SUB84(in_dr0,0);
        if (cVar13 == '\0') {
          dVar7 = (double)CONCAT44(0x443b8000,(int)((ulonglong)dVar10 >> 0x20));
        }
        else {
          dVar7 = -7.937140160381387e-251;
          in_xd0 = dVar10;
        }
        if (cVar12 == '\0' && SUB84(dVar7,0) < (float)((ulonglong)dVar7 >> 0x20)) {
          Vec3_length(&fStack_30,ar5_01,ar6,ar7);
          if (cVar13 == '\0') {
            dVar7 = (double)CONCAT44(0x43320000,SUB84(dVar7,0));
          }
          else {
            dVar7 = 1.3023403680263821e+22;
          }
          fVar5 = (float)((ulonglong)dVar7 >> 0x20);
          if (cVar12 == '\0') {
            in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) - fVar5,SUB84(in_dr14,0))
            ;
          }
          else {
            in_dr14 = in_dr14 - dVar7;
          }
          if (cVar13 == '\0') {
            dVar7 = (double)CONCAT44(fVar5,0x44348000);
          }
          else {
            in_xd0 = 0.008437501388982582;
          }
          fVar5 = (float)((ulonglong)in_dr14 >> 0x20);
          if (cVar12 == '\0') {
            fVar6 = SUB84(dVar7,0) - fVar5;
          }
          else {
            fVar6 = SUB84(dVar7 - in_dr14,0);
          }
          if (cVar13 == '\0') {
            dVar7 = (double)CONCAT44(0x44348000,fVar6);
          }
          else {
            dVar7 = 0.008437501388982582;
          }
          if (cVar12 == '\0') {
            fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar7 / dVar7,0);
          }
          if (cVar13 == '\0') {
            dVar7 = (double)CONCAT44(0x3f8147ae,fVar6);
          }
          else {
            dVar7 = 5.377642808889976e-19;
          }
          if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar7,0),
                                     SUB84(dVar7,0));
          }
          else {
            dVar7 = dVar7 - dVar7;
          }
          dVar10 = dVar7;
          dVar8 = dVar7;
          if (cVar13 == '\0') {
            uVar9 = (uint)((ulonglong)dVar7 >> 0x20);
            in_dr14 = (double)CONCAT44(fVar5,uVar9);
            dVar7 = (double)(ulonglong)uVar9;
            dVar10 = in_xd0;
            dVar8 = in_xd14;
          }
          in_xd14 = dVar8;
          if (cVar12 == '\0' && SUB84(dVar7,0) < 0.0) {
            if (cVar13 == '\0') {
              in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),0x3c23d70a);
            }
            else {
              in_xd14 = 134217758.07;
            }
          }
          fVar5 = SUB84(in_dr14,0);
          if (cVar13 == '\0') {
            dVar7 = (double)CONCAT44(fStack_30,uVar3);
            dVar8 = (double)CONCAT44(fVar5,0x41a00000);
          }
          else {
            dVar7 = (double)CONCAT44(fStack_2c,fStack_30);
            dVar10 = -1.362436379967432e-249;
            dVar8 = in_xd14;
          }
          if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) *
                                     (float)((ulonglong)dVar8 >> 0x20) * SUB84(dVar8,0),
                                     SUB84(dVar7,0));
          }
          else {
            dVar7 = dVar7 * dVar8 * dVar8;
          }
          fStack_30 = SUB84(dVar7,0);
          fVar6 = (float)((ulonglong)dVar7 >> 0x20);
          if (cVar13 == '\0') {
            in_dr0 = (double)CONCAT44(fStack_2c,fStack_30);
            dVar7 = (double)CONCAT44(fVar5,0x41a00000);
            fStack_30 = fVar6;
          }
          else {
            in_dr0 = (double)CONCAT44(fStack_28,fVar6);
            dVar10 = -1.362436379967432e-249;
            dVar7 = in_xd14;
          }
          if (cVar12 == '\0') {
            in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) *
                                      (float)((ulonglong)dVar7 >> 0x20) * SUB84(dVar7,0),
                                      SUB84(in_dr0,0));
          }
          else {
            in_dr0 = in_dr0 * dVar7 * dVar7;
          }
          fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
          if (cVar13 == '\0') {
            dVar7 = (double)CONCAT44(0x41a00000,fStack_28);
            in_xd0 = dVar10;
            fStack_2c = fVar6;
          }
          else {
            fStack_2c = SUB84(in_dr0,0);
            in_xd0 = (double)CONCAT44(uStack_24,fVar6);
            dVar7 = -1.362436379967432e-249;
          }
          fVar6 = (float)((ulonglong)dVar7 >> 0x20);
          if (cVar12 == '\0') {
            fVar5 = fVar5 * fVar6;
            in_dr14 = (double)(ulonglong)(uint)fVar5;
            dVar7 = (double)CONCAT44(fVar6,SUB84(dVar7,0) * fVar5);
          }
          else {
            in_dr14 = in_dr14 * dVar7;
            dVar7 = dVar7 * in_dr14;
          }
          if (cVar13 == '\0') {
            fStack_28 = SUB84(dVar7,0);
          }
          else {
            fStack_28 = SUB84(in_xd0,0);
            uStack_24 = (undefined4)((ulonglong)in_xd0 >> 0x20);
          }
          FUN_8c023bf4(&fStack_30,&DAT_8c438264,ar6,ar7);
          (**(code **)(*(int *)(ar4_00 + 8) + 0x9c))(ar4_00,&fStack_30,ar6,ar7);
          ar5_01 = afStack_4c;
          (**(code **)(*(int *)(ar4_00 + 8) + 0xa0))(ar4_00,ar5_01,ar6,ar7);
        }
      }
      ar4_00 = list_node_next(ar4_00,ar5_01,ar6,ar7);
    }
    dVar10 = _DAT_8c438264;
    if (cVar13 == '\0') {
      dVar7 = (double)((ulonglong)_DAT_8c438264 & 0xffffffff);
      dVar10 = in_xd0;
    }
    dVar8 = _DAT_8c438264;
    if (cVar12 == '\0' && SUB84(dVar7,0) < 1.0) {
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x3dcccccd,SUB84(_DAT_8c438264,0));
      }
      else {
        dVar7 = -1.2971028142978771e-250;
        dVar10 = _DAT_8c438264;
      }
      if (cVar12 == '\0') {
        fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 + dVar7,0);
      }
      dVar8 = dVar10;
      if (cVar13 == '\0') {
        _DAT_8c438264 = (double)CONCAT44(_DAT_8c438268,fVar5);
        dVar8 = _DAT_8c438264;
      }
    }
  }
  else {
    dVar8 = (double)((ulonglong)dVar7 & 0xffffffff);
    if (cVar13 == '\0') {
      _DAT_8c438264 = (double)((ulonglong)_DAT_8c438264 & 0xffffffff00000000);
      dVar8 = _DAT_8c438264;
    }
  }
  _DAT_8c438264 = dVar8;
  FUN_8c0db7d4(ar4,1,ar6,ar7);
  uVar3 = 3;
  FUN_8c0db7d4(ar4,3,ar6,ar7);
  FUN_8c0d0a44(ar4 + 0x4edc,uVar3,ar6,ar7);
  object_dtor_delete(afStack_4c,0xffffffff,ar6,ar7);
  Vec3_dtor(&fStack_40,0xffffffff,ar6,ar7);
  uVar3 = Vec3_dtor(&fStack_30,0xffffffff,ar6,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c0e0f48\n.set _FUN_8c0e0f48, _FUN_8c0e0f48_def\n");
