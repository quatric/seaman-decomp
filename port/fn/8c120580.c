#include "../decls.h"
undefined4
FUN_8c120580_def(int ar4,undefined4 ar5,undefined4 ar6,uint ar7,int s0,int s4,int s8,undefined4 s12)

{
  int *a5;
  int iVar1;
  uint a7;
  int iStack_1c;
  undefined1 uStack_18;
  
  a7 = ar7;
  a5 = (int *)(**(code **)(ar4 + 0x14))(ar4,1,s12,ar7);
  iStack_1c = ar4;
  uStack_18 = (undefined1)ar5;
  if (a5 == (int *)0x0) {
    FUN_8c1204c4(&iStack_1c,2,s12,a7);
  }
  else {
    if ((byte)ar6 != 0) {
      s12 = 8;
      iVar1 = (**(code **)(ar4 + 0x14))(ar4,(uint)(byte)ar6,8,a7);
      a5[3] = iVar1;
    }
    if ((ar7 & 0xff) != 0) {
      s12 = 4;
      iVar1 = (**(code **)(ar4 + 0x14))(ar4,ar7 & 0xff,4,a7);
      a5[4] = iVar1;
    }
    if ((((byte)ar6 == 0) || (a5[3] != 0)) && (((ar7 & 0xff) == 0 || (a5[4] != 0)))) {
      *a5 = ar4;
      *(undefined1 *)(a5 + 1) = (undefined1)ar5;
      *(byte *)(a5 + 2) = (byte)ar6;
      *(char *)((int)a5 + 9) = (char)ar7;
      a5[5] = s4;
      a5[7] = s8;
      a5[6] = s0;
      a5[9] = s0;
      *(undefined1 *)(a5 + 8) = 1;
      return a5;
    }
    (**(code **)(ar4 + 0x18))(ar4,a5,s12,a7);
    FUN_8c1204c4(&iStack_1c,2,s12,a7);
  }
  return 0;
}

__asm__(".globl _FUN_8c120580\n.set _FUN_8c120580, _FUN_8c120580_def\n");
