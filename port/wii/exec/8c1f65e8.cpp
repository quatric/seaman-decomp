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
uint FUN_8c1f65e8_def(int ar4,undefined4 ar5,int ar6,le<uint>* ar7)

{
  TRACE_ENTER("FUN_8c1f65e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  le<int>* piVar5;
  
  uVar2 = *ar7;
  iVar1 = (uint)(byte)(((undefined1 *)(unsigned)0x8c26c80c))[ar4] * 0xc;
  piVar5 = (le<int>* )(unsigned)(iVar1 + -0x73b8d2c0);
  if (((uVar2 & 4) == 0) || (uVar2 = (uint)*(byte *)(unsigned)(ar6 + 4), uVar2 != 8)) {
    uVar3 = 0xfffffffe;
  }
  else {
    iVar4 = *(le<int>* )(unsigned)(ar6 + 8);
    *(le<ushort>* )(unsigned)*piVar5 = (ushort)*(byte *)(unsigned)(iVar4 + 9) * 0x100 + (ushort)*(byte *)(unsigned)(iVar4 + 8);
    *(undefined1 *)(unsigned)(*piVar5 + 2) = *(undefined1 *)(unsigned)(iVar4 + 10);
    *(undefined1 *)(unsigned)(*piVar5 + 3) = *(undefined1 *)(unsigned)(iVar4 + 0xb);
    *(undefined1 *)(unsigned)(*piVar5 + 4) = *(undefined1 *)(unsigned)(iVar4 + 0xc);
    *(undefined1 *)(unsigned)(*piVar5 + 5) = *(undefined1 *)(unsigned)(iVar4 + 0xd);
    *(undefined1 *)(unsigned)(*piVar5 + 6) = *(undefined1 *)(unsigned)(iVar4 + 0xe);
    if ((*(char *)(unsigned)(*piVar5 + 2) == '\x02') && (0x1d < *(byte *)(unsigned)(*piVar5 + 3))) {
      *(undefined1 *)(unsigned)(*piVar5 + 3) = 0x1d;
    }
    uVar3 = 0;
    uVar2 = (uint)(char)(((undefined1 *)(unsigned)0x8c26c82c))[*(byte *)(unsigned)(iVar4 + 0xf) & 7];
    *(undefined *)(unsigned)(*piVar5 + 7) = (((undefined1 *)(unsigned)0x8c26c82c))[*(byte *)(unsigned)(iVar4 + 0xf) & 7];
  }
  if (*(le<int>* )(unsigned)(iVar1 + -0x73b8d2b8) != 0) {
                    
                    
    uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((iVar1 + -0x73b8d2b8))))(uVar3,*(le<undefined4>* )(unsigned)(iVar1 + -0x73b8d2bc),vr6,vr7));
    return uVar3;
  }
  return uVar2;
}

__asm__(".globl FUN_8c1f65e8\n.set FUN_8c1f65e8, FUN_8c1f65e8_def\n");

}
