#include "../decls.h"
int FUN_8c0140cc_def(uint ar4,uint ar5,int *ar6,int ar7,int ain0)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *a6;
  uint ain0_00;
  int a5;
  uint ar5_00;
  uint uVar4;
  uint ar4_00;
  int iVar5;
  
  a6 = ar6;
  do {
    while( true ) {
      ain0_00 = (ar5 - ar4 >> 1) + ar4;
      a5 = (ain0_00 - 1) * ar6[1] + *ar6;
      ar5_00 = ar5;
      ar4_00 = ar4;
      while ((ar4_00 != 0 && (ar4_00 <= ar5_00))) {
        while (iVar2 = (*(code *)(uint)ar6[2])((ar4_00 - 1) * ar6[1] + *ar6,a5,a6,ar7), uVar4 = ar5_00,
              iVar2 < 0) {
          ar4_00 = ar4_00 + 1;
        }
        while (ain0 = (*(code *)(uint)ar6[2])(a5,(uVar4 - 1) * ar6[1] + *ar6,a6,ar7), ain0 < 0) {
          uVar4 = uVar4 - 1;
        }
        ar5_00 = uVar4;
        if (ar4_00 <= uVar4) {
          ar5_00 = uVar4 - 1;
          for (uVar3 = 0; uVar3 < (uint)ar6[1]; uVar3 = uVar3 + 1) {
            iVar2 = *ar6;
            iVar5 = (ar4_00 - 1) * ar6[1];
            ain0 = iVar5 + iVar2;
            cVar1 = *(char *)(ain0 + uVar3);
            ar7 = (int)cVar1;
            a6 = (int *)(ar5_00 * ar6[1] + iVar2 + uVar3);
            *(char *)(iVar5 + iVar2 + uVar3) = (char)*a6;
            *(char *)(ar5_00 * ar6[1] + *ar6 + uVar3) = cVar1;
          }
          if (ar4_00 == ain0_00) {
            a5 = ar5_00 * ar6[1] + *ar6;
          }
          else if (uVar4 == ain0_00) {
            a5 = (ar4_00 - 1) * ar6[1] + *ar6;
          }
          ar4_00 = ar4_00 + 1;
        }
      }
      if (ar5 - ar4_00 <= ar5_00 - ar4) break;
      if (ar4 < ar5_00) {
        a6 = ar6;
        ain0 = FUN_8c0140cc(ar4,ar5_00,ar6,ar7,ain0_00);
      }
      ar4 = ar4_00;
      if (ar5 <= ar4_00) {
        return ain0;
      }
    }
    if (ar4_00 < ar5) {
      a6 = ar6;
      ain0 = FUN_8c0140cc(ar4_00,ar5,ar6,ar7,ain0_00);
    }
    ar5 = ar5_00;
  } while (ar4 < ar5_00);
  return ain0;
}

__asm__(".globl _FUN_8c0140cc\n.set _FUN_8c0140cc, _FUN_8c0140cc_def\n");
