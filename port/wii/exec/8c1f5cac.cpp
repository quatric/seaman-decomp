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
undefined4
s_Lib_Handle_StartLib_Handle_E_1f5cac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Lib_Handle_StartLib_Handle_E_1f5cac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *a5;
  int unaff_r10 = 0;
  int a4;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c013ec0(ar4 + 0x30,((undefined1 *)(unsigned)0x8c26c744),ar6,ar7));
  if (iVar1 == 0) {
    iVar1 = 1;
    while( true ) {
      a5 = ((undefined1 *)(unsigned)0x8c26c744) + 0x10;
      a4 = iVar1 * 0x20 + unaff_r10 + 0x20;
      uVar2 = 0x10;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c013ec0(a4 + 0x10,((undefined1 *)(unsigned)0x8c26c744) + 0x10,0x10,ar7));
      if (iVar3 == 0) break;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f5bb4(a4,a5,uVar2,ar7));
      iVar1 = iVar1 + 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl s_Lib_Handle_StartLib_Handle_E_1f5cac\n.set s_Lib_Handle_StartLib_Handle_E_1f5cac, s_Lib_Handle_StartLib_Handle_E_1f5cac_def\n");

}
