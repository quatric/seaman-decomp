#include "../decls.h"
int FUN_8c104f5c_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int in_stack_ffffffd4;
  
  cVar3 = '\0';
  if (*(int *)(ar4 + 0x3c) == 0) {
    get_field_124_027930(*(undefined4 *)(ar6 + 8),ar5,ar6,ar7);
    uVar2 = ar5;
    iVar1 = ar6;
    s_GRATIFIC_EAT_1063b2(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + 1;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c1eed94 + *(int *)(ar4 + 0xc) * 4 + *(int *)(ar4 + 4) * 0xc);
    if ((*(int *)(ar4 + 0x40) == 0x22) || (*(int *)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(ar4 + 0x40) = 0;
      *(undefined4 *)(ar4 + 8) = 0;
      if (*(int *)(ar4 + 4) == 1) {
        *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + -1;
        ar5 = uVar2;
        ar6 = iVar1;
        in_stack_ffffffd4 = ar4;
      }
      else {
        if (cVar3 == '\0') {
          *(undefined4 *)(ar4 + 0x70) = 0xc7c35000;
        }
        else {
          *(undefined8 *)(ar4 + 0x70) = 0x8c02f404c7c35000;
        }
        *(undefined4 *)(ar4 + 0xc) = 0;
        ar5 = 0;
        FUN_8c02f404(ar4,0,iVar1,ar7,in_stack_ffffffd4);
        ar6 = iVar1;
      }
    }
    else {
      FUN_8c105094(ar4,ar5,ar6,ar7);
    }
  }
  if (*(int *)(ar4 + 0x3c) == 2) {
    ar5 = 2;
    FUN_8c02f404(ar4,2,ar6,ar7,in_stack_ffffffd4);
  }
  iVar1 = *(int *)(ar4 + 0x38);
  if (iVar1 == 2) {
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 8) = 0;
    *(undefined4 *)(ar4 + 0xc) = 0;
    iVar1 = 0;
    if (*(int *)(ar4 + 0x6c) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
      iVar1 = 0x6c;
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c104f5c\n.set _FUN_8c104f5c, _FUN_8c104f5c_def\n");
