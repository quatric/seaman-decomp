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
undefined4 Class_12bb08_m1_0da338_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12bb08_m1_0da338");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 ar6_00;
  int ar7_00;
  int iVar4;
  int iVar5;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  iVar3 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e9220(ar4 + 0xf4c,ar5,ar6,ar4));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,iVar3,ar6_00,ar7_00));
  *(le<undefined4>* )(unsigned)0x8c437550 = iVar2;
  if (iVar2 != 0) {
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = ar5;
      ar6_00 = ar6;
      ar7_00 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar5 + 8) + 0x10))))(iVar5,ar5,ar6,ar4));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar5,iVar3,ar6_00,ar7_00));
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4258(iVar5,ar4,ar6_00,ar7_00));
      iVar3 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f43bc(iVar5,ar4,ar6_00,ar7_00));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar5,iVar3,ar6_00,ar7_00));
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da4f8(iVar5,iVar3,ar6_00,ar7_00));
      if (iVar3 == 1) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4974(iVar5,ar4,ar6_00,ar7_00));
      }
      iVar3 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar5 + 8) + 0x24))))(iVar5,ar4,ar6_00,ar7_00));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar5,iVar3,ar6_00,ar7_00));
    }
    for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
      iVar3 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar1 + 8) + 0x28))))(iVar1,ar4,ar6_00,ar7_00));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar1,iVar3,ar6_00,ar7_00));
    }
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f6ab0(ar4 + iVar1 * 0x68 + 0xc0c,iVar3,ar6_00,ar7_00));
      if (iVar2 == 1) {
        iVar3 = ar4;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f7258(ar4 + iVar1 * 0x68 + 0xc0c,ar4,ar6_00,ar7_00));
      }
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbbe8(ar4,iVar3,ar6_00,ar7_00));
  }
  return 1;
}

__asm__(".globl Class_12bb08_m1_0da338\n.set Class_12bb08_m1_0da338, Class_12bb08_m1_0da338_def\n");

}
