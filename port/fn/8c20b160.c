#include "../decls.h"
int FUN_8c20b160_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 a4;
  int in_r0;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  a4 = 0x10000000;
  puVar2 = (&sh4_dmac_202f40);
  uVar1 = 0xf0ffffff;
  uVar7 = 0;
  puVar4 = (undefined4 *)(0x8c4a9f2c + *(undefined4 *)0x8c4a9f08 * 4);
  piVar5 = (int *)(0x8c4a9f7c + *(undefined4 *)0x8c4a9f08 * 4);
  iVar6 = (int)0x100;
  do {
    if ((*piVar5 != 0) && (ar4 != uVar7)) {
      if ((*(undefined4 *)0x8c4a9fe0 == 1) && ((uVar7 == 1 || (uVar7 == 3)))) {
        *(uint *)*(undefined4 *)0x8c4a9fe4 = *(uint *)*(undefined4 *)0x8c4a9fe4 & uVar1 | uVar7 << 0x18;
        do {
          iVar3 = (*(code *)puVar2)(a4,*(undefined4 *)0x8c4a9fe4,*(undefined4 *)0x8c4a9fe8,0x10);
        } while (iVar3 == iVar6);
      }
      do {
        in_r0 = (*(code *)puVar2)(a4,*puVar4,*piVar5 + 0x20,0x10);
      } while (in_r0 == iVar6);
    }
    uVar7 = uVar7 + 1;
    piVar5 = piVar5 + 4;
    puVar4 = puVar4 + 4;
  } while (uVar7 < 5);
  return in_r0;
}

__asm__(".globl _FUN_8c20b160\n.set _FUN_8c20b160, _FUN_8c20b160_def\n");
