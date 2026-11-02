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
int FUN_8c1ffc0a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1ffc0a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 312; for (int i_ = 0; i_ < 312; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  if (*(char *)(unsigned)(0x8c4783e2 + ar4 * 0x148) != '\0') {
    iVar2 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 312)), FUN_8c1fd510(ar4,ar5,ar6,ar7));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 312)), FUN_8c1fdd1a(ar4,iVar2,ar6,ar7));
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 312)), FUN_8c1fd550(ar4,iVar2,ar6,ar7));
      if ((iVar1 != 0) && (*(char *)(unsigned)(0x8c4783e8 + ar4 * 0x148) != '\0')) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 312)), thunk_FUN_8c1ffcc2(ar4,iVar2,ar6,ar7));
        if (iVar2 < 0) {
          return (int)(int)0xffffff03;
        }
        iVar2 = (vsp = ((unsigned long)(fr0_ - 312)), FUN_8c2005d6(ar4,((undefined1 *)(fr0_ - 0x38)),ar6,ar7));
        if (iVar2 < 0) {
          return (int)(int)0xffffff05;
        }
        for (iVar2 = 0; iVar2 < 0xc; iVar2 = iVar2 + 1) {
          *(undefined1 *)(unsigned)(iVar2 + ar5) = ((undefined1 *)(fr0_ - 0x28))[iVar2];
        }
        *(undefined1 *)(unsigned)(ar5 + 0xc) = 0;
        return 0;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ffc0a\n.set _FUN_8c1ffc0a, _FUN_8c1ffc0a_def\n");
