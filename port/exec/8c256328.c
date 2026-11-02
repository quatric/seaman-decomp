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
undefined4 FUN_8c256328_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c256328";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 in_fr1 = 0;
  undefined4 in_fr3 = 0;
  undefined4 in_fr5 = 0;
  undefined4 in_fr7 = 0;
  undefined4 in_fr9 = 0;
  undefined4 in_fr11 = 0;
  undefined4 in_fr13 = 0;
  undefined4 in_fr15 = 0;
  
  puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa4bc);
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa59c) <= (*(undefined4 *)(unsigned)(unsigned)0x8c4aa5a0)) {
    return 0;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa5a0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa5a0) + 1;
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa4bc = (unsigned)(ain0);
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa4bc)[8] = ain0;
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa4bc)[0xf] = in_fr15;
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa4bc)[0xe] = in_fr13;
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa4bc)[0xd] = in_fr11;
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa4bc)[0xc] = in_fr9;
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa4bc)[0xb] = in_fr7;
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa4bc)[10] = in_fr5;
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa4bc)[9] = in_fr3;
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa4bc)[8] = in_fr1;
  *(unsigned *)0x8c4aa4bc = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa4bc) + 0x18);
  if (ar4 != 0) {
    return 1;
  }
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa4bc = (unsigned)(ain0);
  puVar1[0x20] = ain0;
  puVar1[0x27] = in_fr15;
  puVar1[0x26] = in_fr13;
  puVar1[0x25] = in_fr11;
  puVar1[0x24] = in_fr9;
  puVar1[0x23] = in_fr7;
  puVar1[0x22] = in_fr5;
  puVar1[0x21] = in_fr3;
  puVar1[0x20] = in_fr1;
  return 1;
}

__asm__(".globl _FUN_8c256328\n.set _FUN_8c256328, _FUN_8c256328_def\n");
