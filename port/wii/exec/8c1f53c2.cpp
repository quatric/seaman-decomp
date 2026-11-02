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
undefined4 FUN_8c1f53c2_def(le<uint>* ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f53c2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  le<uint>* puVar5;
  
  puVar3 = (undefined1 *)(unsigned)(ar6 + 8);
  *ar4 = (uint)*(byte *)(unsigned)(ar6 + 5) << 0x10 | (uint)*(byte *)(unsigned)(ar6 + 6) << 8 |
         (uint)*(byte *)(unsigned)(ar6 + 4) << 0x18 | (uint)*(byte *)(unsigned)(ar6 + 7);
  for (puVar5 = ar4 + 1; puVar5 < ar4 + 2; puVar5 = (le<uint>* )(unsigned)((int)puVar5 + 1)) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)(unsigned)puVar5 = uVar1;
  }
  for (puVar5 = ar4 + 2; puVar5 < ar4 + 3; puVar5 = (le<uint>* )(unsigned)((int)puVar5 + 1)) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)(unsigned)puVar5 = uVar1;
  }
  for (puVar5 = ar4 + 3; puVar5 < ar4 + 4; puVar5 = (le<uint>* )(unsigned)((int)puVar5 + 1)) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)(unsigned)puVar5 = uVar1;
  }
  pbVar4 = puVar3 + 1;
  *(undefined1 *)(unsigned)((int)ar4 + 0x11) = *puVar3;
  if ((char)ar4[4] == '\0') {
    *(undefined *)(unsigned)((int)ar4 + 0x12) = (((undefined1 *)(unsigned)0x8c273a00))[*pbVar4 & 0xf];
    *(undefined1 *)(unsigned)((int)ar4 + 0x13) = 0;
  }
  else {
    *(byte *)(unsigned)((int)ar4 + 0x12) = *pbVar4 & 3;
    *(byte *)(unsigned)((int)ar4 + 0x13) = *pbVar4 >> 2 & 3;
  }
  if (*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10c4) == 1) {
    for (puVar5 = ar4 + 5; puVar5 < (le<uint>* )(unsigned)((int)ar4 + 0x33); puVar5 = (le<uint>* )(unsigned)((int)puVar5 + 1)) {
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      *(byte *)(unsigned)puVar5 = bVar2;
    }
  }
  else {
    for (puVar5 = ar4 + 5; pbVar4 = pbVar4 + 1, puVar5 < (le<uint>* )(unsigned)((int)ar4 + 0x32);
        puVar5 = (le<uint>* )(unsigned)((int)puVar5 + 1)) {
      *(byte *)(unsigned)puVar5 = *pbVar4;
    }
    *(undefined1 *)(unsigned)((int)ar4 + 0x32) = 0;
  }
  *(undefined1 *)(unsigned)((int)ar4 + 0x33) = 0;
  for (puVar5 = ar4 + 0xd; puVar5 < ar4 + 0x1c; puVar5 = (le<uint>* )(unsigned)((int)puVar5 + 1)) {
    bVar2 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    *(byte *)(unsigned)puVar5 = bVar2;
  }
  *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0;
  *(le<undefined2>* )(unsigned)(ar4 + 0x1d) = *(le<undefined2>* )(unsigned)pbVar4;
  *(le<undefined2>* )(unsigned)((int)ar4 + 0x76) = *(le<undefined2>* )(unsigned)(pbVar4 + 2);
  return 0;
}

__asm__(".globl FUN_8c1f53c2\n.set FUN_8c1f53c2, FUN_8c1f53c2_def\n");

}
