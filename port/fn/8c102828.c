#include "../decls.h"
undefined4 report_error_message_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int ar6_00;
  
  ar6_00 = ar6;
  log_message(ar4,ar5,ar6,ar7);
  if (ar6 == 0) {
    game_shutdown_a(ar4,ar5,ar6_00,ar7);
    game_shutdown_b(ar4,ar5,ar6_00,ar7);
  }
  return 0;
}

__asm__(".globl _report_error_message\n.set _report_error_message, _report_error_message_def\n");
