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
undefined4 FUN_8c1f0b58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f0b58");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int a4;
  int a4_00;
  le<ushort>* ar5_00;
  
  puVar1 = ((void *)(unsigned)0x8c1f98d8);
  iVar5 = *(le<int>* )(unsigned)(ar4 + 4);
  if (*(le<short>* )(unsigned)(ar4 + 2) == 0) {
    ar5_00 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc));
    uVar4 = 0x40;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 8)), syscall_1f98d8(iVar5,ar5_00,0x40,ar7));
    if (iVar2 == 0x40) {
      a4_00 = iVar5 + 0x40;
      a4 = 0;
      for (iVar2 = *(le<int>* )(unsigned)(ar4 + 0x14); ar5_00 = ar5_00 + 0x20, 0 < iVar2; iVar2 = iVar2 + -1) {
        if ((*ar5_00 != 0xffff) && (iVar3 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c1f0a22(ar4,ar5_00,uVar4,ar7)), iVar3 == 0)) {
          uVar4 = 0x40;
          iVar3 = (vsp = ((unsigned long)(fr0_ - 8)), (*(code *)xlat((unsigned long)(puVar1)))(a4_00,ar5_00,0x40,ar7));
          if (iVar3 != 0x40) goto LAB_8c1f0bf4;
          a4 = a4 + 1;
          a4_00 = a4_00 + 0x40;
        }
      }
      iVar2 = *(le<int>* )(unsigned)(ar4 + 0x14);
      (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c1f09d4(a4,ar5_00,*(le<undefined4>* )(unsigned)(ar4 + 0x18),ar7));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 8)), (*(code *)xlat((unsigned long)(puVar1)))((iVar2 + 1) * 0x40 + iVar5,ar5_00,*(le<int>* )(unsigned)(ar4 + 0x18) << 6,ar7));
      if (iVar5 == *(le<int>* )(unsigned)(ar4 + 0x18) << 6) {
        *(le<int>* )(unsigned)(ar4 + 0x10) = a4;
        return 0;
      }
    }
LAB_8c1f0bf4:
    uVar4 = 0xfffffffe;
  }
  else {
    uVar4 = 0xfffffffa;
  }
  return uVar4;
}

__asm__(".globl FUN_8c1f0b58\n.set FUN_8c1f0b58, FUN_8c1f0b58_def\n");

}
