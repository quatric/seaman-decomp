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
undefined * FUN_8c21908e_def(ushort *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c21908e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 124; for (int i_ = 0; i_ < 124; i_++) z_[i_] = 0; }
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined *ar4_00;
  undefined4 uVar5;
  undefined *puVar6;
  ushort *puVar7;
  undefined4 uVar8;
  ushort uVar9;
  uint a6;
  uint uVar10;
  ushort *puVar11;
  undefined1 *ar7_00;
  code *pcVar12;
  int iVar13;
  double in_dr2 = 0;
  double dVar14;
  uint uVar15;
  double in_dr4 = 0;
  float fVar16;
  undefined8 in_xd2 = 0;
  double in_xd14 = 0;
  char cVar17;
  char cVar18;
  
  cVar18 = '\0';
  cVar17 = '\0';
  ar7_00 = ((undefined1 *)(fr0_ - 0x30));
  puVar2 = (undefined *)(unsigned)0x40;
  puVar11 = ar4;
  do {
    while( true ) {
      while( true ) {
        (*(unsigned *)(fr0_ - 0x78) = (unsigned)(unsigned long)(puVar11));
        puVar11 = ((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78)) + 1;
        uVar9 = *((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78));
        if (uVar9 == 0xff) {
          return puVar2;
        }
        puVar6 = (undefined *)(unsigned)(int)(short)(uVar9 & 0xff);
        iVar4 = (int)(short)uVar9;
        if ((undefined *)(unsigned)0x7 < puVar6) break;
        if (puVar6 == (undefined *)(unsigned)0x1) {
          puVar2 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), FUN_8c2375ae(iVar4,1,(int)(short)uVar9,ar7_00));
        }
        else {
          puVar2 = puVar6;
          if ((puVar6 != (undefined *)(unsigned)0x2) && (puVar6 != (undefined *)(unsigned)0x3)) {
            if (puVar6 == (undefined *)(unsigned)0x4) {
              iVar4 = (short)(uVar9 >> 8) * 4;
              *(unsigned *)(unsigned)(iVar4 + -0x73b3f054) = puVar11;
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c0fa8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c0fa8) + 1;
              return (undefined *)(unsigned)iVar4;
            }
            if (puVar6 == (undefined *)(unsigned)0x5) {
              puVar2 = (undefined *)(unsigned)
                       (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c21908e(*(undefined4 *)(unsigned)((short)(uVar9 >> 8) * 4 + -0x73b3f054),ar5,ar6,
                                    ar7_00));
              (*(undefined4 *)(unsigned)(unsigned)0x8c4c0fa8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c0fa8) + -1;
            }
          }
        }
      }
      if ((undefined *)(unsigned)0xf < puVar6) break;
      puVar7 = ((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78)) + 2;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c23752c(iVar4,(int)(short)*puVar11,(int)(short)uVar9,ar7_00));
      puVar2 = (undefined *)(unsigned)(uVar3 & 0xff);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2f4) = 0;
      puVar11 = puVar7;
      if ((puVar2 == (undefined *)(unsigned)0x4) && ((*puVar7 & 0x18) != 0)) {
        if (cVar18 == '\0') {
          in_dr4 = CONCAT44D(0x46fffe00,SUB84(in_dr4,0));
        }
        else {
          in_dr4 = -3.115182567042769e-250;
        }
        uVar8 = (undefined4)((ulonglong)in_dr2 >> 0x20);
        fVar16 = F32HI(in_dr4);
        if (cVar17 == '\0') {
          dVar14 = CONCAT44D(uVar8,(float)(int)(short)((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78))[4] / fVar16);
        }
        else {
          dVar14 = CONCAT44D(uVar8,(float)(int)(short)((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78))[4]) / in_dr4;
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f4) = (undefined4)in_xd2;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4ab208) = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f4);
        if (cVar18 == '\0') {
          (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f4) = SUB84(dVar14,0);
        }
        uVar8 = (undefined4)(D2U(dVar14) >> 0x20);
        if (cVar17 == '\0') {
          dVar14 = CONCAT44D(uVar8,(float)(int)(short)((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78))[5] / fVar16);
        }
        else {
          dVar14 = CONCAT44D(uVar8,(float)(int)(short)((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78))[5]) / in_dr4;
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab208);
        if (cVar18 == '\0') {
          (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f8) = SUB84(dVar14,0);
        }
        uVar8 = (undefined4)(D2U(dVar14) >> 0x20);
        if (cVar17 == '\0') {
          dVar14 = CONCAT44D(uVar8,(float)(int)(short)((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78))[6] / fVar16);
        }
        else {
          dVar14 = CONCAT44D(uVar8,(float)(int)(short)((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78))[6]) / in_dr4;
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1fc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab208);
        if (cVar18 == '\0') {
          (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1fc) = SUB84(dVar14,0);
        }
        uVar8 = (undefined4)(D2U(dVar14) >> 0x20);
        if (cVar17 == '\0') {
          dVar14 = CONCAT44D(uVar8,(float)(int)(short)((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78))[7] / fVar16);
        }
        else {
          dVar14 = CONCAT44D(uVar8,(float)(int)(short)((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78))[7]) / in_dr4;
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c4ab200) = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab208);
        if (cVar18 == '\0') {
          (*(undefined4 *)(unsigned)(unsigned)0x8c4ab200) = SUB84(dVar14,0);
        }
        uVar8 = (undefined4)(D2U(dVar14) >> 0x20);
        if (cVar17 == '\0') {
          dVar14 = CONCAT44D(uVar8,(float)(int)(short)((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78))[8] / fVar16);
        }
        else {
          dVar14 = CONCAT44D(uVar8,(float)(int)(short)((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78))[8]) / in_dr4;
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c4ab204) = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab208);
        if (cVar18 == '\0') {
          (*(undefined4 *)(unsigned)(unsigned)0x8c4ab204) = SUB84(dVar14,0);
        }
        uVar8 = (undefined4)(D2U(dVar14) >> 0x20);
        if (cVar17 == '\0') {
          in_dr2 = CONCAT44D(uVar8,(float)(int)(short)((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78))[9] / fVar16);
        }
        else {
          in_dr2 = CONCAT44D(uVar8,(float)(int)(short)((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78))[9]) / in_dr4;
        }
        if (cVar18 == '\0') {
          (*(undefined4 *)(unsigned)(unsigned)0x8c4ab208) = SUB84(in_dr2,0);
        }
        else {
          (*(uint *)(unsigned)0x8c4ab20c) = (undefined4)((ulonglong)in_xd2 >> 0x20);
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2f4) = 1;
        puVar2 = ((undefined1 *)(unsigned)0x8c2192e8);
        puVar11 = ((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78)) + 10;
      }
    }
    uVar8 = 0x40;
    if (puVar6 < (undefined *)(unsigned)0x40) {
      ar7_00 = (undefined1 *)(unsigned)0x0;
      (*(unsigned *)(fr0_ - 0x78) = (unsigned)(unsigned long)(((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78)) + 2));
      iVar13 = (int)(short)*puVar11;
      puVar2 = (undefined *)(unsigned)({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c275990)); *(unsigned *)((((unsigned long)(fr0_ - 124)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 124)) - 8); FUN_8c21d7d4(iVar4,((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78)),((undefined1 *)(unsigned)0x8c275970),0); });
    }
    else {
      puVar7 = ((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78)) + 2;
      uVar1 = *puVar11;
      (*(unsigned *)(fr0_ - 0x78) = (unsigned)(unsigned long)(((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78)) + 3));
      uVar3 = (uint)(short)*puVar7;
      if (ar5 < (*(undefined4 *)(unsigned)(unsigned)0x8c4c0fa4)) {
        ar7_00 = ((undefined1 *)(unsigned)0x8c4aa4f0);
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x800) != 0) {
          uVar9 = uVar9 & (ushort)(*(undefined4 *)(unsigned)(unsigned)0x8c4aa524) | (ushort)(*(undefined4 *)(unsigned)(unsigned)0x8c4aa528);
        }
        a6 = (int)(short)uVar9 >> 8;
        if ((a6 & 4) == 0) {
          dVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1a8);
          if (cVar18 == '\0') {
            dVar14 = in_xd14;
          }
        }
        else {
          dVar14 = (double)((ulonglong)in_dr4 & 0xffffffff);
          if (cVar18 == '\0') {
            dVar14 = in_xd14;
          }
        }
        uVar15 = SUB84(in_dr4,0);
        in_dr4 = CONCAT44D(0x3f800000,uVar15);
        in_xd14 = dVar14;
        if (((a6 & 1) != 0) && (in_xd14 = in_dr4, cVar18 == '\0')) {
          in_xd14 = dVar14;
        }
        ar4_00 = (undefined *)(unsigned)0x0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c277acc) = (uint)((a6 & 0x20) != 0);
        iVar4 = (short)(char)(uVar9 >> 8) * 0x20;
        uVar10 = (uint)((ulonglong)in_dr2 >> 0x20);
        if ((puVar6 == (undefined *)(unsigned)0x41) || (puVar6 == (undefined *)(unsigned)0x42)) {
          if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa2f4) == 0) {
            if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa2f0) == 0) {
              uVar5 = *(undefined4 *)(unsigned)(iVar4 + -0x73d8a564);
              uVar15 = a6;
              (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c237124(uVar5,0x40,a6,((undefined1 *)(unsigned)0x8c4aa4f0)));
              if ((a6 & 8) == 0) {
                ar7_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), FUN_8c23666c(uVar5,uVar8,uVar15,ar7_00));
              }
              else {
                ar7_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), FUN_8c236718(uVar5,uVar8,uVar15,ar7_00));
              }
              if (puVar6 == (undefined *)(unsigned)0x41) {
                if (cVar18 == '\0') {
                  in_dr4 = (double)((ulonglong)in_dr4 & 0xffffffff);
                }
                else {
                  in_dr4 = 6.462349967980925e-27;
                }
              }
              else if (cVar18 == '\0') {
                in_dr4 = (double)((ulonglong)in_dr4 & 0xffffffff);
              }
              else {
                in_dr4 = -4.0881699329069754e-250;
              }
              if (ar5 == 0) {
                puVar2 = ((undefined1 *)(unsigned)0x8c275a88);
              }
              else {
                puVar2 = ((undefined1 *)(unsigned)0x8c276a88);
              }
              uVar8 = ar6;
              puVar6 = (undefined *)(unsigned)
                       (vsp = ((unsigned long)(fr0_ - 124)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((puVar2 + iVar4 + 0x1c))))(((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78)),ar6,uVar3,ar7_00));
              ar4_00 = puVar6;
              a6 = uVar3;
            }
            else {
              if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x200) == 0) {
                if ((a6 & 1) == 0) {
                  if (cVar18 == '\0') {
                    dVar14 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c27597c),(*(undefined4 *)(unsigned)(unsigned)0x8c27874c));
                  }
                  else {
                    in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c278750),(*(undefined4 *)(unsigned)(unsigned)0x8c27874c));
                    dVar14 = CONCAT44D((*(uint *)(unsigned)0x8c275980),(*(undefined4 *)(unsigned)(unsigned)0x8c27597c));
                  }
                  if (cVar17 == '\0') {
                    in_dr2 = CONCAT44D(F32HI(dVar14) * F32LO(dVar14),
                                              SUB84(dVar14,0));
                  }
                  else {
                    in_dr2 = dVar14 * dVar14;
                  }
                }
                else if (cVar18 == '\0') {
                  in_dr2 = (double)((ulonglong)uVar10 << 0x20);
                }
                else {
                  in_xd2 = CONCAT44((*(uint *)(unsigned)0x8c275980),(*(undefined4 *)(unsigned)(unsigned)0x8c27597c));
                }
              }
              else if ((a6 & 1) == 0) {
                if (cVar18 == '\0') {
                  in_dr2 = CONCAT44D(uVar10,(*(undefined4 *)(unsigned)(unsigned)0x8c27874c));
                }
                else {
                  in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c278750),(*(undefined4 *)(unsigned)(unsigned)0x8c27874c));
                }
              }
              else if (cVar18 == '\0') {
                in_dr2 = (double)((ulonglong)uVar10 << 0x20);
              }
              else {
                in_xd2 = CONCAT44((*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c275970)+4)),(undefined4)(*(undefined8 *)(unsigned)(unsigned)0x8c275970));
              }
              uVar10 = a6;
              (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c237124(*(undefined4 *)(unsigned)(iVar4 + -0x73d8a568),0x40,a6,((undefined1 *)(unsigned)0x8c4aa4f0)));
              if ((a6 & 8) == 0) {
                if ((a6 & 2) == 0) {
                  ar7_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), FUN_8c236d20(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c275990),uVar10,ar7_00));
                }
                else {
                  ar7_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), FUN_8c236b3c(((undefined1 *)(fr0_ - 0x34)),uVar8,uVar10,ar7_00));
                }
              }
              else if ((a6 & 2) == 0) {
                ar7_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), FUN_8c236dd8(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c275990),uVar10,ar7_00));
              }
              else {
                ar7_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), FUN_8c236c38(((undefined1 *)(fr0_ - 0x34)),uVar8,uVar10,ar7_00));
              }
              if (puVar6 == (undefined *)(unsigned)0x41) {
                if (cVar18 == '\0') {
                  uVar15 = 0x3b800000;
                }
              }
              else if (cVar18 == '\0') {
                uVar15 = 0x3a800000;
              }
              if (ar5 == 0) {
                puVar2 = ((undefined1 *)(unsigned)0x8c275a88);
              }
              else {
                puVar2 = ((undefined1 *)(unsigned)0x8c276a88);
              }
              in_dr4 = in_xd14;
              if (cVar18 == '\0') {
                in_dr4 = (double)(ulonglong)uVar15;
              }
              uVar8 = ar6;
              puVar6 = (undefined *)(unsigned)
                       (vsp = ((unsigned long)(fr0_ - 124)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((puVar2 + iVar4 + 0x18))))(((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78)),ar6,uVar3,ar7_00));
              ar4_00 = puVar6;
              a6 = uVar3;
            }
          }
          else {
            if ((a6 & 8) == 0) {
              uVar5 = 0x8000c;
              (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c237124(0x8000c,0x40,a6,((undefined1 *)(unsigned)0x8c4aa4f0)));
              ar7_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), FUN_8c23666c(uVar5,uVar8,a6,ar7_00));
            }
            else {
              uVar5 = 0x210000c;
              (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c237124(0x210000c,0x40,a6,((undefined1 *)(unsigned)0x8c4aa4f0)));
              if (cVar18 == '\0') {
                in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(undefined4)(*(undefined8 *)(unsigned)(unsigned)0x8c275970))
                ;
              }
              else {
                in_xd2 = CONCAT44((*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c275970)+4)),(undefined4)(*(undefined8 *)(unsigned)(unsigned)0x8c275970));
                (*(undefined4 *)(unsigned)(unsigned)0x8c278744) = (*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c275970)+4));
              }
              (*(undefined4 *)(unsigned)(unsigned)0x8c278740) = (undefined4)(*(undefined8 *)(unsigned)(unsigned)0x8c275970);
              ar7_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), FUN_8c236718(uVar5,uVar8,a6,ar7_00));
            }
            dVar14 = in_dr4;
            if (puVar6 == (undefined *)(unsigned)0x41) {
              if (cVar18 == '\0') {
                dVar14 = 4.93198240478257e-315;
              }
            }
            else if (cVar18 == '\0') {
              dVar14 = 4.84909194419799e-315;
            }
            in_dr4 = in_xd14;
            if (ar5 == 0) {
              if (cVar18 == '\0') {
                in_dr4 = (double)(D2U(dVar14) & 0xffffffff);
              }
              uVar8 = ar6;
              puVar6 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), FUN_8c22b7a8(((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78)),ar6,uVar3,ar7_00));
              ar4_00 = puVar6;
              a6 = uVar3;
            }
            else {
              if (cVar18 == '\0') {
                in_dr4 = (double)(D2U(dVar14) & 0xffffffff);
              }
              uVar8 = ar6;
              puVar6 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), FUN_8c22bb70(((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78)),ar6,uVar3,ar7_00));
              ar4_00 = puVar6;
              a6 = uVar3;
            }
          }
        }
        else if (puVar6 == (undefined *)(unsigned)0x40) {
          if ((a6 & 0x40) == 0) {
            if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa2f0) == 0) {
              uVar5 = *(undefined4 *)(unsigned)(iVar4 + -0x73d8a574);
              uVar15 = a6;
              (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c237124(uVar5,0x40,a6,((undefined1 *)(unsigned)0x8c4aa4f0)));
              if ((a6 & 8) == 0) {
                pcVar12 = ((void *)0x8c236510);
              }
              else {
                pcVar12 = ((void *)0x8c2365e2);
              }
              ar7_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), (*(code *)xlat((unsigned long)pcVar12))(uVar5,uVar8,uVar15,ar7_00));
              if (ar5 != 0) goto LAB_8c2197ce;
