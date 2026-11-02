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
int FUN_8c10c0b4_def(undefined4 *ar4,uint *ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c0b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 **a5;
  uint *puVar5;
  uint *puVar6;
  uint *a7;
  uint *puVar7;
  int ar6_00;
  int ar4_00;
  
  a5 = ((undefined4 * *)(fr0_ - 0x2c));
  (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)((uint *)(unsigned)0x0));
  iVar3 = ar4[1];
  (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(iVar3 + 4);
  (*(undefined4 *)(fr0_ - 0x24)) = ar4[2];
  uVar4 = ar6;
  (*(int *)(fr0_ - 0x30)) = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c10bb9a(ar4,a5,ar6,ar7));
  if ((*(int *)(fr0_ - 0x30)) == 0) {
    ar4_00 = *(int *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x2c));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c10afbe(ar4_00,a5,uVar4,ar7));
    iVar2 = 0x80000000;
    uVar4 = 0;
    ar6_00 = ar6 + *(int *)(unsigned)(0xac + ar4_00) + 1;
    puVar5 = ar5;
    puVar6 = ar5;
    a7 = ar5;
    if (ar6 != 0) {
      do {
        if (ar5[uVar4] < *(uint *)(unsigned)(0x88 + ar4_00)) {
          if ((*(ushort *)(unsigned)(*a7 * 2 + iVar1) & 0x40) != 0) {
            ar6_00 = ar6_00 + -1;
          }
          if (*puVar6 <= *(uint *)(unsigned)(0xac + ar4_00)) {
            ar6_00 = ar6_00 + -1;
          }
        }
        else if ((*(ushort *)(unsigned)
                   ((*puVar5 + *(int *)(unsigned)(0x88 + ar4_00) + 0x80000000) * 2 + iVar1) & 0x40)
                 != 0) {
          ar6_00 = ar6_00 + -1;
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
        a7 = a7 + 1;
      } while (uVar4 < ar6);
    }
    if (ar6_00 != 0) {
      (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)((uint *)(unsigned)(vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 8))))(ar6_00 << 2,&(*(undefined4 *)(fr0_ - 0x28)),puVar6,a7))));
      if (((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) == (uint *)(unsigned)0x0) {
        return 1;
      }
      uVar4 = 0;
      puVar5 = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x38));
      puVar6 = ar5;
      a7 = ar5;
      puVar7 = ar5;
      if (ar6 != 0) {
        do {
          if (ar5[uVar4] < *(uint *)(unsigned)(0x88 + ar4_00)) {
            if (((*(ushort *)(unsigned)(ar5[uVar4] * 2 + iVar1) & 0x40) == 0) &&
               (*(uint *)(unsigned)(0xac + ar4_00) < ar5[uVar4])) {
              *puVar5 = *a7;
              puVar5 = puVar5 + 1;
            }
          }
          else if ((*(ushort *)(unsigned)((*puVar6 + *(int *)(unsigned)(0x88 + ar4_00) + iVar2) * 2 + iVar1) &
                   0x40) == 0) {
            *puVar5 = *puVar7 + *(int *)(unsigned)(0x88 + ar4_00) + iVar2;
            puVar5 = puVar5 + 1;
          }
          uVar4 = uVar4 + 1;
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
          a7 = a7 + 1;
        } while (uVar4 < ar6);
      }
      iVar2 = (int)0xac;
      uVar4 = 0;
      if (*(int *)(unsigned)(iVar2 + ar4_00) != -1) {
        do {
          *puVar5 = uVar4;
          uVar4 = uVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 < *(int *)(unsigned)(iVar2 + ar4_00) + 1U);
      }
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c11d6f0(*ar4,((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x38)),ar6_00,a7));
    if (iVar2 != 0) {
      (*(int *)(fr0_ - 0x30)) = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c11cd44(*(undefined4 *)(unsigned)(uint)ar4[1],*ar4,ar6_00,a7));
    }
    if (((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) != (uint *)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0xc))))(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x38)),&(*(undefined4 *)(fr0_ - 0x28)),ar6_00,a7));
    }
  }
  return (*(int *)(fr0_ - 0x30));
}

__asm__(".globl _FUN_8c10c0b4\n.set _FUN_8c10c0b4, _FUN_8c10c0b4_def\n");
