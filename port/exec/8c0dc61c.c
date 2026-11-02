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
int FUN_8c0dc61c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dc61c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = ar5;
  if (*(int *)(unsigned)(0x9d4 + ar4) == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db3bc(ar4,ar5,ar6,ar7));
    if (iVar1 != 0) {
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x84 + *(int *)(unsigned)(iVar1 + 8)))))(iVar1,0,ar6,ar7));
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c05c284))))
                      (*(undefined4 *)(unsigned)(0x9d4 + ar4),ar5,ar6,ar7));
    if (((iVar1 == 3) || (iVar1 == 5)) || (iVar1 == 7)) {
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x84 + *(int *)(unsigned)(*(int *)(unsigned)(0x9d4 + ar4) + 8)))))
                (*(int *)(unsigned)(0x9d4 + ar4),0,ar6,ar7));
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100c80(ar5,uVar3,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,uVar3,ar6,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,uVar3,ar6,ar7));
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = 1;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x84 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,1,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar2,uVar3,ar6,ar7));
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100cb4(ar5,uVar3,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,uVar3,ar6,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,uVar3,ar6,ar7));
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = 2;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x84 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,2,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar2,uVar3,ar6,ar7));
    }
  }
  iVar1 = 0;
  if (*(int *)(unsigned)(0x9d4 + ar4) != 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc7c0(ar5,uVar3,ar6,ar7));
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc7b0(ar5,uVar3,ar6,ar7));
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0dc61c\n.set _FUN_8c0dc61c, _FUN_8c0dc61c_def\n");
