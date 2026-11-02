#include "../decls.h"
undefined4 FUN_8c2684f0_def(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 *ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(&DATA_8c2784c0);
  uVar3 = 0;
  if (iVar4 == 0) {
    return 0xd000001;
  }
  if (ar6 == (undefined4 *)0x0) {
    return 0x3000001;
  }
  if (ar7 == (undefined4 *)0x0) {
    return 0x3000001;
  }
  if ((char)ar5 < '\0') {
    return 0x8000003;
  }
  if (ar4 == 0x42534d53) {
    if ('\x0f' < (char)ar5) {
      return 0x8000003;
    }
    iVar1 = (int)0x1e4;
  }
  else if (ar4 == 0x42504d53) {
    if ('\x0f' < (char)ar5) {
      return 0x8000003;
    }
    iVar1 = (int)0x264;
  }
  else if (ar4 == 0x42534f53) {
    if ('\x0f' < (char)ar5) {
      return 0x8000003;
    }
    iVar1 = (int)0x2e4;
  }
  else {
    if (ar4 != 0x52535053) {
      if (ar4 == 0x42504653) {
        if ((char)ar5 != '\0') {
          return 0x8000003;
        }
        iVar1 = (int)0x3e4;
      }
      else if (ar4 == 0x424f4653) {
        if ((char)ar5 != '\0') {
          return 0x8000003;
        }
        iVar1 = (int)0x464;
      }
      else {
        if (ar4 != 0x57504653) {
          puVar2 = (undefined4 *)0x0;
          uVar3 = 0x9000001;
          goto LAB_8c2685de;
        }
        if ((char)ar5 != '\0') {
          return 0x8000003;
        }
        iVar1 = (int)0x46c;
      }
      puVar2 = (undefined4 *)(iVar1 + iVar4);
      goto LAB_8c2685de;
    }
    if ('\x0f' < (char)ar5) {
      return 0x8000003;
    }
    iVar1 = (int)0x364;
  }
  puVar2 = (undefined4 *)(iVar1 + iVar4 + (char)ar5 * 8);
LAB_8c2685de:
  if (puVar2 == (undefined4 *)0x0) {
    if (ar6 != (undefined4 *)0x0) {
      *ar6 = 0;
    }
    if (ar7 != (undefined4 *)0x0) {
      *ar7 = 0xffffffff;
    }
  }
  else {
    *ar6 = *puVar2;
    *ar7 = puVar2[1];
  }
  return uVar3;
}

__asm__(".globl _FUN_8c2684f0\n.set _FUN_8c2684f0, _FUN_8c2684f0_def\n");
