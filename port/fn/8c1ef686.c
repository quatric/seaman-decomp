#include "../decls.h"
undefined4 FUN_8c1ef686_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 a7;
  
  puVar3 = 0x8c470910;
  puVar2 = (&FUN_8c1fa244);
  puVar1 = (&DATA_8c26bf98);
  uVar7 = (*(code *)(&FUN_8c1fa244))
                    ((int)0x900,(&DATA_8c1ef4e4),*(undefined4 *)(&DATA_8c26bf98),ar7);
  puVar4 = (&DATA_8c1ef4f0);
  iVar8 = (int)0xa00;
  *puVar3 = uVar7;
  uVar7 = (*(code *)puVar2)(iVar8,puVar4,*(undefined4 *)(puVar1 + 4),0);
  puVar4 = (&DATA_8c1ef5ca);
  iVar8 = (int)0xa00;
  puVar3[1] = uVar7;
  uVar7 = (*(code *)puVar2)(iVar8,puVar4,*(undefined4 *)(puVar1 + 8),0);
  puVar4 = (&DATA_8c1ef5d2);
  a7 = 0;
  iVar8 = (int)0xa20;
  puVar3[2] = uVar7;
  uVar7 = (*(code *)puVar2)(iVar8,puVar4,*(undefined4 *)(puVar1 + 0xc),0);
  puVar5 = 0x8c470c18;
  puVar3[3] = uVar7;
  puVar6 = 0x8c470e68;
  puVar3 = 0x8c470e64;
  *puVar5 = 0;
  *puVar3 = 0;
  *puVar6 = 0;
  puVar1 = (&memset);
  *(undefined4 *)0x8c470e6c = 0;
  *(undefined4 *)0x8c470e70 = 0;
  *(undefined4 *)0x8c470e78 = 0;
  *(undefined4 *)0x8c470e74 = 0xffffffff;
  *(undefined4 *)0x8c470e8c = 0;
  *(undefined4 *)0x8c470e90 = 0;
  *(undefined4 *)0x8c470e94 = 0;
  (*(code *)puVar1)(0x8c470be0,0,0x38,a7);
  (*(code *)puVar1)(0x8c4709a0,0,(int)0x240,a7);
  (*(code *)puVar1)(0x8c470c20,0,(int)0x240,a7);
  uVar7 = (*(code *)puVar1)(0x8c470920,0,(int)0x80,a7);
  return uVar7;
}

__asm__(".globl _FUN_8c1ef686\n.set _FUN_8c1ef686, _FUN_8c1ef686_def\n");
