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
undefined4 FUN_8c25cebc_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25cebc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint a6;
  int iVar4;
  
  puVar1 = ((void *)(unsigned)0x8c20a844);
  iVar4 = ar6 * 0x20;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c20a844))))
            ((int)0x124,*(le<undefined4>* )(unsigned)(0x8c4aa024 + iVar4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))((int)0x12c,*(le<undefined4>* )(unsigned)(0x8c4aa028 + iVar4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))((int)0x128,*(le<undefined4>* )(unsigned)(0x8c4aa030 + iVar4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))((int)0x130,*(le<undefined4>* )(unsigned)(0x8c4aa034 + iVar4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))((int)0x13c,(ar5 + -1) * 0x10000 + ar4 + -1,ar6,ar7));
  uVar3 = *(le<undefined4>* )(unsigned)0x8c4aa05c & 3 | (*(le<undefined4>* )(unsigned)0x8c4aa060 & 3) << 4 | (*(le<undefined4>* )(unsigned)0x8c4aa064 & 3) << 8 |
          (*(le<undefined4>* )(unsigned)0x8c4aa068 & 3) << 0xc;
  if (*(le<undefined4>* )(unsigned)0x8c4a9bac == 6) {
    a6 = (*(le<undefined4>* )(unsigned)0x8c4aa058 & 1) << 0x14;
    uVar3 = uVar3 | a6 | (*(le<undefined4>* )(unsigned)0x8c4aa06c & 3) << 0x10;
  }
  else {
    a6 = (*(le<undefined4>* )(unsigned)0x8c4aa058 & 1) << 0x10;
    uVar3 = uVar3 | a6;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))((int)0x140,uVar3,a6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))((int)0x144,0x80000000,a6,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c25cebc\n.set FUN_8c25cebc, FUN_8c25cebc_def\n");

}
