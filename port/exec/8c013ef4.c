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
undefined4 * memmove_def(undefined4 *ar4,undefined4 *ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "memmove";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  if ((ar4 != ar5) && (ar6 != 0)) {
    uVar6 = ar6 >> 1;
    uVar5 = (uint)ar4 | (uint)ar5 | ar6;
    uVar7 = ar6 >> 2;
    if (ar4 < ar5) {
      puVar3 = ar4;
      if ((uVar5 & 1) == 0) {
        if ((uVar5 & 3) == 0) {
          do {
            uVar4 = *ar5;
            ar5 = ar5 + 1;
            uVar7 = uVar7 - 1;
            *puVar3 = uVar4;
            puVar3 = puVar3 + 1;
          } while (uVar7 != 0);
        }
        else {
          do {
            uVar2 = *(undefined2 *)(unsigned)ar5;
            ar5 = (undefined4 *)(unsigned)((int)ar5 + 2);
            uVar6 = uVar6 - 1;
            *(undefined2 *)(unsigned)puVar3 = uVar2;
            puVar3 = (undefined4 *)(unsigned)((int)puVar3 + 2);
          } while (uVar6 != 0);
        }
      }
      else {
        do {
          uVar1 = *(undefined1 *)(unsigned)ar5;
          ar5 = (undefined4 *)(unsigned)((int)ar5 + 1);
          ar6 = ar6 - 1;
          *(undefined1 *)(unsigned)puVar3 = uVar1;
          puVar3 = (undefined4 *)(unsigned)((int)puVar3 + 1);
        } while (ar6 != 0);
      }
    }
    else {
      puVar3 = (undefined4 *)(unsigned)((int)ar4 + ar6);
      puVar8 = (undefined4 *)(unsigned)((int)ar5 + ar6);
      if ((uVar5 & 1) == 0) {
        if ((uVar5 & 3) == 0) {
          do {
            puVar8 = puVar8 + -1;
            uVar7 = uVar7 - 1;
            puVar3 = puVar3 + -1;
            *puVar3 = *puVar8;
          } while (uVar7 != 0);
        }
        else {
          do {
            puVar8 = (undefined4 *)(unsigned)((int)puVar8 + -2);
            uVar6 = uVar6 - 1;
            puVar3 = (undefined4 *)(unsigned)((int)puVar3 + -2);
            *(undefined2 *)(unsigned)puVar3 = *(undefined2 *)(unsigned)puVar8;
          } while (uVar6 != 0);
        }
      }
      else {
        do {
          puVar8 = (undefined4 *)(unsigned)((int)puVar8 + -1);
          ar6 = ar6 - 1;
          puVar3 = (undefined4 *)(unsigned)((int)puVar3 + -1);
          *(undefined1 *)(unsigned)puVar3 = *(undefined1 *)(unsigned)puVar8;
        } while (ar6 != 0);
      }
    }
  }
  return ar4;
}

__asm__(".globl _memmove\n.set _memmove, _memmove_def\n");
