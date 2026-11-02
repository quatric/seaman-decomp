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
undefined4 FUN_8c1f0a72_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f0a72");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 ar6_00;
  int ar5_00;
  int iVar4;
  int ar4_00;
  le<ushort>* a5;
  
  ar5_00 = *(le<int>* )(unsigned)(ar4 + 0xc);
  ar4_00 = *(le<int>* )(unsigned)(ar4 + 4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 8)), syscall_1f98c4(ar4_00,ar5_00,0x40,ar7));
  if (iVar1 != -1) {
    iVar4 = (*(le<int>* )(unsigned)(ar4 + 0x14) + 1) * 0x40;
    iVar1 = iVar4 + ar5_00;
    iVar3 = *(le<int>* )(unsigned)(ar4 + 0x18) << 6;
    iVar4 = (vsp = ((unsigned long)(fr0_ - 8)), syscall_1f98c4(ar4_00 + iVar4,iVar1,iVar3,ar7));
    if (iVar4 != -1) {
      iVar4 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c1f099c(iVar1,*(le<undefined4>* )(unsigned)(ar4 + 0x18),iVar3,ar7));
      *(le<int>* )(unsigned)(ar4 + 0x10) = iVar4;
      if (*(le<short>* )(unsigned)(ar4 + 2) != 0) {
        return 0xfffffffa;
      }
      a5 = (le<ushort>* )(unsigned)(ar4 + 0x34);
      while( true ) {
        if (iVar4 < 1) {
          return 0;
        }
        ar4_00 = ar4_00 + 0x40;
        ar6_00 = 0x40;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 8)), syscall_1f98c4(ar4_00,a5,0x40,ar7));
        if (iVar3 == -1) break;
        if (*a5 == 0xffff) {
          return 0;
        }
        uVar2 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c1f109c(0x3e,a5,ar6_00,ar7));
        if (((uint)*(le<ushort>* )(unsigned)(ar4 + 0x72) == (uVar2 & 0xffff)) &&
           ((int)(uint)*a5 < *(le<int>* )(unsigned)(ar4 + 0x14))) {
          ({ unsigned long ri0_ = (unsigned long)(iVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 8)); FUN_8c1f0958(a5,(*a5 + 1) * 0x40 + ar5_00,0x40,ar7); });
        }
        iVar4 = iVar4 + -1;
      }
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

__asm__(".globl FUN_8c1f0a72\n.set FUN_8c1f0a72, FUN_8c1f0a72_def\n");

}
