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
undefined4 FUN_8c0a23c4_def(int ar4,double *ar5,double *ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c0a23c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 236; for (int i_ = 0; i_ < 236; i_++) z_[i_] = 0; }
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
  double in_dr0 = 0;
  undefined8 uVar6;
  double dVar7;
  ulonglong uVar8;
  float fVar10;
  double dVar9;
  undefined4 in_fr3 = 0;
  double in_dr14 = 0;
  double in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  pdVar3 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  if ((*(undefined1 *)(unsigned)0x8c285210) == '\0') {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 236)), Vec3_set_zero(0x8c285214,ar5,ar6,ar7));
    ar6_00 = (double *)(unsigned)0x8c285204;
    (vsp = ((unsigned long)(fr0_ - 236)), global_list_push(uVar1,((void *)0x8c014a34),0x8c285204,ar7_00));
    pdVar3 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c285210);
    (*(undefined1 *)(unsigned)0x8c285210) = '\x01';
  }
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x28)),pdVar3,ar6_00,ar7_00));
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if ((5 < iVar2) || (iVar2 < 0)) goto switchD_8c0a242e_default;
                    
  switch(iVar2) {
  case 0:
    ar7_00 = (double *)(unsigned)0x0;
    ar6_01 = 0xffffffff;
    uVar1 = 9;
    (vsp = ((unsigned long)(fr0_ - 236)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 236)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 236)), vec3_clear(ar4 + 0x224,uVar1,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031b68(ar4,0x8c2851b0,ar6_01,ar7_00));
    pdVar3 = ar5;
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031bb4(ar4,ar5,ar6,ar7_00));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
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
  (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03f3ac(ar4 + 0xb0,pdVar3,ar6_00,ar7_00));
  pdVar3 = ar6;
  ar6_00 = ar5;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031764(ar4,ar6,ar5,ar7_00));
  if (iVar2 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xe8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 236)); CAnimBody_GetCurFrame(ar4 + 0xb0,pdVar3,ar6_00,ar7_00); });
    if (cVar12 == '\0') {
      *(int *)(unsigned)(ar4 + 0x244) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x244) = in_dr0;
    }
    if (cVar12 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 3;
switchD_8c0a242e_caseD_3:
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(&(*(float *)(fr0_ - 0x28)),ar5,ar6_00,ar7_00));
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar6 + 1),in_fr3);
      dVar7 = CONCAT44D(0x41c80000,*(float *)(unsigned)(ar7 + 1));
    }
    else {
      dVar9 = ar6[1];
      in_xd0 = ar7[1];
      dVar7 = 4.24944422004087e-312;
    }
    if (cVar11 == '\0') {
      fVar5 = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar7,0);
    }
    if (F32HI(dVar9) == fVar5) {
      if (cVar12 == '\0') {
        (*(float *)(fr0_ - 0x20)) = *(float *)(unsigned)(ar7 + 1);
        dVar7 = CONCAT44D((*(float *)(fr0_ - 0x20)),fVar5);
      }
      else {
        dVar7 = ar7[1];
        (*(float *)(fr0_ - 0x20)) = SUB84(dVar7,0);
        (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)(D2U(dVar7) >> 0x20);
      }
    }
    else {
      if (cVar12 == '\0') {
        uVar8 = CONCAT44(0x41c80000,*(undefined4 *)(unsigned)ar6);
      }
      else {
        in_xd0 = *ar6;
        uVar8 = 0xc041c80000;
      }
      if ((float)uVar8 == (float)(uVar8 >> 0x20)) {
        dVar7 = (double)(uVar8 & 0xffffffff);
        if (cVar12 == '\0') {
          (*(float *)(fr0_ - 0x28)) = 0.0;
        }
        else {
          (*(undefined4 *)(fr0_ - 0x24)) = 0;
          (*(float *)(fr0_ - 0x28)) = (float)uVar8;
        }
      }
      else {
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)ar6,SUB84(dVar9,0));
          dVar7 = CONCAT44D(0x41c80000,*(float *)(unsigned)ar7);
        }
        else {
          dVar9 = *ar6;
          in_xd0 = *ar7;
          dVar7 = 4.07968455676365e-312;
        }
        if (cVar11 == '\0') {
          fVar5 = F32HI(dVar7);
          dVar7 = CONCAT44D(fVar5,F32LO(dVar7) - fVar5);
        }
        else {
          dVar7 = dVar7 - dVar7;
        }
        if (F32HI(dVar9) == SUB84(dVar7,0)) {
          if (cVar12 == '\0') {
            dVar7 = CONCAT44D(*(float *)(unsigned)ar7,SUB84(dVar7,0));
            (*(float *)(fr0_ - 0x28)) = *(float *)(unsigned)ar7;
          }
          else {
            dVar7 = *ar7;
            (*(float *)(fr0_ - 0x28)) = SUB84(dVar7,0);
            (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)(D2U(dVar7) >> 0x20);
          }
        }
      }
    }
    uVar1 = SUB84(dVar9,0);
    uVar4 = SUB84(dVar7,0);
    iVar2 = ar4 + 0x14;
    ar6_02 = &(*(float *)(fr0_ - 0x28));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c0a3dc0(ar4,ar5,ar6_02,iVar2); });
    (vsp = ((unsigned long)(fr0_ - 236)), vec3_copy_8c023d8c(ar4 + 0x238,((undefined1 *)(fr0_ - 0x70)),ar6_02,iVar2));
    (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_02,iVar2));
    if (cVar12 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x238) = 0;
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x23c),uVar1);
      in_dr0 = CONCAT44D(0x41f00000,*(undefined4 *)(unsigned)(ar4 + 0x244));
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x238) = (ulonglong)uVar4;
      dVar9 = *(double *)(unsigned)(ar4 + 0x23c);
      in_xd0 = *(double *)(unsigned)(ar4 + 0x244);
      in_dr0 = 1.22281613457048e-311;
    }
    if (cVar11 == '\0') {
      fVar10 = F32HI(in_dr0);
      fVar5 = F32LO(in_dr0) + fVar10;
      in_dr0 = CONCAT44D(fVar10,fVar5);
      dVar9 = CONCAT44D(F32HI(dVar9) / fVar5,SUB84(dVar9,0));
    }
    else {
      in_dr0 = in_dr0 + in_dr0;
      dVar9 = dVar9 / in_dr0;
    }
    if (cVar12 == '\0') {
      *(int *)(unsigned)(ar4 + 0x23c) = (int)(D2U(dVar9) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x23c) = dVar9;
    }
    in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
    if (cVar12 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x240) = 0;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x240) = in_dr0;
    }
    ar7_00 = (double *)(unsigned)0x0;
    ar6_00 = (double *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 236)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0,0));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
