#include "../decls.h"
uint FUN_8c253d1c_def(uint *ar4,uint ar5,uint ar6,uint ar7)

{
  uint uVar1;
  undefined4 uVar2;
  
  do {
    uVar1 = *ar4 & 7;
    if (uVar1 == 0) {
      FUN_8c256328(0,ar5,ar6,ar7,0);
      uVar2 = FUN_8c25b5d0(0,ar5,ar6,ar7,4);
      if ((*ar4 & 0x20) == 0) {
        ar5 = ar4[5];
        ar7 = ar4[7];
        ar6 = ar4[6];
        FUN_8c256b0c(0,ar5,ar6,ar7,uVar2);
      }
      else {
        ar5 = ar4[5];
        ar6 = ar4[6];
        ar7 = ar4[7];
        FUN_8c256e18(0,ar5,ar6,ar7,uVar2);
      }
      FUN_8c256fec(0,ar5,ar6,ar7,4);
      if ((*ar4 & 8) == 0) {
        FUN_8c254026(ar4[1],ar5,ar6,ar7);
      }
      if ((*ar4 & 0x10) == 0) {
        FUN_8c254066(ar4[0xb],ar5,ar6,ar7);
      }
LAB_8c253fa8:
      uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
    }
    else {
      if (uVar1 == 1) {
        uVar2 = FUN_8c256328(0,ar5,ar6,ar7,1);
        if ((*ar4 & 0x20) == 0) {
          ar5 = ar4[5];
          ar7 = ar4[7];
          ar6 = ar4[6];
          FUN_8c256b0c(0,ar5,ar6,ar7,uVar2);
        }
        else {
          ar5 = ar4[5];
          ar6 = ar4[6];
          ar7 = ar4[7];
          FUN_8c256e18(0,ar5,ar6,ar7,uVar2);
        }
        FUN_8c256fec(0,ar5,ar6,ar7,4);
        if ((*ar4 & 8) == 0) {
          FUN_8c254026(ar4[1],ar5,ar6,ar7);
        }
        if ((*ar4 & 0x10) == 0) {
          FUN_8c254066(ar4[0xb],ar5,ar6,ar7);
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 2) {
        FUN_8c256328(0,ar5,ar6,ar7,2);
        FUN_8c25b5d0(0,ar5,ar6,ar7,4);
        FUN_8c256fec(0,ar5,ar6,ar7,4);
        if ((*ar4 & 8) == 0) {
          FUN_8c254026(ar4[1],ar5,ar6,ar7);
        }
        if ((*ar4 & 0x10) == 0) {
          FUN_8c254066(ar4[0xb],ar5,ar6,ar7);
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 3) {
        FUN_8c256328(0,ar5,ar6,ar7,3);
        FUN_8c256fec(0,ar5,ar6,ar7,4);
        if ((*ar4 & 8) == 0) {
          FUN_8c254026(ar4[1],ar5,ar6,ar7);
        }
        if ((*ar4 & 0x10) == 0) {
          FUN_8c254066(ar4[0xb],ar5,ar6,ar7);
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 4) {
        FUN_8c256328(0,ar5,ar6,ar7,4);
        uVar2 = FUN_8c25b5d0(0,ar5,ar6,ar7,4);
        if ((*ar4 & 0x20) == 0) {
          ar5 = ar4[5];
          ar7 = ar4[7];
          ar6 = ar4[6];
          FUN_8c256b0c(0,ar5,ar6,ar7,uVar2);
        }
        else {
          ar5 = ar4[5];
          ar6 = ar4[6];
          ar7 = ar4[7];
          FUN_8c256e18(0,ar5,ar6,ar7,uVar2);
        }
        if ((*ar4 & 8) == 0) {
          FUN_8c254026(ar4[1],ar5,ar6,ar7);
        }
        if ((*ar4 & 0x10) == 0) {
          FUN_8c254066(ar4[0xb],ar5,ar6,ar7);
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 5) {
        uVar2 = FUN_8c256328(0,ar5,ar6,ar7,5);
        if ((*ar4 & 0x20) == 0) {
          ar5 = ar4[5];
          ar7 = ar4[7];
          ar6 = ar4[6];
          FUN_8c256b0c(0,ar5,ar6,ar7,uVar2);
        }
        else {
          ar5 = ar4[5];
          ar6 = ar4[6];
          ar7 = ar4[7];
          FUN_8c256e18(0,ar5,ar6,ar7,uVar2);
        }
        if ((*ar4 & 8) == 0) {
          FUN_8c254026(ar4[1],ar5,ar6,ar7);
        }
        if ((*ar4 & 0x10) == 0) {
          FUN_8c254066(ar4[0xb],ar5,ar6,ar7);
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 6) {
        FUN_8c256328(0,ar5,ar6,ar7,6);
        FUN_8c25b5d0(0,ar5,ar6,ar7,4);
        if ((*ar4 & 8) == 0) {
          FUN_8c254026(ar4[1],ar5,ar6,ar7);
        }
        if ((*ar4 & 0x10) == 0) {
          FUN_8c254066(ar4[0xb],ar5,ar6,ar7);
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 7) {
        uVar1 = *ar4;
        if ((uVar1 & 8) == 0) {
          uVar1 = FUN_8c254026(ar4[1],ar5,ar6,ar7);
        }
        if ((*ar4 & 0x10) == 0) {
          uVar1 = FUN_8c254066(ar4[0xb],ar5,ar6,ar7);
        }
      }
    }
    ar4 = (uint *)(uint)ar4[0xc];
    if (ar4 == (uint *)0x0) {
      return uVar1;
    }
  } while( true );
}

__asm__(".globl _FUN_8c253d1c\n.set _FUN_8c253d1c, _FUN_8c253d1c_def\n");
