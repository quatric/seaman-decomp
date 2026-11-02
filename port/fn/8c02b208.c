#include "../decls.h"
int FUN_8c02b208_def(short *ar4,int ar5,float *ar6,undefined4 ar7)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  
  cVar4 = '\0';
  bVar1 = false;
  if (((ar5 == 0) || (ar5 == 0x2d)) || (ar5 == 0x1e)) {
    if ((*(float *)(ar4 + 2) == -100000.0) && (*ar6 != -100000.0)) {
      bVar1 = true;
    }
    else if ((*(float *)(ar4 + 2) != -100000.0) && (*ar6 == -100000.0)) {
      bVar1 = true;
    }
    *ar4 = *ar4 + 1;
    if (ar4[1] < *ar4) {
      bVar1 = true;
    }
    if (bVar1) {
      if (ar5 == 0) {
        if ((int)((uint)*(byte *)(ar4 + 10) << 0x1e) < 0) {
          iVar3 = 0x48;
        }
        else {
          iVar3 = 0x49;
        }
      }
      else if (ar5 == 0x2d) {
        if ((int)((uint)*(byte *)(ar4 + 10) << 0x1e) < 0) {
          iVar3 = 0x4a;
        }
        else {
          iVar3 = 0x4b;
        }
      }
      else {
        iVar3 = ar5;
        if (ar5 == 0x1e) {
          if ((int)((uint)*(byte *)(ar4 + 10) << 0x1e) < 0) {
            iVar3 = 0x4c;
          }
          else {
            iVar3 = 0x4d;
          }
        }
      }
      *ar4 = 0;
      uVar2 = FUN_8c02b340(ar4,ar5,ar6,ar7);
      ar4[1] = (short)uVar2;
      ar5 = iVar3;
    }
    if (cVar4 == '\0') {
      *(float *)(ar4 + 2) = *ar6;
    }
    else {
      *(undefined8 *)(ar4 + 2) = *(undefined8 *)ar6;
    }
  }
  else {
    *ar4 = 0;
    uVar2 = FUN_8c02b340(ar4,ar5,ar6,ar7);
    ar4[1] = (short)uVar2;
  }
  return ar5;
}

__asm__(".globl _FUN_8c02b208\n.set _FUN_8c02b208, _FUN_8c02b208_def\n");
