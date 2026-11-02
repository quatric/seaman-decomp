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
int FUN_8c25a4a6_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c25a4a6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  code *in_r2 = 0;
  uint uVar2;
  
  *ar4 = ar5;
  ar4[1] = ar5;
  uVar2 = 0;
  ar4[2] = 0;
  ar4[3] = 0;
  ar4[5] = 0;
  ar4[6] = 0;
  ar4[7] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  ar4[10] = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 0;
  ar4[0xd] = 0;
  ar4[4] = 0;
  *(undefined2 *)(unsigned)(ain0 + (int)ar4) = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)in_r2))((int)ar4 - *ar7,0,ar6,ar7));
  if ((0 < (*(undefined4 *)(unsigned)(unsigned)0x8c4aa5a4)) && (iVar1 == (*(undefined4 *)(unsigned)(unsigned)0x8c4aa5a4) + -1)) {
    while ((0 < (*(undefined4 *)(unsigned)(unsigned)0x8c4aa5a4) &&
           (iVar1 = *(int *)(unsigned)(((*(undefined4 *)(unsigned)(unsigned)0x8c4aa5a4) + -1) * 0x44 + (*(undefined4 *)(unsigned)(unsigned)0x8c277b08)), iVar1 == -1))) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa5a4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa5a4) + -1;
    }
  }
  for (; (uVar2 < (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c) && (iVar1 = *(int *)(unsigned)(uVar2 * 0x44 + *ar7), iVar1 != -1));
      uVar2 = uVar2 + 1) {
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c277cb0) = uVar2;
  return iVar1;
}

__asm__(".globl _FUN_8c25a4a6\n.set _FUN_8c25a4a6, _FUN_8c25a4a6_def\n");
