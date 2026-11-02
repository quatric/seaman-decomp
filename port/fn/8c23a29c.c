#include "../decls.h"
undefined4 FUN_8c23a29c_def(undefined4 ar4,int *ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  int ain0;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int ar5_00;
  int *piVar6;
  uint ar7_00;
  int ar4_00;
  int *ar4_01;
  int *ar6_00;
  int iStack_68;
  int iStack_5c;
  int iStack_58;
  undefined1 auStack_54 [44];
  int iStack_28;
  short sStack_24;
  short sStack_22;
  
  ar7_00 = 0xffffffff;
  piVar6 = ar5;
  FUN_8c25b5b4(ar4,ar5,ar6,ar7,ar4);
  FUN_8c238e8c(ar4,piVar6,ar6,ar7,ar4);
  FUN_8c238e98(&iStack_58,4,ar6,ar7);
  if (iStack_58 == 0x484d5650) {
    uVar5 = 8;
    FUN_8c238e98(&iStack_28,8,ar6,ar7);
    iVar1 = (int)sStack_22;
    ar5[1] = iVar1;
    uVar5 = FUN_8c238f02((int)sStack_24,uVar5,ar6,ar7);
    piVar6 = &iStack_28;
    FUN_8c239f84(ar5,uVar5,piVar6,ar7);
    FUN_8c238eba(0,0,piVar6,ar7);
    uVar5 = 1;
    iVar4 = iStack_28 + 8;
    FUN_8c238eba(iVar4,1,piVar6,ar7);
    FUN_8c23a078(iVar4,uVar5,piVar6,ar7);
    ar5[1] = iVar1;
    iStack_5c = 0;
    if (0 < sStack_22) {
      do {
        iVar1 = FUN_8c239150(ar5,iStack_5c,piVar6,ar7);
        iVar4 = iVar1 * 0xc;
        ar4_00 = *ar5 + iVar4;
        ar4_01 = (int *)(ar4_00 + 8);
        if ((*(uint *)(ar4_00 + 4) & 0x1000000) == 0) {
          ain0 = FUN_8c23a21c(iVar4,0x1000000,piVar6,ar7);
          iVar4 = DAT_8c277b0c;
          if (ain0 == 1) {
            ar6_00 = (int *)(*(uint *)(ar4_00 + 8) & 0x3ffffff);
            ar7_00 = *(uint *)(ar4_00 + 8) >> 0x1a;
            piVar6 = ar6_00;
            iStack_68 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,ar6_00,ar7);
            if (iStack_68 < 0) {
LAB_8c23a3b6:
              iVar2 = 2;
            }
            else {
              iVar4 = DAT_8c277b0c;
              piVar6 = ar6_00;
              ar7 = ar7_00;
              iVar2 = FUN_8c25a5c0(DAT_8c277b08,DAT_8c277b0c,ar6_00,ar7_00);
              if (-1 < iVar2) goto LAB_8c23a3ba;
              iVar2 = 0;
            }
          }
          else {
            ar6_00 = *(int **)(ar4_00 + 8);
            piVar6 = ar6_00;
            iStack_68 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,ar6_00,ar7);
            if (iStack_68 < 0) goto LAB_8c23a3b6;
LAB_8c23a3ba:
            iVar2 = 1;
          }
        }
        else {
          ar6_00 = (int *)(*(uint *)(iVar4 + *ar5 + 8) & 0x3ffffff);
          ar7_00 = *(uint *)(ar4_00 + 8) >> 0x1a;
          iVar4 = DAT_8c277b0c;
          piVar6 = ar6_00;
          iStack_68 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,ar6_00,ar7);
          if (iStack_68 < 0) {
            iVar2 = 2;
          }
          else {
            iVar4 = DAT_8c277b0c;
            piVar6 = ar6_00;
            ar7 = ar7_00;
            iVar2 = FUN_8c25a5c0(DAT_8c277b08,DAT_8c277b0c,ar6_00,ar7_00);
            if (iVar2 < 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = 1;
            }
          }
          ain0 = 1;
        }
        if (iVar2 == 0) {
          iVar2 = iStack_68 * 0x44 + DAT_8c277b08;
          FUN_8c23a1b0(auStack_54,iVar4,piVar6,ar7);
          if ((*(uint *)(iVar2 + 0x10) & 2) == 0) {
            uVar3 = *(uint *)(ar4_00 + 4) & 0xa0000000;
            if ((uVar3 != 0) && (uVar3 != 0x20000000)) {
              if (uVar3 == 0x80000000) {
                ar7 = 1;
                FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,1,ar7_00);
                piVar6 = ar6_00;
LAB_8c23a7c0:
                *(undefined2 *)(*ar4_01 + 0x42) = 0;
              }
              goto LAB_8c23a852;
            }
            iStack_68 = FUN_8c25a914(ar4_00,iVar2 + 0x14,piVar6,ar7);
            if (-1 < iStack_68) {
              ar7 = 1;
              FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,1,ar7_00);
              *(undefined2 *)(*ar4_01 + 0x42) = 0;
              goto LAB_8c23a6f0;
            }
            FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,1,ar7_00);
