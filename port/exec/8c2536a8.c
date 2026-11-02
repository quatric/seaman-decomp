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
uint FUN_8c2536a8_def(int ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2536a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint ain0 = (uint)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  float fVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r8 = 0;
  ushort *ar4_00;
  byte *unaff_r13 = 0;
  ushort unaff_r14 = 0;
  code *pcVar5;
  double in_dr2 = 0;
  double dVar6;
  undefined4 uVar8;
  double dVar7;
  double in_dr4 = 0;
  float fVar9;
  float fVar10;
  undefined4 in_fr15 = 0;
  double in_xd2 = 0;
  double in_xd14 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  if (*(int *)(unsigned)(ar4 + 8) <= (*(undefined4 *)(unsigned)(unsigned)0x8c4aa514)) {
    ar4_00 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 1) != 0) {
      ar6 = 1;
      ar5 = (byte *)(unsigned)0x3;
      (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c234d68(&(*(undefined4 *)(unsigned)(unsigned)0x8c277c00),3,1,ar7));
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa554) = 0;
    ain0 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c254006(ar4,ar5,ar6,ar7));
    if (ain0 == 0) {
      (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c23c2a0(((undefined1 *)(unsigned)0x8c4ab30c),ar5,ar6,ar7));
      iVar3 = 0;
      while( true ) {
        fVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
        uVar4 = (undefined4)((ulonglong)in_dr2 >> 0x20);
        uVar8 = SUB84(in_dr4,0);
        ain0 = (uint)*(ushort *)(unsigned)(ar4 + 0x14);
        if ((int)ain0 <= iVar3) break;
        uVar2 = *ar4_00 & 0x3fff;
        if ((iVar3 == 0) || (uVar2 != unaff_r14)) {
          unaff_r13 = (byte *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + (uint)uVar2 * 0x14);
          (*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) = *(uint *)(unsigned)(unaff_r13 + 0x10);
          if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa554) != 0) {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) | 0x100000;
          }
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 4) != 0) {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & (*(undefined4 *)(unsigned)(unsigned)0x8c4aa524) | (*(undefined4 *)(unsigned)(unsigned)0x8c4aa528);
          }
          if (cVar12 == '\0') {
            in_fr15 = 0x3b808081;
          }
          else {
            in_xd14 = -1.9601903259109032e-249;
          }
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x200000) == 0) {
            dVar7 = in_xd14;
            if (cVar12 == '\0') {
              dVar7 = CONCAT44D(in_fr15,uVar8);
            }
            fVar9 = F32HI(dVar7);
            if (cVar11 == '\0') {
              dVar6 = CONCAT44D(uVar4,(float)unaff_r13[2] * fVar9);
            }
            else {
              dVar6 = CONCAT44D(uVar4,(float)unaff_r13[2]) * dVar7;
            }
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4) = SUB84(in_xd2,0);
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            if (cVar12 == '\0') {
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4) = SUB84(dVar6,0);
            }
            uVar4 = (undefined4)(D2U(dVar6) >> 0x20);
            if (cVar11 == '\0') {
              dVar6 = CONCAT44D(uVar4,(float)unaff_r13[1] * fVar9);
            }
            else {
              dVar6 = CONCAT44D(uVar4,(float)unaff_r13[1]) * dVar7;
            }
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a0);
            if (cVar12 == '\0') {
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8) = SUB84(dVar6,0);
            }
            uVar4 = (undefined4)(D2U(dVar6) >> 0x20);
            if (cVar11 == '\0') {
              dVar6 = CONCAT44D(uVar4,(float)*unaff_r13 * fVar9);
            }
            else {
              dVar6 = CONCAT44D(uVar4,(float)*unaff_r13) * dVar7;
            }
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0) = F32HI(in_xd2);
            fVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a0);
            if (cVar12 == '\0') {
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc) = SUB84(dVar6,0);
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0) = fVar10;
            }
            uVar4 = (undefined4)(D2U(dVar6) >> 0x20);
            if (cVar11 == '\0') {
              dVar6 = CONCAT44D(uVar4,(float)unaff_r13[3] * fVar9);
            }
            else {
              dVar6 = CONCAT44D(uVar4,(float)unaff_r13[3]) * dVar7;
            }
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a0);
            if (cVar12 == '\0') {
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a0) = SUB84(dVar6,0);
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0) = SUB84(dVar6,0);
              fVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            }
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c2371be(*(uint *)(unsigned)(unaff_r13 + 0xc) & 0x3fffffff,ar5,ar6,ar7));
            fVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a0) = SUB84(in_xd2,0);
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x200) == 0) {
              dVar7 = in_xd14;
              if (cVar12 == '\0') {
                dVar7 = CONCAT44D(in_fr15,uVar8);
              }
              fVar9 = F32HI(dVar7);
              if (cVar11 == '\0') {
                dVar6 = CONCAT44D(uVar4,(float)unaff_r13[2] * fVar9);
              }
              else {
                dVar6 = CONCAT44D(uVar4,(float)unaff_r13[2]) * dVar7;
              }
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a0);
              if (cVar12 == '\0') {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4) = SUB84(dVar6,0);
              }
              uVar4 = (undefined4)(D2U(dVar6) >> 0x20);
              if (cVar11 == '\0') {
                dVar6 = CONCAT44D(uVar4,(float)unaff_r13[1] * fVar9);
              }
              else {
                dVar6 = CONCAT44D(uVar4,(float)unaff_r13[1]) * dVar7;
              }
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a0);
              if (cVar12 == '\0') {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8) = SUB84(dVar6,0);
              }
              uVar4 = (undefined4)(D2U(dVar6) >> 0x20);
              if (cVar11 == '\0') {
                dVar6 = CONCAT44D(uVar4,(float)*unaff_r13 * fVar9);
              }
              else {
                dVar6 = CONCAT44D(uVar4,(float)*unaff_r13) * dVar7;
              }
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0) = F32HI(in_xd2);
              fVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a0);
              if (cVar12 == '\0') {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc) = SUB84(dVar6,0);
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0) = fVar10;
              }
              uVar4 = (undefined4)(D2U(dVar6) >> 0x20);
              if (cVar11 == '\0') {
                dVar6 = CONCAT44D(uVar4,(float)unaff_r13[3] * fVar9);
              }
              else {
                dVar6 = CONCAT44D(uVar4,(float)unaff_r13[3]) * dVar7;
              }
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a0);
              if (cVar12 == '\0') {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a0) = SUB84(dVar6,0);
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0) = SUB84(dVar6,0);
                fVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
              }
            }
            else {
              dVar7 = in_xd14;
              if (cVar12 == '\0') {
                dVar7 = CONCAT44D(in_fr15,uVar8);
              }
              if (cVar11 == '\0') {
                dVar6 = CONCAT44D(uVar4,(float)unaff_r13[3] *
                                               F32HI(dVar7));
              }
              else {
                dVar6 = CONCAT44D(uVar4,(float)unaff_r13[3]) * dVar7;
              }
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8) = SUB84(dVar7,0);
              dVar7 = CONCAT44D(0x3f800000,(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0) = SUB84(dVar6,0);
              if (cVar12 == '\0') {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc) = 1.0;
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
                fVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
              }
              else {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0) = 1.0;
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0) = 1.0;
                fVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
              }
            }
          }
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4) = fVar1;
          uVar4 = 0x10;
          if (cVar12 == '\0') {
            dVar7 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa52c),SUB84(dVar7,0));
          }
          else {
            dVar7 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa530),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa52c));
          }
          fVar10 = F32HI(dVar7);
          uVar8 = (undefined4)(D2U(dVar6) >> 0x20);
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x10) == 0) {
            uVar4 = 0x20;
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x20) != 0) {
              if (cVar12 == '\0') {
                dVar6 = CONCAT44D(uVar8,(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
              }
              else {
                in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
              }
              if (cVar11 == '\0') {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0) = F32LO(dVar6) + fVar10;
              }
              else {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0) = SUB84(dVar6 + dVar7,0);
              }
              if (cVar12 == '\0') {
                dVar6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa530));
              }
              else {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0) = SUB84(in_xd2,0);
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4) = F32HI(in_xd2);
                dVar6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4));
                in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa534),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa530));
              }
              if (cVar11 == '\0') {
                dVar6 = CONCAT44D(F32HI(dVar6) + F32LO(dVar6),
                                         SUB84(dVar6,0));
              }
              else {
                dVar6 = dVar6 + dVar6;
              }
              fVar10 = F32HI(dVar6);
              if (cVar12 == '\0') {
                dVar6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa534));
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4) = fVar10;
              }
              else {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4) = SUB84(dVar6,0);
                dVar6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),fVar10);
                in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa538),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa534));
              }
              if (cVar11 == '\0') {
                dVar6 = CONCAT44D(F32HI(dVar6) + F32LO(dVar6),
                                         SUB84(dVar6,0));
              }
              else {
                dVar6 = dVar6 + dVar6;
              }
              fVar10 = F32HI(dVar6);
              if (cVar12 == '\0') {
                dVar6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa538));
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8) = fVar10;
              }
              else {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8) = SUB84(dVar6,0);
                dVar6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0),fVar10);
                in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa53c),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa538));
              }
              if (cVar11 == '\0') {
                dVar6 = CONCAT44D(F32HI(dVar6) + F32LO(dVar6),
                                         SUB84(dVar6,0));
              }
              else {
                dVar6 = dVar6 + dVar6;
              }
              fVar10 = F32HI(dVar6);
              if (cVar12 == '\0') {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
                dVar6 = CONCAT44D(fVar10,fVar10);
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc) = fVar10;
              }
              else {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc) = SUB84(dVar6,0);
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
                in_xd2 = dVar6;
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0) = fVar10;
                (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0) = fVar10;
              }
            }
          }
          else {
            if (cVar12 == '\0') {
              dVar6 = CONCAT44D(uVar8,(*(undefined4 *)(unsigned)(unsigned)0x8c4aa538));
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a0) = fVar10;
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0) = fVar10;
            }
            else {
              in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa53c),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa538));
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa53c);
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa53c);
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a0) = SUB84(dVar7,0);
            }
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c11ac) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa538);
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa534);
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa530);
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a4);
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a8);
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11ac);
          }
          in_dr4 = in_xd14;
          if (cVar12 == '\0') {
            in_dr4 = CONCAT44D(in_fr15,SUB84(dVar7,0));
          }
          uVar8 = (undefined4)(D2U(dVar6) >> 0x20);
          fVar10 = F32HI(in_dr4);
          if (cVar11 == '\0') {
            dVar7 = CONCAT44D(uVar8,(float)unaff_r13[6] * fVar10);
          }
          else {
            dVar7 = CONCAT44D(uVar8,(float)unaff_r13[6]) * in_dr4;
          }
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c4) = SUB84(in_xd2,0);
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c11cc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c4);
          if (cVar12 == '\0') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c4) = SUB84(dVar7,0);
          }
          uVar8 = (undefined4)(D2U(dVar7) >> 0x20);
          if (cVar11 == '\0') {
            dVar7 = CONCAT44D(uVar8,(float)unaff_r13[5] * fVar10);
          }
          else {
            dVar7 = CONCAT44D(uVar8,(float)unaff_r13[5]) * in_dr4;
          }
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11cc);
          if (cVar12 == '\0') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8) = SUB84(dVar7,0);
          }
          uVar8 = (undefined4)(D2U(dVar7) >> 0x20);
          if (cVar11 == '\0') {
            in_dr2 = CONCAT44D(uVar8,(float)unaff_r13[4] * fVar10);
          }
          else {
            in_dr2 = CONCAT44D(uVar8,(float)unaff_r13[4]) * in_dr4;
          }
          if (cVar12 == '\0') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c11cc) = SUB84(in_dr2,0);
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c11d0) = *(undefined4 *)(unsigned)(unaff_r13 + 8);
            in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11d0));
          }
          else {
            in_xd2 = *(double *)(unsigned)(unaff_r13 + 8);
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c11d0) = SUB84(in_xd2,0);
            (*(uint *)(unsigned)0x8c4c11d4) = (undefined4)((ulonglong)in_xd2 >> 0x20);
          }
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c11ac) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c23c4ba(((undefined1 *)(unsigned)0x8c4aa52c),uVar4,ar6,ar7));
          (*(uint *)(fr0_ - 0x24)) = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x3600000;
          ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c237370((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308),uVar4,ar6,ar7); });
          ar7 = 0x1000000;
          ar6 = 0x2000000;
          ar5 = (byte *)(unsigned)0x80000;
          unaff_r14 = uVar2;
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x200000) == 0) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x2000000) == 0) {
              if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x1000000) == 0) {
                if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x100000) == 0) {
                  uVar4 = 0x80012;
                  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c237124(0x80012,0x80000,0x2000000,0x1000000));
                  goto LAB_8c253a5e;
                }
                uVar4 = 0x2100012;
                (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c237124(0x2100012,0x80000,0x2000000,0x1000000));
                goto LAB_8c253a50;
              }
              if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x100000) != 0) {
                uVar4 = 0x2100010;
                (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c237124(0x2100010,0x80000,0x2000000,0x1000000));
                goto LAB_8c253a50;
              }
              uVar4 = 0x80010;
              (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c237124(0x80010,0x80000,0x2000000,0x1000000));
