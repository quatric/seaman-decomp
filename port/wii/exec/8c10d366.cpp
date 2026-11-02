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
int FUN_8c10d366_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c10d366");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  le<undefined4>* puVar5;
  int iVar6;
  
  iVar2 = (int)0x114;
  *ar5 = *(le<undefined4>* )(unsigned)(iVar2 + ar4);
  iVar3 = (int)0x90;
  ar5[1] = *(le<undefined4>* )(unsigned)(iVar2 + 4 + ar4);
  puVar5 = ar5 + 2;
  iVar2 = 0;
  if (*(le<short>* )(unsigned)(iVar3 + ar4) != 0) {
    do {
      iVar6 = iVar2 * 0xc;
      iVar3 = 0;
      if (*(le<short>* )(unsigned)(*(le<int>* )(unsigned)(0x84 + ar4) + iVar6 + 4) != 0) {
        do {
          iVar4 = (int)0x84;
          *(undefined1 *)(unsigned)puVar5 = *(undefined1 *)(unsigned)(*(le<int>* )(unsigned)(0xc0 + ar4 + iVar2 * 4) + iVar3);
          puVar1 = (undefined1 *)(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar4 + ar4) + iVar6 + 8) + iVar3);
          iVar3 = iVar3 + 1;
          iVar4 = (int)0x84;
          *(undefined1 *)(unsigned)((int)puVar5 + 1) = *puVar1;
          puVar5 = (le<undefined4>* )(unsigned)((int)puVar5 + 2);
        } while (iVar3 < (int)(uint)*(le<ushort>* )(unsigned)(*(le<int>* )(unsigned)(iVar4 + ar4) + iVar6 + 4));
      }
      iVar3 = (int)0x90;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(le<ushort>* )(unsigned)(iVar3 + ar4));
  }
  return iVar3;
}

__asm__(".globl FUN_8c10d366\n.set FUN_8c10d366, FUN_8c10d366_def\n");

}
