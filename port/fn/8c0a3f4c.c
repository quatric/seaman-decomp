#include "../decls.h"
undefined4 FUN_8c0a3f4c_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar6_00;
  undefined4 ar6_01;
  undefined4 ar7_00;
  float in_fr1;
  float fVar3;
  double dVar4;
  code *pcVar6;
  double dVar5;
  float fVar7;
  undefined4 in_fr14;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  float fStack_70;
  float fStack_6c;
  float fStack_5c;
  float fStack_58;
  code *apcStack_54 [4];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [4];
  double dStack_20;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar2 = ar5;
  ar6_00 = ar6;
  FUN_8c022d04(ar4 + 0x200,ar5,ar6,ar7);
  dVar5 = (double)(ulonglong)(uint)in_fr1;
  if (cVar9 == '\0') {
    fStack_58 = 0.0;
  }
  else {
    apcStack_54[0] = (code *)0x0;
    fStack_58 = in_fr1;
  }
  fVar7 = 1.0;
  Vec3_ctor_zero(auStack_24,uVar2,ar6_00,ar7);
  if ((*(int *)(ar6 + 0x68) == 0) || (-1 < (int)((uint)*(byte *)(ar4 + 0x1fc) << 0x1e))) {
    if ((*(int *)(ar6 + 100) == 0) || (-1 < (int)((uint)*(byte *)(ar4 + 0x1fc) << 0x1d))) {
      uVar2 = Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
    }
    else if ((*(int *)(ar4 + 0x124) == 0xb) || (*(int *)(ar4 + 0x124) == 0xc)) {
      uVar2 = Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
    }
    else {
      iVar1 = get_field_24_05c284(*(undefined4 *)(ar6 + 0x50),uVar2,ar6_00,ar7);
      if ((iVar1 == 2) &&
         (iVar1 = (**(code **)(*(int *)(*(int *)(ar6 + 0x50) + 8) + 0x180))
                            (*(int *)(ar6 + 0x50),uVar2,ar6_00,ar7), iVar1 == 4)) {
        *(undefined4 *)(ar4 + 0x214) = 0;
        ar7_00 = 0;
        ar6_01 = 0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0);
        uVar2 = 3;
        s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,3,ar6_01,ar7_00);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_01,ar7_00);
        uVar2 = Vec3_dtor(auStack_24,0xffffffff,ar6_01,ar7_00);
      }
      else {
        (**(code **)(*(int *)(*(int *)(ar6 + 0x50) + 8) + 0x170))
                  (*(int *)(ar6 + 0x50),uVar2,ar6_00,ar7);
        fVar3 = (float)((ulonglong)dVar5 >> 0x20);
        fStack_6c = fVar3;
        if (cVar9 != '\0') {
          fStack_6c = SUB84(dVar5,0);
          fVar3 = fVar7;
        }
        FUN_8c02f670(*(undefined4 *)(ar6 + 0x50),uVar2,ar6_00,ar7,auStack_44);
        Vec3_sub(ar5,auStack_44,ar6_00,ar7,apcStack_54);
        Vec3_assign(ar4 + 0x200,apcStack_54,ar6_00,ar7);
        Vec3_dtor(apcStack_54,0xffffffff,ar6_00,ar7);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
        Vec3_length_sq(ar4 + 0x200,uVar2,ar6_00,ar7);
        fVar7 = (float)((ulonglong)dVar5 >> 0x20);
        if (cVar9 == '\0') {
          dVar5 = (double)CONCAT44(fVar7,*(undefined4 *)(ar4 + 0x48));
          fStack_70 = fVar7;
        }
        else {
          fStack_70 = SUB84(dVar5,0);
          in_xd0 = *(undefined8 *)(ar4 + 0x48);
          fStack_6c = fVar7;
        }
        if (cVar8 == '\0') {
          fVar3 = SUB84(dVar5,0) + fVar3;
        }
        else {
          fVar3 = SUB84(dVar5 + (double)CONCAT44(in_fr14,fVar3),0);
        }
        if (cVar9 == '\0') {
          dVar5 = (double)CONCAT44(fStack_70,fVar3);
        }
        else {
          dVar5 = (double)CONCAT44(fStack_6c,fStack_70);
        }
        if (cVar8 == '\0') {
          fVar7 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar5 - dVar5,0);
        }
        if (cVar9 == '\0') {
          pcVar6 = (code *)0x3f000000;
          fStack_58 = fVar7;
        }
        else {
          fStack_58 = (float)in_xd0;
          apcStack_54[0] = (code *)((ulonglong)in_xd0 >> 0x20);
          fVar7 = 0.5;
          pcVar6 = Vec3_length;
        }
        if (cVar8 == '\0' && fVar7 < (float)(uint)pcVar6) {
          if (cVar9 == '\0') {
            fStack_58 = 0.5;
          }
          else {
            fStack_58 = 0.5;
            apcStack_54[0] = Vec3_length;
          }
        }
        Vec3_length(ar4 + 0x200,uVar2,ar6_00,ar7);
        FUN_8c023bf4(ar4 + 0x200,&fStack_58,ar6_00,ar7);
        uVar2 = Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
      }
    }
  }
  else {
    *(undefined4 *)(ar4 + 0x1d4) = 1;
    if (cVar9 == '\0') {
      fVar7 = *(float *)(*(int *)(ar6 + 0x68) + 0x158);
    }
    Vec3_assign(auStack_24,*(int *)(ar6 + 0x68) + 4,ar6_00,ar7);
    dVar4 = dStack_20;
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44((*(uint*)((uchar*)&dStack_20+0)),SUB84(dVar5,0));
    }
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar7,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + (double)CONCAT44(in_fr14,fVar7);
    }
    dVar5 = dVar4;
    if (cVar9 == '\0') {
      dStack_20 = (double)CONCAT44((*(uint*)((uchar*)&dStack_20+4)),(int)((ulonglong)dVar4 >> 0x20));
      dVar5 = dStack_20;
    }
    dStack_20 = dVar5;
    Vec3_sub(ar5,auStack_24,ar6_00,ar7,auStack_34);
    Vec3_assign(ar4 + 0x200,auStack_34,ar6_00,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
    Vec3_length_sq(ar4 + 0x200,uVar2,ar6_00,ar7);
    fVar3 = (float)((ulonglong)dVar4 >> 0x20);
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x48));
      fStack_5c = fVar3;
    }
    else {
      fStack_5c = SUB84(dVar4,0);
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      fStack_58 = fVar3;
    }
    if (cVar8 == '\0') {
      fVar7 = SUB84(dVar4,0) + fVar7;
    }
    else {
      fVar7 = SUB84(dVar4 + (double)CONCAT44(in_fr14,fVar7),0);
    }
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44(fStack_5c,fVar7);
    }
    else {
      dVar5 = (double)CONCAT44(fStack_58,fStack_5c);
    }
    if (cVar8 == '\0') {
      fVar7 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar9 == '\0') {
      pcVar6 = (code *)0x3f000000;
      fStack_58 = fVar7;
    }
    else {
      fStack_58 = (float)in_xd0;
      apcStack_54[0] = (code *)((ulonglong)in_xd0 >> 0x20);
      fVar7 = 0.5;
      pcVar6 = Vec3_length;
    }
    if (cVar8 == '\0' && fVar7 < (float)(uint)pcVar6) {
      if (cVar9 == '\0') {
        fStack_58 = 0.5;
      }
      else {
        fStack_58 = 0.5;
        apcStack_54[0] = Vec3_length;
      }
    }
    Vec3_length(ar4 + 0x200,uVar2,ar6_00,ar7);
    FUN_8c023bf4(ar4 + 0x200,&fStack_58,ar6_00,ar7);
    uVar2 = Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0a3f4c\n.set _FUN_8c0a3f4c, _FUN_8c0a3f4c_def\n");
