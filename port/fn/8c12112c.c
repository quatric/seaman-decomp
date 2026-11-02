#include "../decls.h"
undefined4 FUN_8c12112c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *a4;
  int in_r0;
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_r13;
  
  iVar3 = *(int *)(in_r0 + unaff_r13);
  a4 = *(undefined4 **)(0x284 + unaff_r13);
  while (a4 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)a4[4];
    (**(code **)(iVar3 + 0x18))(*a4,0xf4 + unaff_r13,ar6,ar7);
    (**(code **)(iVar3 + 0x18))(a4[2],0xf4 + unaff_r13,ar6,ar7);
    (**(code **)(iVar3 + 0x18))(a4,0xf4 + unaff_r13,ar6,ar7);
    a4 = puVar2;
  }
  (**(code **)(iVar3 + 0x18))
            (*(undefined4 *)(0x2a8 + unaff_r13),0xf4 + unaff_r13,ar6,ar7);
                    
                    
  uVar1 = (**(code **)(iVar3 + 0x18))
                    (*(undefined4 *)(0x29c + unaff_r13),0xf4 + unaff_r13);
  return uVar1;
}

__asm__(".globl _FUN_8c12112c\n.set _FUN_8c12112c, _FUN_8c12112c_def\n");
