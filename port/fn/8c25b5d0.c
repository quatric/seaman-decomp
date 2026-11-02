#include "../decls.h"
undefined4 FUN_8c25b5d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  if (ar4 != 0) {
                    
    *(undefined4 *)(ar4 + 0x30) = *(undefined4 *)(ar4 + 0x30);
                    
    *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)(ar4 + 0x34);
                    
    *(undefined4 *)(ar4 + 0x38) = *(undefined4 *)(ar4 + 0x38);
                    
    *(undefined4 *)(ar4 + 0x3c) = *(undefined4 *)(ar4 + 0x3c);
    return 0x3c;
  }
  return ain0;
}

__asm__(".globl _FUN_8c25b5d0\n.set _FUN_8c25b5d0, _FUN_8c25b5d0_def\n");
