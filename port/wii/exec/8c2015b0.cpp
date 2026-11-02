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
int FUN_8c2015b0_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2015b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  int ar6_00;
  int ar6_01;
  int iVar6;
  uint a5;
  uint uVar7;
  
  if (((((*(le<short>* )(unsigned)(ar5 + 0x4c) == 0) || (3 < *(le<ushort>* )(unsigned)(ar5 + 0x4c))) ||
       (3 < *(le<ushort>* )(unsigned)(ar5 + 0x54))) ||
      ((*(le<int>* )(unsigned)(ar5 + 0x44) == 0 || (*(le<int>* )(unsigned)(ar5 + 0x48) == 0)))) ||
     ((*(le<short>* )(unsigned)(ar5 + 0x54) != 0 && (*(le<int>* )(unsigned)(ar5 + 0x50) == 0)))) {
    iVar2 = -0x100;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 40)), memset(ar4,0,0x60,ar7));
    (vsp = ((unsigned long)(fr0_ - 40)), memset(ar4,0x20,0x10,ar7));
    (vsp = ((unsigned long)(fr0_ - 40)), memset(ar4 + 0x10,0x20,0x20,ar7));
    (vsp = ((unsigned long)(fr0_ - 40)), memset(ar4 + 0x30,0,0x10,ar7));
    iVar2 = 0;
    pcVar4 = ar5;
    pcVar5 = ar4;
    do {
      if (*pcVar4 == '\0') break;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      iVar2 = iVar2 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (iVar2 < 0x10);
    iVar2 = 0;
    pcVar5 = ar4 + 0x10;
    pcVar4 = ar5 + 0x12;
    do {
      if (*pcVar4 == '\0') break;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      iVar2 = iVar2 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (iVar2 < 0x20);
    iVar2 = 0;
    pcVar4 = ar5 + 0x34;
    pcVar5 = ar4 + 0x30;
    do {
      if (*pcVar4 == '\0') break;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      iVar2 = iVar2 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (iVar2 < 0x10);
    ar6_01 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c273bb8) + (*(le<ushort>* )(unsigned)(ar5 + 0x4c) & 3) * 4);
    ar6_00 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c273bc8) + (*(le<ushort>* )(unsigned)(ar5 + 0x54) & 3) * 4);
    iVar6 = *(le<int>* )(unsigned)(ar5 + 0x5c);
    iVar2 = ar6_01 + ar6_00;
    *(le<undefined2>* )(unsigned)(ar4 + 0x42) = *(le<undefined2>* )(unsigned)(ar5 + 0x4e);
    *(le<undefined2>* )(unsigned)(ar4 + 0x40) = *(le<undefined2>* )(unsigned)(ar5 + 0x4c);
    a5 = iVar6 + iVar2 + 0x80;
    if ((*(le<short>* )(unsigned)(ar5 + 0x54) == 0) || (*(le<int>* )(unsigned)(ar5 + 0x50) == 0)) {
      ar4[0x44] = '\0';
      ar4[0x45] = '\0';
      (*(le<int>* )(fr0_ - 0x24)) = 0;
    }
    else {
      (*(le<int>* )(fr0_ - 0x24)) = ar6_01 + 0x80;
      *(le<undefined2>* )(unsigned)(ar4 + 0x44) = *(le<undefined2>* )(unsigned)(ar5 + 0x54);
    }
    if ((*(le<int>* )(unsigned)(ar5 + 0x5c) == 0) || (*(le<int>* )(unsigned)(ar5 + 0x58) == 0)) {
      ar4[0x48] = '\0';
      ar4[0x49] = '\0';
      ar4[0x4a] = '\0';
      ar4[0x4b] = '\0';
      (*(le<int>* )(fr0_ - 0x28)) = 0;
    }
    else {
      iVar2 = iVar2 + 0x80;
      *(le<undefined4>* )(unsigned)(ar4 + 0x48) = *(le<undefined4>* )(unsigned)(ar5 + 0x5c);
      (*(le<int>* )(fr0_ - 0x28)) = iVar2;
    }
    if (ar6_01 != 0) {
      (vsp = ((unsigned long)(fr0_ - 40)), memmove(ar4 + 0x60,*(le<undefined4>* )(unsigned)(ar5 + 0x44),0x20,pcVar4));
      (vsp = ((unsigned long)(fr0_ - 40)), memmove(ar4 + 0x80,*(le<undefined4>* )(unsigned)(ar5 + 0x48),ar6_01,pcVar4));
      iVar2 = ar6_01;
    }
    if (ar6_00 != 0) {
      (vsp = ((unsigned long)(fr0_ - 40)), memmove(ar4 + (*(le<int>* )(fr0_ - 0x24)),*(le<undefined4>* )(unsigned)(ar5 + 0x50),ar6_00,pcVar4));
      iVar2 = ar6_00;
    }
    if (*(le<int>* )(unsigned)(ar5 + 0x5c) != 0) {
      iVar2 = *(le<int>* )(unsigned)(ar5 + 0x5c);
      (vsp = ((unsigned long)(fr0_ - 40)), memmove(ar4 + (*(le<int>* )(fr0_ - 0x28)),*(le<undefined4>* )(unsigned)(ar5 + 0x58),iVar2,pcVar4));
    }
    uVar7 = a5 & 0x1ff;
    if (uVar7 != 0) {
      iVar2 = 0x200 - uVar7;
      (vsp = ((unsigned long)(fr0_ - 40)), memset(ar4 + a5,0,iVar2,pcVar4));
    }
    uVar3 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c201948(ar4,a5,iVar2,pcVar4));
    *(le<short>* )(unsigned)(ar4 + 0x46) = (short)uVar3;
    iVar2 = (uint)(uVar7 != 0) + (a5 >> 9);
  }
  return iVar2;
}

__asm__(".globl FUN_8c2015b0\n.set FUN_8c2015b0, FUN_8c2015b0_def\n");

}
