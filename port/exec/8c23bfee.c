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
int FUN_8c23bfee_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23bfee";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0x80;
  iVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c1300);
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    iVar1 = iVar3 * 4;
    iVar2 = *(int *)(unsigned)(*(int *)(unsigned)(iVar1 + -0x73b3ed80) * 4 + -0x73b3ee20);
    *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4ab284) + iVar1) = iVar2;
    iVar2 = *(int *)(unsigned)(iVar2 + 0x124);
    if (iVar2 == 0) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23a982);
    }
    else if (iVar2 == 1) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23a9d0);
    }
    else if (iVar2 == 2) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23a9fc);
    }
    else if (iVar2 == 0x82) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23aa50);
    }
    else if ((iVar2 == 4) || (iVar2 == 0x84)) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23aaa8);
    }
    else if (iVar2 == 0xc4) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23ab30);
    }
    else if (iVar2 == 8) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23ab90);
    }
    else if (iVar2 == 0x88) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23aca8);
    }
    else if (iVar2 == 200) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23ada8);
    }
    else if (iVar2 == 0x40) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)0x8c23ae48);
    }
    else if (iVar2 == 0x10) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23ae70);
    }
    else if (iVar2 == 0x90) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23af2c);
    }
    else if (iVar2 == 0x20) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23affc);
    }
    else if (iVar2 == 0xa0) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23b0f8);
    }
    else if (iVar2 == 0xe0) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23b208);
    }
    else if (iVar2 == 3) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23b2e4);
    }
    else if (iVar2 == 0x83) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23b35c);
    }
    else if ((iVar2 == 5) || (iVar2 == 0x85)) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23b3d8);
    }
    else if (iVar2 == 0xc5) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23b484);
    }
    else if (iVar2 == 0x13) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23b508);
    }
    else if (iVar2 == 0x93) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23b5e8);
    }
    else if (iVar2 == 0x25) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23b6dc);
    }
    else if (iVar2 == 0xa5) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23b7fc);
    }
    else if (iVar2 == 0xe5) {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23b930);
    }
    else {
      (((undefined4 *)(unsigned)0x8c277b40))[iVar3] = ((void *)(unsigned)0x8c23aa50);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c23bfee\n.set _FUN_8c23bfee, _FUN_8c23bfee_def\n");
