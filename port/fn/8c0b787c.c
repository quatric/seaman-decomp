#include "../decls.h"
undefined4 FUN_8c0b787c_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 & 1) == 1) {
    s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,3,0,s_SM2000US_USR_8c13c026);
  }
  else if ((ar4 & 2) == 2) {
    s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,3,0,s_SM2000US_INC_8c13c033);
  }
  else {
    if ((ar4 & 4) != 4) {
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,0xb,0,&DAT_8c13c025);
      return 1;
    }
    s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,3,0,s_SM2000US_INC_8c13c033);
  }
  return 0;
}

__asm__(".globl _FUN_8c0b787c\n.set _FUN_8c0b787c, _FUN_8c0b787c_def\n");
