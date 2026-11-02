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
undefined4 FUN_8c206300_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c206300");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<undefined4>* puVar2;
  le<undefined4>* puVar3;
  le<undefined4>* puVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20aa40(((void *)(unsigned)0x8c206ff0),ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)0x8c4a9d98 = 0;
  *(le<undefined4>* )(unsigned)0x8c4a9e5c = 0;
  *(le<undefined4>* )(unsigned)0x8c4a9f24 = 0;
  *(le<undefined4>* )(unsigned)0x8c4a9f28 = 0;
  puVar4 = 0x8c4aa0b0;
  puVar3 = 0x8c4aa104;
  puVar2 = 0x8c4aa0b4;
  uVar6 = 0;
  *(le<undefined4>* )(unsigned)0x8c4aa0b4 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *puVar3 = 0;
  *puVar4 = 0;
  do {
    iVar1 = uVar6 + 0x2c;
    uVar6 = uVar6 + 4;
    *(le<undefined4>* )(unsigned)((int)puVar2 + iVar1) = 0;
  } while (uVar6 < 0x14);
  return uVar5;
}

__asm__(".globl FUN_8c206300\n.set FUN_8c206300, FUN_8c206300_def\n");

}
