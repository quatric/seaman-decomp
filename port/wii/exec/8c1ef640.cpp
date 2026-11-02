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
int FUN_8c1ef640_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1ef640");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar2 = (undefined1 *)(unsigned)(*(le<undefined4>* )(unsigned)0x8c4727b4 + 0x28);
  puVar3 = 0x8c4709a0;
  do {
    iVar4 = iVar4 + 1;
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3[2] = puVar2[2];
    puVar3[3] = puVar2[3];
    *(le<undefined4>* )(unsigned)(puVar3 + 8) = *(le<undefined4>* )(unsigned)(puVar2 + 0x10);
    puVar3[4] = puVar2[8];
    puVar3[5] = puVar2[9];
    puVar3[6] = puVar2[10];
    cVar1 = puVar2[0xb];
    puVar3[7] = cVar1;
    *(le<undefined4>* )(unsigned)(puVar3 + 0xc) = *(le<undefined4>* )(unsigned)(puVar2 + 0x14);
    puVar3 = puVar3 + 0x18;
    puVar2 = puVar2 + 0x2c;
  } while (iVar4 < 0x18);
  return (int)cVar1;
}

__asm__(".globl FUN_8c1ef640\n.set FUN_8c1ef640, FUN_8c1ef640_def\n");

}
