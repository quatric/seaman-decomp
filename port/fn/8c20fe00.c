#include "../decls.h"
undefined4 FUN_8c20fe00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  DAT_8c2757a8 = *(uint *)(ar4 + 0x90);
  DAT_8c2757ac = *(undefined4 *)(ar4 + 0x94);
  _DAT_8c4aa13c = *(uint *)(ar4 + 0x98);
  if ((DAT_8c2757a8 >> 0x18 & 7) == 0) {
    _DAT_8c4aa13c = _DAT_8c4aa13c & 0x3ffffff | 0x20000000;
  }
  _DAT_8c4aa140 = *(undefined4 *)(ar4 + 0x9c);
  _DAT_8c4aa148 = *(float *)(ar4 + 0x70);
  _DAT_8c4aa14c = *(float *)(ar4 + 0x74);
  _DAT_8c4aa150 = *(float *)(ar4 + 0x78);
  _DAT_8c4aa154 = *(float *)(ar4 + 0x7c);
  _DAT_8c4aa158 = *(float *)(ar4 + 0x80);
  _DAT_8c4aa15c = *(float *)(ar4 + 0x84);
  _DAT_8c4aa160 = *(float *)(ar4 + 0x88);
  _DAT_8c4aa164 = *(float *)(ar4 + 0x8c);
  _DAT_8c4aa168 = *(undefined4 *)(ar4 + 0xa0);
  _DAT_8c4aa198 =
       *(int *)(&DAT_8c2757e8 +
               ((DAT_8c2757a8 & 0x20000000) >> 0x18 | (DAT_8c2757a8 & 0x1000000) >> 0x14 |
                (DAT_8c2757a8 & 0x40) >> 3 | (DAT_8c2757a8 & 0x20) >> 3 | (DAT_8c2757a8 & 0x10) >> 3
               | (DAT_8c2757a8 & 4) >> 2) * 4);
  _DAT_8c4aa27c = (DAT_8c2757a8 & 0x7000000) >> 0x18;
  _DAT_8c4aa128 = DAT_8c2757a8;
  _DAT_8c4aa138 = DAT_8c2757ac;
  if ((_DAT_8c4aa27c & 1) != 0) {
    puVar2 = &DAT_8c2757c8;
    DAT_8c2757ac = _DAT_8c4aa168;
    goto LAB_8c2100aa;
  }
  DAT_8c2757b0 = _DAT_8c4aa13c;
  puVar2 = &DAT_8c2757b8;
  DAT_8c2757b4 = _DAT_8c4aa140;
  if (_DAT_8c4aa198 == 0) {
    puVar2 = &DAT_8c2757c8;
    goto LAB_8c2100aa;
  }
  if (_DAT_8c4aa198 == 1) {
    puVar2 = &DAT_8c2757c0;
    puVar1 = (undefined4 *)&DAT_8c4aa154;
    DAT_8c2757b8 = _DAT_8c4aa148;
    DAT_8c2757bc = _DAT_8c4aa14c;
    DAT_8c2757c0 = _DAT_8c4aa150;
LAB_8c20ffb2:
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar1;
  }
  else {
    if (_DAT_8c4aa198 == 2) {
      puVar2 = &DAT_8c2757e0;
      puVar1 = (undefined4 *)&DAT_8c4aa164;
      DAT_8c2757c8 = _DAT_8c4aa148;
      DAT_8c2757cc = _DAT_8c4aa14c;
      DAT_8c2757d0 = _DAT_8c4aa150;
      DAT_8c2757d4 = _DAT_8c4aa154;
      DAT_8c2757d8 = _DAT_8c4aa158;
      DAT_8c2757dc = _DAT_8c4aa15c;
      DAT_8c2757e0 = _DAT_8c4aa160;
      goto LAB_8c20ffb2;
    }
    if (_DAT_8c4aa198 == 3) {
      DAT_8c2757b8 = _DAT_8c4aa16c;
      DAT_8c2757bc = _DAT_8c4aa170;
      puVar2 = &DAT_8c2757c8;
      goto LAB_8c2100aa;
    }
    if (_DAT_8c4aa198 != 4) {
      if (_DAT_8c4aa198 == 0x10) {
        DAT_8c2757b8 = (float)((int)(_DAT_8c4aa148 * 255.0) << 0x18 |
                               (int)(_DAT_8c4aa14c * 255.0) << 0x10 |
                               (int)(_DAT_8c4aa150 * 255.0) << 8 | (int)(_DAT_8c4aa154 * 255.0));
        DAT_8c2757bc = (float)((int)(_DAT_8c4aa158 * 255.0) << 0x18 |
                               (int)(_DAT_8c4aa15c * 255.0) << 0x10 |
                               (int)(_DAT_8c4aa160 * 255.0) << 8 | (int)(_DAT_8c4aa164 * 255.0));
        puVar2 = &DAT_8c2757c8;
      }
      goto LAB_8c2100aa;
    }
    DAT_8c2757b8 = _DAT_8c4aa16c;
    DAT_8c2757bc = _DAT_8c4aa170;
    DAT_8c2757d8 = _DAT_8c4aa178;
    DAT_8c2757dc = _DAT_8c4aa17c;
    DAT_8c2757e0 = _DAT_8c4aa180;
    puVar2 = &DAT_8c2757e4;
    DAT_8c2757e4 = _DAT_8c4aa184;
    DAT_8c2757c8 = _DAT_8c4aa148;
    DAT_8c2757cc = _DAT_8c4aa14c;
    DAT_8c2757d0 = _DAT_8c4aa150;
    DAT_8c2757d4 = _DAT_8c4aa154;
  }
  puVar2 = puVar2 + 1;
LAB_8c2100aa:
  _DAT_8c4aa208 = _DAT_8c4aa27c;
  _DAT_8c4aa20c = puVar2 + 0x1cf62a16;
  return 0;
}

__asm__(".globl _FUN_8c20fe00\n.set _FUN_8c20fe00, _FUN_8c20fe00_def\n");
