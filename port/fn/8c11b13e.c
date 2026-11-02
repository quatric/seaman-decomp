#include "../decls.h"
undefined4 FUN_8c11b13e_def(int *ar4,uint ar5,uint *ar6,int *ar7)

{
  undefined *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint ar5_00;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 ar6_00;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  puVar1 = (&memset);
  uVar11 = ar5 & 0xff;
  if (uVar11 == 4) {
    iVar2 = (int)0x1a4;
    ar4[6] = (int)(&FUN_8c11af3a);
    uVar11 = (**(code **)(iVar2 + (int)ar4))(ar4,ar6,ar7,ar7);
  }
  else {
    if ((uVar11 == 0x21) || (uVar11 == 3)) {
      if ((uVar11 == 3) &&
         (uVar11 = FUN_8c11372e(ar4,ar5,ar6,ar7), (uVar11 & 0xff) != 0)) {
        return 0;
      }
      uVar8 = 0;
      FUN_8c111fbe(ar4[0xb],0,ar6,ar7);
      iVar2 = FUN_8c111dfe(ar4[0xb],uVar8,ar6,ar7);
      iVar12 = (uint)*(ushort *)(ar4[10] + 0xc) + iVar2;
      (*(code *)puVar1)(iVar12,0,(uint)(*(ushort *)(ar4[10] + 0xc) >> 1),ar7);
      (*(code *)puVar1)(iVar12,1,(uint)*(ushort *)((int)0xe4 + (int)ar4),ar7);
      uVar11 = (**(code **)((int)0x1a8 + (int)ar4))(ar4,iVar2,iVar12,ar7);
      if ((uVar11 & 0xffff) == 0) {
        return 0;
      }
      ar4[6] = (int)(&FUN_8c11af7e);
      return 1;
    }
    if (uVar11 == 5) {
      ar4[6] = (int)(&FUN_8c11af3a);
      return 1;
    }
    if (uVar11 != 0x22) {
      if (uVar11 == 0x23) {
        puVar9 = ar6;
        FUN_8c115cec(ar4,ar5,ar6,ar7);
        uVar11 = FUN_8c114e80(ar4,ar6,puVar9,ar7);
      }
      else if (uVar11 == 0x1c) {
        memset(*(undefined4 *)((int)0x94 + (int)ar4),0,ar4[0xf],ar7)
        ;
        piVar7 = (int *)0x0;
        ar6_00 = 7;
        uVar8 = 0x80;
        if (ar7 != (int *)0x0) {
          do {
            uVar10 = *ar6;
            ar6 = ar6 + 1;
            piVar7 = (int *)((int)piVar7 + 1);
            uVar11 = -(uVar10 & 7);
            if ((int)uVar11 < 0) {
              bVar3 = (byte)(0x80 >> (~uVar11 & 0x1f) + 1);
            }
            else {
              bVar3 = (byte)(0x80 << (uVar11 & 0x1f));
            }
            uVar10 = uVar10 >> 3;
            *(byte *)(*(int *)((int)0x94 + (int)ar4) + uVar10) =
                 *(byte *)(*(int *)((int)0x94 + (int)ar4) + uVar10) | bVar3;
          } while (piVar7 < ar7);
        }
        FUN_8c113ac8(ar4,0x80,7,ar6);
        uVar11 = FUN_8c11372e(ar4,uVar8,ar6_00,ar6);
      }
      else {
        if (uVar11 == 0x1d) {
          *ar6 = *(uint *)((int)0x94 + (int)ar4);
          *ar7 = ar4[0xf];
          return 1;
        }
        if (uVar11 == 0x11) {
          return 1;
        }
        if (uVar11 == 0x1a) {
          uVar11 = *ar6;
          uVar10 = ar6[2];
          uVar4 = ar6[3];
          uVar5 = ar6[4];
          ar5_00 = ar6[5];
          uVar6 = ar6[7];
          if (*(uint *)((int)0x158 + (int)ar4) != uVar11) {
            iVar2 = (int)0x154;
            *(undefined1 *)(iVar2 + (int)ar4) = 1;
            *(uint *)(iVar2 + 4 + (int)ar4) = uVar11;
          }
          *(uint *)((int)0x14c + (int)ar4) = uVar5;
          uVar11 = FUN_8c112a20(ar4,uVar10,ar6,ar7);
          if ((uVar11 & 0xff) == 0) {
            if ((int)*(short *)((int)0x1be + (int)ar4) != ar5_00) {
              FUN_8c112b1c(ar4,ar5_00,ar6,ar7);
            }
            if (uVar4 == 0) {
              *(undefined4 *)((int)0x128 + (int)ar4) = 0;
            }
            else {
              *(undefined4 *)((int)0x128 + (int)ar4) = 1;
            }
            *(short *)((int)0x1e8 + (int)ar4) = (short)uVar6;
            return 1;
          }
          return 0;
        }
        if (uVar11 == 0x1b) {
          iVar2 = (int)0x158;
          *ar6 = *(uint *)(iVar2 + (int)ar4);
          ar6[4] = *(uint *)(iVar2 + -0xc + (int)ar4);
          iVar12 = (int)0x1be;
          ar6[2] = *(uint *)(iVar2 + -0x20 + (int)ar4);
          iVar2 = (int)0x128;
          ar6[5] = (int)*(short *)(iVar12 + (int)ar4);
          iVar12 = (int)0x1e8;
          ar6[3] = (uint)(*(int *)(iVar2 + (int)ar4) != 0);
          ar6[7] = (int)*(short *)(iVar12 + (int)ar4);
          return 1;
        }
        if (uVar11 == 0x15) {
          if (ar7 != (int *)0x1) {
            FUN_8c11584e(ar4,ar6,ar6,ar7);
            return 1;
          }
          uVar11 = FUN_8c11584e(ar4,0,ar6,1);
LAB_8c11b488:
          *ar6 = uVar11;
          return 1;
        }
        if (uVar11 == 0x17) {
          puVar9 = ar6;
          FUN_8c115cec(ar4,ar5,ar6,ar7);
          uVar11 = FUN_8c11596e(ar4,ar6,puVar9,ar7);
        }
        else {
          if (uVar11 == 0x18) {
            if (ar7 != (int *)0x1) {
              FUN_8c1158e0(ar4,ar6,ar6,ar7);
              return 1;
            }
            uVar11 = FUN_8c1158e0(ar4,0,ar6,1);
            goto LAB_8c11b488;
          }
          if (uVar11 != 0x19) {
            if (uVar11 == 0x1e) {
              FUN_8c111fbe(*(undefined4 *)(uint)ar4[4],0,ar6,ar7);
              *(undefined **)((int)0x1a4 + (int)ar4) = (&FUN_8c11919e);
              return 1;
            }
            if (uVar11 == (int)0xff) {
              FUN_8c115cec(ar4,ar5,ar6,ar7);
              FUN_8c112c90(ar4,ar5,ar6,ar7);
              FUN_8c112ec6(ar4,ar5,ar6,ar7);
              FUN_8c113124(ar4,ar5,ar6,ar7);
              FUN_8c1132cc(ar4,ar5,ar6,ar7);
              if (*(int *)((int)0xfc + (int)ar4) != 0) {
                (**(code **)(*ar4 + 0x18))
                          (*ar4,*(undefined4 *)((int)0xfc + (int)ar4),ar6,ar7);
              }
              (**(code **)(*ar4 + 0x18))(*ar4,ar4[3],ar6,ar7);
              (**(code **)(*ar4 + 0x18))(*ar4,ar4[4],ar6,ar7);
              (**(code **)(*ar4 + 0x18))(*ar4,ar4,ar6,ar7);
              return 1;
            }
            return 0;
          }
          uVar11 = FUN_8c115ac8(ar4,ar6,ar6,ar7);
        }
      }
      if ((uVar11 & 0xff) == 0) {
        return 1;
      }
      return 0;
    }
    uVar11 = FUN_8c114bd8(ar4,ar6,ar6,ar7);
  }
  if ((uVar11 & 0xff) != 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c11b13e\n.set _FUN_8c11b13e, _FUN_8c11b13e_def\n");
