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
undefined4 Class_12b2ac_m6_0afcc0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b2ac_m6_0afcc0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b68(ar4,0x8c286dbc,ar6,ar7));
  *(undefined4 *)(unsigned)(0x128 + ar4) = ar5;
  if (1 < *(int *)(unsigned)(0x314 + ar4)) {
    ar7 = 0;
    ar6 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033a8c))))
              (ar4 + 0xb0,0xe,0xffffffff,0));
  }
  uVar3 = 0x12;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x12,ar6,ar7));
  piVar2 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar1,uVar3,ar6,ar7));
  uVar1 = 0;
  if (*(int *)(unsigned)(*piVar2 + 0x18) != 0) {
    uVar3 = 0x12;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x12,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar1,uVar3,ar6,ar7));
    uVar5 = 1;
    puVar4 = (&(*(undefined1 *)(unsigned)0x8c13ba4c));
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar1,(&(*(undefined1 *)(unsigned)0x8c13ba4c)),1));
    uVar3 = 0x13;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x13,puVar4,uVar5));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar1,uVar3,puVar4,uVar5));
    uVar5 = 1;
    puVar4 = (&(*(undefined1 *)(unsigned)0x8c13ba4c)) + 0x18;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar1,puVar4,1));
    uVar3 = 0x14;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x14,puVar4,uVar5));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar1,uVar3,puVar4,uVar5));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar1,(&(*(undefined1 *)(unsigned)0x8c13ba4c)) + 0x30,1));
  }
  return uVar1;
}

__asm__(".globl _Class_12b2ac_m6_0afcc0\n.set _Class_12b2ac_m6_0afcc0, _Class_12b2ac_m6_0afcc0_def\n");
