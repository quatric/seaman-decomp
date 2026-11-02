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
int FUN_8c2630cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2630cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *ar4_00;
  
  iVar3 = (int)0x9c;
  pcVar2 = 0x8c4b9348 + 0x4e0;
  ar4_00 = 0x8c4b9348;
  do {
    iVar1 = (int)*ar4_00;
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26307e(ar4_00,ar5,ar6,ar7));
    }
    ar4_00 = ar4_00 + iVar3;
  } while (ar4_00 < pcVar2);
  return iVar1;
}

__asm__(".globl _FUN_8c2630cc\n.set _FUN_8c2630cc, _FUN_8c2630cc_def\n");
