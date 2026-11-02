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
undefined4 FUN_8c2122ea_def(le<int>* ar4,uint ar5,undefined4 ar6,le<undefined4>* ar7)

{
  TRACE_ENTER("FUN_8c2122ea");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  le<undefined4>* ar7_00;
  int iVar3;
  
  iVar3 = ar5 * 4;
  ar7_00 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c2110b2(ar5,ar5,ar6,ar7));
  if (iVar1 != 8) {
    ar7_00 = ((le<undefined4>* )(unsigned)0x8c2758f0);
    if ((ar5 & 1) == 0) {
      uVar2 = 0xa0000000;
    }
    else {
      uVar2 = 0x81000040;
    }
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c2758f0) = *(le<uint>* )(unsigned)(uint)ar4[1] & 0x830000 | uVar2;
    (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038) = *(le<uint>* )(unsigned)(*ar4 + iVar3) >> 0x18;
    (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff00003c) = (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038);
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c207300(*(le<uint>* )(unsigned)(*ar4 + iVar3) & 0x3ffffff | 0xe0000000,((le<undefined4>* )(unsigned)0x8c2758f0),0x20,((le<undefined4>* )(unsigned)0x8c2758f0)));
    *(le<int>* )(unsigned)(*ar4 + iVar3) = *(le<int>* )(unsigned)(*ar4 + iVar3) + 0x20;
    for ((*(le<int>* )(fr0_ - 0x4c)) = 2; (*(le<int>* )(fr0_ - 0x4c)) != 0; (*(le<int>* )(fr0_ - 0x4c)) = (*(le<int>* )(fr0_ - 0x4c)) + -1) {
      (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038) = *(le<uint>* )(unsigned)(*ar4 + iVar3) >> 0x18;
      (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff00003c) = (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038);
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c207300(*(le<uint>* )(unsigned)(*ar4 + iVar3) & 0x3ffffff | 0xe0000000,((undefined1 *)(unsigned)0x8c275910),0x40,ar7_00));
      *(le<int>* )(unsigned)(*ar4 + iVar3) = *(le<int>* )(unsigned)(*ar4 + iVar3) + 0x40;
    }
  }
  ((le<undefined4>* )(fr0_ - 0x40))[0] = 0x20000000;
  (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038) = *(le<uint>* )(unsigned)(*ar4 + iVar3) >> 0x18;
  (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff00003c) = (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038);
  (*(le<undefined4>* )(fr0_ - 0x30)) = ar6;
  (*(le<unsigned>* )(fr0_ - 0x2c) = (unsigned)(unsigned long)(ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c207300(*(le<uint>* )(unsigned)(*ar4 + iVar3) & 0x3ffffff | 0xe0000000,((le<undefined4>* )(fr0_ - 0x40)),0x20,ar7_00));
  *(le<int>* )(unsigned)(*ar4 + iVar3) = *(le<int>* )(unsigned)(*ar4 + iVar3) + 0x20;
  return 0;
}

__asm__(".globl FUN_8c2122ea\n.set FUN_8c2122ea, FUN_8c2122ea_def\n");

}
