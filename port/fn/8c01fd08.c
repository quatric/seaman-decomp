#include "../decls.h"
int s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar5_00;
  int *ar6_00;
  int aiStack_44 [3];
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  aiStack_44[1] = 0;
  aiStack_44[0] = 0;
  aiStack_44[2] = *(int *)(&DATA_8c12fbe0);
  iStack_38 = *(int *)((&DATA_8c12fbe0) + 4);
  iStack_34 = *(int *)((&DATA_8c12fbe0) + 8);
  iStack_30 = *(int *)((&DATA_8c12fbe0) + 0xc);
  iStack_2c = *(int *)((&DATA_8c12fbe0) + 0x10);
  iStack_28 = *(int *)((&DATA_8c12fbe0) + 0x14);
  iStack_24 = *(int *)((&DATA_8c12fbe0) + 0x18);
  iStack_20 = *(int *)((&DATA_8c12fbe0) + 0x1c);
  iStack_1c = *(int *)((&DATA_8c12fbe0) + 0x20);
  iStack_18 = *(int *)((&DATA_8c12fbe0) + 0x24);
  iStack_14 = *(int *)((&DATA_8c12fbe0) + 0x28);
  while( true ) {
    ar6_00 = aiStack_44;
    ar5_00 = aiStack_44 + 1;
    iVar1 = FUN_8c2124d0(ar5[2],ar5_00,ar6_00,ar7);
    if (iVar1 == 0) break;
    if (aiStack_44[2] == aiStack_44[0]) {
      ar7 = 0;
      FUN_8c01fec4(ar4,ar5,iVar1,0);
    }
    else if (iStack_38 == aiStack_44[0]) {
      ar7 = 1;
      FUN_8c01fec4(ar4,ar5,iVar1,1);
    }
    else if (iStack_34 == aiStack_44[0]) {
      ar7 = 2;
      FUN_8c01fec4(ar4,ar5,iVar1,2);
    }
    else if (iStack_30 == aiStack_44[0]) {
      ar7 = 3;
      FUN_8c01fec4(ar4,ar5,iVar1,3);
    }
    else if (iStack_2c == aiStack_44[0]) {
      ar7 = 4;
      FUN_8c01fec4(ar4,ar5,iVar1,4);
    }
    else if (iStack_28 == aiStack_44[0]) {
      ar7 = 5;
      FUN_8c01fec4(ar4,ar5,iVar1,5);
    }
    else if (iStack_24 == aiStack_44[0]) {
      ar7 = 6;
      FUN_8c01fec4(ar4,ar5,iVar1,6);
    }
    else if (iStack_20 == aiStack_44[0]) {
      ar7 = 7;
      FUN_8c01fec4(ar4,ar5,iVar1,7);
    }
    else if (iStack_1c == aiStack_44[0]) {
      ar7 = 8;
      FUN_8c01fec4(ar4,ar5,iVar1,8);
    }
    else if (iStack_18 == aiStack_44[0]) {
      ar7 = 9;
      FUN_8c01fec4(ar4,ar5,iVar1,9);
    }
    else if (iStack_14 == aiStack_44[0]) {
      ar7 = 10;
      FUN_8c01fec4(ar4,ar5,iVar1,10);
    }
    else {
      FUN_8c1fb57c(iVar1,ar5_00,ar6_00,ar7);
    }
  }
  iVar1 = *ar5;
  if (iVar1 != 0xb) {
    iVar1 = FUN_8c1fb57c(ar5,ar5_00,ar6_00,ar7);
  }
  return iVar1;
}

__asm__(".globl _s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e\n.set _s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e, _s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e_def\n");
