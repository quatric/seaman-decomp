#include "../decls.h"
undefined4 FUN_8c0b5098_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  float fVar6;
  double in_dr0;
  double dVar7;
  double dVar8;
  undefined4 in_fr5;
  undefined8 in_xd0;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined8 uStack_94;
  double dStack_74;
  undefined8 uStack_60;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar4 = 1;
  uVar3 = ar6;
  Vec3_ctor_zero(auStack_1c,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x328) = 0xffffffff;
  iVar2 = *(int *)(ar4 + 300);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
      if (iVar2 == 1) {
        ar5 = 0x15;
        iVar2 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x15,ar6,ar7);
        if (cVar10 == '\0') {
          dVar8 = (double)CONCAT44((float)iVar2,in_fr5);
        }
        else {
          dVar8 = (double)iVar2;
        }
        dVar7 = (double)((ulonglong)in_dr0 & 0xffffffff);
        if (cVar10 == '\0') {
          bVar9 = (float)((ulonglong)dVar8 >> 0x20) < 0.0;
        }
        else {
          bVar9 = dVar8 < dVar7;
        }
        if (bVar9) {
          if (cVar11 == '\0') {
            dVar7 = (double)((ulonglong)in_dr0 & 0xffffffff);
          }
          else {
            dVar7 = -8.399317239676898e-251;
          }
        }
        in_dr0 = (double)((ulonglong)dVar7 & 0xffffffff);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7);
        *(undefined4 *)(ar4 + 300) = 2;
        *(undefined4 *)(ar4 + 0x32c) = 0;
        uVar4 = 0;
        FUN_8c03f39c(uVar3,ar5,ar6,ar7);
      }
      else {
        CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7,uVar3);
        dVar8 = in_dr0;
        if (cVar11 == '\0') {
          dStack_74 = (double)CONCAT44((*(uint*)((uchar*)&dStack_74+4)),(int)((ulonglong)in_dr0 >> 0x20));
          dVar8 = dStack_74;
        }
        dStack_74 = dVar8;
        iVar2 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x15,ar6,ar7);
        uVar3 = SUB84(in_dr0,0);
        ar5 = libgcc_divide_helper_0101e4(iVar2 + -1,8,ar6,ar7);
        in_dr0 = dStack_74;
        if (cVar11 == '\0') {
          in_dr0 = (double)CONCAT44((*(uint*)((uchar*)&dStack_74+0)),uVar3);
        }
        if (cVar10 == '\0') {
          iVar2 = (int)(float)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          iVar2 = (int)in_dr0;
        }
        iVar2 = libgcc_divide_helper_01031c(iVar2,ar5,ar6,ar7);
        if (iVar2 == 0) {
          iVar2 = *(int *)(ar4 + 0x32c);
          *(int *)(ar4 + 0x32c) = iVar2 + 1;
          *(int *)(ar4 + 0x328) = iVar2;
        }
      }
    }
    else if (iVar2 == 2) {
      uVar4 = 0;
    }
    goto LAB_8c0b51e6;
  }
  ar5 = 0x15;
  iVar2 = FUN_8c034148(ar4 + 0xb0,0x15,ar6,ar7);
  uVar5 = SUB84(in_dr0,0);
  if (iVar2 == 1) {
LAB_8c0b50fa:
    *(undefined4 *)(ar4 + 0x32c) = 0;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar2 == 2) {
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
    goto LAB_8c0b50fa;
  }
  in_dr0 = (double)(ulonglong)uVar5;
  if (cVar11 == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = 0;
  }
  else {
    *(double *)(ar4 + 0x2c) = in_dr0;
  }
LAB_8c0b51e6:
  fVar6 = SUB84(in_dr0,0);
  FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_2c);
  Vec3_normalize(auStack_2c,ar5,ar6,ar7);
  Vec3_assign(auStack_1c,auStack_3c,ar6,ar7);
  Vec3_dtor(auStack_3c,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
  if (cVar11 == '\0') {
    fVar6 = *(float *)(ar4 + 0x2c);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x2c);
  }
  if (cVar10 == '\0') {
    fVar6 = fVar6 + 1.0;
  }
  else {
    fVar6 = SUB84((double)CONCAT44(0x3f800000,fVar6) + (double)CONCAT44(0x3f800000,fVar6),0);
  }
  uStack_94 = in_xd0;
  if (cVar11 == '\0') {
    uStack_94 = CONCAT44(ar4,fVar6);
  }
  if (cVar11 == '\0') {
    *(undefined4 *)((*(uint*)((uchar*)&uStack_94+4)) + 0x2c) = (undefined4)uStack_94;
    dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),(undefined4)uStack_94);
  }
  else {
    *(undefined8 *)((*(uint*)((uchar*)&uStack_94+4)) + 0x2c) = uStack_94;
    dVar8 = *(double *)(ar4 + 0x38);
    in_xd0 = uStack_94;
  }
  if (cVar10 == '\0') {
    fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar8 / dVar8,0);
  }
  if (cVar11 == '\0') {
    dVar8 = (double)CONCAT44(0x3dcccccd,fVar6);
  }
  else {
    dVar8 = 2.72127724290066e-312;
  }
  if (cVar10 == '\0') {
    fVar6 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar8 * dVar8,0);
  }
  uVar1 = in_xd0;
  if (cVar11 == '\0') {
    uStack_60 = CONCAT44((*(uint*)((uchar*)&uStack_60+4)),fVar6);
    uVar1 = uStack_60;
  }
  uStack_60 = uVar1;
  Vec3_scale(auStack_1c,&uStack_60,ar6,ar7,auStack_4c);
  FUN_8c023aa0(ar4 + 0x14,auStack_4c,ar6,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_4c,0xffffffff,ar6,ar7);
  Vec3_normalize(ar4 + 0x14,uVar3,ar6,ar7);
  Vec3_assign(ar4 + 0x14,(int)&uStack_60 + 4,ar6,ar7);
  Vec3_dtor((int)&uStack_60 + 4,0xffffffff,ar6,ar7);
  Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7);
  Vec3_dtor(auStack_1c,0xffffffff,ar6,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c0b5098\n.set _FUN_8c0b5098, _FUN_8c0b5098_def\n");
