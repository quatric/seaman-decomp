#include "../decls.h"
int s_E1209_mwRnaPause_Time_out_of_26908e_def
              (undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int iVar1;
  undefined4 ar4_00;
  int iVar2;
  undefined4 s4;
  
  DAT_8c2785d4 = 0;
  for (iVar2 = 0; ar4_00 = 0, s4 = ar4, iVar2 < 200; iVar2 = iVar2 + 1) {
    ain0 = FUN_8c268e1a(ar4,ar5,ar6,ar7);
    ar4_00 = ar4;
    if (ain0 == 1) break;
    iVar1 = 5000;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    DAT_8c2785d4 = DAT_8c2785d4 + 1;
    ar4 = s4;
  }
  if (iVar2 == 200) {
    ain0 = debug_printf(ar4_00,ar5,ar6,ar7,s_E1209_mwRnaPause_Time_out_of_wai_8c2732ec,s4);
  }
  return ain0;
}

__asm__(".globl _s_E1209_mwRnaPause_Time_out_of_26908e\n.set _s_E1209_mwRnaPause_Time_out_of_26908e, _s_E1209_mwRnaPause_Time_out_of_26908e_def\n");
