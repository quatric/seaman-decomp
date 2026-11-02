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
undefined4 s_CEnv_AddItem_0da93a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_CEnv_AddItem_0da93a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feb3c(ar4 + 0x7a4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    ar7 = 2;
    ar6 = 1;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x5b2,
               (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x5c1,1,2));
  }
  iVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4da0(ar4,ar5,ar6,ar7));
  *(le<int>* )(unsigned)(iVar1 + 8) = ar5;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_05c284(ar5,iVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fe2a0(iVar2 * 0x3c + ar4 + 0x3a8,iVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0daa28(ar5,iVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar5 + 8) + 0x60))))(ar5,iVar1,ar6,ar7));
  iVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fdf74(ar4 + 0xa4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign_wrap_0f4da4(ar5,iVar1,ar6,ar7));
  return 0;
}

__asm__(".globl s_CEnv_AddItem_0da93a\n.set s_CEnv_AddItem_0da93a, s_CEnv_AddItem_0da93a_def\n");

}
