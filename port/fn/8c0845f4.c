#include "../decls.h"
undefined4 FUN_8c0845f4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0;
  float fVar8;
  double dVar6;
  double dVar7;
  undefined4 in_fr3;
  undefined8 in_xd0;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined4 in_stack_ffffff08;
  undefined8 uStack_b8;
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar4 = 1;
  iVar1 = ar5;
  Vec3_ctor_zero(auStack_24,ar5,ar6,ar7);
  iVar2 = *(int *)(ar4 + 0x134);
  if ((iVar2 < 5) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6,ar7);
      if (iVar1 == 1) {
        if (cVar11 == '\0') {
          fVar5 = *(float *)**(undefined4 **)(ar5 + 4);
          fVar8 = 1235.0;
        }
        else {
          in_xd0 = *(undefined8 *)**(undefined4 **)(ar5 + 4);
          fVar5 = 1235.0;
          fVar8 = 2.74654e-43;
        }
        if (cVar10 != '\0' || fVar5 <= fVar8) {
          Vec3_assign(ar4 + 0x54,&DAT_8c125e48,ar6,ar7);
        }
        else {
          Vec3_scale(&DAT_8c125e48,&DAT_8c1379dc,ar6,ar7,auStack_34);
          Vec3_assign(ar4 + 0x54,auStack_34,ar6,ar7);
          Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
        }
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar3 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
        Vec3_scale(ar4 + 0x54,ar4 + 0x48,ar6,ar7,auStack_44);
        Vec3_scale(auStack_44,&DAT_8c1379e0,ar6,ar7,auStack_54);
        Vec3_add(**(undefined4 **)(ar5 + 4),auStack_54,ar6,ar7,auStack_64);
        Vec3_assign(ar4 + 0x280,auStack_64,ar6,ar7);
        Vec3_dtor(auStack_64,0xffffffff,ar6,ar7);
        Vec3_dtor(auStack_54,0xffffffff,ar6,ar7);
        Vec3_dtor(auStack_44,0xffffffff,ar6,ar7);
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x288));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x288);
          dVar6 = 6.54086966663815e-312;
        }
        if (cVar10 == '\0') {
          fVar5 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar6 - dVar6,0);
        }
        if (cVar11 == '\0') {
          *(float *)(ar4 + 0x288) = fVar5;
        }
        else {
          *(undefined8 *)(ar4 + 0x288) = in_xd0;
        }
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
        *(undefined4 *)(ar4 + 0x2b0) = 0;
      }
      break;
    case 1:
      Vec3_ctor_copy(auStack_74,ar4 + 0x54,ar6,ar7);
      ar6 = 1;
      iVar1 = FUN_8c0811b4(ar4,auStack_74,1,ar7);
      Vec3_dtor(auStack_74,0xffffffff,ar6,ar7);
      if (iVar1 == 0) {
        if (*(int *)(ar4 + 0x128) == 6) {
          ar7 = 0;
          ar6 = 0xffffffff;
          uVar3 = 0x24;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x24,0xffffffff,0);
        }
        else {
          ar7 = 0;
          ar6 = 0xffffffff;
          uVar3 = 0x2e;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2e,0xffffffff,0);
        }
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
        *(undefined4 *)(ar4 + 0x2b4) = 0;
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      }
      break;
    case 2:
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6,ar7);
      fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
      CAnimBody_GetCurFrame(ar4 + 0xb0,iVar1,ar6,ar7,in_stack_ffffff08);
      if (cVar11 == '\0') {
        fVar8 = 90.0;
      }
      else {
        fVar5 = 90.0;
        fVar8 = 4.316e-43;
      }
      if (cVar10 != '\0' || fVar8 <= fVar5) {
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      }
      break;
    case 3:
      Vec3_sub(ar4 + 0x280,**(undefined4 **)(ar5 + 4),ar6,ar7,auStack_84);
      Vec3_assign(auStack_24,auStack_84,ar6,ar7);
      Vec3_dtor(auStack_84,0xffffffff,ar6,ar7);
      Vec3_ctor_copy(auStack_94,auStack_24,ar6,ar7);
      FUN_8c082378(ar4,auStack_94,ar6,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_94,0xffffffff,ar6,ar7);
      FUN_8c03f3ac(ar4 + 0xb0,uVar3,ar6,ar7);
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7,in_stack_ffffff08);
      if (cVar11 == '\0') {
        uStack_b8 = CONCAT44((*(uint*)((uchar*)&uStack_b8+4)),(int)((ulonglong)in_dr0 >> 0x20));
        dVar6 = (double)CONCAT44(0x40400000,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = 1.3411048278844095e-08;
        uStack_b8 = in_dr0;
      }
      if (cVar10 == '\0' && SUB84(dVar6,0) < (float)((ulonglong)dVar6 >> 0x20)) {
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar6 = -7.957972460180408e-251;
        }
        if (cVar10 == '\0') {
          fVar5 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) + fVar5);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x28) = SUB84(dVar6,0);
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
      }
      Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_a4);
      Vec3_add(**(undefined4 **)(ar5 + 4),auStack_a4,ar6,ar7,(int)&uStack_b8 + 4);
      FUN_8c022fc0((int)&uStack_b8 + 4,ar4 + 0x280,ar6,ar7);
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),in_fr3);
        dVar7 = (double)CONCAT44(0x3f99999a,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        dVar7 = 6.54101886946819e-312;
      }
      if (cVar10 == '\0') {
        bVar9 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20) <
                (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        bVar9 = dVar7 * dVar7 < dVar6;
      }
      Vec3_dtor((int)&uStack_b8 + 4,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_a4,0xffffffff,ar6,ar7);
      if (bVar9) {
        if (*(int *)(ar4 + 0x2b8) == 1) {
          *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
          *(undefined4 *)(ar4 + 0x2b8) = 0;
          *(undefined4 *)(ar4 + 0x2b4) = 0;
        }
      }
      else {
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
        *(undefined4 *)(ar4 + 0x2b4) = 0;
      }
      break;
    case 4:
      ar6 = **(undefined4 **)(ar5 + 4);
      uVar3 = **(undefined4 **)(ar5 + 4);
      FUN_8c031c74(ar4,uVar3,ar6,ar7);
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar3,ar6,ar7);
      if (iVar1 == 1) {
        uVar4 = 0;
        *(undefined4 *)(ar4 + 0x134) = 0;
        *(undefined4 *)(ar4 + 0x294) = 0;
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar3 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
        FUN_8c032204(ar4 + 0xb0,uVar3,ar6,ar7,in_stack_ffffff08);
        *(undefined4 *)(ar4 + 0x178) = 0;
        *(undefined4 *)(ar4 + 0x218) = 0xffffffff;
      }
    }
  }
  Vec3_dtor(auStack_24,0xffffffff,ar6,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c0845f4\n.set _FUN_8c0845f4, _FUN_8c0845f4_def\n");
