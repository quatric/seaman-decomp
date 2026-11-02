#include "../decls.h"
uint FUN_8c1244f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 ar5_00;
  char cVar5;
  
  if ((*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') &&
     ((*(char *)(ar4 + 0x48c) == '\0' || (*(char *)((*(int **)(ar4 + 0x10))[1] + 0x30) != '\x01'))))
  {
    ar5_00 = (*(undefined4 **)(ar4 + 0xc))[1];
    puVar1 = (undefined8 *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),ar5_00,ar6,ar7);
    if (puVar1 != (undefined8 *)0x0) {
      *(int *)(ar4 + 0x4d0) = *(int *)(ar4 + 0x4d0) + 1;
      FUN_8c123ea6(ar4,ar5_00,ar6,ar7);
      cVar5 = '\0';
      puVar2 = (undefined8 *)FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),ar5_00,ar6,ar7);
      if (cVar5 == '\0') {
        *(undefined4 *)puVar2 = *(undefined4 *)(ar4 + 0x4a4);
      }
      else {
        *puVar2 = *(undefined8 *)(ar4 + 0x4a4);
      }
      if (*(char *)(ar4 + 0x48c) != '\0') {
        cVar5 = '\0';
        puVar2 = (undefined8 *)
                 FUN_8c111dfe(*(undefined4 *)(*(int *)(ar4 + 0x10) + 4),ar5_00,ar6,ar7);
        if (cVar5 == '\0') {
          *(undefined4 *)puVar2 = *(undefined4 *)(ar4 + 0x2c);
          *(undefined4 *)((int)puVar2 + 4) = *(undefined4 *)(ar4 + 0x30);
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(ar4 + 0x34);
          *(undefined4 *)((int)puVar2 + 0xc) = *(undefined4 *)(ar4 + 0x3c);
          *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(ar4 + 0x38);
          *(undefined4 *)((int)puVar2 + 0x14) = *(undefined4 *)puVar1;
        }
        else {
          *puVar2 = *(undefined8 *)(ar4 + 0x2c);
          *(undefined8 *)((int)puVar2 + 4) = *(undefined8 *)(ar4 + 0x30);
          puVar2[1] = *(undefined8 *)(ar4 + 0x34);
          *(undefined8 *)((int)puVar2 + 0xc) = *(undefined8 *)(ar4 + 0x3c);
          puVar2[2] = *(undefined8 *)(ar4 + 0x38);
          *(undefined8 *)((int)puVar2 + 0x14) = *puVar1;
        }
      }
      if (((*(char *)(ar4 + 0x4ac) != '\0') &&
          (uVar3 = FUN_8c1238a6(ar4,ar5_00,ar6,ar7), (uVar3 & 0xff) != 0)) ||
         ((*(char *)(ar4 + 0x4d8) != '\0' &&
          (uVar3 = FUN_8c1239f0(ar4,ar5_00,ar6,ar7), (uVar3 & 0xff) != 0)))) {
        return 1;
      }
    }
  }
  iVar4 = **(int **)(ar4 + 0xc);
  return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar4 + 0x40)) == *(int *)(iVar4 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c1244f8\n.set _FUN_8c1244f8, _FUN_8c1244f8_def\n");
