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
undefined4 FUN_8c11fbe4_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c11fbe4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  char cVar2;
  
  *(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x34) + ar7 * 4) = ar5;
  if (ar5 == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x24))))(ar4,ar6,ar7,ar7));
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
  }
  else {
    cVar2 = '\0';
    if (*(char *)(unsigned)(ar5 + 8) != '\0') {
      do {
        if (*(int *)(unsigned)(cVar2 * 8 + *(int *)(unsigned)(ar5 + 0xc)) == 0) {
          *(int *)(unsigned)(*(int *)(unsigned)(ar5 + 0xc) + cVar2 * 8) = ar6;
          *(int *)(unsigned)(cVar2 * 8 + *(int *)(unsigned)(ar5 + 0xc) + 4) = ar7;
          return 0;
        }
        cVar2 = cVar2 + '\x01';
      } while ((int)cVar2 < (int)(uint)*(byte *)(unsigned)(ar5 + 8));
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11fbe4\n.set _FUN_8c11fbe4, _FUN_8c11fbe4_def\n");
