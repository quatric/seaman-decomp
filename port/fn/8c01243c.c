#include "../decls.h"
int FUN_8c01243c_def(undefined4 ar4,char *ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int ar6_00;
  int iVar6;
  int ain0;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  undefined *puStack_38;
  int iStack_34;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [4];
  
  iStack_34 = 1;
  pcVar5 = ar5 + ar6;
  *pcVar5 = '\0';
  iVar2 = memmove(auStack_28,ar4,8,ar7);
  iStack_48 = ar6 + -1;
  puStack_38 = &DAT_8c1255f0 + iStack_48 * 8;
  iStack_3c = ar6;
  do {
    if (iStack_48 < 0) {
      return iVar2;
    }
    iVar2 = libgcc_divide_helper_010468(iStack_3c,5);
    iVar1 = (iVar2 + 1) * -2;
    iVar6 = iVar1 + 8;
    ar6_00 = 8 - iVar6;
    memmove(auStack_28 + iVar1,puStack_38 + iVar6,ar6_00,ar7);
    iVar4 = 8;
    iStack_44 = 0;
    ain0 = 0;
    do {
      iVar2 = FUN_8c012f24(auStack_28 + iVar6,auStack_28 + iVar1,ar6_00,ar7);
      if (-1 < iVar2) {
        ar7 = ar6_00;
        iVar2 = FUN_8c012eac(0,auStack_28 + iVar6,auStack_28 + iVar1,ar6_00);
        iStack_44 = iStack_44 + iVar4;
        iStack_34 = iVar2;
      }
      iVar4 = iVar4 >> 1;
      if (iVar4 == 0) break;
      iVar2 = FUN_8c012da8(auStack_28 + iVar1,ar6_00,1,ar7,ain0);
      ain0 = ain0 + 1;
    } while (ain0 < 4);
    cVar3 = (char)iStack_44 + '0';
    if (iStack_34 == 0) {
      pcVar5 = pcVar5 + -1;
      *pcVar5 = cVar3;
      while (pcVar5 = pcVar5 + -1, ar5 <= pcVar5) {
        *pcVar5 = '0';
      }
      return iVar2;
    }
    pcVar5 = pcVar5 + -1;
    *pcVar5 = cVar3;
    iStack_48 = iStack_48 + -1;
    puStack_38 = puStack_38 + -8;
    iStack_3c = iStack_3c + -1;
  } while( true );
}

__asm__(".globl _FUN_8c01243c\n.set _FUN_8c01243c, _FUN_8c01243c_def\n");
