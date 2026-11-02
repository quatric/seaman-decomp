#include "../decls.h"
undefined4 FUN_8c255d6c_def(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  if (ar4 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(ar5 + 0xc);
    uVar9 = *(undefined4 *)(ar5 + 0x1c);
                    
                    
    uVar2 = *(undefined4 *)(ar5 + 0x2c);
    uVar10 = *(undefined4 *)(ar5 + 0x3c);
                    
                    
    uVar3 = *(undefined4 *)(ar5 + 0xc);
    uVar11 = *(undefined4 *)(ar5 + 0x1c);
                    
                    
    uVar4 = *(undefined4 *)(ar5 + 0x2c);
    uVar12 = *(undefined4 *)(ar5 + 0x3c);
                    
                    
    uVar5 = *(undefined4 *)(ar5 + 0xc);
    uVar13 = *(undefined4 *)(ar5 + 0x1c);
                    
                    
    uVar6 = *(undefined4 *)(ar5 + 0x2c);
    uVar14 = *(undefined4 *)(ar5 + 0x3c);
                    
                    
    uVar7 = *(undefined4 *)(ar5 + 0xc);
    uVar15 = *(undefined4 *)(ar5 + 0x1c);
                    
                    
    uVar8 = *(undefined4 *)(ar5 + 0x2c);
                    
                    
    ar4[0xf] = *(undefined4 *)(ar5 + 0x3c);
    ar4[0xe] = uVar14;
    ar4[0xb] = uVar8;
    ar4[10] = uVar6;
    ar4[7] = uVar15;
    ar4[6] = uVar13;
    ar4[3] = uVar7;
    ar4[2] = uVar5;
    ar4[0xd] = uVar12;
    ar4[0xc] = uVar10;
    ar4[9] = uVar4;
    ar4[8] = uVar2;
    ar4[5] = uVar11;
    ar4[4] = uVar9;
    ar4[1] = uVar3;
    *ar4 = uVar1;
    return 4;
  }
                    
                    
  return ain0;
}

__asm__(".globl _FUN_8c255d6c\n.set _FUN_8c255d6c, _FUN_8c255d6c_def\n");
