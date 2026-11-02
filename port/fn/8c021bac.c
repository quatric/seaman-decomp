#include "../decls.h"
undefined4 pack_find_entry_by_name_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  char acStack_8c [132];
  
  strcpy(acStack_8c,&DAT_8c12fc84,ar6,ar7,ar5);
  strcpy(acStack_8c,ar5,ar6,ar7,ar5);
  FUN_8c01437c(acStack_8c,&DAT_8c12fc85,ar6,ar7);
  iVar2 = 0;
  while( true ) {
    if ((0x7fff < iVar2) || (*(char *)(*(int *)(ar4 + 0x9ec0c) + iVar2 * 0x28) == '\0')) {
      return 0xffffffff;
    }
    if ((*(char *)(*(int *)(ar4 + 0x9ec0c) + iVar2 * 0x28) == acStack_8c[0]) &&
       (iVar1 = FUN_8c021c80(iVar2 * 0x28 + *(int *)(ar4 + 0x9ec0c),acStack_8c,ar6,ar7), iVar1 == 0)
       ) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

__asm__(".globl _pack_find_entry_by_name\n.set _pack_find_entry_by_name, _pack_find_entry_by_name_def\n");