switchD_8c0a242e_caseD_4:
    fVar5 = F32LO(in_dr0);
    if (cVar12 == '\0') {
      fVar5 = *(float *)(unsigned)(ar4 + 0x28);
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
    }
    if (cVar11 != '\0' || 0.0 <= fVar5) {
      (vsp = ((unsigned long)(fr0_ - 236)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x7c)),ar4 + 0x238,ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c023484(ar4 + 0x80,((undefined1 *)(fr0_ - 0x7c)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x8c)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6_00,ar7_00));
    }
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031764(ar4,ar6,ar5,ar7_00));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x234),*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
      dVar9 = *(double *)(unsigned)(ar4 + 0x234);
    }
    if (cVar11 == '\0') {
      fVar5 = F32LO(dVar9) - F32HI(dVar9);
    }
    else {
      fVar5 = SUB84(dVar9 - dVar9,0);
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar5;
      fVar5 = *(float *)(unsigned)(ar4 + 0x28);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
    }
    if (cVar11 != '\0' || fVar5 <= 0.0) {
      if (cVar12 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
      }
    }
    fVar5 = 0.0;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xe8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 236)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar6,ar5,ar7_00); });
    if (cVar12 == '\0') {
      fVar10 = 30.0;
    }
    else {
      fVar5 = 30.0;
      fVar10 = 8.07148e-43;
    }
    if ((cVar11 != '\0' || fVar10 <= fVar5) &&
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 236)), get_field_1c_026dd8(ar4 + 0xb0,ar6,ar5,ar7_00)), iVar2 == 7)) {
      if (cVar12 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x28);
      }
      in_dr0 = (double)(ulonglong)(uint)fVar5;
      if (fVar5 == 0.0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
switchD_8c0a242e_caseD_5:
        uVar4 = SUB84(in_dr0,0);
        *(undefined4 *)(unsigned)(ar4 + 0x270) = 1;
        iVar2 = ar4 + 0xb0;
        ar5_00 = ((void *)0x8c03f3ac);
        (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03f3ac(iVar2,((void *)0x8c03f3ac),iVar2,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x98)),ar5_00,iVar2,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 236)), vec3_copy_8c023d8c(ar4 + 0x238,((undefined1 *)(fr0_ - 0x98)),iVar2,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0x98)),0xffffffff,iVar2,ar7_00));
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)uVar4;
        }
        goto switchD_8c0a242e_default;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 236)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7_00));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x34)),pdVar3,ar6_00,ar7_00));
    ar7_00 = (double *)(unsigned)(ar4 + 0x14);
    ar6_00 = ar6;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c031eb0(ar4,ar5,ar6,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(&(*(float *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x44)),ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7_00));
    pdVar3 = ar6;
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00));
    fVar5 = F32HI(in_dr0);
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
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x14),(*(float *)(fr0_ - 0x28)));
      }
      else {
        in_dr0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
        dVar9 = *(double *)(unsigned)(ar4 + 0x14);
      }
      if (cVar11 == '\0') {
        fVar5 = F32LO(dVar9) - F32HI(dVar9);
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
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x14),(*(float *)(fr0_ - 0x28)));
        }
        else {
          in_dr0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
          dVar9 = *(double *)(unsigned)(ar4 + 0x14);
        }
        if (cVar11 == '\0') {
          fVar5 = F32LO(dVar9) - F32HI(dVar9);
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
            dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x18),(*(undefined4 *)(fr0_ - 0x24)));
          }
          else {
            in_dr0 = CONCAT44D((*(float *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
            dVar9 = *(double *)(unsigned)(ar4 + 0x18);
          }
          if (cVar11 == '\0') {
            fVar5 = F32LO(dVar9) - F32HI(dVar9);
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
              dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x18),(*(undefined4 *)(fr0_ - 0x24)));
            }
            else {
              in_dr0 = CONCAT44D((*(float *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
              dVar9 = *(double *)(unsigned)(ar4 + 0x18);
            }
            if (cVar11 == '\0') {
              fVar5 = F32LO(dVar9) - F32HI(dVar9);
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
                dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x1c),(*(float *)(fr0_ - 0x20)));
              }
              else {
                in_dr0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
                dVar9 = *(double *)(unsigned)(ar4 + 0x1c);
              }
              if (cVar11 == '\0') {
                fVar5 = F32LO(dVar9) - F32HI(dVar9);
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
                  dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x1c),(*(float *)(fr0_ - 0x20)));
                  in_xd0 = in_dr0;
                }
                else {
                  in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
                  dVar9 = *(double *)(unsigned)(ar4 + 0x1c);
                }
                if (cVar11 == '\0') {
                  fVar5 = F32LO(dVar9) - F32HI(dVar9);
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
                    uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x28);
                    uVar6 = CONCAT44(uVar1,fVar5);
                    *(undefined4 *)(unsigned)(ar4 + 0x24) = uVar1;
                  }
                  else {
                    uVar6 = *(undefined8 *)(unsigned)(ar4 + 0x28);
                    *(undefined8 *)(unsigned)(ar4 + 0x24) = uVar6;
                  }
                  pdVar3 = ar5;
                  (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c022fc0(ar6,ar5,ar6_00,ar7_00));
                  if (cVar12 == '\0') {
                    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                               (int)((ulonglong)uVar6 >> 0x20));
                    dVar9 = CONCAT44D(0x40000000,(int)uVar6);
                  }
                  else {
                    dVar9 = 1.19733612505215e-311;
                  }
                  if (cVar11 == '\0') {
                    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                               F32LO(in_dr14) * F32HI(dVar9))
                    ;
                  }
                  else {
                    in_dr14 = in_dr14 * dVar9;
                  }
                  if (cVar12 == '\0') {
                    dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(dVar9,0));
                  }
                  else {
                    dVar9 = *(double *)(unsigned)(ar4 + 0x28);
                  }
                  if (cVar11 == '\0') {
                    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                               F32LO(in_dr14) / F32HI(dVar9))
                    ;
                  }
                  else {
                    in_dr14 = in_dr14 / dVar9;
                  }
                  if (cVar12 == '\0') {
                    in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(dVar9,0));
                  }
                  else {
                    in_dr0 = *(double *)(unsigned)(ar4 + 0x28);
                  }
                  if (cVar11 == '\0') {
                    in_dr0 = CONCAT44D(F32HI(in_dr0) / F32LO(in_dr14),
                                              SUB84(in_dr0,0));
                  }
                  else {
                    in_dr0 = in_dr0 / in_dr14;
                  }
                  if (cVar12 == '\0') {
                    *(int *)(unsigned)(ar4 + 0x234) = (int)((ulonglong)in_dr0 >> 0x20);
                  }
                  else {
                    *(double *)(unsigned)(ar4 + 0x234) = in_dr0;
                  }
                  *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
