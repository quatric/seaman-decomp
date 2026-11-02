#include "../decls.h"
uint FUN_8c2565c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  int ain0_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *ar4_00;
  
  iVar3 = 0;
  for (uVar2 = 0; uVar2 < DAT_8c277b0c; uVar2 = uVar2 + 1) {
    ar4_00 = (uint *)(DAT_8c277b08 + iVar3);
    if ((ar4_00[4] & 1) != 0) {
      ain0_00 = FUN_8c25a1ee(ar4_00[6] >> 0x10 & 0xff00,ar5,ar6,ar7);
      FUN_8c2362de(ar4_00[5],ar5,ar6,ar7,ain0_00);
      if (ain0_00 == 1) {
        ar6 = 0;
        ar5 = 1;
        FUN_8c25a674(*ar4_00,1,0,ar7,1);
      }
      else {
        uVar1 = ar4_00[4];
        ar4_00[4] = uVar1 & 0xfffffffe;
        if ((uVar1 & 0xfffffffe) == 0) {
          FUN_8c25a49e(ar4_00,ar5,ar6,ar7);
        }
      }
    }
    ain0 = *ar4_00;
    if ((ain0 != 0xffffffff) && (ain0 = ar4_00[4], (ain0 & 3) == 0)) {
      ain0 = FUN_8c25a49e(ar4_00,ar5,ar6,ar7);
    }
    iVar3 = iVar3 + 0x44;
  }
  return ain0;
}

__asm__(".globl _FUN_8c2565c4\n.set _FUN_8c2565c4, _FUN_8c2565c4_def\n");
