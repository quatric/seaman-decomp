#include "../decls.h"
undefined4 FUN_8c218e00_def(int *ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  int iVar1;
  undefined1 *puVar2;
  double dVar3;
  undefined4 in_PR;
  char cVar4;
  char cVar5;
  undefined4 in_stack_ffffffe8;
  undefined4 uStack_10;
  
  cVar5 = '\0';
  cVar4 = '\0';
  puVar2 = &stack0xffffffe8;
  if ((((_DAT_8c4aa4f0 & 0x100) == 0) || ((float)ar4[5] <= 0.0)) ||
     (iVar1 = FUN_8c217e18(ar4,ar5,ar6,ar7), iVar1 == 0)) {
    _DAT_8c4aa554 = 0;
    if ((_DAT_8c4aa4f0 & 0x40) != 0) {
      FUN_8c212740(0,ar4 + 2,&stack0xffffffe8,ar7,in_stack_ffffffe8);
      if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(uStack_10,ar4[5]);
      }
      else {
        dVar3 = (double)CONCAT44(in_PR,uStack_10);
      }
      if (cVar4 == '\0') {
        dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) + SUB84(dVar3,0),SUB84(dVar3,0));
      }
      else {
        dVar3 = dVar3 + dVar3;
      }
      if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),_DAT_8c4aa544);
      }
      ar6 = puVar2;
      if (cVar4 == '\0' && SUB84(dVar3,0) < (float)((ulonglong)dVar3 >> 0x20)) {
        _DAT_8c4aa554 = 1;
      }
    }
    ar6_00 = _DAT_8c4aa510;
    if ((*ar4 == 0) || (iVar1 = FUN_8c218c82(*ar4,_DAT_8c4aa510,ar6,ar7), iVar1 != -1)) {
      if (ar4[1] != 0) {
        FUN_8c218804(ar4[1],_DAT_8c4c0fa0,ar6_00,ar7,in_stack_ffffffe8);
      }
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c218e00\n.set _FUN_8c218e00, _FUN_8c218e00_def\n");