switchD_8c0a242e_caseD_2:
                  fVar5 = F32LO(in_dr0);
                  if (cVar12 == '\0') {
                    fVar5 = *(float *)(unsigned)(ar4 + 0x28);
                  }
                  else {
                    in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
                  }
                  uVar8 = (ulonglong)(uint)fVar5;
                  if (cVar11 == '\0' && 0.0 < fVar5) {
                    if (cVar12 == '\0') {
                      dVar9 = CONCAT44D(0x41f00000,*(undefined4 *)(unsigned)(ar4 + 0x244));
                    }
                    else {
                      in_xd0 = *(double *)(unsigned)(ar4 + 0x244);
                      dVar9 = 1.19735218507889e-311;
                    }
                    if (cVar11 == '\0') {
                      fVar5 = F32LO(dVar9) + F32HI(dVar9);
                    }
                    else {
                      fVar5 = SUB84(dVar9 + dVar9,0);
                    }
                    if (cVar12 == '\0') {
                      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x234),fVar5);
                    }
                    else {
                      dVar9 = *(double *)(unsigned)(ar4 + 0x234);
                    }
                    if (cVar11 == '\0') {
                      fVar5 = F32LO(dVar9) * F32HI(dVar9);
                    }
                    else {
                      fVar5 = SUB84(dVar9 * dVar9,0);
                    }
                    if (cVar12 == '\0') {
                      uVar6 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x28),fVar5);
                    }
                    else {
                      uVar6 = *(undefined8 *)(unsigned)(ar4 + 0x28);
                    }
                    if (cVar11 == '\0' && (float)uVar6 < F32HI(uVar6)) {
                      (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03f3ac(ar4 + 0xb0,pdVar3,ar6_00,ar7_00));
                      (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031764(ar4,ar6,ar5,ar7_00));
                      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
                      if (cVar12 == '\0') {
                        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x234),
                                                 *(undefined4 *)(unsigned)(ar4 + 0x28));
                      }
                      else {
                        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
                        dVar9 = *(double *)(unsigned)(ar4 + 0x234);
                      }
                      if (cVar11 == '\0') {
                        fVar5 = F32LO(dVar9) - F32HI(dVar9);
                      }
                      else {
                        fVar5 = SUB84(dVar9 - dVar9,0);
                      }
                      if (cVar12 == '\0') {
                        *(float *)(unsigned)(ar4 + 0x28) = fVar5;
                        fVar5 = *(float *)(unsigned)(ar4 + 0x28);
                      }
                      else {
                        *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
                      }
                      if (cVar11 != '\0' || fVar5 <= 0.0) {
                        if (cVar12 == '\0') {
                          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
                        }
                        else {
                          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
                        }
                      }
                      uVar8 = (ulonglong)(uint)fVar5;
                      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c0230f0(ar4 + 0x14,ar6,ar5,ar7_00); });
                      uVar1 = (vsp = ((unsigned long)(fr0_ - 236)), Vec3_length(((undefined1 *)(fr0_ - 0x64)),ar6,ar5,ar7_00));
                      (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x80,uVar1,ar5,ar7_00));
                      uVar1 = 0xffffffff;
                      (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar5,ar7_00));
                      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xe8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 236)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar5,ar7_00); });
                      if (cVar12 == '\0') {
                        *(int *)(unsigned)(ar4 + 0x244) = (int)(uVar8 >> 0x20);
                      }
                      else {
                        *(ulonglong *)(unsigned)(ar4 + 0x244) = uVar8;
                      }
                      goto switchD_8c0a242e_default;
                    }
                    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
                  }
                  else {
                    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xe8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 236)); CAnimBody_GetCurFrame(ar4 + 0xb0,pdVar3,ar6_00,ar7_00); });
                    if (cVar12 == '\0') {
                      *(int *)(unsigned)(ar4 + 0x244) = (int)(uVar8 >> 0x20);
                    }
                    else {
                      *(ulonglong *)(unsigned)(ar4 + 0x244) = uVar8;
                    }
                    if (cVar12 == '\0') {
                      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
                    }
                    else {
                      *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar8 & 0xffffffff;
                    }
                    *(undefined4 *)(unsigned)(ar4 + 300) = 3;
                  }
                  goto switchD_8c0a242e_caseD_3;
                }
              }
            }
          }
        }
      }
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c0230f0(ar4 + 0x14,pdVar3,ar6_00,ar7_00); });
    uVar1 = (vsp = ((unsigned long)(fr0_ - 236)), Vec3_length(((undefined1 *)(fr0_ - 0x54)),pdVar3,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x80,uVar1,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7_00));
  }
switchD_8c0a242e_default:
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(&(*(float *)(fr0_ - 0x28)),0xffffffff,((void *)0x8c022cb0),&(*(float *)(fr0_ - 0x28))));
  return 1;
}

__asm__(".globl _FUN_8c0a23c4\n.set _FUN_8c0a23c4, _FUN_8c0a23c4_def\n");
