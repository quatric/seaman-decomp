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
int FUN_8c010b08_def(char *ar4,int ar5,char *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c010b08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte *pbVar1;
  undefined4 unaff_r13 = 0;
  int iVar2;
  
  pbVar1 = (byte *)(unsigned)(ar4 + ar5);
  iVar2 = 0;
  if (ar4 <= pbVar1) {
    do {
      iVar2 = (uint)*pbVar1 + (uint)(byte)*ar6 + iVar2;
      *pbVar1 = (byte)iVar2;
      ain0 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(iVar2,unaff_r13,vr6,vr7));
      pbVar1 = pbVar1 + -1;
      ar6 = ar6 + -1;
      iVar2 = ain0;
    } while (ar4 <= pbVar1);
  }
  return ain0;
}

__asm__(".globl _FUN_8c010b08\n.set _FUN_8c010b08, _FUN_8c010b08_def\n");
