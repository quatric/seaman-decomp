#include "../decls.h"
int FUN_8c20ca32_def(uint *ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  uint ar4_00;
  uint *ar5_00;
  int iVar5;
  
  iVar3 = FUN_8c20d128(ar4,ar6,ar7,s0);
  if (iVar3 == 0) {
    if ((*ar4 & 0xffff) == 3) {
      iVar3 = 4;
    }
    else {
      if ((1 < ar5) && (iVar3 = 1, puVar4 = ar4, 1 < ar5)) {
        do {
          iVar3 = iVar3 + 1;
          puVar4[10] = *ar4;
          puVar4[0xb] = ar4[1];
          puVar4[0xc] = ar4[2];
          puVar4[0xd] = ar4[3];
          puVar4[0xe] = ar4[4];
          puVar4[0xf] = ar4[5];
          puVar4[0x10] = ar4[6];
          puVar4 = puVar4 + 10;
        } while (iVar3 < ar5);
      }
      puVar4 = ar4;
      iVar3 = FUN_8c2038c0(ar4[5] * ar5,ar4,ar7,s0);
      puVar1 = (&FUN_8c203bda);
      if (iVar3 == 3) {
        FUN_8c2072b2(3,puVar4,ar7,s0);
      }
      else {
        ar4_00 = ar4[7];
        FUN_8c203bda(ar4_00,puVar4,ar7,s0);
        iVar5 = 0;
        if (0 < ar5) {
          do {
            puVar2 = (&FUN_8c203980);
            ar5_00 = ar4 + iVar5 * 10;
            ar5_00[7] = ar4_00;
            puVar4 = ar5_00;
            iVar3 = (*(code *)puVar2)(ar5_00[5],ar5_00,ar7,s0);
            ar4_00 = ar4_00 + (ar5_00[5] & 0xfffffffc);
            if (iVar3 == 3) {
              iVar3 = 0;
              if (0 < iVar5) {
                do {
                  (*(code *)puVar1)(ar4[iVar5 * 10 + 7],puVar4,ar7,s0);
                  iVar3 = iVar3 + 1;
                } while (iVar3 < iVar5);
              }
              FUN_8c2072b2(3,puVar4,ar7,s0);
              return 3;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < ar5);
        }
      }
    }
  }
  return iVar3;
}

__asm__(".globl _FUN_8c20ca32\n.set _FUN_8c20ca32, _FUN_8c20ca32_def\n");
