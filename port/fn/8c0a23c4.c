#include "../decls.h"
undefined4 FUN_8c0a23c4_def(int ar4,double *ar5,double *ar6,double *ar7)

{
  undefined4 uVar1;
  int iVar2;
  double *pdVar3;
  code *ar5_00;
  double *ar6_00;
  undefined4 ar6_01;
  float *ar6_02;
  double *ar7_00;
  uint uVar4;
  float fVar5;
  double in_dr0;
  undefined8 uVar6;
  double dVar7;
  ulonglong uVar8;
  float fVar10;
  double dVar9;
  undefined4 in_fr3;
  double in_dr14;
  double in_xd0;
  char cVar11;
  char cVar12;
  undefined4 in_stack_ffffff18;
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [12];
  float fStack_28;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  
  cVar12 = '\0';
  cVar11 = '\0';
  pdVar3 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  if (DAT_8c285210 == '\0') {
    uVar1 = Vec3_set_zero(0x8c285214,ar5,ar6,ar7);
    ar6_00 = (double *)0x8c285204;
    global_list_push(uVar1,object_dtor_delete,0x8c285204,ar7_00);
    pdVar3 = (double *)&DAT_8c285210;
    DAT_8c285210 = '\x01';
  }
  Vec3_ctor_zero(&fStack_28,pdVar3,ar6_00,ar7_00);
  iVar2 = *(int *)(ar4 + 300);
  if ((5 < iVar2) || (iVar2 < 0)) goto switchD_8c0a242e_default;
                    
  switch(iVar2) {
  case 0:
    ar7_00 = (double *)0x0;
    ar6_01 = 0xffffffff;
    uVar1 = 9;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_01,ar7_00);
    vec3_clear(ar4 + 0x224,uVar1,ar6_01,ar7_00);
    FUN_8c031b68(ar4,0x8c2851b0,ar6_01,ar7_00);
    pdVar3 = ar5;
    ar6_00 = ar6;
    FUN_8c031bb4(ar4,ar5,ar6,ar7_00);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    break;
  case 2:
    goto switchD_8c0a242e_caseD_2;
  case 3:
    goto switchD_8c0a242e_caseD_3;
  case 4:
    goto switchD_8c0a242e_caseD_4;
  case 5:
    goto switchD_8c0a242e_caseD_5;
  }
  FUN_8c03f3ac(ar4 + 0xb0,pdVar3,ar6_00,ar7_00);
  pdVar3 = ar6;
  ar6_00 = ar5;
  iVar2 = FUN_8c031764(ar4,ar6,ar5,ar7_00);
  if (iVar2 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 3;
    CAnimBody_GetCurFrame(ar4 + 0xb0,pdVar3,ar6_00,ar7_00,in_stack_ffffff18);
    if (cVar12 == '\0') {
      *(int *)(ar4 + 0x244) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x244) = in_dr0;
    }
    if (cVar12 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
    }
    *(undefined4 *)(ar4 + 300) = 3;
