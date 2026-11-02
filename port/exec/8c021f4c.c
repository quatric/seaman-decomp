#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021f4c_def(int *ar4,int ar5,int *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c021f4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int * s0 = (int *)(unsigned long)*(unsigned *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  ushort *ar6_00;
  int *ar7_00;
  
  (*(unsigned *)(fr0_ - 0xc) = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4366c0)));
  if (*ar4 == 0) {
    return 2;
  }
  if ((ar5 < 0) || (2 < ar5)) {
    return 2;
  }
  ar6_00 = ((ushort *)(fr0_ - 0x18));
  ar7_00 = ar7;
  (*(int *)(fr0_ - 0x14)) = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c022a1c(ar4 + 1,ar5,ar6_00,ar7));
  if ((*(int *)(fr0_ - 0x14)) == 1) {
    (vsp = ((unsigned long)(fr0_ - 24)), pack_release_entry_handle(ar4,ar5,ar6_00,ar7_00));
    return 1;
  }
  if ((*(int *)(fr0_ - 0x14)) == 2) {
    return 3;
  }
  if ((*(int *)(fr0_ - 0x14)) != 3) {
    return 2;
  }
  *ar6 = (int)(((ushort *)(fr0_ - 0x18))[0] & 0xf0) >> 4;
  *ar7 = (int)(((ushort *)(fr0_ - 0x18))[0] & 0xf00) >> 8;
  *s0 = (int)(((ushort *)(fr0_ - 0x18))[0] & 0xf000) >> 0xc;
  if ((((ushort *)(fr0_ - 0x18))[0] & 0xf) < 8) {
                    
    switch(((ushort *)(fr0_ - 0x18))[0] & 0xf) {
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

__asm__(".globl _FUN_8c021f4c\n.set _FUN_8c021f4c, _FUN_8c021f4c_def\n");
