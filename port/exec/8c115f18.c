#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c115f18_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c115f18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *ar5_00;
  int *piVar5;
  
  ar5_00 = (int *)(unsigned)*((int *)(unsigned long)*(unsigned *)(unsigned)(0x124 + ar4));
  if (ar5_00 == ((int *)(unsigned long)*(unsigned *)(unsigned)(0x124 + -4 + ar4))) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11318e(ar4,ar5_00,ar6,ar7));
  }
  iVar2 = (int)0x124;
  ar5_00[2] = ar5;
  if (ar5_00 != ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar2 + ar4))) {
    do {
      piVar4 = (int *)(unsigned)ar5_00[2];
      ar5_00 = (int *)(unsigned)ar5_00[1];
      iVar2 = *piVar4;
      while (iVar2 == 0) {
        piVar5 = (int *)(unsigned)piVar4[1];
        piVar3 = piVar4;
        if (piVar5 != (int *)(unsigned)0x0) {
          iVar2 = *piVar5 + -1;
          *piVar5 = iVar2;
          while (piVar1 = piVar5, iVar2 == 0) {
            piVar3 = (int *)(unsigned)piVar1[2];
            if ((piVar3 != (int *)(unsigned)0x0) && (iVar2 = *piVar3, *piVar3 = iVar2 + -1, iVar2 + -1 == 0))
            {
              ar5_00 = (int *)(unsigned)*ar5_00;
              if (ar5_00 == (int *)(unsigned)*(int *)(unsigned)(0x120 + ar4)) {
                (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11318e(ar4,ar5_00,ar6,ar7));
              }
              ar5_00[2] = piVar1[2];
            }
            piVar5 = (int *)(unsigned)piVar1[1];
            piVar3 = piVar1;
            if (piVar5 == (int *)(unsigned)0x0) break;
            iVar2 = *piVar5 + -1;
            *piVar5 = iVar2;
          }
        }
        iVar2 = (int)0x114;
        piVar3[1] = *(int *)(unsigned)(iVar2 + ar4);
        *(unsigned *)(unsigned)(iVar2 + ar4) = piVar4;
        piVar4 = (int *)(unsigned)piVar4[2];
        if (piVar4 == (int *)(unsigned)0x0) break;
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4;
      }
      iVar2 = (int)0x124;
    } while (ar5_00 != ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar2 + ar4)));
  }
  return iVar2;
}

__asm__(".globl _FUN_8c115f18\n.set _FUN_8c115f18, _FUN_8c115f18_def\n");
