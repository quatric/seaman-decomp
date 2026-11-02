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
undefined4 FUN_8c1f5f8c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f5f8c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  ushort uVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  
  iVar5 = *(le<int>* )(unsigned)(ar5 + 8);
  pbVar8 = (byte *)(unsigned)(iVar5 + 0xb);
  uVar6 = *(le<ushort>* )(unsigned)(iVar5 + 8) | 0xffff0000;
  pcVar9 = (char *)(unsigned)(0x8c472d0a + ar6);
  if (*pbVar8 < *(le<undefined4>* )(unsigned)0x8c472d08) {
    if (*(le<undefined4>* )(unsigned)0x8c472d09 < *pbVar8) {
      if (*pcVar9 != '\0') {
        uVar6 = uVar6 & 0xfffdffff;
      }
    }
    else {
      uVar6 = uVar6 | 0x20000;
      *pcVar9 = '\0';
    }
  }
  else {
    uVar6 = uVar6 & 0xfffdffff;
    *pcVar9 = '\x01';
  }
  pbVar7 = (byte *)(unsigned)(iVar5 + 10);
  if (*pbVar7 < *(le<undefined4>* )(unsigned)0x8c472d08) {
    if (*(le<undefined4>* )(unsigned)0x8c472d09 < *pbVar7) {
      if (*(char *)(unsigned)(0x8c472d22 + ar6) != '\0') {
        uVar6 = uVar6 & 0xfffeffff;
      }
      goto LAB_8c1f605e;
    }
    cVar4 = '\0';
    uVar6 = uVar6 | 0x10000;
  }
  else {
    uVar6 = uVar6 & 0xfffeffff;
    cVar4 = '\x01';
  }
  *(char *)(unsigned)(0x8c472d22 + ar6) = cVar4;
LAB_8c1f605e:
  uVar1 = 0x10000;
  if (*(le<undefined4>* )(unsigned)0x8c472d04 == 0) {
    uVar6 = uVar6 ^ 0xffffffff;
  }
  *(le<uint>* )(unsigned)(ar4 + 8) = uVar6;
  if ((*(le<uint>* )(unsigned)(ar4 + 4) & uVar1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ushort)*pbVar7;
  }
  *(le<ushort>* )(unsigned)(ar4 + 0x18) = uVar2;
  if ((*(le<uint>* )(unsigned)(ar4 + 4) & 0x20000) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ushort)*pbVar8;
  }
  *(le<ushort>* )(unsigned)(ar4 + 0x1a) = uVar2;
  if ((*(le<uint>* )(unsigned)(ar4 + 4) & 0x40000) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = *(byte *)(unsigned)(iVar5 + 0xc) - 0x80;
  }
  *(le<short>* )(unsigned)(ar4 + 0x1c) = sVar3;
  uVar6 = 0x100000;
  if ((*(le<uint>* )(unsigned)(ar4 + 4) & 0x80000) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = *(byte *)(unsigned)(iVar5 + 0xd) - 0x80;
  }
  *(le<short>* )(unsigned)(ar4 + 0x1e) = sVar3;
  uVar1 = 0x200000;
  if ((*(le<uint>* )(unsigned)(ar4 + 4) & uVar6) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = *(byte *)(unsigned)(iVar5 + 0xe) - 0x80;
  }
  *(le<short>* )(unsigned)(ar4 + 0x20) = sVar3;
  if ((*(le<uint>* )(unsigned)(ar4 + 4) & uVar1) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = *(byte *)(unsigned)(iVar5 + 0xf) - 0x80;
  }
  *(le<short>* )(unsigned)(ar4 + 0x22) = sVar3;
  return 0x22;
}

__asm__(".globl FUN_8c1f5f8c\n.set FUN_8c1f5f8c, FUN_8c1f5f8c_def\n");

}
