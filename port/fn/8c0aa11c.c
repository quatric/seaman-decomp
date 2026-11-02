#include "../decls.h"
undefined4 FUN_8c0aa11c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *ar5_00;
  undefined4 uVar4;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  undefined4 uVar5;
  float in_fr1;
  float fVar6;
  code *pcVar9;
  double dVar7;
  ulonglong uVar8;
  ulonglong in_xd0;
  char cVar10;
  char cVar11;
  undefined8 uStack_f8;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [12];
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar5 = 1;
  uVar4 = ar5;
  uVar3 = ar6;
  Vec3_ctor_zero(auStack_2c,ar5,ar6,ar7);
  iVar2 = get_field_6c_028cc4(ar6,uVar4,uVar3,ar7);
  ar7_00 = auStack_24;
  ar6_00 = auStack_28;
  ar5_00 = auStack_2c;
  FUN_8c0507a4(iVar2,ar5_00,ar6_00,ar7_00);
  if (iVar2 == 0) {
    Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7_00);
    uVar5 = 2;
  }
  else {
    iVar2 = *(int *)(ar4 + 300);
    if ((iVar2 < 6) && (-1 < iVar2)) {
                    
      switch(iVar2) {
      case 0:
        *(undefined4 *)(ar4 + 0x21bc) = 0;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        FUN_8c030f2c(ar4 + 0x1fc,ar5_00,ar6_00,ar7_00);
      case 1:
        ar6_00 = auStack_2c;
        iVar2 = FUN_8c0ab0d8(ar4,ar5,ar6_00,ar7_00);
        if (iVar2 == 0) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x2194) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x2194) = (ulonglong)(uint)in_fr1;
          }
          FUN_8c03f3e8(ar6,ar5,ar6_00,ar7_00);
        }
        break;
      case 2:
        if (cVar11 == '\0') {
          in_fr1 = *(float *)(ar4 + 0x2194);
        }
        else {
          in_xd0 = *(ulonglong *)(ar4 + 0x2194);
        }
        if (cVar10 == '\0') {
          in_fr1 = in_fr1 + 1.0;
        }
        else {
          in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0
                        );
        }
        uStack_f8 = in_xd0;
        if (cVar11 == '\0') {
          uStack_f8 = CONCAT44(ar4,in_fr1);
        }
        if (cVar11 == '\0') {
          *(undefined4 *)((*(uint*)((uchar*)&uStack_f8+4)) + 0x2194) = (undefined4)uStack_f8;
          uVar8 = CONCAT44(0x43160000,(undefined4)uStack_f8);
        }
        else {
          *(ulonglong *)((*(uint*)((uchar*)&uStack_f8+4)) + 0x2194) = uStack_f8;
          uVar8 = 0x12c43160000;
        }
        if (cVar10 != '\0' || (float)(uVar8 >> 0x20) <= (float)uVar8) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x2194) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x2194) = uVar8 & 0xffffffff;
          }
        }
        break;
      case 3:
        Vec3_ctor_xyz(auStack_3c,ar5_00,ar6_00,ar7_00);
        ar6_00 = auStack_3c;
        iVar2 = FUN_8c0ab0d8(ar4,ar5,ar6_00,ar7_00);
        Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7_00);
        if (iVar2 == 0) {
          ar7_00 = (undefined1 *)0x0;
          ar6_00 = (undefined1 *)0xffffffff;
          uVar4 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7_00);
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          uVar8 = (ulonglong)(uint)in_fr1;
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x22c) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x22c) = uVar8;
          }
          Vec3_ctor_xyz(auStack_4c,uVar4,ar6_00,ar7_00);
          uVar3 = Vec3_length(auStack_4c,uVar4,ar6_00,ar7_00);
          FUN_8c023138(uVar3,uVar4,ar6_00,ar7_00,auStack_5c);
          FUN_8c023138(ar4 + 0x14,uVar4,ar6_00,ar7_00,auStack_6c);
          FUN_8c022dac(auStack_5c,auStack_6c,ar6_00,ar7_00);
          if (cVar11 == '\0') {
            *(int *)(ar4 + 0x2194) = (int)(uVar8 >> 0x20);
          }
          else {
            *(ulonglong *)(ar4 + 0x2194) = uVar8;
          }
          Vec3_dtor(auStack_6c,0xffffffff,ar6_00,ar7_00);
          Vec3_dtor(auStack_5c,0xffffffff,ar6_00,ar7_00);
          uVar3 = 0xffffffff;
          Vec3_dtor(auStack_4c,0xffffffff,ar6_00,ar7_00);
          FUN_8c023138(ar4 + 0x14,uVar3,ar6_00,ar7_00,auStack_7c);
          Vec3_ctor_xyz(auStack_8c,uVar3,ar6_00,ar7_00);
          uVar4 = Vec3_length(auStack_8c,uVar3,ar6_00,ar7_00);
          FUN_8c023138(uVar4,uVar3,ar6_00,ar7_00,auStack_9c);
          Vec3_set_xyz(auStack_a8,uVar3,ar6_00,ar7_00);
          FUN_8c023484(auStack_9c,auStack_a8,ar6_00,ar7_00,auStack_b8);
          FUN_8c022dac(auStack_7c,auStack_b8,ar6_00,ar7_00);
          if (cVar11 == '\0') {
            fVar6 = (float)(uVar8 >> 0x20);
            pcVar9 = (code *)0x42b40000;
            uVar8 = in_xd0;
          }
          else {
            fVar6 = 90.0;
            pcVar9 = Vec3_set_xyz;
          }
          bVar1 = cVar10 != '\0';
          Vec3_dtor(auStack_b8,0xffffffff,ar6_00,ar7_00);
          object_dtor_delete(auStack_a8,0xffffffff,ar6_00,ar7_00);
          Vec3_dtor(auStack_9c,0xffffffff,ar6_00,ar7_00);
          Vec3_dtor(auStack_8c,0xffffffff,ar6_00,ar7_00);
          Vec3_dtor(auStack_7c,0xffffffff,ar6_00,ar7_00);
          if (bVar1 || fVar6 <= (float)(uint)pcVar9) {
            if (cVar11 == '\0') {
              dVar7 = (double)CONCAT44(0xbf800000,*(undefined4 *)(ar4 + 0x2194));
            }
            else {
              uVar8 = *(ulonglong *)(ar4 + 0x2194);
              dVar7 = 3.75058611530083e-312;
            }
            if (cVar10 == '\0') {
              fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
            }
            else {
              fVar6 = SUB84(dVar7 * dVar7,0);
            }
            if (cVar11 == '\0') {
              *(float *)(ar4 + 0x2194) = fVar6;
            }
            else {
              *(ulonglong *)(ar4 + 0x2194) = uVar8;
            }
          }
        }
        break;
      case 4:
        if (cVar11 == '\0') {
          in_fr1 = *(float *)(ar4 + 0x2194);
        }
        else {
          in_xd0 = *(ulonglong *)(ar4 + 0x2194);
        }
        if (cVar10 != '\0' || in_fr1 <= 0.0) {
          if (cVar11 == '\0') {
            in_fr1 = *(float *)(ar4 + 0x22c);
          }
          else {
            in_xd0 = *(ulonglong *)(ar4 + 0x22c);
          }
          if (cVar10 == '\0') {
            in_fr1 = in_fr1 - 1.0;
          }
          else {
            in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) - (double)CONCAT44(0x3f800000,in_fr1)
                           ,0);
          }
          if (cVar11 == '\0') {
            *(float *)(ar4 + 0x22c) = in_fr1;
            uVar8 = CONCAT44(*(undefined4 *)(ar4 + 0x2194),*(undefined4 *)(ar4 + 0x22c));
          }
          else {
            *(ulonglong *)(ar4 + 0x22c) = in_xd0;
            in_xd0 = *(ulonglong *)(ar4 + 0x22c);
            uVar8 = *(ulonglong *)(ar4 + 0x2194);
          }
          if (cVar10 == '\0' && (float)(uVar8 >> 0x20) < (float)uVar8) {
            if (cVar11 == '\0') {
              uVar8 = (ulonglong)*(uint *)(ar4 + 0x21ac);
            }
            else {
              in_xd0 = *(ulonglong *)(ar4 + 0x21ac);
            }
            dVar7 = (double)CONCAT44(0x3f800000,(float)uVar8);
            if (cVar10 == '\0') {
              fVar6 = (float)uVar8 - 1.0;
            }
            else {
              fVar6 = SUB84(dVar7 - dVar7,0);
            }
            if (cVar11 == '\0') {
              *(float *)(ar4 + 0x21ac) = fVar6;
            }
            else {
              *(ulonglong *)(ar4 + 0x21ac) = in_xd0;
            }
          }
          else {
            if (cVar11 == '\0') {
              *(undefined4 *)(ar4 + 0x21ac) = 0;
            }
            else {
              *(ulonglong *)(ar4 + 0x21ac) = uVar8 & 0xffffffff;
            }
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            FUN_8c022d04(ar4 + 0x14,ar5_00,ar6_00,ar7_00);
          }
        }
        else {
          if (cVar11 == '\0') {
            in_fr1 = *(float *)(ar4 + 0x22c);
          }
          else {
            in_xd0 = *(ulonglong *)(ar4 + 0x22c);
          }
          if (cVar10 == '\0') {
            in_fr1 = in_fr1 + 1.0;
          }
          else {
            in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1)
                           ,0);
          }
          if (cVar11 == '\0') {
            *(float *)(ar4 + 0x22c) = in_fr1;
            uVar8 = CONCAT44(*(undefined4 *)(ar4 + 0x2194),*(undefined4 *)(ar4 + 0x22c));
          }
          else {
            *(ulonglong *)(ar4 + 0x22c) = in_xd0;
            in_xd0 = *(ulonglong *)(ar4 + 0x22c);
            uVar8 = *(ulonglong *)(ar4 + 0x2194);
          }
          if (cVar10 == '\0' && (float)uVar8 < (float)(uVar8 >> 0x20)) {
            if (cVar11 == '\0') {
              uVar8 = (ulonglong)*(uint *)(ar4 + 0x21ac);
            }
            else {
              in_xd0 = *(ulonglong *)(ar4 + 0x21ac);
            }
            dVar7 = (double)CONCAT44(0x3f800000,(float)uVar8);
            if (cVar10 == '\0') {
              fVar6 = (float)uVar8 + 1.0;
            }
            else {
              fVar6 = SUB84(dVar7 + dVar7,0);
            }
            if (cVar11 == '\0') {
              *(float *)(ar4 + 0x21ac) = fVar6;
            }
            else {
              *(ulonglong *)(ar4 + 0x21ac) = in_xd0;
            }
          }
          else {
            if (cVar11 == '\0') {
              *(undefined4 *)(ar4 + 0x21ac) = 0;
            }
            else {
              *(ulonglong *)(ar4 + 0x21ac) = uVar8 & 0xffffffff;
            }
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            FUN_8c022d04(ar4 + 0x14,ar5_00,ar6_00,ar7_00);
          }
        }
        FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6_00,ar7_00);
        break;
      case 5:
        iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7_00);
        if (iVar2 == 1) {
          FUN_8c030eb8(ar4 + 0x1fc,ar5_00,ar6_00,ar7_00);
          *(undefined4 *)(ar4 + 300) = 0;
          uVar5 = 0;
        }
      }
    }
    Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7_00);
  }
  return uVar5;
}

__asm__(".globl _FUN_8c0aa11c\n.set _FUN_8c0aa11c, _FUN_8c0aa11c_def\n");
