#include "../decls.h"
uint FUN_8c253d20_def(undefined4 ar4,uint ar5,uint ar6,uint ar7)

{
  uint uVar1;
  uint *unaff_r14;
  undefined4 in_PR;
  
  do {
    uVar1 = *unaff_r14 & 7;
    if (uVar1 == 0) {
      FUN_8c256328(0,ar5,ar6,ar7);
      FUN_8c25b5d0(0,ar5,ar6,ar7,in_PR);
      if ((*unaff_r14 & 0x20) == 0) {
        ar5 = unaff_r14[5];
        ar7 = unaff_r14[7];
        ar6 = unaff_r14[6];
        FUN_8c256b0c(0,ar5,ar6,ar7,in_PR);
      }
      else {
        ar5 = unaff_r14[5];
        ar6 = unaff_r14[6];
        ar7 = unaff_r14[7];
        FUN_8c256e18(0,ar5,ar6,ar7);
      }
      FUN_8c256fec(0,ar5,ar6,ar7);
      if ((*unaff_r14 & 8) == 0) {
        FUN_8c254026(unaff_r14[1],ar5,ar6,ar7);
      }
      if ((*unaff_r14 & 0x10) == 0) {
        FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7);
      }
LAB_8c253fa8:
      uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
    }
    else {
      if (uVar1 == 1) {
        FUN_8c256328(0,ar5,ar6,ar7);
        if ((*unaff_r14 & 0x20) == 0) {
          ar5 = unaff_r14[5];
          ar7 = unaff_r14[7];
          ar6 = unaff_r14[6];
          FUN_8c256b0c(0,ar5,ar6,ar7,in_PR);
        }
        else {
          ar5 = unaff_r14[5];
          ar6 = unaff_r14[6];
          ar7 = unaff_r14[7];
          FUN_8c256e18(0,ar5,ar6,ar7);
        }
        FUN_8c256fec(0,ar5,ar6,ar7);
        if ((*unaff_r14 & 8) == 0) {
          FUN_8c254026(unaff_r14[1],ar5,ar6,ar7);
        }
        if ((*unaff_r14 & 0x10) == 0) {
          FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7);
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 2) {
        FUN_8c256328(0,ar5,ar6,ar7);
        FUN_8c25b5d0(0,ar5,ar6,ar7,in_PR);
        FUN_8c256fec(0,ar5,ar6,ar7);
        if ((*unaff_r14 & 8) == 0) {
          FUN_8c254026(unaff_r14[1],ar5,ar6,ar7);
        }
        if ((*unaff_r14 & 0x10) == 0) {
          FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7);
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 3) {
        FUN_8c256328(0,ar5,ar6,ar7);
        FUN_8c256fec(0,ar5,ar6,ar7);
        if ((*unaff_r14 & 8) == 0) {
          FUN_8c254026(unaff_r14[1],ar5,ar6,ar7);
        }
        if ((*unaff_r14 & 0x10) == 0) {
          FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7);
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 4) {
        FUN_8c256328(0,ar5,ar6,ar7);
        FUN_8c25b5d0(0,ar5,ar6,ar7,in_PR);
        if ((*unaff_r14 & 0x20) == 0) {
          ar5 = unaff_r14[5];
          ar7 = unaff_r14[7];
          ar6 = unaff_r14[6];
          FUN_8c256b0c(0,ar5,ar6,ar7,in_PR);
        }
        else {
          ar5 = unaff_r14[5];
          ar6 = unaff_r14[6];
          ar7 = unaff_r14[7];
          FUN_8c256e18(0,ar5,ar6,ar7);
        }
        if ((*unaff_r14 & 8) == 0) {
          FUN_8c254026(unaff_r14[1],ar5,ar6,ar7);
        }
        if ((*unaff_r14 & 0x10) == 0) {
          FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7);
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 5) {
        FUN_8c256328(0,ar5,ar6,ar7);
        if ((*unaff_r14 & 0x20) == 0) {
          ar5 = unaff_r14[5];
          ar7 = unaff_r14[7];
          ar6 = unaff_r14[6];
          FUN_8c256b0c(0,ar5,ar6,ar7,in_PR);
        }
        else {
          ar5 = unaff_r14[5];
          ar6 = unaff_r14[6];
          ar7 = unaff_r14[7];
          FUN_8c256e18(0,ar5,ar6,ar7);
        }
        if ((*unaff_r14 & 8) == 0) {
          FUN_8c254026(unaff_r14[1],ar5,ar6,ar7);
        }
        if ((*unaff_r14 & 0x10) == 0) {
          FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7);
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 6) {
        FUN_8c256328(0,ar5,ar6,ar7);
        FUN_8c25b5d0(0,ar5,ar6,ar7,in_PR);
        if ((*unaff_r14 & 8) == 0) {
          FUN_8c254026(unaff_r14[1],ar5,ar6,ar7);
        }
        if ((*unaff_r14 & 0x10) == 0) {
          FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7);
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 7) {
        uVar1 = *unaff_r14;
        if ((uVar1 & 8) == 0) {
          uVar1 = FUN_8c254026(unaff_r14[1],ar5,ar6,ar7);
        }
        if ((*unaff_r14 & 0x10) == 0) {
          uVar1 = FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7);
        }
      }
    }
    unaff_r14 = (uint *)unaff_r14[0xc];
    if (unaff_r14 == (uint *)0x0) {
      return uVar1;
    }
  } while( true );
}

__asm__(".globl _FUN_8c253d20\n.set _FUN_8c253d20, _FUN_8c253d20_def\n");
