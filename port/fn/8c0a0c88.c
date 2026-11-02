#include "../decls.h"
int FUN_8c0a0c88_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 in_stack_00000000;
  undefined1 auStack_c8 [108];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  iVar4 = 1;
  puVar2 = ar6;
  puVar3 = ar7;
  FUN_8c03f480(ar5,FUN_8c03f480,ar6,ar7,auStack_44);
  Vec3_ctor_copy(auStack_24,auStack_44,puVar2,puVar3);
  ar5_00 = 0xffffffff;
  Vec3_dtor(auStack_44,0xffffffff,puVar2,puVar3);
  Vec3_ctor_zero(auStack_34,ar5_00,puVar2,puVar3);
  if (*(int *)(ar4 + 0x178) == 1) {
    Vec3_assign(auStack_24,ar4 + 0x168,puVar2,puVar3);
  }
  *(undefined4 *)(ar4 + 0x128) = 1;
  iVar1 = *(int *)(ar4 + 0x124);
  if ((iVar1 < 0xf) && (1 < iVar1)) {
                    
    switch(iVar1) {
    case 2:
      FUN_8c03f460(auStack_5c,ar7,puVar2,puVar3);
      puVar2 = auStack_5c;
      puVar3 = ar6;
      iVar4 = FUN_8c0a14d8(ar4,in_stack_00000000,puVar2,ar6);
      free_if_nonnull_wrap_102790(auStack_5c,0xffffffff,puVar2,puVar3);
      break;
    case 3:
      puVar2 = ar7;
      puVar3 = ar6;
      iVar4 = FUN_8c0329ac(ar4,auStack_24,ar7,ar6);
      if (iVar4 == 0) {
        puVar2 = ar7;
        puVar3 = ar6;
        FUN_8c032788(ar4,auStack_24,ar7,ar6);
      }
      FUN_8c03f460(auStack_50,ar7,puVar2,puVar3);
      puVar3 = auStack_50;
      puVar2 = auStack_24;
      iVar4 = FUN_8c0a1828(ar4,in_stack_00000000,puVar2,puVar3);
      free_if_nonnull_wrap_102790(auStack_50,0xffffffff,puVar2,puVar3);
    }
  }
  if ((*(int *)(ar4 + 0x178) == 1) && (iVar4 == 0)) {
    FUN_8c031ce8(ar4,ar7,ar6,puVar3);
    Vec3_assign(ar4 + 0x168,auStack_c8,ar6,puVar3);
    Vec3_dtor(auStack_c8,0xffffffff,ar6,puVar3);
    puVar2 = ar6;
  }
  Vec3_dtor(auStack_34,0xffffffff,puVar2,puVar3);
  Vec3_dtor(auStack_24,0xffffffff,puVar2,puVar3);
  return iVar4;
}

__asm__(".globl _FUN_8c0a0c88\n.set _FUN_8c0a0c88, _FUN_8c0a0c88_def\n");
