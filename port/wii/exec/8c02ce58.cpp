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
undefined4 FUN_8c02ce58_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02ce58");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce4c(ar4,*ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce40(ar4,ar5[1],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce34(ar4,ar5[2],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce28(ar4,ar5[3],ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028edc(ar4 + 0xa8,ar5[4],ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028ed4(ar4 + 0xa8,ar5[5],ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cbd4(ar4 + 0xa8,ar5[6],ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd68(ar4 + 0xa8,(int)*(le<short>* )(unsigned)(ar5 + 7),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025fbc(ar4 + 0xa8,(int)*(le<short>* )(unsigned)((int)ar5 + 0x1e),ar6,ar7));
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb84(ar4 + 0xa8,ar5[8],ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c02ce58\n.set FUN_8c02ce58, FUN_8c02ce58_def\n");

}
