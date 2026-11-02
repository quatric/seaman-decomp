#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1f5048_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f5048");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int a5;
  undefined4 uVar2;
  undefined1 *a6;
  
  iVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 4;
  a6 = (undefined1 *)(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x28 + ar4 * 0x2c);
  a5 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x44c + ar4 * 0x78;
  uVar2 = *(le<undefined4>* )(unsigned)
           ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfe8 + (1 - *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10b4)) * 0x60 + ar4 * 4);
  a6[1] = *a6;
  a6[5] = a6[4];
  if (*(le<int>* )(unsigned)(a6 + 0x1c) != 0) {
    *(le<undefined4>* )(unsigned)(a6 + 0x20) = *(le<undefined4>* )(unsigned)(a6 + 0x1c);
    *(le<undefined4>* )(unsigned)(a6 + 0x1c) = 0;
  }
  if (((int)(char)(((undefined1 *)(unsigned)0x8c26c710))[ar4] & 0x1fU) == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f51ec(ar5,a5,a6,uVar2));
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5290((int)(char)(((undefined1 *)(unsigned)0x8c26c710))[ar4] & 0x1fU,ar5 * 8 + iVar1,a5,a6));
  }
  if (a6[7] != '\0') {
    *(le<undefined4>* )(unsigned)(a6 + 0x10) =
         *(le<undefined4>* )(unsigned)
          (ar4 * 4 + (1 - *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10b4)) * 0x60 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfe8);
  }
  if (a6[0xd] != '\0') {
    a6[0xc] = 0;
    a6[0xd] = 0;
  }
  a6[0xc] = a6[0xc] | a6[2];
  a6[0xc] = a6[0xc] | a6[3];
  return uVar2;
}

__asm__(".globl FUN_8c1f5048\n.set FUN_8c1f5048, FUN_8c1f5048_def\n");

}
