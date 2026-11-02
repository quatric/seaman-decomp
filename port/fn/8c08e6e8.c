#include "../decls.h"
int FUN_8c08e6e8_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 in_dr0;
  char cVar5;
  undefined4 in_stack_00000000;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_0000000c;
  int *in_stack_00000018;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [92];
  int iStack_1c;
  undefined8 uStack_18;
  
  cVar5 = '\0';
  iVar4 = 1;
  FUN_8c03f480(in_stack_00000000,ar5,ar6,ar7,auStack_88);
  Vec3_ctor_copy(&iStack_1c,auStack_88,ar6,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_88,0xffffffff,ar6,ar7);
  FUN_8c08e9b0(auStack_78,uVar3,ar6,ar7);
  iVar2 = *(int *)(ar4 + 0x124);
  if ((iVar2 < 0xc) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      ar7 = 0;
      ar6 = (int *)0xffffffff;
      uVar3 = 5;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
      iVar4 = 0;
      break;
    case 1:
      *(undefined4 *)(ar4 + 0x214) = 0;
      iVar4 = FUN_8c091d40(ar4,*in_stack_00000004,in_stack_00000018,ar7);
      ar6 = in_stack_00000018;
      break;
    default:
      ar6 = (int *)in_stack_00000004[1];
      iVar4 = FUN_8c08fd38(ar4,*in_stack_00000004,ar6,in_stack_0000000c);
      ar7 = in_stack_0000000c;
      if (iVar4 == 0) {
        *(undefined4 *)(ar4 + 0x40) = 5;
        *(undefined4 *)(ar4 + 0x134) = 0;
        *(undefined4 *)(ar4 + 300) = 0;
      }
      break;
    case 3:
      ar6 = (int *)in_stack_00000004[1];
      iVar4 = FUN_8c090bc4(ar4,*in_stack_00000004,ar6,in_stack_0000000c);
      ar7 = in_stack_0000000c;
      break;
    case 4:
      (**(code **)(*in_stack_00000018 + 0x128))(in_stack_00000018,*in_stack_00000004,ar6,ar7);
      uVar1 = in_dr0;
      if (cVar5 == '\0') {
        uStack_18 = CONCAT44((*(uint*)((uchar*)&uStack_18+4)),(int)((ulonglong)in_dr0 >> 0x20));
        uVar1 = uStack_18;
      }
      uStack_18 = uVar1;
      ar6 = &iStack_1c;
      iVar4 = FUN_8c091924(ar4,*in_stack_00000004,ar6,ar7);
      break;
    case 8:
      *(undefined4 *)(ar4 + 0x214) = 0;
      iVar4 = FUN_8c097e0c(ar4,*in_stack_00000004,ar6,ar7);
      ar6 = (int *)*in_stack_00000004;
      FUN_8c031c74(ar4,&iStack_1c,ar6,ar7);
    }
  }
  FUN_8c08e93c(auStack_78,0xffffffff,ar6,ar7);
  Vec3_dtor(&iStack_1c,0xffffffff,ar6,ar7);
  return iVar4;
}

__asm__(".globl _FUN_8c08e6e8\n.set _FUN_8c08e6e8, _FUN_8c08e6e8_def\n");
