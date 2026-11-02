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
undefined4 s_E9040811_adxf_is_NULL_adxf_r_26220e_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E9040811_adxf_is_NULL_adxf_r_26220e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 ar4_00;
  undefined4 ar5_00;
  undefined4 uVar3;
  
  if ((ar4 == 0) || (ar5 < 0)) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25ece6(ar4,ar5,ar6,ar7));
  }
  else {
    if (ar6 != 0) {
      if (*(char *)(unsigned)(ar4 + 1) == '\x02') {
        return 0;
      }
      if (*(int *)(unsigned)(ar4 + 4) != 0) {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25ece6(ar4,ar5,ar6,ar7));
        return 0xffffffff;
      }
      ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c260ca0(ar4,ar5,ar6,ar7); });
      *(int *)(unsigned)(ar4 + 0x1c) = *(int *)(unsigned)(ar4 + 0xc) + *(int *)(unsigned)(ar4 + 0x18);
      iVar2 = *(int *)(unsigned)(ar4 + 0x10) - *(int *)(unsigned)(ar4 + 0x18);
      if (ar5 < iVar2) {
        iVar2 = ar5;
      }
      *(int *)(unsigned)(ar4 + 0x20) = iVar2;
      *(undefined4 *)(unsigned)(ar4 + 0x24) = 0;
      ar5_00 = *(undefined4 *)(unsigned)(ar4 + 0x20);
      iVar2 = ar6;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), s_E8101212_can_t_open_fad_d_ns_26338a(*(undefined4 *)(unsigned)(ar4 + 0x1c),ar5_00,ar6,ar7));
      if (iVar1 == 0) {
        uVar3 = 0xffffffff;
        ar4_00 = 0;
      }
      else {
        *(int *)(unsigned)(ar4 + 4) = iVar1;
        *(undefined1 *)(unsigned)(ar4 + 1) = 2;
        ar4_00 = *(undefined4 *)(unsigned)(ar4 + 4);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c26346e(ar4_00,ar5_00,ar6,ar7));
        uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x20);
      }
      ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c260cc8(ar4_00,ar5_00,ar6,ar7); });
      return uVar3;
    }
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25ece6(ar4,ar5,0,ar7));
  }
  return 0xfffffffd;
}

__asm__(".globl _s_E9040811_adxf_is_NULL_adxf_r_26220e\n.set _s_E9040811_adxf_is_NULL_adxf_r_26220e, _s_E9040811_adxf_is_NULL_adxf_r_26220e_def\n");