switchD_8c0a242e_caseD_3:
    Vec3_assign(&fStack_28,ar5,ar6_00,ar7_00);
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)(ar6 + 1),in_fr3);
      dVar7 = (double)CONCAT44(0x41c80000,*(float *)(ar7 + 1));
    }
    else {
      dVar9 = ar6[1];
      in_xd0 = ar7[1];
      dVar7 = 4.24944422004087e-312;
    }
    if (cVar11 == '\0') {
      fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar7,0);
    }
    if ((float)((ulonglong)dVar9 >> 0x20) == fVar5) {
      if (cVar12 == '\0') {
        fStack_20 = *(float *)(ar7 + 1);
        dVar7 = (double)CONCAT44(fStack_20,fVar5);
      }
      else {
        dVar7 = ar7[1];
        fStack_20 = SUB84(dVar7,0);
        uStack_1c = (undefined4)((ulonglong)dVar7 >> 0x20);
      }
    }
    else {
      if (cVar12 == '\0') {
        uVar8 = CONCAT44(0x41c80000,*(undefined4 *)ar6);
      }
      else {
        in_xd0 = *ar6;
        uVar8 = 0xc041c80000;
      }
      if ((float)uVar8 == (float)(uVar8 >> 0x20)) {
        dVar7 = (double)(uVar8 & 0xffffffff);
        if (cVar12 == '\0') {
          fStack_28 = 0.0;
        }
        else {
          uStack_24 = 0;
          fStack_28 = (float)uVar8;
        }
      }
      else {
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)ar6,SUB84(dVar9,0));
          dVar7 = (double)CONCAT44(0x41c80000,*(float *)ar7);
        }
        else {
          dVar9 = *ar6;
          in_xd0 = *ar7;
          dVar7 = 4.07968455676365e-312;
        }
        if (cVar11 == '\0') {
          fVar5 = (float)((ulonglong)dVar7 >> 0x20);
          dVar7 = (double)CONCAT44(fVar5,SUB84(dVar7,0) - fVar5);
        }
        else {
          dVar7 = dVar7 - dVar7;
        }
        if ((float)((ulonglong)dVar9 >> 0x20) == SUB84(dVar7,0)) {
          if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44(*(float *)ar7,SUB84(dVar7,0));
            fStack_28 = *(float *)ar7;
          }
          else {
            dVar7 = *ar7;
            fStack_28 = SUB84(dVar7,0);
            uStack_24 = (undefined4)((ulonglong)dVar7 >> 0x20);
          }
        }
      }
    }
    uVar1 = SUB84(dVar9,0);
    uVar4 = SUB84(dVar7,0);
    iVar2 = ar4 + 0x14;
    ar6_02 = &fStack_28;
    FUN_8c0a3dc0(ar4,ar5,ar6_02,iVar2,auStack_70);
    vec3_copy_8c023d8c(ar4 + 0x238,auStack_70,ar6_02,iVar2);
    object_dtor_delete(auStack_70,0xffffffff,ar6_02,iVar2);
    if (cVar12 == '\0') {
      *(undefined4 *)(ar4 + 0x238) = 0;
      dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x23c),uVar1);
      in_dr0 = (double)CONCAT44(0x41f00000,*(undefined4 *)(ar4 + 0x244));
    }
    else {
      *(ulonglong *)(ar4 + 0x238) = (ulonglong)uVar4;
      dVar9 = *(double *)(ar4 + 0x23c);
      in_xd0 = *(double *)(ar4 + 0x244);
      in_dr0 = 1.22281613457048e-311;
    }
    if (cVar11 == '\0') {
      fVar10 = (float)((ulonglong)in_dr0 >> 0x20);
      fVar5 = SUB84(in_dr0,0) + fVar10;
      in_dr0 = (double)CONCAT44(fVar10,fVar5);
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) / fVar5,SUB84(dVar9,0));
    }
    else {
      in_dr0 = in_dr0 + in_dr0;
      dVar9 = dVar9 / in_dr0;
    }
    if (cVar12 == '\0') {
      *(int *)(ar4 + 0x23c) = (int)((ulonglong)dVar9 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x23c) = dVar9;
    }
    in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
    if (cVar12 == '\0') {
      *(undefined4 *)(ar4 + 0x240) = 0;
    }
    else {
      *(double *)(ar4 + 0x240) = in_dr0;
    }
    ar7_00 = (double *)0x0;
    ar6_00 = (double *)0x0;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0,0);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
