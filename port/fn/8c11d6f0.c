#include "../decls.h"
uint FUN_8c11d6f0_def(int ar4,uint *ar5,uint ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 a5;
  uint uVar6;
  undefined4 auStack_64 [2];
  code *pcStack_5c;
  code *pcStack_58;
  
  puVar5 = ar5;
  uVar3 = ar6;
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  puVar1 = (&FUN_8c1204c4);
  if (iVar2 == 0) {
    if ((ar5 == (uint *)0x0) && (ar6 != 0)) {
      a5 = 0x13;
override_prt_8c11d780_7a4d7f16:
      uVar3 = (*(code *)puVar1)(ar4 + 0x48,a5,uVar3,ar7);
    }
    else {
      FUN_8c10ca2e(auStack_64,puVar5,uVar3,ar7);
      auStack_64[0] = **(undefined4 **)(0x104 + ar4);
      iVar2 = (*pcStack_5c)(auStack_64,puVar5,uVar3,ar7);
      iVar4 = (*pcStack_58)(auStack_64,puVar5,uVar3,ar7);
      uVar6 = 0;
      uVar3 = iVar2 + iVar4;
      puVar5 = ar5;
      if (ar6 != 0) {
        do {
          if (uVar3 <= *puVar5) {
            a5 = 0x19;
            goto override_prt_8c11d780_7a4d7f16;
          }
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 < ar6);
      }
      uVar3 = FUN_8c120348(ar4 + 0x48,0x19,ar5,ar6);
    }
    uVar3 = uVar3 & 0xff;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11d6f0\n.set _FUN_8c11d6f0, _FUN_8c11d6f0_def\n");
