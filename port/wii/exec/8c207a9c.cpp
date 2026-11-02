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
int s_DisplayMode_207aaa_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_DisplayMode_207aaa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  int iVar3;
  char *a5;
  undefined4 ar7_00;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c21214e(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), s_HARDWARE_205e00(((undefined1 *)(unsigned)0x8c26d3a8),((undefined1 *)(unsigned)0x8c26d3bc),ar4,ar7_00));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), s_HARDWARE_205e00(((undefined1 *)(unsigned)0x8c26d3a8),((undefined1 *)(unsigned)0x8c26d3c8),ar7,ar7_00));
  a5 = ((undefined1 *)(unsigned)0x8c26d3d4);
  iVar3 = (vsp = ((unsigned long)(fr0_ - 52)), s_HARDWARE_205e00(((undefined1 *)(unsigned)0x8c26d3a8),((undefined1 *)(unsigned)0x8c26d3d4),ar6,ar7_00));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bc8) = uVar1 & 3;
  if ((uVar1 & 0x42) == 0x42) {
    (*(le<uint>* )(fr0_ - 0x28)) = uVar1;
    (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4a9e24)))(&(*(le<uint>* )(fr0_ - 0x28)),a5,ar6,ar7_00));
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc) = (*(le<int>* )(fr0_ - 0x24));
    if (((*(le<int>* )(fr0_ - 0x24)) < 0) || (4 < (*(le<int>* )(fr0_ - 0x24)))) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc) = 1;
    }
  }
  if ((((ar5 != 5) && (ar5 != 4)) && (ar5 != 3)) && ((ar5 != 1 && (ar5 != 0)))) {
    iVar5 = 1;
  }
  uVar4 = (uint)(iVar2 != 0);
  (*(le<uint>* )(fr0_ - 0x34)) = (uint)(iVar3 != 0);
  if (iVar5 == 0) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bd4) = (*(le<uint>* )(fr0_ - 0x34));
    if (uVar1 == 1) {
      iVar2 = 0x1e0;
      (*(le<undefined4>* )(fr0_ - 0x2c)) = 0x280;
      (*(le<undefined4>* )(fr0_ - 0x30)) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ecc) = 0x1e0;
    }
    else {
      if (((uVar1 & 1) == 1) || ((uVar1 & 0x2c) == 0)) {
        (*(le<undefined4>* )(fr0_ - 0x30)) = 0;
      }
      else {
        (*(le<undefined4>* )(fr0_ - 0x30)) = 1;
      }
      if ((uVar1 & 0x10) == 0) {
        (*(le<undefined4>* )(fr0_ - 0x2c)) = 0x140;
      }
      else {
        (*(le<undefined4>* )(fr0_ - 0x2c)) = 0x280;
      }
      if ((uVar1 & 0x20) == 0) {
        if ((uVar1 & 0x42) == 0x42) {
          iVar2 = (int)(*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa084) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc) * 4) +
                       (uint)(*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa084) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc) * 4) < 0)) >> 1;
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ecc) = iVar2;
        }
        else {
          iVar2 = 0xf0;
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ecc) = iVar2;
        }
      }
      else {
        if ((uVar1 & 0x42) == 0x42) {
          iVar2 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa084) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc) * 4);
        }
        else {
          iVar2 = 0x1e0;
        }
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ecc) = (int)(iVar2 + (uint)(iVar2 < 0)) >> 1;
      }
    }
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) = uVar1;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bd0) = ar5;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bd8) = uVar4;
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bc8) == 1) {
      iVar5 = 0;
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c25eb60(0x280,0x1e0,ar6,ar7_00));
    }
    else if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bc8) == 0) {
      iVar5 = 0;
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c25e884(0x280,0x1e0,ar6,ar7_00));
    }
    else if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bc8) == 2) {
      iVar5 = 0;
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c25e540(0x280,0x1e0,ar6,ar7_00));
    }
    else {
      iVar5 = 1;
    }
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c25dc60((*(le<undefined4>* )(fr0_ - 0x2c)),iVar2,ar5,(*(le<undefined4>* )(fr0_ - 0x30))));
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c2079a0((*(le<undefined4>* )(fr0_ - 0x2c)),iVar2,ar5,(*(le<undefined4>* )(fr0_ - 0x30))));
  }
  return iVar5;
}

__asm__(".globl s_DisplayMode_207aaa\n.set s_DisplayMode_207aaa, s_DisplayMode_207aaa_def\n");

}
