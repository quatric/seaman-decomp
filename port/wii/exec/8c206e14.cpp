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
undefined4 FUN_8c206e14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c206e14");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2084; for (int i_ = 0; i_ < 2084; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = 0x8c4aa0b4;
  iVar5 = (int)(int)0xffffff40;
  if (ar4 == 0) {
    iVar3 = (int)0x2000;
    uVar7 = 0;
    iVar4 = 0;
    do {
      iVar6 = 0x8c4aa034;
      if ((uint)(*(le<int>* )(unsigned)(0x8c4aa034 + uVar7) + iVar3) <
          (uint)(*(le<int>* )(unsigned)(0x8c4aa034 + -0x10 + uVar7) + iVar5)) {
        *(le<int>* )(unsigned)(0x8c4aa034 + iVar4) = *(le<int>* )(unsigned)(0x8c4aa034 + iVar4) + iVar3;
        *(le<int>* )(unsigned)(iVar6 + -0xc + iVar4) = *(le<int>* )(unsigned)(iVar6 + iVar4) + (int)0xc0;
        *(le<undefined4>* )(unsigned)(iVar1 + 0x14) = 0;
      }
      else if (*(le<int>* )(unsigned)(iVar1 + 0x14) != 0) {
        (vsp = ((unsigned long)(fr0_ - 2084)), FUN_8c2062c8(3,ar5,ar6,ar7));
      }
      uVar7 = uVar7 + 0x20;
      iVar4 = iVar4 + 0x20;
    } while (uVar7 < 0x40);
  }
  else if (ar4 == 1) {
    iVar6 = (int)(int)0xfffff800;
    iVar3 = 0;
    iVar4 = 0;
    (*(le<undefined4>* )(fr0_ - 0x24)) = 0;
    iVar8 = 0;
    do {
      iVar2 = 0x8c4aa028;
      if ((uint)(*(le<int>* )(unsigned)(0x8c4aa028 + 8 + (*(le<undefined4>* )(fr0_ - 0x24)) * 0x20) + (int)0x140) <
          (uint)(*(le<int>* )(unsigned)(0x8c4aa028 + (*(le<undefined4>* )(fr0_ - 0x24)) * 0x20) + iVar6)) {
        if (*(le<uint>* )(unsigned)(iVar1 + 0x24 + iVar3) < (uint)(*(le<int>* )(unsigned)(0x8c4aa028 + iVar4) + iVar6)) {
          *(le<int>* )(unsigned)(0x8c4aa028 + iVar8) = *(le<int>* )(unsigned)(0x8c4aa028 + iVar8) - (int)0x800;
          *(le<int>* )(unsigned)(0x8c4aa034 + iVar8) = *(le<int>* )(unsigned)(iVar2 + iVar8) + iVar5;
        }
        *(le<undefined4>* )(unsigned)(iVar1 + 0x10) = 0;
      }
      else if (10 < *(le<uint>* )(unsigned)(iVar1 + 0x10)) {
        (vsp = ((unsigned long)(fr0_ - 2084)), FUN_8c2062c8(3,ar5,ar6,ar7));
      }
      iVar4 = iVar4 + 0x20;
      (*(le<undefined4>* )(fr0_ - 0x24)) = (*(le<undefined4>* )(fr0_ - 0x24)) + 1;
      iVar8 = iVar8 + 0x20;
      iVar3 = iVar3 + 4;
    } while ((*(le<undefined4>* )(fr0_ - 0x24)) < 2);
  }
  return 0;
}

__asm__(".globl FUN_8c206e14\n.set FUN_8c206e14, FUN_8c206e14_def\n");

}
