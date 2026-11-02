#include "../decls.h"
int FUN_8c0a6628_def(int ar4,int *ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 ar5_01;
  int iVar2;
  undefined8 in_dr0;
  float fVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  undefined4 in_stack_ffffff5c;
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [16];
  float fStack_20;
  undefined8 uStack_1c;
  undefined4 uStack_c;
  
  fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar6 = '\0';
  cVar5 = '\0';
  uStack_c = 1;
  iVar2 = 1;
  FUN_8c03f480(*ar5,ar5,ar6,ar7,auStack_30);
  Vec3_ctor_copy(&fStack_20,auStack_30,ar6,ar7);
  ar5_00 = -1;
  Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  if (DAT_8c2858ec == '\0') {
    _DAT_8c2858e8 = 0;
    DAT_8c2858ec = '\x01';
  }
  if (DAT_8c2858f4 == '\0') {
    _DAT_8c2858f0 = 0;
    DAT_8c2858f4 = '\x01';
  }
  if (*(int *)(ar4 + 0x178) == 1) {
    ar5_00 = ar4 + 0x168;
    Vec3_assign(&fStack_20,ar5_00,ar6,ar7);
  }
  iVar1 = *(int *)(ar4 + 0x124);
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      iVar2 = get_field_24_026024(ar5[6],ar5_00,ar6,ar7);
      if (iVar2 == 0) {
        if (cVar6 == '\0') {
          fVar3 = 1000.0;
        }
        else {
          fStack_20 = 1000.0;
          fVar3 = 180.0;
        }
        if (cVar5 == '\0' && fVar3 < fStack_20) {
          Vec3_dtor(&fStack_20,0xffffffff,ar6,ar7);
          return 2;
        }
        if (cVar6 == '\0') {
          uStack_1c = CONCAT44((*(uint*)((uchar*)&uStack_1c+4)),0x43340000);
        }
        else {
          uStack_1c = 0x8843340000;
        }
      }
      Vec3_ctor_copy(auStack_4c,*(undefined4 *)(uint)ar5[1],ar6,ar7);
      Vec3_ctor_copy(auStack_5c,&fStack_20,ar6,ar7);
      ar6 = auStack_5c;
      iVar2 = FUN_8c0a72b4(ar4,auStack_4c,ar6,ar7);
      Vec3_dtor(auStack_5c,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_4c,0xffffffff,ar6,ar7);
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7);
      break;
    case 1:
      FUN_8c03f460(auStack_3c,ar5[3],ar6,ar7);
      ar7 = *(undefined4 *)(ar5[1] + 4);
      ar6 = auStack_3c;
      iVar2 = FUN_8c0a6974(ar4,*(undefined4 *)(uint)ar5[1],ar6,ar7);
      free_if_nonnull_wrap_102790(auStack_3c,0xffffffff,ar6,ar7);
      break;
    case 2:
      iVar2 = 0;
      break;
    case 3:
      iVar2 = (**(code **)(*(int *)(uint)ar5[6] + 0x1a8))((int *)(uint)ar5[6],ar5_00,ar6,ar7);
      if (iVar2 == 1) {
        ar6 = (undefined1 *)*ar5;
        iVar2 = FUN_8c0aa11c(ar4,*(undefined4 *)(uint)ar5[1],ar6,ar7);
      }
      else {
        iVar2 = 2;
      }
      break;
    case 4:
      *(undefined4 *)(ar4 + 0x214) = 0;
      Vec3_ctor_xyz(auStack_6c,ar5_00,ar6,ar7);
      Vec3_assign(ar4 + 0x80,auStack_6c,ar6,ar7);
      Vec3_dtor(auStack_6c,0xffffffff,ar6,ar7);
      if (*(int *)(ar4 + 300) == 0) {
        ar5_01 = 6;
        FUN_8c031de8(ar4,6,ar6,ar7);
        CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_01,ar6,ar7,in_stack_ffffff5c);
        if (cVar6 == '\0') {
          pcVar4 = (code *)0x42b40000;
        }
        else {
          fVar3 = 90.0;
          pcVar4 = s_CAnimBody_SetFrame_033e6e;
        }
        if (cVar5 != '\0' || (float)(uint)pcVar4 <= fVar3) {
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_01,ar6,ar7);
          iVar2 = 0;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
      }
      break;
    case 5:
      iVar2 = FUN_8c031de8(ar4,8,ar6,ar7);
    }
  }
  if ((*(int *)(ar4 + 0x178) == 1) && (iVar2 == 0)) {
    ar6 = (undefined1 *)(uint)ar5[6];
    FUN_8c031ce8(ar4,ar5[3],ar6,ar7);
    Vec3_assign(ar4 + 0x168,auStack_7c,ar6,ar7);
    Vec3_dtor(auStack_7c,0xffffffff,ar6,ar7);
  }
  Vec3_dtor(&fStack_20,0xffffffff,ar6,ar7);
  return iVar2;
}

__asm__(".globl _FUN_8c0a6628\n.set _FUN_8c0a6628, _FUN_8c0a6628_def\n");
