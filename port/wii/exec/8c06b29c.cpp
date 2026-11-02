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
int FUN_8c06b29c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06b29c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  uint uVar3;
  uint ar5_00;
  
  ar5_00 = 1;
  ((le<uint>* )(fr0_ - 0x2c))[0] = *(le<uint>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c1371b0));
  ((le<uint>* )(fr0_ - 0x2c))[1] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1371b0)) + 4);
  ((le<uint>* )(fr0_ - 0x2c))[2] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1371b0)) + 8);
  ((le<uint>* )(fr0_ - 0x2c))[3] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1371b0)) + 0xc);
  iVar1 = -1;
  iVar2 = ar6;
  do {
    iVar1 = iVar1 + 1;
    uVar3 = (*(le<uint>* )(unsigned)(0x214 + ar4) | ((le<uint>* )(fr0_ - 0x2c))[ar5]) & ar5_00;
    if ((uVar3 != 0) || (*(char *)(unsigned)(0x248 + ar4 + iVar1) == '\x02')) {
      iVar2 = iVar2 + -1;
      ar5_00 = ar5_00 << 1;
    }
  } while (((uVar3 != 0) || (*(char *)(unsigned)(0x248 + ar4 + iVar1) == '\x02')) && (0 < iVar2));
  if (iVar2 < 1) {
    iVar2 = -1;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c06b25c(ar4,ar5_00,ar6,ar7));
    iVar2 = 0;
    for (; ar5_00 != 0; ar5_00 = (int)ar5_00 >> 1) {
      iVar2 = iVar2 + 1;
    }
    iVar2 = iVar2 + -1;
  }
  return iVar2;
}

__asm__(".globl FUN_8c06b29c\n.set FUN_8c06b29c, FUN_8c06b29c_def\n");

}
