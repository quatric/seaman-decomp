#include "../decls.h"
int aica_ram_2657ec_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  int iVar2;
  int in_stack_ffffffdc;
  
  if (DAT_8c2784c0 == 0) {
    iVar2 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar2 = 0x7000103;
  }
  else {
    FUN_8c265a2c(ar4,&stack0xffffffdc,ar6,ar7);
    if (in_stack_ffffffdc == 2) {
      iVar2 = 0x6000001;
    }
    else {
      _DAT_8c4bd404 = 0;
      *(undefined4 *)(ar4 + 0x18) = 0;
      iVar2 = ar5 + -0x5f800000;
      ar7 = *(undefined4 *)(ar4 + 0xc);
      ar6 = *(undefined4 *)(ar4 + 8);
      uVar1 = *(undefined4 *)(DAT_8c2784c0 + 0x1ac);
      _DAT_8c4bd404 = FUN_8c1f900c(uVar1,iVar2,ar6,ar7,0,1,1,FUN_8c26592c,ar4);
      if (_DAT_8c4bd404 != 0) {
        FUN_8c2658e2(uVar1,iVar2,ar6,ar7,in_stack_ffffffdc);
      }
      iVar2 = FUN_8c265f74(ar4,2,ar6,ar7);
      if (iVar2 == 0) {
        ar5_00 = 0;
        *(int *)(DAT_8c2784c0 + 400) = ar4;
        *(int *)(DAT_8c2784c0 + 0x188) = *(int *)(DAT_8c2784c0 + 0x188) + 1;
        uVar1 = *(undefined4 *)(DAT_8c2784c0 + 0x1ac);
        _DAT_8c4bd404 = FUN_8c1f9194(uVar1,0,ar6,ar7);
        if (_DAT_8c4bd404 != 0) {
          FUN_8c2658e2(uVar1,ar5_00,ar6,ar7,in_stack_ffffffdc);
        }
      }
    }
  }
  if (iVar2 != 0) {
    FUN_8c2688a0(aica_ram_2657ec,iVar2,ar6,ar7,in_stack_ffffffdc);
  }
  return iVar2;
}

__asm__(".globl _aica_ram_2657ec\n.set _aica_ram_2657ec, _aica_ram_2657ec_def\n");
