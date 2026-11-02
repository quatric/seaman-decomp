#include "../decls.h"
undefined8 * FUN_8c08de3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 in_xd14;
  char cVar4;
  
  cVar4 = '\0';
  *(undefined4 *)(ar4 + 0x128) = ar5;
  iVar1 = *(int *)(ar4 + 0x128);
  if ((iVar1 == 0) || (iVar1 == 1)) {
    uVar3 = *(undefined4 *)(ar4 + 0xa0);
    FUN_8c031b68(ar4,0x8c2846d0,ar6,ar7);
    puVar2 = (undefined8 *)0xa0;
    if (cVar4 == '\0') {
      *(undefined4 *)(ar4 + 0xa0) = uVar3;
    }
    else {
      *(undefined8 *)(ar4 + 0xa0) = in_xd14;
    }
  }
  else {
    if (iVar1 == 2) {
      ar7 = 0;
      ar6 = 0xffffffff;
      uVar3 = 1;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
    }
    else if (iVar1 != 3) {
      return (undefined8 *)iVar1;
    }
    FUN_8c031b68(ar4,0x8c2846e8,ar6,ar7);
    puVar2 = &DAT_8c08dee8;
    if (cVar4 == '\0') {
      *(undefined4 *)(ar4 + 0x24) = 0x41200000;
    }
    else {
      *(undefined8 *)(ar4 + 0x24) = 0x2fd62fe641200000;
    }
  }
  return puVar2;
}

__asm__(".globl _FUN_8c08de3c\n.set _FUN_8c08de3c, _FUN_8c08de3c_def\n");
