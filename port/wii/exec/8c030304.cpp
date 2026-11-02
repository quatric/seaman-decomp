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
undefined4 s_STATUS_FORMAT_030306_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_STATUS_FORMAT_030306");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar5 = ((undefined1 *)(fr0_ - 0x28));
  puVar3 = ((undefined1 *)(unsigned)0x8c13292c);
  iVar2 = 0x10;
  do {
    puVar4 = puVar3 + 1;
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar5[1] = *puVar4;
    puVar5 = puVar5 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar1 = CONCAT13((*(undefined1 *)(unsigned)0x8c13294f),CONCAT12((*(undefined1 *)(unsigned)0x8c13294e),CONCAT11((*(undefined1 *)(unsigned)0x8c13294d),(*(undefined1 *)(unsigned)0x8c13294c))));
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); strcpy(((undefined1 *)(fr0_ - 0x28)),ar4 + 0x2c8,ar6,ar7); });
  uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),(char)uVar1 + *(char *)(unsigned)(ar4 + 0x728));
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x28)),(fr0_ + (int)0xffffffd4),ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); strcpy(ar4,((undefined1 *)(fr0_ - 0x28)),ar6,ar7); });
  *(le<undefined4>* )(unsigned)(ar4 + 0x2ec) = 4;
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); strcpy(ar4 + 0x20,((undefined1 *)(unsigned)0x8c132a14),ar6,ar7); });
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); strcpy(ar4 + 0x40,((undefined1 *)(unsigned)0x8c132a22),ar6,ar7); });
  return uVar1;
}

__asm__(".globl s_STATUS_FORMAT_030306\n.set s_STATUS_FORMAT_030306, s_STATUS_FORMAT_030306_def\n");

}
