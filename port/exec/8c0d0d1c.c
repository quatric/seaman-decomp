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
undefined4 FUN_8c0d0d1c_def(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d0d1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  ulonglong in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = 0;
  if ((*(undefined1 *)(unsigned)0x8c4374c4) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4374c0) = 10;
    (*(undefined1 *)(unsigned)0x8c4374c4) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c4374d4) == '\0') {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 88)), Vec3_ctor_xyz(0x8c4374d8,ar5,ar6,ar7));
    ar6 = 0x8c4374c8;
    ar5 = ((void *)0x8c022cb0);
    (vsp = ((unsigned long)(fr0_ - 88)), global_list_push(uVar2,((void *)0x8c022cb0),0x8c4374c8,ar7));
    (*(undefined1 *)(unsigned)0x8c4374d4) = '\x01';
  }
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  (*(ulonglong *)(fr0_ - 0x38)) = (ulonglong)(uint)(*(ulonglong *)(fr0_ - 0x38));
  iVar3 = *(int *)(unsigned)(ar4 + 0xeb60);
  if (iVar3 == 0) {
    if (*(int *)(unsigned)(ar4 + 0xeb44) == 1) {
      *(undefined2 *)(unsigned)(ar4 + 0xeb64) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0xeb60) = 2;
    }
  }
  else if (iVar3 == 2) {
    if (*(int *)(unsigned)(ar4 + 0xeb4c) == -1) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0xeb4c) = uVar2;
      ar6 = 5;
      ar5 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xeb4c));
      (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c021994(0x8c2b59d0,ar5,5,ar7));
    }
    if ((*(int *)(unsigned)(ar4 + 0xeb44) == 0) && (*(int *)(unsigned)(ar4 + 0xeb4c) != -1)) {
      (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c021a60(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0xeb4c),ar6,ar7));
      ar5 = (code *)(ar4 + 0xeb4c);
      (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c021a8c(0x8c2b59d0,ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0xeb4c) = 0xffffffff;
      *(undefined4 *)(unsigned)(ar4 + 0xeb60) = 3;
    }
  }
  else if (iVar3 == 3) {
    *(undefined4 *)(unsigned)(ar4 + 0xeb60) = 0;
  }
  if (*(int *)(unsigned)(ar4 + 0xeb44) == 1) {
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x41800000,*(undefined4 *)(unsigned)(ar4 + 0xeb38));
    }
    else {
      in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0xeb38);
      dVar9 = 1.4411521620789166e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = F32LO(dVar9) + F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 + dVar9,0);
    }
    (*(undefined8 *)(fr0_ - 0x54)) = in_xd0;
    if (cVar12 == '\0') {
      (*(undefined8 *)(fr0_ - 0x54)) = CONCAT44(ar4,fVar8);
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x54))+4)) + 0xeb38) = (float)(*(undefined8 *)(fr0_ - 0x54));
      fVar10 = 360.0;
      fVar8 = (float)(*(undefined8 *)(fr0_ - 0x54));
    }
    else {
      *(ulonglong *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x54))+4)) + 0xeb38) = (*(undefined8 *)(fr0_ - 0x54));
      fVar8 = 360.0;
      fVar10 = 2.41023e-43;
      in_xd0 = (*(undefined8 *)(fr0_ - 0x54));
    }
    if (cVar11 == '\0' && fVar10 < fVar8) {
      if (cVar12 == '\0') {
        dVar9 = CONCAT44D(0x43b40000,*(undefined4 *)(unsigned)(ar4 + 0xeb38));
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0xeb38);
        dVar9 = 3.65544470367453e-312;
      }
      if (cVar11 == '\0') {
        fVar8 = F32LO(dVar9) - F32HI(dVar9);
      }
      else {
        fVar8 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0xeb38) = fVar8;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xeb38) = in_xd0;
      }
    }
  }
  if (*(int *)(unsigned)(ar4 + 0xeb44) == 1) {
    iVar3 = 0;
    for (iVar7 = 0; iVar7 < 0x15e; iVar7 = iVar7 + 1) {
      iVar4 = (vsp = ((unsigned long)(fr0_ - 88)), get_field_100_0d1058(ar4 + iVar7 * 0xac + 0xc,ar5,ar6,ar7));
      iVar5 = iVar3;
      if (iVar4 != 1) {
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c014be4(ar4 + iVar7 * 0xac + 0xc,0x2f999999,ar6,ar7));
        uVar2 = 0x8c4374d8;
        puVar6 = ((undefined1 *)(fr0_ - 0x20));
        (vsp = ((unsigned long)(fr0_ - 88)), Vec3_assign(puVar6,0x8c4374d8,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 88)), rand(puVar6,uVar2,ar6,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c023668(((undefined1 *)(fr0_ - 0x20)),uVar2,ar6,ar7); });
        uVar2 = 0xffffffff;
        puVar6 = ((undefined1 *)(fr0_ - 0x30));
        (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(puVar6,0xffffffff,ar6,ar7));
        iVar5 = (vsp = ((unsigned long)(fr0_ - 88)), rand(puVar6,uVar2,ar6,ar7));
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(0x47000000,(float)iVar5);
        }
        else {
          dVar9 = 134217763.5;
        }
        if (cVar11 == '\0') {
          fVar8 = F32LO(dVar9) / F32HI(dVar9);
        }
        else {
          fVar8 = SUB84(dVar9 / dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(0x41300000,fVar8);
        }
        else {
          dVar9 = 67108880.296875;
        }
        if (cVar11 == '\0') {
          fVar8 = F32LO(dVar9) * F32HI(dVar9);
        }
        else {
          fVar8 = SUB84(dVar9 * dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(0x41900000,fVar8);
        }
        else {
          dVar9 = -7.9586651841963e-251;
        }
        if (cVar11 == '\0') {
          fVar8 = F32LO(dVar9) + F32HI(dVar9);
        }
        else {
          fVar8 = SUB84(dVar9 + dVar9,0);
        }
        uVar1 = in_xd0;
        if (cVar12 == '\0') {
          (*(ulonglong *)(fr0_ - 0x38)) = CONCAT44((*(uint*)((uchar*)&(*(ulonglong *)(fr0_ - 0x38))+4)),fVar8);
          uVar1 = (*(ulonglong *)(fr0_ - 0x38));
        }
        (*(ulonglong *)(fr0_ - 0x38)) = uVar1;
        ar5 = (code *)&(*(ulonglong *)(fr0_ - 0x38));
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c023bf4(((undefined1 *)(fr0_ - 0x20)),ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c014e38(ar4 + iVar7 * 0xac + 0xc,ar5,ar6,ar7));
        iVar5 = iVar3 + 1;
        if (7 < iVar3 + 1) break;
      }
      iVar3 = iVar5;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d1060(ar4,ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0d0d1c\n.set _FUN_8c0d0d1c, _FUN_8c0d0d1c_def\n");
