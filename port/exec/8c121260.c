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
int FUN_8c121260_def(byte *ar4,int ar5,uint ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c121260";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = ar7 + 1U >> 1;
  iVar3 = 0;
  if (ar5 == 0) {
    uVar1 = 0;
    if (ar6 != 0) {
      do {
        uVar1 = uVar1 + 1;
        iVar3 = iVar3 + *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1293e4)) + ((uint)*ar4 & (int)0xf0) * 4);
        ar4 = ar4 + uVar2;
      } while (uVar1 < ar6);
    }
  }
  else {
    uVar1 = 0;
    if (ar6 != 0) {
      do {
        uVar1 = uVar1 + 1;
        iVar3 = iVar3 + *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1293e4)) + ((uint)*ar4 << 4 & (int)0xf0) * 4);
        ar4 = ar4 + uVar2;
      } while (uVar1 < ar6);
    }
  }
  return iVar3;
}

__asm__(".globl _FUN_8c121260\n.set _FUN_8c121260, _FUN_8c121260_def\n");
