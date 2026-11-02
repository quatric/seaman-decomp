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
undefined4 FUN_8c0342d8_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0342d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  uint in_fr1 = 0;
  float in_fr4 = 0;
  undefined4 in_fr14 = 0;
  bool bVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 36)), Vec3_ctor_xyz(&(*(int *)(fr0_ - 0x20)),ar5,ar6,ar7));
  if (ar5 == (int *)(unsigned)0x0) {
    (vsp = ((unsigned long)(fr0_ - 36)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),&(*(int *)(fr0_ - 0x20)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), Vec3_dtor(&(*(int *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  }
  else {
    if (cVar3 == '\0') {
      bVar1 = in_fr4 < 0.0;
    }
    else {
      bVar1 = CONCAT44D(in_fr14,in_fr4) < (double)(ulonglong)in_fr1;
    }
    if (bVar1) {
      in_fr4 = 0.0;
    }
    while( true ) {
      if (cVar3 == '\0') {
        iVar2 = (int)in_fr4;
      }
      else {
        iVar2 = (int)CONCAT44D(in_fr14,in_fr4);
      }
      if (iVar2 <= *ar5) break;
      ar5 = ar5 + 4;
    }
    if (cVar3 == '\0') {
      iVar2 = (int)in_fr4;
    }
    else {
      iVar2 = (int)CONCAT44D(in_fr14,in_fr4);
    }
    if (*ar5 != iVar2) {
      ar5 = ar5 + -4;
    }
    if (cVar4 == '\0') {
      (*(int *)(fr0_ - 0x20)) = ar5[1];
      (*(int *)(fr0_ - 0x1c)) = ar5[2];
      (*(int *)(fr0_ - 0x18)) = ar5[3];
    }
    else {
      (*(int *)(fr0_ - 0x20)) = (int)*(undefined8 *)(unsigned)(ar5 + 1);
      (*(int *)(fr0_ - 0x1c)) = (int)*(undefined8 *)(unsigned)(ar5 + 2);
      (*(int *)(fr0_ - 0x18)) = (int)*(undefined8 *)(unsigned)(ar5 + 3);
      (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar5 + 3) >> 0x20);
    }
    (vsp = ((unsigned long)(fr0_ - 36)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),&(*(int *)(fr0_ - 0x20)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), Vec3_dtor(&(*(int *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c0342d8\n.set _FUN_8c0342d8, _FUN_8c0342d8_def\n");
