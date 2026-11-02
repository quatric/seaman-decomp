#include "../decls.h"
int FUN_8c033d34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  double in_dr0;
  double dVar4;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar1 = s_Check_This_Motion_Data_0314fc(ar4,*(undefined4 *)(ar4 + 0x1c),ar6,ar7);
  while( true ) {
    uVar3 = SUB84(in_dr0,0);
    if (cVar6 == '\0') {
      uVar3 = *(undefined4 *)(ar4 + 0x20);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x20);
    }
    iVar2 = iVar1 + -1;
    if (cVar5 == '\0') {
      dVar4 = (double)CONCAT44((float)iVar2,uVar3);
    }
    else {
      dVar4 = (double)iVar2;
    }
    if (cVar5 != '\0' || SUB84(dVar4,0) <= (float)((ulonglong)dVar4 >> 0x20)) break;
    if (cVar6 == '\0') {
      dVar4 = (double)(ulonglong)*(uint *)(ar4 + 0x20);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x20);
    }
    if (cVar5 == '\0') {
      in_dr0 = (double)(ulonglong)(uint)(SUB84(dVar4,0) - (float)iVar1);
    }
    else {
      in_dr0 = (double)iVar1 - (double)iVar1;
    }
    if (cVar6 == '\0') {
      *(int *)(ar4 + 0x20) = SUB84(in_dr0,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x20) = in_xd0;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c033d34\n.set _FUN_8c033d34, _FUN_8c033d34_def\n");
