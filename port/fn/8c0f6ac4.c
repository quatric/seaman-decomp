#include "../decls.h"
undefined4 FUN_8c0f6ac4_def(ulonglong *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  int *piVar2;
  uint *a5;
  float *a6;
  float *a7;
  uint uVar3;
  float fVar4;
  ulonglong in_dr0;
  double dVar5;
  float fVar9;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined4 in_fr15;
  ulonglong in_xd0;
  ulonglong in_xd14;
  bool bVar10;
  undefined4 in_PR;
  char cVar11;
  char cVar12;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [4];
  float fStack_30;
  float afStack_2c [2];
  uint uStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  cVar12 = '\0';
  cVar11 = '\0';
  piVar2 = ar5;
  uStack_18 = in_PR;
  FUN_8c102748(&uStack_24,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_34,piVar2,ar6,ar7);
  Vec3_ctor_zero(auStack_44,piVar2,ar6,ar7);
  a7 = &fStack_1c;
  a6 = &fStack_20;
  a5 = &uStack_24;
  piVar2 = ar5;
  (**(code **)(*ar5 + 0x120))(ar5,a5,a6,a7);
  dVar8 = (double)CONCAT44(0x3f800000,in_fr15);
  uVar3 = (uint)in_dr0;
  if (((uint)ar4[9] == 0) && ((uint)ar4[10] == 0)) {
    if (cVar12 == '\0') {
      dVar5 = (double)CONCAT44(*(uint *)((int)ar4 + 0x44),uVar3);
    }
    else {
      dVar5 = *(double *)((int)ar4 + 0x44);
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + 1.0,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 + dVar8;
    }
    if (cVar12 == '\0') {
      *(uint *)((int)ar4 + 0x44) = (uint)((ulonglong)dVar5 >> 0x20);
    }
    else {
      *(double *)((int)ar4 + 0x44) = dVar5;
    }
  }
  else {
    *(uint *)(ar4 + 5) = (uint)ar4[5] + 1;
    if ((int)(uint)ar4[5] < 0xb5) {
      if (cVar12 == '\0') {
        *(uint *)((int)ar4 + 0x44) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x44) = in_dr0 & 0xffffffff;
      }
    }
    else {
      ar4_00 = rand(piVar2,a5,a6,a7);
      iVar1 = libgcc_divide_helper_01031c(ar4_00,10,a6,a7);
      if ((iVar1 == 0) || (iVar1 = FUN_8c0f72ec(ar4,ar5,a6,a7), iVar1 != 0)) {
        if (cVar12 == '\0') {
          *(uint *)((int)ar4 + 0x44) = 0;
        }
        else {
          *(ulonglong *)((int)ar4 + 0x44) = (ulonglong)uVar3;
        }
      }
      else {
        if (cVar12 == '\0') {
          dVar5 = (double)CONCAT44(0x3dcccccd,*(uint *)((int)ar4 + 0x44));
        }
        else {
          in_xd0 = *(ulonglong *)((int)ar4 + 0x44);
          dVar5 = 4.07935454911844e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar5 + dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)((int)ar4 + 0x44) = fVar4;
        }
        else {
          *(ulonglong *)((int)ar4 + 0x44) = in_xd0;
        }
      }
    }
    if (*(uint *)((int)ar4 + 100) == 0) {
      a7 = afStack_2c;
      a6 = &fStack_30;
      (**(code **)(*ar5 + 0x13c))(ar5,auStack_34,a6,a7);
      Vec3_sub(ar4,auStack_34,a6,a7,auStack_54);
      Vec3_assign(auStack_44,auStack_54,a6,a7);
      Vec3_dtor(auStack_54,0xffffffff,a6,a7);
      FUN_8c02174c(0x8c2b59d0,0x28,a6,a7);
      *(uint *)((int)ar4 + 100) = 1;
    }
  }
  Vec3_scale((uint *)((int)ar4 + 0x34),ar4 + 6,a6,a7,auStack_64);
  FUN_8c023aa0(ar4,auStack_64,a6,a7);
  Vec3_dtor(auStack_64,0xffffffff,a6,a7);
  if (cVar12 == '\0') {
    dVar5 = (double)CONCAT44(*(uint *)((int)ar4 + 0x44),*(uint *)((int)ar4 + 4));
  }
  else {
    in_xd0 = *(ulonglong *)((int)ar4 + 4);
    dVar5 = *(double *)((int)ar4 + 0x44);
  }
  if (cVar11 == '\0') {
    fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 - dVar5,0);
  }
  if (cVar12 == '\0') {
    *(float *)((int)ar4 + 4) = fVar4;
    uVar6 = CONCAT44(uStack_24,(uint)*ar4);
  }
  else {
    *(ulonglong *)((int)ar4 + 4) = in_xd0;
    in_xd0 = *ar4;
    uVar6 = CONCAT44(fStack_20,uStack_24);
  }
  if (cVar11 == '\0' && (float)uVar6 < (float)(uVar6 >> 0x20)) {
    if (cVar12 == '\0') {
      uVar6 = (ulonglong)(uint)*ar4;
    }
    else {
      in_xd0 = *ar4;
    }
    if (cVar11 != '\0' || (float)uVar6 <= 0.0) {
      if (cVar12 == '\0') {
        *(uint *)ar4 = 0;
      }
      else {
        *ar4 = uVar6 & 0xffffffff;
      }
      fVar4 = (float)(int)(uint)ar4[9];
      if (cVar12 == '\0') {
        fVar9 = 3.0;
      }
      else {
        fVar4 = 3.0;
        fVar9 = 1.8;
      }
      if (cVar11 == '\0' && fVar4 < fVar9) {
        if (cVar12 == '\0') {
          dVar5 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x1c));
        }
        else {
          in_xd0 = *(ulonglong *)((int)ar4 + 0x1c);
          dVar5 = 4.41904794563714e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar5 / dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)((int)ar4 + 0x1c) = fVar4;
          dVar5 = (double)CONCAT44(0x3fe66666,(uint)ar4[4]);
        }
        else {
          *(ulonglong *)((int)ar4 + 0x1c) = in_xd0;
          in_xd0 = ar4[4];
          dVar5 = 4.41904794563714e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(ar4 + 4) = fVar4;
          dVar5 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x24));
        }
        else {
          ar4[4] = in_xd0;
          in_xd0 = *(ulonglong *)((int)ar4 + 0x24);
          dVar5 = 4.41904794563714e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)((int)ar4 + 0x24) = fVar4;
        }
        else {
          *(ulonglong *)((int)ar4 + 0x24) = in_xd0;
        }
        if (cVar12 == '\0') {
          *(uint *)(ar4 + 6) = 0;
        }
        else {
          ar4[6] = (ulonglong)(uint)fVar4;
        }
        *(uint *)(ar4 + 9) = (uint)ar4[9] + 1;
        if (cVar12 == '\0') {
          *(uint *)((int)ar4 + 0x44) = 0;
        }
        else {
          *(ulonglong *)((int)ar4 + 0x44) = (ulonglong)(uint)fVar4;
        }
      }
    }
  }
  else {
    if (cVar12 == '\0') {
      *(uint *)ar4 = uStack_24;
    }
    else {
      *ar4 = CONCAT44(fStack_20,uStack_24);
    }
    fVar4 = (float)(int)(uint)ar4[9];
    if (cVar12 == '\0') {
      fVar9 = 3.0;
    }
    else {
      fVar4 = 3.0;
      fVar9 = 1.8;
    }
    if (cVar11 == '\0' && fVar4 < fVar9) {
      if (cVar12 == '\0') {
        dVar5 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x1c));
      }
      else {
        in_xd0 = *(ulonglong *)((int)ar4 + 0x1c);
        dVar5 = -1.4876824575960095e+234;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 / dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)((int)ar4 + 0x1c) = fVar4;
        dVar5 = (double)CONCAT44(0x3fe66666,(uint)ar4[4]);
      }
      else {
        *(ulonglong *)((int)ar4 + 0x1c) = in_xd0;
        in_xd0 = ar4[4];
        dVar5 = -1.4876824575960095e+234;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 4) = fVar4;
        dVar5 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x24));
      }
      else {
        ar4[4] = in_xd0;
        in_xd0 = *(ulonglong *)((int)ar4 + 0x24);
        dVar5 = -1.4876824575960095e+234;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)((int)ar4 + 0x24) = fVar4;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x24) = in_xd0;
      }
      if (cVar12 == '\0') {
        *(uint *)(ar4 + 6) = 0;
      }
      else {
        ar4[6] = (ulonglong)(uint)fVar4;
      }
      *(uint *)(ar4 + 9) = (uint)ar4[9] + 1;
      if (cVar12 == '\0') {
        *(uint *)((int)ar4 + 0x44) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x44) = (ulonglong)(uint)fVar4;
      }
    }
  }
  if (cVar12 == '\0') {
    uVar6 = CONCAT44(fStack_1c,(uint)ar4[1]);
  }
  else {
    in_xd0 = ar4[1];
    uVar6 = CONCAT44(uStack_18,fStack_1c);
  }
  if (cVar11 == '\0' && (float)uVar6 < (float)(uVar6 >> 0x20)) {
    if (cVar12 == '\0') {
      uVar6 = (ulonglong)(uint)ar4[1];
    }
    else {
      in_xd0 = ar4[1];
    }
    uVar7 = uVar6 & 0xffffffff;
    if (cVar11 != '\0' || (float)uVar6 <= 0.0) {
      if (cVar12 == '\0') {
        *(uint *)(ar4 + 1) = 0;
      }
      else {
        ar4[1] = uVar6 & 0xffffffff;
      }
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(0x40400000,(float)(int)(uint)ar4[10]);
      }
      else {
        uVar7 = 0x3fe6666640400000;
      }
      if (cVar11 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
        if (cVar12 == '\0') {
          dVar5 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x24));
        }
        else {
          in_xd0 = *(ulonglong *)((int)ar4 + 0x24);
          dVar5 = 6.28640424168658e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar5 / dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)((int)ar4 + 0x24) = fVar4;
          dVar5 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x1c));
        }
        else {
          *(ulonglong *)((int)ar4 + 0x24) = in_xd0;
          in_xd0 = *(ulonglong *)((int)ar4 + 0x1c);
          dVar5 = 6.28640424168658e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)((int)ar4 + 0x1c) = fVar4;
          dVar5 = (double)CONCAT44(0x3fe66666,(uint)ar4[4]);
        }
        else {
          *(ulonglong *)((int)ar4 + 0x1c) = in_xd0;
          in_xd0 = ar4[4];
          dVar5 = 6.28640424168658e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(ar4 + 4) = fVar4;
        }
        else {
          ar4[4] = in_xd0;
        }
        if (cVar12 == '\0') {
          *(uint *)(ar4 + 6) = 0;
        }
        else {
          ar4[6] = (ulonglong)(uint)fVar4;
        }
        *(uint *)(ar4 + 10) = (uint)ar4[10] + 1;
        uVar7 = (ulonglong)(uint)fVar4;
        if (cVar12 == '\0') {
          *(uint *)((int)ar4 + 0x44) = 0;
        }
        else {
          *(ulonglong *)((int)ar4 + 0x44) = uVar7;
        }
      }
    }
  }
  else {
    if (cVar12 == '\0') {
      *(float *)(ar4 + 1) = fStack_1c;
    }
    else {
      ar4[1] = CONCAT44(uStack_18,fStack_1c);
    }
    if (cVar12 == '\0') {
      uVar7 = CONCAT44(0x40400000,(float)(int)(uint)ar4[10]);
    }
    else {
      uVar7 = 0x3fe6666640400000;
    }
    if (cVar11 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
      if (cVar12 == '\0') {
        dVar5 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x24));
      }
      else {
        in_xd0 = *(ulonglong *)((int)ar4 + 0x24);
        dVar5 = 4.41904794563714e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 / dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)((int)ar4 + 0x24) = fVar4;
        dVar5 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x1c));
      }
      else {
        *(ulonglong *)((int)ar4 + 0x24) = in_xd0;
        in_xd0 = *(ulonglong *)((int)ar4 + 0x1c);
        dVar5 = 4.41904794563714e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)((int)ar4 + 0x1c) = fVar4;
        dVar5 = (double)CONCAT44(0x3fe66666,(uint)ar4[4]);
      }
      else {
        *(ulonglong *)((int)ar4 + 0x1c) = in_xd0;
        in_xd0 = ar4[4];
        dVar5 = 4.41904794563714e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 4) = fVar4;
      }
      else {
        ar4[4] = in_xd0;
      }
      if (cVar12 == '\0') {
        *(uint *)(ar4 + 6) = 0;
      }
      else {
        ar4[6] = (ulonglong)(uint)fVar4;
      }
      *(uint *)(ar4 + 10) = (uint)ar4[10] + 1;
      uVar7 = (ulonglong)(uint)fVar4;
      if (cVar12 == '\0') {
        *(uint *)((int)ar4 + 0x44) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x44) = uVar7;
      }
    }
  }
  (**(code **)(*ar5 + 0x128))(ar5,ar4,a6,a7);
  if (cVar12 == '\0') {
    dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),(int)(uVar7 >> 0x20));
    uVar7 = in_xd14;
    fVar4 = *(float *)((int)ar4 + 4);
    fVar9 = fStack_20;
  }
  else {
    in_xd0 = *(ulonglong *)((int)ar4 + 4);
    fVar4 = fStack_20;
    fVar9 = fStack_1c;
  }
  if (cVar11 == '\0' && fVar4 < fVar9) {
    if (cVar12 == '\0') {
      dVar5 = (double)CONCAT44(*(uint *)((int)ar4 + 4),fVar4);
    }
    else {
      dVar5 = *(double *)((int)ar4 + 4);
    }
    if (cVar11 == '\0') {
      bVar10 = SUB84(dVar8,0) < (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      bVar10 = dVar8 < dVar5;
    }
    if (!bVar10) {
      if (cVar12 == '\0') {
        *(float *)((int)ar4 + 4) = SUB84(dVar8,0);
      }
      else {
        *(ulonglong *)((int)ar4 + 4) = uVar7;
      }
      *(uint *)((int)ar4 + 0x2c) = *(uint *)((int)ar4 + 0x2c) + 1;
      if (((uint)ar4[9] == 0) && ((uint)ar4[10] == 0)) {
        fVar4 = (float)(int)*(uint *)((int)ar4 + 0x4c);
        if (cVar12 == '\0') {
          fVar9 = 3.0;
        }
        else {
          fVar4 = 3.0;
          fVar9 = 1.8;
        }
        if (cVar11 == '\0' && fVar4 < fVar9) {
          if (cVar12 == '\0') {
            dVar8 = (double)CONCAT44(0x3fe66666,(uint)ar4[4]);
          }
          else {
            in_xd0 = ar4[4];
            dVar8 = 2.80633114450354e-312;
          }
          if (cVar11 == '\0') {
            fVar4 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar8 / dVar8,0);
          }
          if (cVar12 == '\0') {
            *(float *)(ar4 + 4) = fVar4;
            dVar8 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x1c));
          }
          else {
            ar4[4] = in_xd0;
            in_xd0 = *(ulonglong *)((int)ar4 + 0x1c);
            dVar8 = 2.80633114450354e-312;
          }
          if (cVar11 == '\0') {
            fVar4 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar8 * dVar8,0);
          }
          if (cVar12 == '\0') {
            *(float *)((int)ar4 + 0x1c) = fVar4;
            dVar8 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x24));
          }
          else {
            *(ulonglong *)((int)ar4 + 0x1c) = in_xd0;
            in_xd0 = *(ulonglong *)((int)ar4 + 0x24);
            dVar8 = 2.80633114450354e-312;
          }
          if (cVar11 == '\0') {
            fVar4 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar8 * dVar8,0);
          }
          if (cVar12 == '\0') {
            *(float *)((int)ar4 + 0x24) = fVar4;
          }
          else {
            *(ulonglong *)((int)ar4 + 0x24) = in_xd0;
          }
          if (cVar12 == '\0') {
            *(uint *)(ar4 + 6) = 0;
          }
          else {
            ar4[6] = (ulonglong)(uint)fVar4;
          }
          *(uint *)((int)ar4 + 0x4c) = *(uint *)((int)ar4 + 0x4c) + 1;
          if (cVar12 == '\0') {
            *(uint *)((int)ar4 + 0x44) = 0;
          }
          else {
            *(ulonglong *)((int)ar4 + 0x44) = (ulonglong)(uint)fVar4;
          }
        }
      }
    }
  }
  else {
    if (cVar12 == '\0') {
      *(float *)((int)ar4 + 4) = fStack_20;
    }
    else {
      *(ulonglong *)((int)ar4 + 4) = CONCAT44(fStack_1c,fStack_20);
    }
    fVar4 = (float)(int)*(uint *)((int)ar4 + 0x4c);
    if (cVar12 == '\0') {
      fVar9 = 3.0;
    }
    else {
      fVar4 = 3.0;
      fVar9 = 1.8;
    }
    if (cVar11 == '\0' && fVar4 < fVar9) {
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(0x3fe66666,(uint)ar4[4]);
      }
      else {
        in_xd0 = ar4[4];
        dVar8 = 6.28640424168658e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar8 / dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 4) = fVar4;
        dVar8 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x1c));
      }
      else {
        ar4[4] = in_xd0;
        in_xd0 = *(ulonglong *)((int)ar4 + 0x1c);
        dVar8 = 6.28640424168658e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)((int)ar4 + 0x1c) = fVar4;
        dVar8 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x24));
      }
      else {
        *(ulonglong *)((int)ar4 + 0x1c) = in_xd0;
        in_xd0 = *(ulonglong *)((int)ar4 + 0x24);
        dVar8 = 6.28640424168658e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)((int)ar4 + 0x24) = fVar4;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x24) = in_xd0;
      }
      if (cVar12 == '\0') {
        *(uint *)(ar4 + 6) = 0;
      }
      else {
        ar4[6] = (ulonglong)(uint)fVar4;
      }
      *(uint *)((int)ar4 + 0x4c) = *(uint *)((int)ar4 + 0x4c) + 1;
      if (cVar12 == '\0') {
        *(uint *)((int)ar4 + 0x44) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x44) = (ulonglong)(uint)fVar4;
      }
    }
  }
  Vec3_dtor(auStack_44,0xffffffff,a6,a7);
  Vec3_dtor(auStack_34,0xffffffff,a6,a7);
  free_if_nonnull_wrap_102790(&uStack_24,0xffffffff,a6,a7);
  return 0;
}

__asm__(".globl _FUN_8c0f6ac4\n.set _FUN_8c0f6ac4, _FUN_8c0f6ac4_def\n");
