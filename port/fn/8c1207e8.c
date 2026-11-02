#include "../decls.h"
uint FUN_8c1207e8_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ar5 & 0xff;
  uVar2 = 1;
  if (uVar1 == (int)0xf9) {
LAB_8c12085e:
    if (*(char *)(ar4 + 0x20) != '\0') {
      uVar1 = FUN_8c1207c6(ar4,ar6,1,1);
      uVar2 = (uint)((uVar1 & 0xff) == 0);
    }
  }
  else {
    if (uVar1 == (int)0xfa) {
LAB_8c120846:
      uVar1 = FUN_8c120798(ar4,ar5,1,1);
    }
    else {
      if (uVar1 == (int)0xfb) {
        ar6 = 0;
        *(undefined1 *)(ar4 + 0x20) = 1;
        goto LAB_8c12085e;
      }
      if (uVar1 == (int)0xfc) {
        *(undefined1 *)(ar4 + 0x20) = 0;
        goto LAB_8c120846;
      }
      if (uVar1 == (int)0xfd) {
        uVar1 = FUN_8c12071a(ar4,ar6,1,1);
      }
      else {
        if (uVar1 != (int)0xfe) {
          return 0;
        }
        uVar1 = FUN_8c1206ba(ar4,ar5,1,1);
      }
    }
    uVar2 = (uint)((uVar1 & 0xff) == 0);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1207e8\n.set _FUN_8c1207e8, _FUN_8c1207e8_def\n");
