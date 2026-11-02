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
uint FUN_8c0b9bb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b9bb0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0b9d14(ar4,((undefined1 *)(fr0_ - 0x1c)),ar6,ar7));
  *(le<undefined2>* )(unsigned)(ar4 + 0x20) = *(le<undefined2>* )(unsigned)(ar4 + 0x16);
  *(le<undefined2>* )(unsigned)(ar4 + 0x22) = *(le<undefined2>* )(unsigned)(ar4 + 0x18);
  *(le<undefined2>* )(unsigned)(ar4 + 0x24) = *(le<undefined2>* )(unsigned)(ar4 + 0x1a);
  *(le<undefined2>* )(unsigned)(ar4 + 0x26) = *(le<undefined2>* )(unsigned)(ar4 + 0x1c);
  *(le<undefined2>* )(unsigned)(ar4 + 0x28) = *(le<undefined2>* )(unsigned)(ar4 + 0x1e);
  *(le<undefined2>* )(unsigned)(ar4 + 0x16) = *(le<undefined2>* )(unsigned)(ar4 + 0xc);
  *(le<undefined2>* )(unsigned)(ar4 + 0x18) = *(le<undefined2>* )(unsigned)(ar4 + 0xe);
  *(le<undefined2>* )(unsigned)(ar4 + 0x1a) = *(le<undefined2>* )(unsigned)(ar4 + 0x10);
  *(le<undefined2>* )(unsigned)(ar4 + 0x1c) = *(le<undefined2>* )(unsigned)(ar4 + 0x12);
  *(le<undefined2>* )(unsigned)(ar4 + 0x1e) = *(le<undefined2>* )(unsigned)(ar4 + 0x14);
  iVar3 = ar4 + 0xc;
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0b9d14(ar4,iVar3,ar6,ar7));
  uVar1 = ({ unsigned long t0_ = (unsigned long)(*(le<undefined4>* )(unsigned)(ar4 + 0xc)); unsigned long t1_ = (unsigned long)(*(le<undefined4>* )(unsigned)(ar4 + 0x10)); *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 28)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b9afc))))
                    (ar4,iVar3,ar6,ar7); });
  *(le<undefined4>* )(unsigned)(0xbc + ar4) = uVar1;
  iVar3 = ar4 + *(le<int>* )(unsigned)(0xbc + ar4);
  *(char *)(unsigned)(iVar3 + 4) = *(char *)(unsigned)(iVar3 + 4) + '\x01';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0b9d30(ar4,((undefined1 *)(fr0_ - 0x1c)),0x8c431a68 + 0x14,ar7));
  *(le<undefined4>* )(unsigned)(0xc8 + ar4) = uVar1;
  iVar3 = 0;
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    iVar3 = (uint)*(byte *)(unsigned)(ar4 + iVar4 + 4) + iVar3;
  }
  if (((*(le<short>* )(unsigned)(ar4 + 0xc) == *(le<short>* )(unsigned)(ar4 + 0x16)) &&
      (*(char *)(unsigned)(ar4 + 0xe) == *(char *)(unsigned)(ar4 + 0x18))) &&
     (*(char *)(unsigned)(ar4 + 0xf) == *(char *)(unsigned)(ar4 + 0x19))) {
    *(char *)(unsigned)(ar4 + 0x2c) = *(char *)(unsigned)(ar4 + 0x2c) + '\x01';
  }
  else {
    *(undefined1 *)(unsigned)(ar4 + 0x2c) = 1;
  }
  uVar2 = *(le<uint>* )(unsigned)(0xc8 + ar4);
  if (((uVar2 == 0) && (uVar2 = (uint)*(byte *)(unsigned)(ar4 + 0x2c), uVar2 == 1)) && (uVar2 = 1, iVar3 != 1)
     ) {
    uVar2 = 0x2c;
    *(undefined1 *)(unsigned)(ar4 + 0x2c) = 2;
  }
  return uVar2;
}

__asm__(".globl FUN_8c0b9bb0\n.set FUN_8c0b9bb0, FUN_8c0b9bb0_def\n");

}
