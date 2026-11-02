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
int FUN_8c0f69ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f69ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 in_fr1 = 0;
  undefined4 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined4 in_fr4 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 36)), Vec3_assign(ar4,ar5,ar6,ar7));
  if (cVar7 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x24) = in_fr4;
    *(undefined4 *)(unsigned)(ar4 + 0x20) = in_fr4;
    uVar4 = CONCAT44(in_fr4,in_fr1);
    *(undefined4 *)(unsigned)(ar4 + 0x1c) = in_fr4;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x24) = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),in_fr4);
    *(ulonglong *)(unsigned)(ar4 + 0x20) = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),in_fr4);
    uVar4 = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),in_fr4);
    *(undefined8 *)(unsigned)(ar4 + 0x1c) = uVar4;
  }
  (vsp = ((unsigned long)(fr0_ - 36)), Vec3_length_sq(ar6,ar5,ar6_00,ar7));
  if (cVar7 == '\0') {
    *(int *)(unsigned)(ar4 + 0x30) = (int)((ulonglong)uVar4 >> 0x20);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x30) = uVar4;
  }
  uVar3 = (undefined4)uVar4;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), Vec3_length(ar6,ar5,ar6_00,ar7));
  iVar2 = ar4 + 0x34;
  (vsp = ((unsigned long)(fr0_ - 36)), Vec3_assign(iVar2,uVar1,ar6_00,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = 2;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), rand(iVar2,uVar1,ar6_00,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), libgcc_divide_helper_01031c(uVar1,0x28,ar6_00,ar7));
  iVar2 = iVar2 + -0x14;
  if (cVar6 == '\0') {
    dVar5 = CONCAT44D((float)iVar2,uVar3);
  }
  else {
    dVar5 = (double)iVar2;
  }
  if (cVar7 == '\0') {
    *(int *)(unsigned)(ar4 + 0x18) = (int)(D2U(dVar5) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x18) = dVar5;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0f69ec\n.set _FUN_8c0f69ec, _FUN_8c0f69ec_def\n");
