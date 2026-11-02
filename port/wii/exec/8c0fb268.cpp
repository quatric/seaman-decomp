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
undefined4 FUN_8c0fb268_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fb268");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar4_00;
  int iVar3;
  
  iVar3 = ar4[0x22];
  ar4[0x2d] = 0xffffffff;
  *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x40) + 0x78) = 1;
  if (*(char *)(unsigned)(iVar3 + 0x48) == '#') {
    ar4[0x23] = 0;
  }
  else if (*(char *)(unsigned)(iVar3 + 0x48) == '@') {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4,ar5,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c(uVar1,*(le<undefined4>* )(unsigned)(iVar3 + 0x4c),ar6,ar7));
    ar4[0x23] = uVar1;
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0fcd2c(ar4,iVar3 + 0x48,ar6,ar7));
    ar4[0x23] = uVar1;
    if ((int)ar4[0x23] < 0) {
      ar4[0x23] = 0;
    }
    if (*(le<int>* )(unsigned)(iVar3 + 0x4c) <= (int)ar4[0x23]) {
      ar4[0x23] = *(le<int>* )(unsigned)(iVar3 + 0x4c) + -1;
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0faf30(ar4[0x23] * 0x24 + iVar3 + 0x54,((undefined1 *)(unsigned)0x8c141dec),ar6,ar7));
  if (iVar2 == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), s_ERROR_0fb0de(ar4,iVar3 + 0x28,ar6,ar7));
    return uVar1;
  }
  iVar3 = ar4[0x23] * 0x24 + iVar3 + 0x54;
  ar4_00 = 0x8c2b59d0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), pack_acquire_entry_handle(0x8c2b59d0,iVar3,ar6,ar7));
  ar4[0x2d] = uVar1;
  if (-1 < (int)ar4[0x2d]) goto LAB_8c0fb436;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4_00,iVar3,ar6,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c(uVar1,5,ar6,ar7));
  if ((iVar3 < 5) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(unsigned)0x8c141df2),ar6,ar7));
      ar4[0x2d] = uVar1;
      break;
    case 1:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(unsigned)0x8c141df8),ar6,ar7));
      ar4[0x2d] = uVar1;
      break;
    case 2:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(unsigned)0x8c141dfe),ar6,ar7));
      ar4[0x2d] = uVar1;
      break;
    case 3:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(unsigned)0x8c141e04),ar6,ar7));
      ar4[0x2d] = uVar1;
      break;
    case 4:
      goto switchD_8c0fb390_caseD_4;
    }
  }
  else {
switchD_8c0fb390_caseD_4:
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(unsigned)0x8c141e0a),ar6,ar7));
    ar4[0x2d] = uVar1;
  }
  if ((int)ar4[0x2d] < 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), s_ERROR_0fb0de(ar4,ar4[0x22] + 0x28,ar6,ar7));
    return uVar1;
  }
LAB_8c0fb436:
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021d90(0x8c2b59d0,ar4[0x2d],*(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x40) + 0xc0),0));
  *ar4 = 7;
  return 7;
}

__asm__(".globl FUN_8c0fb268\n.set FUN_8c0fb268, FUN_8c0fb268_def\n");

}
