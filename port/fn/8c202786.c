#include "../decls.h"
int FUN_8c202786_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  char *unaff_r14;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  
  if (*(int *)(unaff_r14 + 0x28) == 100) {
    uVar4 = FUN_8c1efdc8(*(undefined4 *)(unaff_r14 + 0x24),ar5,ar6,ar7);
LAB_8c2027a6:
    *(undefined4 *)(unaff_r14 + 0x1c) = uVar4;
    unaff_r14[0x20] = '\x01';
    unaff_r14[0x21] = '\0';
    unaff_r14[0x22] = '\0';
    unaff_r14[0x23] = '\0';
    *(undefined4 *)(unaff_r14 + 0x2c) = *(undefined4 *)(unaff_r14 + 0x28);
    return uVar4;
  }
  if (*(int *)(unaff_r14 + 0x28) == 0x65) {
    uVar4 = FUN_8c1efd7c(*(undefined4 *)(unaff_r14 + 0x24),ar5,ar6,ar7);
    goto LAB_8c2027a6;
  }
  cVar1 = *unaff_r14;
  bVar2 = false;
  if (cVar1 == '\0') {
    iVar3 = *(int *)(unaff_r14 + 0x28);
    if ((iVar3 == 0) || (iVar3 != 1)) goto LAB_8c2023fe;
LAB_8c2023be:
    iVar3 = FUN_8c2022ac(unaff_r14,&uStack_10,ar6,ar7);
  }
  else {
    if (cVar1 == '\x01') {
      iVar3 = *(int *)(unaff_r14 + 0x28);
      if ((iVar3 != 1) && (iVar3 != 2)) {
joined_r0x8c20239e:
        if (iVar3 != 4) goto LAB_8c2023fe;
        goto LAB_8c2023be;
      }
    }
    else if (cVar1 == '\x02') {
      iVar3 = *(int *)(unaff_r14 + 0x28);
      if (iVar3 == 3) goto LAB_8c2023be;
      if (iVar3 != 2) goto LAB_8c2023fe;
    }
    else if (cVar1 != '\x04') {
      if (cVar1 == '\x05') {
        FUN_8c2022ac(unaff_r14,&uStack_10,ar6,ar7);
        iVar3 = 0;
        uStack_10 = (undefined1)0xfc;
        uStack_f = 0;
        uStack_e = 0;
        uStack_d = 0;
      }
      else {
        if (cVar1 == '\x06') {
          iVar3 = *(int *)(unaff_r14 + 0x28);
          goto joined_r0x8c20239e;
        }
        iVar3 = FUN_8c2022ac(unaff_r14,&uStack_10,ar6,ar7);
      }
      goto LAB_8c2023fc;
    }
    iVar3 = FUN_8c2022ac(unaff_r14,&uStack_10,ar6,ar7);
  }
LAB_8c2023fc:
  bVar2 = true;
LAB_8c2023fe:
  if (bVar2) {
    iVar3 = FUN_8c1eff32(*(undefined4 *)(unaff_r14 + 0x24),&uStack_10);
    *(int *)(unaff_r14 + 0x1c) = iVar3;
    unaff_r14[0x20] = '\x01';
    unaff_r14[0x21] = '\0';
    unaff_r14[0x22] = '\0';
    unaff_r14[0x23] = '\0';
  }
  else {
    unaff_r14[0x20] = '\0';
    unaff_r14[0x21] = '\0';
    unaff_r14[0x22] = '\0';
    unaff_r14[0x23] = '\0';
  }
  *(undefined4 *)(unaff_r14 + 0x2c) = *(undefined4 *)(unaff_r14 + 0x28);
  return iVar3;
}

__asm__(".globl _FUN_8c202786\n.set _FUN_8c202786, _FUN_8c202786_def\n");
