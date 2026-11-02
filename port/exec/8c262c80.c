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
undefined4 FUN_8c262c80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c262c80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int ar5_00;
  int iVar2;
  int iVar3;
  undefined4 ar5_01;
  undefined4 *a7;
  undefined1 *ar7_00;
  undefined4 uVar4;
  int *a4;
  
  a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8));
  uVar4 = *(undefined4 *)(unsigned)(ar4 + 4);
  a7 = &(*(undefined4 *)(fr0_ - 0x1c));
  (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x18))))(a4,1,(int)0x1000,a7));
  if ((((*(int *)(fr0_ - 0x18)) < 0x10) ||
      (ar5_01 = (*(undefined4 *)(fr0_ - 0x1c)), iVar3 = (*(int *)(fr0_ - 0x18)),
      ar5_00 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c25fdb2(uVar4,(*(undefined4 *)(fr0_ - 0x1c)),(*(int *)(fr0_ - 0x18)),a7)), puVar1 = ((void *)(unsigned)0x8c25fec0),
      ar5_00 == 0)) || ((*(int *)(fr0_ - 0x18)) < ar5_00)) {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x1c))))(a4,1,&(*(undefined4 *)(fr0_ - 0x1c)),a7));
  }
  else {
    *(int *)(unsigned)(0x98 + ar4) = ar5_00;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)(puVar1)))(uVar4,ar5_01,iVar3,a7));
    if (iVar2 == 4) {
      *(undefined1 *)(unsigned)(ar4 + 3) = 1;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c25fec0(uVar4,ar5_01,iVar3,a7));
    if (iVar3 == 2) {
      if (0x3f < (*(int *)(fr0_ - 0x18))) {
        (*(int *)(fr0_ - 0x18)) = 0x40;
      }
      (vsp = ((unsigned long)(fr0_ - 36)), memmove(ar4 + 0x58,(*(undefined4 *)(fr0_ - 0x1c)),(*(int *)(fr0_ - 0x18)),a7));
    }
    ar7_00 = ((undefined1 *)(fr0_ - 0x24));
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c26be30(&(*(undefined4 *)(fr0_ - 0x1c)),ar5_00,&(*(undefined4 *)(fr0_ - 0x1c)),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x20))))(a4,0,&(*(undefined4 *)(fr0_ - 0x1c)),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x1c))))(a4,1,((undefined1 *)(fr0_ - 0x24)),ar7_00));
    uVar4 = 2;
    *(undefined1 *)(unsigned)(ar4 + 1) = 2;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c262c80\n.set _FUN_8c262c80, _FUN_8c262c80_def\n");
