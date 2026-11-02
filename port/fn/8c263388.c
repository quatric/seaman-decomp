#include "../decls.h"
undefined4
s_E8101212_can_t_open_fad_d_ns_26338a_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  undefined4 ar6_00;
  
  iVar1 = ar5;
  ar6_00 = ar6;
  a4 = FUN_8c1f39ac(ar4,ar5,ar6,ar7);
  if (a4 == 0) {
    FUN_8c25ece6(0,iVar1,ar6_00,ar7,s_E8101212__can_t_open_fad__d__nsc_8c272f90,ar4);
    return 0;
  }
  iVar1 = FUN_8c26325e(a4,0,ar5 << 0xb,ar6);
  if (iVar1 != 0) {
    FUN_8c0143c0(iVar1 + 0x40,s_OpenRange_8c272fc8,0x20,ar6);
  }
  return iVar1;
}

__asm__(".globl _s_E8101212_can_t_open_fad_d_ns_26338a\n.set _s_E8101212_can_t_open_fad_d_ns_26338a, _s_E8101212_can_t_open_fad_d_ns_26338a_def\n");
