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
undefined4 FUN_8c0df668_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0df668";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int ar5_00;
  int iVar4;
  int iVar5;
  undefined4 in_fr1 = 0;
  undefined8 uVar6;
  undefined4 uVar7;
  char cVar8;
  
  cVar8 = '\0';
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d99b8(&(*(undefined4 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  if (cVar8 == '\0') {
    (*(undefined4 *)(fr0_ - 0x2c)) = *(undefined4 *)(unsigned)(ar4 + 0x22d4c);
    (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(ar4 + 0x22d50);
    (*(undefined4 *)(fr0_ - 0x24)) = *(undefined4 *)(unsigned)(ar4 + 0x22d54);
    uVar6 = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),in_fr1);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x22d4c);
    (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x22d50);
    uVar6 = *(undefined8 *)(unsigned)(ar4 + 0x22d54);
    (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)uVar6;
    (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  uVar2 = (undefined4)uVar6;
  iVar4 = ar4;
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0dbdf4(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x1024) != 0) {
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d2028(iVar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c016340(ar4 + 0x1028,ar5,ar6,ar7));
  }
  iVar4 = ar4 + 0x7c;
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0e3ebc(ar4,ar4 + 0x78,iVar4,ar7));
  if (cVar8 == '\0') {
    (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(ar4 + 0x78);
    (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4 + 0x7c);
    uVar7 = 0x42c80000;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x78);
    (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x7c);
    uVar2 = 0x42c80000;
    uVar7 = 0xa68;
  }
  (*(undefined4 *)(fr0_ - 0x14)) = 0x42c80000;
  (*(int *)(fr0_ - 0x10)) = ar4 + 0xa68;
  puVar3 = &(*(undefined4 *)(fr0_ - 0x1c));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d400c(ar4 + 0x10ac,puVar3,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0e3f24(ar4,puVar3,iVar4,ar7));
  puVar3 = &(*(undefined4 *)(fr0_ - 0x1c));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d4900(ar4 + 0x10ac,puVar3,iVar4,ar7));
  if (cVar8 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438250) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c438254),uVar7);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438250) = CONCAT44(uVar7,uVar2);
    (*(undefined4 *)(fr0_ - 0x2c)) = uVar7;
  }
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0e15fc(ar4,puVar3,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01538c(ar4 + 0x22d40,puVar3,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d7410(ar4 + 0x22d48,puVar3,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d7410(ar4 + 0x22eb4,puVar3,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d7410(ar4 + 0x23020,puVar3,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d1168(ar4 + 0x13b8c,puVar3,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d05d0(ar4 + 0x13b24,puVar3,iVar4,ar7));
  ar5_00 = ar4 + 0x226f8;
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0e4198(ar4,ar5_00,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d9720(ar4 + 0x22704,ar5_00,iVar4,ar7));
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0f6ab0(ar4 + iVar5 * 0x68 + 0xc0c,ar5_00,iVar4,ar7));
    if (iVar1 == 1) {
      iVar4 = ar4 + 4;
      ar5_00 = ar4 + 0xc;
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0f7118(ar4 + iVar5 * 0x68 + 0xc0c,ar5_00,iVar4,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0da754(ar4,ar5_00,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,iVar4,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), free_if_nonnull_wrap_0deb30(&(*(undefined4 *)(fr0_ - 0x1c)),0xffffffff,iVar4,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0df668\n.set _FUN_8c0df668, _FUN_8c0df668_def\n");
