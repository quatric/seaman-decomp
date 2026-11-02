#include "../decls.h"
float * FUN_8c037034_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float in_fr1;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  FUN_8c02702c(ar4,ar5,ar6,ar7);
  uVar2 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  sVar1 = (short)uVar2;
  uVar2 = FUN_8c015510(*(int *)(sVar1 * 0x124 + *(int *)(ar4 + 0x328)) + 0x1e8,ar5,ar6,ar7);
  iVar3 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + sVar1 * 0x124 + 0x70,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x344) = *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c);
  *(undefined4 *)(ar4 + 0x348) = *(undefined4 *)(*(int *)(ar4 + 0x344) + 0x2c);
  *(undefined4 *)(ar4 + 0x34c) = *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x344) + 0x2c) + 0x30);
  if (sVar1 < 3) {
    *(undefined4 *)(ar4 + 0x350) =
         *(undefined4 *)(*(int *)(*(int *)(*(int *)(ar4 + 0x344) + 0x2c) + 0x30) + 0x30);
  }
  else {
    *(undefined4 *)(ar4 + 0x350) =
         *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(*(int *)(ar4 + 0x344) + 0x2c) + 0x30) + 0x30) + 0x30);
  }
  *(undefined4 *)(*(int *)(ar4 + 0x348) + 4) = uVar2;
  *(undefined4 *)(*(int *)(ar4 + 0x34c) + 4) = uVar2;
  if (cVar7 == '\0') {
    *(undefined4 *)(ar4 + 0x374) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x374) = (ulonglong)(uint)in_fr1;
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(ar4 + 0x378) = 0;
    *(undefined4 *)(ar4 + 0x37c) = 0x40a00000;
  }
  else {
    *(ulonglong *)(ar4 + 0x378) = (ulonglong)(uint)in_fr1;
    in_fr1 = 5.0;
    *(undefined8 *)(ar4 + 0x37c) = 0x3a040a00000;
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(ar4 + 0x3a0) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x3a0) = (ulonglong)(uint)in_fr1;
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(ar4 + 0x3a4) = 0;
    *(undefined4 *)(ar4 + 0x3a8) = 0x40a00000;
  }
  else {
    *(ulonglong *)(ar4 + 0x3a4) = (ulonglong)(uint)in_fr1;
    in_fr1 = 5.0;
    *(undefined8 *)(ar4 + 0x3a8) = 0x3a040a00000;
  }
  FUN_8c02a788(ar4,ar5,ar6,ar7);
  FUN_8c02aabc(ar4,ar5,ar6,ar7);
  uVar2 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  iVar5 = (int)(short)uVar2;
  pfVar4 = (float *)0x4;
  if ((iVar5 < 5) && (-1 < iVar5)) {
    pfVar4 = (float *)(&switchdata_8c03716a_8c037170)[iVar5];
                    
    switch(iVar5) {
    case 0:
      *(undefined4 *)(ar4 + 0x360) =
           *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c) + 0x30);
      *(undefined4 *)(ar4 + 0x35c) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x30);
      pfVar4 = (float *)0x46c;
      *(undefined1 *)(ar4 + 0x46c) = 0xff;
      break;
    case 1:
      *(undefined4 *)(ar4 + 0x358) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x2c);
      pfVar4 = (float *)0x354;
      *(undefined4 *)(ar4 + 0x354) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c) + 0x30) +
                     0x30) + 0x2c);
      break;
    case 2:
      *(undefined4 *)(ar4 + 0x360) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c) +
                                       0x30) + 0x30) + 0x30) + 0x2c);
      *(undefined4 *)(ar4 + 0x35c) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) +
                                                         0x2c) + 0x30) + 0x30) + 0x30) + 0x30) +
            0x2c);
      pfVar4 = (float *)(ar4 + 0x468);
      if (cVar7 == '\0') {
        in_fr1 = *pfVar4;
      }
      if (cVar6 == '\0' && 1.0 < in_fr1) {
        pfVar4 = (float *)0x468;
        if (cVar7 == '\0') {
          *(undefined4 *)(ar4 + 0x468) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x468) = (ulonglong)(uint)in_fr1;
        }
      }
      break;
    case 3:
      *(undefined4 *)(ar4 + 0x360) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) +
                                                         0x2c) + 0x30) + 0x30) + 0x30) + 0x30) +
            0x30);
      pfVar4 = (float *)0x46c;
      *(undefined1 *)(ar4 + 0x46c) = 0xff;
    }
  }
  return pfVar4;
}

__asm__(".globl _FUN_8c037034\n.set _FUN_8c037034, _FUN_8c037034_def\n");
