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
int s_Item_pointer_is_NULL_CNodePt_0fe338_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Item_pointer_is_NULL_CNodePt_0fe338");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  
  if (*(le<int>* )(unsigned)(ar4 + 0x38) != 0) {
    if (ar5 == 0) {
      ({ unsigned long ri0_ = (unsigned long)(0xffffffff); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); noop_102824(((undefined1 *)(unsigned)0x8c141f84),0,0,0xd); });
      report_error_message
                (((undefined1 *)(unsigned)0x8c141ebb),((undefined1 *)(unsigned)0x8c141fb3),1,2);
    }
    else {
      ar5_00 = ar5;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), list_node_next(ar5,ar5,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_4_0dac48(ar5,ar5_00,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf08(uVar1,uVar2,ar6,ar7); });
      uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_4_0dac48(ar5,uVar2,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 36)), list_node_next(ar5,uVar2,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf10(uVar1,uVar2,ar6,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf08(ar5,0,ar6,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf10(ar5,0,ar6,ar7); });
      *(le<int>* )(unsigned)(ar4 + 0x38) = *(le<int>* )(unsigned)(ar4 + 0x38) + -1;
    }
  }
  return ar4;
}

__asm__(".globl s_Item_pointer_is_NULL_CNodePt_0fe338\n.set s_Item_pointer_is_NULL_CNodePt_0fe338, s_Item_pointer_is_NULL_CNodePt_0fe338_def\n");

}
