#include "../decls.h"
int FUN_8c108f3c_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined4 *)(ar4 + 0x94) = *(undefined4 *)(ar4 + 0x154);
  if (*(int *)(ar4 + 900) == -1) {
    *(undefined4 *)(ar4 + 0x94) = 0;
    iVar3 = *(int *)(ar4 + 0x104);
    if ((iVar3 < 5) && (-1 < iVar3)) {
                    
      switch(iVar3) {
      case 0:
        *(undefined4 *)(ar4 + 0x94) = 0x14;
        break;
      case 1:
        *(undefined4 *)(ar4 + 0x94) = 0x2d;
        break;
      case 4:
        *(undefined4 *)(ar4 + 0x94) = 0x1e;
      }
    }
    iVar3 = *(int *)(ar4 + 0x40);
    if (iVar3 < 0xf) {
      if (iVar3 < 0xe) {
        if (iVar3 < 7) {
          if (-1 < iVar3) {
            if (iVar3 == 0) {
              iVar3 = ar6;
              iVar1 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
              uVar2 = FUN_8c02c5ac(iVar1 * 0x18 + *(int *)(ar6 + 4),ar5,iVar3,ar7);
              if ('\0' < (char)uVar2) {
                iVar3 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5,iVar3,ar7);
                if (iVar3 == 0) {
                  *(undefined4 *)(ar4 + 0x94) = 0x14;
                }
                else if (iVar3 == 1) {
                  *(undefined4 *)(ar4 + 0x94) = 0x14;
                }
                else if (iVar3 == 2) {
                  *(undefined4 *)(ar4 + 0x94) = 0x14;
                }
                else if (iVar3 == 4) {
                  *(undefined4 *)(ar4 + 0x94) = 0x14;
                }
              }
            }
            else if (iVar3 == 3) {
              iVar3 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
              if (iVar3 == 0) {
                *(undefined4 *)(ar4 + 0x94) = 0x14;
              }
              else if (iVar3 == 1) {
                *(undefined4 *)(ar4 + 0x94) = 0x14;
              }
              else if (iVar3 == 2) {
                *(undefined4 *)(ar4 + 0x94) = 0x14;
              }
              else if (iVar3 == 4) {
                *(undefined4 *)(ar4 + 0x94) = 0x14;
              }
            }
            else if (iVar3 == 6) {
              *(undefined4 *)(ar4 + 0x94) = 0x37;
            }
          }
        }
        else if (iVar3 == 0xd) {
          *(undefined4 *)(ar4 + 0x94) = 0xf;
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x94) = 0x14;
      }
    }
    else if (iVar3 < 0x14) {
      if (0x10 < iVar3) {
        if (iVar3 == 0x11) {
          iVar3 = get_field_140_025f70(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
          if (iVar3 == 0) {
            *(undefined4 *)(ar4 + 0x94) = 0x19;
          }
          else {
            *(undefined4 *)(ar4 + 0x94) = 0x1e;
          }
        }
        else if (iVar3 == 0x13) {
          *(undefined4 *)(ar4 + 0x94) = 0x23;
        }
      }
    }
    else if (iVar3 == 0x1d) {
      *(undefined4 *)(ar4 + 0x94) = 0x14;
    }
  }
  iVar3 = *(int *)(ar4 + 0x88);
  if (iVar3 == 1) {
    *(undefined4 *)(ar4 + 0x94) = 0x47;
    iVar3 = 0x88;
    *(undefined4 *)(ar4 + 0x88) = 0;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c108f3c\n.set _FUN_8c108f3c, _FUN_8c108f3c_def\n");
