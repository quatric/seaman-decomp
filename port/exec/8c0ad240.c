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
int s_CSquidLine_0ad244_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CSquidLine_0ad244";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 a6;
  
  a6 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_328_0acd68(ar4 + 0x53c,ar5,ar6,ar7));
  if (*(int *)(unsigned)(0x928 + ar4 + iVar1 * 4) == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x379,
                       (&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x384,1,2));
  }
  else {
    iVar2 = *(int *)(unsigned)(0x928 + ar4 + iVar1 * 4);
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x10c + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,ar6,a6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036988(*(undefined4 *)(unsigned)(0x928 + ar4 + iVar1 * 4),ar6,a6,ar7));
    iVar2 = *(int *)(unsigned)(0x928 + ar4 + iVar1 * 4);
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar2 + 8) + 0x5c))))(iVar2,ar6,a6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x4c))))(ar5,*(undefined4 *)(unsigned)(0x928 + ar4 + iVar1 * 4),a6,ar7));
    *(undefined4 *)(unsigned)(0x928 + ar4 + iVar1 * 4) = 0;
    iVar1 = 0x170c;
    *(undefined4 *)(unsigned)(0x170c + ar4) = 1;
  }
  return iVar1;
}

__asm__(".globl _s_CSquidLine_0ad244\n.set _s_CSquidLine_0ad244, _s_CSquidLine_0ad244_def\n");
