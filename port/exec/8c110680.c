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
uint FUN_8c110680_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c110680";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  
  cVar6 = '\0';
  if ((*(char *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x30) != '\x01') ||
     (*(uint *)(unsigned)(ar4 + 0x48) < *(uint *)(unsigned)(ar4 + 0x2c))) {
    uVar4 = (((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1];
    pfVar1 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),uVar4,ar6,ar7));
    if (pfVar1 == (float *)(unsigned)0x0) {
      if (*(char *)(unsigned)(ar4 + 0x28) != '\0') {
        iVar3 = *(int *)(unsigned)(ar4 + 0x48);
        while (iVar3 != 0) {
          cVar6 = '\0';
          iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),uVar4,ar6,ar7));
          if (iVar3 == 0) break;
          if (cVar6 == '\0') {
            uVar5 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x44),*(undefined4 *)(unsigned)(ar4 + 0x34));
          }
          else {
            uVar5 = *(undefined8 *)(unsigned)(ar4 + 0x44);
          }
          *(bool *)(unsigned)iVar3 = (float)uVar5 < F32HI(uVar5);
          iVar3 = *(int *)(unsigned)(ar4 + 0x48) + -1;
          *(int *)(unsigned)(ar4 + 0x48) = iVar3;
        }
        if (*(int *)(unsigned)(ar4 + 0x48) == 0) {
          *(undefined1 *)(unsigned)(ar4 + 0x28) = 0;
        }
        return (int)*(char *)(unsigned)(ar4 + 0x28);
      }
    }
    else {
      if (cVar6 == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x44),*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x3c)));
      }
      else {
        uVar5 = *(undefined8 *)(unsigned)(ar4 + 0x44);
      }
      *(float *)(unsigned)(ar4 + 0x44) = F32HI(uVar5) - (float)uVar5;
      pfVar2 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x3c));
      *(unsigned *)(unsigned)(ar4 + 0x3c) = pfVar2 + 1;
      *pfVar2 = *pfVar1;
      *(float *)(unsigned)(ar4 + 0x44) = *(float *)(unsigned)(ar4 + 0x44) + *pfVar1;
      if (*(int *)(unsigned)(ar4 + 0x3c) == *(int *)(unsigned)(ar4 + 0x40)) {
        *(undefined4 *)(unsigned)(ar4 + 0x3c) = *(undefined4 *)(unsigned)(ar4 + 0x38);
      }
      if (*(int *)(unsigned)(ar4 + 0x48) == *(int *)(unsigned)(ar4 + 0x2c)) {
        cVar6 = '\0';
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),uVar4,ar6,ar7));
        if (cVar6 == '\0') {
          uVar5 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x44),*(undefined4 *)(unsigned)(ar4 + 0x34));
        }
        else {
          uVar5 = *(undefined8 *)(unsigned)(ar4 + 0x44);
        }
        *(bool *)(unsigned)uVar4 = (float)uVar5 < F32HI(uVar5);
      }
      else {
        *(int *)(unsigned)(ar4 + 0x48) = *(int *)(unsigned)(ar4 + 0x48) + 1;
      }
    }
  }
  iVar3 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  return *(int *)(unsigned)((((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1] * 4 + *(int *)(unsigned)(iVar3 + 0x40)) == *(int *)(unsigned)(iVar3 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c110680\n.set _FUN_8c110680, _FUN_8c110680_def\n");
