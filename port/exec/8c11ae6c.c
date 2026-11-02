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
int FUN_8c11ae6c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ae6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *ar4_00;
  undefined4 *ar4_01;
  int iVar1;
  int iVar2;
  
  ar4_00 = (undefined4 *)(unsigned)
           (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x10))))
                     (*ar4,(*(int *)(unsigned)((int)0x1d4 + (int)ar4) + (int)0x97) * 4,ar6,ar7))
  ;
  ar4_01 = (undefined4 *)(unsigned)
           (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x10))))
                     (*ar4,(*(int *)(unsigned)((int)0x1d4 + (int)ar4) + (int)0x97) * 4,ar6,ar7))
  ;
  iVar1 = (int)0x1d4;
  if (*(int *)(unsigned)(iVar1 + (int)ar4) == 0) {
    *ar4_00 = 0;
    *ar4_01 = 0;
  }
  else {
    iVar2 = (*(int *)(unsigned)(iVar1 + (int)ar4) + 1) * 4;
    (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar4_00,*(undefined4 *)(unsigned)(iVar1 + -8 + (int)ar4),iVar2,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,*(undefined4 *)(unsigned)((int)0x1cc + (int)ar4),iVar2,ar7));
    iVar1 = (*(int *)(unsigned)((int)0x1d4 + (int)ar4) + 1) * 4;
    (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar4_01,*(undefined4 *)(unsigned)(0x1d4 + -4 + (int)ar4),iVar1,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,*(undefined4 *)(unsigned)((int)0x1d0 + (int)ar4),iVar1,ar7));
  }
  iVar1 = (int)0x1cc;
  iVar2 = (int)0x96;
  *(unsigned *)(unsigned)(iVar1 + (int)ar4) = ar4_00;
  *(unsigned *)(unsigned)(iVar1 + 4 + (int)ar4) = ar4_01;
  iVar1 = iVar1 + 8;
  *(int *)(unsigned)(iVar1 + (int)ar4) = *(int *)(unsigned)(iVar1 + (int)ar4) + iVar2;
  return iVar1;
}

__asm__(".globl _FUN_8c11ae6c\n.set _FUN_8c11ae6c, _FUN_8c11ae6c_def\n");