LAB_8c23a816:
            *(short *)(*ar4_01 + 0x42) = -(short)iStack_68;
            _DAT_8c4aa6ac = iVar1;
            _DAT_8c4aa6b0 = ar6_00;
            goto LAB_8c23a82a;
          }
          uVar3 = *(uint *)(ar4_00 + 4) & 0xa0000000;
          if (uVar3 == 0) {
            iVar4 = iVar2 + 0x14;
            ar7 = *(uint *)(iVar2 + 0x10);
            piVar6 = ar6_00;
            FUN_8c25a380(ar4_01,iVar4,ar6_00,ar7,ar7_00);
LAB_8c23a578:
            *(undefined2 *)(*ar4_01 + 0x40) = *(undefined2 *)(iVar2 + 0x40);
            *(undefined2 *)(*ar4_01 + 0x42) = 0;
LAB_8c23a6c4:
            FUN_8c25a6ea(ar6_00,iVar4,piVar6,ar7,ain0);
          }
          else {
            if (uVar3 == 0x80000000) {
              if ((*(uint *)(iVar2 + 0x10) & 1) != 0) {
                ar7 = 3;
                FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,3,ar7_00);
                *(undefined2 *)(*ar4_01 + 0x40) = *(undefined2 *)(iVar2 + 0x40);
                piVar6 = ar6_00;
                goto LAB_8c23a7c0;
              }
              iStack_68 = FUN_8c25a8c0(ar4_00,iVar2 + 0x14,piVar6,ar7);
              if (iStack_68 < 0) {
LAB_8c23a52a:
                FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,2,ar7_00);
                *(undefined2 *)(*ar4_01 + 0x40) = *(undefined2 *)(iVar2 + 0x40);
                goto LAB_8c23a816;
              }
              ar7 = 2;
              FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,2,ar7_00);
              *(undefined2 *)(*ar4_01 + 0x40) = *(undefined2 *)(iVar2 + 0x40);
              *(undefined2 *)(*ar4_01 + 0x42) = 0;
LAB_8c23a674:
              piVar6 = *(int **)(iVar2 + 0x14);
              uVar5 = 1;
            }
            else {
              if (uVar3 != 0x20000000) goto LAB_8c23a852;
              if ((*(uint *)(iVar2 + 0x10) & 1) != 0) {
                iVar4 = iVar2 + 0x14;
                ar7 = 3;
                piVar6 = ar6_00;
                FUN_8c25a380(ar4_01,iVar4,ar6_00,3,ar7_00);
                goto LAB_8c23a578;
              }
              iStack_68 = FUN_8c25a8c0(ar4_00,iVar2 + 0x14,piVar6,ar7);
              if (iStack_68 < 0) goto LAB_8c23a52a;
              ar7 = 2;
              FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,2,ar7_00);
              *(undefined2 *)(*ar4_01 + 0x40) = *(undefined2 *)(iVar2 + 0x40);
              *(undefined2 *)(*ar4_01 + 0x42) = 0;
