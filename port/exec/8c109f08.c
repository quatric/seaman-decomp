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
int FUN_8c109f08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c109f08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  
  (*(undefined4 *)(fr0_ - 0x20)) = ar5;
  (*(undefined4 *)(fr0_ - 0x14)) = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c109dc4(ar4,((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c109e40(ar4,((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
    iVar1 = 1;
    *(undefined4 *)(unsigned)0x8c27d430 = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c109f08\n.set _FUN_8c109f08, _FUN_8c109f08_def\n");
