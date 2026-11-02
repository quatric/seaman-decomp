#include "../decls.h"
undefined4 FUN_8c013060_def(int ar4,undefined1 *ar5,int *ar6,char *ar7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  char *ar4_00;
  char *ar4_01;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *ar6_00;
  char *ar7_00;
  ulonglong in_dr4;
  undefined4 in_stack_ffffffa4;
  undefined4 ain0;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [7];
  undefined1 uStack_29;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar6 = &stack0xffffffa4;
  ar4_01 = (char *)&uStack_28;
  uStack_28 = (undefined4)in_dr4;
  uStack_24 = (uint)(in_dr4 >> 0x20);
  bVar1 = false;
  ar7_00 = ar7;
  if (((in_dr4 & 0x7f00000000000000) == 0) && (iVar2 = FUN_8c010b40(ar4_01,7,ar6,ar7), iVar2 != 0))
  {
    puVar6 = ar5 + 8;
    for (; ar5 < puVar6; ar5 = ar5 + 1) {
      *ar5 = 0;
    }
    *ar6 = 0;
    if ((uStack_24 & 0x80000000) == 0) {
      *ar7 = '\x01';
    }
    else {
      *ar7 = -1;
    }
  }
  else {
    ar4_00 = ar7;
    ar6_00 = auStack_30;
    FUN_8c012f58(ar7,&stack0xffffffa4,auStack_30,ar7_00);
    if (*ar7 == -1) {
      uStack_24 = uStack_24 & 0x7fffffff;
    }
    if ((short)in_stack_ffffffa4 == 0x7ff) {
      if ((*(uint*)((uchar*)&uStack_24+2)) != -0x10) {
        return 2;
      }
      puVar6 = (undefined1 *)0x6;
      iVar2 = FUN_8c010b40(ar4_01,6,ar6_00,ar7_00);
      if (iVar2 == 0) {
        return 2;
      }
      if (*ar7 == '\x01') {
        return 1;
      }
      ar4_00 = ar4_01;
      if (*ar7 == -1) {
        return 0xffffffff;
      }
    }
    sVar4 = (short)in_stack_ffffffa4 + -0x3ff;
    ain0 = CONCAT22((short)((uint)in_stack_ffffffa4 >> 0x10),sVar4);
    if (sVar4 < 0) {
      iVar2 = FUN_8c01256c(ar4_00,puVar6,ar6_00,ar7_00);
      iVar2 = iVar2 + -1;
    }
    else {
      iVar2 = FUN_8c01256c(ar4_00,puVar6,ar6_00,ar7_00);
    }
    uStack_29 = 0;
    *ar6 = (iVar2 - ar4) + 1;
    FUN_8c012af8(ar4,auStack_38,ar6_00,ar7_00);
    iVar3 = libgcc_divide_helper_010468(ar4,8);
    iVar5 = 0;
    iVar2 = iVar5;
    if (0 < 8 - iVar3) {
      do {
        iVar5 = iVar2 + 1;
        auStack_38[iVar2] = auStack_38[iVar2 + iVar3];
        iVar2 = iVar5;
      } while (iVar5 < 8 - iVar3);
    }
    for (puVar6 = auStack_38 + iVar5; puVar6 < auStack_30; puVar6 = puVar6 + 1) {
      *puVar6 = 0;
    }
    iVar2 = ar4 + iVar3 * -8;
    FUN_8c01289c(auStack_38,8,iVar2,ar7_00,ain0);
    FUN_8c012af8(ar4 + -1,auStack_40,iVar2,ar7_00);
    iVar3 = libgcc_divide_helper_010468(ar4 + -1,8);
    iVar5 = 0;
    iVar2 = iVar5;
    if (0 < 8 - iVar3) {
      do {
        iVar5 = iVar2 + 1;
        auStack_40[iVar2] = auStack_40[iVar3 + iVar2];
        iVar2 = iVar5;
      } while (iVar5 < 8 - iVar3);
    }
    for (puVar6 = auStack_40 + iVar5; puVar6 < auStack_38; puVar6 = puVar6 + 1) {
      *puVar6 = 0;
    }
    FUN_8c01289c(auStack_40,8,ar4 + iVar3 * -8 + -1,ar7_00,ain0);
    while( true ) {
      while( true ) {
        puVar6 = ar5;
        FUN_8c010b60((int)(short)ain0,auStack_30,*ar6,ar5);
        memmove(auStack_48,ar5,8,puVar6);
        iVar2 = FUN_8c013ec0(auStack_48,auStack_38,8,puVar6);
        if (iVar2 < 1) break;
        bVar1 = true;
        *ar6 = *ar6 + 1;
      }
      memmove(auStack_48,ar5,8,puVar6);
      iVar2 = FUN_8c013ec0(auStack_48,auStack_38,8,puVar6);
      if (iVar2 == 0) break;
      memmove(auStack_48,ar5,8,puVar6);
      iVar2 = FUN_8c013ec0(auStack_48,auStack_40,8,puVar6);
      if (-1 < iVar2) {
        return 0;
      }
      if (bVar1) {
        return 0;
      }
      *ar6 = *ar6 + -1;
    }
    iVar2 = *ar6;
    *ar6 = iVar2 + 1;
    FUN_8c010b60((int)(short)ain0,auStack_30,iVar2 + 1,ar5);
  }
  return 0;
}

__asm__(".globl _FUN_8c013060\n.set _FUN_8c013060, _FUN_8c013060_def\n");
