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
undefined4 FUN_8c0d84e8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d84e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 in_dr0 = 0;
  float fVar4;
  undefined4 in_fr14 = 0;
  bool bVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  if ((*(undefined1 *)(unsigned)0x8c437ca4) == '\0') {
    in_dr0 = CONCAT44(0x3e8f5c29,(int)in_dr0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437ca0) = 0x3e8f5c29;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437ca4) = CONCAT31((*(undefined1 *)(unsigned)0x8c437ca4),1);
  }
  fVar4 = 0.0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d8710(ar4,ar5,ar6,ar7));
  if (ar4[1] == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d8aa0(ar4,*ar4,ar6,ar7));
    puVar2 = (undefined8 *)(unsigned)(iVar1 * 0x14 + -0x73bc6a84);
    if (cVar7 == '\0') {
      ar4[0xe] = *(undefined4 *)(unsigned)puVar2;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0xe) = *puVar2;
    }
    puVar2 = (undefined8 *)(unsigned)(iVar1 * 0x14 + -0x73bc6a80);
    if (cVar7 == '\0') {
      ar4[0xf] = *(undefined4 *)(unsigned)puVar2;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0xf) = *puVar2;
    }
    puVar2 = (undefined8 *)(unsigned)(iVar1 * 0x14 + -0x73bc6a7c);
    if (cVar7 == '\0') {
      ar4[0x10] = *(undefined4 *)(unsigned)puVar2;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x10) = *puVar2;
    }
    puVar2 = (undefined8 *)(unsigned)(iVar1 * 0x14 + -0x73bc6a78);
    if (cVar7 == '\0') {
      ar4[0x11] = *(undefined4 *)(unsigned)puVar2;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x11) = *puVar2;
    }
    puVar2 = (undefined8 *)(unsigned)(iVar1 * 0x14 + -0x73bc6a74);
    if (cVar7 == '\0') {
      ar4[0x12] = *(undefined4 *)(unsigned)puVar2;
      in_dr0 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437ca0),ar4[0x12]);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x12) = *puVar2;
      in_dr0 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437ca4),(*(undefined4 *)(unsigned)(unsigned)0x8c437ca0));
    }
    if (cVar6 == '\0' && F32HI(in_dr0) < (float)in_dr0) {
      if (cVar7 == '\0') {
        in_dr0 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437ca0),(float)in_dr0);
        ar4[0x12] = (*(undefined4 *)(unsigned)(unsigned)0x8c437ca0);
      }
      else {
        in_dr0 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437ca4),(*(undefined4 *)(unsigned)(unsigned)0x8c437ca0));
        *(undefined8 *)(unsigned)(ar4 + 0x12) = in_dr0;
      }
    }
  }
  else if (ar4[1] == 1) {
    if (cVar7 == '\0') {
      ar4[0xe] = ar4[0x17];
      ar4[0xf] = ar4[0x18];
      ar4[0x10] = ar4[0x19];
      ar4[0x11] = ar4[0x1a];
      in_dr0 = CONCAT44(ar4[0x1b],(int)in_dr0);
      ar4[0x12] = ar4[0x1b];
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0xe) = *(undefined8 *)(unsigned)(ar4 + 0x17);
      *(undefined8 *)(unsigned)(ar4 + 0xf) = *(undefined8 *)(unsigned)(ar4 + 0x18);
      *(undefined8 *)(unsigned)(ar4 + 0x10) = *(undefined8 *)(unsigned)(ar4 + 0x19);
      *(undefined8 *)(unsigned)(ar4 + 0x11) = *(undefined8 *)(unsigned)(ar4 + 0x1a);
      in_dr0 = *(undefined8 *)(unsigned)(ar4 + 0x1b);
      *(undefined8 *)(unsigned)(ar4 + 0x12) = in_dr0;
    }
    if (((ar4[0x1c] == 1) && (ar4[0x1d] == 0)) && (ar4[0x1b8f] == -1)) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), pack_acquire_entry_handle(0x8c2b59d0,ar4[0x1b8e],ar6,ar7));
      ar4[0x1b8f] = uVar3;
    }
    if (((ar4[0x1c] == 0) && (ar4[0x1b8f] != -1)) && (ar4[0x1b91] == 0)) {
      (vsp = ((unsigned long)(fr0_ - 4)), pack_release_entry_handle(0x8c2b59d0,ar4[0x1b8f],ar6,ar7));
      ar4[0x1b8f] = 0xffffffff;
    }
    if (ar4[0x1b89] != -1) {
      ar7 = ar4[0x1b8a];
      ar6 = 0;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021d90(0x8c2b59d0,ar4[0x1b89],0,ar7));
    }
  }
  uVar3 = *ar4;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d82f0(ar4,uVar3,ar6,ar7));
  if (cVar7 == '\0') {
    fVar4 = F32HI(in_dr0);
  }
  if (cVar6 == '\0') {
    bVar5 = fVar4 < 1.0;
  }
  else {
    bVar5 = CONCAT44D(in_fr14,fVar4) < CONCAT44D(0x3f800000,(int)in_dr0);
  }
  if (bVar5) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c235f14(ar4,uVar3,ar6,ar7));
  }
  else {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c235ee4(ar4,uVar3,ar6,ar7));
  }
  return uVar3;
}

__asm__(".globl _FUN_8c0d84e8\n.set _FUN_8c0d84e8, _FUN_8c0d84e8_def\n");