LAB_8c2197d8:
              puVar2 = ((undefined1 *)(unsigned)0x8c275a88);
              goto LAB_8c2197de;
            }
            if ((a6 & 4) == 0) {
              if (cVar18 == '\0') {
                dVar14 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c27597c),(*(undefined4 *)(unsigned)(unsigned)0x8c27874c));
              }
              else {
                in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c278750),(*(undefined4 *)(unsigned)(unsigned)0x8c27874c));
                dVar14 = CONCAT44D((*(uint *)(unsigned)0x8c275980),(*(undefined4 *)(unsigned)(unsigned)0x8c27597c));
              }
              if (cVar17 == '\0') {
                in_dr2 = CONCAT44D(F32HI(dVar14) * F32LO(dVar14),
                                          SUB84(dVar14,0));
              }
              else {
                in_dr2 = dVar14 * dVar14;
              }
            }
            else if (cVar18 == '\0') {
              in_dr2 = (double)((ulonglong)uVar10 << 0x20);
            }
            else {
              in_xd2 = CONCAT44((*(uint *)(unsigned)0x8c275980),(*(undefined4 *)(unsigned)(unsigned)0x8c27597c));
            }
            uVar10 = a6;
            (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c237124(*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c275a88) + iVar4),0x40,a6,((undefined1 *)(unsigned)0x8c4aa4f0)));
            if ((a6 & 8) == 0) {
              pcVar12 = ((void *)0x8c236940);
            }
            else {
              pcVar12 = ((void *)0x8c236a2a);
            }
            ar7_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), (*(code *)xlat((unsigned long)pcVar12))(((undefined1 *)(fr0_ - 0x34)),uVar8,uVar10,ar7_00));
            if (ar5 == 0) goto LAB_8c219794;
