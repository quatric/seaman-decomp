#include "../decls.h"
undefined4 FUN_8c0d84e8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 in_dr0;
  float fVar4;
  undefined4 in_fr14;
  bool bVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  if (DAT_8c437ca4 == '\0') {
    in_dr0 = CONCAT44(0x3e8f5c29,(int)in_dr0);
    _DAT_8c437ca0 = 0x3e8f5c29;
    _DAT_8c437ca4 = CONCAT31(DAT_8c437ca4_1,1);
  }
  fVar4 = 0.0;
  FUN_8c0d8710(ar4,ar5,ar6,ar7);
  if (ar4[1] == 0) {
    iVar1 = FUN_8c0d8aa0(ar4,*ar4,ar6,ar7);
    puVar2 = (undefined8 *)(iVar1 * 0x14 + -0x73bc6a84);
    if (cVar7 == '\0') {
      ar4[0xe] = *(undefined4 *)puVar2;
    }
    else {
      *(undefined8 *)(ar4 + 0xe) = *puVar2;
    }
    puVar2 = (undefined8 *)(iVar1 * 0x14 + -0x73bc6a80);
    if (cVar7 == '\0') {
      ar4[0xf] = *(undefined4 *)puVar2;
    }
    else {
      *(undefined8 *)(ar4 + 0xf) = *puVar2;
    }
    puVar2 = (undefined8 *)(iVar1 * 0x14 + -0x73bc6a7c);
    if (cVar7 == '\0') {
      ar4[0x10] = *(undefined4 *)puVar2;
    }
    else {
      *(undefined8 *)(ar4 + 0x10) = *puVar2;
    }
    puVar2 = (undefined8 *)(iVar1 * 0x14 + -0x73bc6a78);
    if (cVar7 == '\0') {
      ar4[0x11] = *(undefined4 *)puVar2;
    }
    else {
      *(undefined8 *)(ar4 + 0x11) = *puVar2;
    }
    puVar2 = (undefined8 *)(iVar1 * 0x14 + -0x73bc6a74);
    if (cVar7 == '\0') {
      ar4[0x12] = *(undefined4 *)puVar2;
      in_dr0 = CONCAT44(_DAT_8c437ca0,ar4[0x12]);
    }
    else {
      *(undefined8 *)(ar4 + 0x12) = *puVar2;
      in_dr0 = CONCAT44(_DAT_8c437ca4,_DAT_8c437ca0);
    }
    if (cVar6 == '\0' && (float)((ulonglong)in_dr0 >> 0x20) < (float)in_dr0) {
      if (cVar7 == '\0') {
        in_dr0 = CONCAT44(_DAT_8c437ca0,(float)in_dr0);
        ar4[0x12] = _DAT_8c437ca0;
      }
      else {
        in_dr0 = CONCAT44(_DAT_8c437ca4,_DAT_8c437ca0);
        *(undefined8 *)(ar4 + 0x12) = in_dr0;
      }
    }
  }
  else if (ar4[1] == 1) {
    if (cVar7 == '\0') {
      ar4[0xe] = ar4[0x17];
      ar4[0xf] = ar4[0x18];
      ar4[0x10] = ar4[0x19];
      ar4[0x11] = ar4[0x1a];
      in_dr0 = CONCAT44(ar4[0x1b],(int)in_dr0);
      ar4[0x12] = ar4[0x1b];
    }
    else {
      *(undefined8 *)(ar4 + 0xe) = *(undefined8 *)(ar4 + 0x17);
      *(undefined8 *)(ar4 + 0xf) = *(undefined8 *)(ar4 + 0x18);
      *(undefined8 *)(ar4 + 0x10) = *(undefined8 *)(ar4 + 0x19);
      *(undefined8 *)(ar4 + 0x11) = *(undefined8 *)(ar4 + 0x1a);
      in_dr0 = *(undefined8 *)(ar4 + 0x1b);
      *(undefined8 *)(ar4 + 0x12) = in_dr0;
    }
    if (((ar4[0x1c] == 1) && (ar4[0x1d] == 0)) && (ar4[0x1b8f] == -1)) {
      uVar3 = pack_acquire_entry_handle(0x8c2b59d0,ar4[0x1b8e],ar6,ar7);
      ar4[0x1b8f] = uVar3;
    }
    if (((ar4[0x1c] == 0) && (ar4[0x1b8f] != -1)) && (ar4[0x1b91] == 0)) {
      pack_release_entry_handle(0x8c2b59d0,ar4[0x1b8f],ar6,ar7);
      ar4[0x1b8f] = 0xffffffff;
    }
    if (ar4[0x1b89] != -1) {
      ar7 = ar4[0x1b8a];
      ar6 = 0;
      FUN_8c021d90(0x8c2b59d0,ar4[0x1b89],0,ar7);
    }
  }
  uVar3 = *ar4;
  FUN_8c0d82f0(ar4,uVar3,ar6,ar7);
  if (cVar7 == '\0') {
    fVar4 = (float)((ulonglong)in_dr0 >> 0x20);
  }
  if (cVar6 == '\0') {
    bVar5 = fVar4 < 1.0;
  }
  else {
    bVar5 = (double)CONCAT44(in_fr14,fVar4) < (double)CONCAT44(0x3f800000,(int)in_dr0);
  }
  if (bVar5) {
    uVar3 = FUN_8c235f14(ar4,uVar3,ar6,ar7);
  }
  else {
    uVar3 = FUN_8c235ee4(ar4,uVar3,ar6,ar7);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c0d84e8\n.set _FUN_8c0d84e8, _FUN_8c0d84e8_def\n");
