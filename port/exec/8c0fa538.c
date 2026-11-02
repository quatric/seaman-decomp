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
int FUN_8c0fa538_def(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fa538";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int ain0;
  
  iVar2 = 0;
  for (ain0 = 8; ain0 < 0x26; ain0 = ain0 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013bdc(ar4 + ain0 * 4 + 0x10,ar5,ar6,ar7));
    if (99 < iVar1) {
      ar5 = ((undefined1 *)(unsigned)0x8c140bcb);
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + ain0 * 4 + 0x10,((undefined1 *)(unsigned)0x8c140bcb),ar6,ar7); });
    }
    if (2 < iVar1) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0fa538\n.set _FUN_8c0fa538, _FUN_8c0fa538_def\n");