LAB_8c253a5e:
              pcVar5 = ((void *)0x8c236510);
            }
            else {
              if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x100000) == 0) {
                uVar4 = 0x80010;
                (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c237124(0x80010,0x80000,0x2000000,0x1000000));
                goto LAB_8c253a5e;
              }
              uVar4 = 0x2100010;
              (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c237124(0x2100010,0x80000,0x2000000,0x1000000));
LAB_8c253a50:
              pcVar5 = ((void *)0x8c2365e2);
            }
            unaff_r8 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)pcVar5))(uVar4,ar5,ar6,ar7));
          }
          else {
            uVar4 = 0x80008;
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x2000000) == 0) {
              if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x1000000) == 0) {
                if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x100000) == 0) {
                  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x80000) == 0) {
                    uVar4 = 0x8000e;
                  }
                  else {
                    uVar4 = 0x8000a;
                  }
                  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c237124(uVar4,0x80000,0x2000000,0x1000000));
                  goto LAB_8c253a00;
                }
                if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x80000) == 0) {
                  uVar4 = 0x210000e;
                }
                else {
                  uVar4 = 0x210000a;
                }
                (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c237124(uVar4,0x80000,0x2000000,0x1000000));
                goto LAB_8c2539ea;
              }
              if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x100000) != 0) {
                if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x80000) == 0) {
                  uVar4 = 0x210000c;
                }
                else {
                  uVar4 = 0x2100008;
                }
                (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c237124(uVar4,0x80000,0x2000000,0x1000000));
                goto LAB_8c2539ea;
              }
              if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x80000) == 0) {
                uVar4 = 0x8000c;
              }
              (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c237124(uVar4,0x80000,0x2000000,0x1000000));
