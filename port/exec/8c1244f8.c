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
uint FUN_8c1244f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1244f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 ar5_00;
  char cVar5;
  
  if ((*(char *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x30) != '\x01') &&
     ((*(char *)(unsigned)(ar4 + 0x48c) == '\0' || (*(char *)(unsigned)((((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)))[1] + 0x30) != '\x01'))))
  {
    ar5_00 = (((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1];
    puVar1 = (undefined8 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),ar5_00,ar6,ar7));
    if (puVar1 != (undefined8 *)(unsigned)0x0) {
      *(int *)(unsigned)(ar4 + 0x4d0) = *(int *)(unsigned)(ar4 + 0x4d0) + 1;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c123ea6(ar4,ar5_00,ar6,ar7));
      cVar5 = '\0';
      puVar2 = (undefined8 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5_00,ar6,ar7));
      if (cVar5 == '\0') {
        *(undefined4 *)(unsigned)puVar2 = *(undefined4 *)(unsigned)(ar4 + 0x4a4);
      }
      else {
        *puVar2 = *(undefined8 *)(unsigned)(ar4 + 0x4a4);
      }
      if (*(char *)(unsigned)(ar4 + 0x48c) != '\0') {
        cVar5 = '\0';
        puVar2 = (undefined8 *)(unsigned)
                 (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 4),ar5_00,ar6,ar7));
        if (cVar5 == '\0') {
          *(undefined4 *)(unsigned)puVar2 = *(undefined4 *)(unsigned)(ar4 + 0x2c);
          *(undefined4 *)(unsigned)((int)puVar2 + 4) = *(undefined4 *)(unsigned)(ar4 + 0x30);
          *(undefined4 *)(unsigned)(puVar2 + 1) = *(undefined4 *)(unsigned)(ar4 + 0x34);
          *(undefined4 *)(unsigned)((int)puVar2 + 0xc) = *(undefined4 *)(unsigned)(ar4 + 0x3c);
          *(undefined4 *)(unsigned)(puVar2 + 2) = *(undefined4 *)(unsigned)(ar4 + 0x38);
          *(undefined4 *)(unsigned)((int)puVar2 + 0x14) = *(undefined4 *)(unsigned)puVar1;
        }
        else {
          *puVar2 = *(undefined8 *)(unsigned)(ar4 + 0x2c);
          *(undefined8 *)(unsigned)((int)puVar2 + 4) = *(undefined8 *)(unsigned)(ar4 + 0x30);
          puVar2[1] = *(undefined8 *)(unsigned)(ar4 + 0x34);
          *(undefined8 *)(unsigned)((int)puVar2 + 0xc) = *(undefined8 *)(unsigned)(ar4 + 0x3c);
          puVar2[2] = *(undefined8 *)(unsigned)(ar4 + 0x38);
          *(undefined8 *)(unsigned)((int)puVar2 + 0x14) = *puVar1;
        }
      }
      if (((*(char *)(unsigned)(ar4 + 0x4ac) != '\0') &&
          (uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1238a6(ar4,ar5_00,ar6,ar7)), (uVar3 & 0xff) != 0)) ||
         ((*(char *)(unsigned)(ar4 + 0x4d8) != '\0' &&
          (uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1239f0(ar4,ar5_00,ar6,ar7)), (uVar3 & 0xff) != 0)))) {
        return 1;
      }
    }
  }
  iVar4 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  return *(int *)(unsigned)((((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1] * 4 + *(int *)(unsigned)(iVar4 + 0x40)) == *(int *)(unsigned)(iVar4 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c1244f8\n.set _FUN_8c1244f8, _FUN_8c1244f8_def\n");
