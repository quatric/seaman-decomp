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
undefined * FUN_8c21982e_def(le<short>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21982e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined * ain0 = (undefined *)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  uint ar5_00;
  le<short>* psVar3;
  undefined *puVar4;
  int iVar5;
  uint ar5_01;
  uint uVar6;
  
  ar5_00 = ar5;
  while( true ) {
    uVar6 = (uint)*ar4;
    if (uVar6 == 0xff) break;
    uVar1 = ar4[1];
    iVar5 = (int)ar4[3];
    psVar3 = ar4 + 4;
    if ((uVar6 & 0x8000) == 0) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0fa0) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0fa4) = 0;
    }
    ar5_01 = uVar6 & 0xffff7fff;
    puVar4 = (undefined *)(unsigned)(uVar6 & 0xff);
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab1b4) = ar4[2] * 0x20 + ar5;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab1b8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab1b4) & 0x3ffffff | 0xe0000000;
    (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab1b4) >> 0x18 & 0x1c;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa518) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa518) + iVar5;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab1ac) = iVar5;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab1b0) = psVar3;
    (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff00003c) = (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038);
    if (puVar4 == (undefined *)(unsigned)0x2c) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c232cd0(((undefined1 *)(unsigned)0x8c4ab198),ar5_01,ar6,ar7));
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)((&(*(le<undefined4>* )(unsigned)(unsigned)0x8c2759f0))[(int)(puVar4 + -0x20) * 2])))
                        (((undefined1 *)(unsigned)0x8c4ab198),ar5_00,ar6,ar7));
      ar5_01 = ar5_00;
    }
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa2f0) = *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c2759f4) + (int)(puVar4 + -0x20) * 8);
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0fa0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0fa0) + iVar2;
    ain0 = ((undefined1 *)(unsigned)0x8c2759f4);
    if (((uVar6 & 0x7f00) == 0x200) || (ain0 = puVar4, puVar4 != (undefined *)(unsigned)0x2c)) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0fa4) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0fa4) + iVar5;
    }
    ar4 = psVar3 + (uint)uVar1 * 2 + -2;
    ar5_00 = ar5_01;
  }
  return ain0;
}

__asm__(".globl FUN_8c21982e\n.set FUN_8c21982e, FUN_8c21982e_def\n");

}
