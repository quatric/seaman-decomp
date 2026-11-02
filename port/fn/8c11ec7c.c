#include "../decls.h"
undefined4 FUN_8c11ec7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  uint *puVar2;
  int a4;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int a5;
  int *ar6_00;
  uint *ar7_00;
  undefined4 ar7_01;
  int iVar9;
  int iVar10;
  float fVar12;
  undefined8 uVar11;
  undefined8 in_dr12;
  undefined8 uVar13;
  float fVar14;
  undefined8 in_dr14;
  code *pcVar15;
  char cVar16;
  uint uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  uint *puStack_4c;
  int iStack_48;
  uint uStack_44;
  uint uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uStack_20 = (undefined4)in_dr14;
  uStack_24 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uStack_28 = (undefined4)in_dr12;
  uStack_2c = (undefined4)((ulonglong)in_dr12 >> 0x20);
  iVar10 = *(int *)(ar4 + 0xfc);
  uStack_40 = 0x1e;
  if (*(int *)(ar4 + 0x14c) == 0) {
LAB_8c11f120:
    uVar5 = 0;
  }
  else {
    iStack_34 = ar4;
    a4 = (**(code **)(iVar10 + 0x14))(0x78,ar4 + 0xf4,ar6,ar7);
    fVar14 = (float)in_dr14;
    if (a4 == 0) {
      uVar5 = FUN_8c11cd02(iVar10,1,ar6,ar7);
      return uVar5;
    }
    iVar8 = *(int *)(ar4 + 0x14c);
    iVar9 = *(int *)(iVar8 + 0xc);
    puStack_4c = *(uint **)(iVar8 + 0x10);
    uVar1 = *(ushort *)(iVar9 + 0x14);
    *(undefined4 *)(iVar8 + 0x10) = 0;
    FUN_8c11c5e4(ar4,&iStack_48,*(undefined4 *)(ar4 + 0x14c),0,0);
    ar7_00 = (uint *)0x0;
    *(uint **)(*(int *)(ar4 + 0x14c) + 0x10) = puStack_4c;
    puStack_4c = *(uint **)(*(int *)(iStack_48 + 4) + 0x14);
    uVar3 = FUN_8c120348(ar4 + 0x48,0x11,0,0);
    if (((uVar3 & 0xff) == 0) && (iVar8 = FUN_8c11dc7e(ar4,1,&uStack_38,ar7_00), iVar8 == 0)) {
      ar6_00 = (int *)0x0;
      iVar8 = FUN_8c11dda2(ar4,1,0,ar7_00);
      if (iVar8 == 0) {
        iVar8 = 0;
        cVar16 = '\0';
        uVar3 = FUN_8c11d432(ar4,0,ar6_00,ar7_00);
        if ((uVar3 & 0xff) == 0) {
          uVar3 = (uint)uVar1;
          if (cVar16 == '\0') {
            uVar13 = 0x445925b1;
            pcVar15 = (code *)0x3a83126e;
          }
          else {
            uVar13 = 0x445925b100000000;
            fVar14 = 0.0009999999;
            pcVar15 = FUN_8c12212e;
          }
          while( true ) {
            puStack_4c = puStack_4c + 4;
            iVar9 = *(int *)(iVar9 + 0x10);
            if (*(int *)(iVar9 + 0x10) == 0) break;
            uStack_44 = (uint)*(ushort *)(iVar9 + 0x14);
            uVar4 = FUN_8c12212e(ar4,iVar8,ar6_00,ar7_00);
            if (((uVar4 & 0xff) != 0) ||
               (uVar4 = FUN_8c12215c(ar4,&DAT_8c127c1d,0,uVar3,uStack_44), (uVar4 & 0xff) != 0))
            goto LAB_8c11f0fa;
            ar6_00 = &iStack_54;
            ar7_00 = &uStack_58;
            uVar4 = FUN_8c120348(ar4 + 0x48,0x20,ar6_00,&uStack_58);
            if (((uVar4 & 0xff) != 0) ||
               (uVar4 = FUN_8c120284(iStack_34,&DAT_8c127c1d,ar6_00,ar7_00), (uVar4 & 0xff) != 0))
            goto LAB_8c11f0fa;
            iVar8 = ar4 + 0xf4;
            (**(code **)(iVar10 + 0x18))(puStack_4c[3],iVar8,ar6_00,ar7_00);
            puVar2 = puStack_4c;
            *puStack_4c = uStack_58;
            if (uStack_58 != 0) {
              a5 = ar4 + 0xf4;
              iVar8 = uStack_58 * 0xc;
              cVar16 = '\0';
              uVar3 = (**(code **)(iVar10 + 0x14))(iVar8,a5,ar6_00,ar7_00);
              puVar2[3] = uVar3;
              if (uStack_40 < uStack_58) {
                uStack_40 = uStack_58;
                (**(code **)(iVar10 + 0x18))(a4,ar4 + 0xf4,ar6_00,ar7_00);
                iVar8 = uStack_40 << 2;
                a5 = ar4 + 0xf4;
                cVar16 = '\0';
                a4 = (**(code **)(iVar10 + 0x14))(iVar8,a5,ar6_00,ar7_00);
              }
              if (cVar16 == '\0') {
                fVar14 = (float)((ulonglong)uVar13 >> 0x20);
              }
              uVar4 = 0;
              if (uStack_58 != 0) {
                do {
                  iStack_3c = uVar4 * 4;
                  pfVar7 = (float *)(iStack_3c + a4);
                  uVar11 = 0x408f400000000000;
                  cVar16 = '\0';
                  thunk_FUN_8c013cd8(iVar8,a5,ar6_00,ar7_00);
                  uVar4 = uVar4 + 1;
                  fVar12 = (float)((ulonglong)uVar11 >> 0x20);
                  if (cVar16 == '\0') {
                    *pfVar7 = fVar12;
                  }
                  else {
                    *(undefined8 *)pfVar7 = uVar11;
                  }
                  fVar14 = fVar14 + fVar12;
                } while (uVar4 < uStack_58);
                uVar4 = 0;
                if (uStack_58 != 0) {
                  do {
                    fVar12 = (float)((ulonglong)uVar11 >> 0x20);
                    if (*(float *)(uVar4 * 4 + a4) / fVar14 <= (float)(uint)pcVar15) {
                      *(undefined4 *)(uVar4 * 0xc + uVar3) = 6000;
                    }
                    else {
                      piVar6 = (int *)(uVar4 * 0xc + uVar3);
                      thunk_FUN_8c013dfc(iVar8,a5,ar6_00,ar7_00);
                      uVar11 = 0x3fe0000000000000;
                      *piVar6 = (int)(-(fVar12 * (float)uVar13) + 0.5);
                    }
                    iVar8 = uVar4 * 4;
                    a5 = uVar4 * 0xc + uVar3;
                    *(int *)(a5 + 4) = (int)*(short *)(*(int *)(iStack_54 + iVar8) + 2);
                    uStack_50 = CONCAT22(*(undefined2 *)
                                          (*(int *)(*(int *)(iStack_54 + iVar8) + 0xc) + 4),
                                         *(undefined2 *)
                                          (*(int *)(*(int *)(iStack_54 + iVar8) + 0xc) + 2));
                    uVar4 = uVar4 + 1;
                    *(undefined4 *)(a5 + 8) = uStack_50;
                  } while (uVar4 < uStack_58);
                }
              }
              iVar8 = ar4 + 0xf4;
              (**(code **)(iVar10 + 0x18))(iStack_54,iVar8,ar6_00,ar7_00);
              uVar3 = uStack_44;
            }
          }
          ar7_01 = 0;
          uVar5 = 0;
          uVar3 = FUN_8c120348(ar4 + 0x48,0x20,0,0);
          if (((uVar3 & 0xff) == 0) &&
             (uVar3 = FUN_8c11d432(ar4,1,uVar5,ar7_01), (uVar3 & 0xff) == 0)) {
            uVar3 = (**(code **)(ar4 + 0xc4))(iStack_48,ar4 + 0xf4,uVar5,ar7_01);
            FUN_8c11c7b8(ar4,iStack_48,uVar5,ar7_01);
            if ((uVar3 & 0xff) != 0) {
              return uVar3;
            }
            (**(code **)(iVar10 + 0x18))(a4,ar4 + 0xf4,uVar5,ar7_01);
            uVar3 = FUN_8c11c99a(ar4,2,uVar5,ar7_01);
            if ((uVar3 & 0xff) == 0) {
              uVar5 = 0;
              uVar3 = FUN_8c120348(ar4 + 0x48,0x15,0,0);
              if (((uVar3 & 0xff) == 0) &&
                 (iVar10 = FUN_8c11dda2(ar4,1,uStack_38,uVar5), iVar10 == 0)) {
                *(undefined2 *)(ar4 + 0x144) = 0;
                goto LAB_8c11f120;
              }
            }
          }
        }
      }
    }
LAB_8c11f0fa:
    uVar5 = 1;
  }
  return uVar5;
}

__asm__(".globl _FUN_8c11ec7c\n.set _FUN_8c11ec7c, _FUN_8c11ec7c_def\n");
