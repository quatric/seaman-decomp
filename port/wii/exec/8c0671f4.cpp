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
int Class_12a078_m5_0671f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12a078_m5_0671f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(le<int>* )(unsigned)(0x384 + ar4);
  if (iVar1 != -1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0f8214(0x8c35468c,ar5,ar6,ar7));
    ar5_00 = 3;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030870(ar4 + 0x9c,3,ar6,ar7));
    *(undefined1 *)(unsigned)(0x80 + ar4) = 1;
    *(le<undefined4>* )(unsigned)(0x384 + ar4) = 0xffffffff;
    *(le<undefined4>* )(unsigned)(0xfc + ar4) = 0;
    (vsp = ((unsigned long)(fr0_ - 4)), s_STATUS_FORMAT_030306(ar4 + 0x9c,ar5_00,ar6,ar7));
    if ((*(le<int>* )(unsigned)(ar4 + 0x40) == 0xb) || (iVar1 = *(le<int>* )(unsigned)(ar4 + 0x40), iVar1 == 0xc)) {
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x14;
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      iVar1 = 0x40;
      *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl Class_12a078_m5_0671f4\n.set Class_12a078_m5_0671f4, Class_12a078_m5_0671f4_def\n");

}
