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
undefined4 FUN_8c021f4c_def(le<int>* ar4,int ar5,le<int>* ar6,le<int>* ar7)

{
  TRACE_ENTER("FUN_8c021f4c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  le<int>*  s0 = (le<int>* )(unsigned long)*(le<unsigned>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  le<ushort>* ar6_00;
  le<int>* ar7_00;
  
  (*(le<unsigned>* )(fr0_ - 0xc) = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4366c0)));
  if (*ar4 == 0) {
    return 2;
  }
  if ((ar5 < 0) || (2 < ar5)) {
    return 2;
  }
  ar6_00 = ((le<ushort>* )(fr0_ - 0x18));
  ar7_00 = ar7;
  (*(le<int>* )(fr0_ - 0x14)) = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c022a1c(ar4 + 1,ar5,ar6_00,ar7));
  if ((*(le<int>* )(fr0_ - 0x14)) == 1) {
    (vsp = ((unsigned long)(fr0_ - 24)), pack_release_entry_handle(ar4,ar5,ar6_00,ar7_00));
    return 1;
  }
  if ((*(le<int>* )(fr0_ - 0x14)) == 2) {
    return 3;
  }
  if ((*(le<int>* )(fr0_ - 0x14)) != 3) {
    return 2;
  }
  *ar6 = (int)(((le<ushort>* )(fr0_ - 0x18))[0] & 0xf0) >> 4;
  *ar7 = (int)(((le<ushort>* )(fr0_ - 0x18))[0] & 0xf00) >> 8;
  *s0 = (int)(((le<ushort>* )(fr0_ - 0x18))[0] & 0xf000) >> 0xc;
  if ((((le<ushort>* )(fr0_ - 0x18))[0] & 0xf) < 8) {
                    
    switch(((le<ushort>* )(fr0_ - 0x18))[0] & 0xf) {
    case 0:
      uVar1 = 5;
      break;
    default:
      uVar1 = 6;
      break;
    case 4:
    case 5:
    case 6:
      uVar1 = 7;
      break;
    case 7:
      goto switchD_8c022008_caseD_7;
    }
  }
  else {
switchD_8c022008_caseD_7:
    uVar1 = 8;
  }
  return uVar1;
}

__asm__(".globl FUN_8c021f4c\n.set FUN_8c021f4c, FUN_8c021f4c_def\n");

}
