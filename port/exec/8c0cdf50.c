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
undefined4 FUN_8c0cdf50_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0cdf50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 280; for (int i_ = 0; i_ < 280; i_++) z_[i_] = 0; }
  short sVar1;
  short sVar2;
  int *ar4_00;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *a5;
  int *piVar9;
  code *pcVar10;
  code *a7;
  undefined4 extraout_fr1 = 0;
  char cVar11;
  
  cVar11 = '\0';
  pcVar10 = ((void *)0x8c0c5db0);
  ar4_00 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 280)), FUN_8c0c5db0(*(undefined4 *)(unsigned)(ar5 + 0x7cc),((void *)0x8c0c5db0),ar6,ar7));
  pcVar3 = (code *)(vsp = ((unsigned long)(fr0_ - 280)), get_field_d0_0c51fc(*(undefined4 *)(unsigned)(ar5 + 0x7cc),pcVar10,ar6,ar7));
  (*(unsigned *)(fr0_ - 0x44) = (unsigned)(unsigned long)((code *)(vsp = ((unsigned long)(fr0_ - 280)), get_field_128_0ce914(*(undefined4 *)(unsigned)(ar5 + 0x7cc),pcVar10,ar6,ar7))));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 280)), get_field_24_05c284(ar4_00,pcVar10,ar6,ar7));
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x50)) = 0;
  }
  else {
    (*(unsigned *)(fr0_ - 0x44) = (unsigned)(unsigned long)((code *)0x0));
    (*(undefined4 *)(fr0_ - 0x50)) = extraout_fr1;
  }
  (*(undefined4 *)(fr0_ - 0x48)) = 0;
  (*(undefined4 *)(fr0_ - 0x4c)) = 0;
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),pcVar10,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_ctor_zero(((int *)(fr0_ - 0x40)),pcVar10,ar6,ar7));
  (*(short *)(fr0_ - 0x114)) = 0;
  (*(short *)(fr0_ - 0x116)) = 0;
  (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x148))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),pcVar10,ar6,ar7));
  uVar5 = (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x148))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),pcVar10,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x148))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),pcVar10,ar6,ar7));
  a7 = (code *)&(*(undefined4 *)(fr0_ - 0x50));
  piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + (int)pcVar3 * 4 + 8));
  (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x13c))))(piVar9,&(*(undefined4 *)(fr0_ - 0x48)),&(*(undefined4 *)(fr0_ - 0x4c)),a7));
  a5 = ((int *)(fr0_ - 0x40));
  piVar9 = ar4_00;
  pcVar10 = pcVar3;
  (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4_00[2] + 0x150))))(ar4_00,a5,pcVar3,a7));
  if (iVar4 != 0xe) {
    piVar9 = ar4_00;
    (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c036988(ar4_00,a5,pcVar10,a7));
  }
  if (pcVar3 == (code *)0x0) {
    if ((iVar4 == 0xf) || (iVar4 == 0xd)) {
      iVar4 = (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x11c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),iVar4,pcVar10,a7));
      pcVar10 = (code *)0x1;
      if (iVar4 < 1) {
        piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8));
        (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x50))))(piVar9,ar4_00,1,a7));
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(unsigned)(ar4 + 8);
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44));
        (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c0c4cd8(ar4_00,a5,((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44)),a7));
        piVar9 = ar4_00;
      }
    }
    else if (iVar4 == 10) {
      iVar4 = (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x11c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),10,pcVar10,a7));
      if (iVar4 < 1) {
        if (((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44)) == (code *)0x1) {
          pcVar10 = ((void *)0x8c0c4dd0);
          (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c0c4dd0(ar4_00,uVar5,((void *)0x8c0c4dd0),a7));
        }
        piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8));
        (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x50))))(piVar9,ar4_00,pcVar10,a7));
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(unsigned)(ar4 + 8);
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44));
        (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c0c4cd8(ar4_00,a5,((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44)),a7));
        piVar9 = ar4_00;
      }
    }
    else if (iVar4 == 0xe) {
      iVar4 = (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x11c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),0xe,pcVar10,a7));
      if (iVar4 < 4) {
        piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8));
        (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x50))))(piVar9,ar4_00,pcVar10,a7));
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(unsigned)(ar4 + 8);
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44));
        (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c0c4cd8(ar4_00,a5,((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44)),a7));
        piVar9 = ar4_00;
      }
    }
    else {
      piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8));
      (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x50))))(piVar9,ar4_00,pcVar10,a7));
      a5 = ar4_00;
    }
  }
  else if (pcVar3 == (code *)0x1) {
    if ((iVar4 == 0xf) || (iVar4 == 0xd)) {
      iVar4 = (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x11c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),iVar4,pcVar10,a7));
      if (iVar4 < 1) {
        piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
        (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x50))))(piVar9,ar4_00,pcVar10,a7));
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(unsigned)(ar4 + 8);
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44));
        (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c0c4cd8(ar4_00,a5,((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44)),a7));
        piVar9 = ar4_00;
      }
    }
    else if (iVar4 == 10) {
      a5 = (int *)(unsigned)0xa;
      uVar6 = (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x11c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),10,pcVar10,a7));
      for (sVar2 = 0; sVar2 < (short)uVar6; sVar2 = sVar2 + 1) {
        pcVar10 = (code *)(int)sVar2;
        a5 = (int *)(unsigned)0xa;
        iVar4 = (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x100))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),10,pcVar10,a7));
        uVar7 = (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar4 + 8) + 0x148))))(iVar4,a5,pcVar10,a7));
        sVar1 = (short)uVar7;
        if ((sVar1 == 0) || (sVar1 == 1)) {
          (*(short *)(fr0_ - 0x114)) = (*(short *)(fr0_ - 0x114)) + 1;
        }
        else if (sVar1 == 3) {
          (*(short *)(fr0_ - 0x116)) = (*(short *)(fr0_ - 0x116)) + 1;
        }
      }
      piVar9 = ar4_00;
      uVar6 = (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4_00[2] + 0x148))))(ar4_00,a5,pcVar10,a7));
      sVar2 = (short)uVar6;
      if ((sVar2 == 0) || (sVar2 == 1)) {
        if (((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44)) == (code *)0x1) {
          piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
          (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x50))))(piVar9,ar4_00,pcVar10,a7));
          a5 = ar4_00;
        }
        else if (((*(short *)(fr0_ - 0x114)) < 4) &&
                (uVar6 = (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c035b50(uVar5,a5,pcVar10,a7)), (char)uVar6 < '\x04')) {
          if (((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44)) == (code *)0x3) {
            (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c09a540(uVar5,a5,pcVar10,a7));
          }
          piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
          (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x50))))(piVar9,ar4_00,pcVar10,a7));
          a5 = ar4_00;
        }
        else {
          a5 = (int *)(unsigned)(ar4 + 8);
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44));
          (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c0c4cd8(ar4_00,a5,((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44)),a7));
          piVar9 = ar4_00;
        }
      }
      else if (sVar2 == 3) {
        if (((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44)) == (code *)0x1) {
          piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
          (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x50))))(piVar9,ar4_00,pcVar10,a7));
          a5 = ar4_00;
        }
        else if (((*(short *)(fr0_ - 0x116)) < 4) &&
                (uVar6 = (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c035ca0(uVar5,a5,pcVar10,a7)), (char)uVar6 < '\x04')) {
          if (((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44)) == (code *)0x3) {
            (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c035c88(uVar5,a5,pcVar10,a7));
          }
          piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
          (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x50))))(piVar9,ar4_00,pcVar10,a7));
          a5 = ar4_00;
        }
        else {
          a5 = (int *)(unsigned)(ar4 + 8);
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44));
          (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c0c4cd8(ar4_00,a5,((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44)),a7));
          piVar9 = ar4_00;
        }
      }
    }
    else if (iVar4 == 0xe) {
      if (((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44)) == (code *)0x1) {
        piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
        (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x50))))(piVar9,ar4_00,pcVar10,a7));
        a5 = ar4_00;
      }
      else {
        iVar4 = (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x11c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),0xe,pcVar10,a7));
        if (iVar4 < 2) {
          piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
          (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x50))))(piVar9,ar4_00,pcVar10,a7));
          a5 = ar4_00;
        }
        else {
          a5 = (int *)(unsigned)(ar4 + 8);
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44));
          (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c0c4cd8(ar4_00,a5,((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44)),a7));
          piVar9 = ar4_00;
        }
      }
    }
    else {
      piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
      (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x50))))(piVar9,ar4_00,pcVar10,a7));
      a5 = ar4_00;
    }
  }
  else if (pcVar3 == (code *)0x2) {
    if ((iVar4 == 0xf) || (iVar4 == 0xd)) {
      iVar4 = (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x11c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),iVar4,pcVar10,a7));
      if (iVar4 < 1) {
        piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10));
        (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x50))))(piVar9,ar4_00,pcVar10,a7));
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(unsigned)(ar4 + 8);
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44));
        (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c0c4cd8(ar4_00,a5,((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44)),a7));
        piVar9 = ar4_00;
      }
    }
    else if (iVar4 == 10) {
      iVar4 = (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x11c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),10,pcVar10,a7));
      if (iVar4 < 1) {
        if (((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44)) == (code *)0x1) {
          (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c0c4dd0(ar4_00,uVar5,pcVar10,a7));
        }
        piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10));
        (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x50))))(piVar9,ar4_00,pcVar10,a7));
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(unsigned)(ar4 + 8);
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44));
        a7 = ((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44));
        (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c0c4cd8(ar4_00,a5,((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44)),((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44))));
        piVar9 = ar4_00;
      }
    }
    else if (iVar4 == 0xe) {
      iVar4 = (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x11c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),0xe,pcVar10,a7));
      if (iVar4 < 3) {
        piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10));
        (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x50))))(piVar9,ar4_00,pcVar10,a7));
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(unsigned)(ar4 + 8);
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44));
        (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c0c4cd8(ar4_00,a5,((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44)),a7));
        piVar9 = ar4_00;
      }
    }
    else {
      piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10));
      (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x50))))(piVar9,ar4_00,pcVar10,a7));
      a5 = ar4_00;
    }
  }
  else if (pcVar3 == (code *)0x3) {
    pcVar10 = (code *)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14));
    iVar8 = (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((pcVar10 + 0x118))))
                      (((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)),((code *)(unsigned long)*(unsigned *)(unsigned)(pcVar10 + 0x118)),pcVar10,a7));
    if (iVar8 < 0xc) {
      if ((iVar4 == 10) && (((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44)) == (code *)0x1)) {
        (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c0c4dd0(ar4_00,uVar5,pcVar10,a7));
      }
      piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14));
      (vsp = ((unsigned long)(fr0_ - 280)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x50))))(piVar9,ar4_00,pcVar10,a7));
      a5 = ar4_00;
    }
    else {
      a5 = (int *)(unsigned)(ar4 + 8);
      pcVar10 = ((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44));
      (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c0c4cd8(ar4_00,a5,((code *)(unsigned long)*(unsigned *)(fr0_ - 0x44)),a7));
      piVar9 = ar4_00;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c0c4e2c(piVar9,a5,pcVar10,a7));
  (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c0c4e48(piVar9,a5,pcVar10,a7));
  pcVar3 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((int *)(fr0_ - 0x40)),0xffffffff,((void *)0x8c022cb0),a7));
  uVar5 = (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,pcVar3,a7));
  return uVar5;
}

__asm__(".globl _FUN_8c0cdf50\n.set _FUN_8c0cdf50, _FUN_8c0cdf50_def\n");
