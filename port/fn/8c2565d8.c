#include "../decls.h"
uint FUN_8c2565d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  int iVar1;
  uint uVar2;
  uint unaff_r8;
  uint unaff_r11;
  uint *a4;
  undefined4 in_PR;
  
  for (; unaff_r11 < DAT_8c277b0c; unaff_r11 = unaff_r11 + 1) {
    a4 = (uint *)(DAT_8c277b08 + ar4);
    if ((a4[4] & unaff_r8) != 0) {
      iVar1 = FUN_8c25a1ee(a4[6] >> 0x10 & 0xff00,ar5,ar6,ar7);
      FUN_8c2362de(a4[5],ar5,ar6,ar7,in_PR);
      if (iVar1 == 1) {
        ar6 = 0;
        ar5 = 1;
        FUN_8c25a674(*a4,1,0,ar7,in_PR);
      }
      else {
        uVar2 = a4[4];
        a4[4] = uVar2 & 0xfffffffe;
        if ((uVar2 & 0xfffffffe) == 0) {
          FUN_8c25a49e(a4,ar5,ar6,ar7);
        }
      }
    }
    ain0 = *a4;
    if ((ain0 != 0xffffffff) && (ain0 = a4[4], (ain0 & 3) == 0)) {
      ain0 = FUN_8c25a49e(a4,ar5,ar6,ar7);
    }
    ar4 = ar4 + 0x44;
  }
  return ain0;
}

__asm__(".globl _FUN_8c2565d8\n.set _FUN_8c2565d8, _FUN_8c2565d8_def\n");
