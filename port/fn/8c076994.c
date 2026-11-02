#include "../decls.h"
undefined4 FUN_8c076994_def(int ar4,undefined4 *ar5,code *ar6,undefined *ar7)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int ar5_00;
  undefined *puVar5;
  undefined4 ar7_00;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  undefined8 in_dr0;
  float fVar9;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [12];
  undefined1 auStack_114 [16];
  undefined1 auStack_104 [12];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [12];
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [12];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [20];
  
  fVar8 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar12 = '\0';
  cVar11 = '\0';
  uVar6 = 1;
  iVar7 = 0;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  pcVar4 = FUN_8c053724;
  uVar2 = FUN_8c053724(*ar5,FUN_8c053724,ar6,ar7);
  if ((char)uVar2 == '\0') {
    iVar3 = (**(code **)(*(int *)*ar5 + 0x34))((int *)*ar5,pcVar4,ar6,ar7);
    if (iVar3 != 0) {
      *(undefined4 *)(ar4 + 0x294) = 0;
      uVar2 = (**(code **)(*(int *)*ar5 + 0x34))((int *)*ar5,pcVar4,ar6,ar7);
      *(undefined4 *)(ar4 + 0x2d8) = uVar2;
      Vec3_assign(auStack_28,&DAT_8c125e68,ar6,ar7);
      if (*(int *)(ar4 + 0x2d8) == 3) {
        Vec3_set_xyz(auStack_34,0x2d8,ar6,ar7);
        FUN_8c023484(&DAT_8c125e68,auStack_34,ar6,ar7,auStack_44);
        Vec3_assign(auStack_28,auStack_44,ar6,ar7);
        Vec3_dtor(auStack_44,0xffffffff,ar6,ar7);
        uVar2 = 0xffffffff;
        object_dtor_delete(auStack_34,0xffffffff,ar6,ar7);
        ar6 = (code *)auStack_54;
        FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7,ar6);
        FUN_8c022dac(auStack_54,auStack_28,ar6,ar7);
        if (cVar12 == '\0') {
          fVar9 = 15.0;
        }
        else {
          fVar8 = 15.0;
          fVar9 = 2.69049e-43;
        }
        bVar1 = cVar11 != '\0';
        bVar10 = fVar9 <= fVar8;
        fVar8 = fVar9;
        Vec3_dtor(auStack_54,0xffffffff,ar6,ar7);
        if (bVar1 || bVar10) {
          *(undefined4 *)(ar4 + 300) = 0;
        }
        else {
          *(undefined4 *)(ar4 + 0x2d8) = 0;
        }
      }
      else if (*(int *)(ar4 + 0x2d8) == 4) {
        Vec3_set_xyz(auStack_60,0x2d8,ar6,ar7);
        ar7 = &DAT_8c125e68;
        ar6 = FUN_8c023484;
        FUN_8c023484(&DAT_8c125e68,auStack_60,FUN_8c023484,&DAT_8c125e68,auStack_70);
        Vec3_assign(auStack_28,auStack_70,ar6,ar7);
        Vec3_dtor(auStack_70,0xffffffff,ar6,ar7);
        uVar2 = 0xffffffff;
        object_dtor_delete(auStack_60,0xffffffff,ar6,ar7);
        FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7,auStack_80);
        FUN_8c022dac(auStack_80,auStack_28,ar6,ar7);
        if (cVar12 == '\0') {
          fVar9 = 15.0;
        }
        else {
          fVar8 = 15.0;
          fVar9 = 2.63444e-43;
        }
        bVar1 = cVar11 != '\0';
        bVar10 = fVar9 <= fVar8;
        fVar8 = fVar9;
        Vec3_dtor(auStack_80,0xffffffff,ar6,ar7);
        if (bVar1 || bVar10) {
          *(undefined4 *)(ar4 + 300) = 0;
        }
        else {
          *(undefined4 *)(ar4 + 0x2d8) = 0;
        }
      }
      else if ((((*(int *)(ar4 + 0x2d8) != 8) && (*(int *)(ar4 + 0x2d8) != 5)) &&
               (*(int *)(ar4 + 0x2d8) != 7)) && (*(int *)(ar4 + 0x2d8) != 6)) {
        *(undefined4 *)(ar4 + 0x2d8) = 0;
      }
      (**(code **)(*(int *)*ar5 + 0x38))((int *)*ar5,0,ar6,ar7);
      if (((*(int *)(ar4 + 0x2d8) != *(int *)(ar4 + 0x2d4)) && (*(int *)(ar4 + 0x2d4) != 8)) &&
         (*(int *)(ar4 + 0x2d4) != 7)) {
        *(undefined4 *)(ar4 + 0x2d4) = *(undefined4 *)(ar4 + 0x2d8);
      }
    }
    iVar3 = *(int *)(ar4 + 0x2d4);
    if ((iVar3 < 9) && (-1 < iVar3)) {
                    
      switch(iVar3) {
      case 0:
        FUN_8c0230f0(ar4 + 0x14,(&switchdata_8c076cd4_8c076ce0)[iVar3],ar6,ar7,auStack_90)
        ;
        FUN_8c082378(ar4,auStack_90,ar6,ar7);
        Vec3_dtor(auStack_90,0xffffffff,ar6,ar7);
        iVar3 = *(int *)(ar4 + 300);
        if ((iVar3 < 5) && (-1 < iVar3)) {
          ar5_00 = iVar3 * 4;
                    
          switch(iVar3) {
          case 0:
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e,ar6,ar7);
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          case 1:
            iVar7 = *(int *)(ar4 + 0x260);
            if (iVar7 == 0) {
              uVar2 = 0;
              ar6 = (code *)0xffffffff;
              s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
              s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e,ar6,uVar2);
            }
            else if (iVar7 == 3) {
              ar6 = (code *)0xffffffff;
              s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
            }
            else if (iVar7 == 4) {
              ar6 = (code *)0xffffffff;
              s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,6,0xffffffff,0);
            }
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            break;
          case 2:
            iVar3 = *(int *)(ar4 + 0x260);
            if (iVar3 == 0) {
              iVar7 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7);
              FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6,ar7,auStack_a0);
              FUN_8c022dac(auStack_a0,&DAT_8c125e68,ar6,ar7);
              if (cVar12 == '\0') {
                fVar9 = 45.0;
              }
              else {
                fVar8 = 45.0;
                fVar9 = 2.57839e-43;
              }
              Vec3_dtor(auStack_a0,0xffffffff,ar6,ar7);
              if (cVar11 == '\0' && fVar9 < fVar8) {
                iVar3 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
                if (iVar3 == 3) {
                  *(undefined4 *)(ar4 + 0x2d4) = 3;
                }
                else {
                  *(undefined4 *)(ar4 + 0x2d4) = 4;
                }
                *(undefined4 *)(ar4 + 0x2b0) = 0;
                *(undefined4 *)(ar4 + 300) = 0;
              }
            }
            else if ((iVar3 == 3) || (iVar3 == 4)) {
              iVar3 = *(int *)(ar4 + 0x128);
              if ((iVar3 < 8) && (-1 < iVar3)) {
                    
                switch(iVar3) {
                case 0:
                case 1:
                  iVar7 = FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7);
                  break;
                case 2:
                  iVar7 = FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7);
                  break;
                default:
                  iVar7 = FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7);
                  break;
                case 6:
                  iVar7 = FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7);
                }
              }
              if (*(int *)(ar4 + 0x260) == 3) {
                Vec3_set_xyz(auStack_ac,Vec3_set_xyz,ar6,ar7);
                FUN_8c023484(&DAT_8c125e68,auStack_ac,ar6,ar7,auStack_bc);
                Vec3_assign(auStack_28,auStack_bc,ar6,ar7);
                Vec3_dtor(auStack_bc,0xffffffff,ar6,ar7);
                uVar2 = 0xffffffff;
                object_dtor_delete(auStack_ac,0xffffffff,ar6,ar7);
              }
              else {
                Vec3_set_xyz(auStack_c8,ar5_00,ar6,ar7);
                FUN_8c023484(&DAT_8c125e68,auStack_c8,ar6,ar7,auStack_d8);
                Vec3_assign(auStack_28,auStack_d8,ar6,ar7);
                Vec3_dtor(auStack_d8,0xffffffff,ar6,ar7);
                uVar2 = 0xffffffff;
                object_dtor_delete(auStack_c8,0xffffffff,ar6,ar7);
              }
              FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7,auStack_e8);
              FUN_8c022dac(auStack_e8,auStack_28,ar6,ar7);
              if (cVar12 == '\0') {
                fVar9 = 35.0;
              }
              else {
                fVar8 = 35.0;
                fVar9 = 2.52234e-43;
              }
              Vec3_dtor(auStack_e8,0xffffffff,ar6,ar7);
              if (cVar11 == '\0' && fVar9 < fVar8) {
                iVar3 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
                if (iVar3 == 3) {
                  *(undefined4 *)(ar4 + 0x2d4) = 3;
                }
                else {
                  *(undefined4 *)(ar4 + 0x2d4) = 4;
                }
                *(undefined4 *)(ar4 + 0x2b0) = 0;
                *(undefined4 *)(ar4 + 300) = 0;
              }
            }
            if ((iVar7 == 7) || (iVar7 == 1)) {
              ar6 = (code *)0x64;
              iVar7 = rand_range(ar4,0,100,ar7);
              if (iVar7 < 2) {
                *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
              }
              else {
                *(undefined4 *)(ar4 + 300) = 1;
              }
            }
            break;
          case 3:
            iVar7 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7);
            if (iVar7 == 1) {
              if (*(int *)(ar4 + 0x128) == 6) {
                ar7_00 = 0;
                ar6 = (code *)0x0;
                uVar2 = 0x25;
                s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x25,0,0);
              }
              else if (*(int *)(ar4 + 0x128) == 7) {
                ar7_00 = 0;
                ar6 = (code *)0x0;
                uVar2 = 0x2f;
                s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2f,0,0);
              }
              else {
                ar7_00 = 0;
                ar6 = (code *)0x0;
                uVar2 = 0x13;
                s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0,0);
              }
              s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7_00);
              *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            }
            break;
          case 4:
            iVar7 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7);
            if (iVar7 == 1) {
              *(undefined4 *)(ar4 + 300) = 1;
            }
          }
        }
        break;
      case 3:
      case 4:
        FUN_8c0230f0(ar4 + 0x14,auStack_f8,ar6,ar7,auStack_f8);
        FUN_8c082378(ar4,auStack_f8,ar6,ar7);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_f8,0xffffffff,ar6,ar7);
        if (*(int *)(ar4 + 300) == 0) {
          FUN_8c032ab0(ar4,uVar2,ar6,ar7);
          if (*(int *)(ar4 + 0x2d4) == 3) {
            Vec3_set_xyz(auStack_104,uVar2,ar6,ar7);
            FUN_8c023484(&DAT_8c125e68,auStack_104,ar6,ar7,auStack_114);
            Vec3_assign(ar4 + 0x54,auStack_114,ar6,ar7);
            Vec3_dtor(auStack_114,0xffffffff,ar6,ar7);
            uVar2 = 0xffffffff;
            object_dtor_delete(auStack_104,0xffffffff,ar6,ar7);
          }
          else {
            Vec3_set_xyz(auStack_120,uVar2,ar6,ar7);
            FUN_8c023484(&DAT_8c125e68,auStack_120,ar6,ar7,auStack_130);
            Vec3_assign(ar4 + 0x54,auStack_130,ar6,ar7);
            Vec3_dtor(auStack_130,0xffffffff,ar6,ar7);
            uVar2 = 0xffffffff;
            object_dtor_delete(auStack_120,0xffffffff,ar6,ar7);
          }
          Vec3_length(ar4 + 0x54,uVar2,ar6,ar7);
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          ar7 = (undefined *)(ar4 + 0xb0);
          ar6 = get_field_1c_026dd8;
          iVar7 = get_field_1c_026dd8(ar7,300,get_field_1c_026dd8,ar7);
          if (iVar7 == 0) {
            *(undefined4 *)(ar4 + 0x2b0) = 1;
          }
          else {
            ar7 = (undefined *)0x2b0;
            ar6 = (code *)0x0;
            *(undefined4 *)(ar4 + 0x2b0) = 0;
          }
          *(undefined4 *)(ar4 + 0x2b4) = 0;
        }
        else if (*(int *)(ar4 + 300) != 1) break;
        Vec3_ctor_copy(auStack_140,ar4 + 0x54,ar6,ar7);
        ar6 = (code *)0x1;
        pcVar4 = FUN_8c0811b4;
        iVar7 = FUN_8c0811b4(ar4,auStack_140,1,FUN_8c0811b4);
        Vec3_dtor(auStack_140,0xffffffff,ar6,pcVar4);
        if (iVar7 == 0) {
          *(undefined4 *)(ar4 + 300) = 0;
          *(undefined4 *)(ar4 + 0x2b0) = 0;
          *(undefined4 *)(ar4 + 0x2b4) = 0;
          if (*(int *)(ar4 + 0x2d4) == 3) {
            *(undefined4 *)(ar4 + 0x220) = 4;
            *(undefined4 *)(ar4 + 0x260) = 4;
          }
          else {
            *(undefined4 *)(ar4 + 0x220) = 3;
            *(undefined4 *)(ar4 + 0x260) = 3;
          }
          *(undefined4 *)(ar4 + 0x2d4) = 0;
        }
        break;
      case 5:
        iVar7 = FUN_8c0839c0(ar4,ar5,ar6,ar7);
        if (iVar7 == 0) {
          *(undefined4 *)(ar4 + 0x2d4) = 0;
          puVar5 = &DAT_8c125e68;
          uVar2 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
          *(undefined4 *)(ar4 + 0x260) = uVar2;
          FUN_8c0230f0(ar4 + 0x14,puVar5,ar6,ar7,auStack_150);
          FUN_8c022dac(auStack_150,&DAT_8c125e68,ar6,ar7);
          if (cVar12 == '\0') {
            fVar9 = 20.0;
          }
          else {
            fVar8 = 20.0;
            fVar9 = 2.41023e-43;
          }
          Vec3_dtor(auStack_150,0xffffffff,ar6,ar7);
          if (cVar11 == '\0' && fVar8 < fVar9) {
            *(undefined4 *)(ar4 + 0x260) = 0;
          }
        }
        break;
      case 6:
        iVar7 = FUN_8c083780(ar4,ar5,ar6,ar7);
        if (iVar7 == 0) {
          *(undefined4 *)(ar4 + 0x2d4) = 0;
          puVar5 = &DAT_8c125e68;
          uVar2 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
          *(undefined4 *)(ar4 + 0x260) = uVar2;
          FUN_8c0230f0(ar4 + 0x14,puVar5,ar6,ar7,auStack_160);
          FUN_8c022dac(auStack_160,&DAT_8c125e68,ar6,ar7);
          if (cVar12 == '\0') {
            fVar9 = 20.0;
          }
          else {
            fVar8 = 20.0;
            fVar9 = 2.35418e-43;
          }
          Vec3_dtor(auStack_160,0xffffffff,ar6,ar7);
          if (cVar11 == '\0' && fVar8 < fVar9) {
            *(undefined4 *)(ar4 + 0x260) = 0;
          }
        }
        break;
      case 7:
        iVar7 = FUN_8c0845f4(ar4,ar5,ar6,ar7);
        if (iVar7 == 0) {
          *(undefined4 *)(ar4 + 0x2d4) = 0;
          puVar5 = &DAT_8c125e68;
          uVar2 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
          *(undefined4 *)(ar4 + 0x260) = uVar2;
          FUN_8c0230f0(ar4 + 0x14,puVar5,ar6,ar7,auStack_170);
          FUN_8c022dac(auStack_170,&DAT_8c125e68,ar6,ar7);
          if (cVar12 == '\0') {
            fVar9 = 20.0;
          }
          else {
            fVar8 = 20.0;
            fVar9 = 2.29813e-43;
          }
          Vec3_dtor(auStack_170,0xffffffff,ar6,ar7);
          if (cVar11 == '\0' && fVar8 < fVar9) {
            *(undefined4 *)(ar4 + 0x260) = 0;
          }
          *(undefined4 *)(ar4 + 300) = 0;
        }
        break;
      case 8:
        iVar7 = FUN_8c083d8c(ar4,ar5,ar6,ar7);
        if (iVar7 == 0) {
          *(undefined4 *)(ar4 + 0x2d4) = 0;
          uVar2 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
          *(undefined4 *)(ar4 + 0x260) = uVar2;
          FUN_8c0230f0(ar4 + 0x14,FUN_8c0230f0,ar6,ar7,auStack_180);
          ar6 = FUN_8c022dac;
          FUN_8c022dac(auStack_180,&DAT_8c125e68,FUN_8c022dac,ar7);
          if (cVar12 == '\0') {
            fVar9 = 20.0;
          }
          else {
            fVar8 = 20.0;
            fVar9 = 2.24208e-43;
          }
          Vec3_dtor(auStack_180,0xffffffff,ar6,ar7);
          if (cVar11 == '\0' && fVar8 < fVar9) {
            *(undefined4 *)(ar4 + 0x260) = 0;
          }
          *(undefined4 *)(ar4 + 300) = 0;
        }
      }
    }
  }
  else {
    iVar7 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar4,ar6,ar7);
    if (iVar7 == 1) {
      FUN_8c03c314(ar4,pcVar4,ar6,ar7);
      uVar6 = 0;
      *(undefined4 *)(ar4 + 0x2b4) = 0;
    }
  }
  Vec3_dtor(auStack_28,0xffffffff,ar6,Vec3_dtor);
  return uVar6;
}

__asm__(".globl _FUN_8c076994\n.set _FUN_8c076994, _FUN_8c076994_def\n");
