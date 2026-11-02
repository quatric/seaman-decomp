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
undefined4 s_Invalid_Item_number_CItemLis_0fe110_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Invalid_Item_number_CItemLis_0fe110");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 4)), list_node_next(ar4,ar5,ar6,ar7));
  if ((ar5 < 0) || (*(le<int>* )(unsigned)(ar4 + 0x300) < ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(0xffffffff); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); noop_102824(((undefined1 *)(unsigned)0x8c141eeb),0,0,0xd); });
    (vsp = ((unsigned long)(fr0_ - 4)), report_error_message(((undefined1 *)(unsigned)0x8c141f18),((undefined1 *)(unsigned)0x8c141f2c),1,2));
    ar4_00 = 0;
  }
  else {
    for (iVar1 = 0; iVar1 < ar5; iVar1 = iVar1 + 1) {
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 4)), list_node_next(ar4_00,ar5_00,ar6,ar7));
    }
  }
  return ar4_00;
}

__asm__(".globl s_Invalid_Item_number_CItemLis_0fe110\n.set s_Invalid_Item_number_CItemLis_0fe110, s_Invalid_Item_number_CItemLis_0fe110_def\n");

}
