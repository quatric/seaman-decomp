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
undefined4 FUN_8c1f5ac6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f5ac6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 28)), FUN_8c1f5a5e(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  puVar1 = ((void *)(unsigned)0x8c013ec0);
  iVar4 = 0;
  while( true ) {
    if (*piVar2 <= iVar4) {
      return 0xfffffffe;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,piVar2[iVar4 * 2 + 2] + 0x10,0x10,ar7));
    if (iVar3 == 0) break;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}

__asm__(".globl _FUN_8c1f5ac6\n.set _FUN_8c1f5ac6, _FUN_8c1f5ac6_def\n");
