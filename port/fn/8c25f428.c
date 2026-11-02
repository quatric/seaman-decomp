#include "../decls.h"
undefined4 FUN_8c25f428_def(byte *ar4,int ar5,uint *ar6,uint *ar7,undefined4 *s0,undefined4 *s4,int *s8)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)ar4[1] << 8 | (uint)ar4[2] << 0x10 | (uint)ar4[3] << 0x18 | (uint)*ar4;
  if ((uVar4 != 0x64732e) && (uVar4 != 0x646e732e)) {
    return 0;
  }
  iVar3 = CONCAT13(ar4[4],CONCAT12(ar4[5],CONCAT11(ar4[6],ar4[7])));
  if (ar5 < iVar3) {
    return 0;
  }
  uVar4 = CONCAT13(ar4[8],CONCAT12(ar4[9],CONCAT11(ar4[10],ar4[0xb])));
  iVar2 = CONCAT13(ar4[0xc],CONCAT12(ar4[0xd],CONCAT11(ar4[0xe],ar4[0xf])));
  if (iVar2 == 1) {
    *s8 = 2;
LAB_8c25f55c:
    *s0 = 8;
  }
  else {
    if (iVar2 == 2) {
      *s8 = 1;
      goto LAB_8c25f55c;
    }
    if (iVar2 != 3) {
      return 0;
    }
    *s8 = 0;
    *s0 = 0x10;
  }
  *ar6 = (uint)ar4[0x13] |
         (int)((uint)ar4[0x11] << 8 | (uint)ar4[0x12] << 0x10 | (uint)ar4[0x13] << 0x18 |
              (uint)ar4[0x10]) >> 8 & 0xff00U | (uint)ar4[0x11] << 0x10 | (uint)ar4[0x10] << 0x18;
  *ar7 = (uint)ar4[0x17] |
         (int)((uint)ar4[0x15] << 8 | (uint)ar4[0x16] << 0x10 | (uint)ar4[0x17] << 0x18 |
              (uint)ar4[0x14]) >> 8 & 0xff00U | (uint)ar4[0x15] << 0x10 | (uint)ar4[0x14] << 0x18;
  if ((*s8 == 2) || (*s8 == 1)) {
    uVar1 = libgcc_divide_helper_01051c(uVar4,*ar7);
  }
  else {
    if (*s8 != 0) {
      *s4 = 0x7fff0000;
      goto LAB_8c25f636;
    }
    uVar1 = libgcc_divide_helper_01051c(uVar4 >> 1,*ar7);
  }
  *s4 = uVar1;
LAB_8c25f636:
  return ar4 + iVar3;
}

__asm__(".globl _FUN_8c25f428\n.set _FUN_8c25f428, _FUN_8c25f428_def\n");