LAB_8c219756:
            puVar2 = ((undefined1 *)(unsigned)0x8c276a88);
          }
          else {
            if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa2f0) == 0) {
              uVar5 = *(undefined4 *)(unsigned)(iVar4 + -0x73d8a574);
              uVar15 = a6;
              (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c237124(uVar5,0x40,a6,((undefined1 *)(unsigned)0x8c4aa4f0)));
              if ((a6 & 8) == 0) {
                ar7_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), FUN_8c23666c(uVar5,uVar8,uVar15,ar7_00));
              }
              else {
                ar7_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), FUN_8c236718(uVar5,uVar8,uVar15,ar7_00));
              }
              if (ar5 == 0) goto LAB_8c2197d8;
LAB_8c2197ce:
              puVar2 = ((undefined1 *)(unsigned)0x8c276a88);
LAB_8c2197de:
              uVar8 = ar6;
              puVar6 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((puVar2 + iVar4 + 0xc))))(((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78)),ar6,uVar3,ar7_00))
              ;
              ar4_00 = puVar6;
              a6 = uVar3;
              goto LAB_8c2197ea;
            }
            if ((a6 & 1) == 0) {
              if (cVar18 == '\0') {
                dVar14 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c27597c),(*(undefined4 *)(unsigned)(unsigned)0x8c27874c));
              }
              else {
                in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c278750),(*(undefined4 *)(unsigned)(unsigned)0x8c27874c));
                dVar14 = CONCAT44D((*(uint *)(unsigned)0x8c275980),(*(undefined4 *)(unsigned)(unsigned)0x8c27597c));
              }
              if (cVar17 == '\0') {
                in_dr2 = CONCAT44D(F32HI(dVar14) * F32LO(dVar14),
                                          SUB84(dVar14,0));
              }
              else {
                in_dr2 = dVar14 * dVar14;
              }
            }
            else if (cVar18 == '\0') {
              in_dr2 = (double)((ulonglong)uVar10 << 0x20);
            }
            else {
              in_xd2 = CONCAT44((*(uint *)(unsigned)0x8c275980),(*(undefined4 *)(unsigned)(unsigned)0x8c27597c));
            }
            uVar10 = a6;
            (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c237124(*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c275a88) + iVar4),0x40,a6,((undefined1 *)(unsigned)0x8c4aa4f0)));
            if ((a6 & 8) == 0) {
              if ((a6 & 2) == 0) {
                ar7_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), FUN_8c236d20(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c275990),uVar10,ar7_00));
              }
              else {
                ar7_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), FUN_8c236b3c(((undefined1 *)(fr0_ - 0x34)),uVar8,uVar10,ar7_00));
              }
            }
            else if ((a6 & 2) == 0) {
              ar7_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), FUN_8c236dd8(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c275990),uVar10,ar7_00));
            }
            else {
              ar7_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), FUN_8c236c38(((undefined1 *)(fr0_ - 0x34)),uVar8,uVar10,ar7_00));
            }
            if (ar5 != 0) goto LAB_8c219756;
LAB_8c219794:
            puVar2 = ((undefined1 *)(unsigned)0x8c275a88);
          }
          in_dr4 = in_xd14;
          if (cVar18 == '\0') {
            in_dr4 = (double)(ulonglong)uVar15;
          }
          uVar8 = ar6;
          puVar6 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((puVar2 + iVar4 + 8))))(((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78)),ar6,uVar3,ar7_00));
          ar4_00 = puVar6;
          a6 = uVar3;
        }
LAB_8c2197ea:
        puVar2 = puVar6;
        if (ar4_00 != (undefined *)(unsigned)0x0) {
          puVar2 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), FUN_8c2370dc(ar4_00,uVar8,a6,ar7_00));
        }
      }
      iVar13 = uVar1 - 1;
    }
    puVar11 = ((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x78)) + iVar13;
  } while( true );
}

__asm__(".globl _FUN_8c21908e\n.set _FUN_8c21908e, _FUN_8c21908e_def\n");
