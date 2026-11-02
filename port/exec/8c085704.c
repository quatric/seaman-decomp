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
int FUN_8c085704_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c085704";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint in_fr1 = 0;
  ulonglong uVar5;
  char cVar6;
  
  cVar6 = '\0';
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02702c(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  piVar4 = (int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + (short)uVar1 * 0x124);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c015bb8(piVar4 + 0x1c,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x344) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x2c) + 0x2c) + 0x2c);
  *(undefined4 *)(unsigned)(ar4 + 0x348) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x344) + 0x2c);
  *(undefined4 *)(unsigned)(ar4 + 0x34c) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x344) + 0x2c) + 0x30);
  *(undefined4 *)(unsigned)(ar4 + 0x350) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x344) + 0x2c) + 0x30) + 0x30);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c015510(*piVar4 + 0x1e8,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x348) + 4) = uVar1;
  *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x34c) + 4) = uVar1;
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x374) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x374) = (ulonglong)in_fr1;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x378) = 0;
    uVar5 = CONCAT44(0x40a00000,in_fr1);
    *(undefined4 *)(unsigned)(ar4 + 0x37c) = 0x40a00000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x378) = (ulonglong)in_fr1;
    uVar5 = 0x3a040a00000;
    *(undefined8 *)(unsigned)(ar4 + 0x37c) = 0x3a040a00000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x3a0) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x3a0) = uVar5 & 0xffffffff;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x3a4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x3a8) = 0x40a00000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x3a4) = uVar5 & 0xffffffff;
    *(undefined8 *)(unsigned)(ar4 + 0x3a8) = 0x3a040a00000;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02a788(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02aabc(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x358) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x354) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x360) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x35c) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  iVar3 = (int)(short)uVar1;
  if (iVar3 == 6) {
    *(undefined4 *)(unsigned)(ar4 + 0x358) =
         *(undefined4 *)(unsigned)
          (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x2c) +
                                                       0x2c) + 0x30) + 0x30) + 0x30) + 0x2c) + 0x2c)
    ;
    iVar3 = 0x354;
    *(undefined4 *)(unsigned)(ar4 + 0x354) =
         *(undefined4 *)(unsigned)
          (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) +
                                                                         0x2c) + 0x2c) + 0x30) +
                                              0x30) + 0x30) + 0x2c) + 0x30) + 0x2c);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c085704\n.set _FUN_8c085704, _FUN_8c085704_def\n");
