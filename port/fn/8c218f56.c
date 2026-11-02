#include "../decls.h"
undefined4 FUN_8c218f56_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *ar5_00;
  double dVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  FUN_8c236454(ar4,ar5,ar6,ar7);
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(_DAT_8c4aa4a8,_DAT_8c4aa4dc);
  }
  else {
    dVar2 = (double)CONCAT44(_DAT_8c4aa4ac,_DAT_8c4aa4a8);
  }
  ar5_00 = &DAT_8c4aa2b0;
  if (cVar3 == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) * SUB84(dVar2,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (cVar4 == '\0') {
    _DAT_8c4aa2c0 = (undefined4)((ulonglong)dVar2 >> 0x20);
    dVar2 = (double)CONCAT44(_DAT_8c4aa4a8,_DAT_8c4aa4e0);
  }
  else {
    _DAT_8c4aa2c0 = SUB84(dVar2,0);
    dVar2 = (double)CONCAT44(_DAT_8c4aa4ac,_DAT_8c4aa4a8);
  }
  if (cVar3 == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) * SUB84(dVar2,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (cVar4 == '\0') {
    _DAT_8c4aa2c4 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  else {
    _DAT_8c4aa2c4 = SUB84(dVar2,0);
    _DAT_8c4aa2d0 = _DAT_8c4aa4bc;
  }
  _DAT_8c4aa2cc = _DAT_8c4aa4b8;
  _DAT_8c4aa2c8 = _DAT_8c4aa4b4;
  FUN_8c218e00(ar4,&DAT_8c4aa2b0,ar6,ar7);
  uVar1 = FUN_8c2364b2(ar4,ar5_00,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c218f56\n.set _FUN_8c218f56, _FUN_8c218f56_def\n");
