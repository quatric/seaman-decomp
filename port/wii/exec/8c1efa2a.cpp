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
undefined4 FUN_8c1efa2a_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1efa2a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  le<uint>* puVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  
  iVar3 = 0x8c470ed8;
  iVar2 = 0x8c470edc;
  bVar1 = *(byte *)(unsigned)((int)0xfb0 + *(le<undefined4>* )(unsigned)0x8c4727b4);
  uVar8 = 0;
  do {
    if (3 < (int)uVar8) {
      return 0;
    }
    if ((int)uVar8 < 0) {
      uVar6 = 1 >> (~uVar8 & 0x1f) + 1;
    }
    else {
      uVar6 = 1 << (uVar8 & 0x1f);
    }
    if ((uVar6 & bVar1) != 0) {
      pbVar7 = (&(*(undefined1 *)(unsigned)0x8c26bfac)) + uVar8;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efd14((uint)*pbVar7,ar5,ar6,ar7));
      puVar5 = (le<uint>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efd26((uint)*pbVar7,ar5,ar6,ar7));
      *(undefined1 *)(unsigned)(uVar8 + iVar3) = *(undefined1 *)(unsigned)(uVar8 + iVar2);
      if ((((*puVar5 & 0x80) != 0) && (*(char *)(unsigned)(iVar4 + 2) == '\0')) &&
         (*(char *)(unsigned)(iVar4 + 4) == '\b')) {
        uVar6 = (int)*(char *)(unsigned)(*(le<int>* )(unsigned)(iVar4 + 8) + 8) & 4;
        *(char *)(unsigned)(uVar8 + iVar2) = (char)uVar6;
        ar5 = (int)*(char *)(unsigned)(uVar8 + iVar3) ^ uVar6;
        if ((uVar6 == 0) && (ar5 = ar5 & 0xff, ar5 != 0)) {
          return uVar8 + 1;
        }
      }
    }
    uVar8 = uVar8 + 1;
  } while( true );
}

__asm__(".globl FUN_8c1efa2a\n.set FUN_8c1efa2a, FUN_8c1efa2a_def\n");

}
