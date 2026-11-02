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
undefined4 s_KATANA_FLASH_1f0d98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_KATANA_FLASH_1f0d98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  le<short>* psVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 ar5_00;
  
  if ((ar4 < 1) || (4 < ar4)) {
    uVar2 = 0xfffffff9;
  }
  else {
    *(le<unsigned>* )0x8c2739d8 = (unsigned)(unsigned long)((le<short>* )(unsigned)((undefined1 *)(unsigned)0x8c470ee0));
    (vsp = ((unsigned long)(fr0_ - 28)), syscall_1f98b0(ar4,&(*(le<undefined4>* )(fr0_ - 0x14)),ar6,ar7));
    *(le<unsigned>* )(unsigned long)*(le<unsigned>* )0x8c2739d8 = (unsigned)((short)ar4);
    *(le<undefined4>* )(unsigned)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8) + 2) = (*(le<undefined4>* )(fr0_ - 0x14));
    *(le<undefined4>* )(unsigned)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8) + 4) = (*(le<undefined4>* )(fr0_ - 0x10));
    *(le<int>* )(unsigned)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8) + 0xc) = *(le<int>* )(unsigned)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8) + 4) + 0x7fff >> 0xf;
    *(le<int>* )(unsigned)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8) + 10) =
         ((*(le<int>* )(unsigned)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8) + 4) >> 6) - *(le<int>* )(unsigned)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8) + 0xc)) + -1;
    *(le<undefined4>* )(unsigned)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8) + 6) = ar5;
    psVar1 = (le<short int>*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8));
    psVar1[0xe] = 0;
    psVar1[0xf] = 0;
    psVar1 = (le<short int>*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8));
    psVar1[0x10] = 0;
    psVar1[0x11] = 0;
    psVar1 = (le<short int>*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8));
    psVar1[0x16] = 0;
    psVar1[0x17] = 0;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 28)), syscall_1f98c4(*(le<undefined4>* )(unsigned)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8) + 2),((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8) + 0x1a,0x40,ar7));
    psVar1 = (le<short int>*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8));
    if (iVar3 == -1) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0xc;
      iVar3 = func_0x8c1f093c(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8) + 0x1a,"KATANA_FLASH____",0xc,ar7);
      if ((iVar3 != 0) && ((int)*((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8) == (int)(char)psVar1[0x22])) {
        ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8)[1] = (short)*(char *)(unsigned)((int)psVar1 + 0x45);
        if ((((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8)[1] == 0) || (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8)[1] == 1)) {
          ar5_00 = *(le<undefined4>* )(unsigned)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8) + 4);
          ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c1f0988(*(le<undefined4>* )(unsigned)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8) + 6),ar5_00,uVar2,ar7); });
          iVar3 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c1f0a72(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739d8),ar5_00,uVar2,ar7));
          if (iVar3 != 0) {
            return iVar3;
          }
          return 0;
        }
      }
      uVar2 = 0xfffffff8;
    }
  }
  return uVar2;
}

__asm__(".globl s_KATANA_FLASH_1f0d98\n.set s_KATANA_FLASH_1f0d98, s_KATANA_FLASH_1f0d98_def\n");

}
