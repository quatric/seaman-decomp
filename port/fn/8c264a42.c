#include "../decls.h"
int FUN_8c264a42_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 ar4_00;
  undefined4 *a7;
  int iVar4;
  undefined4 *puVar5;
  undefined4 ar4_01;
  int iVar6;
  int *a4;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  ar4_00 = *(undefined4 *)(ar4 + 4);
  ar4_01 = *(undefined4 *)(ar4 + 0xc);
  iVar2 = s_E1205_Illigal_parameter_MWRN_269aa8(ar4_01,ar5,ar6,ar7);
  iVar3 = ret_const_7fffffff_2629e8(ar4_01,ar5,ar6,ar7);
  if (((*(int *)(ar4 + 0x48) <= iVar2) ||
      (iVar2 = FUN_8c26316e(ar4_00,ar5,ar6,ar7), iVar3 <= iVar2)) ||
     (iVar2 = FUN_8c262c38(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7), iVar2 == 3)) {
    if (*(char *)(ar4 + 0x70) == '\0') {
      if (*(char *)(ar4 + 0x72) == '\0') {
        ar5 = 1;
        s_E1205_Illigal_parameter_MWRN_2691ba(ar4_01,1,ar6,ar7);
      }
      *(undefined1 *)(ar4 + 1) = 3;
    }
    *(undefined1 *)(ar4 + 0x71) = 1;
  }
  iVar2 = FUN_8c262c38(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  if (iVar2 == 3) {
    iVar3 = FUN_8c263df6(ar4,ar5,ar6,ar7);
    puVar1 = (&memset);
    iVar2 = 0x48;
    iVar4 = *(int *)(ar4 + 0x48);
    iVar6 = 0;
    puVar5 = (undefined4 *)(ar4 + 0x18);
    if (0 < iVar3) {
      do {
        a4 = (int *)*puVar5;
        puVar5 = puVar5 + 1;
        a7 = &uStack_24;
        (**(code **)(*a4 + 0x18))(a4,0,iVar4 * iVar3 * 2,a7);
        (*(code *)puVar1)(uStack_24,0,uStack_20,a7);
        iVar2 = (**(code **)(*a4 + 0x20))(a4,1,&uStack_24,a7);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c264a42\n.set _FUN_8c264a42, _FUN_8c264a42_def\n");
