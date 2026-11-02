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
int FUN_8c1f0e98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f0e98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined1 *ar5_01;
  undefined4 uVar3;
  
  uVar3 = 1;
  if (((undefined4 *)(unsigned long)*(unsigned *)0x8c2739d8) == (undefined1 *)(unsigned)0x0) {
    iVar2 = -0xb;
  }
  else if ((ar4 == 0) || (ar4 == 1)) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), syscall_1f98ec(*(undefined4 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739d8) + 4),ar5,ar6,ar7));
    puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739d8);
    if (iVar2 == 0) {
      ar5_01 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739d8) + 0x34;
      func_0x8c1f0974(((undefined1 *)(unsigned)0x8c26c00c),ar5_01,0x10,uVar3);
      uVar3 = 0x12;
      *(short *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739d8) + 2) = (short)ar4;
      puVar1[0x45] = (char)ar4;
      puVar1[0x44] = *((undefined4 *)(unsigned long)*(unsigned *)0x8c2739d8);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), syscall_1f98d8(*(undefined4 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739d8) + 4),ar5_01,0x12,ar7));
      if (iVar2 == 0x12) {
        ar5_00 = *(undefined4 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739d8) + 8);
        ({ unsigned long ri0_ = (unsigned long)(0x12); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1f0988(*(undefined4 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739d8) + 0xc),ar5_00,uVar3,ar7); });
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f0a72(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739d8),ar5_00,uVar3,ar7));
        if (iVar2 == 0) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = -2;
      }
    }
    else {
      iVar2 = -3;
    }
  }
  else {
    iVar2 = -6;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c1f0e98\n.set _FUN_8c1f0e98, _FUN_8c1f0e98_def\n");
