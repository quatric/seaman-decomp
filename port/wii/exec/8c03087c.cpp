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
undefined4 FUN_8c03087c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03087c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 ar7_00;
  
  puVar5 = ((undefined1 *)(fr0_ - 0x2c));
  puVar3 = ((undefined1 *)(unsigned)0x8c1329bc);
  iVar2 = 0x10;
  do {
    puVar4 = puVar3 + 1;
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar5[1] = *puVar4;
    puVar5 = puVar5 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  (*(char *)(fr0_ - 0x40)) = (*(undefined1 *)(unsigned)0x8c1329dc);
  (*(undefined1 *)(fr0_ - 0x3f)) = (*(undefined1 *)(unsigned)0x8c1329dd);
  (*(undefined1 *)(fr0_ - 0x3e)) = (*(undefined1 *)(unsigned)0x8c1329de);
  (*(undefined1 *)(fr0_ - 0x3d)) = (*(undefined1 *)(unsigned)0x8c1329df);
  if (((*(le<int>* )(unsigned)(ar4 + 0x2e8) == -1) && (*(le<int>* )(unsigned)(ar4 + 0x770) == 0)) &&
     (*(le<int>* )(unsigned)(ar4 + 0x778) == 0)) {
    uVar1 = ar6;
    ar7_00 = ar7;
    (*(le<undefined4>* )(fr0_ - 0x30)) = (vsp = ((unsigned long)(fr0_ - 64)), s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + 0x2ec) = (*(le<undefined4>* )(fr0_ - 0x30));
    *(le<undefined4>* )(unsigned)(ar4 + 0x72c) = ar5;
    *(le<undefined4>* )(unsigned)(ar4 + 0x770) = 2;
    *(le<undefined4>* )(unsigned)(ar4 + 0x60) = ar6;
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(((undefined1 *)(fr0_ - 0x2c)),ar4 + 0x2c8,uVar1,ar7_00); });
    (*(char *)(fr0_ - 0x40)) = (*(char *)(fr0_ - 0x40)) + *(char *)(unsigned)(ar4 + 0x728);
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x2c)),&(*(char *)(fr0_ - 0x40)),uVar1,ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(ar4,((undefined1 *)(fr0_ - 0x2c)),uVar1,ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(ar4 + 0x20,ar7,uVar1,ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(ar4 + 0x40,s0,uVar1,ar7_00); });
    (*(le<int>* )(fr0_ - 0x38)) = *(le<int>* )(unsigned)(ar4 + 0x72c);
    (*(le<int>* )(fr0_ - 0x3c)) = *(le<int>* )(unsigned)(ar4 + 0x60);
    *(le<undefined4>* )(unsigned)((*(le<int>* )(fr0_ - 0x38)) * 0x14 + ar4 + (*(le<int>* )(fr0_ - 0x3c)) * 4 + 0x2f0) = 1;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 64)), s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,uVar1,ar7_00));
    *(le<undefined4>* )(unsigned)(ar4 + 0x2ec) = uVar1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c03087c\n.set FUN_8c03087c, FUN_8c03087c_def\n");

}