LAB_8c23a6a8:
              piVar6 = *(int **)(iVar2 + 0x14);
              uVar5 = 3;
            }
            FUN_8c25a608(ar6_00,uVar5,piVar6,ar7,ain0);
          }
        }
        else if (iVar2 == 1) {
          FUN_8c23a1b0(auStack_54,iVar4,piVar6,ar7);
          iVar2 = iStack_68 * 0x44 + DAT_8c277b08;
          *(int *)(ar4_00 + 8) = iVar2;
          uVar3 = *(uint *)(ar4_00 + 4) & 0xa0000000;
          if (uVar3 == 0) {
            if ((*(uint *)(iVar2 + 0x10) & 2) == 0) {
              ar5_00 = iVar2 + 0x14;
              iVar4 = FUN_8c25a914(ar4_00,ar5_00,piVar6,ar7);
              if (iVar4 < 0) goto LAB_8c23a6de;
              *(undefined2 *)(iVar2 + 0x42) = 0;
              if (ain0 != 0) {
LAB_8c23a6f0:
                piVar6 = *(int **)(iVar2 + 0x14);
                FUN_8c25a608(ar6_00,2,piVar6,ar7,ain0);
                *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 8;
                goto LAB_8c23a852;
              }
LAB_8c23a728:
              FUN_8c2571fe(iVar2,ar5_00,piVar6,ar7);
              *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 2;
            }
            else {
joined_r0x8c23a628:
              if (ain0 != 0) goto LAB_8c23a6c4;
            }
LAB_8c23a734:
            *(short *)(iVar2 + 0x40) = *(short *)(iVar2 + 0x40) + 1;
          }
          else if (uVar3 == 0x80000000) {
            if ((*(uint *)(iVar2 + 0x10) & 1) == 0) {
              iVar4 = FUN_8c25a8c0(ar4_00,iVar2 + 0x14,piVar6,ar7);
              if (iVar4 < 0) goto LAB_8c23a6de;
              *(undefined2 *)(iVar2 + 0x42) = 0;
              if (ain0 != 0) goto LAB_8c23a674;
              *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 1;
            }
          }
          else if (uVar3 == 0x20000000) {
            if ((*(uint *)(iVar2 + 0x10) & 2) == 0) {
              ar5_00 = iVar2 + 0x14;
              iVar4 = FUN_8c25a914(ar4_00,ar5_00,piVar6,ar7);
              if (-1 < iVar4) {
                *(undefined2 *)(iVar2 + 0x42) = 0;
                if (ain0 == 0) goto LAB_8c23a728;
                goto LAB_8c23a6f0;
              }
            }
            else {
              if ((*(uint *)(iVar2 + 0x10) & 1) != 0) goto joined_r0x8c23a628;
              iVar4 = FUN_8c25a8c0(ar4_00,iVar2 + 0x14,piVar6,ar7);
              if (-1 < iVar4) {
                *(undefined2 *)(iVar2 + 0x42) = 0;
                if (ain0 != 0) goto LAB_8c23a6a8;
                *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 1;
                goto LAB_8c23a734;
              }
            }
LAB_8c23a6de:
            *(short *)(iVar2 + 0x42) = -(short)iVar4;
            _DAT_8c4aa6ac = iVar1;
            _DAT_8c4aa6b0 = ar6_00;
            goto LAB_8c23a82a;
          }
        }
        else if (iVar2 == 2) {
          FUN_8c23a1b0(auStack_54,iVar4,piVar6,ar7);
          uVar5 = FUN_8c25a710(ar6_00,iVar4,piVar6,ar7);
          piVar6 = (int *)0x2c;
          FUN_8c23c814(uVar5,auStack_54,0x2c,ar7);
          uVar3 = *(uint *)(ar4_00 + 4) & 0xa0000000;
          if (uVar3 == 0) {
            iStack_68 = FUN_8c25a914(ar4_00,uVar5,piVar6,ar7);
            if (-1 < iStack_68) {
              ar7 = 2;
              FUN_8c25a380(ar4_00 + 8,uVar5,ar6_00,2,ar7_00);
              *(undefined2 *)(*ar4_01 + 0x42) = 0;
              piVar6 = ar6_00;
joined_r0x8c23a79c:
              if (ain0 != 0) {
                *(uint *)(*ar4_01 + 0x10) = *(uint *)(*ar4_01 + 0x10) | 8;
              }
              goto LAB_8c23a852;
            }
          }
          else if (uVar3 == 0x80000000) {
            iStack_68 = FUN_8c25a8c0(ar4_00,uVar5,piVar6,ar7);
            if (-1 < iStack_68) {
              ar7 = 1;
              FUN_8c25a380(ar4_01,uVar5,ar6_00,1,ar7_00);
              piVar6 = ar6_00;
              goto LAB_8c23a7c0;
            }
          }
          else {
            if (uVar3 != 0x20000000) goto LAB_8c23a852;
            iStack_68 = FUN_8c25a914(ar4_00,uVar5,piVar6,ar7);
            if (-1 < iStack_68) {
              iStack_68 = FUN_8c25a8c0(ar4_00,uVar5,piVar6,ar7);
              if (iStack_68 < 0) {
                FUN_8c25a380(ar4_01,uVar5,ar6_00,2,ar7_00);
                goto LAB_8c23a816;
              }
              ar7 = 3;
              FUN_8c25a380(ar4_01,uVar5,ar6_00,3,ar7_00);
              *(undefined2 *)(*ar4_01 + 0x42) = 0;
              piVar6 = ar6_00;
              goto joined_r0x8c23a79c;
            }
          }
          FUN_8c25a380(ar4_01,uVar5,ar6_00,0,ar7_00);
          goto LAB_8c23a816;
        }
LAB_8c23a852:
        iStack_5c = iStack_5c + 1;
      } while (iStack_5c < sStack_22);
    }
    uVar5 = 1;
  }
  else {
    _DAT_8c4aa6b4 = 4;
LAB_8c23a82a:
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

__asm__(".globl _FUN_8c23a29c\n.set _FUN_8c23a29c, _FUN_8c23a29c_def\n");
