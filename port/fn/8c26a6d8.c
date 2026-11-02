#include "../decls.h"
int s_E1241_sdSysFlushHostCmd_retu_26a6d8_def
              (undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 in_PR;
  
  ar4_00 = FUN_8c2688b4(ar4,ar5,ar6,ar7);
  if ((ar4_00 != 0) && (ar4_00 != 0xb000003)) {
    ar4_00 = debug_printf(ar4_00,ar5,ar6,ar7,s_E1241_sdSysFlushHostCmd_return_e_8c273678,in_PR);
  }
  return ar4_00;
}

__asm__(".globl _s_E1241_sdSysFlushHostCmd_retu_26a6d8\n.set _s_E1241_sdSysFlushHostCmd_retu_26a6d8, _s_E1241_sdSysFlushHostCmd_retu_26a6d8_def\n");
