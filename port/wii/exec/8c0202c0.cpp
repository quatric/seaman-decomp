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
undefined4 FUN_8c0202c0_def(le<int>* ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0202c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  ar5[2] = 0;
  *ar4 = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x44))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); strcpy(((undefined1 *)(fr0_ - 0x30)),ar5 + 4,ar6,ar7); });
  iVar3 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c26201c(((undefined1 *)(fr0_ - 0x30)),0,ar6,ar7));
  *ar4 = iVar1;
  if (*ar4 == 0) {
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02049c(ar4,ar5,ar6,ar7));
    uVar2 = 0;
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 68)), s_E9040829_adxf_is_NULL_ADXF_G_262646(*ar4,iVar3,ar6,ar7));
    ar5[3] = iVar1;
    iVar1 = ar5[3] + 0x7ff >> 0xb;
    if (ar5[0x15] != 0) {
      iVar1 = ar5[0x15];
      ar5[3] = iVar1 << 0xb;
      ar6 = 0;
      iVar3 = ar5[0x14];
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c262554(*ar4,iVar3,0,ar7));
    }
    if ((*ar5 < 0xb) && (-1 < *ar5)) {
                    
      ar5[2] = ar4[4];
    }
    else {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), malloc_thunk(ar5[3] + 0x800,iVar3,ar6,ar7));
      ar5[2] = iVar3;
      if (ar5[2] == 0) {
        (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02049c(ar4,ar5,ar6,ar7));
        return 0;
      }
    }
    iVar3 = ar5[2];
    iVar1 = (vsp = ((unsigned long)(fr0_ - 68)), s_E9040816_adxf_is_NULL_ADXF_R_26231a(*ar4,iVar1,iVar3,ar7));
    if (iVar1 < 0) {
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02049c(ar4,ar5,iVar3,ar7));
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

__asm__(".globl FUN_8c0202c0\n.set FUN_8c0202c0, FUN_8c0202c0_def\n");

}
