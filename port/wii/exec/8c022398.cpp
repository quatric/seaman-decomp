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
uint aica_driver_load_manatee_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("aica_driver_load_manatee");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *ar6_00;
  le<undefined4>* ar7_00;
  
  ar7_00 = ((le<undefined4>* )(fr0_ - 0x8));
  ar6_00 = (&(*(undefined1 *)(unsigned)0x8c12fc98));
  iVar1 = ({ unsigned long t0_ = (unsigned long)(&(*(le<undefined4>* )(fr0_ - 0xc))); unsigned long t1_ = (unsigned long)(1); *(le<unsigned>* )((((unsigned long)(fr0_ - 12)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 12)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 12)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0211b8))))
                    (0x8c3eb334,(&(*(undefined1 *)(unsigned)0x8c12fc98)) + 1,(&(*(undefined1 *)(unsigned)0x8c12fc98)),ar7_00); });
  if (iVar1 != 0) {
    (vsp = ((unsigned long)(fr0_ - 12)), aica_driver_upload(ar4,((le<undefined4>* )(fr0_ - 0x8))[0],ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c021234(0x8c3eb334,(&(*(undefined1 *)(unsigned)0x8c12fc98)) + 1,(&(*(undefined1 *)(unsigned)0x8c12fc98)),1));
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl aica_driver_load_manatee\n.set aica_driver_load_manatee, aica_driver_load_manatee_def\n");

}
