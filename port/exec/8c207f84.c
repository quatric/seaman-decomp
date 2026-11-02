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
undefined4 FUN_8c207f84_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c207f84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  uint ar5_00;
  uint in_r3 = 0;
  int ar4_00;
  
  puVar1 = ((void *)(unsigned)0x8c20a844);
  (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844(0x44,*(undefined4 *)(unsigned)0x8c4a9e74 & in_r3,ar6,ar7));
  ar4_00 = (int)0xe8;
  ar5_00 = *(undefined4 *)(unsigned)0x8c4a9eb0 | 8;
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(ar4_00,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c21214e(ar4_00,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c205a40(ar4_00,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x44,*(undefined4 *)(unsigned)0x8c4a9e74 & 0xfffffffe,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((int)0xe8,*(undefined4 *)(unsigned)0x8c4a9eb0 | 8,ar6,ar7));
  do {
  } while (*(undefined4 *)(unsigned)0x8c4a9f1c == *(undefined4 *)(unsigned)0x8c4a9f1c);
  *(undefined4 *)(unsigned)0x8c4a9e54 = 1;
  return 0;
}

__asm__(".globl _FUN_8c207f84\n.set _FUN_8c207f84, _FUN_8c207f84_def\n");
