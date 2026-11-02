#include "../decls.h"
int FUN_8c202342_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  cVar1 = *ar4;
  bVar2 = false;
  if (cVar1 == '\0') {
    iVar3 = *(int *)(ar4 + 0x28);
    if ((iVar3 == 0) || (iVar3 != 1)) goto LAB_8c2023fe;
LAB_8c2023be:
    iVar3 = FUN_8c2022ac(ar4,&uStack_14,ar6,ar7);
  }
  else {
    if (cVar1 == '\x01') {
      iVar3 = *(int *)(ar4 + 0x28);
      if ((iVar3 != 1) && (iVar3 != 2)) {
joined_r0x8c20239e:
        if (iVar3 != 4) goto LAB_8c2023fe;
        goto LAB_8c2023be;
      }
    }
    else if (cVar1 == '\x02') {
      iVar3 = *(int *)(ar4 + 0x28);
      if (iVar3 == 3) goto LAB_8c2023be;
      if (iVar3 != 2) goto LAB_8c2023fe;
    }
    else if (cVar1 != '\x04') {
      if (cVar1 == '\x05') {
        FUN_8c2022ac(ar4,&uStack_14,ar6,ar7);
        iVar3 = 0;
        uStack_14 = (undefined1)0xfc;
        uStack_13 = 0;
        uStack_12 = 0;
        uStack_11 = 0;
      }
      else {
        if (cVar1 == '\x06') {
          iVar3 = *(int *)(ar4 + 0x28);
          goto joined_r0x8c20239e;
        }
        iVar3 = FUN_8c2022ac(ar4,&uStack_14,ar6,ar7);
      }
      goto LAB_8c2023fc;
    }
    iVar3 = FUN_8c2022ac(ar4,&uStack_14,ar6,ar7);
  }
LAB_8c2023fc:
  bVar2 = true;
LAB_8c2023fe:
  if (bVar2) {
    iVar3 = FUN_8c1eff32(*(undefined4 *)(ar4 + 0x24),&uStack_14,ar6,ar7);
    *(int *)(ar4 + 0x1c) = iVar3;
    ar4[0x20] = '\x01';
    ar4[0x21] = '\0';
    ar4[0x22] = '\0';
    ar4[0x23] = '\0';
  }
  else {
    ar4[0x20] = '\0';
    ar4[0x21] = '\0';
    ar4[0x22] = '\0';
    ar4[0x23] = '\0';
  }
  *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(ar4 + 0x28);
  return iVar3;
}

__asm__(".globl _FUN_8c202342\n.set _FUN_8c202342, _FUN_8c202342_def\n");
