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
undefined4 FUN_8c20daa0_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20daa0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *ar6_00;
  undefined4 ar6_01;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c20d400(ar6,ar6,ar6,ar7));
  if (ar6 < 3) {
    ar6_00 = (undefined1 *)(unsigned)0x10;
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c20a9c2(((undefined1 *)(fr0_ - 0x24)),*(le<undefined4>* )(unsigned)(ar4 + 0x1c),0x10,ar7));
    puVar4 = ((undefined1 *)(fr0_ - 0x1c));
    if (ar6 == 1) {
      puVar3 = ((undefined1 *)(fr0_ - 0x1e));
      do {
        uVar1 = *ar5;
        ar5 = ar5 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      } while (puVar3 < puVar4);
    }
    else {
      ar6_00 = ((undefined1 *)(fr0_ - 0x14));
      do {
        uVar1 = *ar5;
        ar5 = ar5 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      } while (puVar4 < ar6_00);
    }
    iVar2 = *(le<int>* )(unsigned)(ar4 + 0x1c);
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c20732e(((undefined1 *)(fr0_ - 0x24)),ar5,ar6_00,ar7); });
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c20732e((fr0_ + (int)0xfffffffc),ar5,ar6_00,ar7); });
    ar6_01 = 0x10;
    ar5 = ((undefined1 *)(fr0_ - 0x24));
  }
  else {
    ar6_01 = *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d4ac) + iVar2 * 4);
    iVar2 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d480) + iVar2 * 4) + *(le<int>* )(unsigned)(ar4 + 0x1c);
  }
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c20a8e0(iVar2,ar5,ar6_01,ar7));
  return 0;
}

__asm__(".globl FUN_8c20daa0\n.set FUN_8c20daa0, FUN_8c20daa0_def\n");

}