LAB_8c253a00:
              pcVar5 = ((void *)0x8c23666c);
            }
            else {
              if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x100000) == 0) {
                uVar4 = 0x80008;
                (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c237124(0x80008,0x80000,0x2000000,0x1000000));
                goto LAB_8c253a00;
              }
              uVar4 = 0x2100008;
              (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c237124(0x2100008,0x80000,0x2000000,0x1000000));
LAB_8c2539ea:
              pcVar5 = ((void *)0x8c236718);
            }
            unaff_r8 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)pcVar5))(uVar4,ar5,ar6,ar7));
          }
        }
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c4ab318) == 0) {
          if ((*(uint *)(fr0_ - 0x24)) == 0) {
            ar5 = unaff_r13;
            (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c247e16(ar4_00,unaff_r13,ar6,ar7));
          }
          else if ((*(uint *)(fr0_ - 0x24)) == 0x200000) {
            ar5 = unaff_r13;
            (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c24901e(ar4_00,unaff_r13,ar6,ar7));
          }
          else if ((*(uint *)(fr0_ - 0x24)) == 0x600000) {
            ar5 = unaff_r13;
            (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c24a808(ar4_00,unaff_r13,ar6,ar7));
          }
          else if ((*(uint *)(fr0_ - 0x24)) == 0x1000000) {
            ar5 = unaff_r13;
            (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c24bdc8(ar4_00,unaff_r13,ar6,ar7));
          }
          else if ((*(uint *)(fr0_ - 0x24)) == 0x1200000) {
            ar5 = unaff_r13;
            (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c24d5a8(ar4_00,unaff_r13,ar6,ar7));
          }
          else if (((*(uint *)(fr0_ - 0x24)) == 0x2200000) || ((*(uint *)(fr0_ - 0x24)) == 0x3200000)) {
            ar5 = unaff_r13;
            (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c24ef30(ar4_00,unaff_r13,ar6,ar7));
          }
          else if ((*(uint *)(fr0_ - 0x24)) == 0x1600000) {
            ar5 = unaff_r13;
            (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c250144(ar4_00,unaff_r13,ar6,ar7));
          }
          else if (((*(uint *)(fr0_ - 0x24)) == 0x2600000) || ((*(uint *)(fr0_ - 0x24)) == 0x3600000)) {
            ar5 = unaff_r13;
            (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c2518b4(ar4_00,unaff_r13,ar6,ar7));
          }
          else if (((*(uint *)(fr0_ - 0x24)) == 0x2000000) || ((*(uint *)(fr0_ - 0x24)) == 0x3000000)) {
            ar5 = unaff_r13;
            (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c2528e8(ar4_00,unaff_r13,ar6,ar7));
          }
        }
        else if ((*(uint *)(fr0_ - 0x24)) == 0) {
          ar5 = unaff_r13;
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c2485bc(ar4_00,unaff_r13,ar6,ar7));
        }
        else if ((*(uint *)(fr0_ - 0x24)) == 0x200000) {
          ar5 = unaff_r13;
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c2499ec(ar4_00,unaff_r13,ar6,ar7));
        }
        else if ((*(uint *)(fr0_ - 0x24)) == 0x600000) {
          ar5 = unaff_r13;
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c24b154(ar4_00,unaff_r13,ar6,ar7));
        }
        else if ((*(uint *)(fr0_ - 0x24)) == 0x1000000) {
          ar5 = unaff_r13;
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c24c6f0(ar4_00,unaff_r13,ar6,ar7));
        }
        else if ((*(uint *)(fr0_ - 0x24)) == 0x1200000) {
          ar5 = unaff_r13;
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c24df18(ar4_00,unaff_r13,ar6,ar7));
        }
        else if (((*(uint *)(fr0_ - 0x24)) == 0x2200000) || ((*(uint *)(fr0_ - 0x24)) == 0x3200000)) {
          ar5 = unaff_r13;
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c24f64c(ar4_00,unaff_r13,ar6,ar7));
        }
        else if ((*(uint *)(fr0_ - 0x24)) == 0x1600000) {
          ar5 = unaff_r13;
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c250a54(ar4_00,unaff_r13,ar6,ar7));
        }
        else if (((*(uint *)(fr0_ - 0x24)) == 0x2600000) || ((*(uint *)(fr0_ - 0x24)) == 0x3600000)) {
          ar5 = unaff_r13;
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c251f78(ar4_00,unaff_r13,ar6,ar7));
        }
        else if (((*(uint *)(fr0_ - 0x24)) == 0x2000000) || ((*(uint *)(fr0_ - 0x24)) == 0x3000000)) {
          ar5 = unaff_r13;
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c252e7c(ar4_00,unaff_r13,ar6,ar7));
        }
        (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c2370dc(unaff_r8,ar5,ar6,ar7));
        ar4_00 = ar4_00 + 0xc;
        iVar3 = iVar3 + 1;
      }
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c2536a8\n.set _FUN_8c2536a8, _FUN_8c2536a8_def\n");
