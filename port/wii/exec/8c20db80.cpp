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
undefined4 FUN_8c20db80_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20db80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *a6;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20d400(ar6,ar6,ar6,ar7));
  if (ar6 != 1) {
    if (ar6 < 5) {
      puVar6 = (undefined1 *)(unsigned)0x10;
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a9c2(((undefined1 *)(fr0_ - 0x30)),*(le<int>* )(unsigned)(ar4 + 0x1c) + 0x800,0x10,ar7));
      if (ar6 == 2) {
        ((undefined1 *)(fr0_ - 0x30))[1] = *ar5;
      }
      else {
        puVar6 = ((undefined1 *)(fr0_ - 0x2a));
        puVar5 = ((undefined1 *)(fr0_ - 0x30)) + 2;
        do {
          uVar1 = *ar5;
          ar5 = ar5 + 1;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
        } while (puVar5 < puVar6);
      }
      iVar2 = *(le<int>* )(unsigned)(ar4 + 0x1c) + 0x800;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a9c2(((undefined1 *)(fr0_ - 0x30)),
                   *(le<int>* )(unsigned)(ar4 + 0x1c) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d55c) + (iVar2 + -1) * 4) + 0x7fa,0x10,
                   ar7));
      a6 = ((undefined1 *)(fr0_ - 0x20));
      puVar6 = ((undefined1 *)(fr0_ - 0x2a));
      puVar5 = ar5;
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
      } while (puVar6 < a6);
      iVar3 = *(le<int>* )(unsigned)(ar4 + 0x1c);
      iVar4 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d55c) + (iVar2 + -1) * 4);
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e(((undefined1 *)(fr0_ - 0x30)),puVar5,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e((fr0_ + (int)0xfffffff0),puVar5,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a8e0(iVar3 + iVar4 + 0x7fa,((undefined1 *)(fr0_ - 0x30)),0x10,ar7));
      iVar3 = iVar2 * 4;
      if (*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d530) + iVar3) != 0x10) {
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a8e0(*(le<int>* )(unsigned)(ar4 + 0x1c) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d55c) + (iVar2 + -1) * 4) + 0x80a,
                     ar5 + 10,*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d530) + iVar3) + -0x10,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a9c2(((undefined1 *)(fr0_ - 0x30)),*(le<int>* )(unsigned)(ar4 + 0x1c) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d55c) + iVar3) + 0x7fa,0x10,
                   ar7));
      puVar6 = ((undefined1 *)(fr0_ - 0x2a));
      ar5 = ar5 + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d530) + iVar3) + -6;
      puVar5 = ((undefined1 *)(fr0_ - 0x30));
      do {
        uVar1 = *ar5;
        ar5 = ar5 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      } while (puVar5 < puVar6);
      iVar2 = *(le<int>* )(unsigned)(ar4 + 0x1c) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d55c) + iVar3) + 0x7fa;
    }
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e(((undefined1 *)(fr0_ - 0x30)),ar5,puVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e((fr0_ + (int)0xfffffff0),ar5,puVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a8e0(iVar2,((undefined1 *)(fr0_ - 0x30)),0x10,ar7));
  }
  return 0;
}

__asm__(".globl FUN_8c20db80\n.set FUN_8c20db80, FUN_8c20db80_def\n");

}
