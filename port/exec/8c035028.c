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
int FUN_8c035028_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c035028";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(unsigned)(ar4 + 0x24);
  for (iVar3 = 0; iVar1 = (int)*(short *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1c) + 2), iVar3 < iVar1;
      iVar3 = iVar3 + 1) {
    if ((((*(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 0xc) == -1) ||
         ('\x04' < *(char *)(unsigned)(*(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 0xc) + ar4
                            + 0xc))) &&
        (*(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 8) <= ar5)) &&
       ((*(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 0xe) <= iVar2 &&
        (*(char *)(unsigned)(ar4 + iVar3 + 0xc) == '\x01')))) {
      *(undefined4 *)(unsigned)(ar4 + 0x24) = 0;
      *(undefined1 *)(unsigned)(ar4 + iVar3 + 0xc) = 2;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c035028\n.set _FUN_8c035028, _FUN_8c035028_def\n");
