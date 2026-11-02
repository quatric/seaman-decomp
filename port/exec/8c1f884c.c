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
undefined4 FUN_8c1f884c_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f884c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 ar6_00;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f881c(ar4,((undefined1 *)(fr0_ - 0x48)),ar6,ar7));
  if (iVar2 == 0) {
    ar6_00 = 0x3c;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c013ec0(((undefined1 *)(fr0_ - 0x48)),ar5,0x3c,ar7));
    if (iVar2 == 0) {
      return 3;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f0f60(ar4,ar5,ar6_00,ar7));
    puVar1 = ((void *)(unsigned)0x8c1f0fa0);
    if (iVar2 == 0) {
      do {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,ar5,ar6_00,ar7));
        ar4 = (uint)(iVar2 == 2);
      } while (iVar2 == 2);
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f884c\n.set _FUN_8c1f884c, _FUN_8c1f884c_def\n");
