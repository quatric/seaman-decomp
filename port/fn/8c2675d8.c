#include "../decls.h"
int FUN_8c2675d8_def(int *ar4,undefined4 ar5,int ar6,int ar7,undefined4 s0,undefined4 s4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int ar5_00;
  undefined4 *puVar4;
  undefined1 auStackY_a0 [128];
  undefined4 in_stack_ffffffe0;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (((char)s0 < '\x01') || ('\x02' < (char)s0)) {
LAB_8c26765e:
    ar5_00 = 0x3000001;
  }
  else {
    if (((int)&s0 + 1U & 3) == 0) {
      puVar4 = (undefined4 *)((int)&s0 + 1);
    }
    else {
      puVar4 = &s4;
    }
    for (ar6 = 0; ar6 < (char)s0; ar6 = ar6 + 1) {
      puVar1 = puVar4 + 1;
      if (((uint)puVar1 & 3) != 0) {
        puVar1 = puVar4 + 2;
      }
      puVar4 = puVar1 + -1;
      if (((uint)puVar4 & 3) != 0) {
        puVar4 = puVar1 + -2;
      }
      (&stack0xffffffe0)[ar6] = (char)*puVar4;
      ar7 = (int)(char)(&stack0xffffffe0)[ar6];
      if ((ar7 < 0) || (0xf < ar7)) goto LAB_8c26765e;
      puVar4 = puVar1;
    }
    puVar2 = &stack0xffffffe0 + (char)s0;
    if (puVar2 < &stack0xffffffe2) {
      ar6 = -1;
      do {
        *puVar2 = 0xff;
        puVar2 = puVar2 + 1;
      } while (puVar2 < &stack0xffffffe2);
    }
    ar5_00 = FUN_8c266708(ar4,3,ar6,ar7);
    if (ar5_00 == 0) {
      puVar4 = (undefined4 *)(DAT_8c2784c0 + 0xa8 + (short)*(char *)(*ar4 + 1) * 0x2c);
      *puVar4 = 1;
      *(char *)(puVar4 + 1) = (char)s0;
      FUN_8c267d88(*ar4,(int)(char)s0,ar6,ar7);
      FUN_8c267924(*ar4,0,ar6,ar7);
      for (iVar3 = 0; iVar3 < (char)s0; iVar3 = iVar3 + 1) {
        *(undefined1 *)((int)puVar4 + iVar3 + 7) = (&stack0xffffffe0)[iVar3];
        puVar4[iVar3 + 3] = 1;
        puVar4[iVar3 + 5] = 0;
        puVar4[iVar3 + 9] = 0;
      }
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267470,ar5_00,ar6,ar7,in_stack_ffffffe0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2675d8\n.set _FUN_8c2675d8, _FUN_8c2675d8_def\n");
