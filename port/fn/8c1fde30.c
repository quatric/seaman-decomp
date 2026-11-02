#include "../decls.h"
undefined4 FUN_8c1fde30_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7,int s0)

{
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
  undefined1 auStack_28 [12];
  
  iVar9 = ar4 * 0x148;
  if ((&DAT_8c4783e2)[iVar9] != '\0') {
    ar5_00 = &DAT_8c273a74;
    uVar7 = ar6;
    uVar3 = ar7;
    if (s0 == 0) {
      *(undefined4 *)(iVar9 + -0x73b87bf0) = 1;
      uVar6 = libgcc_divide_helper_010468
                        (*(undefined4 *)(&DAT_8c273a80 + *(int *)(iVar9 + -0x73b87c1c) * 0x50),10);
      *(undefined4 *)(iVar9 + -0x73b87bec) = uVar6;
    }
    else {
      *(undefined4 *)(iVar9 + -0x73b87bf0) = 1;
      iVar4 = *(int *)(iVar9 + -0x73b87c1c) * 0x50;
      ar5_00 = &DAT_8c273a74 + iVar4;
      *(undefined4 *)(iVar9 + -0x73b87bec) = *(undefined4 *)(&DAT_8c273a80 + iVar4);
    }
    iVar4 = FUN_8c1fd550(ar4,ar5_00,uVar7,uVar3);
    if ((iVar4 != 0) && ((&DAT_8c4783e8)[iVar9] != '\0')) {
      iVar8 = ar4 * 0x200 + -0x73b82d14;
      memset(*(undefined4 *)(&DAT_8c478400 + iVar9),0,0x200,uVar3);
      uVar7 = *(undefined4 *)(&DAT_8c478400 + iVar9);
      iVar4 = FUN_8c1fbc44(ar4,*(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 8),uVar7,uVar3);
      if (iVar4 < 0) {
        if (iVar4 == -0xc0) {
          return 0xffffff81;
        }
      }
      else {
        uVar6 = *(undefined4 *)(&DAT_8c4783fc + iVar9);
        iVar4 = FUN_8c1fba98(ar4,uVar6,uVar7,uVar3);
        if (-1 < iVar4) {
          iVar4 = FUN_8c200cf4(&DAT_8c4783e0 + iVar9,uVar6,uVar7,uVar3);
          if (iVar4 < 0) {
            return 0xffffff83;
          }
          *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x30) =
               *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x1c);
          memset(*(undefined4 *)(&DAT_8c478400 + iVar9),0,0x200,uVar3);
          memset(*(int *)(&DAT_8c478400 + iVar9) + 0x10,0x20,0x20,uVar3);
          for (iVar4 = 0; iVar4 < 0x20; iVar4 = iVar4 + 1) {
            uVar1 = *ar5;
            ar5 = ar5 + 1;
            *(undefined1 *)(*(int *)(&DAT_8c478400 + iVar9) + iVar4 + 0x10) = uVar1;
          }
          FUN_8c200bfc(auStack_28,ar7,0x20,uVar3);
          puVar5 = (undefined1 *)(*(int *)(&DAT_8c478400 + iVar9) + 0x30);
          a7 = auStack_28;
          for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
            uVar1 = *a7;
            a7 = a7 + 1;
            *puVar5 = uVar1;
            puVar5 = puVar5 + 1;
          }
          iVar4 = *(int *)(&DAT_8c4783fc + iVar9);
          uVar7 = *(undefined4 *)(iVar4 + 0xc);
          uVar3 = *(undefined4 *)(iVar4 + 0x14);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x42,*(undefined4 *)(iVar4 + 4),a7);
          *(char *)(*(int *)(&DAT_8c478400 + iVar9) + 0x4e) = (char)ar6;
          *(undefined1 *)(*(int *)(&DAT_8c478400 + iVar9) + 0x4f) = 0;
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x40,
                     **(undefined4 **)(&DAT_8c4783fc + iVar9),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))(*(undefined4 *)(&DAT_8c478400 + iVar9),0x4a,uVar3,a7);
          (**(code **)(_DAT_8c4783dc + 0x10))(*(undefined4 *)(&DAT_8c478400 + iVar9),0x46,uVar7,a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x4c,
                     *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x18),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x48,
                     *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x10),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x50,
                     *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x1c),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x52,
                     *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x20),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x54,
                     *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x34),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x56,
                     *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x38),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x44,
                     **(undefined4 **)(&DAT_8c4783fc + iVar9),a7);
          memset(iVar8,0,0x200,a7);
          iVar4 = 0;
          while( true ) {
            if (**(int **)(&DAT_8c4783fc + iVar9) <= iVar4) {
              uVar7 = 0;
              iVar4 = *(int *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x18) << 9;
              memset(*(undefined4 *)(&DAT_8c478408 + iVar9),0,iVar4,a7);
              FUN_8c200226(ar4,uVar7,iVar4,a7);
              FUN_8c20099e(ar4,*(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 8),0xfffa,a7);
              for (iVar4 = 0; iVar4 < *(int *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x10);
                  iVar4 = iVar4 + 1) {
                FUN_8c20099e(ar4,*(int *)(*(int *)(&DAT_8c4783fc + iVar9) + 0xc) + iVar4,0xfffa,a7);
              }
              uVar7 = 0xfffa;
              iVar4 = *(int *)(*(int *)(&DAT_8c4783fc + iVar9) + 8);
              FUN_8c20099e(ar4,iVar4,0xfffa,a7);
              for (iVar8 = 0; iVar8 < *(int *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x10);
                  iVar8 = iVar8 + 1) {
                uVar7 = 0xfffa;
                iVar4 = *(int *)(*(int *)(&DAT_8c4783fc + iVar9) + 0xc) + iVar8;
                FUN_8c20099e(ar4,iVar4,0xfffa,a7);
              }
              FUN_8c2007f0(ar4,iVar4,uVar7,a7);
              uVar7 = 0x55;
              uVar3 = 0x10;
              memset(*(undefined4 *)(&DAT_8c478400 + iVar9),0x55,0x10,a7);
              FUN_8c20065a(ar4,uVar7,uVar3,a7);
              uVar7 = 0;
              uVar3 = 0x10;
              memset(*(undefined4 *)(&DAT_8c478400 + iVar9),0,0x10,a7);
              (&DAT_8c4783eb)[iVar9] = 0;
              (&DAT_8c4783ec)[iVar9] = 0;
              (&DAT_8c4783ea)[iVar9] = 0;
              uVar7 = FUN_8c200a00(ar4,uVar7,uVar3,a7);
              return uVar7;
            }
            if (s0 == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = FUN_8c1fbc44(ar4,iVar4,iVar8,a7);
            }
            if (iVar2 == -0xff) break;
            if (iVar2 == -0xc0) {
              uVar7 = 0xffff;
            }
            else {
              uVar7 = 0xfffc;
            }
            FUN_8c20099e(ar4,iVar4,uVar7,a7);
            iVar4 = iVar4 + 1;
          }
        }
      }
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1fde30\n.set _FUN_8c1fde30, _FUN_8c1fde30_def\n");
