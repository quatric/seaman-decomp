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
int FUN_8c266708_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c266708";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0x7000101;
  iVar3 = *(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c0));
  if (ar5 == 1) {
    iVar2 = 0;
    iVar3 = iVar3 + 8;
    do {
      if (*(int *)(unsigned)(iVar3 + 4) != 1) break;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar2 < 8);
joined_r0x8c266742:
    if (iVar2 == 8) {
LAB_8c266782:
      iVar3 = 0;
    }
  }
  else {
    if (ar5 == 2) {
      iVar2 = 0;
      iVar3 = iVar3 + 0x48;
      do {
        if (*(int *)(unsigned)(iVar3 + 4) != 1) break;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 8;
      } while (iVar2 < 8);
      goto joined_r0x8c266742;
    }
    iVar2 = 0x7fffffff;
    if (ar5 != 3) goto LAB_8c2667a0;
    iVar2 = 0;
    iVar3 = 0x88 + iVar3;
    do {
      if (*(int *)(unsigned)(iVar3 + 4) != 1) break;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar2 < 4);
    if (iVar2 == 4) goto LAB_8c266782;
  }
  if (iVar3 == 0) {
    *ar4 = 0;
    iVar2 = iVar1;
  }
  else {
    *ar4 = iVar3;
    *(undefined4 *)(unsigned)(iVar3 + 4) = 1;
    iVar2 = 0;
  }
LAB_8c2667a0:
  if (iVar2 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2688a0(((void *)(unsigned)0x8c266708),iVar2,vr6,vr7));
  }
  return iVar2;
}

__asm__(".globl _FUN_8c266708\n.set _FUN_8c266708, _FUN_8c266708_def\n");
