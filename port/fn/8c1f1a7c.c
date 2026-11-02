#include "../decls.h"
undefined4 FUN_8c1f1a7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *a5;
  undefined4 uVar8;
  char *a6;
  undefined4 a7;
  char *ain0;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  ain0 = &DAT_8c470f66;
  if (DAT_8c2739e4 == 0) {
    DAT_8c2739e4 = FUN_8c1fa244(0x900,&LAB_8c1f1a44,0x50,DAT_8c2739e0);
  }
  if (DAT_8c2739e8 == 0) {
    DAT_8c2739e8 = FUN_8c1fa244(0xa40,&LAB_8c1f1a2a,0x10,DAT_8c2739e0);
  }
  a7 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar6 = *(undefined4 *)(DAT_8c2739e0 + 0x14);
  piVar2 = (int *)FUN_8c1f302a(uVar6,0,0,0);
  if ((piVar2 != (int *)0x0) &&
     (iVar3 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x1c))(uVar6,uVar7,uVar8,a7), iVar3 != 0))
  {
    piVar2[0xf] = iVar3;
    *(undefined2 *)(piVar2 + 0x14) = 4;
    *(int **)(*piVar2 + 0x1c) = piVar2;
    iVar3 = FUN_8c1f2f98(piVar2,uVar7,uVar8,a7);
    iVar4 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x20))(&iStack_28,uVar7,uVar8,a7);
    if (iVar4 != 0) {
      if (iVar3 != 0) {
        if (iVar3 != -0x1d) {
          return iVar3;
        }
        if (iStack_28 == 6) {
          return 0xffffffe9;
        }
        return 0xffffffe3;
      }
      if (iStack_24 != 0x80) {
        return 0xfffffffb;
      }
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      piVar2 = (int *)FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,0,0);
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(DAT_8c2739e0 + 0x2c) = 0;
        iVar3 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x4c))(0x8c470f58,uVar7,uVar8,uVar6);
        if (iVar3 != 0) {
          piVar2[0xf] = iVar3;
          *(undefined2 *)(piVar2 + 0x14) = 4;
          *(int **)(*piVar2 + 0x1c) = piVar2;
          iVar3 = FUN_8c1f2f98(piVar2,uVar7,uVar8,uVar6);
          if (iVar3 == 0) {
            *(uint *)(DAT_8c2739e0 + 0x2c) =
                 *(uint *)(DAT_8c2739e0 + 0x2c) | (DAT_8c470f64 + -0x30) * 0x10000;
            *(uint *)(DAT_8c2739e0 + 0x2c) =
                 *(uint *)(DAT_8c2739e0 + 0x2c) | (*ain0 + -0x30) * 0x100;
            *(uint *)(DAT_8c2739e0 + 0x2c) =
                 *(uint *)(DAT_8c2739e0 + 0x2c) | (int)DAT_8c470f67 - 0x30U;
          }
        }
        a5 = (char *)0x1;
        a6 = (char *)(DAT_8c2739e0 + 0x40);
        iVar3 = FUN_8c1f19ec(0xb06e,1,a6,uVar6);
        if (iVar3 == 0) {
          iVar3 = FUN_8c1f173a(DAT_8c2739e0 + 0x40,a5,a6,uVar6);
          if (iVar3 == 0) {
            return 0xfffffffb;
          }
          puVar5 = (undefined4 *)(DAT_8c2739e0 + 4);
          uVar7 = FUN_8c1f1714(DAT_8c2739e0 + 0xcc,a5,a6,uVar6);
          *puVar5 = uVar7;
          *(int *)(DAT_8c2739e0 + 4) = *(int *)(DAT_8c2739e0 + 4) + 0x96;
          puVar5 = (undefined4 *)(DAT_8c2739e0 + 8);
          uVar7 = FUN_8c1f1714(DAT_8c2739e0 + 0xc4,a5,a6,uVar6);
          *puVar5 = uVar7;
          _DAT_8c470f90 = (short *)&DAT_8c470f78;
          _DAT_8c470f78 = (short)DAT_8c0080fc;
          uVar7 = uVar6;
          if (_DAT_8c470f78 == 1) {
            a5 = &DAT_8c0080f0;
            iVar3 = 0;
            _DAT_8c470f7a = (short)DAT_8c0080fd;
            _DAT_8c470f7c = 0;
            a6 = &DAT_8c470f80;
            do {
              uVar7 = uVar6;
              if (*a5 == ' ') break;
              cVar1 = *a5;
              a5 = a5 + 1;
              uVar6 = 0xc;
              uVar7 = 0xc;
              iVar3 = iVar3 + 1;
              *a6 = cVar1;
              a6 = a6 + 1;
            } while (iVar3 < 0xc);
            *a6 = '\0';
          }
          iVar3 = FUN_8c1f1714(DAT_8c2739e0 + 0xde,a5,a6,uVar7);
          uVar6 = FUN_8c1f1714(DAT_8c2739e0 + 0xe6,a5,a6,uVar7);
          *(undefined4 *)(*(int *)(DAT_8c2739e0 + 0x10) + 8) = 0;
          uVar7 = *(undefined4 *)(DAT_8c2739e0 + 0x10);
          iVar3 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x40,iVar3 + 0x96,uVar7,uVar6);
          if (iVar3 == -0xc) {
            return 0xfffffff4;
          }
          if (iVar3 == 0) {
            if (**(int **)(DAT_8c2739e0 + 0x10) == 0) {
              return 0xfffffffb;
            }
            if (*_DAT_8c470f90 != 1) {
LAB_8c1f1d54:
              *(undefined2 *)(DAT_8c2739e0 + 0x38) = 1;
              return 0;
            }
            iVar3 = FUN_8c1f2172(_DAT_8c470f90 + 4,&uStack_2c,uVar7,uVar6);
            if (iVar3 == 0) {
              uVar7 = 1;
              *(undefined4 *)(_DAT_8c470f90 + 2) = uStack_2c;
              uVar6 = *(undefined4 *)(DAT_8c2739e0 + 0x10);
              iVar3 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x40,uStack_2c,uVar6,1);
              if (iVar3 == -0xc) {
                return 0xfffffff4;
              }
              if (iVar3 == 0) {
                if (**(int **)(DAT_8c2739e0 + 0x10) == 0) {
                  return 0xfffffffb;
                }
                FUN_8c1f1a52(*(undefined4 *)(DAT_8c2739e0 + 0x10),uStack_2c,uVar6,uVar7,ain0);
                goto LAB_8c1f1d54;
              }
            }
          }
        }
        return 0xfffffffc;
      }
    }
  }
  return 0xfffffffe;
}

__asm__(".globl _FUN_8c1f1a7c\n.set _FUN_8c1f1a7c, _FUN_8c1f1a7c_def\n");
