#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e5238_def(int *ar4,undefined4 *ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e5238";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint ar6_00;
  int iVar2;
  int iVar3;
  int a4;
  int iVar4;
  int *piVar5;
  undefined4 *ar5_00;
  undefined2 uVar6;
  undefined2 uVar7;
  uint ar6_01;
  float fVar8;
  code *pcVar10;
  double dVar9;
  float fVar11;
  undefined8 in_xd0 = 0;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar7 = 0;
  uVar6 = 0x80;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7));
  ar6_00 = ar6 & 0xff;
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0daf3c(ar4,ar5,ar6_00,ar7));
  ar5_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c431a58);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c01ad9c(uVar1,(*(undefined4 *)(unsigned)(unsigned)0x8c431a58),ar6_00,ar7));
  if ((iVar2 == 4) && (iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c10031c(ar5,ar5_00,ar6_00,ar7)), iVar2 == 1)) {
    if (ar4[0x2b3] == 0) {
      if (ar4[0x275] != 0) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_24_05c284(ar4[0x275],ar5_00,ar6_00,ar7));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x275] + 8) + 0x114))))(ar4[0x275],ar5_00,ar6_00,ar7));
        if (((((iVar2 == 10) && (iVar3 == 0x12)) || (iVar2 == 0xb)) || (iVar2 == 0xc)) ||
           ((iVar2 == 0xe &&
            (uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x275] + 8) + 0x148))))(ar4[0x275],ar5_00,ar6_00,ar7)),
            (short)uVar1 != 0)))) {
          ar5_00 = (undefined4 *)(unsigned)0x2;
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c021720(0x8c2b59d0,2,ar6_00,ar7));
        }
        else {
          iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x275] + 8) + 200))))(ar4[0x275],ar5_00,ar6_00,ar7));
          if (iVar2 == 1) {
            uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x58))))(ar4,ar5_00,ar6_00,ar7));
            (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0e59c0(ar5,uVar1,ar6_00,ar7));
            ar5_00 = (undefined4 *)(unsigned)0x1;
            (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0e4330(ar5,1,ar6_00,ar7));
          }
          else {
            ar5_00 = (undefined4 *)(unsigned)0x2;
            (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c021720(0x8c2b59d0,2,ar6_00,ar7));
          }
        }
      }
    }
    else if (ar4[0x2b3] == 2) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_24_05c284(ar4[0x2b2],ar5_00,ar6_00,ar7));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x2b2] + 8) + 0x114))))(ar4[0x2b2],ar5_00,ar6_00,ar7));
      if ((((iVar2 == 10) && (iVar3 == 0x12)) || ((iVar2 == 0xb || (iVar2 == 0xc)))) ||
         ((iVar2 == 0xe &&
          (uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x2b2] + 8) + 0x148))))(ar4[0x2b2],ar5_00,ar6_00,ar7)),
          (short)uVar1 != 0)))) {
        ar5_00 = (undefined4 *)(unsigned)0x2;
        (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c021720(0x8c2b59d0,2,ar6_00,ar7));
      }
      else {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x2b2] + 8) + 200))))(ar4[0x2b2],ar5_00,ar6_00,ar7));
        if ((iVar2 == 1) && (ar4[0x275] == ar4[0x2b2])) {
          (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x58))))(ar4,ar5_00,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0e59c0(ar5,ar4[0x2b2],ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0e4330(ar5,1,ar6_00,ar7));
          ar5_00 = ar5;
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0dca2c(ar4,ar5,ar6_00,ar7));
        }
        else {
          ar5_00 = (undefined4 *)(unsigned)0x2;
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c021720(0x8c2b59d0,2,ar6_00,ar7));
        }
      }
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0637d0(ar5,ar5_00,ar6_00,ar7));
    if (((iVar2 != 0) && (iVar3 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_24_05c284(iVar2,ar5_00,ar6_00,ar7)), iVar3 == 10)) &&
       (uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar2 + 8) + 0x148))))(iVar2,ar5_00,ar6_00,ar7)),
       (short)uVar1 == 3)) {
      ar5_00 = (undefined4 *)(unsigned)0xd;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0db7d4(ar4,0xd,ar6_00,ar7));
      if (iVar3 != 0) {
        for (ar6_01 = 0; (int)ar6_01 < iVar3; ar6_01 = ar6_01 + 1) {
          ar5_00 = (undefined4 *)(unsigned)0xd;
          ar6_00 = ar6_01;
          a4 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0db790(ar4,0xd,ar6_01,ar7));
          iVar4 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xb0))))(a4,ar5_00,ar6_00,ar7));
          if (iVar4 == iVar2) {
            (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xac))))(a4,ar5_00,ar6_00,ar7));
          }
        }
      }
    }
  }
  iVar2 = ar4[0x409];
  if (iVar2 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0e31e8(ar5,ar5_00,ar6_00,ar7));
    if (iVar2 == 1) {
      ar4[0x409] = 1;
      piVar5 = ar4 + 0x412;
      if (cVar13 == '\0') {
        *piVar5 = 0x43df8000;
        ar4[0x414] = 0x43df8000;
      }
      else {
        piVar5[0] = 0x43df8000;
        piVar5[1] = 0x1050;
        ar4[0x414] = 0x43df8000;
        ar4[0x415] = 0x1050;
      }
    }
  }
  else if (iVar2 == 1) {
    if (cVar13 == '\0') {
      fVar8 = (float)ar4[0x412];
      pcVar10 = (code *)0x43c58000;
    }
    else {
      fVar8 = 395.0;
      pcVar10 = ((void *)0x8c0e30f0);
    }
    if ((fVar8 == (float)(uint)pcVar10) && (iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0e30f0(ar5,ar5_00,ar6_00,ar7)), iVar2 == 1)) {
      ar4[0x409] = 2;
    }
  }
  else if ((iVar2 == 2) && (iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0e5998(ar5,ar5_00,ar6_00,ar7)), iVar2 == 1)) {
    for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
      if (ar4[iVar2 * 9 + 0x424] == 0) {
        piVar5 = ar4 + iVar2 * 9 + 0x41c;
        if (cVar13 == '\0') {
          *piVar5 = 0x43bb8000;
        }
        else {
          piVar5[0] = 0x43bb8000;
          piVar5[1] = 0x1074;
        }
        piVar5 = ar4 + iVar2 * 9 + 0x41d;
        if (cVar13 == '\0') {
          *piVar5 = 0x43f78000;
        }
        else {
          piVar5[0] = 0x43f78000;
          piVar5[1] = 0x1078;
        }
        piVar5 = ar4 + iVar2 * 9 + 0x41e;
        if (cVar13 == '\0') {
          *piVar5 = 0x44548000;
        }
        else {
          piVar5[0] = 0x44548000;
          piVar5[1] = 0x1084;
        }
        piVar5 = ar4 + iVar2 * 9 + 0x421;
        if (cVar13 == '\0') {
          *piVar5 = -0x41000000;
        }
        else {
          piVar5[0] = -0x41000000;
          piVar5[1] = 0x1080;
        }
        piVar5 = ar4 + iVar2 * 9 + 0x420;
        if (cVar13 == '\0') {
          *piVar5 = 0x3dcccccd;
        }
        else {
          piVar5[0] = 0x3dcccccd;
          piVar5[1] = 0x108c;
        }
        ar4[iVar2 * 9 + 0x423] = 0xffffff;
        ar4[iVar2 * 9 + 0x422] = 0;
        ar4[iVar2 * 9 + 0x424] = 1;
        if (cVar13 == '\0') {
          dVar9 = CONCAT44D(0x40800000,ar4[0x41b]);
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x41b);
          dVar9 = 52776566587392.0;
        }
        if (cVar12 == '\0') {
          fVar8 = F32LO(dVar9) + F32HI(dVar9);
        }
        else {
          fVar8 = SUB84(dVar9 + dVar9,0);
        }
        if (cVar13 == '\0') {
          ar4[0x41b] = (int)fVar8;
          fVar8 = (float)ar4[0x41b];
          fVar11 = 100.0;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x41b) = in_xd0;
          fVar8 = 100.0;
          fVar11 = 1.79366e-43;
        }
        if (cVar12 == '\0' && fVar11 < fVar8) {
          piVar5 = ar4 + 0x41b;
          if (cVar13 == '\0') {
            *piVar5 = 0x42c80000;
          }
          else {
            piVar5[0] = 0x42c80000;
            piVar5[1] = 0x80;
          }
        }
        uVar7 = 0x80;
        uVar6 = 0xff;
        ((undefined4 *)(fr0_ - 0x24))[0] = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c02190c(0x8c2b59d0,ar5_00,ar6_00,ar7));
        ar6_00 = 0xe;
        (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0x24))[0],0xe,ar7));
        ar5_00 = ((undefined4 *)(fr0_ - 0x24));
        (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c021a8c(0x8c2b59d0,ar5_00,ar6_00,ar7));
        break;
      }
    }
  }
  if (ar4[0x409] != 0) {
    *(undefined2 *)(unsigned)(ar4 + 0x417) = uVar7;
    *(undefined2 *)(unsigned)((int)ar4 + 0x105e) = 0x80;
    *(undefined2 *)(unsigned)(ar4 + 0x418) = uVar7;
    *(undefined2 *)(unsigned)((int)ar4 + 0x1062) = 0x60;
    *(undefined2 *)(unsigned)(ar4 + 0x419) = uVar6;
    *(undefined2 *)(unsigned)((int)ar4 + 0x1066) = 0x60;
    *(undefined2 *)(unsigned)(ar4 + 0x41a) = uVar6;
    *(undefined2 *)(unsigned)((int)ar4 + 0x106a) = 0x80;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0e30c8(ar5,ar5_00,ar6_00,ar7));
  if (iVar2 == 1) {
    ar4[0x409] = 3;
  }
  return 1;
}

__asm__(".globl _FUN_8c0e5238\n.set _FUN_8c0e5238, _FUN_8c0e5238_def\n");
