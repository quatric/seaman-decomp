#include "../decls.h"
int FUN_8c0db3bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int ar4_00;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  int iVar3;
  int iVar4;
  int a4;
  int iVar5;
  uint extraout_fr1;
  undefined4 extraout_fr1_00;
  undefined4 extraout_fr0;
  undefined4 in_fr15;
  float fVar6;
  undefined8 uVar7;
  undefined8 in_xd14;
  char cVar8;
  char cVar9;
  undefined8 uStack_4c;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [12];
  
  cVar9 = '\0';
  cVar8 = '\0';
  iVar1 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  iVar3 = 0;
  Vec3_ctor_zero(auStack_38,ar5,ar6,ar7);
  Vec3_ctor_zero((int)&uStack_4c + 4,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    uStack_4c = (ulonglong)(*(uint*)((uchar*)&uStack_4c+4)) << 0x20;
    uVar7 = CONCAT44(0x47435000,in_fr15);
  }
  else {
    uStack_4c = (ulonglong)extraout_fr1;
    uVar7 = 0x8c022cb047435000;
  }
  if (iVar1 == 0) {
    Vec3_dtor((int)&uStack_4c + 4,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
    iVar3 = 0;
  }
  else {
    FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7);
    ar7_00 = auStack_40;
    ar6_00 = auStack_44;
    iVar1 = (int)&uStack_4c + 4;
    FUN_8c0db5a8(ar4 + 0x9e8,iVar1,ar6_00,ar7_00);
    for (iVar4 = 3; iVar4 < 8; iVar4 = iVar4 + 1) {
      iVar2 = get_field_38_0db5a0(iVar4 * 0x3c + ar4 + 0x3a8,iVar1,ar6_00,ar7_00);
      if (iVar2 != 0) {
        ar4_00 = FUN_8c0db580(iVar4 * 0x3c + ar4 + 0x3a8,iVar1,ar6_00,ar7_00);
        a4 = *(int *)(ar4_00 + 8);
        for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
          ar7_00 = auStack_30;
          ar6_00 = auStack_34;
          (**(code **)(*(int *)(a4 + 8) + 0x134))(a4,auStack_38,ar6_00,ar7_00);
          iVar1 = ar4 + 0xa68;
          FUN_8c023b4c(auStack_38,iVar1,ar6_00,ar7_00);
          Vec3_length_sq(auStack_38,iVar1,ar6_00,ar7_00);
          if (cVar9 == '\0') {
            uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),extraout_fr0);
          }
          else {
            in_xd14 = CONCAT44(extraout_fr0,extraout_fr1_00);
          }
          fVar6 = (float)uVar7;
          if ((cVar8 == '\0' && fVar6 < (float)((ulonglong)uVar7 >> 0x20)) &&
             (iVar3 = a4, uVar7 = in_xd14, cVar9 == '\0')) {
            uVar7 = CONCAT44(fVar6,fVar6);
          }
          ar4_00 = list_node_next(ar4_00,iVar1,ar6_00,ar7_00);
          a4 = *(int *)(ar4_00 + 8);
        }
      }
    }
    Vec3_dtor((int)&uStack_4c + 4,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7_00);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c0db3bc\n.set _FUN_8c0db3bc, _FUN_8c0db3bc_def\n");
