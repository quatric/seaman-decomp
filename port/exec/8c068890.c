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
undefined4 * FUN_8c068890_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c068890";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar5;
  
  *ar4 = *ar5;
  uVar1 = ar5[2];
  ar4[1] = ar5[1];
  ar4[2] = uVar1;
  uVar1 = ar5[4];
  ar4[3] = ar5[3];
  ar4[4] = uVar1;
  uVar1 = ar5[6];
  ar4[5] = ar5[5];
  ar4[6] = uVar1;
  uVar1 = ar5[8];
  ar4[7] = ar5[7];
  ar4[8] = uVar1;
  ar4[9] = ar5[9];
  *(undefined2 *)(unsigned)(ar4 + 10) = *(undefined2 *)(unsigned)(ar5 + 10);
  puVar8 = ar4 + 0xb;
  puVar4 = ar5 + 0xb;
  iVar2 = 0xb;
  do {
    puVar5 = puVar4 + 1;
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 2;
    puVar8[1] = *puVar5;
    puVar8 = puVar8 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(unsigned)(0x84 + (int)ar4) = *(undefined4 *)(unsigned)(0x84 + (int)ar5);
  *(undefined4 *)(unsigned)(0x88 + (int)ar4) = *(undefined4 *)(unsigned)(0x88 + (int)ar5);
  puVar6 = (undefined2 *)(unsigned)((int)ar4 + 0x8c);
  puVar3 = (undefined2 *)(unsigned)((int)ar5 + 0x8c);
  *puVar6 = *puVar3;
  puVar6[1] = puVar3[1];
  puVar6[2] = puVar3[2];
  puVar6[3] = puVar3[3];
  puVar6[4] = puVar3[4];
  puVar6 = (undefined2 *)(unsigned)((int)ar4 + 0x96);
  puVar3 = (undefined2 *)(unsigned)((int)ar5 + 0x96);
  *puVar6 = *puVar3;
  puVar6[1] = puVar3[1];
  puVar6[2] = puVar3[2];
  puVar6[3] = puVar3[3];
  puVar6[4] = puVar3[4];
  *(undefined1 *)(unsigned)(0xa0 + (int)ar4) = *(undefined1 *)(unsigned)(0xa0 + (int)ar5);
  *(undefined1 *)(unsigned)(0xa1 + (int)ar4) = *(undefined1 *)(unsigned)(0xa1 + (int)ar5);
  *(undefined2 *)(unsigned)(0xa2 + (int)ar4) = *(undefined2 *)(unsigned)(0xa2 + (int)ar5);
  *(undefined2 *)(unsigned)(0xa4 + (int)ar4) = *(undefined2 *)(unsigned)(0xa4 + (int)ar5);
  *(undefined4 *)(unsigned)(0xa8 + (int)ar4) = *(undefined4 *)(unsigned)(0xa8 + (int)ar5);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c068a2c((int)ar4 + 0xac,(int)ar5 + 0xac,ar6,ar7));
  *(undefined4 *)(unsigned)(0xb8 + (int)ar4) = *(undefined4 *)(unsigned)(0xb8 + (int)ar5);
  *(undefined4 *)(unsigned)(0xbc + (int)ar4) = *(undefined4 *)(unsigned)(0xbc + (int)ar5);
  *(undefined4 *)(unsigned)(0xc0 + (int)ar4) = *(undefined4 *)(unsigned)(0xc0 + (int)ar5);
  *(undefined4 *)(unsigned)(0xc4 + (int)ar4) = *(undefined4 *)(unsigned)(0xc4 + (int)ar5);
  *(undefined4 *)(unsigned)(0xc8 + (int)ar4) = *(undefined4 *)(unsigned)(0xc8 + (int)ar5);
  puVar7 = (undefined1 *)(unsigned)((int)ar4 + 0xcc);
  puVar9 = (undefined1 *)(unsigned)((int)ar5 + 0xcc);
  iVar2 = 0x37f;
  do {
    puVar10 = puVar9 + 1;
    *puVar7 = *puVar9;
    puVar9 = puVar9 + 2;
    puVar7[1] = *puVar10;
    puVar7 = puVar7 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return ar4;
}

__asm__(".globl _FUN_8c068890\n.set _FUN_8c068890, _FUN_8c068890_def\n");
