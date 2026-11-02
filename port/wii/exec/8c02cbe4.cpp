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
undefined4 FUN_8c02cbe4_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02cbe4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ain0;
  
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02ce4c(ar4,*ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02ce40(ar4,ar5[1],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02ce34(ar4,ar5[2],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02ce28(ar4,ar5[3],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02cbbc(ar4 + 0x90,ar5[4],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02ce10(ar4 + 0x90,ar5[5],ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c02cb7c(ar4 + 0xa8,(int)*(char *)(unsigned)(ar5 + 6),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02cb74(ar4 + 0xa8,(int)*(char *)(unsigned)((int)ar5 + 0x19),ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c028edc(ar4 + 0xa8,ar5[7],ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c028ed4(ar4 + 0xa8,ar5[8],ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c02cbd4(ar4 + 0xa8,ar5[9],ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02bd68(ar4 + 0xa8,(int)*(le<short>* )(unsigned)(ar5 + 10),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c025fbc(ar4 + 0xa8,(int)*(le<short>* )(unsigned)((int)ar5 + 0x2a),ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c02cb84(ar4 + 0xa8,ar5[0xb],ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c02ce08(ar4 + 0xf8,ar5[0xc],ar6,ar7); });
  for (ain0 = 0; ain0 < 6; ain0 = ain0 + 1) {
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02bd94(ain0 * 0x18 + ar4,(int)*(char *)(unsigned)(ar5 + ain0 * 3 + 0xd),ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)(
                 (*(le<int>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c02c330(ain0 * 0x18 + ar4,(int)*(char *)(unsigned)((int)ar5 + ain0 * 0xc + 0x35),ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02c338(ain0 * 0x18 + ar4,(int)*(char *)(unsigned)(ar5 + ain0 * 3 + 0xf),ar6,ar7));
    (*(le<int>* )(fr0_ - 0x30)) = ain0;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c02ce00(ain0 * 0x18 + ar4,ar5[ain0 * 3 + 0xe],ar6,ar7); });
  }
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02cdf8(ar4 + 0x78,(int)*(char *)(unsigned)(ar5 + 0x1e),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02c338(ar4 + 0x78,0,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02cbe4\n.set FUN_8c02cbe4, FUN_8c02cbe4_def\n");

}
