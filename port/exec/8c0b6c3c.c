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
undefined4 FUN_8c0b6c3c_def(undefined4 ar4,undefined *ar5,undefined *ar6,undefined *ar7)

{
  ring[rp++ & 255] = "FUN_8c0b6c3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *ar6_00;
  undefined *ar5_00;
  undefined4 uVar2;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7));
  uVar2 = 1;
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0162f8(((undefined1 *)(fr0_ - 0x30)),ar5_00,ar6_00,ar7));
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      ar7 = ((undefined1 *)(unsigned)0x8c13c025);
      ar6_00 = (undefined *)(unsigned)0x0;
      uVar2 = 0xb;
      (vsp = ((unsigned long)(fr0_ - 52)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),0xb,0,((undefined1 *)(unsigned)0x8c13c025)));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01f520(0x8c3dd7dc,uVar2,ar6_00,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c026),ar6_00,ar7));
      if (iVar1 == 0) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c431a58) = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01ae28(uVar2,ar4,ar5,ar6));
        ar6_00 = ar5;
        ar7 = ar6;
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c033),ar6_00,ar7));
        if (iVar1 == 0) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c431a58) = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01b400(uVar2,((undefined1 *)(unsigned)0x8c13c040),ar5,ar6));
          ar6_00 = ar5;
          ar7 = ar6;
        }
      }
      uVar2 = 0;
      break;
    case 1:
      ar7 = ((undefined1 *)(unsigned)0x8c13c025);
      ar6_00 = (undefined *)(unsigned)0x0;
      (vsp = ((unsigned long)(fr0_ - 52)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),1,0,((undefined1 *)(unsigned)0x8c13c025)));
      break;
    case 3:
      ar6_00 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 52)), get_field_a524_01f514(0x8c3dd7dc,ar5_00,ar6_00,ar7));
      ar7 = ((undefined1 *)(unsigned)0x8c13c025);
      (vsp = ((unsigned long)(fr0_ - 52)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),2,ar6_00,((undefined1 *)(unsigned)0x8c13c025)));
      break;
    case 4:
      ar6_00 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 52)), get_field_a524_01f514(0x8c3dd7dc,ar5_00,ar6_00,ar7));
      ar7 = ((undefined1 *)(unsigned)0x8c13c025);
      (vsp = ((unsigned long)(fr0_ - 52)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),4,ar6_00,((undefined1 *)(unsigned)0x8c13c025)));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0c412c(((undefined1 *)(unsigned)0x8c2b5628),1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0b6c3c\n.set _FUN_8c0b6c3c, _FUN_8c0b6c3c_def\n");
