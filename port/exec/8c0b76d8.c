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
uint s_SEAMANDC_USR_0b76dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_SEAMANDC_USR_0b76dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7));
  uVar3 = 0;
  puVar2 = ((undefined1 *)(fr0_ - 0x20));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01bc2c))))
                    (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5c,puVar2,ar7));
  if (iVar1 == 5) {
    uVar3 = 4;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01bba0))))
                    (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x69,puVar2,ar7));
  if (iVar1 == 1) {
    uVar3 = uVar3 | 8;
  }
  puVar2 = ((undefined1 *)(fr0_ - 0x20));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01bc2c))))
                    (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x76,puVar2,ar7));
  if (iVar1 == 1) {
    uVar3 = uVar3 | 0x10;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01bba0))))
                    (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42,puVar2,ar7));
  if (iVar1 == 0) {
    uVar3 = uVar3 | 1;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01bc2c))))
                    (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5c,((undefined1 *)(fr0_ - 0x20)),ar7));
  if (iVar1 == 4) {
    uVar3 = uVar3 | 2;
  }
  return uVar3;
}

__asm__(".globl _s_SEAMANDC_USR_0b76dc\n.set _s_SEAMANDC_USR_0b76dc, _s_SEAMANDC_USR_0b76dc_def\n");
