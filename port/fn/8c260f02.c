#include "../decls.h"
undefined4
FUN_8c260f02_def(ushort *ar4,int ar5,uint *ar6,ushort *ar7,ushort *s0,uint *s4,uint *s8,uint *s12,
            uint *s16)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *ar7 = 0;
  uVar2 = 0xff00;
  if (ar5 < 0x30) {
    return 0xffffffff;
  }
  if ((ushort)(*ar4 >> 8 | *ar4 << 8 & (ushort)0xff00) == 0x8000) {
    if ((int)((int)(short)ar4[1] >> 8 & 0xffU | (int)(short)ar4[1] << 8 & 0xff00) < 0x2c) {
      return 0xffffffff;
    }
    *ar6 = (int)(short)ar4[10] >> 8 & 0xffU | (int)(short)ar4[10] << 8 & 0xff00;
    uVar1 = (int)0xffffff00;
    *ar7 = ar4[0xb] >> 8 | ar4[0xb] << 8 & (int)0xffffff00;
    uVar3 = 0xff0000;
    if (*ar7 == 1) {
      *s0 = ar4[0xd] >> 8 | ar4[0xd] << 8 & uVar1;
      uVar4 = *(uint *)(ar4 + 0xe);
      *s4 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      uVar4 = *(uint *)(ar4 + 0x10);
      *s8 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      uVar4 = *(uint *)(ar4 + 0x12);
      *s12 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      uVar4 = *(uint *)(ar4 + 0x14);
      *s16 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      return 0;
    }
  }
  return 0xfffffffe;
}

__asm__(".globl _FUN_8c260f02\n.set _FUN_8c260f02, _FUN_8c260f02_def\n");
