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
int FUN_8c2376c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2376c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  le<int>* piVar6;
  
  uVar3 = 0x8c4c13a0;
  iVar2 = 0x8c4c11e0;
  uVar1 = 0x8c4c0ce0;
  iVar4 = (int)0x80;
  iVar5 = *(le<int>* )(unsigned)(iVar4 + 0x8c4c1280);
  if (iVar5 != 0) {
    piVar6 = (le<int>* )(unsigned)(iVar5 * 4 + 0x8c4c1280);
    do {
      piVar6 = piVar6 + -1;
      iVar4 = *(le<int>* )(unsigned)(*piVar6 * 4 + iVar2);
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c23c7f4(uVar3,uVar1,0x10,vr7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c255d6c(uVar3,iVar4,vr6,vr7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c212740(uVar3,iVar4 + 0x40,0x90 + iVar4,vr7));
      iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21279c(uVar3,iVar4 + 0x4c,0x9c + iVar4,vr7));
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return iVar4;
}

__asm__(".globl FUN_8c2376c4\n.set FUN_8c2376c4, FUN_8c2376c4_def\n");

}
