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
undefined4 FUN_8c0cd3c8_def(int ar4,int ar5,double *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0cd3c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int a6;
  undefined4 uVar1;
  undefined4 uVar2;
  uint ar4_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *a4;
  code *pcVar6;
  undefined1 *a5;
  double *ar6_00;
  ulonglong in_dr0 = 0;
  double dVar7;
  double in_dr2 = 0;
  undefined4 uVar8;
  double dVar9;
  float fVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar8 = 0;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x44)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0b9d14(ar5,&(*(ushort *)(fr0_ - 0x34)),ar6_00,ar7));
  *(undefined2 *)(unsigned)(ar5 + 0x8c) = *(undefined2 *)(unsigned)((int)ar6 + 0x14);
  *(undefined2 *)(unsigned)(ar5 + 0x8e) = *(undefined2 *)(unsigned)((int)ar6 + 0x16);
  *(undefined2 *)(unsigned)(ar5 + 0x90) = *(undefined2 *)(unsigned)(ar6 + 3);
  *(undefined2 *)(unsigned)(ar5 + 0x92) = *(undefined2 *)(unsigned)((int)ar6 + 0x1a);
  *(undefined2 *)(unsigned)(ar5 + 0x94) = *(undefined2 *)(unsigned)((int)ar6 + 0x1c);
  *(undefined2 *)(unsigned)(ar5 + 0x96) = *(undefined2 *)(unsigned)((int)ar6 + 0x1e);
  *(undefined2 *)(unsigned)(ar5 + 0x98) = *(undefined2 *)(unsigned)(ar6 + 4);
  *(undefined2 *)(unsigned)(ar5 + 0x9a) = *(undefined2 *)(unsigned)((int)ar6 + 0x22);
  *(undefined2 *)(unsigned)(ar5 + 0x9c) = *(undefined2 *)(unsigned)((int)ar6 + 0x24);
  *(undefined2 *)(unsigned)(ar5 + 0x9e) = *(undefined2 *)(unsigned)((int)ar6 + 0x26);
  *(undefined4 *)(unsigned)(ar5 + 0xa0) = *(undefined4 *)(unsigned)(ar6 + 0x15);
  a6 = *(int *)(unsigned)((int)ar6 + 0xac);
  *(undefined2 *)(unsigned)(ar5 + 0xa2) = *(undefined2 *)(unsigned)(ar6 + 5);
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c1f826c(&(*(ushort *)(fr0_ - 0x34)),&(*(int *)(fr0_ - 0x48)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c1f826c(ar5 + 0x8c,&(*(int *)(fr0_ - 0x4c)),ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_010284((*(int *)(fr0_ - 0x48)) - (*(int *)(fr0_ - 0x4c)),0xe10,ar6_00,ar7));
  *(short *)(unsigned)(ar5 + 0xae) = (short)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_0103d0((*(int *)(fr0_ - 0x48)) - (*(int *)(fr0_ - 0x4c)),0xe10,ar6_00,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_010284(uVar1,0x3c,ar6_00,ar7));
  *(short *)(unsigned)(ar5 + 0xb0) = (short)uVar2;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_0103d0(uVar1,0x3c,ar6_00,ar7));
  *(short *)(unsigned)(ar5 + 0xb2) = (short)uVar1;
  if (((((*(ushort *)(fr0_ - 0x34)) == *(ushort *)(unsigned)(ar5 + 0x8c)) && ((*(byte *)(fr0_ - 0x32)) == *(byte *)(unsigned)(ar5 + 0x8e))) &&
      ((*(byte *)(fr0_ - 0x31)) == *(byte *)(unsigned)(ar5 + 0x8f))) && (7 < *(ushort *)(unsigned)(ar5 + 0xae))) {
    *(short *)(unsigned)(ar5 + 0xa2) = *(short *)(unsigned)(ar5 + 0xa2) + 1;
  }
  else if ((*(ushort *)(unsigned)(ar5 + 0xae) < 0x18) &&
          (((*(byte *)(unsigned)(ar5 + 0x8f) < (*(byte *)(fr0_ - 0x31)) || (*(byte *)(unsigned)(ar5 + 0x8e) < (*(byte *)(fr0_ - 0x32)))) ||
           (*(ushort *)(unsigned)(ar5 + 0x8c) < (*(ushort *)(fr0_ - 0x34)))))) {
    *(short *)(unsigned)(ar5 + 0xa2) = *(short *)(unsigned)(ar5 + 0xa2) + 1;
  }
  else if (0x17 < *(ushort *)(unsigned)(ar5 + 0xae)) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_0101e4((uint)*(ushort *)(unsigned)(ar5 + 0xae),0x18,ar6_00,ar7));
    ar6_00 = (double *)(unsigned)0xa2;
    *(short *)(unsigned)(ar5 + 0xa2) = *(short *)(unsigned)(ar5 + 0xa2) + (short)uVar1;
  }
  pcVar6 = (code *)((int)ar6 + 0x30f4);
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0fa334(0x8c35468c,pcVar6,ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c01f528(0x8c3dd7dc,pcVar6,ar6_00,ar7));
  pcVar6 = (code *)((int)ar6 + 0x4104);
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c01e0a4(uVar1,pcVar6,ar6_00,ar7));
  if (*(byte *)(unsigned)(ar5 + 0xa0) < 3) {
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x160))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),pcVar6,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x164))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),pcVar6,ar6_00,ar7));
    iVar4 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x168))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),iVar4,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x16c))))
              (((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),*(undefined4 *)(unsigned)(ar6 + 0x37),ar6_00,ar7));
    ar6_00 = (double *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar6_00 + 0x2e))))(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),*(undefined4 *)(unsigned)(ar6 + 0x35),ar6_00,ar7));
    uVar1 = *(undefined4 *)(unsigned)((int)ar6 + 0x1ac);
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x174))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),uVar1,ar6_00,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x148))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),uVar1,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0e983c(uVar1,(code *)((int)ar6 + 0x14ac),ar6_00,ar7));
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      iVar5 = (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x104))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),iVar4,ar6_00,ar7));
      pcVar6 = (code *)((int)ar6 + iVar4 * 0x10 + 0x1bc);
      if (cVar13 == '\0') {
        *(undefined4 *)(unsigned)(iVar5 + 4) = *(undefined4 *)(unsigned)pcVar6;
      }
      else {
        *(undefined8 *)(unsigned)(iVar5 + 4) = *(undefined8 *)(unsigned)pcVar6;
      }
      if (cVar13 == '\0') {
        *(undefined4 *)(unsigned)(iVar5 + 8) = *(undefined4 *)(unsigned)(ar6 + iVar4 * 2 + 0x38);
      }
      else {
        *(double *)(unsigned)(iVar5 + 8) = ar6[iVar4 * 2 + 0x38];
      }
      pcVar6 = (code *)((int)ar6 + iVar4 * 0x10 + 0x1c4);
      if (cVar13 == '\0') {
        *(undefined4 *)(unsigned)(iVar5 + 0xc) = *(undefined4 *)(unsigned)pcVar6;
      }
      else {
        *(undefined8 *)(unsigned)(iVar5 + 0xc) = *(undefined8 *)(unsigned)pcVar6;
      }
      if (iVar4 == 0) {
        ar6_00 = (double *)(unsigned)(iVar5 + 4);
        if (cVar13 == '\0') {
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)(iVar5 + 4),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *(double *)(unsigned)(iVar5 + 4);
        }
        if (cVar13 == '\0') {
          dVar9 = CONCAT44D(0xc28983d7,(float)(int)(char)*(undefined4 *)(unsigned)((int)ar6 + 0x14ac));
        }
        else {
          dVar9 = 4.6046138430016596e-232;
        }
        if (cVar12 == '\0') {
          in_dr2 = CONCAT44D(F32HI(in_dr2) +
                                    F32LO(dVar9) * F32HI(dVar9),
                                    SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + dVar9 * dVar9;
        }
        if (cVar13 == '\0') {
          *(int *)(unsigned)ar6_00 = (int)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          *ar6_00 = in_dr2;
        }
      }
    }
    for (iVar4 = 0; iVar4 < (int)(uint)(byte)*(undefined4 *)(unsigned)((int)ar6 + 0x1b4); iVar4 = iVar4 + 1) {
      if (*(int *)(unsigned)((int)ar6 + iVar4 * 0xf0 + 0x204) != -1) {
        ar6_00 = (double *)(unsigned)(ar5 + 0xac);
        iVar5 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0cea38(ar4,(code *)((int)ar6 + iVar4 * 0xf0 + 0x1ec),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar5 + 8) + 0xa0))))(iVar5,ar6 + iVar4 * 0x1e + 0x43,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x4c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),iVar5,ar6_00,ar7));
      }
    }
    pcVar6 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x178));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)pcVar6))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),pcVar6,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x160))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),pcVar6,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x17c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),pcVar6,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x164))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),pcVar6,ar6_00,ar7));
    if (*(int *)(unsigned)(ar6 + 0x37) == 1) {
      pcVar6 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x188));
      (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)pcVar6))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),pcVar6,ar6_00,ar7));
      pcVar6 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8));
      (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)pcVar6 + 0x168))))(pcVar6,pcVar6,ar6_00,ar7));
    }
  }
  else {
    ar4_00 = *(uint *)(unsigned)((int)ar6 + 0x278c);
    pcVar6 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x144));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)pcVar6))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),pcVar6,ar6_00,ar7));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_0103d0(ar4_00,7,ar6_00,ar7));
    if (iVar4 == 3) {
      ar4_00 = uVar3 - ar4_00;
      if (uVar3 < ar4_00) {
        ar4_00 = uVar3 - 1;
      }
    }
    else if (iVar4 == 4) {
      if (((*(byte *)(fr0_ - 0x32)) < 6) || (9 < (*(byte *)(fr0_ - 0x32)))) {
        if (((*(byte *)(fr0_ - 0x32)) != 0) && ((*(byte *)(fr0_ - 0x32)) < 6)) {
          ar4_00 = (uVar3 >> 1) + (uVar3 >> 2);
        }
      }
      else {
        ar4_00 = uVar3 >> 2;
      }
    }
    else if (iVar4 == 5) {
      if (cVar12 == '\0') {
        dVar9 = CONCAT44D((float)(int)ar4_00,uVar8);
      }
      else {
        dVar9 = (double)(int)ar4_00;
      }
      dVar7 = (double)(in_dr0 & 0xffffffff);
      fVar10 = F32HI(dVar9);
      if (cVar12 == '\0') {
        bVar11 = fVar10 < 0.0;
      }
      else {
        bVar11 = dVar9 < dVar7;
      }
      if (bVar11) {
        if (cVar13 == '\0') {
          dVar7 = CONCAT44D(0x4f800000,(int)in_dr0);
        }
        else {
          dVar7 = 0.000878906487741915;
        }
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(fVar10 + F32HI(dVar7),SUB84(dVar9,0));
        }
        else {
          dVar9 = dVar9 + dVar7;
        }
      }
      if (cVar13 == '\0') {
        dVar7 = CONCAT44D(0x3f4ccccd,SUB84(dVar7,0));
      }
      else {
        dVar7 = 3.533694962840277e+72;
      }
      if (cVar12 == '\0') {
        dVar9 = CONCAT44D(F32HI(dVar9) *
                                 F32HI(dVar7),SUB84(dVar9,0));
      }
      else {
        dVar9 = dVar9 * dVar7;
      }
      if (cVar13 == '\0') {
        dVar7 = CONCAT44D(0x4f000000,SUB84(dVar7,0));
      }
      else {
        dVar7 = -9.046259633960061e+74;
      }
      fVar10 = F32HI(dVar9);
      if (cVar12 == '\0') {
        bVar11 = F32HI(dVar7) < fVar10;
      }
      else {
        bVar11 = dVar7 < dVar9;
      }
      if (bVar11) {
        if (cVar13 == '\0') {
          dVar7 = CONCAT44D(0xcf800000,SUB84(dVar7,0));
        }
        else {
          dVar7 = 1.0325168201761946e+181;
        }
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(fVar10 + F32HI(dVar7),SUB84(dVar9,0));
        }
        else {
          dVar9 = dVar9 + dVar7;
        }
      }
      if (cVar12 == '\0') {
        ar4_00 = (uint)F32HI(dVar9);
      }
      else {
        ar4_00 = (uint)dVar9;
      }
    }
    else {
      ar4_00 = 0;
    }
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0xc4))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar4_00,ar6_00,ar7));
    for (iVar4 = 0; pcVar6 = (code *)(uint)(byte)*(undefined4 *)(unsigned)(ar6 + 0x4f2), iVar4 < (int)pcVar6;
        iVar4 = iVar4 + 1) {
      if (*(int *)(unsigned)((int)ar6 + iVar4 * 0xf0 + 0x27ac) != -1) {
        uVar1 = *(undefined4 *)(unsigned)(ar6 + iVar4 * 0x1e + 0x4fd);
        iVar5 = (vsp = ((unsigned long)(fr0_ - 80)), s_Shell_0fef9c(0x8c3eb324,*(undefined4 *)(unsigned)((int)ar6 + iVar4 * 0xf0 + 0x27ac),uVar1,
                               ar7));
        (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar5 + 8) + 0x104))))
                  (iVar5,(code *)((int)ar6 + iVar4 * 0xf0 + 0x2794),uVar1,ar7));
        ar6_00 = ((double *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(iVar5 + 8) + 0xa0));
        (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)(ar6_00)))(iVar5,ar6 + iVar4 * 0x1e + 0x4f8,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x4c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),iVar5,ar6_00,ar7));
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x168))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),pcVar6,ar6_00,ar7));
  pcVar6 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x148));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)pcVar6))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),pcVar6,ar6_00,ar7));
  pcVar6 = (code *)((int)ar6 + 0x2784);
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0e983c(uVar1,pcVar6,ar6_00,ar7));
  for (iVar4 = 0; iVar4 < (int)(uint)(byte)*(undefined4 *)(unsigned)(ar6 + 0x298); iVar4 = iVar4 + 1) {
    if (*(int *)(unsigned)((int)ar6 + iVar4 * 0xf0 + 0x14dc) != -1) {
      if ((*(int *)(unsigned)((int)ar6 + iVar4 * 0xf0 + 0x14dc) == 0xd) ||
         (*(int *)(unsigned)((int)ar6 + iVar4 * 0xf0 + 0x14dc) == 0xc)) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c431a54) = 1;
      }
      ar6_00 = (double *)(unsigned)(ar5 + 0xac);
      pcVar6 = (code *)(vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0cea38(ar4,(code *)((int)ar6 + iVar4 * 0xf0 + 0x14c4),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(pcVar6 + 8) + 0xa0))))(pcVar6,ar6 + iVar4 * 0x1e + 0x29e,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x4c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),pcVar6,ar6_00,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x188))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),pcVar6,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x168))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),pcVar6,ar6_00,ar7));
  if (*(int *)(unsigned)(ar6 + 0x19) != -1) {
    iVar5 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0cea38(ar4,ar6 + 0x16,ar5 + 0xac,ar7));
    a5 = ((undefined1 *)(fr0_ - 0x44));
    iVar4 = a6;
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar5 + 8) + 0x150))))(iVar5,a5,a6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c036988(iVar5,a5,iVar4,ar7));
    a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + a6 * 4 + 8));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x50))))(a4,iVar5,iVar4,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,0xffffffff,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0cd3c8\n.set _FUN_8c0cd3c8, _FUN_8c0cd3c8_def\n");
