#include "../decls.h"
int FUN_8c02dc8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\x01';
  if ((*(int *)(ar4 + 0x48) != -1) && (*(int *)(ar4 + 0x48) != 4)) {
    return *(int *)(ar4 + 0x48);
  }
  iVar1 = (int)*(short *)(ar4 + 0x14);
  if ((iVar1 < 8) && (1 < iVar1)) {
                    
    switch(iVar1) {
    case 2:
      if ((*(short *)(ar4 + 0x16) == 2) && (*(char *)(ar4 + 0x40) < '\x01')) {
        cVar2 = '\0';
      }
      break;
    case 3:
      if ((*(short *)(ar4 + 0x16) == 0) && (*(char *)(ar4 + 0x40) < '\x02')) {
        cVar2 = '\0';
      }
      break;
    case 5:
      goto switchD_8c02dcc2_caseD_5;
    case 6:
      cVar2 = '\x01';
      if ((*(short *)(ar4 + 0x16) < 2) && (*(char *)(ar4 + 0x40) < '\x01')) {
        cVar2 = '\0';
      }
      if ((*(short *)(ar4 + 0x16) == 2) && (*(char *)(ar4 + 0x40) < '\x03')) {
        cVar2 = '\0';
      }
      break;
    case 7:
      if ((*(short *)(ar4 + 0x16) == 0) && (*(char *)(ar4 + 0x40) < '\x04')) {
        cVar2 = '\0';
      }
    }
  }
  else {
switchD_8c02dcc2_caseD_5:
    *(undefined4 *)(ar4 + 0x44) = 1;
  }
  iVar1 = *(int *)(ar4 + 0x44);
  if (((iVar1 == 1) && (iVar1 = (int)cVar2, iVar1 == 1)) &&
     (iVar1 = *(int *)(ar4 + 0x18), *(short *)(ar4 + *(short *)(ar4 + 0x16) * 2 + 0x22) <= iVar1)) {
    *(undefined2 *)(ar4 + 0x1e) = 1;
    if (*(short *)(ar4 + *(short *)(ar4 + 0x16) * 2 + 0x22) != 0) {
      *(short *)(ar4 + 0x16) = *(short *)(ar4 + 0x16) + 1;
    }
    *(undefined4 *)(ar4 + 0x18) = 0;
    iVar1 = (int)*(short *)(ar4 + 0x20);
    if (iVar1 <= *(short *)(ar4 + 0x16)) {
      if ((int)*(short *)(ar4 + 0x14) == *(int *)(ar4 + 0x30)) {
        *(undefined2 *)(ar4 + 0x1e) = 0;
        iVar1 = *(short *)(ar4 + 0x20) + -1;
        *(short *)(ar4 + 0x16) = (short)iVar1;
      }
      else {
        iVar1 = (int)*(short *)(ar4 + 0x20);
        *(short *)(ar4 + 0x16) = *(short *)(ar4 + 0x20);
      }
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02dc8c\n.set _FUN_8c02dc8c, _FUN_8c02dc8c_def\n");
