#include "../decls.h"
undefined4 Class_12acc8_m1_09f470_def(int *ar4,int *ar5,code *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  code *pcVar9;
  int *a5;
  undefined4 uVar10;
  code *pcVar11;
  undefined4 ar6_00;
  undefined4 *ar6_01;
  undefined4 in_fr1;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double in_dr14;
  double in_xd0;
  char cVar17;
  char cVar18;
  undefined4 in_stack_fffffeb8;
  undefined2 uVar19;
  undefined8 uStack_108;
  float fStack_100;
  float fStack_fc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 auStack_b0 [4];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [32];
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  uVar19 = (undefined2)((uint)in_stack_fffffeb8 >> 0x10);
  cVar18 = '\0';
  cVar17 = '\0';
  piVar7 = ar5;
  pcVar11 = ar6;
  Vec3_ctor_zero(&iStack_24,ar5,ar6,ar7);
  Vec3_ctor_zero(&fStack_34,piVar7,pcVar11,ar7);
  puVar8 = auStack_54;
  puVar5 = &DAT_8c13aea4;
  iVar4 = 0x10;
  do {
    puVar6 = puVar5 + 1;
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar8[1] = *puVar6;
    puVar8 = puVar8 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (cVar18 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),0xbf800000);
    uStack_b8 = 0;
  }
  else {
    auStack_b0[0] = 0;
    uStack_b8 = in_fr1;
  }
  uStack_b4 = 0;
  DAT_8c13ae98 = ar4[0x20a];
  DAT_8c13ae9c = ar4[0x20b];
  DAT_8c13aea0 = ar4[0x20c];
  uVar1 = FUN_8c1011b0(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),0xa0,pcVar11,ar7);
  uVar3 = CONCAT22(uVar19,(ushort)uVar1);
  if (0x78 < (ushort)uVar1) {
    ar4[0x27] = 0;
  }
  iVar4 = (**(code **)(*ar5 + 0x11c))(ar5,2,pcVar11,ar7);
  if (iVar4 == 1) {
    uVar10 = 0;
    uVar1 = (**(code **)(*ar5 + 0x100))(ar5,2,0,ar7);
    FUN_8c02f670(uVar1,FUN_8c02f670,uVar10,ar7,auStack_80);
    Vec3_assign(&iStack_24,auStack_80,uVar10,ar7);
    Vec3_dtor(auStack_80,0xffffffff,uVar10,ar7);
    if (cVar18 == '\0') {
      ar4[0x1c] = iStack_24;
      ar4[0x1d] = iStack_20;
      dVar16 = (double)CONCAT44(iStack_1c,in_fr1);
      ar4[0x1e] = iStack_1c;
    }
    else {
      *(ulonglong *)(ar4 + 0x1c) = CONCAT44(iStack_20,iStack_24);
      *(ulonglong *)(ar4 + 0x1d) = CONCAT44(iStack_1c,iStack_20);
      dVar16 = (double)CONCAT44(uStack_18,iStack_1c);
      *(double *)(ar4 + 0x1e) = dVar16;
    }
    pcVar11 = (code *)(ar4 + 0x1d);
  }
  else if (cVar18 == '\0') {
    ar4[0x1e] = -0x383cb000;
    ar4[0x1d] = -0x383cb000;
    dVar16 = (double)CONCAT44(0xc7c35000,in_fr1);
    ar4[0x1c] = -0x383cb000;
  }
  else {
    ar4[0x1e] = -0x383cb000;
    ar4[0x1f] = 0x11c;
    ar4[0x1d] = -0x383cb000;
    ar4[0x1e] = 0x11c;
    dVar16 = 6.04302648840037e-312;
    ar4[0x1c] = -0x383cb000;
    ar4[0x1d] = 0x11c;
  }
  iVar4 = (**(code **)(*ar5 + 0x11c))(ar5,3,pcVar11,ar7);
  if (0 < iVar4) {
    FUN_8c02cbd4(*(int *)(ar6 + 4) + 0xa8,999,pcVar11,ar7,uVar3);
  }
  pcVar11 = ar6;
  FUN_8c0a0040(ar4,ar5,ar6,ar7);
  iVar4 = (int)*(char *)((int)ar4 + 0x82);
  dVar14 = dVar16;
  if ((*(char *)((int)ar4 + 0x82) == '\x01') && (ar4[1] != 1)) {
    (**(code **)(*ar5 + 0x178))(ar5,1,pcVar11,ar7);
    if (cVar18 == '\0') {
      dVar14 = (double)CONCAT44(0x41200000,(int)((ulonglong)dVar16 >> 0x20));
    }
    else {
      dVar14 = 3.48547133842862e-312;
      in_xd0 = dVar16;
    }
    if (cVar17 == '\0' && (float)((ulonglong)dVar14 >> 0x20) < SUB84(dVar14,0)) {
      if ((char)ar4[0x29] == '\0') {
        *(undefined1 *)(ar4 + 0x29) = 1;
        ar4[1] = 0xc;
        ar4[0x10] = 4;
        ar4[2] = 0x55;
        ar4[3] = 0;
        iVar4 = 0x505;
        FUN_8c02f298(ar4,0x505,pcVar11,ar7);
      }
      else {
        uVar1 = rand((int)(char)ar4[0x29],iVar4,pcVar11,ar7);
        iVar4 = 3000;
        iVar2 = libgcc_divide_helper_01031c(uVar1,3000,pcVar11,ar7);
        if (iVar2 == 1) {
          ar4[1] = 0xc;
          ar4[0x10] = 4;
          ar4[2] = 0x55;
          ar4[3] = 0;
          iVar4 = 0x505;
          FUN_8c02f298(ar4,0x505,pcVar11,ar7);
        }
      }
      *(undefined1 *)((int)ar4 + 0x82) = 0;
      goto LAB_8c09f768;
    }
  }
  *(undefined1 *)(ar4 + 0x29) = 0;
