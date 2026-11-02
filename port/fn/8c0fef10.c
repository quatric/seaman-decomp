#include "../decls.h"
undefined4 FUN_8c0fef10_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 auStack_c [2];
  
  auStack_c[0] = 0;
  while( true ) {
    iVar1 = get_field_48_0feea8(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) break;
    iVar1 = get_field_48_0feea8(ar4,ar5,ar6,ar7);
    auStack_c[0] = (*(code *)(&s_CItemGLoadRequestList_GetPtr_0fea34))
                             (ar4,iVar1 + -1,ar6,ar7);
    s_CItemGLoadRequestList_TakeOu_0fe960(ar4,auStack_c[0],ar6,ar7);
    ar5 = auStack_c;
    FUN_8c0fed08(ar4 + 0x4c,ar5,ar6,ar7);
  }
  uVar2 = FUN_8c0feab8(ar4,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0fef10\n.set _FUN_8c0fef10, _FUN_8c0fef10_def\n");
