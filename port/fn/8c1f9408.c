#include "../decls.h"
undefined4
s_nsyG2_Ver_1_01_12_Build_Dec__1f9416_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 a6;
  int iVar3;
  int iVar4;
  
  log_message(PTR_s_syG2_Ver_1_01_12_Build_Dec_06_19_8c273a30,ar5,ar6,ar7);
  a6 = 0x114;
  uVar2 = 0xff;
  DAT_8c273a28 = (undefined4 *)&DAT_8c474a80;
  memset(&DAT_8c474a80,0xff,0x114,ar7);
  *DAT_8c273a28 = 0xa05f7800;
  DAT_8c273a28[0x35] = 1;
  DAT_8c273a28[0x36] = 0;
  iVar3 = 0;
  do {
    DAT_8c273a28[iVar3 * 0xd + 1] = iVar3;
    DAT_8c273a28[iVar3 * 0xd + 0xb] = 0;
    DAT_8c273a28[iVar3 * 0xd + 0xc] = 0;
    DAT_8c273a28[iVar3 * 0xd + 0xd] = 0;
    DAT_8c273a28[iVar3 * 0xd + 2] = 0;
    DAT_8c273a28[iVar3 * 0xd + 3] = 0;
    DAT_8c273a28[iVar3 * 0xd + 4] = 0;
    DAT_8c273a28[iVar3 * 0xd + 5] = 0;
    DAT_8c273a28[iVar3 * 0xd + 6] = 0;
    DAT_8c273a28[iVar3 * 0xd + 7] = 3;
    DAT_8c273a28[iVar3 * 0xd + 8] = 0;
    DAT_8c273a28[iVar3 * 0xd + 9] = 0;
    FUN_8c1f8eb0(DAT_8c273a28 + iVar3 * 0xd + 1,uVar2,a6,ar7);
    iVar4 = iVar3 + 1;
    DAT_8c273a28[iVar3 + 0x37] = 0;
    DAT_8c273a28[iVar3 + 0x3f] = 0;
    DAT_8c273a28[iVar3 + 0x3b] = 0;
    iVar3 = iVar4;
  } while (iVar4 < 4);
  DAT_8c273a28[0x43] = 0;
  DAT_8c273a28[0x44] = 0;
  FUN_8c1f90a4(0xc000000,0xcffffff,a6,ar7);
  DAT_8c273a28[0x35] = 1;
  puVar1 = DAT_8c273a28 + 10;
  uVar2 = FUN_8c1fa244(0xa60,FUN_8c1f8cbc,0x10,DAT_8c273a28 + 1);
  *puVar1 = uVar2;
  puVar1 = DAT_8c273a28 + 0x17;
  uVar2 = FUN_8c1fa244(0xa80,FUN_8c1f8cbc,0x10,DAT_8c273a28 + 0xe);
  *puVar1 = uVar2;
  puVar1 = DAT_8c273a28 + 0x24;
  uVar2 = FUN_8c1fa244(0xaa0,FUN_8c1f8cbc,0x10,DAT_8c273a28 + 0x1b);
  *puVar1 = uVar2;
  puVar1 = DAT_8c273a28 + 0x31;
  uVar2 = FUN_8c1fa244(0xac0,FUN_8c1f8cbc,0x10,DAT_8c273a28 + 0x28);
  *puVar1 = uVar2;
  _DAT_8c474bac = 0;
  return 0;
}

__asm__(".globl _s_nsyG2_Ver_1_01_12_Build_Dec__1f9416\n.set _s_nsyG2_Ver_1_01_12_Build_Dec__1f9416, _s_nsyG2_Ver_1_01_12_Build_Dec__1f9416_def\n");
