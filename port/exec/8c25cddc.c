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
FUN_8c25cddc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25cddc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = (*(undefined1 *)(unsigned)0x8c278778);
  uVar6 = (*(undefined1 *)(unsigned)0x8c278774);
  uVar5 = (*(undefined1 *)(unsigned)0x8c278770);
  uVar4 = (*(undefined1 *)(unsigned)0x8c27876c);
  uVar3 = (*(undefined1 *)(unsigned)0x8c278768);
  uVar2 = (*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c278760)+4));
  uVar1 = (undefined4)(*(undefined1 *)(unsigned)0x8c278760);
  if (ar4 == (undefined4 *)(unsigned)0x0) {
    return ain0;
  }
  ar4[7] = (*(undefined1 *)(unsigned)0x8c27877c);
  ar4[6] = uVar7;
  ar4[5] = uVar6;
  ar4[4] = uVar5;
  ar4[3] = uVar4;
  ar4[2] = uVar3;
  ar4[1] = uVar2;
  *ar4 = uVar1;
  uVar7 = (*(undefined1 *)(unsigned)0x8c278798);
  uVar6 = (*(undefined1 *)(unsigned)0x8c278794);
  uVar5 = (*(undefined1 *)(unsigned)0x8c278790);
  uVar4 = (*(undefined1 *)(unsigned)0x8c27878c);
  uVar3 = (*(undefined1 *)(unsigned)0x8c278788);
  uVar2 = (*(undefined1 *)(unsigned)0x8c278784);
  uVar1 = (*(undefined1 *)(unsigned)0x8c278780);
  ar4[0xf] = (*(undefined1 *)(unsigned)0x8c27879c);
  ar4[0xe] = uVar7;
  ar4[0xd] = uVar6;
  ar4[0xc] = uVar5;
  ar4[0xb] = uVar4;
  ar4[10] = uVar3;
  ar4[9] = uVar2;
  ar4[8] = uVar1;
  return ain0;
}

__asm__(".globl _FUN_8c25cddc\n.set _FUN_8c25cddc, _FUN_8c25cddc_def\n");
