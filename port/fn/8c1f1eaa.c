#include "../decls.h"
undefined4 FUN_8c1f1eaa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *ar5_00;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  byte in_IMASK;
  byte bVar10;
  byte in_S;
  byte extraout_S;
  byte extraout_S_00;
  byte extraout_T;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  if (DAT_8c2739e0 == (int *)0x0) {
    return 0xffffffff;
  }
  piVar9 = DAT_8c2739e0 + 0x420;
  piVar3 = DAT_8c2739e0;
  for (iVar8 = 0; iVar8 < *DAT_8c2739e0 + 1; iVar8 = iVar8 + 1) {
    piVar3 = piVar9;
    FUN_8c1f309c(piVar9,ar5,ar6,ar7);
    piVar9 = piVar9 + 0x15;
    in_S = extraout_S;
  }
  bVar10 = (byte)((((uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  (**(code **)DAT_8c2739e0[3])(piVar3,ar5,ar6,ar7);
  *(undefined2 *)(DAT_8c2739e0 + 0xe) = 0;
  DAT_8c2739e0[8] = 0;
  DAT_8c2739e0[7] = 0;
  *(undefined2 *)((int)DAT_8c2739e0 + 0x3a) = 0;
  DAT_8c2739e0[0xd] = 0;
  piVar3 = DAT_8c2739e0 + 0x420;
  for (iVar8 = 0; iVar8 < *DAT_8c2739e0 + 1; iVar8 = iVar8 + 1) {
    *(undefined2 *)(piVar3 + 0x13) = 0;
    *piVar3 = (int)DAT_8c2739e0;
    piVar3 = piVar3 + 0x15;
  }
  DAT_8c2739e0[5] = (int)(DAT_8c2739e0 + 0x420);
  DAT_8c2739e0[6] = (int)(DAT_8c2739e0 + 0x435);
  FUN_8c1f21bc(DAT_8c2739e0[5],0,0,0);
  uVar2 = (((uint)extraout_T | (uint)extraout_S_00 << 1 | (uint)bVar10 << 4) & 0xf0) >> 4;
  if (DAT_8c2739e4 == 0) {
    DAT_8c2739e4 = FUN_8c1fa244(0x900,&LAB_8c1f1a44,0x50,DAT_8c2739e0);
  }
  if (DAT_8c2739e8 == 0) {
    DAT_8c2739e8 = FUN_8c1fa244(0xa40,&LAB_8c1f1a2a,0x10,DAT_8c2739e0);
  }
  uVar7 = 0;
  uVar5 = 0;
  uVar6 = 0;
  piVar3 = (int *)FUN_8c1f302a(DAT_8c2739e0[5],0,0,0);
  if ((piVar3 != (int *)0x0) && (iVar8 = (**(code **)(DAT_8c2739e0[3] + 0x1c))(uVar2), iVar8 != 0))
  {
    piVar3[0xf] = iVar8;
    *(undefined2 *)(piVar3 + 0x14) = 4;
    *(int **)(*piVar3 + 0x1c) = piVar3;
    iVar8 = FUN_8c1f2f98(piVar3,uVar5,uVar6,uVar7);
    iVar4 = (**(code **)(DAT_8c2739e0[3] + 0x20))(&iStack_28);
    if (iVar4 != 0) {
      if (iVar8 != 0) {
        if (iVar8 != -0x1d) {
          return iVar8;
        }
        if (iStack_28 == 6) {
          return 0xffffffe9;
        }
        return 0xffffffe3;
      }
      if (iStack_24 != 0x80) {
        return 0xfffffffb;
      }
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      piVar3 = (int *)FUN_8c1f302a(DAT_8c2739e0[5],0,0,0);
      if (piVar3 != (int *)0x0) {
        DAT_8c2739e0[0xb] = 0;
        iVar8 = (**(code **)(DAT_8c2739e0[3] + 0x4c))(0x8c470f58);
        if (iVar8 != 0) {
          piVar3[0xf] = iVar8;
          *(undefined2 *)(piVar3 + 0x14) = 4;
          *(int **)(*piVar3 + 0x1c) = piVar3;
          iVar8 = FUN_8c1f2f98(piVar3,uVar6,uVar7,uVar5);
          if (iVar8 == 0) {
            DAT_8c2739e0[0xb] = DAT_8c2739e0[0xb] | (DAT_8c470f64 + -0x30) * 0x10000;
            DAT_8c2739e0[0xb] = DAT_8c2739e0[0xb] | (DAT_8c470f66 + -0x30) * 0x100;
            DAT_8c2739e0[0xb] = DAT_8c2739e0[0xb] | (int)DAT_8c470f67 - 0x30U;
          }
        }
        ar5_00 = (char *)0x1;
        piVar3 = DAT_8c2739e0 + 0x10;
        iVar8 = FUN_8c1f19ec(DAT_8c26c520,1,piVar3,uVar5);
        if (iVar8 == 0) {
          iVar8 = FUN_8c1f173a(DAT_8c2739e0 + 0x10,ar5_00,piVar3,uVar5);
          if (iVar8 == 0) {
            return 0xfffffffb;
          }
          piVar9 = DAT_8c2739e0 + 1;
          iVar8 = FUN_8c1f1714(DAT_8c2739e0 + 0x33,ar5_00,piVar3,uVar5);
          *piVar9 = iVar8;
          DAT_8c2739e0[1] = DAT_8c2739e0[1] + 0x96;
          piVar9 = DAT_8c2739e0 + 2;
          iVar8 = FUN_8c1f1714(DAT_8c2739e0 + 0x31,ar5_00,piVar3,uVar5);
          *piVar9 = iVar8;
          _DAT_8c470f90 = (short *)&DAT_8c470f78;
          _DAT_8c470f78 = (short)DAT_8c0080fc;
          uVar6 = uVar5;
          if (_DAT_8c470f78 == 1) {
            ar5_00 = &DAT_8c0080f0;
            iVar8 = 0;
            _DAT_8c470f7a = (short)DAT_8c0080fd;
            _DAT_8c470f7c = 0;
            piVar3 = (int *)&DAT_8c470f80;
            do {
              uVar6 = uVar5;
              if (*ar5_00 == ' ') break;
              cVar1 = *ar5_00;
              ar5_00 = ar5_00 + 1;
              uVar5 = 0xc;
              uVar6 = 0xc;
              iVar8 = iVar8 + 1;
              *(char *)piVar3 = cVar1;
              piVar3 = (int *)((int)piVar3 + 1);
            } while (iVar8 < 0xc);
            *(char *)piVar3 = '\0';
          }
          iVar8 = FUN_8c1f1714((int)DAT_8c2739e0 + 0xde,ar5_00,piVar3,uVar6);
          uVar5 = FUN_8c1f1714((int)DAT_8c2739e0 + 0xe6,ar5_00,piVar3,uVar6);
          *(undefined4 *)(DAT_8c2739e0[4] + 8) = 0;
          iVar4 = DAT_8c2739e0[4];
          iVar8 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x10,iVar8 + 0x96,iVar4,uVar5);
          if (iVar8 == -0xc) {
            return 0xfffffff4;
          }
          if (iVar8 == 0) {
            if (*(int *)DAT_8c2739e0[4] == 0) {
              return 0xfffffffb;
            }
            if (*_DAT_8c470f90 != 1) {
LAB_8c1f1d54:
              *(undefined2 *)(DAT_8c2739e0 + 0xe) = 1;
              return 0;
            }
            iVar8 = FUN_8c1f2172(_DAT_8c470f90 + 4,&uStack_2c,iVar4,uVar5);
            if (iVar8 == 0) {
              uVar5 = 1;
              *(undefined4 *)(_DAT_8c470f90 + 2) = uStack_2c;
              iVar4 = DAT_8c2739e0[4];
              iVar8 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x10,uStack_2c,iVar4,1);
              if (iVar8 == -0xc) {
                return 0xfffffff4;
              }
              if (iVar8 == 0) {
                if (*(int *)DAT_8c2739e0[4] == 0) {
                  return 0xfffffffb;
                }
                FUN_8c1f1a52(DAT_8c2739e0[4],uStack_2c,iVar4,uVar5,0);
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

__asm__(".globl _FUN_8c1f1eaa\n.set _FUN_8c1f1eaa, _FUN_8c1f1eaa_def\n");
