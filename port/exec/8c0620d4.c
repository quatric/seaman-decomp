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
int FUN_8c0620d4_def(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0620d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int ar6_00;
  char cVar6;
  int iVar7;
  float fVar8;
  undefined8 in_dr0 = 0;
  float fVar9;
  code *pcVar10;
  char cVar11;
  char cVar12;
  
  fVar8 = F32HI(in_dr0);
  cVar12 = '\0';
  cVar11 = '\0';
  iVar7 = 0;
  cVar6 = '\0';
  ar6_00 = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(*(undefined4 *)(unsigned)(ar6 + 0x18),ar5,ar6,ar7));
  uVar5 = 0x3c;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar1 & 0xffff,0x3c,ar6_00,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_a0_035724(*(undefined4 *)(unsigned)(ar6 + 0x18),uVar5,ar6_00,ar7));
  if ((char)uVar2 == '\x02') {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c340(*(int *)(unsigned)(ar6 + 4) + 0x90,uVar5,ar6_00,ar7));
    if (iVar3 < 0x28) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,uVar5,ar6_00,ar7));
      if (cVar12 == '\0') {
        fVar9 = 21.0;
      }
      else {
        fVar8 = 21.0;
        fVar9 = 2.46629e-43;
      }
      if (cVar11 == '\0' && fVar9 < fVar8) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,uVar5,ar6_00,ar7));
        if (cVar12 == '\0') {
          fVar8 = 25.0;
        }
        else {
          fVar9 = 25.0;
          fVar8 = 5.49309e-43;
        }
        if (cVar11 == '\0' && fVar9 < fVar8) {
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x188))))(ar5,uVar5,ar6_00,ar7));
          if (cVar12 == '\0') {
            pcVar10 = (code *)0x42a60000;
          }
          else {
            fVar8 = 83.0;
            pcVar10 = ((void *)0x8c03598c);
          }
          if ((cVar11 == '\0' && (float)(uint)pcVar10 < fVar8) &&
             (iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_40_03598c(*(undefined4 *)(unsigned)(ar6 + 0xc),uVar5,ar6_00,ar7)), iVar3 == 0))
          {
            cVar6 = '\x01';
          }
        }
      }
    }
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_a0_035724(*(undefined4 *)(unsigned)(ar6 + 0x18),uVar5,ar6_00,ar7));
    if ((char)uVar2 == '\x03') {
      cVar6 = '\x01';
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(*(undefined4 *)(unsigned)(ar6 + 4),uVar5,ar6_00,ar7));
  iVar3 = 3;
  if ((((3 < (short)uVar2) && (iVar3 = (int)cVar6, iVar3 == 1)) &&
      (iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(*(undefined4 *)(unsigned)(ar6 + 4),uVar5,ar6_00,ar7)), iVar3 == -1)) &&
     (iVar3 = 0xf, 0xf < uVar1)) {
    for (iVar3 = 0; iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,5,ar6_00,ar7)), iVar3 < iVar4;
        iVar3 = iVar3 + 1) {
      uVar2 = 5;
      ar6_00 = iVar3;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,5,iVar3,ar7));
      iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar4 + 8) + 0xb4))))(iVar4,uVar2,ar6_00,ar7));
      if (iVar4 == 1) {
        uVar2 = 5;
        ar6_00 = iVar3;
        iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,5,iVar3,ar7));
        iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar4 + 8) + 0x114))))(iVar4,uVar2,ar6_00,ar7));
        if ((iVar4 == 7) &&
           (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(*(undefined4 *)(unsigned)(ar6 + 4),uVar2,ar6_00,ar7)), 3 < (short)uVar2)) {
          iVar7 = iVar7 + 1;
        }
      }
    }
    iVar3 = 1;
    if (1 < iVar7) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c06288c(*(undefined4 *)(unsigned)(ar6 + 0xc),0,ar6_00,ar7));
      uVar2 = 0;
      iVar7 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c06288c(*(undefined4 *)(unsigned)(ar6 + 0xc),0,ar6_00,ar7));
      if ((iVar7 == 0) && (*(int *)(unsigned)(ar4 + 0x40) == 0)) {
        uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x148))))(ar5,uVar2,ar6_00,ar7));
        iVar7 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_ac_062880(uVar5,uVar2,ar6_00,ar7));
        if (iVar7 == 4) {
          uVar5 = *(undefined4 *)(unsigned)(ar6 + 8);
          iVar7 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_178_035734(uVar5,uVar2,ar6_00,ar7));
          if (iVar7 == 0) {
            uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), rand(uVar5,uVar2,ar6_00,ar7));
            uVar5 = 0x1e;
            iVar7 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar2,0x1e,ar6_00,ar7));
            if ((iVar7 == 1) &&
               (iVar7 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_062878(*(undefined4 *)(unsigned)(ar6 + 0xc),uVar5,ar6_00,ar7)), iVar7 == 1)
               ) {
              *(undefined4 *)(unsigned)(ar4 + 0x38) = 1;
              (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c062054(*(undefined4 *)(unsigned)(ar6 + 0xc),0,1,ar7));
              ar6_00 = 0;
              (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c062054(*(undefined4 *)(unsigned)(ar6 + 0xc),1,0,ar7));
              *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
              *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
              *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
              uVar2 = 0;
              iVar7 = *(int *)(unsigned)(ar6 + 4) + 0x90;
              (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce10(iVar7,0,ar6_00,ar7));
              uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), rand(iVar7,uVar2,ar6_00,ar7));
              uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar2,3,ar6_00,ar7));
              (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c062048(*(undefined4 *)(unsigned)(ar6 + 0xc),uVar2,ar6_00,ar7));
              iVar7 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_ac_062880(*(undefined4 *)(unsigned)(ar6 + 0xc),uVar2,ar6_00,ar7));
              if (iVar7 == 0) {
                *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x23;
                *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x23;
                (*(undefined1 *)(unsigned)0x8c136908) = 0x23;
                *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x21;
                (*(undefined1 *)(unsigned)0x8c13690c) = 0x21;
                *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x36;
                (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
              }
              else if (iVar7 == 1) {
                *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x27;
                *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x27;
                (*(undefined1 *)(unsigned)0x8c136908) = 0x27;
                *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x25;
                (*(undefined1 *)(unsigned)0x8c13690c) = 0x25;
                *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x36;
                (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
              }
              else if (iVar7 == 2) {
                *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x32;
                *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x32;
                (*(undefined1 *)(unsigned)0x8c136908) = 0x32;
                *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x34;
                (*(undefined1 *)(unsigned)0x8c13690c) = 0x34;
                *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x36;
                (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
              }
            }
          }
        }
      }
      uVar2 = 0;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c06288c(*(undefined4 *)(unsigned)(ar6 + 0xc),0,ar6_00,ar7));
      if ((((iVar3 == 1) &&
           (iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_178_035734(*(undefined4 *)(unsigned)(ar6 + 8),uVar2,ar6_00,ar7)), iVar3 == 0)) &&
          (iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c06288c(*(undefined4 *)(unsigned)(ar6 + 0xc),1,ar6_00,ar7)), iVar3 == 0)) &&
         (iVar3 = *(int *)(unsigned)(ar4 + 0x40), iVar3 == 0)) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce10(*(int *)(unsigned)(ar6 + 4) + 0x90,0,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x38) = 1;
        uVar5 = 1;
        uVar2 = 1;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c062054(*(undefined4 *)(unsigned)(ar6 + 0xc),1,1,ar7));
        *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_ac_062880(*(undefined4 *)(unsigned)(ar6 + 0xc),uVar2,uVar5,ar7));
        if (iVar3 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x24;
          *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x24;
          (*(undefined1 *)(unsigned)0x8c136908) = 0x24;
          *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x22;
          (*(undefined1 *)(unsigned)0x8c13690c) = 0x22;
          *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x36;
          iVar3 = 0xa4;
          (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
        }
        else if (iVar3 == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x28;
          *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x28;
          (*(undefined1 *)(unsigned)0x8c136908) = 0x28;
          *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x26;
          (*(undefined1 *)(unsigned)0x8c13690c) = 0x26;
          *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x36;
          iVar3 = 0xa4;
          (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
        }
        else if (iVar3 == 2) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x33;
          *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x33;
          (*(undefined1 *)(unsigned)0x8c136908) = 0x33;
          *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x35;
          (*(undefined1 *)(unsigned)0x8c13690c) = 0x35;
          *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x36;
          iVar3 = 0xa4;
          (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
        }
      }
    }
  }
  return iVar3;
}

__asm__(".globl _FUN_8c0620d4\n.set _FUN_8c0620d4, _FUN_8c0620d4_def\n");
