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
int FUN_8c033d34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c033d34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  double in_dr0 = 0;
  double dVar4;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Check_This_Motion_Data_0314fc(ar4,*(undefined4 *)(unsigned)(ar4 + 0x1c),ar6,ar7));
  while( true ) {
    uVar3 = SUB84(in_dr0,0);
    if (cVar6 == '\0') {
      uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x20);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x20);
    }
    iVar2 = iVar1 + -1;
    if (cVar5 == '\0') {
      dVar4 = CONCAT44D((float)iVar2,uVar3);
    }
    else {
      dVar4 = (double)iVar2;
    }
    if (cVar5 != '\0' || SUB84(dVar4,0) <= F32HI(dVar4)) break;
    if (cVar6 == '\0') {
      dVar4 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x20);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x20);
    }
    if (cVar5 == '\0') {
      in_dr0 = (double)(ulonglong)(uint)(F32LO(dVar4) - (float)iVar1);
    }
    else {
      in_dr0 = (double)iVar1 - (double)iVar1;
    }
    if (cVar6 == '\0') {
      *(int *)(unsigned)(ar4 + 0x20) = SUB84(in_dr0,0);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x20) = in_xd0;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c033d34\n.set _FUN_8c033d34, _FUN_8c033d34_def\n");
