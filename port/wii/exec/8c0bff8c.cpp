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
le<int>*  FUN_8c0bff8c_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bff8c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  le<undefined4>* puVar3;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba8e4(ar4 + 3,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c5340((int)ar4 + 0x17c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf338((int)ar4 + 0x2d578,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba2cc((int)ar4 + 0x2d59c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016410((int)ar4 + 0x2ddc4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ffb98((int)ar4 + 0x2de08,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fed18((int)ar4 + 0x2e3a8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224((int)ar4 + 0x2e64c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf478((int)ar4 + 0x2e710,ar5,ar6,ar7));
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13bee8));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2dd88);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bee8)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bee8));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13bef4));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2dd94);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bef4)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bef4));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13bf00));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2dda0);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bf00)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bf00));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13bf0c));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2ddac);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bf0c)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bf0c));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13bf18));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2ddb8);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bf18)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bf18));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  *ar4 = (int)(ar4 + 3);
  ar4[1] = (int)ar4 + 0x17c;
  ar4[2] = (int)ar4 + 0x2d578;
  *(le<int>* )(unsigned)(0x2dd68 + (int)ar4) = (int)ar4 + 0x2de08;
  *(le<int>* )(unsigned)(0x2dd6c + (int)ar4) = (int)ar4 + 0x2e3a8;
  *(le<int>* )(unsigned)(0x2dd74 + (int)ar4) = (int)ar4 + 0x17c;
  *(le<undefined4>* )(unsigned)(0x2dd7c + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x2e75c + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x2dd84 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x2dd78 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x2dd80 + (int)ar4) = 0;
  return ar4;
}

__asm__(".globl FUN_8c0bff8c\n.set FUN_8c0bff8c, FUN_8c0bff8c_def\n");

}