switchD_8c0a242e_caseD_4:
    fVar5 = SUB84(in_dr0,0);
    if (cVar12 == '\0') {
      fVar5 = *(float *)(ar4 + 0x28);
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x28);
    }
    if (cVar11 != '\0' || 0.0 <= fVar5) {
      vec3_copy_8c02b5fc(auStack_7c,ar4 + 0x238,ar6_00,ar7_00);
      FUN_8c023484(ar4 + 0x80,auStack_7c,ar6_00,ar7_00,auStack_8c);
      Vec3_assign(ar4 + 0x80,auStack_8c,ar6_00,ar7_00);
      Vec3_dtor(auStack_8c,0xffffffff,ar6_00,ar7_00);
      object_dtor_delete(auStack_7c,0xffffffff,ar6_00,ar7_00);
    }
    FUN_8c031764(ar4,ar6,ar5,ar7_00);
    *(undefined4 *)(ar4 + 0x40) = 3;
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x234),*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x28);
      dVar9 = *(double *)(ar4 + 0x234);
    }
    if (cVar11 == '\0') {
      fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar9 - dVar9,0);
    }
    if (cVar12 == '\0') {
      *(float *)(ar4 + 0x28) = fVar5;
      fVar5 = *(float *)(ar4 + 0x28);
    }
    else {
      *(double *)(ar4 + 0x28) = in_xd0;
    }
    if (cVar11 != '\0' || fVar5 <= 0.0) {
      if (cVar12 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
      }
    }
    fVar5 = 0.0;
    CAnimBody_GetCurFrame(ar4 + 0xb0,ar6,ar5,ar7_00,in_stack_ffffff18);
    if (cVar12 == '\0') {
      fVar10 = 30.0;
    }
    else {
      fVar5 = 30.0;
      fVar10 = 8.07148e-43;
    }
    if ((cVar11 != '\0' || fVar10 <= fVar5) &&
       (iVar2 = get_field_1c_026dd8(ar4 + 0xb0,ar6,ar5,ar7_00), iVar2 == 7)) {
      if (cVar12 == '\0') {
        fVar5 = *(float *)(ar4 + 0x28);
      }
      in_dr0 = (double)(ulonglong)(uint)fVar5;
      if (fVar5 == 0.0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
switchD_8c0a242e_caseD_5:
        uVar4 = SUB84(in_dr0,0);
        *(undefined4 *)(ar4 + 0x270) = 1;
        iVar2 = ar4 + 0xb0;
        ar5_00 = FUN_8c03f3ac;
        FUN_8c03f3ac(iVar2,FUN_8c03f3ac,iVar2,ar7_00);
        Vec3_set_xyz(auStack_98,ar5_00,iVar2,ar7_00);
        vec3_copy_8c023d8c(ar4 + 0x238,auStack_98,iVar2,ar7_00);
        object_dtor_delete(auStack_98,0xffffffff,iVar2,ar7_00);
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)uVar4;
        }
        goto switchD_8c0a242e_default;
      }
    }
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7_00);
  }
  else {
    Vec3_set_xyz(auStack_34,pdVar3,ar6_00,ar7_00);
    ar7_00 = (double *)(ar4 + 0x14);
    ar6_00 = ar6;
    FUN_8c031eb0(ar4,ar5,ar6,ar7_00,auStack_44);
    Vec3_assign(&fStack_28,auStack_44,ar6_00,ar7_00);
    Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7_00);
    object_dtor_delete(auStack_34,0xffffffff,ar6_00,ar7_00);
    pdVar3 = ar6;
    FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00);
    fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
    if (cVar12 == '\0') {
      fVar10 = 200.0;
      in_dr0 = in_xd0;
    }
    else {
      fVar5 = 200.0;
      fVar10 = 0.01;
    }
    if (cVar11 == '\0' && fVar5 < fVar10) {
      if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x14),fStack_28);
      }
      else {
        in_dr0 = (double)CONCAT44(uStack_24,fStack_28);
        dVar9 = *(double *)(ar4 + 0x14);
      }
      if (cVar11 == '\0') {
        fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar12 == '\0') {
        fVar10 = 0.01;
      }
      else {
        fVar5 = 0.01;
        fVar10 = -0.01;
      }
      if (cVar11 == '\0' && fVar5 < fVar10) {
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x14),fStack_28);
        }
        else {
          in_dr0 = (double)CONCAT44(uStack_24,fStack_28);
          dVar9 = *(double *)(ar4 + 0x14);
        }
        if (cVar11 == '\0') {
          fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar9 - dVar9,0);
        }
        if (cVar12 == '\0') {
          fVar10 = -0.01;
        }
        else {
          fVar5 = -0.01;
          fVar10 = 2.74654e-43;
        }
        if (cVar11 == '\0' && fVar10 < fVar5) {
          if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x18),uStack_24);
          }
          else {
            in_dr0 = (double)CONCAT44(fStack_20,uStack_24);
            dVar9 = *(double *)(ar4 + 0x18);
          }
          if (cVar11 == '\0') {
            fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar5 = SUB84(dVar9 - dVar9,0);
          }
          if (cVar12 == '\0') {
            fVar10 = 0.01;
          }
          else {
            fVar5 = 0.01;
            fVar10 = -0.01;
          }
          if (cVar11 == '\0' && fVar5 < fVar10) {
            if (cVar12 == '\0') {
              dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x18),uStack_24);
            }
            else {
              in_dr0 = (double)CONCAT44(fStack_20,uStack_24);
              dVar9 = *(double *)(ar4 + 0x18);
            }
            if (cVar11 == '\0') {
              fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
            }
            else {
              fVar5 = SUB84(dVar9 - dVar9,0);
            }
            if (cVar12 == '\0') {
              fVar10 = -0.01;
            }
            else {
              fVar5 = -0.01;
              fVar10 = 2.74654e-43;
            }
            if (cVar11 == '\0' && fVar10 < fVar5) {
              if (cVar12 == '\0') {
                dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x1c),fStack_20);
              }
              else {
                in_dr0 = (double)CONCAT44(uStack_1c,fStack_20);
                dVar9 = *(double *)(ar4 + 0x1c);
              }
              if (cVar11 == '\0') {
                fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
              }
              else {
                fVar5 = SUB84(dVar9 - dVar9,0);
              }
              if (cVar12 == '\0') {
                fVar10 = 0.01;
              }
              else {
                fVar5 = 0.01;
                fVar10 = -0.01;
              }
              if (cVar11 == '\0' && fVar5 < fVar10) {
                if (cVar12 == '\0') {
                  dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x1c),fStack_20);
                  in_xd0 = in_dr0;
                }
                else {
                  in_xd0 = (double)CONCAT44(uStack_1c,fStack_20);
                  dVar9 = *(double *)(ar4 + 0x1c);
                }
                if (cVar11 == '\0') {
                  fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
                }
                else {
                  fVar5 = SUB84(dVar9 - dVar9,0);
                }
                if (cVar12 == '\0') {
                  fVar10 = -0.01;
                }
                else {
                  fVar5 = -0.01;
                  fVar10 = 2.74654e-43;
                }
                if (cVar11 == '\0' && fVar10 < fVar5) {
                  if (cVar12 == '\0') {
                    uVar1 = *(undefined4 *)(ar4 + 0x28);
                    uVar6 = CONCAT44(uVar1,fVar5);
                    *(undefined4 *)(ar4 + 0x24) = uVar1;
                  }
                  else {
                    uVar6 = *(undefined8 *)(ar4 + 0x28);
                    *(undefined8 *)(ar4 + 0x24) = uVar6;
                  }
                  pdVar3 = ar5;
                  FUN_8c022fc0(ar6,ar5,ar6_00,ar7_00);
                  if (cVar12 == '\0') {
                    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                               (int)((ulonglong)uVar6 >> 0x20));
                    dVar9 = (double)CONCAT44(0x40000000,(int)uVar6);
                  }
                  else {
                    dVar9 = 1.19733612505215e-311;
                  }
                  if (cVar11 == '\0') {
                    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                               SUB84(in_dr14,0) * (float)((ulonglong)dVar9 >> 0x20))
                    ;
                  }
                  else {
                    in_dr14 = in_dr14 * dVar9;
                  }
                  if (cVar12 == '\0') {
                    dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar9,0));
                  }
                  else {
                    dVar9 = *(double *)(ar4 + 0x28);
                  }
                  if (cVar11 == '\0') {
                    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                               SUB84(in_dr14,0) / (float)((ulonglong)dVar9 >> 0x20))
                    ;
                  }
                  else {
                    in_dr14 = in_dr14 / dVar9;
                  }
                  if (cVar12 == '\0') {
                    in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar9,0));
                  }
                  else {
                    in_dr0 = *(double *)(ar4 + 0x28);
                  }
                  if (cVar11 == '\0') {
                    in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) / SUB84(in_dr14,0),
                                              SUB84(in_dr0,0));
                  }
                  else {
                    in_dr0 = in_dr0 / in_dr14;
                  }
                  if (cVar12 == '\0') {
                    *(int *)(ar4 + 0x234) = (int)((ulonglong)in_dr0 >> 0x20);
                  }
                  else {
                    *(double *)(ar4 + 0x234) = in_dr0;
                  }
                  *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
