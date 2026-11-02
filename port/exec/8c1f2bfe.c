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
undefined4 FUN_8c1f2bfe_def(char *ar4,int ar5,int *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c1f2bfe";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  int iVar1;
  char *a6;
  int iVar2;
  int iVar3;
  int iVar4;
  int *a5;
  char *unaff_r13 = 0;
  int iVar5;
  
  a5 = ar6 + 4;
  if (ar6[2] != ar5) {
    iVar5 = 0;
    iVar2 = (int)0x800;
    ar6[2] = ar5;
    iVar3 = ar6[1];
    (*(int *)(fr0_ - 0x2c)) = ar5;
    for (iVar4 = ar7; 0 < iVar4; iVar4 = iVar4 - iVar2) {
      a6 = ar4;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c1f19ec((*(int *)(fr0_ - 0x2c)),1,ar4,ar7));
      if (iVar1 != 0) {
        ar6[2] = 0;
        return iVar1;
      }
      unaff_r13 = ar4;
      if (iVar3 <= iVar5) break;
      while (iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c1f2b68(unaff_r13,a5,a6,ar7)), iVar1 != 0) {
        if ((iVar5 == 0) && (a5[1] != iVar4)) {
          iVar4 = a5[1];
        }
        unaff_r13 = unaff_r13 + iVar1;
        a5 = a5 + 0xb;
        iVar5 = iVar5 + 1;
        if ((ar4 + iVar2 <= unaff_r13) || (iVar3 <= iVar5)) break;
      }
      if (iVar3 <= iVar5) break;
      (*(int *)(fr0_ - 0x2c)) = (*(int *)(fr0_ - 0x2c)) + 1;
    }
    *ar6 = iVar5;
    if (((iVar5 == iVar3) && (iVar4 != 0)) &&
       ((iVar4 != iVar2 || ((unaff_r13 < ar4 + iVar2 && (*unaff_r13 != '\0')))))) {
      ar6[2] = 0;
      return 0xfffffff4;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c1f2bfe\n.set _FUN_8c1f2bfe, _FUN_8c1f2bfe_def\n");
