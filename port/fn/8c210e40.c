#include "../decls.h"
int FUN_8c210e40_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint a6;
  uint a7;
  int iVar1;
  uint uVar2;
  uint a5;
  
  iVar1 = 0;
  _DAT_8c4aa1f4 = 2;
  _DAT_8c4aa1a0 = ar4;
  _DAT_8c4aa1f8 = ar5;
  if (DAT_8c2758e8 == 0x80000000) {
    DAT_8c2758ec = 1;
    _DAT_8c4a9f10 = _DAT_8c4a9f08;
    *(undefined4 *)(&DAT_8c4a9ef8 + _DAT_8c4a9f08 * 4) = 2;
    _DAT_8c4a9db8 = 0;
    _DAT_8c4a9f20 = 1;
    uVar2 = *(uint *)(ar4 + 0x10) & 1;
    a5 = *(uint *)(ar4 + 0x10) & 2;
    a6 = *(uint *)(ar4 + 0x10) & 4;
    a7 = *(uint *)(ar4 + 0x10) & 8;
    FUN_8c211730(uVar2,a5,a6,a7);
    uVar2 = FUN_8c211876(uVar2,a5,a6,a7);
    FUN_8c211ba4(uVar2,a5,a6,a7);
    _DAT_8c4aa1f8 = _DAT_8c4aa1f8 >> 1;
    sh4_dmac_202c60(0xff,_DAT_8c4aa1b8,_DAT_8c4aa1c4,a7);
    if (0x200000U - _DAT_8c4aa200 < _DAT_8c4aa1f8) {
      _DAT_8c4aa1f8 = 0x200000U - _DAT_8c4aa200;
    }
    iVar1 = FUN_8c203820(_DAT_8c4aa1f8,&DAT_8c4aa280,&DAT_8c4aa284,a7);
    if (iVar1 == 0) {
      _DAT_8c4aa004 = _DAT_8c4aa1f8;
      FUN_8c25d7c6(_DAT_8c4a9c18 >> 7,_DAT_8c4a9c1c >> 7,_DAT_8c4a9c20 >> 7,_DAT_8c4a9c24 >> 7,
                   uVar2 & ~_DAT_8c4aa1b8);
      _DAT_8c4a9db8 = 1;
    }
  }
  else {
    DAT_8c2758e8 = DAT_8c2758e8 | 0x100;
    if (DAT_8c2758e8 == 0xb00) {
      DAT_8c2758e8 = 0x80000000;
      iVar1 = FUN_8c211f40(2,&DAT_8c2758e8,2,0x80000000);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c210e40\n.set _FUN_8c210e40, _FUN_8c210e40_def\n");
