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
undefined4 FUN_8c11dc7e_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11dc7e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined4 ar5_00;
  int *ar6_00;
  
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    return 1;
  }
  if (ar6 == (int *)(unsigned)0x0) {
    ar5_00 = 0x13;
LAB_8c11dd8c:
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,ar5_00,ar6_00,ar7));
    return uVar2 & 0xff;
  }
  switch((uint)ar5) {
  case 1:
    *ar6 = *(int *)(unsigned)(ar4 + 0x8c);
    return 0;
  case 2:
    iVar1 = 0x88;
    goto LAB_8c11dd50;
  case 3:
    iVar1 = 0xbc;
    goto LAB_8c11dd6a;
  case 4:
    iVar1 = *(int *)(unsigned)(ar4 + 0x90) * 10;
    break;
  case 5:
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(*(undefined4 *)(unsigned)(ar4 + 0x78),100,vr6,vr7));
    *ar6 = iVar1;
    return 0;
  case 6:
    iVar1 = 0xa4;
    goto LAB_8c11dd6a;
  case 7:
    iVar1 = 0x32 - *(short *)(unsigned)(ar4 + 0xa2);
    break;
  case 8:
    iVar1 = 0x32 - *(short *)(unsigned)(ar4 + 0xa0);
    goto LAB_8c11dd7a;
  case 9:
    iVar1 = 0x94;
LAB_8c11dd50:
    iVar1 = *(int *)(unsigned)(iVar1 + ar4);
    break;
  case 10:
    iVar1 = *(int *)(unsigned)(ar4 + 0x98) * 10;
    goto LAB_8c11dd7a;
  case 0xb:
    iVar1 = *(int *)(unsigned)(ar4 + 0x7c);
    break;
  case 0xc:
    iVar1 = *(int *)(unsigned)(ar4 + 0x80);
    break;
  case 0xd:
    iVar1 = 0xac;
LAB_8c11dd6a:
    iVar1 = *(int *)(unsigned)(iVar1 + ar4);
LAB_8c11dd7a:
    *ar6 = iVar1;
    return 0;
  case 0xe:
    iVar1 = *(int *)(unsigned)(ar4 + 0x9c);
    goto LAB_8c11dd7a;
  default:
    ar5_00 = 10;
    goto LAB_8c11dd8c;
  }
  *ar6 = iVar1;
  return 0;
}

__asm__(".globl _FUN_8c11dc7e\n.set _FUN_8c11dc7e, _FUN_8c11dc7e_def\n");
