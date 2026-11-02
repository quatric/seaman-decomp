#include "../decls.h"
int FUN_8c085704_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint in_fr1;
  ulonglong uVar5;
  char cVar6;
  
  cVar6 = '\0';
  FUN_8c02702c(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  piVar4 = (int *)(*(int *)(ar4 + 0x328) + (short)uVar1 * 0x124);
  iVar2 = FUN_8c015bb8(piVar4 + 0x1c,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x344) =
       *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x2c) + 0x2c) + 0x2c);
  *(undefined4 *)(ar4 + 0x348) = *(undefined4 *)(*(int *)(ar4 + 0x344) + 0x2c);
  *(undefined4 *)(ar4 + 0x34c) = *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x344) + 0x2c) + 0x30);
  *(undefined4 *)(ar4 + 0x350) =
       *(undefined4 *)(*(int *)(*(int *)(*(int *)(ar4 + 0x344) + 0x2c) + 0x30) + 0x30);
  uVar1 = FUN_8c015510(*piVar4 + 0x1e8,ar5,ar6,ar7);
  *(undefined4 *)(*(int *)(ar4 + 0x348) + 4) = uVar1;
  *(undefined4 *)(*(int *)(ar4 + 0x34c) + 4) = uVar1;
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x374) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x374) = (ulonglong)in_fr1;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x378) = 0;
    uVar5 = CONCAT44(0x40a00000,in_fr1);
    *(undefined4 *)(ar4 + 0x37c) = 0x40a00000;
  }
  else {
    *(ulonglong *)(ar4 + 0x378) = (ulonglong)in_fr1;
    uVar5 = 0x3a040a00000;
    *(undefined8 *)(ar4 + 0x37c) = 0x3a040a00000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x3a0) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x3a0) = uVar5 & 0xffffffff;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x3a4) = 0;
    *(undefined4 *)(ar4 + 0x3a8) = 0x40a00000;
  }
  else {
    *(ulonglong *)(ar4 + 0x3a4) = uVar5 & 0xffffffff;
    *(undefined8 *)(ar4 + 0x3a8) = 0x3a040a00000;
  }
  FUN_8c02a788(ar4,ar5,ar6,ar7);
  FUN_8c02aabc(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x358) = 0;
  *(undefined4 *)(ar4 + 0x354) = 0;
  *(undefined4 *)(ar4 + 0x360) = 0;
  *(undefined4 *)(ar4 + 0x35c) = 0;
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  iVar3 = (int)(short)uVar1;
  if (iVar3 == 6) {
    *(undefined4 *)(ar4 + 0x358) =
         *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x2c) +
                                                       0x2c) + 0x30) + 0x30) + 0x30) + 0x2c) + 0x2c)
    ;
    iVar3 = 0x354;
    *(undefined4 *)(ar4 + 0x354) =
         *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) +
                                                                         0x2c) + 0x2c) + 0x30) +
                                              0x30) + 0x30) + 0x2c) + 0x30) + 0x2c);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c085704\n.set _FUN_8c085704, _FUN_8c085704_def\n");