switchD_8c0a242e_caseD_2:
                  fVar5 = SUB84(in_dr0,0);
                  if (cVar12 == '\0') {
                    fVar5 = *(float *)(ar4 + 0x28);
                  }
                  else {
                    in_xd0 = *(double *)(ar4 + 0x28);
                  }
                  uVar8 = (ulonglong)(uint)fVar5;
                  if (cVar11 == '\0' && 0.0 < fVar5) {
                    if (cVar12 == '\0') {
                      dVar9 = (double)CONCAT44(0x41f00000,*(undefined4 *)(ar4 + 0x244));
                    }
                    else {
                      in_xd0 = *(double *)(ar4 + 0x244);
                      dVar9 = 1.19735218507889e-311;
                    }
                    if (cVar11 == '\0') {
                      fVar5 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
                    }
                    else {
                      fVar5 = SUB84(dVar9 + dVar9,0);
                    }
                    if (cVar12 == '\0') {
                      dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x234),fVar5);
                    }
                    else {
                      dVar9 = *(double *)(ar4 + 0x234);
                    }
                    if (cVar11 == '\0') {
                      fVar5 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
                    }
                    else {
                      fVar5 = SUB84(dVar9 * dVar9,0);
                    }
                    if (cVar12 == '\0') {
                      uVar6 = CONCAT44(*(undefined4 *)(ar4 + 0x28),fVar5);
                    }
                    else {
                      uVar6 = *(undefined8 *)(ar4 + 0x28);
                    }
                    if (cVar11 == '\0' && (float)uVar6 < (float)((ulonglong)uVar6 >> 0x20)) {
                      FUN_8c03f3ac(ar4 + 0xb0,pdVar3,ar6_00,ar7_00);
                      FUN_8c031764(ar4,ar6,ar5,ar7_00);
                      *(undefined4 *)(ar4 + 0x40) = 3;
                      if (cVar12 == '\0') {
                        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x234),
                                                 *(undefined4 *)(ar4 + 0x28));
                      }
                      else {
                        in_xd0 = *(double *)(ar4 + 0x28);
                        dVar9 = *(double *)(ar4 + 0x234);
                      }
                      if (cVar11 == '\0') {
                        fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
                      }
                      else {
                        fVar5 = SUB84(dVar9 - dVar9,0);
                      }
                      if (cVar12 == '\0') {
                        *(float *)(ar4 + 0x28) = fVar5;
                        fVar5 = *(float *)(ar4 + 0x28);
                      }
                      else {
                        *(double *)(ar4 + 0x28) = in_xd0;
                      }
                      if (cVar11 != '\0' || fVar5 <= 0.0) {
                        if (cVar12 == '\0') {
                          *(undefined4 *)(ar4 + 0x28) = 0;
                        }
                        else {
                          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
                        }
                      }
                      uVar8 = (ulonglong)(uint)fVar5;
                      FUN_8c0230f0(ar4 + 0x14,ar6,ar5,ar7_00,auStack_64);
                      uVar1 = Vec3_length(auStack_64,ar6,ar5,ar7_00);
                      Vec3_assign(ar4 + 0x80,uVar1,ar5,ar7_00);
                      uVar1 = 0xffffffff;
                      Vec3_dtor(auStack_64,0xffffffff,ar5,ar7_00);
                      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar5,ar7_00,in_stack_ffffff18);
                      if (cVar12 == '\0') {
                        *(int *)(ar4 + 0x244) = (int)(uVar8 >> 0x20);
                      }
                      else {
                        *(ulonglong *)(ar4 + 0x244) = uVar8;
                      }
                      goto switchD_8c0a242e_default;
                    }
                    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
                  }
                  else {
                    CAnimBody_GetCurFrame(ar4 + 0xb0,pdVar3,ar6_00,ar7_00,in_stack_ffffff18);
                    if (cVar12 == '\0') {
                      *(int *)(ar4 + 0x244) = (int)(uVar8 >> 0x20);
                    }
                    else {
                      *(ulonglong *)(ar4 + 0x244) = uVar8;
                    }
                    if (cVar12 == '\0') {
                      *(undefined4 *)(ar4 + 0x28) = 0;
                    }
                    else {
                      *(ulonglong *)(ar4 + 0x28) = uVar8 & 0xffffffff;
                    }
                    *(undefined4 *)(ar4 + 300) = 3;
                  }
                  goto switchD_8c0a242e_caseD_3;
                }
              }
            }
          }
        }
      }
    }
    FUN_8c0230f0(ar4 + 0x14,pdVar3,ar6_00,ar7_00,auStack_54);
    uVar1 = Vec3_length(auStack_54,pdVar3,ar6_00,ar7_00);
    Vec3_assign(ar4 + 0x80,uVar1,ar6_00,ar7_00);
    Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7_00);
  }
switchD_8c0a242e_default:
  Vec3_dtor(&fStack_28,0xffffffff,Vec3_dtor,&fStack_28);
  return 1;
}

__asm__(".globl _FUN_8c0a23c4\n.set _FUN_8c0a23c4, _FUN_8c0a23c4_def\n");
