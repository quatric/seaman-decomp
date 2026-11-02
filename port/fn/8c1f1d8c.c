#include "../decls.h"
undefined4 FUN_8c1f1d8c_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7,int s0)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  char *ar5_00;
  undefined4 uVar9;
  undefined4 uVar10;
  byte in_IMASK;
  byte bVar11;
  byte extraout_S;
  byte extraout_S_00;
  byte extraout_T;
  byte extraout_T_00;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  uint uStack_20;
  
  if ((DAT_8c2739e0 != (int *)0x0) && ((short)DAT_8c2739e0[0xe] == 1)) {
    return 0;
  }
  if (((uint)ar5 & 0x1f) != 0) {
    return 0xfffffff2;
  }
  piVar3 = DAT_8c2739e0;
  uVar8 = ar6;
  uVar9 = ar7;
  piStack_28 = ar5;
  iStack_24 = ar4;
  puVar5 = (undefined4 *)FUN_8c1f151c(DAT_8c2739e0,ar5,ar6,ar7);
  (*(code *)*puVar5)(piVar3,ar5,uVar8,uVar9);
  uStack_20 = (((uint)extraout_T | (uint)extraout_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  bVar11 = (byte)((((uint)extraout_T | (uint)extraout_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  DAT_8c2739e0 = piStack_28;
  *(undefined2 *)(piStack_28 + 0xe) = 0;
  DAT_8c2739e0[8] = 0;
  *DAT_8c2739e0 = iStack_24;
  piVar3 = DAT_8c2739e0 + 4;
  iVar6 = FUN_8c1f3078(ar7,ar6,uVar8,uVar9);
  *piVar3 = iVar6;
  DAT_8c2739e0[3] = (int)puVar5;
  DAT_8c2739e0[7] = 0;
  *(undefined2 *)((int)DAT_8c2739e0 + 0x3a) = 0;
  DAT_8c2739e0[9] = 0;
  DAT_8c2739e0[0xd] = 0;
  DAT_8c2739e0[0xf] = s0;
  piVar3 = DAT_8c2739e0 + 0x420;
  for (iVar6 = 0; iVar6 < *DAT_8c2739e0 + 1; iVar6 = iVar6 + 1) {
    *(undefined2 *)(piVar3 + 0x13) = 0;
    *piVar3 = (int)DAT_8c2739e0;
    piVar3 = piVar3 + 0x15;
  }
  DAT_8c2739e0[5] = (int)(DAT_8c2739e0 + 0x420);
  DAT_8c2739e0[6] = (int)(DAT_8c2739e0 + 0x435);
  FUN_8c1f21bc(DAT_8c2739e0[5],0,0,0);
  uVar2 = (((uint)extraout_T_00 | (uint)extraout_S_00 << 1 | (uint)bVar11 << 4) & 0xf0) >> 4;
  if (DAT_8c2739e4 == 0) {
    DAT_8c2739e4 = FUN_8c1fa244(0x900,&LAB_8c1f1a44,0x50,DAT_8c2739e0);
  }
  if (DAT_8c2739e8 == 0) {
    DAT_8c2739e8 = FUN_8c1fa244(0xa40,&LAB_8c1f1a2a,0x10,DAT_8c2739e0);
  }
  uVar10 = 0;
  uVar8 = 0;
  uVar9 = 0;
  piVar3 = (int *)FUN_8c1f302a(DAT_8c2739e0[5],0,0,0);
  if ((piVar3 != (int *)0x0) && (iVar6 = (**(code **)(DAT_8c2739e0[3] + 0x1c))(uVar2), iVar6 != 0))
  {
    piVar3[0xf] = iVar6;
    *(undefined2 *)(piVar3 + 0x14) = 4;
    *(int **)(*piVar3 + 0x1c) = piVar3;
    iVar6 = FUN_8c1f2f98(piVar3,uVar8,uVar9,uVar10);
    iVar4 = (**(code **)(DAT_8c2739e0[3] + 0x20))(&piStack_28);
    if (iVar4 != 0) {
      if (iVar6 != 0) {
        if (iVar6 != -0x1d) {
          return iVar6;
        }
        if (piStack_28 == (int *)0x6) {
          return 0xffffffe9;
        }
        return 0xffffffe3;
      }
      if (iStack_24 != 0x80) {
        return 0xfffffffb;
      }
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      piVar3 = (int *)FUN_8c1f302a(DAT_8c2739e0[5],0,0,0);
      if (piVar3 != (int *)0x0) {
        DAT_8c2739e0[0xb] = 0;
        iVar6 = (**(code **)(DAT_8c2739e0[3] + 0x4c))(0x8c470f58);
        if (iVar6 != 0) {
          piVar3[0xf] = iVar6;
          *(undefined2 *)(piVar3 + 0x14) = 4;
          *(int **)(*piVar3 + 0x1c) = piVar3;
          iVar6 = FUN_8c1f2f98(piVar3,uVar9,uVar10,uVar8);
          if (iVar6 == 0) {
            DAT_8c2739e0[0xb] = DAT_8c2739e0[0xb] | (DAT_8c470f64 + -0x30) * 0x10000;
            DAT_8c2739e0[0xb] = DAT_8c2739e0[0xb] | (DAT_8c470f66 + -0x30) * 0x100;
            DAT_8c2739e0[0xb] = DAT_8c2739e0[0xb] | (int)DAT_8c470f67 - 0x30U;
          }
        }
        ar5_00 = (char *)0x1;
        piVar3 = DAT_8c2739e0 + 0x10;
        iVar6 = FUN_8c1f19ec(DAT_8c26c520,1,piVar3,uVar8);
        if (iVar6 == 0) {
          iVar6 = FUN_8c1f173a(DAT_8c2739e0 + 0x10,ar5_00,piVar3,uVar8);
          if (iVar6 == 0) {
            return 0xfffffffb;
          }
          piVar7 = DAT_8c2739e0 + 1;
          iVar6 = FUN_8c1f1714(DAT_8c2739e0 + 0x33,ar5_00,piVar3,uVar8);
          *piVar7 = iVar6;
          DAT_8c2739e0[1] = DAT_8c2739e0[1] + 0x96;
          piVar7 = DAT_8c2739e0 + 2;
          iVar6 = FUN_8c1f1714(DAT_8c2739e0 + 0x31,ar5_00,piVar3,uVar8);
          *piVar7 = iVar6;
          _DAT_8c470f90 = (short *)&DAT_8c470f78;
          _DAT_8c470f78 = (short)DAT_8c0080fc;
          uVar9 = uVar8;
          if (_DAT_8c470f78 == 1) {
            ar5_00 = &DAT_8c0080f0;
            iVar6 = 0;
            _DAT_8c470f7a = (short)DAT_8c0080fd;
            _DAT_8c470f7c = 0;
            piVar3 = (int *)&DAT_8c470f80;
            do {
              uVar9 = uVar8;
              if (*ar5_00 == ' ') break;
              cVar1 = *ar5_00;
              ar5_00 = ar5_00 + 1;
              uVar8 = 0xc;
              uVar9 = 0xc;
              iVar6 = iVar6 + 1;
              *(char *)piVar3 = cVar1;
              piVar3 = (int *)((int)piVar3 + 1);
            } while (iVar6 < 0xc);
            *(char *)piVar3 = '\0';
          }
          iVar6 = FUN_8c1f1714((int)DAT_8c2739e0 + 0xde,ar5_00,piVar3,uVar9);
          uVar8 = FUN_8c1f1714((int)DAT_8c2739e0 + 0xe6,ar5_00,piVar3,uVar9);
          *(undefined4 *)(DAT_8c2739e0[4] + 8) = 0;
          iVar4 = DAT_8c2739e0[4];
          iVar6 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x10,iVar6 + 0x96,iVar4,uVar8);
          if (iVar6 == -0xc) {
            return 0xfffffff4;
          }
          if (iVar6 == 0) {
            if (*(int *)DAT_8c2739e0[4] == 0) {
              return 0xfffffffb;
            }
            if (*_DAT_8c470f90 != 1) {
LAB_8c1f1d54:
              *(undefined2 *)(DAT_8c2739e0 + 0xe) = 1;
              return 0;
            }
            iVar6 = FUN_8c1f2172(_DAT_8c470f90 + 4,&uStack_2c,iVar4,uVar8);
            if (iVar6 == 0) {
              uVar8 = 1;
              *(undefined4 *)(_DAT_8c470f90 + 2) = uStack_2c;
              iVar4 = DAT_8c2739e0[4];
              iVar6 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x10,uStack_2c,iVar4,1);
              if (iVar6 == -0xc) {
                return 0xfffffff4;
              }
              if (iVar6 == 0) {
                if (*(int *)DAT_8c2739e0[4] == 0) {
                  return 0xfffffffb;
                }
                FUN_8c1f1a52(DAT_8c2739e0[4],uStack_2c,iVar4,uVar8,0);
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

__asm__(".globl _FUN_8c1f1d8c\n.set _FUN_8c1f1d8c, _FUN_8c1f1d8c_def\n");
