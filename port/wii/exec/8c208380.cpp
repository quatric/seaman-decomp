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
undefined4 FUN_8c208380_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c208380");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  le<int>* a7;
  undefined4 ain0;
  
  iVar1 = *ar4;
  (*(le<int>* )(fr0_ - 0x14)) = ar4[1];
  a7 = ((le<int>* )(fr0_ - 0x10));
  ((le<int>* )(fr0_ - 0x10))[0] = ar4[2];
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c50) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c54) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d50);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c58) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d54);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c5c) = *(le<undefined4>* )(unsigned)(iVar1 + 4);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c60) = *(le<undefined4>* )(unsigned)(iVar1 + 8);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c64) = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c68) = *(le<undefined4>* )(unsigned)(iVar1 + 0x18);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c6c) = *(le<undefined4>* )(unsigned)((*(le<int>* )(fr0_ - 0x14)) + 4);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c70) = *(le<undefined4>* )(unsigned)((*(le<int>* )(fr0_ - 0x14)) + 8);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c74) = *(le<undefined4>* )(unsigned)((*(le<int>* )(fr0_ - 0x14)) + 0xc);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c78) = *(le<undefined4>* )(unsigned)((*(le<int>* )(fr0_ - 0x14)) + 0x18);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c7c) = *(le<undefined4>* )(unsigned)(((le<int>* )(fr0_ - 0x10))[0] + 4);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c80) = *(le<undefined4>* )(unsigned)(((le<int>* )(fr0_ - 0x10))[0] + 8);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c84) = *(le<undefined4>* )(unsigned)(((le<int>* )(fr0_ - 0x10))[0] + 0xc);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c88) = *(le<undefined4>* )(unsigned)(((le<int>* )(fr0_ - 0x10))[0] + 0x18);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d48) = 0x3c;
  ain0 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d50);
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c20820a((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c),0x3c,&(*(le<int>* )(fr0_ - 0x14)),a7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c2081e0(ar4_00,0,0,a7); });
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d5c) = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
  return 0;
}

__asm__(".globl FUN_8c208380\n.set FUN_8c208380, FUN_8c208380_def\n");

}
