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
undefined4 FUN_8c0fc94c_def(int ar4,char *ar5,char *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fc94c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *ar5_00;
  char *ar6_00;
  
  iVar4 = (int)*ar5;
  if (iVar4 < 0x4a) {
    if (0x48 < iVar4) {
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 8) = 1;
      return 1;
    }
    if ((iVar4 < 0x44) && (0x40 < iVar4)) {
      if (iVar4 == 0x41) {
        return 0x41;
      }
      if (iVar4 == 0x43) {
        iVar4 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(ar6,ar5,ar6,ar7));
        if (8 < iVar4) {
          return 8;
        }
        if (iVar4 < 1) {
          return 1;
        }
                    
        switch(iVar4) {
        case 1:
          *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb4) = iVar4;
          return 0xb4;
        }
        *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb0) = 1;
        iVar4 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb0);
        if (iVar4 != 1) {
          return iVar4;
        }
        *(undefined4 *)(unsigned)(ar4 + 0xbc) = 600;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0fda5c(ar4,ar5,ar6,ar7));
        return uVar3;
      }
    }
  }
  else if (iVar4 < 0x57) {
    if (0x4a < iVar4) {
                    
      switch(iVar4) {
      case 0x4b:
        uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(ar6,ar5,ar6,ar7));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0fdd98(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40),uVar3,ar6,ar7));
        return uVar3;
      case 0x50:
        return (&(*(undefined1 *)(unsigned)0x8c0fc9c0))[iVar4 + -0x4b];
      case 0x52:
        uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(ar6,ar5,ar6,ar7));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0fda28(ar4,uVar3,ar6,ar7));
        return uVar3;
      case 0x55:
        uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(ar6,ar5,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0xc0) = uVar3;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0fd8d0(ar4,ar5,ar6,ar7));
        return uVar3;
      case 0x56:
        uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(ar6,ar5,ar6,ar7));
        *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x70) = uVar3;
        return 0x70;
      }
    }
  }
  else if (iVar4 == 100) {
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c1f8176(((undefined1 *)(fr0_ - 0x2a)),ar5,ar6,ar7));
    (*(undefined1 *)(fr0_ - 0x26)) = 0;
    (*(undefined1 *)(fr0_ - 0x25)) = 0;
    (*(undefined1 *)(fr0_ - 0x24)) = 0;
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c1f8176(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,ar7));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0xc0,ar5,ar6,ar7));
    (*(undefined1 *)(fr0_ - 0x32)) = (undefined1)uVar3;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0xc4,ar5,ar6,ar7));
    (*(undefined1 *)(fr0_ - 0x31)) = (undefined1)uVar3;
    (*(undefined1 *)(fr0_ - 0x30)) = 0;
    (*(undefined1 *)(fr0_ - 0x2f)) = 0;
    (*(undefined1 *)(fr0_ - 0x2e)) = 0;
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0xbc,ar5,ar6,ar7));
    ar5_00 = ((undefined1 *)(fr0_ - 0x34));
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c1f823a(((undefined1 *)(fr0_ - 0x2a)),ar5_00,ar6,ar7));
    uVar3 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c141e10)); *(unsigned *)((((unsigned long)(fr0_ - 52)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 52)) - 8); FUN_8c014334(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0x1c4,ar5_00,ar6,ar7); })
    ;
    return uVar3;
  }
  ar6_00 = ar6;
  iVar4 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(ar5,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + iVar4 * 4 + 0x10,ar5,ar6_00,ar7));
  if (*ar6 == '+') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(ar6 + 1,ar5,ar6_00,ar7));
    iVar1 = iVar1 + iVar2;
  }
  else if (*ar6 == '-') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(ar6 + 1,ar5,ar6_00,ar7));
    iVar1 = iVar1 - iVar2;
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(ar6,ar5,ar6_00,ar7));
  }
  if (999 < iVar1) {
    iVar1 = 999;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (((iVar4 == 6) &&
      (iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0x28,ar5,ar6_00,ar7)),
      iVar2 == iVar1)) && (0 < iVar2)) {
    *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x70) = 0x11;
  }
  uVar3 = ({ unsigned long t0_ = (unsigned long)(
                       ((undefined1 *)(unsigned)0x8c141e10)); *(unsigned *)((((unsigned long)(fr0_ - 52)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 52)) - 8); FUN_8c014334(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + iVar4 * 4 + 0x10,ar5,ar6_00,ar7); });
  return uVar3;
}

__asm__(".globl _FUN_8c0fc94c\n.set _FUN_8c0fc94c, _FUN_8c0fc94c_def\n");
