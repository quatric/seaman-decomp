#include "../decls.h"
undefined4 FUN_8c1fd8fc_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int ar7_00;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(_DAT_8c4783dc + 8) != 0) && (ar5 != 0)) {
    iVar3 = ar4 * 0x148;
    iVar1 = *(int *)(iVar3 + -0x73b87c1c);
    ar7_00 = DAT_8c273a54;
    iVar2 = DAT_8c273a64;
    if (((iVar1 == 0) ||
        (((ar7_00 = DAT_8c273a58, iVar2 = DAT_8c273a68, iVar1 == 1 ||
          (ar7_00 = DAT_8c273a5c, iVar2 = DAT_8c273a6c, iVar1 == 2)) ||
         (ar7_00 = DAT_8c273a60, iVar2 = DAT_8c273a70, iVar1 == 3)))) &&
       ((ar7_00 + iVar2 + 1) * 0x200 + 0x20 <= ar6)) {
      (&DAT_8c4783e2)[iVar3] = 1;
      *(short *)(&DAT_8c4783e0 + iVar3) = (short)ar4;
      *(int *)(&DAT_8c4783fc + iVar3) = ar4 * 0x4c + -0x73b831c0;
      (&DAT_8c4783ea)[iVar3] = 0;
      (&DAT_8c4783eb)[iVar3] = 0;
      (&DAT_8c4783ec)[iVar3] = 0;
      *(int *)(&DAT_8c47840c + iVar3) = ar5;
      *(int *)(&DAT_8c478400 + iVar3) = ar5 + 0x20;
      *(int *)(&DAT_8c478404 + iVar3) = ar5 + 0x220;
      *(int *)(&DAT_8c478408 + iVar3) = (ar7_00 + 1) * 0x200 + ar5 + 0x20;
      *(undefined2 *)(&DAT_8c4783ee + iVar3) = 1;
      *(short *)(&DAT_8c4783f0 + iVar3) = (short)ar7_00;
      *(short *)(&DAT_8c4783f2 + iVar3) = (short)iVar2;
      *(undefined2 *)(&DAT_8c4783f4 + iVar3) = 0x20;
      memset(iVar3 + -0x73b87be8,0,0x10,ar7_00);
      memset(iVar3 + -0x73b87bd8,0,0x100,ar7_00);
      memset(*(undefined4 *)(&DAT_8c47840c + iVar3),0x47,0x20,ar7_00);
      memset(*(undefined4 *)(&DAT_8c478400 + iVar3),0x53,0x20,ar7_00);
      memset(*(undefined4 *)(&DAT_8c478404 + iVar3),0x46,0x20,ar7_00);
      memset(*(undefined4 *)(&DAT_8c478408 + iVar3),0x44,0x20,ar7_00);
      *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar3) + 0x30) =
           *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar3) + 0x1c);
      (&DAT_8c4783e8)[iVar3] = 1;
      (&DAT_8c4783e9)[iVar3] = 1;
      return 0;
    }
  }
  return 0xffffff00;
}

__asm__(".globl _FUN_8c1fd8fc\n.set _FUN_8c1fd8fc, _FUN_8c1fd8fc_def\n");
