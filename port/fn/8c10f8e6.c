#include "../decls.h"
uint FUN_8c10f8e6_def(int *ar4,uint ar5,int *ar6,int *ar7)

{
  uint uVar1;
  undefined4 ar5_00;
  int a5;
  undefined4 ar6_00;
  int iVar2;
  uint uVar3;
  undefined4 *puStack_1c;
  
  iVar2 = *ar4;
  uVar1 = ar5 & 0xff;
  uVar3 = 1;
  if (uVar1 == 1) {
    uVar1 = FUN_8c10f736(ar4,ar6,ar6,ar7);
    uVar3 = (uint)((uVar1 & 0xff) == 0);
  }
  else if (uVar1 == 2) {
    *(char *)((int)ar6 + ar4[0x1b] + 1) = (char)ar7;
  }
  else if (uVar1 == 3) {
    if ((ar4[0x12] != 0) || (ar6 != (int *)0x0)) {
      if ((short)ar4[0xc] == 0) {
        ar4[0x15] = (int)((float)ar4[0x22] + 1.0);
      }
      ar4[10] = 1;
    }
  }
  else {
    if (uVar1 == 4) {
      puStack_1c = (undefined4 *)(uint)ar4[3];
      ar6_00 = puStack_1c[1];
      ar5_00 = 7;
    }
    else {
      if (uVar1 != 5) {
        if (uVar1 == 6) {
          if (ar6 != (int *)0x0) {
            FUN_8c10f6f0(ar4,*ar7 + (int)ar6,ar6,ar7);
            *ar7 = *ar7 + (ar4[0x1e] + 6) * 4;
            return 1;
          }
          FUN_8c10fa6c(ar4,ar5,0,ar7);
          return 1;
        }
        if (uVar1 == 7) {
          if (ar6 != (int *)0x0) {
            FUN_8c10f69c(ar4,*ar7 + (int)ar6,ar6,ar7);
          }
          iVar2 = *ar7 + (ar4[0x1e] + 6) * 4;
        }
        else {
          if (uVar1 == 8) {
            FUN_8c10f850(ar4,*ar6,ar6,ar7);
            return 1;
          }
          if (uVar1 == 9) {
            *ar6 = ar4[0xb];
            return 1;
          }
          if (uVar1 != 0xf8) {
            if (uVar1 != 0xff) {
              return 0;
            }
            (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x11],ar6,ar7);
            (**(code **)(iVar2 + 0x18))(iVar2,ar4[0xd],ar6,ar7);
            a5 = ar4[0x1b];
            (**(code **)(iVar2 + 0x18))(iVar2,a5,ar6,ar7);
            FUN_8c120668(ar4,a5,ar6,ar7);
            return 1;
          }
          iVar2 = ar4[0x12];
        }
        *ar7 = iVar2;
        return 1;
      }
      puStack_1c = (undefined4 *)(uint)ar4[3];
      ar5_00 = 6;
      ar6_00 = puStack_1c[1];
    }
    uVar3 = FUN_8c1113d0(*puStack_1c,ar5_00,ar6_00,ar6);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c10f8e6\n.set _FUN_8c10f8e6, _FUN_8c10f8e6_def\n");
