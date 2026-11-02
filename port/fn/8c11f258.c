#include "../decls.h"
uint FUN_8c11f258_def(int ar4,uint ar5,undefined1 *ar6,int ar7)

{
  undefined1 uVar1;
  short sVar2;
  ushort uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  
  puVar10 = ar6;
  iVar9 = ar7;
  iVar5 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar5 == 0) {
    if (ar6 == (undefined1 *)0x0) {
      uVar11 = 0x13;
    }
    else {
      sVar2 = *(short *)(ar4 + 0x3e);
      uVar8 = (uint)sVar2;
      if (((sVar2 == 3) || (sVar2 == 4)) || (sVar2 == 7)) {
        if (*(int *)(0x10c + ar4) == 3) {
          uVar6 = FUN_8c11f13e(ar4,ar5,puVar10,iVar9);
          uVar8 = ar5;
          if ((uVar6 & 0xff) != 0) {
            return uVar6 & 0xff;
          }
        }
        else if (ar5 != *(uint *)(0x10c + ar4)) {
          uVar11 = 1;
          goto override_prt_8c11f2f4_7a4d7f16;
        }
        puVar4 = (&FUN_8c120284);
        *(undefined4 *)(ar4 + 0x40) = 0;
        uVar13 = *(uint *)(0x110 + ar4);
        for (uVar6 = ar7 + (uint)*(ushort *)(0x22a + ar4); uVar13 <= uVar6;
            uVar6 = uVar6 - uVar13) {
          if (*(short *)(0x22a + ar4) == 0) {
            puVar10 = (undefined1 *)0x1;
            uVar8 = FUN_8c111cdc(*(undefined4 *)(ar4 + 0x60),ar6,1,iVar9);
            if ((uVar8 & 0xff) == 0) goto LAB_8c11f57e;
            if (*(int *)(0x10c + ar4) == 2) {
              puVar10 = (undefined1 *)0x1;
              uVar8 = FUN_8c111cdc(*(undefined4 *)(ar4 + 0x70),ar6,1,iVar9);
              if ((uVar8 & 0xff) == 0) goto LAB_8c11f57e;
            }
            ar6 = ar6 + uVar13;
          }
          else {
            iVar5 = FUN_8c111dfe(*(undefined4 *)(ar4 + 0x60),uVar8,puVar10,iVar9);
            (*(code *)(&memmove))
                      (iVar5,0x150 + ar4,(uint)*(ushort *)(0x22a + ar4),iVar9);
            puVar10 = (undefined1 *)(uVar13 - *(ushort *)(0x22a + ar4));
            (*(code *)(&memmove))
                      (iVar5 + (uint)*(ushort *)(0x22a + ar4),ar6,puVar10,iVar9);
            uVar3 = *(ushort *)(0x22a + ar4);
            *(undefined2 *)(0x22a + ar4) = 0;
            ar6 = ar6 + (uVar13 - uVar3);
            if (*(int *)(0x10c + ar4) == 2) {
              puVar10 = (undefined1 *)0x1;
              uVar8 = FUN_8c111cdc(*(undefined4 *)(ar4 + 0x70),iVar5,1,iVar9);
              if ((uVar8 & 0xff) == 0) goto LAB_8c11f57e;
            }
          }
          iVar5 = (int)0x13c;
          *(int *)(iVar5 + ar4) = *(int *)(iVar5 + ar4) + 1;
          uVar8 = (*(code *)puVar4)(ar4,*(undefined4 *)(iVar5 + -0x28 + ar4),puVar10,iVar9);
          if ((uVar8 & 0xff) != 0) goto LAB_8c11f5ba;
          uVar8 = (uint)*(ushort *)(0x244 + ar4);
          uVar7 = FUN_8c11d488(ar4,uVar8,puVar10,iVar9);
          if ((uVar7 & 0xff) != 0) goto LAB_8c11f504;
          if (*(int *)(0x140 + ar4) != 0) {
            uVar8 = (*(code *)puVar4)(ar4,*(undefined4 *)(0x114 + ar4),puVar10,iVar9);
            if ((uVar8 & 0xff) != 0) goto LAB_8c11f5ba;
            uVar8 = (uint)*(ushort *)(0x244 + ar4);
            uVar6 = FUN_8c11d488(ar4,uVar8,puVar10,iVar9);
joined_r0x8c11f48c:
            if ((uVar6 & 0xff) != 0) {
LAB_8c11f504:
              return *(undefined4 *)(ar4 + 0x40);
            }
            uVar6 = 0;
            break;
          }
          if ((*(uint *)(ar4 + 0x78) != 0) &&
             (*(uint *)(ar4 + 0x78) < *(uint *)(0x13c + ar4))) {
            iVar9 = 0;
            puVar10 = (undefined1 *)0x0;
            uVar8 = FUN_8c120348(ar4 + 0x48,3,0,0);
            if (((uVar8 & 0xff) == 0) &&
               (uVar8 = (*(code *)puVar4)(ar4,*(undefined4 *)(0x114 + ar4),puVar10,iVar9),
               (uVar8 & 0xff) == 0)) {
              uVar8 = (uint)*(ushort *)(0x244 + ar4);
              uVar6 = FUN_8c11d488(ar4,uVar8,puVar10,iVar9);
              goto joined_r0x8c11f48c;
            }
            goto LAB_8c11f5ba;
          }
        }
        if ((*(short *)(0x144 + ar4) != 0) &&
           (((*(short *)(0x144 + ar4) == 1 &&
             (uVar13 = FUN_8c11eb8c(ar4,uVar8,puVar10,iVar9), (uVar13 & 0xff) != 0)) ||
            ((*(short *)(0x144 + ar4) == 2 &&
             (uVar8 = FUN_8c11ec7c(ar4,uVar8,puVar10,iVar9), (uVar8 & 0xff) != 0)))))) {
LAB_8c11f5ba:
          return *(undefined4 *)(ar4 + 0x40);
        }
        if (*(int *)(0x148 + ar4) == 4) {
          iVar9 = (int)0x22a;
          uVar8 = (uint)*(ushort *)(iVar9 + ar4);
          puVar10 = (undefined1 *)(0x150 + ar4 + uVar8);
          for (; uVar8 < uVar6; uVar8 = uVar8 + 1) {
            uVar1 = *ar6;
            ar6 = ar6 + 1;
            *puVar10 = uVar1;
            puVar10 = puVar10 + 1;
          }
          *(short *)(iVar9 + ar4) = (short)uVar6;
          goto LAB_8c11f5ba;
        }
        iVar5 = (int)0x148;
        iVar12 = (int)0xf4;
        uVar11 = *(undefined4 *)(iVar5 + ar4);
        *(undefined4 *)(iVar5 + ar4) = 4;
        uVar8 = (**(code **)(iVar5 + -0x7c + ar4))(uVar11,iVar12 + ar4,puVar10,iVar9);
        if ((uVar8 & 0xff) == 0) goto LAB_8c11f5ba;
        goto LAB_8c11f57e;
      }
      uVar11 = 7;
    }
override_prt_8c11f2f4_7a4d7f16:
    uVar8 = FUN_8c1204c4(ar4 + 0x48,uVar11,puVar10,iVar9);
    uVar8 = uVar8 & 0xff;
  }
  else {
LAB_8c11f57e:
    uVar8 = 1;
  }
  return uVar8;
}

__asm__(".globl _FUN_8c11f258\n.set _FUN_8c11f258, _FUN_8c11f258_def\n");
