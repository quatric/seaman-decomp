#include "../decls.h"
undefined4 FUN_8c053f24_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *ar5_00;
  undefined4 uVar6;
  code *ar5_01;
  code *ar6_00;
  undefined4 *ar7_00;
  undefined4 uVar7;
  float fVar8;
  undefined8 in_dr0;
  undefined8 uVar9;
  double dVar10;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar11;
  char cVar12;
  char cVar13;
  undefined4 in_stack_fffffe78;
  undefined4 ain0;
  undefined1 auStack_f4 [16];
  undefined1 auStack_e4 [16];
  undefined1 auStack_d4 [16];
  undefined1 auStack_c4 [16];
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined4 auStack_44 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar7 = 1;
  ar7_00 = auStack_44;
  ar6_00 = (code *)&DAT_8c1365b0;
  auStack_44[0] = DAT_8c1365b0;
  auStack_44[1] = DAT_8c1365b4;
  auStack_44[2] = DAT_8c1365b8;
  auStack_44[3] = DAT_8c1365bc;
  uStack_34 = DAT_8c1365c0;
  uStack_30 = DAT_8c1365c4;
  uStack_2c = DAT_8c1365c8;
  uStack_28 = DAT_8c1365cc;
  uStack_24 = DAT_8c1365d0;
  uVar6 = DAT_8c1365cc;
  Vec3_ctor_zero(auStack_54,DAT_8c1365cc,&DAT_8c1365b0,ar7_00);
  FUN_8c022d04(ar4 + 0x90,uVar6,ar6_00,ar7_00);
  uVar2 = FUN_8c053724(ar5,uVar6,ar6_00,ar7_00);
  ain0 = CONCAT31((int3)((uint)in_stack_fffffe78 >> 8),(char)uVar2);
  if ((char)uVar2 == '\0') {
    iVar5 = (**(code **)(*ar5 + 0x34))(ar5,uVar6,ar6_00,ar7_00);
    if (iVar5 != 0) {
      uVar6 = (**(code **)(*ar5 + 0x34))(ar5,uVar6,ar6_00,ar7_00);
      uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      *(undefined4 *)(ar4 + 0x348) = uVar6;
      ar5_00 = &DAT_8c125d48;
      Vec3_assign(auStack_54,&DAT_8c125d48,ar6_00,ar7_00);
      if (*(int *)(ar4 + 0x348) == 3) {
        Vec3_ctor_xyz(auStack_64,Vec3_ctor_xyz,ar6_00,ar7_00);
        Vec3_assign(auStack_54,auStack_64,ar6_00,ar7_00);
        Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7_00);
      }
      else if (*(int *)(ar4 + 0x348) == 4) {
        Vec3_ctor_xyz(auStack_74,ar5_00,ar6_00,ar7_00);
        Vec3_assign(auStack_54,auStack_74,ar6_00,ar7_00);
        Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7_00);
      }
      else {
        *(undefined4 *)(ar4 + 0x348) = 0;
      }
      FUN_8c0230f0(ar4 + 0x14,FUN_8c0230f0,ar6_00,ar7_00,auStack_84);
      FUN_8c022dac(auStack_84,auStack_54,ar6_00,ar7_00);
      if (cVar13 == '\0') {
        in_dr0 = CONCAT44(0x41200000,uVar2);
      }
      else {
        in_dr0 = 0x8841200000;
      }
      bVar11 = cVar12 == '\0';
      fVar8 = (float)in_dr0;
      uVar1 = (ulonglong)in_dr0 >> 0x20;
      Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7_00);
      if (bVar11 && fVar8 < (float)uVar1) {
        *(undefined4 *)(ar4 + 0x348) = 0;
      }
      uVar6 = 0;
      (**(code **)(*ar5 + 0x38))(ar5,0,ar6_00,ar7_00);
      if ((*(int *)(ar4 + 0x348) != *(int *)(ar4 + 0x344)) && (*(int *)(ar4 + 0x344) == 0)) {
        *(undefined4 *)(ar4 + 0x344) = *(undefined4 *)(ar4 + 0x348);
        uVar6 = 0;
        *(undefined4 *)(ar4 + 0x284) = 0;
        *(undefined4 *)(ar4 + 300) = 0;
      }
    }
    if (*(int *)(ar4 + 0x324) == 1) {
      uVar6 = 0;
      *(undefined4 *)(ar4 + 0x344) = 0;
      *(undefined4 *)(ar4 + 0x27c) = 3;
    }
    iVar5 = *(int *)(ar4 + 0x344);
    if (iVar5 == 0) {
      iVar5 = *(int *)(ar4 + 300);
      if ((iVar5 < 5) && (-1 < iVar5)) {
                    
        switch(iVar5) {
        case 0:
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar5,ar6_00,ar7_00);
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        case 1:
          if (*(int *)(ar4 + 0x324) == 1) {
            *(undefined4 *)(ar4 + 0x27c) = 3;
          }
          ar6_00 = (code *)0x64;
          iVar5 = 0;
          iVar4 = rand_range(ar4,0,100,ar7_00);
          if (iVar4 < 0x33) {
            iVar4 = 0;
          }
          else {
            ar6_00 = (code *)0x9;
            uVar6 = 1;
            iVar4 = rand_range(ar4,1,9,ar7_00);
            uVar6 = get_field_94_02aaa4(ar5,uVar6,ar6_00,ar7_00);
            iVar5 = 5;
            iVar3 = libgcc_divide_helper_0101e4(uVar6,5,ar6_00,ar7_00);
            if (iVar3 == 1) {
              iVar4 = 7;
            }
            else if (iVar3 == 4) {
              iVar4 = 7;
            }
          }
          if (*(int *)(ar4 + 0x128) == 3) {
            FUN_8c022d04(ar4 + 0x248,iVar5,ar6_00,ar7_00);
          }
          else {
            FUN_8c022d04(ar4 + 0x248,iVar5,ar6_00,ar7_00);
          }
          iVar3 = *(int *)(ar4 + 0x27c);
          if (iVar3 == 0) {
            ar7_00 = (undefined4 *)0x0;
            ar6_00 = (code *)0xffffffff;
            iVar5 = iVar4 + 0x38;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar5,0xffffffff,0);
          }
          else if (iVar3 == 3) {
            ar7_00 = (undefined4 *)0x0;
            ar6_00 = (code *)0xffffffff;
            iVar5 = iVar4 + 0x26;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar5,0xffffffff,0);
          }
          else if (iVar3 == 4) {
            ar7_00 = (undefined4 *)0x0;
            ar6_00 = (code *)0xffffffff;
            iVar5 = iVar4 + 0x2f;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar5,0xffffffff,0);
          }
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          *(undefined4 *)(ar4 + 0x2b8) = 3;
          *(undefined4 *)(ar4 + 0x280) = auStack_44[iVar4];
          FUN_8c032ab0(ar4,iVar5,ar6_00,ar7_00);
          if (cVar13 == '\0') {
            *(int *)(ar4 + 0x248) = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            *(undefined8 *)(ar4 + 0x248) = in_dr0;
          }
        case 2:
          uVar6 = (undefined4)((ulonglong)in_dr0 >> 0x20);
          CAnimBody_GetCurFrame(ar4 + 0xb0,iVar5,ar6_00,ar7_00,ain0);
          if (cVar13 == '\0') {
            uVar9 = CONCAT44(*(undefined4 *)(ar4 + 0x24c),uVar6);
          }
          else {
            uVar9 = *(undefined8 *)(ar4 + 0x24c);
          }
          if (cVar12 != '\0' || (float)((ulonglong)uVar9 >> 0x20) <= (float)uVar9) {
            if (*(int *)(ar4 + 0x324) == 0) {
              iVar4 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar5,ar6_00,ar7_00);
              if (iVar4 == 7) {
                FUN_8c032ab0(ar4,iVar5,ar6_00,ar7_00);
                if (cVar13 == '\0') {
                  *(int *)(ar4 + 0x248) = (int)((ulonglong)uVar9 >> 0x20);
                }
                else {
                  *(undefined8 *)(ar4 + 0x248) = uVar9;
                }
                iVar5 = *(int *)(ar4 + 0x280) + -1;
                *(int *)(ar4 + 0x280) = iVar5;
                if (iVar5 < 0) {
                  ar6_00 = (code *)0x64;
                  iVar5 = rand_range(ar4,0,100,ar7_00);
                  if (iVar5 < 5) {
                    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
                  }
                  else {
                    *(undefined4 *)(ar4 + 300) = 1;
                  }
                  *(undefined4 *)(ar4 + 0x280) = 0;
                }
              }
            }
            else {
              iVar5 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar5,ar6_00,ar7_00);
              if (iVar5 == 1) {
                *(undefined4 *)(ar4 + 300) = 0;
                Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7_00);
                return 0;
              }
            }
          }
          else {
            s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar5,ar6_00,ar7_00);
          }
          break;
        case 3:
          iVar5 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar5,ar6_00,ar7_00);
          if (iVar5 == 1) {
            ar7_00 = (undefined4 *)0x0;
            ar6_00 = (code *)0xffffffff;
            uVar6 = 2;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar6,ar6_00,ar7_00);
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          }
          break;
        case 4:
          iVar5 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar5,ar6_00,ar7_00);
          if (iVar5 == 1) {
            *(undefined4 *)(ar4 + 300) = 0;
          }
        }
      }
    }
    else if ((iVar5 == 3) || (iVar5 == 4)) {
      iVar5 = *(int *)(ar4 + 300);
      if (iVar5 == 0) {
        iVar5 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar6,ar6_00,ar7_00);
        if (iVar5 == 1) {
          iVar5 = *(int *)(ar4 + 0x344);
          if (iVar5 == 3) {
            FUN_8c032ab0(ar4,3,ar6_00,ar7_00);
            FUN_8c032ab0(ar4,iVar5,ar6_00,ar7_00);
            Vec3_ctor_xyz(auStack_94,iVar5,ar6_00,ar7_00);
            Vec3_add(ar7,auStack_94,ar6_00,ar7_00,auStack_a4);
            Vec3_assign(ar4 + 0x54,auStack_a4,ar6_00,ar7_00);
            Vec3_dtor(auStack_a4,0xffffffff,ar6_00,ar7_00);
            Vec3_dtor(auStack_94,0xffffffff,ar6_00,ar7_00);
          }
          else {
            ar5_01 = FUN_8c032ab0;
            FUN_8c032ab0(ar4,FUN_8c032ab0,ar6_00,ar7_00);
            FUN_8c032ab0(ar4,ar5_01,ar6_00,ar7_00);
            Vec3_ctor_xyz(auStack_b4,Vec3_ctor_xyz,ar6_00,ar7_00);
            Vec3_add(ar7,auStack_b4,ar6_00,ar7_00,auStack_c4);
            Vec3_assign(ar4 + 0x54,auStack_c4,ar6_00,ar7_00);
            Vec3_dtor(auStack_c4,0xffffffff,ar6_00,ar7_00);
            Vec3_dtor(auStack_b4,0xffffffff,ar6_00,ar7_00);
          }
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
      }
      else if (iVar5 == 1) {
        FUN_8c0230f0(ar4 + 0x14,uVar6,ar6_00,ar7_00,auStack_d4);
        uVar6 = ar7;
        Vec3_sub(ar4 + 0x54,ar7,ar6_00,ar7_00,auStack_e4);
        FUN_8c0230f0(auStack_e4,uVar6,ar6_00,ar7_00,auStack_f4);
        FUN_8c022dac(auStack_d4,auStack_f4,ar6_00,ar7_00);
        if (cVar13 == '\0') {
          in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
        }
        Vec3_dtor(auStack_f4,0xffffffff,ar6_00,ar7_00);
        uVar2 = (undefined4)in_dr0;
        Vec3_dtor(auStack_e4,0xffffffff,ar6_00,ar7_00);
        uVar6 = 0xffffffff;
        Vec3_dtor(auStack_d4,0xffffffff,ar6_00,ar7_00);
        if (cVar13 == '\0') {
          dVar10 = (double)CONCAT44(0x41200000,uVar2);
        }
        else {
          dVar10 = -9.376284372703036e-251;
        }
        if (cVar12 == '\0') {
          bVar11 = (float)((ulonglong)dVar10 >> 0x20) < in_fr15;
        }
        else {
          bVar11 = dVar10 < (double)CONCAT44(in_fr14,in_fr15);
        }
        if (bVar11) {
          ar6_00 = (code *)(ar4 + 0x54);
          FUN_8c057b6c(ar4,ar7,ar6_00,ar7_00);
          uVar6 = 300;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
        else {
          *(undefined4 *)(ar4 + 300) = 0;
          if (*(int *)(ar4 + 0x344) == 3) {
            *(undefined4 *)(ar4 + 0x27c) = 4;
          }
          else {
            *(undefined4 *)(ar4 + 0x27c) = 3;
          }
          *(undefined4 *)(ar4 + 0x344) = 0;
        }
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar6,ar6_00,ar7_00);
      }
      else if (iVar5 == 2) {
        ar6_00 = FUN_8c057e58;
        iVar5 = FUN_8c057e58(ar4,uVar6,FUN_8c057e58,ar7_00);
        if (iVar5 == 0) {
          ar6_00 = (code *)0x12c;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + -1;
        }
      }
    }
  }
  else {
    iVar5 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar6,ar6_00,ar7_00);
    if (iVar5 == 1) {
      *(undefined4 *)(ar4 + 300) = 0;
      uVar7 = 0;
      *(undefined4 *)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(ar4 + 0x284) = 0;
    }
  }
  Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7_00);
  return uVar7;
}

__asm__(".globl _FUN_8c053f24\n.set _FUN_8c053f24, _FUN_8c053f24_def\n");
