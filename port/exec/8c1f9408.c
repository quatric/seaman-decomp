#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4
s_nsyG2_Ver_1_01_12_Build_Dec__1f9416_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_nsyG2_Ver_1_01_12_Build_Dec__1f9416";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 a6;
  int iVar3;
  int iVar4;
  
  (vsp = ((unsigned long)(fr0_ - 0)), log_message((*(undefined4 *)(unsigned)(unsigned)0x8c273a30),ar5,ar6,ar7));
  a6 = 0x114;
  uVar2 = 0xff;
  *(unsigned *)0x8c273a28 = (unsigned)(unsigned long)((undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c474a80));
  (vsp = ((unsigned long)(fr0_ - 0)), memset(((undefined1 *)(unsigned)0x8c474a80),0xff,0x114,ar7));
  *(unsigned *)(unsigned long)*(unsigned *)0x8c273a28 = (unsigned)(0xa05f7800);
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[0x35] = 1;
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[0x36] = 0;
  iVar3 = 0;
  do {
    ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[iVar3 * 0xd + 1] = iVar3;
    ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[iVar3 * 0xd + 0xb] = 0;
    ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[iVar3 * 0xd + 0xc] = 0;
    ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[iVar3 * 0xd + 0xd] = 0;
    ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[iVar3 * 0xd + 2] = 0;
    ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[iVar3 * 0xd + 3] = 0;
    ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[iVar3 * 0xd + 4] = 0;
    ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[iVar3 * 0xd + 5] = 0;
    ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[iVar3 * 0xd + 6] = 0;
    ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[iVar3 * 0xd + 7] = 3;
    ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[iVar3 * 0xd + 8] = 0;
    ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[iVar3 * 0xd + 9] = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f8eb0(((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28) + iVar3 * 0xd + 1,uVar2,a6,ar7));
    iVar4 = iVar3 + 1;
    ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[iVar3 + 0x37] = 0;
    ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[iVar3 + 0x3f] = 0;
    ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[iVar3 + 0x3b] = 0;
    iVar3 = iVar4;
  } while (iVar4 < 4);
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[0x43] = 0;
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[0x44] = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f90a4(0xc000000,0xcffffff,a6,ar7));
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[0x35] = 1;
  puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28) + 10;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fa244(0xa60,((void *)0x8c1f8cbc),0x10,((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28) + 1));
  *puVar1 = uVar2;
  puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28) + 0x17;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fa244(0xa80,((void *)0x8c1f8cbc),0x10,((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28) + 0xe));
  *puVar1 = uVar2;
  puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28) + 0x24;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fa244(0xaa0,((void *)0x8c1f8cbc),0x10,((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28) + 0x1b));
  *puVar1 = uVar2;
  puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28) + 0x31;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fa244(0xac0,((void *)0x8c1f8cbc),0x10,((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28) + 0x28));
  *puVar1 = uVar2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c474bac) = 0;
  return 0;
}

__asm__(".globl _s_nsyG2_Ver_1_01_12_Build_Dec__1f9416\n.set _s_nsyG2_Ver_1_01_12_Build_Dec__1f9416, _s_nsyG2_Ver_1_01_12_Build_Dec__1f9416_def\n");
