#include "../decls.h"
int pvr_206350_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  piVar3 = 0xa05f8054;
  puVar2 = 0xa05f80e8;
  puVar1 = 0xa05f8044;
  uVar6 = 0;
  piVar7 = 0xa05f8054 + -1;
  while ((*(int *)(0x8c4a9ef8 + uVar6 * 4) != 5 &&
         (iVar5 = *(int *)(0x8c4a9ef8 + uVar6 * 4), iVar5 != -3))) {
    uVar6 = uVar6 + 1;
    if (3 < (int)uVar6) {
      return iVar5;
    }
  }
  *(undefined4 *)(0x8c4a9ef8 + uVar6 * 4) = 7;
  piVar4 = 0x8c4a9ee0;
  if (((*(undefined4 *)0x8c4a9bcc & 1) == 1) || ((*(undefined4 *)0x8c4a9bcc & 0x2c) != 0x20)) {
    if (*(undefined4 *)0x8c4a9be0 != 1) {
      *piVar7 = ((undefined4 *)0x8c4a9ee0)[uVar6 & 1] + *(undefined4 *)0x8c4a9dc4;
      *piVar3 = piVar4[uVar6 & 1] + *(undefined4 *)0x8c4a9dc8;
    }
  }
  else {
    *piVar7 = *(undefined4 *)0x8c4a9ee0 + *(undefined4 *)0x8c4a9dc4;
    *piVar3 = *(undefined4 *)0x8c4a9ee4 + *(undefined4 *)0x8c4a9dc8;
  }
  if (*(int *)(0x8c4a9ef8 + uVar6 * 4) == -3) {
    return 0xfffffffd;
  }
  if (*(undefined4 *)0x8c4a9e54 != 1) {
    return *(undefined4 *)0x8c4a9e54;
  }
  *puVar2 = *(undefined4 *)0x8c4a9eb0;
  puVar2 = 0x8c4a9e74;
  *puVar1 = *(undefined4 *)0x8c4a9e74;
  *(undefined4 *)0x8c4a9e54 = 0;
  return (int)puVar2;
}

__asm__(".globl _pvr_206350\n.set _pvr_206350, _pvr_206350_def\n");
