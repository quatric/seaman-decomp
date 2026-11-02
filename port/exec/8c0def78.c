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
undefined4 FUN_8c0def78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0def78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 in_dr0 = 0;
  code *pcVar6;
  char cVar7;
  
  cVar7 = '\0';
  puVar4 = &(*(undefined4 *)(fr0_ - 0x1c));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d99b8(puVar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x1024) != 0) {
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d2028(puVar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c016340(ar4 + 0x1028,ar5,ar6,ar7));
  }
  if (*(int *)(unsigned)(ar4 + 0x1024) == 2) {
    if (*(int *)(unsigned)(ar4 + 0x1020) == 0) {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c0bf0e8(ar4 + 0x13b24,ar5,ar6,ar7); });
      uVar2 = (int)((ulonglong)in_dr0 >> 0x20);
      if (cVar7 == '\0') {
        uVar2 = ((undefined4 *)(fr0_ - 0x2c))[0];
      }
      ((undefined4 *)(fr0_ - 0x2c))[0] = uVar2;
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d1858(((undefined1 *)(unsigned)0x8c13f3b0),ar5,ar6,ar7));
    }
    else if (*(int *)(unsigned)(ar4 + 0x1020) == 1) {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c0bf11c(ar4 + 0x13b70,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d1858(((undefined1 *)(unsigned)0x8c13f400),ar5,ar6,ar7));
    }
  }
  uVar2 = (undefined4)in_dr0;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0dbdf4(ar4,ar5,ar6,ar7));
  iVar3 = ar4 + 0xa68;
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_ctor_copy(((undefined4 *)(fr0_ - 0x2c)),iVar3,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c0bf11c(ar4 + 0x13b70,iVar3,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d4e88(ar4 + 0x10ac,((undefined4 *)(fr0_ - 0x2c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined4 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
  iVar3 = ar4 + 0x7c;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0e3ebc(ar4,ar4 + 0x78,iVar3,ar7));
  if (cVar7 == '\0') {
    (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(ar4 + 0x78);
    (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4 + 0x7c);
    pcVar6 = (code *)0x42c80000;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x78);
    (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x7c);
    uVar2 = 0x42c80000;
    pcVar6 = ((void *)0x8c0d3f7c);
  }
  (*(undefined4 *)(fr0_ - 0x14)) = 0x42c80000;
  (*(int *)(fr0_ - 0x10)) = ar4 + 0xa68;
  puVar4 = &(*(undefined4 *)(fr0_ - 0x1c));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d3f7c(ar4 + 0x10ac,puVar4,iVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0e3f24(ar4,puVar4,iVar3,ar7));
  puVar4 = &(*(undefined4 *)(fr0_ - 0x1c));
  iVar3 = ar4 + 0x22d48;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d46cc(ar4 + 0x10ac,iVar3,puVar4,ar7));
  if (cVar7 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438048) = CONCAT44((*(undefined1 *)(unsigned)0x8c438048),pcVar6);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438048) = CONCAT44(pcVar6,uVar2);
  }
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0e157c(ar4,iVar3,puVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c01538c(ar4 + 0x22d40,iVar3,puVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d7410(ar4 + 0x22d48,iVar3,puVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d7410(ar4 + 0x22eb4,iVar3,puVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d7410(ar4 + 0x23020,iVar3,puVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d0990(ar4 + 0x13b70,iVar3,puVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d05d0(ar4 + 0x13b24,iVar3,puVar4,ar7));
  iVar3 = ar4 + 0x226f8;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0e4198(ar4,iVar3,puVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d9720(ar4 + 0x22704,iVar3,puVar4,ar7));
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0f6ab0(ar4 + iVar5 * 0x68 + 0xc0c,iVar3,puVar4,ar7));
    if (iVar1 == 1) {
      puVar4 = (undefined4 *)(unsigned)(ar4 + 4);
      iVar3 = ar4 + 0xc;
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0f7118(ar4 + iVar5 * 0x68 + 0xc0c,iVar3,puVar4,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0da754(ar4,iVar3,puVar4,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), free_if_nonnull_wrap_0deb30(&(*(undefined4 *)(fr0_ - 0x1c)),0xffffffff,puVar4,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0def78\n.set _FUN_8c0def78, _FUN_8c0def78_def\n");
