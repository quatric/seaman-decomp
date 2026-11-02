#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c108f3c_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c108f3c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x94) = *(le<undefined4>* )(unsigned)(ar4 + 0x154);
  if (*(le<int>* )(unsigned)(ar4 + 900) == -1) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0;
    iVar3 = *(le<int>* )(unsigned)(ar4 + 0x104);
    if ((iVar3 < 5) && (-1 < iVar3)) {
                    
      switch(iVar3) {
      case 0:
        *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
        break;
      case 1:
        *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x2d;
        break;
      case 4:
        *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x1e;
      }
    }
    iVar3 = *(le<int>* )(unsigned)(ar4 + 0x40);
    if (iVar3 < 0xf) {
      if (iVar3 < 0xe) {
        if (iVar3 < 7) {
          if (-1 < iVar3) {
            if (iVar3 == 0) {
              iVar3 = ar6;
              iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(*(le<undefined4>* )(unsigned)(ar6 + 4),ar5,ar6,ar7));
              uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c5ac(iVar1 * 0x18 + *(le<int>* )(unsigned)(ar6 + 4),ar5,iVar3,ar7));
              if ('\0' < (char)uVar2) {
                iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(*(le<undefined4>* )(unsigned)(ar6 + 4),ar5,iVar3,ar7));
                if (iVar3 == 0) {
                  *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
                }
                else if (iVar3 == 1) {
                  *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
                }
                else if (iVar3 == 2) {
                  *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
                }
                else if (iVar3 == 4) {
                  *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
                }
              }
            }
            else if (iVar3 == 3) {
              iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(*(le<undefined4>* )(unsigned)(ar6 + 4),ar5,ar6,ar7));
              if (iVar3 == 0) {
                *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
              }
              else if (iVar3 == 1) {
                *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
              }
              else if (iVar3 == 2) {
                *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
              }
              else if (iVar3 == 4) {
                *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
              }
            }
            else if (iVar3 == 6) {
              *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x37;
            }
          }
        }
        else if (iVar3 == 0xd) {
          *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0xf;
        }
      }
      else {
        *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
      }
    }
    else if (iVar3 < 0x14) {
      if (0x10 < iVar3) {
        if (iVar3 == 0x11) {
          iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_140_025f70(*(le<undefined4>* )(unsigned)(ar6 + 4),ar5,ar6,ar7));
          if (iVar3 == 0) {
            *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x19;
          }
          else {
            *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x1e;
          }
        }
        else if (iVar3 == 0x13) {
          *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x23;
        }
      }
    }
    else if (iVar3 == 0x1d) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
    }
  }
  iVar3 = *(le<int>* )(unsigned)(ar4 + 0x88);
  if (iVar3 == 1) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x47;
    iVar3 = 0x88;
    *(le<undefined4>* )(unsigned)(ar4 + 0x88) = 0;
  }
  return iVar3;
}

__asm__(".globl FUN_8c108f3c\n.set FUN_8c108f3c, FUN_8c108f3c_def\n");

}
