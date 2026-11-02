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
int pack_release_entry_handle_def(le<int>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pack_release_entry_handle");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *ar4;
  if (((iVar1 != 0) && (-1 < ar5)) && (iVar1 = 3, ar5 < 3)) {
    *(le<undefined4>* )(unsigned)((int)ar4 + 0x9ec98 + ar5 * 8) = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02296c(ar4 + 1,ar5,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), handle_slot_free(ar4 + 1,ar5,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl pack_release_entry_handle\n.set pack_release_entry_handle, pack_release_entry_handle_def\n");

}
