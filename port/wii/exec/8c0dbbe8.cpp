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
int FUN_8c0dbbe8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dbbe8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 ar5_00;
  int iVar4;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  iVar3 = 0;
  for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
    ((le<int>* )(fr0_ - 0x1c))[0] = iVar2;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0f4d34(iVar2,ar5,ar6,ar7));
    if (iVar3 == 0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_24_05c284(((le<int>* )(fr0_ - 0x1c))[0],ar5,ar6,ar7));
      if (iVar2 == 0xd) {
        *(le<undefined4>* )(unsigned)0x8c431a54 = 0;
      }
      if (((le<int>* )(fr0_ - 0x1c))[0] == *(le<int>* )(unsigned)(0xac8 + ar4)) {
        *(le<undefined4>* )(unsigned)(0xac8 + ar4) = 0;
      }
      if (((le<int>* )(fr0_ - 0x1c))[0] == *(le<int>* )(unsigned)(0x9d4 + ar4)) {
        *(le<undefined4>* )(unsigned)(0x9d4 + ar4) = 0;
      }
      iVar2 = ((le<int>* )(fr0_ - 0x1c))[0];
      iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_24_05c284(((le<int>* )(fr0_ - 0x1c))[0],ar5,ar6,ar7));
      if (iVar3 != 0xf) {
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0c4e2c(iVar2,ar5,ar6,ar7));
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), list_node_next(((le<int>* )(fr0_ - 0x1c))[0],ar5,ar6,ar7));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_24_05c284(((le<int>* )(fr0_ - 0x1c))[0],ar5,ar6,ar7));
      ar5_00 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_160_0dab80(((le<int>* )(fr0_ - 0x1c))[0],ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe334))))
                (iVar3 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7));
      (*(le<undefined4>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 32)), get_field_160_0dab80(((le<int>* )(fr0_ - 0x1c))[0],ar5_00,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0feb88(ar4 + 0x7a4,&(*(le<undefined4>* )(fr0_ - 0x20)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe018))))
                (ar4 + 0xa4,((le<int>* )(fr0_ - 0x1c))[0],ar6,ar7));
      ar5 = 1;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0d1b90(((le<int>* )(fr0_ - 0x1c)),1,ar6,ar7));
    }
    else {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), list_node_next(iVar2,ar5,ar6,ar7));
      iVar2 = iVar3;
    }
  }
  return iVar3;
}

__asm__(".globl FUN_8c0dbbe8\n.set FUN_8c0dbbe8, FUN_8c0dbbe8_def\n");

}
