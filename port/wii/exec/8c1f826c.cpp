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
uint FUN_8c1f826c_def(le<ushort>* ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f826c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c010794(0x30,((le<int>* )(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c26c964),vr7));
  uVar3 = *ar4 - 0x79c;
  iVar2 = (uVar3 >> 2) + (*ar4 - 0x79e) * 0x16d;
  if (((uVar3 & 3) == 0) && ((byte)ar4[1] < 3)) {
    iVar2 = iVar2 + -1;
  }
  uVar1 = ar4[3];
  *ar5 = (((iVar2 + ((le<int>* )(fr0_ - 0x34))[(byte)ar4[1] - 1] + (*(byte *)(unsigned)((int)ar4 + 3) - 1)) * 0x18 +
          (uint)(byte)ar4[2]) * 0x3c + (uint)*(byte *)(unsigned)((int)ar4 + 5)) * 0x3c + (uint)(byte)uVar1;
  return (uint)(byte)uVar1;
}

__asm__(".globl FUN_8c1f826c\n.set FUN_8c1f826c, FUN_8c1f826c_def\n");

}
