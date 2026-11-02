#include "../decls.h"
int FUN_8c0dac50_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  int iVar1;
  undefined4 uVar2;
  int *a4;
  float *ar5_00;
  undefined4 ar5_01;
  float *ar6_00;
  float fVar3;
  float fVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  float fStack_a4;
  float fStack_a0;
  int iStack_9c;
  float fStack_98;
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [8];
  float fStack_7c;
  float fStack_78;
  undefined1 auStack_74 [100];
  
  cVar7 = '\0';
  cVar6 = '\0';
  fStack_98 = 3.4028235e+38;
  Vec3_ctor_zero(auStack_84,ar5,ar6,ar7);
  fVar3 = DAT_8c1264b8;
  fVar4 = _UNK_8c1264bc;
  if (cVar7 == '\0') {
    fVar3 = *ar5;
    fVar4 = DAT_8c1264b8;
  }
  if (fVar3 == fVar4) {
    *(undefined4 *)(ar4 + 0x9d4) = 0;
    Vec3_dtor(auStack_84,0xffffffff,ar6,ar7);
    ar4_00 = 0;
  }
  else {
    ar6_00 = &fStack_98;
    ar5_00 = ar5;
    ar4_00 = FUN_8c0dbe24(ar4,ar5,ar6_00,ar7);
    if (ar4_00 == 0) {
      *(undefined4 *)(ar4 + 0x9d4) = 0;
      Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
    }
    else {
      FUN_8c02f670(ar4_00,ar5_00,ar6_00,ar7,auStack_94);
      Vec3_assign(auStack_84,auStack_94,ar6_00,ar7);
      ar5_01 = 0xffffffff;
      Vec3_dtor(auStack_94,0xffffffff,ar6_00,ar7);
      fVar3 = fStack_7c;
      if (cVar7 == '\0') {
        fVar3 = *(float *)(ar4 + 0xa70);
        fStack_78 = fStack_7c;
      }
      if (cVar6 != '\0' || fStack_78 <= fVar3) {
        iVar1 = get_field_24_05c284(ar4_00,ar5_01,ar6_00,ar7);
        if (iVar1 == 0x10) {
          *(undefined4 *)(ar4 + 0x9d4) = 0;
          Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
          ar4_00 = 0;
        }
        else {
          if (iVar1 == 0xe) {
            uVar2 = (**(code **)(*(int *)(ar4_00 + 8) + 0x148))(ar4_00,ar5_01,ar6_00,ar7);
            iStack_9c = (int)(short)uVar2;
            if (iStack_9c == 1) {
              *(undefined4 *)(ar4 + 0x9d4) = 0;
              Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
              return 0;
            }
          }
          if (cVar7 == '\0') {
            pcVar5 = (code *)0x42700000;
            fVar3 = fStack_98;
          }
          else {
            fVar3 = 60.0;
            pcVar5 = get_field_a4_032154;
          }
          if (cVar6 != '\0' || (float)(uint)pcVar5 <= fVar3) {
            if (cVar7 == '\0') {
              fStack_a4 = *ar5;
              fStack_a0 = ar5[1];
            }
            else {
              fStack_a4 = (float)*(undefined8 *)ar5;
              fStack_a0 = (float)*(undefined8 *)(ar5 + 1);
              iStack_9c = (int)((ulonglong)*(undefined8 *)(ar5 + 1) >> 0x20);
            }
            a4 = (int *)get_field_a4_032154(ar4_00,ar5_01,ar6_00,ar7);
            (**(code **)(*a4 + 0x38))(a4,auStack_74,ar6_00,ar7);
            iVar1 = FUN_8c0d1754(&fStack_a4,auStack_74,ar6_00,ar7);
            if (iVar1 == 0) {
              ar4_00 = 0;
            }
            *(int *)(ar4 + 0x9d4) = ar4_00;
            Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
          }
          else {
            *(int *)(ar4 + 0x9d4) = ar4_00;
            Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
          }
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x9d4) = 0;
        Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
        ar4_00 = 0;
      }
    }
  }
                    
  return ar4_00;
}

__asm__(".globl _FUN_8c0dac50\n.set _FUN_8c0dac50, _FUN_8c0dac50_def\n");
