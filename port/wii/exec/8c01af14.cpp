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
int FUN_8c01af14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01af14");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 128; for (int i_ = 0; i_ < 128; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  uint ar5_00;
  int iVar2;
  undefined4 uVar3;
  undefined1 *ar5_01;
  undefined4 uVar4;
  undefined4 ar7_00;
  
  uVar3 = 2;
  ar7_00 = ar7;
  uVar4 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c01ab78(ar4,2,ar5,ar7));
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 128)), malloc_thunk(0x5380,uVar3,ar5,ar7_00));
    if (ar4_00 == 0) {
      iVar1 = -1;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 128)), memset(ar4_00,0,0x5380,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 128)), memmove(ar4_00,ar6,ar7,ar7_00));
      uVar3 = 0x60;
      (vsp = ((unsigned long)(fr0_ - 128)), memset(((undefined1 *)(fr0_ - 0x80)),0,0x60,ar7_00));
      ({ unsigned long ri0_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); strcpy(((undefined1 *)(fr0_ - 0x80)),(*(le<undefined4>* )(fr0_ + 0x00000000)),uVar3,ar7_00); });
      ({ unsigned long ri0_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); strcpy(((undefined1 *)(fr0_ - 0x6e)),(*(le<undefined4>* )(fr0_ + 0x00000004)),uVar3,ar7_00); });
      (*(le<int>* )(fr0_ - 0x3c)) = *(le<int>* )(unsigned)(ar4 + 0x10) + 0xa0;
      (*(le<int>* )(fr0_ - 0x38)) = *(le<int>* )(unsigned)(ar4 + 0x10) + 0xc0;
      (*(le<undefined2>* )(fr0_ - 0x34)) = 1;
      (*(le<undefined4>* )(fr0_ - 0x24)) = 0x5380;
      uVar4 = 0x5380;
      ar5_00 = (uint)(*(le<ushort>* )(fr0_ - 0x2c));
      (*(le<int>* )(fr0_ - 0x28)) = ar4_00;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c2017a8(1,ar5_00,0x5380,ar7_00));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), malloc_thunk(iVar2 << 9,ar5_00,uVar4,ar7_00));
      if (iVar2 == 0) {
        iVar1 = -1;
      }
      else {
        ar5_01 = ((undefined1 *)(fr0_ - 0x80));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c2015b0(iVar2,ar5_01,uVar4,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c1fb57c(ar4_00,ar5_01,uVar4,ar7_00));
        *(le<undefined4>* )(unsigned)(iVar1 * 0x28 + ar4 + 0x246c) = uVar3;
        *(le<int>* )(unsigned)(iVar1 * 0x28 + ar4 + 0x2470) = iVar2;
      }
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c01af14\n.set FUN_8c01af14, FUN_8c01af14_def\n");

}
