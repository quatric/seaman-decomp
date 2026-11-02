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
undefined4 s_JUNGLE_0309ca_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_JUNGLE_0309ca");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar5 = ((undefined1 *)(fr0_ - 0x2b));
  puVar3 = ((undefined1 *)(unsigned)0x8c1329e0);
  iVar2 = 0x10;
  do {
    puVar4 = puVar3 + 1;
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar5[1] = *puVar4;
    puVar5 = puVar5 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar1 = CONCAT13((*(undefined1 *)(unsigned)0x8c132a02),CONCAT12((*(undefined1 *)(unsigned)0x8c132a01),CONCAT11((*(undefined1 *)(unsigned)0x8c132a00),(char)ar5)));
  if (((*(le<int>* )(unsigned)(ar4 + 0x2e8) == -1) && (*(le<int>* )(unsigned)(ar4 + 0x770) == 0)) &&
     (*(le<int>* )(unsigned)(ar4 + 0x778) == 0)) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x60) = 0;
    if ((char)ar5 == '\x01') {
      ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); strcpy(ar4,((undefined1 *)(unsigned)0x8c132a24),ar6,ar7); });
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); strcpy(((undefined1 *)(fr0_ - 0x2b)),ar4 + 0x2c8,ar6,ar7); });
      uVar1 = CONCAT22((short)((uint)uVar1 >> 0x10),
                       CONCAT11((char)((uint)uVar1 >> 8) + *(char *)(unsigned)(ar4 + 0x728),(char)uVar1));
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x2b)),(fr0_ + (int)0xffffffd1),ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); strcpy(ar4,((undefined1 *)(fr0_ - 0x2b)),ar6,ar7); });
    }
    ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); strcpy(ar4 + 0x20,((undefined1 *)(unsigned)0x8c132a2b),ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); strcpy(ar4 + 0x40,((undefined1 *)(unsigned)0x8c132a30),ar6,ar7); });
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl s_JUNGLE_0309ca\n.set s_JUNGLE_0309ca, s_JUNGLE_0309ca_def\n");

}
