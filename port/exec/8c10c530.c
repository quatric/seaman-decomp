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
undefined4 FUN_8c10c530_def(int ar4,float *ar5,float *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c10c530";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float in_fr3 = 0;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float in_fr5 = 0;
  ulonglong uVar17;
  undefined8 in_xd2 = 0;
  undefined8 uVar18;
  undefined8 in_xd4 = 0;
  char cVar19;
  
  iVar9 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10));
  pfVar12 = (float *)(unsigned)0x0;
  if (*(char *)(unsigned)(iVar9 + 0x30) == '\0') {
    if (*(char *)(unsigned)(ar4 + 0x58) == '\0') {
      ar5 = (float *)(unsigned)0x1;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c112170(*(undefined4 *)(unsigned)(ar4 + 0xc),1,ar6,ar7));
      if ((uVar1 & 0xff) != 0) {
        cVar19 = '\0';
        pfVar2 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 36)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1]
                                       ,ar6,ar7));
        iVar5 = ar4 + 0x34;
        uVar1 = (uint)*(ushort *)(unsigned)(ar4 + 0x2c);
        pfVar3 = ((float *)(unsigned long)*(unsigned *)(unsigned)((uVar1 & 7) * 4 + iVar5));
        pfVar10 = ((float *)(unsigned long)*(unsigned *)(unsigned)((uVar1 + 7 & 7) * 4 + iVar5));
        pfVar8 = (float *)(unsigned)(*(int *)(unsigned)((uVar1 + 6 & 7) * 4 + iVar5) + 4);
        pfVar6 = ((float *)(unsigned long)*(unsigned *)(unsigned)((uVar1 + 5 & 7) * 4 + iVar5));
        if (cVar19 == '\0') {
          in_fr5 = *pfVar2;
          pfVar2 = pfVar2 + 1;
        }
        else {
          in_xd4 = *(undefined8 *)(unsigned)pfVar2;
          pfVar2 = pfVar2 + 2;
        }
        pfVar7 = ((float *)(unsigned long)*(unsigned *)(unsigned)((uVar1 + 4 & 7) * 4 + iVar5));
        *(int *)(unsigned)(ar4 + 0x28) = *(int *)(unsigned)(ar4 + 0x28) + 1;
        if (cVar19 == '\0') {
          *pfVar3 = in_fr5;
          fVar13 = 2.0;
        }
        else {
          *(undefined8 *)(unsigned)pfVar3 = in_xd4;
          in_fr5 = 2.0;
          fVar13 = 0.19999999;
        }
        pfVar3 = pfVar3 + 3;
        pfVar12 = pfVar6 + 1;
        pfVar11 = pfVar10 + 3;
        *pfVar8 = (((in_fr5 * fVar13 - *pfVar7 * fVar13) + *pfVar10) - *pfVar6) * 0.19999999;
        in_fr3 = 0.19999999;
        in_fr5 = 1.0;
        pfVar6[2] = (*pfVar8 - pfVar7[1]) * 1.0;
        pfVar6 = pfVar6 + 3;
        (*(int *)(fr0_ - 0x24)) = 0;
        pfVar8 = pfVar8 + *(ushort *)(unsigned)(ar4 + 0x2e) + 2;
        ar5 = pfVar7 + 3;
        if (*(short *)(unsigned)(ar4 + 0x2e) != 0) {
          do {
            pfVar2 = pfVar2 + 1;
            *pfVar3 = *pfVar2;
            pfVar3 = pfVar3 + 1;
            fVar14 = *pfVar11;
            pfVar11 = pfVar11 + 1;
            fVar15 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            fVar16 = *ar5;
            ar5 = ar5 + 1;
            in_fr3 = (((fVar13 * *pfVar2 + fVar14) - fVar15) - fVar16 * fVar13) * 0.375;
            *pfVar8 = in_fr3;
            (*(int *)(fr0_ - 0x24)) = (*(int *)(fr0_ - 0x24)) + 1;
            pfVar8 = pfVar8 + 1;
          } while ((*(int *)(fr0_ - 0x24)) < (int)(uint)*(ushort *)(unsigned)(ar4 + 0x2e));
        }
        ar6 = pfVar8 + -(uint)*(ushort *)(unsigned)(ar4 + 0x2e);
        pfVar6 = pfVar6 + *(ushort *)(unsigned)(ar4 + 0x2e);
        ar7 = 0;
        if (*(short *)(unsigned)(ar4 + 0x2e) != 0) {
          do {
            ar7 = ar7 + 1;
            fVar13 = *ar6;
            ar6 = ar6 + 1;
            in_fr3 = *ar5;
            ar5 = ar5 + 1;
            *pfVar6 = (fVar13 - in_fr3) * 1.0;
            pfVar6 = pfVar6 + 1;
          } while (ar7 < (int)(uint)*(ushort *)(unsigned)(ar4 + 0x2e));
        }
      }
    }
    if (*(char *)(unsigned)(ar4 + 0x58) != '\0') {
      iVar5 = *(int *)(unsigned)(ar4 + 0x28) + -1;
      *(int *)(unsigned)(ar4 + 0x28) = iVar5;
      if (iVar5 == 4) {
        *(undefined1 *)(unsigned)(ar4 + 0x58) = 0;
      }
      pfVar12 = (float *)(unsigned)(*(int *)(unsigned)((*(ushort *)(unsigned)(ar4 + 0x2c) + 5 & 7) * 4 + ar4 + 0x34) + 4);
    }
    if (pfVar12 != (float *)(unsigned)0x0) {
      if (3 < *(uint *)(unsigned)(ar4 + 0x28)) {
        cVar19 = '\0';
        pfVar3 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 36)), FUN_8c111dfe(iVar9,ar5,ar6,ar7));
        if (*(uint *)(unsigned)(ar4 + 0x28) < 7) {
          if (cVar19 == '\0') {
            uVar17 = (ulonglong)(uint)in_fr5;
          }
          else {
            uVar17 = 0x233853ea00000000;
          }
          fVar13 = (float)(uVar17 >> 0x20);
          if (*(int *)(unsigned)(ar4 + 0x28) == 6) {
            if (cVar19 == '\0') {
              in_fr3 = *pfVar12;
              pfVar12 = pfVar12 + 1;
            }
            else {
              in_xd2 = *(undefined8 *)(unsigned)pfVar12;
              pfVar12 = pfVar12 + 2;
            }
            iVar9 = 0;
            if (cVar19 == '\0') {
              *pfVar3 = in_fr3;
              pfVar3[1] = fVar13;
            }
            else {
              *(undefined8 *)(unsigned)pfVar3 = in_xd2;
              *(ulonglong *)(unsigned)(pfVar3 + 1) = uVar17;
            }
            pfVar12 = pfVar12 + 1;
            pfVar3 = pfVar3 + 2;
            if (*(short *)(unsigned)(ar4 + 0x2e) != 0) {
              do {
                if (cVar19 == '\0') {
                  fVar14 = *pfVar12;
                  pfVar12 = pfVar12 + 1;
                  *pfVar3 = fVar14;
                }
                else {
                  uVar18 = *(undefined8 *)(unsigned)pfVar12;
                  pfVar12 = pfVar12 + 2;
                  *(undefined8 *)(unsigned)pfVar3 = uVar18;
                }
                iVar9 = iVar9 + 1;
                pfVar3 = pfVar3 + 1;
              } while (iVar9 < (int)((uint)*(ushort *)(unsigned)(ar4 + 0x2e) << 1));
            }
            iVar9 = 0;
            if (*(short *)(unsigned)(ar4 + 0x2e) != 0) {
              do {
                iVar9 = iVar9 + 1;
                if (cVar19 == '\0') {
                  *pfVar3 = fVar13;
                }
                else {
                  *(ulonglong *)(unsigned)pfVar3 = uVar17;
                }
                pfVar3 = pfVar3 + 1;
              } while (iVar9 < (int)(uint)*(ushort *)(unsigned)(ar4 + 0x2e));
            }
          }
          else {
            if (cVar19 == '\0') {
              *pfVar3 = fVar13;
            }
            else {
              *(ulonglong *)(unsigned)pfVar3 = uVar17;
            }
            iVar9 = 0;
            if (cVar19 == '\0') {
              pfVar3[1] = fVar13;
            }
            else {
              *(ulonglong *)(unsigned)(pfVar3 + 1) = uVar17;
            }
            pfVar12 = pfVar12 + 2;
            pfVar3 = pfVar3 + 2;
            if (*(short *)(unsigned)(ar4 + 0x2e) != 0) {
              do {
                if (cVar19 == '\0') {
                  fVar14 = *pfVar12;
                  pfVar12 = pfVar12 + 1;
                  *pfVar3 = fVar14;
                }
                else {
                  uVar18 = *(undefined8 *)(unsigned)pfVar12;
                  pfVar12 = pfVar12 + 2;
                  *(undefined8 *)(unsigned)pfVar3 = uVar18;
                }
                iVar9 = iVar9 + 1;
                pfVar3 = pfVar3 + 1;
              } while (iVar9 < (int)(uint)*(ushort *)(unsigned)(ar4 + 0x2e));
            }
            iVar9 = 0;
            if (*(short *)(unsigned)(ar4 + 0x2e) != 0) {
              do {
                iVar9 = iVar9 + 1;
                if (cVar19 == '\0') {
                  *pfVar3 = fVar13;
                }
                else {
                  *(ulonglong *)(unsigned)pfVar3 = uVar17;
                }
                pfVar3 = pfVar3 + 1;
              } while (iVar9 < (int)((uint)*(ushort *)(unsigned)(ar4 + 0x2e) << 1));
            }
          }
        }
        else {
          iVar9 = 0;
          if (0 < (int)(*(ushort *)(unsigned)(ar4 + 0x30) - 1)) {
            do {
              if (cVar19 == '\0') {
                fVar13 = *pfVar12;
                pfVar12 = pfVar12 + 1;
                *pfVar3 = fVar13;
              }
              else {
                uVar18 = *(undefined8 *)(unsigned)pfVar12;
                pfVar12 = pfVar12 + 2;
                *(undefined8 *)(unsigned)pfVar3 = uVar18;
              }
              iVar9 = iVar9 + 1;
              pfVar3 = pfVar3 + 1;
            } while (iVar9 < (int)(*(ushort *)(unsigned)(ar4 + 0x30) - 1));
          }
        }
      }
      if (pfVar12 != (float *)(unsigned)0x0) {
        *(ushort *)(unsigned)(ar4 + 0x2c) = (short)*(char *)(unsigned)(ar4 + 0x2c) + 1U & 7;
      }
    }
  }
  iVar9 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  if ((*(int *)(unsigned)((((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1] * 4 + *(int *)(unsigned)(iVar9 + 0x40)) == *(int *)(unsigned)(iVar9 + 0x3c))
     && (*(char *)(unsigned)(ar4 + 0x58) == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c10c530\n.set _FUN_8c10c530, _FUN_8c10c530_def\n");
