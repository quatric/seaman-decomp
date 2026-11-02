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
undefined4 FUN_8c1fde30_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fde30";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 296; for (int i_ = 0; i_ < 296; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined *ar5_00;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *a7;
  int iVar8;
  int iVar9;
  
  iVar9 = ar4 * 0x148;
  if ((((undefined1 *)(unsigned)0x8c4783e2))[iVar9] != '\0') {
    ar5_00 = ((undefined1 *)(unsigned)0x8c273a74);
    uVar7 = ar6;
    uVar3 = ar7;
    if (s0 == 0) {
      *(undefined4 *)(unsigned)(iVar9 + -0x73b87bf0) = 1;
      uVar6 = libgcc_divide_helper_010468
                        (*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c273a80) + *(int *)(unsigned)(iVar9 + -0x73b87c1c) * 0x50),10);
      *(undefined4 *)(unsigned)(iVar9 + -0x73b87bec) = uVar6;
    }
    else {
      *(undefined4 *)(unsigned)(iVar9 + -0x73b87bf0) = 1;
      iVar4 = *(int *)(unsigned)(iVar9 + -0x73b87c1c) * 0x50;
      ar5_00 = ((undefined1 *)(unsigned)0x8c273a74) + iVar4;
      *(undefined4 *)(unsigned)(iVar9 + -0x73b87bec) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c273a80) + iVar4);
    }
    iVar4 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fd550(ar4,ar5_00,uVar7,uVar3));
    if ((iVar4 != 0) && ((((undefined1 *)(unsigned)0x8c4783e8))[iVar9] != '\0')) {
      iVar8 = ar4 * 0x200 + -0x73b82d14;
      (vsp = ((unsigned long)(fr0_ - 296)), memset(*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9),0,0x200,uVar3));
      uVar7 = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9);
      iVar4 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fbc44(ar4,*(undefined4 *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9) + 8),uVar7,uVar3));
      if (iVar4 < 0) {
        if (iVar4 == -0xc0) {
          return 0xffffff81;
        }
      }
      else {
        uVar6 = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9);
        iVar4 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fba98(ar4,uVar6,uVar7,uVar3));
        if (-1 < iVar4) {
          iVar4 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c200cf4(((undefined1 *)(unsigned)0x8c4783e0) + iVar9,uVar6,uVar7,uVar3));
          if (iVar4 < 0) {
            return 0xffffff83;
          }
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9) + 0x30) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9) + 0x1c);
          (vsp = ((unsigned long)(fr0_ - 296)), memset(*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9),0,0x200,uVar3));
          (vsp = ((unsigned long)(fr0_ - 296)), memset(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9) + 0x10,0x20,0x20,uVar3));
          for (iVar4 = 0; iVar4 < 0x20; iVar4 = iVar4 + 1) {
            uVar1 = *ar5;
            ar5 = ar5 + 1;
            *(undefined1 *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9) + iVar4 + 0x10) = uVar1;
          }
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c200bfc(((undefined1 *)(fr0_ - 0x28)),ar7,0x20,uVar3));
          puVar5 = (undefined1 *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9) + 0x30);
          a7 = ((undefined1 *)(fr0_ - 0x28));
          for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
            uVar1 = *a7;
            a7 = a7 + 1;
            *puVar5 = uVar1;
            puVar5 = puVar5 + 1;
          }
          iVar4 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9);
          uVar7 = *(undefined4 *)(unsigned)(iVar4 + 0xc);
          uVar3 = *(undefined4 *)(unsigned)(iVar4 + 0x14);
          (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(undefined4 *)(unsigned)(unsigned)0x8c4783dc) + 0x10))))
                    (*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9),0x42,*(undefined4 *)(unsigned)(iVar4 + 4),a7));
          *(char *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9) + 0x4e) = (char)ar6;
          *(undefined1 *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9) + 0x4f) = 0;
          (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(undefined4 *)(unsigned)(unsigned)0x8c4783dc) + 0x10))))
                    (*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9),0x40,
                     *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9)),a7));
          (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(undefined4 *)(unsigned)(unsigned)0x8c4783dc) + 0x10))))(*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9),0x4a,uVar3,a7));
          (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(undefined4 *)(unsigned)(unsigned)0x8c4783dc) + 0x10))))(*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9),0x46,uVar7,a7));
          (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(undefined4 *)(unsigned)(unsigned)0x8c4783dc) + 0x10))))
                    (*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9),0x4c,
                     *(undefined4 *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9) + 0x18),a7));
          (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(undefined4 *)(unsigned)(unsigned)0x8c4783dc) + 0x10))))
                    (*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9),0x48,
                     *(undefined4 *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9) + 0x10),a7));
          (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(undefined4 *)(unsigned)(unsigned)0x8c4783dc) + 0x10))))
                    (*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9),0x50,
                     *(undefined4 *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9) + 0x1c),a7));
          (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(undefined4 *)(unsigned)(unsigned)0x8c4783dc) + 0x10))))
                    (*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9),0x52,
                     *(undefined4 *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9) + 0x20),a7));
          (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(undefined4 *)(unsigned)(unsigned)0x8c4783dc) + 0x10))))
                    (*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9),0x54,
                     *(undefined4 *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9) + 0x34),a7));
          (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(undefined4 *)(unsigned)(unsigned)0x8c4783dc) + 0x10))))
                    (*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9),0x56,
                     *(undefined4 *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9) + 0x38),a7));
          (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(undefined4 *)(unsigned)(unsigned)0x8c4783dc) + 0x10))))
                    (*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9),0x44,
                     *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9)),a7));
          (vsp = ((unsigned long)(fr0_ - 296)), memset(iVar8,0,0x200,a7));
          iVar4 = 0;
          while( true ) {
            if (*((int *)(unsigned long)*(unsigned *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9)) <= iVar4) {
              uVar7 = 0;
              iVar4 = *(int *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9) + 0x18) << 9;
              (vsp = ((unsigned long)(fr0_ - 296)), memset(*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478408) + iVar9),0,iVar4,a7));
              (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c200226(ar4,uVar7,iVar4,a7));
              (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c20099e(ar4,*(undefined4 *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9) + 8),0xfffa,a7));
              for (iVar4 = 0; iVar4 < *(int *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9) + 0x10);
                  iVar4 = iVar4 + 1) {
                (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c20099e(ar4,*(int *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9) + 0xc) + iVar4,0xfffa,a7));
              }
              uVar7 = 0xfffa;
              iVar4 = *(int *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9) + 8);
              (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c20099e(ar4,iVar4,0xfffa,a7));
              for (iVar8 = 0; iVar8 < *(int *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9) + 0x10);
                  iVar8 = iVar8 + 1) {
                uVar7 = 0xfffa;
                iVar4 = *(int *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar9) + 0xc) + iVar8;
                (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c20099e(ar4,iVar4,0xfffa,a7));
              }
              (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c2007f0(ar4,iVar4,uVar7,a7));
              uVar7 = 0x55;
              uVar3 = 0x10;
              (vsp = ((unsigned long)(fr0_ - 296)), memset(*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9),0x55,0x10,a7));
              (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c20065a(ar4,uVar7,uVar3,a7));
              uVar7 = 0;
              uVar3 = 0x10;
              (vsp = ((unsigned long)(fr0_ - 296)), memset(*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar9),0,0x10,a7));
              (((undefined1 *)(unsigned)0x8c4783eb))[iVar9] = 0;
              (((undefined1 *)(unsigned)0x8c4783ec))[iVar9] = 0;
              (((undefined1 *)(unsigned)0x8c4783ea))[iVar9] = 0;
              uVar7 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c200a00(ar4,uVar7,uVar3,a7));
              return uVar7;
            }
            if (s0 == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fbc44(ar4,iVar4,iVar8,a7));
            }
            if (iVar2 == -0xff) break;
            if (iVar2 == -0xc0) {
              uVar7 = 0xffff;
            }
            else {
              uVar7 = 0xfffc;
            }
            (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c20099e(ar4,iVar4,uVar7,a7));
            iVar4 = iVar4 + 1;
          }
        }
      }
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1fde30\n.set _FUN_8c1fde30, _FUN_8c1fde30_def\n");