LAB_8c09f768:
  iVar2 = (**(code **)(*(int *)(*(int *)ar6 + 8) + 0xb8))(*(int *)ar6,iVar4,pcVar11,ar7);
  if ((iVar2 == 1) && (ar4[1] != 1)) {
    ar4[1] = 0xb;
    ar4[2] = 99;
    if (ar4[0x1b] != 0) {
      (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],iVar4,pcVar11,ar7);
      ar4[0x1b] = 0;
    }
    pcVar11 = get_field_6c_02f46c;
    iVar2 = get_field_6c_02f46c(*(int *)ar6,iVar4,get_field_6c_02f46c,ar7);
    if ((iVar2 == 0) && (iVar4 = get_field_70_05f490(*(int *)ar6,iVar4,pcVar11,ar7), iVar4 == 0)) {
      FUN_8c0f4d84(*(int *)ar6,FUN_8c0f4d84,pcVar11,ar7);
    }
  }
  pcVar9 = ar6;
  FUN_8c02f20c(ar4,ar6,pcVar11,ar7);
  uVar1 = get_field_4_05eed8(ar4,pcVar9,pcVar11,ar7);
  piVar7 = ar4;
  a5 = ar5;
  pcVar11 = ar6;
  FUN_8c09ff1c(ar4,ar5,ar6,uVar1);
  if (ar4[1] != 1) {
    piVar7 = ar5;
    (**(code **)(*ar5 + 0x178))(ar5,a5,pcVar11,uVar1);
    if (cVar18 == '\0') {
      dVar16 = (double)CONCAT44(0x41200000,(int)((ulonglong)dVar14 >> 0x20));
    }
    else {
      dVar16 = 2.74277281159077e-312;
      in_xd0 = dVar14;
    }
    dVar14 = dVar16;
    if ((cVar17 == '\0' && (float)((ulonglong)dVar14 >> 0x20) < SUB84(dVar14,0)) &&
       (((*(char *)((int)ar4 + 0x81) == '\x01' || (*(char *)((int)ar4 + 0x83) == '\x02')) ||
        (*(char *)((int)ar4 + 0x83) == '\x03')))) {
      pcVar11 = (code *)0x2;
      a5 = (int *)0x0;
      FUN_8c09fef8(*(int *)(ar6 + 0xc),0,2,uVar1);
      iVar4 = ar4[0x27];
      if ((iVar4 < 7) && (-1 < iVar4)) {
                    
        switch(iVar4) {
        default:
          ar4[0x20a] = 8;
          ar4[0x10] = 8;
          DAT_8c13ae98 = 8;
          ar4[1] = 0xd;
          ar4[2] = 0x5f;
          ar4[3] = 0;
          break;
        case 4:
        case 5:
          iVar4 = (**(code **)(*ar5 + 0x11c))(ar5,2,pcVar11,uVar1);
          uVar3 = SUB84(dVar14,0);
          if (iVar4 == 1) {
            Vec3_assign(&fStack_34,*(int *)(ar6 + 0x14) + 0x10,pcVar11,uVar1);
            ar6_00 = 0;
            uVar10 = 2;
            uVar3 = (**(code **)(*ar5 + 0x100))(ar5,2,0,uVar1);
            FUN_8c02f670(uVar3,uVar10,ar6_00,uVar1,auStack_90);
            Vec3_assign(&iStack_24,auStack_90,ar6_00,uVar1);
            Vec3_dtor(auStack_90,0xffffffff,ar6_00,uVar1);
            ar6_01 = &uStack_c0;
            puVar5 = auStack_60;
            FUN_8c256294(0,puVar5,ar6_01,uVar1);
            Vec3_ctor_zero(auStack_70,puVar5,ar6_01,uVar1);
            pcVar11 = (code *)&uStack_b8;
            FUN_8c101210(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),&uStack_b4,pcVar11,uVar1);
            if (cVar18 == '\0') {
              dVar16 = (double)CONCAT44(uStack_c0,uStack_b4);
            }
            else {
              in_xd0 = (double)CONCAT44(auStack_b0[0],uStack_b4);
              dVar16 = (double)CONCAT44(uStack_bc,uStack_c0);
            }
            if (cVar17 == '\0') {
              fStack_34 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
            }
            else {
              fStack_34 = SUB84(dVar16 - dVar16,0);
            }
            if (cVar18 == '\0') {
              dVar16 = (double)CONCAT44(uStack_bc,uStack_b8);
            }
            else {
              fStack_34 = SUB84(in_xd0,0);
              in_xd0 = (double)CONCAT44(uStack_b4,uStack_b8);
              dVar16 = (double)CONCAT44(uStack_b8,uStack_bc);
            }
            if (cVar17 == '\0') {
              fVar13 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar16 - dVar16,0);
            }
            fVar12 = fStack_34;
            fStack_30 = fVar13;
            if (cVar18 != '\0') {
              fStack_30 = SUB84(in_xd0,0);
              uStack_2c = (undefined4)((ulonglong)in_xd0 >> 0x20);
              in_xd0 = (double)CONCAT44(fStack_30,fStack_34);
              fVar12 = fVar13;
            }
            if (cVar17 == '\0' && fVar12 < 0.0) {
              if (cVar18 == '\0') {
                dVar16 = (double)CONCAT44(0xbf800000,fStack_34);
              }
              else {
                in_xd0 = (double)CONCAT44(fStack_30,fStack_34);
                dVar16 = 52776583233536.0;
              }
              if (cVar17 == '\0') {
                fVar12 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
              }
              else {
                fVar12 = SUB84(dVar16 * dVar16,0);
              }
              fStack_34 = fVar12;
              if (cVar18 != '\0') {
                fStack_34 = SUB84(in_xd0,0);
                fStack_30 = (float)((ulonglong)in_xd0 >> 0x20);
              }
            }
            fVar13 = fStack_30;
            if (cVar18 != '\0') {
              in_xd0 = (double)CONCAT44(uStack_2c,fStack_30);
              fVar13 = fVar12;
            }
            if (cVar17 == '\0' && fVar13 < 0.0) {
              if (cVar18 == '\0') {
                dVar16 = (double)CONCAT44(0xbf800000,fStack_30);
              }
              else {
                in_xd0 = (double)CONCAT44(uStack_2c,fStack_30);
                dVar16 = 52776583233536.0;
              }
              if (cVar17 == '\0') {
                fStack_30 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
              }
              else {
                fStack_30 = SUB84(dVar16 * dVar16,0);
              }
              if (cVar18 != '\0') {
                fStack_30 = SUB84(in_xd0,0);
                uStack_2c = (undefined4)((ulonglong)in_xd0 >> 0x20);
              }
            }
            if (cVar18 == '\0') {
              dVar16 = (double)CONCAT44(0x42c80000,fStack_34);
            }
            else {
              in_xd0 = (double)CONCAT44(fStack_30,fStack_34);
              dVar16 = -1.1352410522239538e-250;
            }
            if (cVar17 == '\0' && SUB84(dVar16,0) < (float)((ulonglong)dVar16 >> 0x20)) {
              if (cVar18 == '\0') {
                dVar16 = (double)CONCAT44(0x42c80000,fStack_30);
              }
              else {
                in_xd0 = (double)CONCAT44(uStack_2c,fStack_30);
                dVar16 = -1.1352410522239538e-250;
              }
              if (cVar17 == '\0' && SUB84(dVar16,0) < (float)((ulonglong)dVar16 >> 0x20)) {
                if (cVar18 == '\0') {
                  in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fStack_34);
                  dVar16 = (double)CONCAT44(fStack_30,SUB84(dVar16,0));
                }
                else {
                  dVar16 = (double)CONCAT44(uStack_2c,fStack_30);
                }
                if (cVar17 == '\0') {
                  in_dr14 = (double)(ulonglong)
                                    (uint)(SUB84(in_dr14,0) + (float)((ulonglong)dVar16 >> 0x20));
                }
                else {
                  in_dr14 = in_dr14 + dVar16;
                }
              }
            }
            uVar3 = SUB84(dVar16,0);
            Vec3_dtor(auStack_70,0xffffffff,pcVar11,uVar1);
          }
          if (cVar18 == '\0') {
            dVar14 = (double)CONCAT44(0xbf800000,uVar3);
          }
          else {
            dVar14 = 52776583233536.0;
          }
          if (SUB84(in_dr14,0) == (float)((ulonglong)dVar14 >> 0x20)) {
            Vec3_ctor_copy(auStack_a0,*(int *)(ar6 + 0x14) + 0x10,pcVar11,uVar1);
            uVar3 = SUB84(dVar14,0);
            Vec3_assign_wrap_063818(ar4,auStack_a0,pcVar11,uVar1);
            Vec3_dtor(auStack_a0,0xffffffff,pcVar11,uVar1);
            Vec3_ctor_copy(auStack_b0,*(int *)(ar6 + 0x14) + 0x10,pcVar11,uVar1);
            Vec3_assign_wrap_05f640(ar4,auStack_b0,pcVar11,uVar1);
            a5 = (int *)0xffffffff;
            Vec3_dtor(auStack_b0,0xffffffff,pcVar11,uVar1);
            piVar7 = ar4 + 0xc;
            if (cVar18 == '\0') {
              *piVar7 = 0x44960000;
              dVar14 = (double)CONCAT44(0x44af0000,uVar3);
              ar4[0x1e] = 0x44af0000;
            }
            else {
              piVar7[0] = 0x44960000;
              piVar7[1] = 0x44af0000;
              dVar14 = 3.1118736849719273e-159;
              ar4[0x1e] = 0x44af0000;
              ar4[0x1f] = 0x1f05e005;
            }
            ar4[1] = 8;
            ar4[0x10] = 3;
            ar4[2] = 0x55;
            ar4[3] = 0;
          }
          else {
            ar4[1] = 0xb;
            ar4[0x10] = 3;
            ar4[2] = 0x55;
            ar4[3] = 0;
            FUN_8c0a0278(ar4,ar5,pcVar11,uVar1);
            a5 = (int *)0x4a6;
            FUN_8c02f298(ar4,0x4a6,pcVar11,uVar1);
          }
          break;
        case 6:
          ar4[0x20a] = 5;
          ar4[0x10] = 5;
          DAT_8c13ae98 = 5;
          ar4[1] = 0xd;
          ar4[2] = 0x5f;
          a5 = (int *)0x0;
          ar4[3] = 0;
        }
      }
      piVar7 = (int *)0x0;
      *(undefined1 *)((int)ar4 + 0x81) = 0;
    }
  }
  if ((ar4[1] == 0) && (ar4[1] != 1)) {
    uVar3 = rand(piVar7,a5,pcVar11,uVar1);
    iVar4 = libgcc_divide_helper_01031c(uVar3,300,pcVar11,uVar1);
    if (iVar4 < 1) {
      ar4[0x20a] = 9;
      ar4[0x10] = 9;
      DAT_8c13ae98 = 9;
      ar4[1] = 0xd;
      ar4[2] = 0x4b;
      ar4[3] = 0;
      uVar3 = 2;
      FUN_8c09fed4(*(int *)(ar6 + 0xc),0,2,uVar1);
      if (cVar18 == '\0') {
        uVar15 = CONCAT44(0x47c35000,(int)((ulonglong)dVar14 >> 0x20));
        dVar14 = in_xd0;
      }
      else {
        uVar15 = 0x8c0a027847c35000;
      }
      if ((float)uVar15 == (float)((ulonglong)uVar15 >> 0x20)) {
        FUN_8c0a0278(ar4,ar5,uVar3,uVar1);
        FUN_8c09fef8(*(int *)(ar6 + 0xc),0,0,uVar1);
        FUN_8c09fef8(*(int *)(ar6 + 0xc),0,1,uVar1);
        pcVar11 = (code *)0x2;
        FUN_8c09fef8(*(int *)(ar6 + 0xc),0,2,uVar1);
      }
      else {
        FUN_8c09fed4(*(int *)(ar6 + 0xc),0,0,uVar1);
        fStack_fc = (float)uVar15;
        fVar13 = (float)((ulonglong)uVar15 >> 0x20);
        if (cVar18 == '\0') {
          ar4[10] = (int)fVar13;
          fStack_fc = fVar13;
        }
        else {
          *(undefined8 *)(ar4 + 10) = uVar15;
        }
        uVar10 = 1;
        uVar3 = 0;
        iVar4 = *(int *)(ar6 + 0xc);
        FUN_8c09fed4(iVar4,0,1,uVar1);
        fVar13 = (float)((ulonglong)uVar15 >> 0x20);
        fStack_100 = fVar13;
        if (cVar18 != '\0') {
          fStack_100 = (float)uVar15;
          fStack_fc = fVar13;
        }
        uVar3 = rand(iVar4,uVar3,uVar10,uVar1);
        fVar13 = (float)uVar15;
        iVar4 = libgcc_divide_helper_01031c(uVar3,400,uVar10,uVar1);
        if (cVar18 != '\0') {
          dVar14 = (double)CONCAT44(fStack_fc,fStack_100);
          fStack_100 = fVar13;
        }
        if (cVar17 == '\0') {
          fStack_100 = fStack_100 + (float)iVar4;
        }
        else {
          fStack_100 = SUB84((double)iVar4 + (double)iVar4,0);
        }
        if (cVar18 == '\0') {
          dVar16 = (double)CONCAT44(0x43480000,fStack_100);
        }
        else {
          dVar16 = 3.23101057606842e-312;
        }
        if (cVar17 == '\0') {
          fVar13 = (float)((ulonglong)dVar16 >> 0x20);
          dVar16 = (double)CONCAT44(fVar13,SUB84(dVar16,0) - fVar13);
        }
        else {
          dVar16 = dVar16 - dVar16;
        }
        if (cVar18 == '\0') {
          ar4[0xb] = SUB84(dVar16,0);
        }
        else {
          *(double *)(ar4 + 0xb) = dVar14;
        }
        pcVar11 = (code *)0x2;
        uVar10 = 0;
        iVar4 = *(int *)(ar6 + 0xc);
        FUN_8c09fed4(iVar4,0,2,uVar1);
        uStack_108 = dVar16;
        if (cVar18 == '\0') {
          uStack_108 = (double)CONCAT44(uVar3,(int)((ulonglong)dVar16 >> 0x20));
        }
        uVar3 = rand(iVar4,uVar10,pcVar11,uVar1);
        fVar13 = SUB84(dVar16,0);
        iVar4 = libgcc_divide_helper_01031c(uVar3,400,pcVar11,uVar1);
        dVar16 = uStack_108;
        if (cVar18 == '\0') {
          dVar16 = dVar14;
          fVar13 = (float)uStack_108;
        }
        if (cVar17 == '\0') {
          fVar13 = fVar13 + (float)iVar4;
        }
        else {
          fVar13 = SUB84((double)iVar4 + (double)iVar4,0);
        }
        if (cVar18 == '\0') {
          dVar14 = (double)CONCAT44(0x43480000,fVar13);
        }
        else {
          dVar14 = 3.23101057606842e-312;
        }
        if (cVar17 == '\0') {
          fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        if (cVar18 == '\0') {
          ar4[0xc] = (int)fVar13;
        }
        else {
          *(double *)(ar4 + 0xc) = dVar16;
        }
      }
    }
  }
  if ((char)ar4[0x26] == '\0') {
    iVar4 = *(int *)(*(int *)ar6 + 8);
    iVar4 = (**(code **)(iVar4 + 0x18c))(*(int *)ar6,iVar4,pcVar11,uVar1);
    if (iVar4 == 1) {
      ar4[0x10] = 0xb;
      DAT_8c13ae98 = 0xb;
      ar4[1] = 0xd;
      ar4[2] = 0x5f;
      ar4[3] = 0;
    }
    else {
      *(undefined1 *)(ar4 + 0x26) = 1;
    }
  }
  else if ((char)ar4[0x26] == '\x01') {
    ar4[0x10] = 0xc;
    DAT_8c13ae98 = 0xc;
    ar4[1] = 0xd;
    ar4[2] = 0x5f;
    ar4[3] = 0;
  }
  pcVar9 = ar6;
  FUN_8c0a0224(ar4,ar6,pcVar11,uVar1);
  FUN_8c05ee90(*(int *)(ar6 + 8),pcVar9,pcVar11,uVar1);
  iVar4 = get_field_124_027930(*(int *)(ar6 + 8),pcVar9,pcVar11,uVar1);
  iVar2 = get_field_40_05eea0(ar4,pcVar9,pcVar11,uVar1);
  if (iVar4 != iVar2) {
    uVar3 = get_field_40_05eea0(ar4,pcVar9,pcVar11,uVar1);
    pcVar11 = (code *)0x1;
    FUN_8c031b08(*(int *)(ar6 + 8),uVar3,1,uVar1);
  }
  *(undefined1 *)((int)ar4 + 0x83) = 4;
  *(undefined1 *)((int)ar4 + 0x81) = 0;
  Vec3_dtor(&fStack_34,0xffffffff,pcVar11,uVar1);
  uVar1 = Vec3_dtor(&iStack_24,0xffffffff,pcVar11,&iStack_24);
  return uVar1;
}

__asm__(".globl _Class_12acc8_m1_09f470\n.set _Class_12acc8_m1_09f470, _Class_12acc8_m1_09f470_def\n");
