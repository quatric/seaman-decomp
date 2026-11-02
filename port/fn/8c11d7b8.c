#include "../decls.h"
undefined4 FUN_8c11d7b8_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *a7;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uStack_2c;
  int iStack_28;
  int *piStack_24;
  int *piStack_20;
  int iStack_1c;
  
  a7 = &uStack_2c;
  iVar7 = 0;
  iVar8 = 0;
  piStack_24 = ar5;
  piStack_20 = ar6;
  iVar3 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  puVar2 = (&FUN_8c120348);
  if (iVar3 == 0) {
    if ((piStack_24 == (int *)0x0) || (piStack_20 == (int *)0x0)) {
      uVar4 = FUN_8c1204c4(ar4 + 0x48,0x13,ar6,ar7);
      return uVar4 & 0xff;
    }
    iStack_1c = *(int *)(0xfc + ar4);
    *(undefined4 *)(ar4 + 0x40) = 0;
    piVar6 = &iStack_28;
    uVar4 = (*(code *)puVar2)(ar4 + 0x48,0x1a,piVar6,&uStack_2c);
    puVar2 = (&FUN_8c1204c4);
    if ((uVar4 & 0xff) == 0) {
      uVar9 = (uint)0x80;
      uVar4 = 0;
      if (uStack_2c != 0) {
        do {
          piVar6 = (int *)(int)(char)*(byte *)(iStack_28 + uVar4);
          uVar5 = uVar9;
          do {
            if (((uint)*(byte *)(iStack_28 + uVar4) & uVar5 & 0xff) != 0) {
              iVar8 = iVar8 + 1;
            }
            uVar5 = (uVar5 & 0xff) >> 1;
          } while (uVar5 != 0);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uStack_2c);
      }
      if (iVar8 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)(**(code **)(iStack_1c + 0x14))(iVar8 << 2,0xf4 + ar4,piVar6,a7);
      }
      *piStack_20 = iVar8;
      *piStack_24 = (int)piVar6;
      uVar4 = 0;
      if (uStack_2c != 0) {
        do {
          bVar1 = *(byte *)(iStack_28 + uVar4);
          uVar5 = uVar9;
          do {
            if (((uint)bVar1 & uVar5 & 0xff) != 0) {
              *piVar6 = iVar7;
              piVar6 = piVar6 + 1;
            }
            uVar5 = (uVar5 & 0xff) >> 1;
            iVar7 = iVar7 + 1;
          } while (uVar5 != 0);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uStack_2c);
      }
      return 0;
    }
    *(undefined4 *)(ar4 + 0x40) = 0;
    (*(code *)puVar2)(ar4 + 0x48,7,piVar6,a7);
  }
  return 1;
}

__asm__(".globl _FUN_8c11d7b8\n.set _FUN_8c11d7b8, _FUN_8c11d7b8_def\n");
