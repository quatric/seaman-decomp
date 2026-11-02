#include "../decls.h"
undefined4 FUN_8c051a68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  float fVar6;
  double dVar7;
  double in_xd0;
  char cVar8;
  char cVar9;
  undefined8 uStack_70;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  if (*(int *)(ar4 + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ar6;
    Vec3_sub(ar5,ar6,ar6,ar7,auStack_3c);
    Vec3_normalize(auStack_3c,ar6,uVar1,ar7);
    Vec3_ctor_copy(auStack_1c,auStack_4c,uVar1,ar7);
    Vec3_dtor(auStack_4c,0xffffffff,uVar1,ar7);
    uVar5 = 0xffffffff;
    Vec3_dtor(auStack_3c,0xffffffff,uVar1,ar7);
    Vec3_ctor_zero(auStack_2c,uVar5,uVar1,ar7);
    iVar2 = *(int *)(ar4 + 0x40);
    if ((iVar2 == 1) || (iVar2 == 3)) {
      pdVar3 = (double *)(ar4 + 0x2c);
      if (cVar9 != '\0') {
        in_xd0 = *pdVar3;
        pdVar3 = (double *)(ar4 + 0x30);
      }
      dVar7 = *pdVar3;
      if (cVar8 == '\0') {
        fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      dVar7 = in_xd0;
      if (cVar9 == '\0') {
        uStack_70 = (double)CONCAT44((*(uint*)((uchar*)&uStack_70+4)),fVar6);
        dVar7 = uStack_70;
      }
      uStack_70 = dVar7;
      Vec3_scale(auStack_1c,&uStack_70,uVar1,ar7,auStack_5c);
      FUN_8c023aa0(ar4 + 0x14,auStack_5c,uVar1,ar7);
      uVar5 = 0xffffffff;
      Vec3_dtor(auStack_5c,0xffffffff,uVar1,ar7);
      Vec3_normalize(ar4 + 0x14,uVar5,uVar1,ar7);
      Vec3_assign(ar4 + 0x14,(int)&uStack_70 + 4,uVar1,ar7);
      Vec3_dtor((int)&uStack_70 + 4,0xffffffff,uVar1,ar7);
      pdVar3 = (double *)(ar4 + 0x2c);
      if (cVar9 != '\0') {
        in_xd0 = *pdVar3;
        pdVar3 = (double *)(ar4 + 0x30);
      }
      dVar7 = *pdVar3;
      if (SUB84(dVar7,0) != (float)((ulonglong)dVar7 >> 0x20)) {
        if (cVar9 == '\0') {
          dVar7 = (double)(ulonglong)*(uint *)(ar4 + 0x28);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x28);
        }
        if (cVar8 == '\0' && 0.0 < SUB84(dVar7,0)) {
          if (cVar9 == '\0') {
            dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x28);
            dVar7 = *(double *)(ar4 + 0x24);
          }
          if (cVar8 == '\0') {
            fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar7 / dVar7,0);
          }
          if (cVar9 == '\0') {
            dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c),fVar6);
          }
          else {
            dVar7 = *(double *)(ar4 + 0x2c);
          }
          if (cVar8 == '\0') {
            fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar7 + dVar7,0);
          }
          puVar4 = (undefined8 *)(ar4 + 0x30);
          if (cVar9 == '\0') {
            *(float *)(ar4 + 0x2c) = fVar6;
            puVar4 = (undefined8 *)(ar4 + 0x2c);
          }
          else {
            *(double *)(ar4 + 0x2c) = in_xd0;
          }
          if (cVar8 == '\0' && (float)((ulonglong)*puVar4 >> 0x20) < (float)*puVar4) {
            if (cVar9 == '\0') {
              *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(ar4 + 0x30);
            }
            else {
              *(undefined8 *)(ar4 + 0x2c) = *(undefined8 *)(ar4 + 0x30);
            }
          }
        }
      }
    }
    else if (iVar2 == 4) {
      FUN_8c05ae54(ar4,uVar5,uVar1,ar7);
    }
    Vec3_dtor(auStack_2c,0xffffffff,uVar1,ar7);
    Vec3_dtor(auStack_1c,0xffffffff,uVar1,ar7);
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c051a68\n.set _FUN_8c051a68, _FUN_8c051a68_def\n");
