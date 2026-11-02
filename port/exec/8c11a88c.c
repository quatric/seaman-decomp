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
int FUN_8c11a88c_def(int *ar4,short *ar5,short *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11a88c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  int *piVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int *a7;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar4 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c11a634(ar4,((int * *)(fr0_ - 0x38)),ar6,ar7));
  if (uVar4 == 0) {
    iVar6 = (int)0x80;
    *(undefined4 *)(unsigned)(iVar6 + (int)ar4) = 0;
  }
  else {
    (*(int *)(fr0_ - 0x30)) = -1;
    uVar10 = 0;
    (*(int *)(fr0_ - 0x34)) = 0;
    (*(int *)(fr0_ - 0x28)) = 0;
    (*(int *)(fr0_ - 0x2c)) = 0;
    sVar2 = *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) + 2);
    a7 = (int *)(unsigned)(int)sVar2;
    iVar7 = 0;
    if (uVar4 != 0) {
      do {
        uVar10 = uVar10 + 1;
        ar6 = (short *)(unsigned)(*(int *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) + iVar7) + 2);
        *ar6 = *ar6 - sVar2;
        iVar7 = iVar7 + 4;
      } while (uVar10 < uVar4);
    }
    if ((((undefined *)(unsigned long)*(unsigned *)(unsigned)((int)0x130 + (int)ar4)) == ((void *)(unsigned)0x8c11617a)) &&
       ((*(char *)(unsigned)((int)0xf8 + (int)ar4) == '\0' || (((uint)ar5 & 0xff) != 0)))) {
      uVar10 = 1;
      ar6 = ar5;
      iVar7 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c11a0e8(ar4,*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38)),ar5,a7));
      iVar6 = iVar7;
      if ((iVar7 != 0) && (iVar5 = iVar7, 1 < *(uint *)(unsigned)((int)0x138 + (int)ar4))) {
        do {
          uVar8 = 1;
          iVar6 = *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38));
          sVar2 = *(short *)(unsigned)(iVar6 + 2);
          if (1 < uVar4) {
            sVar3 = *(short *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38))[1] + 2);
            while (sVar3 < sVar2) {
              iVar9 = uVar8 - 1;
              piVar1 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) + uVar8;
              uVar8 = uVar8 + 1;
              ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38))[iVar9] = *piVar1;
              if (uVar4 <= uVar8) break;
              sVar3 = *(short *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38))[uVar8] + 2);
            }
          }
          ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38))[uVar8 - 1] = iVar6;
          ar6 = ar5;
          iVar6 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c11a0e8(ar4,*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38)),ar5,a7));
          *(int *)(unsigned)(iVar5 + 0x10) = iVar6;
          uVar10 = uVar10 + 1;
        } while ((iVar6 != 0) && (iVar5 = iVar6, uVar10 < *(uint *)(unsigned)((int)0x138 + (int)ar4)));
      }
      if (iVar6 != 0) {
        *(undefined4 *)(unsigned)(iVar6 + 0x10) = 0;
      }
    }
    else {
      uVar10 = *(uint *)(unsigned)((int)0x138 + (int)ar4);
      if (uVar4 <= *(uint *)(unsigned)((int)0x138 + (int)ar4)) {
        uVar10 = uVar4;
      }
      iVar6 = uVar10 << 2;
      iVar7 = 0;
      while (uVar10 != 0) {
        iVar6 = iVar6 + -4;
        uVar10 = uVar10 - 1;
        a7 = &(*(int *)(fr0_ - 0x30));
        ar6 = ar5;
        iVar5 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c119c68(ar4,*(undefined4 *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) + iVar6),ar5,a7));
        if (iVar5 != 0) {
          *(int *)(unsigned)(iVar5 + 0x10) = iVar7;
          iVar7 = iVar5;
        }
      }
    }
    *(int *)(unsigned)((int)0x80 + (int)ar4) = iVar7;
    (*(int *)(fr0_ - 0x24)) = *ar4;
    iVar6 = (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x24)) + 0x18))))((*(int *)(fr0_ - 0x24)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38)),ar6,a7));
    if ((iVar7 != 0) && (((uint)ar5 & 0xff) == 0)) {
      iVar11 = (*(int *)(fr0_ - 0x28)) + (*(int *)(fr0_ - 0x2c));
      iVar9 = *(int *)(unsigned)((int)0x1d0 + (int)ar4);
      iVar12 = ((*(int *)(fr0_ - 0x30)) + *(int *)(unsigned)((int)0x12c + (int)ar4)) - (*(int *)(fr0_ - 0x34));
      iVar13 = *(int *)(unsigned)(*(int *)(unsigned)((int)0x12c + (int)ar4) * 4 + iVar9);
      iVar5 = *(int *)(unsigned)((*(int *)(fr0_ - 0x34)) * 4 + iVar9);
      iVar6 = (*(int *)(fr0_ - 0x30)) * 4;
      iVar9 = *(int *)(unsigned)(iVar6 + iVar9);
      for (; iVar7 != 0; iVar7 = *(int *)(unsigned)(iVar7 + 0x10)) {
        iVar6 = (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c119a18))))
                          ((uint)*(ushort *)(unsigned)(iVar7 + 0x14) - iVar12,*(int *)(unsigned)(iVar7 + 8) - iVar11,
                           *(int *)(unsigned)(iVar7 + 4) - ((iVar13 - iVar5) + iVar9),a7));
        *(int *)(unsigned)(iVar7 + 4) = iVar6;
      }
    }
  }
  return iVar6;
}

__asm__(".globl _FUN_8c11a88c\n.set _FUN_8c11a88c, _FUN_8c11a88c_def\n");
