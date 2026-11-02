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
undefined4 FUN_8c1fbb6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fbb6c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = ar4 * 0x148;
  iVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c475f80);
  do {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd1e2(ar4,ar5,ar6,ar7));
    if (iVar1 == 0) break;
    if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c26d178) != 0) && (iVar1 == -0xd0)) goto LAB_8c1fbc04;
    bVar4 = iVar3 != 0;
    *(le<int>* )(unsigned)(iVar5 + -0x73b87bec) = *(le<int>* )(unsigned)(iVar5 + -0x73b87bec) + 1;
    iVar3 = iVar3 + -1;
  } while ((bVar4) || ((*(le<undefined4>* )(unsigned)(unsigned)0x8c475f80) == -1));
  iVar3 = *(le<int>* )(unsigned)(iVar5 + -0x73b87bf0);
  *(le<int>* )(unsigned)(iVar5 + -0x73b87bf0) = iVar3 + 1;
  (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fcdc2(ar4,*(le<undefined4>* )(unsigned)(ar4 * 0x80 + -0x73b8a038),iVar3,
               *(le<undefined4>* )(unsigned)(iVar5 + -0x73b87bec)));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (iVar1 == -0xff) {
LAB_8c1fbc04:
    uVar2 = 0xffffff01;
  }
  else {
    uVar2 = 0xffff0000;
  }
  return uVar2;
}

__asm__(".globl FUN_8c1fbb6c\n.set FUN_8c1fbb6c, FUN_8c1fbb6c_def\n");

}
