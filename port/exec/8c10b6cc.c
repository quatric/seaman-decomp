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
int FUN_8c10b6cc_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b6cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  int iVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  int *ar5_00;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint *ar5_01;
  int *ar5_02;
  uint uVar9;
  
  iVar8 = 0;
  iVar3 = ar4[1];
  iVar7 = 0;
  ar5_01 = (uint *)(unsigned)0x0;
  if (ar5 == (undefined4 *)(unsigned)0x0) {
    ar5_02 = (int *)(unsigned)0x0;
  }
  else {
    ar5_02 = (int *)(unsigned)*ar5;
  }
  (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(iVar3 + 4);
  (*(undefined4 *)(fr0_ - 0x24)) = ar4[2];
  ar5_00 = ar5_02;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c11ea3c(*ar4,ar5_02,ar6,ar7));
  if (iVar1 != 0) {
    ar5_00 = (int *)(unsigned)*ar4;
    iVar8 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c11cd44(*(undefined4 *)(unsigned)(uint)ar4[1],ar5_00,ar6,ar7));
  }
  if ((iVar8 == 0) && (ar5_02 != (int *)(unsigned)0x0)) {
    iVar1 = *ar5_02;
    uVar9 = *(int *)(unsigned)(0x8c + -4 + iVar1) + *(int *)(unsigned)(0x8c + iVar1);
    puVar2 = (ushort *)(unsigned)(vsp = ((unsigned long)(fr0_ - 40)), FUN_8c10afbe(iVar1,ar5_00,ar6,ar7));
    uVar5 = 0;
    puVar4 = puVar2;
    if (uVar9 != 0) {
      do {
        uVar5 = uVar5 + 1;
        if ((*puVar4 & 0x40) != 0) {
          iVar7 = iVar7 + 1;
        }
        puVar4 = puVar4 + 1;
      } while (uVar5 < uVar9);
    }
    iVar7 = uVar9 - iVar7;
    if (iVar7 != 0) {
      ar5_01 = (uint *)(unsigned)(vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 8))))(iVar7 * 4,&(*(undefined4 *)(fr0_ - 0x28)),ar6,ar7));
      if (ar5_01 == (uint *)(unsigned)0x0) {
        return 1;
      }
      uVar5 = 0;
      puVar6 = ar5_01;
      if (uVar9 != 0) {
        do {
          if ((puVar2[uVar5] & 0x40) == 0) {
            *puVar6 = uVar5;
            puVar6 = puVar6 + 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar9);
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c11d6f0(*ar4,ar5_01,iVar7,ar7));
    if (iVar1 != 0) {
      iVar8 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c11cd44(*(undefined4 *)(unsigned)(uint)ar4[1],*ar4,iVar7,ar7));
    }
    if (ar5_01 != (uint *)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0xc))))(ar5_01,&(*(undefined4 *)(fr0_ - 0x28)),iVar7,ar7));
    }
  }
  ar4[0xb] = ar5;
  return iVar8;
}

__asm__(".globl _FUN_8c10b6cc\n.set _FUN_8c10b6cc, _FUN_8c10b6cc_def\n");
