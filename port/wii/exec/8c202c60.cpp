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
undefined4 sh4_dmac_202c60_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("sh4_dmac_202c60");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  ((le<uint>* )(fr0_ - 0x1c))[0] = *(le<uint>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c26d268));
  ((le<uint>* )(fr0_ - 0x1c))[1] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c26d268)) + 4);
  ((le<uint>* )(fr0_ - 0x1c))[2] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c26d268)) + 8);
  ((le<uint>* )(fr0_ - 0x1c))[3] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c26d268)) + 0xc);
  (*(le<undefined4>* )(fr0_ - 0xc)) = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c26d268)) + 0x10);
  (*(le<undefined4>* )(fr0_ - 0x8)) = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c26d268)) + 0x14);
  sVar1 = 0x280;
  if ((*(le<undefined4>* )(unsigned)0x8c4a9bc8 != 1) && ((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 0x10) == 0)) {
    sVar1 = 0x140;
  }
  if (ar5 == 1) {
    uVar3 = ar6 + 0x1fU & 0xffffffe0;
    *(le<undefined4>* )(unsigned)0x8c4a9e74 = *(le<undefined4>* )(unsigned)0x8c4a9e74 & 0xffa0ffff | 0x400000 | (ar6 + 0x1fU >> 5 & 0x1f) << 0x10;
  }
  else if (*(le<undefined4>* )(unsigned)0x8c4a9bc8 == 1) {
    uVar3 = (uint)0x1e0;
  }
  else if (((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 1) == 1) || ((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 0x2c) != 0x20)) {
    if ((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 0x20) == 0) {
      if ((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 0x62) == 0x42) {
        iVar4 = *(le<int>* )(unsigned)(0x8c4aa084 + *(le<undefined4>* )(unsigned)0x8c4a9bdc * 4);
        uVar3 = (int)(iVar4 + (uint)(iVar4 < 0)) >> 1;
      }
      else {
        uVar3 = (uint)0xf0;
      }
    }
    else if ((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 0x42) == 0x42) {
      uVar3 = *(le<uint>* )(unsigned)(0x8c4aa084 + *(le<undefined4>* )(unsigned)0x8c4a9bdc * 4);
    }
    else {
      uVar3 = (uint)0x1e0;
    }
  }
  else {
    uVar3 = (uint)0xf0;
  }
  iVar4 = 0x8c4aa1a0;
  iVar2 = (int)0xff;
  *(le<int>* )(unsigned)(0x8c4aa1a0 + 0x48) = (int)sVar1;
  *(le<uint>* )(unsigned)(iVar4 + 0x4c) = uVar3;
  if (ar4 == iVar2) {
    ar4 = *(le<undefined4>* )(unsigned)0x8c4a9bd0;
  }
  *(le<uint>* )(unsigned)(iVar4 + 0x50) = ((le<uint>* )(fr0_ - 0x1c))[ar4] >> 3;
  *(le<int>* )(unsigned)(iVar4 + 0x60) = *(le<int>* )(unsigned)(iVar4 + 0x48) * *(le<int>* )(unsigned)(iVar4 + 0x4c) * *(le<int>* )(unsigned)(iVar4 + 0x50);
  return 0x60;
}

__asm__(".globl sh4_dmac_202c60\n.set sh4_dmac_202c60, sh4_dmac_202c60_def\n");

}
