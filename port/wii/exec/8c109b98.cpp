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
undefined4 FUN_8c109b98_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c109b98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *a5;
  undefined1 *a6;
  undefined1 *a7;
  char cVar2;
  
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 72)), Vec3_ctor_zero(&(*(le<undefined4>* )(fr0_ - 0x18)),ar5,ar6,ar7));
  a7 = ((undefined1 *)(fr0_ - 0x44));
  a6 = ((undefined1 *)(fr0_ - 0x40));
  a5 = ((undefined1 *)(fr0_ - 0x3c));
  (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x120))))(ar5,a5,a6,a7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), get_field_4_05eed8(ar4,a5,a6,a7));
  switch(uVar1) {
  case 6:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(le<unsigned>* )((((unsigned long)(fr0_ - 72)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 72)) - 8); FUN_8c02f670(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),a5,a6,a7); });
    uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), Vec3_assign(&(*(le<undefined4>* )(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x38)),a6,a7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), Vec3_assign(ar4 + 0x70,uVar1,a6,a7));
    (vsp = ((unsigned long)(fr0_ - 72)), Vec3_assign(ar4 + 0x28,uVar1,a6,a7));
    (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,a6,a7));
    if (cVar2 == '\0') {
      *(le<undefined4>* )(unsigned)(ar4 + 0x28) = (*(le<undefined4>* )(fr0_ - 0x18));
      *(le<undefined4>* )(unsigned)(ar4 + 0x70) = (*(le<undefined4>* )(fr0_ - 0x18));
      *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = (*(le<undefined4>* )(fr0_ - 0x14));
      *(le<undefined4>* )(unsigned)(ar4 + 0x74) = (*(le<undefined4>* )(fr0_ - 0x14));
      *(le<undefined4>* )(unsigned)(ar4 + 0x30) = (*(le<undefined4>* )(fr0_ - 0x10));
      *(le<undefined4>* )(unsigned)(ar4 + 0x78) = (*(le<undefined4>* )(fr0_ - 0x10));
    }
    else {
      *(le<ulonglong>* )(unsigned)(ar4 + 0x28) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x14)),(*(le<undefined4>* )(fr0_ - 0x18)));
      *(le<ulonglong>* )(unsigned)(ar4 + 0x70) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x14)),(*(le<undefined4>* )(fr0_ - 0x18)));
      *(le<ulonglong>* )(unsigned)(ar4 + 0x2c) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x10)),(*(le<undefined4>* )(fr0_ - 0x14)));
      *(le<ulonglong>* )(unsigned)(ar4 + 0x74) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x10)),(*(le<undefined4>* )(fr0_ - 0x14)));
      *(le<ulonglong>* )(unsigned)(ar4 + 0x30) = CONCAT44((*(le<undefined4>* )(fr0_ - 0xc)),(*(le<undefined4>* )(fr0_ - 0x10)));
      *(le<ulonglong>* )(unsigned)(ar4 + 0x78) = CONCAT44((*(le<undefined4>* )(fr0_ - 0xc)),(*(le<undefined4>* )(fr0_ - 0x10)));
    }
    break;
  case 0xd:
    if (*(le<int>* )(unsigned)(ar4 + 0x6c) != 0) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(le<unsigned>* )((((unsigned long)(fr0_ - 72)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 72)) - 8); FUN_8c02f670(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),a5,a6,a7); });
      (vsp = ((unsigned long)(fr0_ - 72)), Vec3_assign(&(*(le<undefined4>* )(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x28)),a6,a7));
      (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,a6,a7));
      if (cVar2 == '\0') {
        *(le<undefined4>* )(unsigned)(ar4 + 0x28) = (*(le<undefined4>* )(fr0_ - 0x18));
        *(le<undefined4>* )(unsigned)(ar4 + 0x70) = (*(le<undefined4>* )(fr0_ - 0x18));
        *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = (*(le<undefined4>* )(fr0_ - 0x14));
        *(le<undefined4>* )(unsigned)(ar4 + 0x74) = (*(le<undefined4>* )(fr0_ - 0x14));
        *(le<undefined4>* )(unsigned)(ar4 + 0x30) = (*(le<undefined4>* )(fr0_ - 0x10));
        *(le<undefined4>* )(unsigned)(ar4 + 0x78) = (*(le<undefined4>* )(fr0_ - 0x10));
      }
      else {
        *(le<ulonglong>* )(unsigned)(ar4 + 0x28) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x14)),(*(le<undefined4>* )(fr0_ - 0x18)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x70) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x14)),(*(le<undefined4>* )(fr0_ - 0x18)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x2c) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x10)),(*(le<undefined4>* )(fr0_ - 0x14)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x74) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x10)),(*(le<undefined4>* )(fr0_ - 0x14)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x30) = CONCAT44((*(le<undefined4>* )(fr0_ - 0xc)),(*(le<undefined4>* )(fr0_ - 0x10)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x78) = CONCAT44((*(le<undefined4>* )(fr0_ - 0xc)),(*(le<undefined4>* )(fr0_ - 0x10)));
      }
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(&(*(le<undefined4>* )(fr0_ - 0x18)),0xffffffff,a6,a7));
  return uVar1;
}

__asm__(".globl FUN_8c109b98\n.set FUN_8c109b98, FUN_8c109b98_def\n");

}
