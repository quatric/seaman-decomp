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
int s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  int iVar1;
  int *ar5_00;
  int *ar6_00;
  
  ((int *)(fr0_ - 0x44))[1] = 0;
  ((int *)(fr0_ - 0x44))[0] = 0;
  ((int *)(fr0_ - 0x44))[2] = *(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c12fbe0));
  (*(int *)(fr0_ - 0x38)) = *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 4);
  (*(int *)(fr0_ - 0x34)) = *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 8);
  (*(int *)(fr0_ - 0x30)) = *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 0xc);
  (*(int *)(fr0_ - 0x2c)) = *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 0x10);
  (*(int *)(fr0_ - 0x28)) = *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 0x14);
  (*(int *)(fr0_ - 0x24)) = *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 0x18);
  (*(int *)(fr0_ - 0x20)) = *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 0x1c);
  (*(int *)(fr0_ - 0x1c)) = *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 0x20);
  (*(int *)(fr0_ - 0x18)) = *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 0x24);
  (*(int *)(fr0_ - 0x14)) = *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 0x28);
  while( true ) {
    ar6_00 = ((int *)(fr0_ - 0x44));
    ar5_00 = ((int *)(fr0_ - 0x44)) + 1;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c2124d0(ar5[2],ar5_00,ar6_00,ar7));
    if (iVar1 == 0) break;
    if (((int *)(fr0_ - 0x44))[2] == ((int *)(fr0_ - 0x44))[0]) {
      ar7 = 0;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,0));
    }
    else if ((*(int *)(fr0_ - 0x38)) == ((int *)(fr0_ - 0x44))[0]) {
      ar7 = 1;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,1));
    }
    else if ((*(int *)(fr0_ - 0x34)) == ((int *)(fr0_ - 0x44))[0]) {
      ar7 = 2;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,2));
    }
    else if ((*(int *)(fr0_ - 0x30)) == ((int *)(fr0_ - 0x44))[0]) {
      ar7 = 3;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,3));
    }
    else if ((*(int *)(fr0_ - 0x2c)) == ((int *)(fr0_ - 0x44))[0]) {
      ar7 = 4;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,4));
    }
    else if ((*(int *)(fr0_ - 0x28)) == ((int *)(fr0_ - 0x44))[0]) {
      ar7 = 5;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,5));
    }
    else if ((*(int *)(fr0_ - 0x24)) == ((int *)(fr0_ - 0x44))[0]) {
      ar7 = 6;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,6));
    }
    else if ((*(int *)(fr0_ - 0x20)) == ((int *)(fr0_ - 0x44))[0]) {
      ar7 = 7;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,7));
    }
    else if ((*(int *)(fr0_ - 0x1c)) == ((int *)(fr0_ - 0x44))[0]) {
      ar7 = 8;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,8));
    }
    else if ((*(int *)(fr0_ - 0x18)) == ((int *)(fr0_ - 0x44))[0]) {
      ar7 = 9;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,9));
    }
    else if ((*(int *)(fr0_ - 0x14)) == ((int *)(fr0_ - 0x44))[0]) {
      ar7 = 10;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,10));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c1fb57c(iVar1,ar5_00,ar6_00,ar7));
    }
  }
  iVar1 = *ar5;
  if (iVar1 != 0xb) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c1fb57c(ar5,ar5_00,ar6_00,ar7));
  }
  return iVar1;
}

__asm__(".globl _s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e\n.set _s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e, _s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e_def\n");
