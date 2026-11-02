#include "../decls.h"
undefined4
FUN_8c260390_def(int ar4,undefined4 ar5,short *ar6,undefined1 *ar7,undefined1 *s0,char *s4,char *s8,
            uint *s12,int *s16,undefined4 *s20,undefined2 *s24)

{
  char cVar1;
  int *piVar2;
  
  *ar6 = (ushort)*(byte *)(ar4 + 7) << 4;
  *s8 = (*(byte *)(ar4 + 9) & 3) + 1;
  *s12 = (uint)*(ushort *)(ar4 + 0x2a);
  cVar1 = *(char *)(ar4 + 8);
  piVar2 = (int *)(ar4 + 0xc);
  if (cVar1 == '\0') {
    *s0 = 0x10;
    *s4 = *s8 << 1;
    *s20 = 1;
    *s16 = (int)(*piVar2 + (uint)(*piVar2 < 0)) >> 1;
    *s24 = 0;
  }
  else if (cVar1 == '\x01') {
    *s0 = 8;
    *s4 = *s8;
    *s20 = 1;
    *s16 = *piVar2;
    *s24 = 1;
  }
  else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    *s0 = 4;
    *s4 = *s8;
    *s20 = 2;
    *s16 = *piVar2 << 1;
    *s24 = 2;
  }
  *s4 = '\x02';
  *s20 = 1;
  *s16 = (int)(*piVar2 + (uint)(*piVar2 < 0)) >> 1;
  *s0 = 0x10;
  *ar7 = 0xff;
  return 0;
}

__asm__(".globl _FUN_8c260390\n.set _FUN_8c260390, _FUN_8c260390_def\n");
