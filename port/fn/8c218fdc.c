#include "../decls.h"
undefined4 FUN_8c218fdc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double dVar1;
  undefined8 in_xd2;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(_DAT_8c4aa4a8,_DAT_8c4aa4dc);
  }
  else {
    in_xd2 = CONCAT44(_DAT_8c4aa4e0,_DAT_8c4aa4dc);
    dVar1 = (double)CONCAT44(_DAT_8c4aa4ac,_DAT_8c4aa4a8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar1 = (double)CONCAT44((float)((ulonglong)dVar1 >> 0x20) * SUB84(dVar1,0),SUB84(dVar1,0));
  }
  else {
    dVar1 = dVar1 * dVar1;
  }
  if (in_FPSCR_SZ == '\0') {
    _DAT_8c4aa2c0 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar1 = (double)CONCAT44(_DAT_8c4aa4a8,_DAT_8c4aa4e0);
  }
  else {
    _DAT_8c4aa2c0 = SUB84(dVar1,0);
    dVar1 = (double)CONCAT44(_DAT_8c4aa4ac,_DAT_8c4aa4a8);
    in_xd2 = CONCAT44(_DAT_8c4aa4e4,_DAT_8c4aa4e0);
  }
  if (in_FPSCR_PR == '\0') {
    dVar1 = (double)CONCAT44((float)((ulonglong)dVar1 >> 0x20) * SUB84(dVar1,0),SUB84(dVar1,0));
  }
  else {
    dVar1 = dVar1 * dVar1;
  }
  if (in_FPSCR_SZ == '\0') {
    _DAT_8c4aa2c4 = (undefined4)((ulonglong)dVar1 >> 0x20);
    _DAT_8c4aa2cc = _DAT_8c4aa4b8;
  }
  else {
    _DAT_8c4aa2c4 = SUB84(dVar1,0);
    in_xd2 = CONCAT44(_DAT_8c4aa4bc,_DAT_8c4aa4b8);
    _DAT_8c4aa2cc = _DAT_8c4aa2c4;
  }
  _DAT_8c4aa2c8 = _DAT_8c4aa4b4;
  if (in_FPSCR_SZ != '\0') {
    _DAT_8c4aa2cc = (undefined4)in_xd2;
    _DAT_8c4aa2d0 = (undefined4)((ulonglong)in_xd2 >> 0x20);
  }
  return 0x1c;
}

__asm__(".globl _FUN_8c218fdc\n.set _FUN_8c218fdc, _FUN_8c218fdc_def\n");
