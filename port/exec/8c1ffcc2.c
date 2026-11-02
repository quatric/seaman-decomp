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
int FUN_8c1ffcc2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1ffcc2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)0x148;
  iVar4 = ar4 * iVar3 + 0x8c4783e0;
  if (*(char *)(unsigned)(iVar4 + 2) != '\0') {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd510(ar4,ar5,ar6,ar7));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fdd1a(ar4,ar5,ar6,ar7));
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd550(ar4,ar5,ar6,ar7));
      if ((iVar1 != 0) && (*(char *)(unsigned)(ar4 * iVar3 + 0x8c4783e0 + 8) != '\0')) {
        pcVar2 = ((char *)(unsigned long)*(unsigned *)(unsigned)(iVar4 + 0x20));
        iVar3 = 0;
        do {
          if (*pcVar2 != 'U') {
            *(undefined1 *)(unsigned)(iVar4 + 0xb) = 0;
            *(undefined1 *)(unsigned)(iVar4 + 0xc) = 0;
            goto LAB_8c1ffd38;
          }
          iVar3 = iVar3 + 1;
          pcVar2 = pcVar2 + 1;
        } while (iVar3 < 0x10);
        if (*(int *)(unsigned)(0x8c478e20 + ar4 * 4) == 0) {
          return 0;
        }
LAB_8c1ffd38:
        return (int)(int)0xffffff03;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ffcc2\n.set _FUN_8c1ffcc2, _FUN_8c1ffcc2_def\n");
