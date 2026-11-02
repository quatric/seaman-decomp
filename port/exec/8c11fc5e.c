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
undefined4 FUN_8c11fc5e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11fc5e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  char cVar2;
  
  if (ar5 == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x28))))(ar4,ar6,ar6,ar7));
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
  }
  else {
    cVar2 = '\0';
    if (*(char *)(unsigned)(ar5 + 9) != '\0') {
      do {
        if (*(int *)(unsigned)(cVar2 * 4 + *(int *)(unsigned)(ar5 + 0x10)) == 0) {
          *(undefined4 *)(unsigned)(cVar2 * 4 + *(int *)(unsigned)(ar5 + 0x10)) = ar6;
          return 0;
        }
        cVar2 = cVar2 + '\x01';
      } while ((int)cVar2 < (int)(uint)*(byte *)(unsigned)(ar5 + 9));
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11fc5e\n.set _FUN_8c11fc5e, _FUN_8c11fc5e_def\n");
