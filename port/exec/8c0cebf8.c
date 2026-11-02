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
undefined4 * FUN_8c0cebf8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0cebf8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_fr1 = 0;
  ulonglong uVar7;
  char cVar8;
  
  cVar8 = '\0';
  uVar5 = 0x14;
  pcVar3 = ((void *)0x8c0ceed8);
  pcVar2 = ((void *)0x8c0c524c);
  ({ unsigned long t0_ = (unsigned long)(0x10); *(unsigned *)((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 20)) - 8); FUN_8c010120(ar4 + 1,((void *)0x8c0c524c),((void *)0x8c0ceed8),0x14); });
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c015224(ar4 + 0x56,pcVar2,pcVar3,uVar5));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0162f8(ar4 + 0x58,pcVar2,pcVar3,uVar5));
  uVar5 = 0x18;
  pcVar3 = ((void *)0x8c0cee98);
  pcVar2 = ((void *)0x8c0c526c);
  ({ unsigned long t0_ = (unsigned long)(0x19); *(unsigned *)((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 20)) - 8); FUN_8c010120(ar4 + 0x5d,((void *)0x8c0c526c),((void *)0x8c0cee98),0x18); });
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0162f8(ar4 + 0xf3,pcVar2,pcVar3,uVar5));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0cf144(ar4,pcVar2,pcVar3,uVar5));
  if (cVar8 == '\0') {
    ar4[0x12a] = 0;
    ar4[299] = 0x437f0000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x12a) = (ulonglong)in_fr1;
    in_fr1 = 0x437f0000;
    *(undefined8 *)(unsigned)(ar4 + 299) = 0x4b0437f0000;
  }
  if (cVar8 == '\0') {
    ar4[300] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 300) = (ulonglong)in_fr1;
  }
  if (cVar8 == '\0') {
    ar4[0x12d] = 0;
    ar4[0x12e] = 0x437f0000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x12d) = (ulonglong)in_fr1;
    in_fr1 = 0x437f0000;
    *(undefined8 *)(unsigned)(ar4 + 0x12e) = 0x4b0437f0000;
  }
  if (cVar8 == '\0') {
    ar4[0x12f] = 0;
    ar4[0x130] = 0x437f0000;
    ar4[0x131] = 0x437f0000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x12f) = (ulonglong)in_fr1;
    *(undefined8 *)(unsigned)(ar4 + 0x130) = 0x4b0437f0000;
    in_fr1 = 0x437f0000;
    *(undefined8 *)(unsigned)(ar4 + 0x131) = 0x4b0437f0000;
  }
  iVar1 = 0;
  while (iVar6 = iVar1, iVar6 < 4) {
    ar4[iVar6 + 0x132] = 0xffffff;
    (*(int *)(fr0_ - 0x10)) = iVar6;
    iVar1 = iVar6 + 1;
  }
  *(undefined2 *)(unsigned)(ar4 + 0x136) = 0;
  *(undefined2 *)(unsigned)((int)ar4 + 0x4da) = 0xff;
  *(undefined2 *)(unsigned)(ar4 + 0x137) = 0;
  *(undefined2 *)(unsigned)((int)ar4 + 0x4de) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x138) = 0xff;
  *(undefined2 *)(unsigned)((int)ar4 + 0x4e2) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x139) = 0xff;
  *(undefined2 *)(unsigned)((int)ar4 + 0x4e6) = 0xff;
  uVar5 = 4;
  puVar4 = ar4 + 0x132;
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c016318(ar4 + 0x58,ar4 + 0x12a,puVar4,4); });
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c016324(ar4 + 0x58,ar4 + 0x136,puVar4,uVar5));
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c015198(ar4 + 0x58,0x80000060,puVar4,uVar5); });
  if (cVar8 == '\0') {
    ar4[0x13a] = 0;
    ar4[0x13b] = 0x42480000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x13a) = (ulonglong)in_fr1;
    in_fr1 = 0x42480000;
    *(undefined8 *)(unsigned)(ar4 + 0x13b) = 0x4f042480000;
  }
  if (cVar8 == '\0') {
    ar4[0x13c] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x13c) = (ulonglong)in_fr1;
  }
  if (cVar8 == '\0') {
    ar4[0x13d] = 0;
    uVar7 = CONCAT44(0x42480000,in_fr1);
    ar4[0x13e] = 0x42480000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x13d) = (ulonglong)in_fr1;
    uVar7 = 0x4f042480000;
    *(undefined8 *)(unsigned)(ar4 + 0x13e) = 0x4f042480000;
  }
  if (cVar8 == '\0') {
    ar4[0x13f] = 0;
    ar4[0x140] = 0x42480000;
    ar4[0x141] = 0x42480000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x13f) = uVar7 & 0xffffffff;
    *(undefined8 *)(unsigned)(ar4 + 0x140) = 0x4f042480000;
    *(undefined8 *)(unsigned)(ar4 + 0x141) = 0x4f042480000;
  }
  uVar5 = 4;
  puVar4 = ar4 + 0x132;
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c016318(ar4 + 0xf3,ar4 + 0x13a,puVar4,4); });
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c016324(ar4 + 0xf3,ar4 + 0x142,puVar4,uVar5));
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c015198(ar4 + 0xf3,0x80000060,puVar4,uVar5); });
  *ar4 = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0cebf8\n.set _FUN_8c0cebf8, _FUN_8c0cebf8_def\n");
