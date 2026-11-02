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
undefined4 FUN_8c20d82e_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20d82e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20d400(ar6,ar6,ar6,ar7));
  if (ar6 < 5) {
    puVar7 = (undefined1 *)(unsigned)0x10;
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a9c2(((undefined1 *)(fr0_ - 0x30)),*(le<undefined4>* )(unsigned)(ar4 + 0x1c),0x10,ar7));
    if (ar6 == 1) {
      ((undefined1 *)(fr0_ - 0x30))[1] = *ar5;
    }
    else {
      puVar6 = ((undefined1 *)(fr0_ - 0x30)) + 4;
      if (ar6 == 2) {
        puVar5 = ((undefined1 *)(fr0_ - 0x30)) + 2;
        do {
          uVar1 = *ar5;
          ar5 = ar5 + 1;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
        } while (puVar5 < puVar6);
      }
      else {
        puVar7 = ((undefined1 *)(fr0_ - 0x24));
        do {
          uVar1 = *ar5;
          ar5 = ar5 + 1;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
        } while (puVar6 < puVar7);
      }
    }
    iVar2 = *(le<int>* )(unsigned)(ar4 + 0x1c);
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e(((undefined1 *)(fr0_ - 0x30)),ar5,puVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e((fr0_ + (int)0xfffffff0),ar5,puVar7,ar7));
  }
  else {
    iVar8 = iVar2 * 4;
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a9c2(((undefined1 *)(fr0_ - 0x30)),*(le<int>* )(unsigned)(ar4 + 0x1c) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d5e0) + iVar8) + -0xc,0x10,ar7));
    puVar5 = ((undefined1 *)(fr0_ - 0x20));
    puVar6 = ((undefined1 *)(fr0_ - 0x24));
    puVar7 = ar5;
    do {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
    } while (puVar6 < puVar5);
    iVar3 = *(le<int>* )(unsigned)(ar4 + 0x1c);
    iVar4 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d5e0) + iVar8);
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e(((undefined1 *)(fr0_ - 0x30)),puVar5,puVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e((fr0_ + (int)0xfffffff0),puVar5,puVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a8e0(iVar3 + iVar4 + -0xc,((undefined1 *)(fr0_ - 0x30)),0x10,ar7));
    if (*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d60c) + iVar8) != 0x10) {
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a8e0(*(le<int>* )(unsigned)(ar4 + 0x1c) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d5e0) + iVar8) + 4,ar5 + 4,
                   *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d60c) + iVar8) + -0x10,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a9c2(((undefined1 *)(fr0_ - 0x30)),*(le<int>* )(unsigned)(ar4 + 0x1c) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d5e0) + (iVar2 + 1) * 4) + -0xc,
                 0x10,ar7));
    puVar5 = ((undefined1 *)(fr0_ - 0x24));
    puVar6 = ar5 + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d60c) + iVar8) + -0xc;
    puVar7 = ((undefined1 *)(fr0_ - 0x30));
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar7 = uVar1;
      puVar7 = puVar7 + 1;
    } while (puVar7 < puVar5);
    iVar2 = *(le<int>* )(unsigned)(ar4 + 0x1c) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d5e0) + (iVar2 + 1) * 4) + -0xc;
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e(((undefined1 *)(fr0_ - 0x30)),puVar6,puVar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e((fr0_ + (int)0xfffffff0),puVar6,puVar5,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a8e0(iVar2,((undefined1 *)(fr0_ - 0x30)),0x10,ar7));
  return 0;
}

__asm__(".globl FUN_8c20d82e\n.set FUN_8c20d82e, FUN_8c20d82e_def\n");

}
