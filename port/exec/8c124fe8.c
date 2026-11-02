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
uint FUN_8c124fe8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c124fe8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  ushort uVar1;
  float *pfVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined8 in_dr4 = 0;
  float fVar9;
  char cVar10;
  
  cVar10 = '\0';
  if ((*(char *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x30) != '\x01') &&
     ((*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)((short *)(unsigned)(vsp = ((unsigned long)(fr0_ - 28)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),
                                         *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 4),ar6,ar7)))),
     ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x1c)) != (short *)(unsigned)0x0)) {
    pfVar7 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2c));
    puVar6 = ((undefined8 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x44));
    uVar1 = *(ushort *)(unsigned)(ar4 + 0x36);
    if (cVar10 == '\0') {
      in_dr4 = CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x3c));
    }
    uVar5 = (uint)uVar1;
    iVar4 = 0;
    if (uVar5 != 0) {
      do {
        iVar4 = iVar4 + 1;
        cVar10 = '\0';
        fVar9 = (float)(int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x1c));
        *pfVar7 = fVar9 - (float)in_dr4;
        pfVar7 = pfVar7 + 1;
        in_dr4 = CONCAT44(fVar9,fVar9);
        (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x1c)) + 1));
      } while (iVar4 < (int)uVar5);
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(ar4 + 0x3c) = (int)((ulonglong)in_dr4 >> 0x20);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x3c) = in_dr4;
    }
    if (pfVar7 == ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30))) {
      pfVar7 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x28));
    }
    iVar4 = (uint)uVar1 * 4;
    if (*(char *)(unsigned)(ar4 + 0x40) == '\0') {
      cVar10 = '\0';
      pfVar2 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 28)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),(int)(short)uVar1,ar6,ar7));
      *(unsigned *)(unsigned)(ar4 + 0x2c) = pfVar7;
      puVar3 = (undefined8 *)(unsigned)((uint)*(ushort *)(unsigned)(ar4 + 0x38) * 4 + (int)puVar6);
      pfVar7 = pfVar7 + (uVar5 - *(ushort *)(unsigned)(ar4 + 0x38));
      while (puVar6 < puVar3) {
        if (cVar10 == '\0') {
          fVar9 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          uVar8 = CONCAT44(*(undefined4 *)(unsigned)puVar6,fVar9);
          puVar6 = (undefined8 *)(unsigned)((int)puVar6 + 4);
        }
        else {
          pfVar7 = pfVar7 + 2;
          uVar8 = *puVar6;
          puVar6 = puVar6 + 1;
        }
        cVar10 = '\0';
        *pfVar2 = F32HI(uVar8) * (float)uVar8;
        pfVar2 = pfVar2 + 1;
      }
      if (pfVar7 == ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30))) {
        pfVar7 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x28));
      }
      puVar3 = (undefined8 *)(unsigned)(iVar4 + (int)puVar6);
      while (puVar6 < puVar3) {
        if (cVar10 == '\0') {
          fVar9 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          uVar8 = CONCAT44(*(undefined4 *)(unsigned)puVar6,fVar9);
          puVar6 = (undefined8 *)(unsigned)((int)puVar6 + 4);
        }
        else {
          pfVar7 = pfVar7 + 2;
          uVar8 = *puVar6;
          puVar6 = puVar6 + 1;
        }
        cVar10 = '\0';
        *pfVar2 = F32HI(uVar8) * (float)uVar8;
        pfVar2 = pfVar2 + 1;
      }
      if (pfVar7 == ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30))) {
        pfVar7 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x28));
      }
      puVar3 = (undefined8 *)(unsigned)((uint)*(ushort *)(unsigned)(ar4 + 0x38) * 4 + (int)puVar6);
      while (puVar6 < puVar3) {
        if (cVar10 == '\0') {
          fVar9 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          uVar8 = CONCAT44(*(undefined4 *)(unsigned)puVar6,fVar9);
          puVar6 = (undefined8 *)(unsigned)((int)puVar6 + 4);
        }
        else {
          pfVar7 = pfVar7 + 2;
          uVar8 = *puVar6;
          puVar6 = puVar6 + 1;
        }
        cVar10 = '\0';
        *pfVar2 = F32HI(uVar8) * (float)uVar8;
        pfVar2 = pfVar2 + 1;
      }
    }
    else {
      puVar6 = ((undefined8 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2c));
      if (cVar10 == '\0') {
        *(undefined4 *)(unsigned)puVar6 = 0;
      }
      else {
        *puVar6 = 0x8c013ef400000000;
      }
      (vsp = ((unsigned long)(fr0_ - 28)), memmove(pfVar7,puVar6,iVar4,ar7));
      pfVar7 = pfVar7 + uVar1;
      if (pfVar7 == ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30))) {
        pfVar7 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x28));
      }
      *(undefined1 *)(unsigned)(ar4 + 0x40) = 0;
      *(unsigned *)(unsigned)(ar4 + 0x2c) = pfVar7;
    }
  }
  iVar4 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  return *(int *)(unsigned)((((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1] * 4 + *(int *)(unsigned)(iVar4 + 0x40)) == *(int *)(unsigned)(iVar4 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c124fe8\n.set _FUN_8c124fe8, _FUN_8c124fe8_def\n");
