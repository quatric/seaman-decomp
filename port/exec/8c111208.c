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
int FUN_8c111208_def(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c111208";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  int a5;
  int ar7_00;
  int iVar2;
  int iVar3;
  int iVar4;
  
  (*(char *)(fr0_ - 0x24)) = '\0';
  iVar4 = ar5 * 4;
  iVar1 = 0;
  a5 = ar4[0xe];
joined_r0x8c111238:
  do {
    if (a5 == 0) {
      return (int)(*(char *)(fr0_ - 0x24));
    }
    ar7_00 = *(int *)(unsigned)(*(int *)(unsigned)(a5 + 8) + iVar4);
    if (-1 < ar7_00) {
      iVar2 = ar7_00;
      if ((ar6 == 0) && (ar7_00 == 0)) {
        iVar2 = -1;
      }
      *(int *)(unsigned)(*(int *)(unsigned)(a5 + 8) + iVar4) = iVar2 - ar6;
      if (iVar2 - ar6 < 0) {
        iVar3 = *(int *)(unsigned)(a5 + 0xc);
        iVar2 = *(int *)(unsigned)(a5 + 4) + -1;
        *(int *)(unsigned)(a5 + 4) = iVar2;
        if (iVar2 == 0) {
          *(int *)(unsigned)(iVar3 + 4) = *(int *)(unsigned)(iVar3 + 4) + -1;
        }
        (*(char *)(fr0_ - 0x24)) = '\x01';
        iVar2 = *ar4;
        (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1209ec(iVar3,*(undefined4 *)(unsigned)(ar4[0xd] + iVar4),iVar2,ar7_00));
        if (*(int *)(unsigned)(a5 + 4) == 0) {
          iVar3 = *(int *)(unsigned)(a5 + 0x10);
          if (iVar1 == 0) {
            ar4[0xe] = iVar3;
          }
          else {
            *(int *)(unsigned)(iVar1 + 0x10) = iVar3;
          }
          (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,*(undefined4 *)(unsigned)(a5 + 8),iVar2,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,a5,iVar2,ar7_00));
          a5 = iVar3;
          goto joined_r0x8c111238;
        }
      }
    }
    iVar1 = a5;
    a5 = *(int *)(unsigned)(a5 + 0x10);
  } while( true );
}

__asm__(".globl _FUN_8c111208\n.set _FUN_8c111208, _FUN_8c111208_def\n");
