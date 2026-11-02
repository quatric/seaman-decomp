#include "../decls.h"
int FUN_8c2073f8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *puVar2;
  
  if (ar5 == 0) {
    iVar1 = (int)0x234;
    *(undefined **)(iVar1 + ar4) = (&DATA_8c2078f2);
    return iVar1;
  }
  if (ar5 == 1) {
    iVar1 = (int)0x23c;
    puVar2 = (&DATA_8c2078f6);
LAB_8c2074f4:
    *(undefined **)(iVar1 + ar4) = puVar2;
  }
  else {
    if (ar5 == 2) {
      iVar1 = (int)0x244;
      puVar2 = (&DATA_8c2078fa);
    }
    else {
      if (ar5 == 3) {
        iVar1 = (int)0x24c;
        puVar2 = (&DATA_8c207920);
        goto LAB_8c2074f4;
      }
      if (ar5 == 4) {
        iVar1 = (int)0x254;
        puVar2 = (&DATA_8c207924);
      }
      else {
        if (ar5 == 5) {
          iVar1 = (int)0x25c;
          puVar2 = (&DATA_8c207928);
          goto LAB_8c2074f4;
        }
        if (ar5 == 6) {
          iVar1 = (int)0x264;
          puVar2 = (&DATA_8c20792c);
        }
        else {
          if (ar5 == 7) {
            iVar1 = (int)0x26c;
            puVar2 = (&DATA_8c207930);
            goto LAB_8c2074f4;
          }
          if (ar5 != 8) {
            return ar5;
          }
          iVar1 = (int)0x274;
          puVar2 = (&DATA_8c207934);
        }
      }
    }
    *(undefined **)(iVar1 + ar4) = puVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c2073f8\n.set _FUN_8c2073f8, _FUN_8c2073f8_def\n");
