#include "../decls.h"
int FUN_8c0e9220_def(int ar4,undefined4 ar5,int ar6,int *ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int *a7;
  char cVar8;
  byte bStack_40;
  undefined1 auStack_3c [36];
  
  puVar6 = auStack_3c;
  iVar3 = 0x10;
  puVar5 = (&DATA_8c14012c);
  do {
    puVar4 = puVar5 + 1;
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar6[1] = *puVar4;
    puVar6 = puVar6 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar7 = ar5;
  a7 = ar7;
  uVar1 = FUN_8c02602c(ar5,ar5,ar6,ar7);
  if (*(uint *)(0xb4 + ar4) != (uVar1 & 0xffff)) {
    if (*(uint *)(0xb4 + ar4) < 5) {
      (**(code **)(0x198 + *ar7))(ar7,uVar7,ar6,a7);
      *(byte *)(0xbc + ar4) = (byte)(((uint)bStack_40 << 0x1e) >> 0x1f);
      *(char *)(0xbc + ar4) =
           *(char *)(0xbc + ar4) - (char)((int)((uint)bStack_40 << 0x1f) >> 0x1f);
      uVar7 = (**(code **)(0x11c + *ar7))(ar7,0xb,ar6,a7);
      *(char *)(ar4 + 0x4d) = (char)uVar7;
      *(undefined1 *)(ar4 + 0x4e) = 0;
      for (iVar3 = 0; iVar2 = (**(code **)(0x11c + *ar7))(ar7,10,ar6,a7), iVar3 < iVar2;
          iVar3 = iVar3 + 1) {
        uVar7 = 10;
        ar6 = iVar3;
        iVar2 = (**(code **)(0x100 + *ar7))(ar7,10,iVar3,a7);
        iVar2 = (**(code **)(0x114 + *(int *)(iVar2 + 8)))(iVar2,uVar7,ar6,a7);
        if (iVar2 == 0x11) {
          uVar7 = 10;
          ar6 = iVar3;
          iVar2 = (**(code **)(0x100 + *ar7))(ar7,10,iVar3,a7);
          iVar2 = (**(code **)(0xb4 + *(int *)(iVar2 + 8)))(iVar2,uVar7,ar6,a7);
          if (iVar2 == 1) {
            *(char *)(ar4 + 0x4e) = *(char *)(ar4 + 0x4e) + '\x01';
          }
        }
      }
      *(undefined1 *)(ar4 + 0x4f) = 0;
      for (iVar3 = 0; iVar2 = (**(code **)(0x11c + *ar7))(ar7,10,ar6,a7), iVar3 < iVar2;
          iVar3 = iVar3 + 1) {
        uVar7 = 10;
        ar6 = iVar3;
        iVar2 = (**(code **)(0x100 + *ar7))(ar7,10,iVar3,a7);
        iVar2 = (**(code **)(0x114 + *(int *)(iVar2 + 8)))(iVar2,uVar7,ar6,a7);
        if (iVar2 == 0x12) {
          uVar7 = 10;
          ar6 = iVar3;
          iVar2 = (**(code **)(0x100 + *ar7))(ar7,10,iVar3,a7);
          iVar2 = (**(code **)(0xb4 + *(int *)(iVar2 + 8)))(iVar2,uVar7,ar6,a7);
          if (iVar2 == 1) {
            *(char *)(ar4 + 0x4f) = *(char *)(ar4 + 0x4f) + '\x01';
          }
        }
      }
      *(undefined1 *)(ar4 + 0x50) = 0;
      for (iVar3 = 0; iVar2 = (**(code **)(0x11c + *ar7))(ar7,10,ar6,a7), iVar3 < iVar2;
          iVar3 = iVar3 + 1) {
        uVar7 = 10;
        ar6 = iVar3;
        iVar2 = (**(code **)(0x100 + *ar7))(ar7,10,iVar3,a7);
        iVar2 = (**(code **)(0x114 + *(int *)(iVar2 + 8)))(iVar2,uVar7,ar6,a7);
        if (iVar2 == 0x13) {
          uVar7 = 10;
          ar6 = iVar3;
          iVar2 = (**(code **)(0x100 + *ar7))(ar7,10,iVar3,a7);
          iVar2 = (**(code **)(0xb4 + *(int *)(iVar2 + 8)))(iVar2,uVar7,ar6,a7);
          if (iVar2 == 1) {
            *(char *)(ar4 + 0x50) = *(char *)(ar4 + 0x50) + '\x01';
          }
        }
      }
      for (iVar3 = 0; iVar3 < 0x12; iVar3 = iVar3 + 1) {
        for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
          *(undefined1 *)(ar4 + iVar3 * 2 + iVar2 + 0x51) = 0;
          *(undefined1 *)(ar4 + iVar3 * 2 + iVar2 + 0x75) = 0;
        }
      }
    }
    *(undefined4 *)(ar4 + 8) = 0;
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + 1;
    iVar3 = (*(code *)(&libgcc_divide_helper_0103d0))
                      (*(undefined4 *)(0xb4 + ar4),0x12c,ar6,a7);
    if (iVar3 == 0xc8) {
      *(undefined4 *)(ar4 + 4) = 1;
    }
    iVar3 = (*(code *)(&libgcc_divide_helper_0103d0))
                      (*(undefined4 *)(0xb4 + ar4),0x5a,ar6,a7);
    if (iVar3 == 0x4b) {
      *(undefined4 *)(ar4 + 8) = 1;
    }
    uVar7 = 100;
    iVar3 = (*(code *)(&libgcc_divide_helper_0103d0))
                      (*(undefined4 *)(0xb4 + ar4),100,ar6,a7);
    if (iVar3 == 0x41) {
      *(undefined4 *)(ar4 + 0xc) = 1;
    }
    *(undefined1 *)(0xbd + ar4) = 0;
    (**(code **)(0x198 + *ar7))(ar7,uVar7,ar6,a7);
    cVar8 = -(char)((int)((uint)bStack_40 << 0x1f) >> 0x1f) -
            (char)((int)((uint)bStack_40 << 0x1e) >> 0x1f);
    if (cVar8 != *(char *)(0xbc + ar4)) {
      *(undefined1 *)(0xbd + ar4) = 1;
    }
    *(char *)(0xbc + ar4) = cVar8;
  }
  *(undefined4 *)(0xcc + ar4) = 1;
  *(undefined4 *)(0xd0 + ar4) = 1;
  uVar1 = FUN_8c02602c(ar5,uVar7,ar6,a7);
  iVar3 = 0xb4;
  *(uint *)(0xb4 + ar4) = uVar1 & 0xffff;
  return iVar3;
}

__asm__(".globl _FUN_8c0e9220\n.set _FUN_8c0e9220, _FUN_8c0e9220_def\n");
