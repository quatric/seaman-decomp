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
undefined4 FUN_8c11ec7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ec7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
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
  undefined8 in_dr12 = 0;
  undefined8 uVar13;
  float fVar14;
  undefined8 in_dr14 = 0;
  code *pcVar15;
  char cVar16;
  
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)in_dr14;
  (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)in_dr12;
  (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_dr12 >> 0x20);
  iVar10 = *(int *)(unsigned)(ar4 + 0xfc);
  (*(uint *)(fr0_ - 0x40)) = 0x1e;
  if (*(int *)(unsigned)(ar4 + 0x14c) == 0) {
LAB_8c11f120:
    uVar5 = 0;
  }
  else {
    (*(int *)(fr0_ - 0x34)) = ar4;
    a4 = (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar10 + 0x14))))(0x78,ar4 + 0xf4,ar6,ar7));
    fVar14 = (float)in_dr14;
    if (a4 == 0) {
      uVar5 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c11cd02(iVar10,1,ar6,ar7));
      return uVar5;
    }
    iVar8 = *(int *)(unsigned)(ar4 + 0x14c);
    iVar9 = *(int *)(unsigned)(iVar8 + 0xc);
    (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(unsigned)(iVar8 + 0x10))));
    uVar1 = *(ushort *)(unsigned)(iVar9 + 0x14);
    *(undefined4 *)(unsigned)(iVar8 + 0x10) = 0;
    ({ unsigned long t0_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c11c5e4(ar4,&(*(int *)(fr0_ - 0x48)),*(undefined4 *)(unsigned)(ar4 + 0x14c),0); });
    ar7_00 = (uint *)(unsigned)0x0;
    *(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x14c) + 0x10) = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x4c));
    (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((*(int *)(fr0_ - 0x48)) + 4) + 0x14))));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c120348(ar4 + 0x48,0x11,0,0));
    if (((uVar3 & 0xff) == 0) && (iVar8 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c11dc7e(ar4,1,&(*(undefined4 *)(fr0_ - 0x38)),ar7_00)), iVar8 == 0)) {
      ar6_00 = (int *)(unsigned)0x0;
      iVar8 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c11dda2(ar4,1,0,ar7_00));
      if (iVar8 == 0) {
        iVar8 = 0;
        cVar16 = '\0';
        uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c11d432(ar4,0,ar6_00,ar7_00));
        if ((uVar3 & 0xff) == 0) {
          uVar3 = (uint)uVar1;
          if (cVar16 == '\0') {
            uVar13 = 0x445925b1;
            pcVar15 = (code *)0x3a83126e;
          }
          else {
            uVar13 = 0x445925b100000000;
            fVar14 = 0.0009999999;
            pcVar15 = ((void *)0x8c12212e);
          }
          while( true ) {
            (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x4c)) + 4));
            iVar9 = *(int *)(unsigned)(iVar9 + 0x10);
            if (*(int *)(unsigned)(iVar9 + 0x10) == 0) break;
            (*(uint *)(fr0_ - 0x44)) = (uint)*(ushort *)(unsigned)(iVar9 + 0x14);
            uVar4 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c12212e(ar4,iVar8,ar6_00,ar7_00));
            if (((uVar4 & 0xff) != 0) ||
               (uVar4 = ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c12215c(ar4,((undefined1 *)(unsigned)0x8c127c1d),0,uVar3); }), (uVar4 & 0xff) != 0))
            goto LAB_8c11f0fa;
            ar6_00 = &(*(int *)(fr0_ - 0x54));
            ar7_00 = &(*(uint *)(fr0_ - 0x58));
            uVar4 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c120348(ar4 + 0x48,0x20,ar6_00,&(*(uint *)(fr0_ - 0x58))));
            if (((uVar4 & 0xff) != 0) ||
               (uVar4 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c120284((*(int *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c127c1d),ar6_00,ar7_00)), (uVar4 & 0xff) != 0))
            goto LAB_8c11f0fa;
            iVar8 = ar4 + 0xf4;
            (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar10 + 0x18))))(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x4c))[3],iVar8,ar6_00,ar7_00));
            puVar2 = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x4c));
            *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x4c)) = (*(uint *)(fr0_ - 0x58));
            if ((*(uint *)(fr0_ - 0x58)) != 0) {
              a5 = ar4 + 0xf4;
              iVar8 = (*(uint *)(fr0_ - 0x58)) * 0xc;
              cVar16 = '\0';
              uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar10 + 0x14))))(iVar8,a5,ar6_00,ar7_00));
              puVar2[3] = uVar3;
              if ((*(uint *)(fr0_ - 0x40)) < (*(uint *)(fr0_ - 0x58))) {
                (*(uint *)(fr0_ - 0x40)) = (*(uint *)(fr0_ - 0x58));
                (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar10 + 0x18))))(a4,ar4 + 0xf4,ar6_00,ar7_00));
                iVar8 = (*(uint *)(fr0_ - 0x40)) << 2;
                a5 = ar4 + 0xf4;
                cVar16 = '\0';
                a4 = (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar10 + 0x14))))(iVar8,a5,ar6_00,ar7_00));
              }
              if (cVar16 == '\0') {
                fVar14 = F32HI(uVar13);
              }
              uVar4 = 0;
              if ((*(uint *)(fr0_ - 0x58)) != 0) {
                do {
                  (*(int *)(fr0_ - 0x3c)) = uVar4 * 4;
                  pfVar7 = (float *)(unsigned)((*(int *)(fr0_ - 0x3c)) + a4);
                  uVar11 = 0x408f400000000000;
                  cVar16 = '\0';
                  (vsp = ((unsigned long)(fr0_ - 88)), thunk_FUN_8c013cd8(iVar8,a5,ar6_00,ar7_00));
                  uVar4 = uVar4 + 1;
                  fVar12 = F32HI(uVar11);
                  if (cVar16 == '\0') {
                    *pfVar7 = fVar12;
                  }
                  else {
                    *(undefined8 *)(unsigned)pfVar7 = uVar11;
                  }
                  fVar14 = fVar14 + fVar12;
                } while (uVar4 < (*(uint *)(fr0_ - 0x58)));
                uVar4 = 0;
                if ((*(uint *)(fr0_ - 0x58)) != 0) {
                  do {
                    fVar12 = F32HI(uVar11);
                    if (*(float *)(unsigned)(uVar4 * 4 + a4) / fVar14 <= (float)(uint)pcVar15) {
                      *(undefined4 *)(unsigned)(uVar4 * 0xc + uVar3) = 6000;
                    }
                    else {
                      piVar6 = (int *)(unsigned)(uVar4 * 0xc + uVar3);
                      (vsp = ((unsigned long)(fr0_ - 88)), thunk_FUN_8c013dfc(iVar8,a5,ar6_00,ar7_00));
                      uVar11 = 0x3fe0000000000000;
                      *piVar6 = (int)(-(fVar12 * (float)uVar13) + 0.5);
                    }
                    iVar8 = uVar4 * 4;
                    a5 = uVar4 * 0xc + uVar3;
                    *(int *)(unsigned)(a5 + 4) = (int)*(short *)(unsigned)(*(int *)(unsigned)((*(int *)(fr0_ - 0x54)) + iVar8) + 2);
                    (*(undefined4 *)(fr0_ - 0x50)) = CONCAT22(*(undefined2 *)(unsigned)
                                          (*(int *)(unsigned)(*(int *)(unsigned)((*(int *)(fr0_ - 0x54)) + iVar8) + 0xc) + 4),
                                         *(undefined2 *)(unsigned)
                                          (*(int *)(unsigned)(*(int *)(unsigned)((*(int *)(fr0_ - 0x54)) + iVar8) + 0xc) + 2));
                    uVar4 = uVar4 + 1;
                    *(undefined4 *)(unsigned)(a5 + 8) = (*(undefined4 *)(fr0_ - 0x50));
                  } while (uVar4 < (*(uint *)(fr0_ - 0x58)));
                }
              }
              iVar8 = ar4 + 0xf4;
              (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar10 + 0x18))))((*(int *)(fr0_ - 0x54)),iVar8,ar6_00,ar7_00));
              uVar3 = (*(uint *)(fr0_ - 0x44));
            }
          }
          ar7_01 = 0;
          uVar5 = 0;
          uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c120348(ar4 + 0x48,0x20,0,0));
          if (((uVar3 & 0xff) == 0) &&
             (uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c11d432(ar4,1,uVar5,ar7_01)), (uVar3 & 0xff) == 0)) {
            uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0xc4))))((*(int *)(fr0_ - 0x48)),ar4 + 0xf4,uVar5,ar7_01));
            (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c11c7b8(ar4,(*(int *)(fr0_ - 0x48)),uVar5,ar7_01));
            if ((uVar3 & 0xff) != 0) {
              return uVar3;
            }
            (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar10 + 0x18))))(a4,ar4 + 0xf4,uVar5,ar7_01));
            uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c11c99a(ar4,2,uVar5,ar7_01));
            if ((uVar3 & 0xff) == 0) {
              uVar5 = 0;
              uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c120348(ar4 + 0x48,0x15,0,0));
              if (((uVar3 & 0xff) == 0) &&
                 (iVar10 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c11dda2(ar4,1,(*(undefined4 *)(fr0_ - 0x38)),uVar5)), iVar10 == 0)) {
                *(undefined2 *)(unsigned)(ar4 + 0x144) = 0;
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
