#include "../decls.h"
undefined4 FUN_8c25ce48_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  
  fVar2 = *ar4;
  fVar1 = ar4[1];
  fVar4 = ar4[2];
  lVar3 = (ulonglong)(uint)fVar4 << 0x20;
                    
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + 0.0 + fVar4 * fVar4;
  fVar4 = 1.0 / SQRT((float)lVar3);
  ar4[2] = (float)((ulonglong)lVar3 >> 0x20) * fVar4;
  ar4[1] = fVar1 * fVar4;
  *ar4 = fVar2 * fVar4;
  return ain0;
}

__asm__(".globl _FUN_8c25ce48\n.set _FUN_8c25ce48, _FUN_8c25ce48_def\n");
