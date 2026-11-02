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
undefined4 * FUN_8c0d9600_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d9600";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  undefined4 in_fr3 = 0;
  double dVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar3 = *(float *)(unsigned)(ar4 + 0x14) + 1.0;
  *(float *)(unsigned)(ar4 + 0x14) = fVar3;
  iVar2 = *(int *)(unsigned)(ar4 + 0x10);
  puVar1 = (undefined4 *)(unsigned)0x8;
  if ((iVar2 < 9) && (-1 < iVar2)) {
    puVar1 = (undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c0d9634))[iVar2];
                    
    switch(iVar2) {
    default:
      puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031588(ar4 + *(int *)(unsigned)(ar4 + 0x10) * 4 + 0x2c,ar5,ar6,ar7));
      if (cVar8 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x14),in_fr3);
      }
      else {
        dVar5 = *(double *)(unsigned)(ar4 + 0x14);
      }
      fVar3 = (float)(int)puVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar7 == '\0' && fVar3 < 0.0) {
        puVar1 = ((undefined4 *)(unsigned)0x8c0d9718);
        if (cVar8 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar4 = -1.2916629790996152e-250;
        }
        if (cVar7 == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar7 == '\0') {
        bVar6 = F32HI(dVar5) < SUB84(dVar4,0);
      }
      else {
        bVar6 = dVar5 < dVar4;
      }
      if (!bVar6) {
        if (cVar8 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x14) = D2U(dVar4) & 0xffffffff;
        }
        *(char *)(unsigned)(ar4 + 0x18) = *(char *)(unsigned)(ar4 + 0x18) + -1;
        puVar1 = (undefined4 *)(unsigned)(uint)*(byte *)(unsigned)(ar4 + 0x18);
        if (puVar1 == (undefined4 *)(unsigned)0x0) {
          puVar1 = (undefined4 *)(unsigned)0x8;
          *(undefined4 *)(unsigned)(ar4 + 0x10) = 8;
        }
      }
      break;
    case 6:
      puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031588(ar4 + *(int *)(unsigned)(ar4 + 0x10) * 4 + 0x2c,ar5,ar6,ar7));
      if (cVar8 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x14),in_fr3);
      }
      else {
        dVar5 = *(double *)(unsigned)(ar4 + 0x14);
      }
      fVar3 = (float)(int)puVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar7 == '\0' && fVar3 < 0.0) {
        puVar1 = ((undefined4 *)(unsigned)0x8c0d9718);
        if (cVar8 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar4 = -1.2916629790996152e-250;
        }
        if (cVar7 == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar7 == '\0') {
        bVar6 = F32HI(dVar5) < SUB84(dVar4,0);
      }
      else {
        bVar6 = dVar5 < dVar4;
      }
      if (!bVar6) {
        puVar1 = (undefined4 *)(unsigned)0x8;
        *(undefined4 *)(unsigned)(ar4 + 0x10) = 8;
        if (cVar8 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x14) = D2U(dVar4) & 0xffffffff;
        }
      }
      break;
    case 7:
      break;
    case 8:
      puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d97ec(ar4,ar5,ar6,ar7));
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x14) = (ulonglong)(uint)fVar3;
      }
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0d9600\n.set _FUN_8c0d9600, _FUN_8c0d9600_def\n");
