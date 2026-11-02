#include "../decls.h"
uint FUN_8c1209ec_def(int *ar4,int ar5,int *ar6,int *ar7)

{
  char cVar1;
  uint uVar2;
  int *ar6_00;
  int *ar7_00;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int in_stack_ffffffd8;
  int *piVar7;
  
  piVar3 = (int *)&stack0xffffffd8;
  uVar4 = 0;
  ar4[1] = ar4[1] + 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  if (ar5 != 0) {
    cVar1 = *(char *)(ar5 + 4);
    iVar5 = 0;
    if (0 < *ar4) {
      do {
        if (cVar1 == *(char *)((int)ar4 + iVar5 * 2 + 8)) {
          ar7_00 = (int *)0x0;
          ar6_00 = ar7;
          uVar2 = (**(code **)(ar5 + 0x1c))(ar5,(int)*(char *)((int)ar4 + iVar5 * 2 + 9),ar7,0);
          uVar4 = uVar4 | (uVar2 & 0xff) == 0;
          FUN_8c1209be(ar4,iVar5,ar6_00,ar7_00,in_stack_ffffffd8);
        }
        else {
          iVar5 = iVar5 + 1;
        }
      } while (iVar5 < *ar4);
    }
    if (*ar4 != 0) {
      iVar5 = 0;
      ar6_00 = ar4;
      (**(code **)(ar5 + 0x1c))(ar5,0xf8,ar4,&stack0xffffffd8);
      ar7_00 = piVar3;
      if (-1 < iVar5) {
        piVar3 = (int *)(iVar5 + (int)ar7);
        for (iVar6 = 0; iVar6 < (int)(uint)*(byte *)(ar5 + 9); iVar6 = iVar6 + 1) {
          ar6_00 = ar4;
          piVar7 = piVar3;
          uVar2 = FUN_8c1113d0(*(undefined4 *)(iVar6 * 4 + *(int *)(ar5 + 0x10)),0xf8,ar4,piVar3);
          uVar4 = uVar4 | (uVar2 & 0xff) == 0;
          ar7_00 = piVar3;
          piVar3 = piVar7;
        }
      }
    }
  }
  iVar5 = ar4[1];
  ar4[1] = iVar5 + -1;
  if (iVar5 + -1 == 0) {
    (*(code *)(uint)ar6[6])(ar6,ar4,ar6_00,ar7_00);
  }
  return uVar4;
}

__asm__(".globl _FUN_8c1209ec\n.set _FUN_8c1209ec, _FUN_8c1209ec_def\n");
