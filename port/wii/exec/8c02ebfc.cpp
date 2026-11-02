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
int FUN_8c02ebfc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02ebfc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = 0;
  iVar4 = 0;
  uVar2 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c4e8(ar5,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 8) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02bd9c(ar5,uVar2,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0xc) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c668(ar5,uVar2,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x10) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02d4c4(ar5,uVar2,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x18) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02d478(ar5,uVar2,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x14) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02d410(ar5,uVar2,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x24) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02d3e8(ar5,uVar2,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x20) = uVar1;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ede0(ar5,uVar2,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x1c) = uVar2;
  if (100 < *(le<int>* )(unsigned)(ar4 + 0x14)) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x14) = 100;
  }
  if (100 < *(le<int>* )(unsigned)(ar4 + 0x18)) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x18) = 100;
  }
  iVar5 = 0xc7;
  if ((0 < *(le<int>* )(unsigned)(ar4 + 0xc)) && (*(le<int>* )(unsigned)(ar4 + 8) != 0)) {
    for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
      ((le<int>* )(fr0_ - 0x38))[iVar5] = 0;
    }
    ((le<int>* )(fr0_ - 0x38))[2] = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ee48(ar4,2,*(le<undefined4>* )(unsigned)(ar4 + 0x10),ar7));
    ((le<int>* )(fr0_ - 0x38))[3] = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ee48(ar4,3,*(le<undefined4>* )(unsigned)(ar4 + 0x14),ar7));
    ((le<int>* )(fr0_ - 0x38))[4] = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ee48(ar4,4,*(le<undefined4>* )(unsigned)(ar4 + 0x18),ar7));
    ((le<int>* )(fr0_ - 0x38))[5] = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ee48(ar4,5,*(le<undefined4>* )(unsigned)(ar4 + 0x24),ar7));
    ((le<int>* )(fr0_ - 0x38))[6] = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ee48(ar4,6,*(le<undefined4>* )(unsigned)(ar4 + 0x20),ar7));
    ((le<int>* )(fr0_ - 0x38))[7] = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ee48(ar4,7,*(le<undefined4>* )(unsigned)(ar4 + 0x1c),ar7));
    for (iVar6 = 0; iVar5 = iVar3, iVar6 < 8; iVar6 = iVar6 + 1) {
      if (iVar4 < ((le<int>* )(fr0_ - 0x38))[iVar6]) {
        iVar4 = ((le<int>* )(fr0_ - 0x38))[iVar6];
        iVar3 = iVar6 * 100 + ((le<int>* )(fr0_ - 0x38))[iVar6];
      }
    }
  }
  return iVar5;
}

__asm__(".globl FUN_8c02ebfc\n.set FUN_8c02ebfc, FUN_8c02ebfc_def\n");

}
