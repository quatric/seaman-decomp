#include "../decls.h"
undefined4 FUN_8c02c030_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *ar6_00;
  int *ar5_00;
  undefined4 uVar3;
  undefined4 ar6_01;
  int ar5_01;
  undefined4 in_stack_ffffffb4;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar1 = get_field_24_026024(ar6,ar5,ar6,ar7);
  if (*(char *)(ar4 + 0x144) == '\x01') {
    FUN_8c02c390(ar4 + 0xa8,(int)*(char *)(ar4 + 0x144),ar6_00,ar7);
    FUN_8c02c388(ar4,(int)*(char *)(ar4 + 0x144),ar6_00,ar7);
    FUN_8c02c388(ar4 + 0x18,(int)*(char *)(ar4 + 0x144),ar6_00,ar7);
    if (iVar1 == 0) {
      FUN_8c02c388(ar4 + 0x30,(int)*(char *)(ar4 + 0x144),ar6_00,ar7);
    }
    if (iVar1 == 1) {
      FUN_8c02c388(ar4 + 0x48,(int)*(char *)(ar4 + 0x144),ar6_00,ar7);
    }
    FUN_8c02c388(ar4 + 0x60,(int)*(char *)(ar4 + 0x144),ar6_00,ar7);
    ar5_00 = (int *)(int)*(char *)(ar4 + 0x144);
    FUN_8c02c388(ar4 + 0x78,ar5_00,ar6_00,ar7);
  }
  if (iVar1 == 0) {
    FUN_8c02df24(ar4,ar6,ar6_00,ar7);
    FUN_8c02df24(ar4 + 0x18,ar6,ar6_00,ar7);
    FUN_8c02df24(ar4 + 0x30,ar6,ar6_00,ar7);
    ar5_00 = ar6;
    FUN_8c02df24(ar4 + 0x48,ar6,ar6_00,ar7);
    uVar2 = FUN_8c025f68(ar4 + 0x78,ar5_00,ar6_00,ar7);
    in_stack_ffffffb4 =
         CONCAT22((short)((uint)in_stack_ffffffb4 >> 0x10),
                  CONCAT11((char)uVar2,(char)in_stack_ffffffb4));
    if ((char)uVar2 == '\x01') {
      ar5_00 = ar6;
      FUN_8c02df24(ar4 + 0x78,ar6,ar6_00,ar7);
    }
  }
  if (ar5 != *(int **)(ar4 + 0x148)) {
    ar7 = FUN_8c02c518(ar4,ar5_00,ar6_00,ar7);
    ar5_00 = ar6;
    ar6_00 = ar5;
    FUN_8c02e4cc(ar4 + 0xf8,ar6,ar5,ar7);
  }
  iVar1 = FUN_8c02c380(ar4 + 0xf8,ar5_00,ar6_00,ar7);
  if ((iVar1 == 0) && (ar5 != *(int **)(ar4 + 0x148))) {
    if (ar5 != *(int **)(ar4 + 0x148)) {
      ar6_00 = (int *)FUN_8c02c518(ar4,ar5_00,ar6_00,ar7);
      ar5_00 = ar5;
      FUN_8c02d854(ar4 + 0x90,ar5,ar6_00,ar7);
    }
    iVar1 = FUN_8c02c340(ar4 + 0x90,ar5_00,ar6_00,ar7);
    uVar3 = 0xd;
    uVar2 = libgcc_divide_helper_0101e4(iVar1 + -0x32,0xd,ar6_00,ar7);
    ar5_01 = (int)(char)uVar2;
    iVar1 = FUN_8c02c340(ar4 + 0x90,uVar3,ar6_00,ar7);
    if ((iVar1 == 100) && (ar5_01 = 5, _DAT_8c27d430 == 1)) {
      ar5_01 = 4;
    }
    FUN_8c02c338(ar4 + 0x60,ar5_01,ar6_00,ar7);
    iVar1 = FUN_8c02d8fc(ar4 + 0x90,ar5_01,ar6_00,ar7);
    if (iVar1 == 1) {
      FUN_8c02c330(ar4 + 0x60,1,ar6_00,ar7,in_stack_ffffffb4);
    }
    else {
      FUN_8c02c330(ar4 + 0x60,0,ar6_00,ar7,in_stack_ffffffb4);
    }
    ar5_00 = ar6;
    FUN_8c02df24(ar4 + 0x60,ar6,ar6_00,ar7);
  }
  uVar2 = FUN_8c02c518(ar4,ar5_00,ar6_00,ar7);
  FUN_8c02c328(ar4 + 0xa8,uVar2,ar6_00,ar7);
  uVar3 = (**(code **)(*ar6 + 0x148))(ar6,uVar2,ar6_00,ar7);
  uVar2 = FUN_8c02bfd8(ar4,uVar2,ar6_00,ar7);
  ar6_01 = *(undefined4 *)(ar4 + 0x140);
  uVar2 = FUN_8c02c310(uVar3,(int)(short)uVar2,ar6_01,ar7);
  FUN_8c02c308(ar4 + 0xa8,(int)(char)uVar2,ar6_01,ar7);
  uVar2 = *(undefined4 *)(ar4 + 0x13c);
  FUN_8c02db6c(ar4 + 0xa8,uVar2,ar6_01,ar7);
  *(undefined1 *)(ar4 + 0x144) = 0;
  FUN_8c02c5b4(ar4,uVar2,ar6_01,ar7);
  *(int **)(ar4 + 0x148) = ar5;
  return 0x148;
}

__asm__(".globl _FUN_8c02c030\n.set _FUN_8c02c030, _FUN_8c02c030_def\n");
