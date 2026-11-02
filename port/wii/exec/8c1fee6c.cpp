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
int FUN_8c1fee6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fee6c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  
  uVar3 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd510(*(le<undefined4>* )(unsigned)(ar4 + 0x28),ar5,ar6,ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fdd1a(*(le<undefined4>* )(unsigned)(ar4 + 0x28),uVar3,ar6,ar7));
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd550(*(le<undefined4>* )(unsigned)(ar4 + 0x28),uVar3,ar6,ar7));
    if ((iVar1 != 0) && (*(char *)(unsigned)(0x8c4783e8 + *(le<int>* )(unsigned)(ar4 + 0x28) * (int)0x148) != '\0')
       ) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 256)), thunk_FUN_8c1ffcc2(*(le<undefined4>* )(unsigned)(ar4 + 0x28),uVar3,ar6,ar7));
      if (iVar1 < 0) {
        return (int)(int)0xffffff03;
      }
      uVar3 = *(le<undefined4>* )(unsigned)(ar4 + 0x28);
      if (*(le<int>* )(unsigned)(ar4 + 0x40) == 0xfffa) {
        if (*(le<int>* )(unsigned)(ar4 + 0x34) != 0) {
          return 0xffff0000;
        }
      }
      else if (*(le<int>* )(unsigned)(ar4 + 0x34) != 0) {
        if ((*(le<int>* )(unsigned)(ar4 + 0x40) != 0xfffc) && (*(le<int>* )(unsigned)(ar4 + 0x40) != 0xffff)) {
          ar5_00 = *(le<undefined4>* )(unsigned)(ar4 + 0x40);
          iVar1 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fbb6c(uVar3,ar5_00,ar5,ar7));
          if (iVar1 < 0) {
            return iVar1;
          }
          uVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c2009d0(uVar3,ar5_00,ar5,ar7));
          *(le<uint>* )(unsigned)(ar4 + 0x40) = uVar2 & 0xffff;
          iVar1 = *(le<int>* )(unsigned)(ar4 + 0x34) + -1;
          *(le<int>* )(unsigned)(ar4 + 0x34) = iVar1;
          return iVar1;
        }
        return (int)(int)0xffffff41;
      }
      return 0;
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl FUN_8c1fee6c\n.set FUN_8c1fee6c, FUN_8c1fee6c_def\n");

}
