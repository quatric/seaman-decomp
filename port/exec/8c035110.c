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
int FUN_8c035110_def(undefined2 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c035110";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  int iVar2;
  short sVar3;
  int iVar4;
  
  iVar2 = -1;
  sVar3 = 0;
  ar5_00 = ar5;
  for (iVar4 = 0; iVar4 < *(short *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + 2); iVar4 = iVar4 + 1) {
    if (*(char *)(unsigned)((int)ar4 + iVar4 + 0xc) == '\x02') {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(*(undefined4 *)(unsigned)(ar5 + 8),ar5_00,ar6,ar7));
      if ((iVar1 == -1) && (sVar3 < *(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 2)))
      {
        if (*(char *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x21) == '\0') {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x10))))
                            (ar5,ar5_00,ar6,ar7));
          if (iVar1 == 1) {
            iVar2 = (int)*((short *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4));
            sVar3 = *(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 2);
          }
        }
        else if (*(char *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x21) == '\x01') {
          ar5_00 = ar5;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03525c(ar4,ar5,ar6,ar7));
          if (iVar1 == 1) {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x10))))
                              (ar5,ar5_00,ar6,ar7));
            if (iVar1 == 1) {
              iVar2 = (int)*((short *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4));
              sVar3 = *(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 2);
            }
          }
        }
      }
    }
  }
  if (iVar2 == -1) {
    iVar2 = -1;
  }
  else {
    *(undefined1 *)(unsigned)((int)ar4 + iVar2 + 0xc) = 3;
    *ar4 = (short)iVar2;
    *(undefined4 *)(unsigned)(ar4 + 4) = 1;
    *(undefined4 *)(unsigned)(ar4 + 0x12) = 0;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c035110\n.set _FUN_8c035110, _FUN_8c035110_def\n");
