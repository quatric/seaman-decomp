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
undefined4 FUN_8c05af78_def(int ar4,double *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05af78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 928; for (int i_ = 0; i_ < 928; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  code *ar5_00;
  double *pdVar3;
  ulonglong *ar5_01;
  undefined1 *puVar4;
  int ar6_00;
  float fVar5;
  float fVar6;
  double in_dr0 = 0;
  undefined4 uVar8;
  double dVar7;
  float fVar9;
  double in_dr14 = 0;
  double dVar10;
  double in_xd0 = 0;
  bool bVar11;
  bool bVar12;
  char cVar13;
  char cVar14;
  
  cVar14 = '\0';
  cVar13 = '\0';
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  ar5_00 = ((void *)0x8c022c4c);
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x38)),((void *)0x8c022c4c),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x48)),ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x58)),ar5_00,ar6_00,ar7));
  pdVar3 = ar5;
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x68)),ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 928)), vec3_clear(ar4 + 0x200,pdVar3,ar6_00,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x304) = 0;
  ar5_01 = ((ulonglong *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 0x84));
  if ((ar5_01 != (ulonglong *)(unsigned)0x0) && ((*(byte *)(unsigned)(ar4 + 0x1fc) & 0x3f) >> 5 != 0)) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x98))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar6 + 0x70),((undefined1 *)(fr0_ - 0x98)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(ar4 + 0x308,((undefined1 *)(fr0_ - 0x98)),ar6_00,ar7));
    ar5_01 = (ulonglong *)(unsigned)0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,ar6_00,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x318) = 1;
  }
  if ((*(int *)(unsigned)(ar6 + 0x68) != 0) && ((int)((uint)*(byte *)(unsigned)(ar4 + 0x1fc) << 0x1e) < 0)) {
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x48)),ar5,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x58)),*(int *)(unsigned)(ar6 + 0x68) + 4,ar6_00,ar7));
    if (cVar14 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x68) + 0x158));
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa8))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0xa8)),ar6_00,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x28)),uVar2,ar6_00,ar7));
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (cVar14 == '\0') {
      in_dr0 = CONCAT44D(uVar2,*(undefined4 *)(unsigned)(ar4 + 0x48));
      dVar7 = in_xd0;
      (*(undefined4 *)(fr0_ - 0x364)) = uVar2;
    }
    else {
      (*(undefined4 *)(fr0_ - 0x364)) = SUB84(in_dr0,0);
      dVar7 = *(double *)(unsigned)(ar4 + 0x48);
      (*(undefined4 *)(fr0_ - 0x360)) = uVar2;
    }
    if (cVar13 == '\0') {
      fVar5 = F32LO(in_dr0) + F32LO(in_dr14);
    }
    else {
      fVar5 = SUB84(in_dr0 + in_dr14,0);
    }
    if (cVar14 == '\0') {
      dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0x364)),fVar5);
    }
    else {
      dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0x360)),(*(undefined4 *)(fr0_ - 0x364)));
    }
    if (cVar13 == '\0') {
      fVar5 = F32LO(dVar10) - F32HI(dVar10);
    }
    else {
      fVar5 = SUB84(dVar10 - dVar10,0);
    }
    if (cVar14 == '\0') {
      dVar10 = CONCAT44D(0x3dcccccd,fVar5);
    }
    else {
      dVar10 = -7.93713999303812e-251;
    }
    if (cVar13 == '\0') {
      fVar5 = F32LO(dVar10) * F32HI(dVar10);
    }
    else {
      fVar5 = SUB84(dVar10 * dVar10,0);
    }
    dVar10 = dVar7;
    if (cVar14 == '\0') {
      (*(undefined8 *)(fr0_ - 0x34c)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x34c))+4)),fVar5);
      dVar10 = (*(undefined8 *)(fr0_ - 0x34c));
    }
    (*(undefined8 *)(fr0_ - 0x34c)) = dVar10;
    dVar10 = (*(undefined8 *)(fr0_ - 0x34c));
    if ((cVar13 == '\0' && fVar5 < 0.0) && (dVar10 = (double)(ulonglong)(uint)fVar5, cVar14 == '\0')
       ) {
      (*(undefined8 *)(fr0_ - 0x34c)) = (double)((ulonglong)(*(undefined8 *)(fr0_ - 0x34c)) & 0xffffffff00000000);
      dVar10 = (*(undefined8 *)(fr0_ - 0x34c));
    }
    (*(undefined8 *)(fr0_ - 0x34c)) = dVar10;
    dVar10 = (double)(ulonglong)(uint)fVar5;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_length(((undefined1 *)(fr0_ - 0x28)),ar4 + 0x48,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_length_sq(ar4 + 4,((void *)0x8c022e78),ar6_00,ar7));
    in_xd0 = dVar10;
    if (cVar14 == '\0') {
      dVar10 = (double)(D2U(dVar10) >> 0x20);
      in_xd0 = dVar7;
    }
    fVar5 = F32LO(dVar10);
    if (cVar13 == '\0' && 0.0 < fVar5) {
      if (*(int *)(unsigned)(ar4 + 0x2b8) == 7) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb8))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_scale(ar4 + 0x14,((undefined1 *)(unsigned)0x8c1365f4),ar6_00,ar7); });
        puVar4 = ((undefined1 *)(fr0_ - 0xb8));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x28)),puVar4,ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_normalize(((undefined1 *)(fr0_ - 0xc8)),puVar4,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0xd8)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,ar6_00,ar7));
      }
      else {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe8))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_scale(ar4 + 0x14,((undefined1 *)(unsigned)0x8c1365f8),ar6_00,ar7); });
        puVar4 = ((undefined1 *)(fr0_ - 0xe8));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf8))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x28)),puVar4,ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_normalize(((undefined1 *)(fr0_ - 0xf8)),puVar4,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x108)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x108)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf8)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,ar6_00,ar7));
      }
    }
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023bf4(((undefined1 *)(fr0_ - 0x28)),&(*(undefined8 *)(fr0_ - 0x34c)),ar6_00,ar7));
    in_dr0 = (double)(ulonglong)(uint)fVar5;
    dVar7 = in_dr0;
    if (cVar14 == '\0') {
      (*(undefined8 *)(fr0_ - 0x24)) = (double)((ulonglong)(*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x24))+4)) << 0x20);
      dVar7 = (*(undefined8 *)(fr0_ - 0x24));
    }
    (*(undefined8 *)(fr0_ - 0x24)) = dVar7;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(ar4 + 0x200,((undefined1 *)(fr0_ - 0x28)),ar6_00,ar7));
    if ((2 < *(int *)(unsigned)(ar4 + 0x128)) && (*(int *)(unsigned)(ar4 + 0x330) == 1)) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x118))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x48)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(fr0_ - 0x118)),ar6_00,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x118)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x124)),uVar2,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(fr0_ - 0x124)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(fr0_ - 0x134)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x134)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), object_dtor_delete(((undefined1 *)(fr0_ - 0x124)),0xffffffff,ar6_00,ar7));
      puVar4 = ((undefined1 *)(fr0_ - 0x78));
      (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c022d14(ar4 + 0x14,puVar4,ar6_00,ar7));
      dVar7 = in_dr0;
      if (cVar14 == '\0') {
        dVar7 = (double)((ulonglong)in_dr0 >> 0x20);
        in_dr0 = in_xd0;
      }
      in_xd0 = in_dr0;
      in_dr0 = (double)(D2U(dVar7) & 0xffffffff);
      if (cVar13 == '\0' && 0.0 < SUB84(dVar7,0)) {
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x15c)),puVar4,ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x16c))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x15c)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x16c)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x16c)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), object_dtor_delete(((undefined1 *)(fr0_ - 0x15c)),0xffffffff,ar6_00,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x140)),puVar4,ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x140)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x150)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x150)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), object_dtor_delete(((undefined1 *)(fr0_ - 0x140)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023bf4(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(unsigned)0x8c1365fc),ar6_00,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023bf4(ar4 + 0x200,((undefined1 *)(unsigned)0x8c136600),ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x17c))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(unsigned)0x8c136604),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023aa0(ar4 + 0x200,((undefined1 *)(fr0_ - 0x17c)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x17c)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6_00,ar7));
    }
    ar5_01 = (ulonglong *)(unsigned)0x1;
    *(undefined4 *)(unsigned)(ar4 + 0x304) = 1;
  }
  if ((*(int *)(unsigned)(ar6 + 100) != 0) && ((int)((uint)*(byte *)(unsigned)(ar4 + 0x1fc) << 0x1d) < 0)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 928)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar6 + 0x50),ar5_01,ar6_00,ar7));
    if ((iVar1 == 0xf) ||
       ((iVar1 = (vsp = ((unsigned long)(fr0_ - 928)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar6 + 0x50),ar5_01,ar6_00,ar7)), iVar1 == 10 ||
        (iVar1 = (vsp = ((unsigned long)(fr0_ - 928)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar6 + 0x50),ar5_01,ar6_00,ar7)), iVar1 == 0xd)))
       ) {
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
      return uVar2;
    }
    (vsp = ((unsigned long)(fr0_ - 928)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8) + 0x170))))
              (*(int *)(unsigned)(ar6 + 0x50),ar5_01,ar6_00,ar7));
    (*(undefined4 *)(fr0_ - 0x37c)) = SUB84(in_dr0,0);
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (cVar14 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),uVar2);
      dVar7 = CONCAT44D(0x3a83126f,(*(undefined4 *)(fr0_ - 0x37c)));
      (*(undefined4 *)(fr0_ - 0x37c)) = uVar2;
    }
    else {
      dVar7 = 1.85086533838489e-311;
    }
    if (cVar13 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 F32LO(in_dr14) + F32HI(dVar7));
    }
    else {
      in_dr14 = in_dr14 + dVar7;
    }
    pdVar3 = ar5;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x48)),ar5,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x18c))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar6 + 0x50),pdVar3,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x18c)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18c)),0xffffffff,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x19c))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x19c)),ar6_00,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x19c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x28)),uVar2,ar6_00,ar7));
    uVar8 = (undefined4)(D2U(dVar7) >> 0x20);
    if (cVar14 == '\0') {
      dVar7 = CONCAT44D(uVar8,*(undefined4 *)(unsigned)(ar4 + 0x48));
      (*(undefined4 *)(fr0_ - 0x380)) = uVar8;
    }
    else {
      (*(undefined4 *)(fr0_ - 0x380)) = SUB84(dVar7,0);
      in_xd0 = *(double *)(unsigned)(ar4 + 0x48);
      (*(undefined4 *)(fr0_ - 0x37c)) = uVar8;
    }
    if (cVar13 == '\0') {
      fVar5 = F32LO(dVar7) + F32LO(in_dr14);
    }
    else {
      fVar5 = SUB84(dVar7 + in_dr14,0);
    }
    if (cVar14 == '\0') {
      dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x380)),fVar5);
    }
    else {
      dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x37c)),(*(undefined4 *)(fr0_ - 0x380)));
    }
    if (cVar13 == '\0') {
      fVar5 = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar7,0);
    }
    if (cVar14 == '\0') {
      dVar7 = CONCAT44D(0x3dcccccd,fVar5);
    }
    else {
      dVar7 = -7.93713999303812e-251;
    }
    if (cVar13 == '\0') {
      fVar5 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    dVar7 = in_xd0;
    if (cVar14 == '\0') {
      (*(undefined8 *)(fr0_ - 0x34c)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x34c))+4)),fVar5);
      dVar7 = (*(undefined8 *)(fr0_ - 0x34c));
    }
    (*(undefined8 *)(fr0_ - 0x34c)) = dVar7;
    dVar7 = (*(undefined8 *)(fr0_ - 0x34c));
    if ((cVar13 == '\0' && fVar5 < 0.0) && (dVar7 = (double)(ulonglong)(uint)fVar5, cVar14 == '\0'))
    {
      (*(undefined8 *)(fr0_ - 0x34c)) = (double)((ulonglong)(*(undefined8 *)(fr0_ - 0x34c)) & 0xffffffff00000000);
      dVar7 = (*(undefined8 *)(fr0_ - 0x34c));
    }
    (*(undefined8 *)(fr0_ - 0x34c)) = dVar7;
    dVar7 = (double)(ulonglong)(uint)fVar5;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_length(((undefined1 *)(fr0_ - 0x28)),uVar2,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023bf4(((undefined1 *)(fr0_ - 0x28)),&(*(undefined8 *)(fr0_ - 0x34c)),ar6_00,ar7));
    dVar10 = (*(undefined8 *)(fr0_ - 0x24));
    if (((*(int *)(unsigned)(ar4 + 0x124) != 0xf) && (*(int *)(unsigned)(ar4 + 0x124) != 0xf)) &&
       (dVar7 = (double)(D2U(dVar7) & 0xffffffff), dVar10 = dVar7, cVar14 == '\0')) {
      (*(undefined8 *)(fr0_ - 0x24)) = (double)((ulonglong)(*(undefined8 *)(fr0_ - 0x24)) & 0xffffffff00000000);
      dVar10 = (*(undefined8 *)(fr0_ - 0x24));
    }
    (*(undefined8 *)(fr0_ - 0x24)) = dVar10;
    puVar4 = ((undefined1 *)(fr0_ - 0x28));
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023aa0(ar4 + 0x200,puVar4,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8) + 0x13c))))
              (*(int *)(unsigned)(ar6 + 0x50),puVar4,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x1ac)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1ac)),0xffffffff,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1bc))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c0230f0(ar4 + 0x200,0x200,ar6_00,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1cc))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x38)),((void *)0x8c0230f0),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x1bc)),((undefined1 *)(fr0_ - 0x1cc)),ar6_00,ar7));
    (*(float *)(fr0_ - 0x398)) = F32HI(dVar7);
    if (cVar14 == '\0') {
      fVar5 = 5.0;
      dVar7 = in_xd0;
    }
    else {
      (*(float *)(fr0_ - 0x398)) = 5.0;
      fVar5 = 6.55808e-43;
    }
    bVar12 = cVar13 == '\0';
    bVar11 = (*(float *)(fr0_ - 0x398)) < fVar5;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1cc)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1bc)),0xffffffff,ar6_00,ar7));
    if (bVar12 && bVar11) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1dc))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x1dc)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1dc)),0xffffffff,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1ec))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c0230f0(ar4 + 0x200,ar4 + 0x200,ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1fc))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x28)),ar6_00,ar7); });
      fVar6 = (*(float *)(fr0_ - 0x398));
      (*(float *)(fr0_ - 0x398)) = fVar5;
      (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x1ec)),((undefined1 *)(fr0_ - 0x1fc)),ar6_00,ar7));
      if (cVar14 == '\0') {
        fVar5 = 5.0;
      }
      else {
        dVar7 = CONCAT44D((*(float *)(fr0_ - 0x398)),fVar6);
        (*(float *)(fr0_ - 0x398)) = 5.0;
        fVar5 = 6.55808e-43;
      }
      bVar12 = cVar13 == '\0';
      bVar11 = (*(float *)(fr0_ - 0x398)) < fVar5;
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1fc)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1ec)),0xffffffff,ar6_00,ar7));
      if (bVar12 && bVar11) {
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x208)),((void *)0x8c023d68),ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x218))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c023484(ar4 + 0x200,((undefined1 *)(fr0_ - 0x208)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(ar4 + 0x200,((undefined1 *)(fr0_ - 0x218)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x218)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), object_dtor_delete(((undefined1 *)(fr0_ - 0x208)),0xffffffff,ar6_00,ar7));
      }
    }
    if ((2 < *(int *)(unsigned)(ar4 + 0x128)) && (*(int *)(unsigned)(ar4 + 0x330) == 1)) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x228))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x48)),ar6_00,ar7); });
      fVar6 = (*(float *)(fr0_ - 0x398));
      (*(float *)(fr0_ - 0x398)) = fVar5;
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x88)),((undefined1 *)(fr0_ - 0x228)),ar6_00,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x228)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x234)),uVar2,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x244))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x88)),((undefined1 *)(fr0_ - 0x234)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x88)),((undefined1 *)(fr0_ - 0x244)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x244)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), object_dtor_delete(((undefined1 *)(fr0_ - 0x234)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c022d14(ar4 + 0x14,((undefined1 *)(fr0_ - 0x88)),ar6_00,ar7));
      if (cVar14 != '\0') {
        dVar7 = CONCAT44D((*(float *)(fr0_ - 0x398)),fVar6);
        (*(float *)(fr0_ - 0x398)) = fVar6;
      }
      fVar5 = 0.0;
      if (cVar13 == '\0' && 0.0 < (*(float *)(fr0_ - 0x398))) {
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x26c)),((undefined1 *)(fr0_ - 0x26c)),ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x27c))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x26c)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x27c)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x27c)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), object_dtor_delete(((undefined1 *)(fr0_ - 0x26c)),0xffffffff,ar6_00,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x250)),((undefined1 *)(fr0_ - 0x250)),ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x260))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x250)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x260)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x260)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), object_dtor_delete(((undefined1 *)(fr0_ - 0x250)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023bf4(((undefined1 *)(fr0_ - 0x88)),((undefined1 *)(unsigned)0x8c136608),ar6_00,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023bf4(ar4 + 0x200,((undefined1 *)(unsigned)0x8c13660c),ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28c))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x88)),((undefined1 *)(unsigned)0x8c136610),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023aa0(ar4 + 0x200,((undefined1 *)(fr0_ - 0x28c)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28c)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6_00,ar7));
    }
    uVar2 = 0x304;
    *(undefined4 *)(unsigned)(ar4 + 0x304) = 1;
    if (*(int *)(unsigned)(ar6 + 0x58) == 0) {
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
      return uVar2;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 928)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar6 + 0x58),0x304,ar6_00,ar7));
    if ((iVar1 == 0xf) ||
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 928)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar6 + 0x58),uVar2,ar6_00,ar7)), iVar1 == 10)) {
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
      return uVar2;
    }
    (vsp = ((unsigned long)(fr0_ - 928)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x58) + 8) + 0x170))))(*(int *)(unsigned)(ar6 + 0x58),iVar1,ar6_00,ar7))
    ;
    if (cVar14 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),fVar5);
      dVar10 = CONCAT44D(0x3a83126f,(*(float *)(fr0_ - 0x398)));
      (*(float *)(fr0_ - 0x398)) = fVar5;
    }
    else {
      dVar10 = 1.85086533838489e-311;
    }
    if (cVar13 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 F32LO(in_dr14) + F32HI(dVar10));
    }
    else {
      in_dr14 = in_dr14 + dVar10;
    }
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x48)),ar5,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x29c))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar6 + 0x58),(undefined4 *)(unsigned)(ar6 + 0x58),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x29c)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x29c)),0xffffffff,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2ac))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x2ac)),ar6_00,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2ac)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x28)),uVar2,ar6_00,ar7));
    fVar5 = F32HI(dVar10);
    if (cVar14 == '\0') {
      dVar10 = CONCAT44D(fVar5,*(undefined4 *)(unsigned)(ar4 + 0x48));
      (*(float *)(fr0_ - 0x39c)) = fVar5;
    }
    else {
      (*(float *)(fr0_ - 0x39c)) = SUB84(dVar10,0);
      dVar7 = *(double *)(unsigned)(ar4 + 0x48);
      (*(float *)(fr0_ - 0x398)) = fVar5;
    }
    if (cVar13 == '\0') {
      fVar5 = F32LO(dVar10) + F32LO(in_dr14);
    }
    else {
      fVar5 = SUB84(dVar10 + in_dr14,0);
    }
    if (cVar14 == '\0') {
      dVar10 = CONCAT44D((*(float *)(fr0_ - 0x39c)),fVar5);
    }
    else {
      dVar10 = CONCAT44D((*(float *)(fr0_ - 0x398)),(*(float *)(fr0_ - 0x39c)));
    }
    if (cVar13 == '\0') {
      fVar5 = F32LO(dVar10) - F32HI(dVar10);
    }
    else {
      fVar5 = SUB84(dVar10 - dVar10,0);
    }
    if (cVar14 == '\0') {
      dVar10 = CONCAT44D(0x3dcccccd,fVar5);
    }
    else {
      dVar10 = -7.93713999303812e-251;
    }
    if (cVar13 == '\0') {
      fVar5 = F32LO(dVar10) * F32HI(dVar10);
    }
    else {
      fVar5 = SUB84(dVar10 * dVar10,0);
    }
    if (cVar14 == '\0') {
      (*(undefined8 *)(fr0_ - 0x34c)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x34c))+4)),fVar5);
      dVar7 = (*(undefined8 *)(fr0_ - 0x34c));
    }
    (*(undefined8 *)(fr0_ - 0x34c)) = dVar7;
    dVar7 = (*(undefined8 *)(fr0_ - 0x34c));
    if ((cVar13 == '\0' && fVar5 < 0.0) && (dVar7 = (double)(ulonglong)(uint)fVar5, cVar14 == '\0'))
    {
      (*(undefined8 *)(fr0_ - 0x34c)) = (double)((ulonglong)(*(undefined8 *)(fr0_ - 0x34c)) & 0xffffffff00000000);
      dVar7 = (*(undefined8 *)(fr0_ - 0x34c));
    }
    (*(undefined8 *)(fr0_ - 0x34c)) = dVar7;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_length(((undefined1 *)(fr0_ - 0x28)),uVar2,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023bf4(((undefined1 *)(fr0_ - 0x28)),&(*(undefined8 *)(fr0_ - 0x34c)),ar6_00,ar7));
    dVar10 = (double)(ulonglong)(uint)fVar5;
    dVar7 = dVar10;
    if (cVar14 == '\0') {
      (*(undefined8 *)(fr0_ - 0x24)) = (double)((ulonglong)(*(undefined8 *)(fr0_ - 0x24)) & 0xffffffff00000000);
      dVar7 = (*(undefined8 *)(fr0_ - 0x24));
    }
    (*(undefined8 *)(fr0_ - 0x24)) = dVar7;
    puVar4 = ((undefined1 *)(fr0_ - 0x28));
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023aa0(ar4 + 0x200,puVar4,ar6_00,ar7));
    fVar5 = F32HI(dVar10);
    (vsp = ((unsigned long)(fr0_ - 928)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8) + 0x13c))))
              (*(int *)(unsigned)(ar6 + 0x50),puVar4,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x2bc)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2bc)),0xffffffff,ar6_00,ar7));
    iVar1 = ar4 + 0x200;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2cc))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c0230f0(iVar1,iVar1,ar6_00,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2dc))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x38)),iVar1,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x2cc)),((undefined1 *)(fr0_ - 0x2dc)),ar6_00,ar7));
    if (cVar14 == '\0') {
      fVar6 = 5.0;
    }
    else {
      fVar5 = 5.0;
      fVar6 = 2.74654e-43;
    }
    bVar12 = cVar13 == '\0';
    bVar11 = fVar5 < fVar6;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2dc)),0xffffffff,ar6_00,ar7));
    ar5_01 = (ulonglong *)(unsigned)0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2cc)),0xffffffff,ar6_00,ar7));
    if (bVar12 && bVar11) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2ec))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x2ec)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2ec)),0xffffffff,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2fc))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c0230f0(ar4 + 0x200,((void *)0x8c0230f0),ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30c))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x28)),((void *)0x8c0230f0),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x2fc)),((undefined1 *)(fr0_ - 0x30c)),ar6_00,ar7));
      if (cVar14 == '\0') {
        fVar5 = 5.0;
      }
      else {
        fVar6 = 5.0;
        fVar5 = 2.74654e-43;
      }
      bVar12 = cVar13 == '\0';
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30c)),0xffffffff,ar6_00,ar7));
      ar5_01 = (ulonglong *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2fc)),0xffffffff,ar6_00,ar7));
      if (bVar12 && fVar6 < fVar5) {
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x318)),ar5_01,ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x328))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c023484(ar4 + 0x200,((undefined1 *)(fr0_ - 0x318)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(ar4 + 0x200,((undefined1 *)(fr0_ - 0x328)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x328)),0xffffffff,ar6_00,ar7));
        ar5_01 = (ulonglong *)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 928)), object_dtor_delete(((undefined1 *)(fr0_ - 0x318)),0xffffffff,ar6_00,ar7));
      }
    }
    *(undefined4 *)(unsigned)(ar4 + 0x304) = 1;
  }
  if (2 < *(int *)(unsigned)(ar4 + 0x128)) {
    if (cVar14 == '\0') {
      dVar7 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      dVar7 = 7.67384666056308e+21;
    }
    if (cVar13 == '\0') {
      fVar5 = F32HI(dVar7);
      dVar7 = CONCAT44D(fVar5,F32LO(dVar7) * fVar5);
    }
    else {
      dVar7 = dVar7 * dVar7;
    }
    if (cVar14 == '\0') {
      dVar10 = CONCAT44D(0x447a0000,SUB84(in_dr14,0));
    }
    else {
      dVar10 = -7.933010971859645e-251;
    }
    if (cVar13 == '\0') {
      dVar10 = CONCAT44D(F32HI(dVar10) - F32LO(dVar7),SUB84(dVar10,0))
      ;
    }
    else {
      dVar10 = dVar10 - dVar7;
    }
    if (cVar14 == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)ar5,SUB84(dVar7,0));
    }
    else {
      dVar7 = *ar5;
    }
    fVar5 = F32HI(dVar10);
    if (cVar13 == '\0') {
      bVar12 = fVar5 < F32HI(dVar7);
    }
    else {
      bVar12 = dVar10 < dVar7;
    }
    if (!bVar12) {
      if (cVar14 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x200),*(undefined4 *)(unsigned)ar5);
      }
      else {
        dVar7 = *(double *)(unsigned)(ar4 + 0x200);
      }
      if (cVar13 == '\0') {
        fVar6 = F32LO(dVar7) + F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar14 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),fVar6);
      }
      else {
        dVar7 = *(double *)(unsigned)(ar4 + 0x48);
      }
      if (cVar13 == '\0') {
        fVar9 = F32HI(dVar7);
        fVar6 = F32LO(dVar7) + fVar9;
        dVar7 = CONCAT44D(fVar9,fVar6);
        bVar12 = fVar6 < fVar5;
      }
      else {
        dVar7 = dVar7 + dVar7;
        bVar12 = dVar7 < dVar10;
      }
      if (!bVar12) {
        ar5_01 = (ulonglong *)(unsigned)(ar4 + 0x200);
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)ar5_01 = 0;
        }
        else {
          *ar5_01 = D2U(dVar7) & 0xffffffff;
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x338)),ar5_01,ar6_00,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023d04(ar4 + 0x200,((undefined1 *)(fr0_ - 0x338)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x338)),0xffffffff,ar6_00,ar7));
  if (iVar1 != 0) {
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c032ab0(ar4,iVar1,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c032ab0(ar4,iVar1,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_ctor_xyz((int)&(*(undefined8 *)(fr0_ - 0x34c)) + 4,(int)&(*(undefined8 *)(fr0_ - 0x34c)) + 4,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023aa0(ar4 + 0x200,(int)&(*(undefined8 *)(fr0_ - 0x34c)) + 4,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x34c)) + 4,0xffffffff,ar6_00,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c05af78\n.set _FUN_8c05af78, _FUN_8c05af78_def\n");
