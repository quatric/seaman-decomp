#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c010af8_def(char *ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c010af8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = (byte *)(unsigned)(ar6 + -1 + ar5);
  pbVar1 = (byte *)(unsigned)(ar4 + ar6 + -1);
  iVar3 = 0;
  if (ar4 <= pbVar1) {
    do {
      iVar3 = (uint)*pbVar1 + (uint)*pbVar2 + iVar3;
      *pbVar1 = (byte)iVar3;
      ain0 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(iVar3,0x100,vr6,vr7));
      pbVar1 = pbVar1 + -1;
      pbVar2 = pbVar2 + -1;
      iVar3 = ain0;
    } while (ar4 <= pbVar1);
  }
  return ain0;
}

__asm__(".globl FUN_8c010af8\n.set FUN_8c010af8, FUN_8c010af8_def\n");

}
