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
uint FUN_8c1113d0_def(int *ar4,undefined4 ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c1113d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  bool bVar1;
  int *piVar2;
  int *extraout_r2 = 0;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar7 = 1;
  uVar10 = 1;
  iVar8 = ar6 * 4;
  if ((char)ar5 == '\x01') {
    ar4[6] = ar4[5];
    ar4[0xf] = 0;
    uVar3 = 0;
    if (ar4[5] != 0) {
      do {
        iVar8 = uVar3 * 4;
        uVar3 = uVar3 + 1;
        *(int *)(unsigned)(ar4[0xb] + iVar8) = ar4[9];
        *(undefined4 *)(unsigned)(ar4[0x10] + iVar8) = 0;
      } while (uVar3 < (uint)ar4[5]);
    }
  }
  else if ((char)ar5 == '\x02') {
    ar4[6] = ar4[5];
    ar4[0xf] = 0;
    uVar10 = 0;
    if (ar4[5] != 0) {
      do {
        iVar8 = uVar10 * 4;
        uVar10 = uVar10 + 1;
        *(int *)(unsigned)(ar4[0xb] + iVar8) = ar4[9];
        *(undefined4 *)(unsigned)(ar4[0x10] + iVar8) = 0;
      } while (uVar10 < (uint)ar4[5]);
    }
    uVar10 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1117e4(ar4,(uint)*(ushort *)(unsigned)((int)ar4 + 0xe),1,ar7));
  }
  else if ((char)ar5 == '\x03') {
    ar4[6] = ar4[5];
    ar4[0xf] = 0;
    uVar10 = 0;
    if (ar4[5] != 0) {
      do {
        iVar8 = uVar10 * 4;
        uVar10 = uVar10 + 1;
        *(int *)(unsigned)(ar4[0xb] + iVar8) = ar4[9];
        *(undefined4 *)(unsigned)(ar4[0x10] + iVar8) = 0;
      } while (uVar10 < (uint)ar4[5]);
    }
    uVar10 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1117e4(ar4,ar6,1,ar7));
  }
  else if ((char)ar5 == '\x04') {
    uVar3 = 0;
    if (ar4[5] != 0) {
      do {
        iVar8 = uVar3 * 4;
        uVar3 = uVar3 + 1;
        *(int *)(unsigned)(ar4[0xb] + iVar8) = ar4[9];
        *(int *)(unsigned)(ar4[0x10] + iVar8) = ar4[0xf];
      } while (uVar3 < (uint)ar4[5]);
    }
    ar4[10] = ar4[9];
    *(undefined1 *)(unsigned)(ar4 + 0xc) = 0;
    ar4[6] = 0;
    uVar3 = 0;
    if (ar4[5] != 0) {
      do {
        uVar4 = uVar3 + 1;
        *(undefined4 *)(unsigned)(uVar3 * 4 + ar4[0xb]) = 0;
        uVar3 = uVar4;
      } while (uVar4 < (uint)ar4[5]);
    }
    iVar8 = ar4[0xe];
    while (iVar8 != 0) {
      if (*(int *)(unsigned)(iVar8 + 0xc) != ar6) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c120948(*(undefined4 *)(unsigned)(iVar8 + 0xc),*ar4,uVar7,ar7));
        uVar10 = uVar10 | uVar3;
      }
      iVar9 = *(int *)(unsigned)(iVar8 + 0x10);
      (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,iVar8,uVar7,ar7));
      iVar8 = iVar9;
    }
    ar4[0xe] = 0;
  }
  else if ((char)ar5 == '\x05') {
    if (*(int *)(unsigned)(ar4[0xb] + iVar8) == 0) {
      *(int *)(unsigned)(ar4[0xb] + iVar8) = ar4[9];
      *(int *)(unsigned)(ar4[0x10] + iVar8) = ar4[0xf];
      if (ar4[6] == 0) {
        ar4[10] = ar4[9];
      }
      ar4[6] = ar4[6] + 1;
    }
  }
  else if ((char)ar5 == '\x06') {
    if ((*(int *)(unsigned)(ar4[0xb] + iVar8) != 0) && (ar4[0xe] == 0)) {
      iVar5 = *(int *)(unsigned)(ar4[0xb] + iVar8);
      *(int *)(unsigned)(ar4[0xb] + iVar8) = 0;
      iVar9 = ar4[6];
      ar4[6] = iVar9 + -1;
      if (iVar9 + -1 == 0) {
        ar4[10] = ar4[9];
      }
      else if (iVar5 == ar4[10]) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c111342(ar4,iVar5,1,ar7); });
      }
      *(int *)(unsigned)(ar4[0x10] + iVar8) = ar4[0xf];
    }
  }
  else if ((char)ar5 == '\a') {
    if (*(int *)(unsigned)(ar4[0xb] + iVar8) == 0) {
      *(int *)(unsigned)(ar4[0xb] + iVar8) = ar4[9];
      *(int *)(unsigned)(ar4[0x10] + iVar8) = ar4[0xf];
      ar4[6] = ar4[6] + 1;
    }
    uVar10 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c11189a(ar4,ar6,ar7,ar7));
  }
  else if ((char)ar5 == -8) {
    if ((*(char *)(unsigned)((int)ar4 + 0x31) != '\0') && (ar4[6] != 0)) {
      bVar1 = false;
      iVar9 = ar4[0xe];
      iVar8 = 0;
      while (iVar5 = iVar9, iVar5 != 0) {
        if (*(int *)(unsigned)(iVar5 + 0xc) == ar6) {
          bVar1 = true;
        }
        iVar8 = iVar5;
        iVar9 = *(int *)(unsigned)(iVar5 + 0x10);
      }
      if (!bVar1) {
        *(int *)(unsigned)(ar6 + 4) = *(int *)(unsigned)(ar6 + 4) + 1;
        iVar9 = ar7;
        iVar5 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x10))))(*ar4,0x14,1,ar7));
        uVar7 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x10))))(*ar4,ar4[5] << 2,uVar7,iVar9));
        uVar6 = 0x80000000;
        *(undefined4 *)(unsigned)(iVar5 + 8) = uVar7;
        uVar3 = 0;
        if (ar4[5] != 0) {
          do {
            if (*(int *)(unsigned)(uVar3 * 4 + ar4[0xb]) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar5 + 8) + uVar3 * 4) = uVar6;
            }
            else if ((*(int *)(unsigned)(ar4[0xb] + uVar3 * 4) == ar4[9]) &&
                    (*(int *)(unsigned)(ar4[0x10] + uVar3 * 4) != ar4[0xf])) {
              *(int *)(unsigned)(*(int *)(unsigned)(iVar5 + 8) + uVar3 * 4) = ar4[2] + ar7;
            }
            else {
              if ((uint)ar4[9] < *(uint *)(unsigned)(ar4[0xb] + uVar3 * 4)) {
                iVar9 = libgcc_divide_helper_010468
                                  ((ar4[9] + ar4[4]) - *(int *)(unsigned)(ar4[0xb] + uVar3 * 4),
                                   (uint)*(ushort *)(unsigned)(ar4 + 3));
                piVar2 = extraout_r2;
              }
              else {
                piVar2 = (int *)(unsigned)(*(int *)(unsigned)(iVar5 + 8) + uVar3 * 4);
                iVar9 = libgcc_divide_helper_010468
                                  (ar4[9] - *(int *)(unsigned)(ar4[0xb] + uVar3 * 4),
                                   (uint)*(ushort *)(unsigned)(ar4 + 3));
              }
              *piVar2 = iVar9 + ar7;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < (uint)ar4[5]);
        }
        *(int *)(unsigned)(iVar5 + 4) = ar4[6];
        *(int *)(unsigned)(iVar5 + 0xc) = ar6;
        *(undefined4 *)(unsigned)(iVar5 + 0x10) = 0;
        if (iVar8 == 0) {
          ar4[0xe] = iVar5;
        }
        else {
          *(int *)(unsigned)(iVar8 + 0x10) = iVar5;
        }
      }
    }
  }
  else if ((char)ar5 == -1) {
    iVar8 = ar4[0xe];
    if (ar4[7] != 0) {
      (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar4[7],1,ar7));
    }
    if (ar4[0xb] != 0) {
      (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar4[0xb],uVar7,ar7));
      (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar4[0xd],uVar7,ar7));
      (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar4[0x10],uVar7,ar7));
    }
    while (iVar8 != 0) {
      iVar9 = *(int *)(unsigned)(iVar8 + 0x10);
      (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,iVar8,uVar7,ar7));
      iVar8 = iVar9;
    }
    (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar4,uVar7,ar7));
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}

__asm__(".globl _FUN_8c1113d0\n.set _FUN_8c1113d0, _FUN_8c1113d0_def\n");
