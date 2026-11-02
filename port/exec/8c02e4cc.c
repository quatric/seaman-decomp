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
uint FUN_8c02e4cc_def(uint *ar4,int *ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02e4cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int *a5;
  char cVar6;
  char cVar7;
  
  puVar1 = ((undefined1 *)(fr0_ - 0x40));
  puVar3 = ((undefined1 *)(unsigned)0x8c13252c);
  iVar5 = 0x10;
  do {
    puVar4 = puVar3 + 1;
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar1[1] = *puVar4;
    puVar1 = puVar1 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  ar4[0xd] = 0;
  if (ar6 < 0x4b0) {
    ar4[5] = 0;
  }
  uVar2 = ar4[7];
  if (((int)uVar2 < 8) && (-1 < (int)uVar2)) {
                    
    switch(uVar2) {
    default:
      break;
    case 2:
    case 3:
      break;
    case 4:
      break;
    case 5:
    }
  }
  if (ar4[2] * ar4[3] == 0) {
    uVar2 = 0;
  }
  else {
    cVar6 = (char)ar7;
    if (*ar4 == 0) {
      if (ar4[5] != ar4[0xe]) {
        ar4[0xe] = ar4[5];
        ar4[6] = ar4[6] + 1;
        if ((ar4[5] == 0) || (cVar6 != -1)) {
          ar4[6] = 0;
        }
      }
      if (cVar6 != -1) {
        ar4[6] = 0;
        ar4[9] = 0;
      }
      ar4[0xb] = 5;
      a5 = ar5;
      if ((ar4[9] == 1) && (cVar6 == -1)) {
        ar4[8] = ar4[8] + 1;
        (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x198))))(ar5,ar5,ar6,ar7));
        *(byte *)(unsigned)(ar4 + 0xc) = (byte)(((uint)(*(byte *)(fr0_ - 0x48)) << 0x1e) >> 0x1f);
        a5 = (int *)(unsigned)0xffffffe1;
        *(char *)(unsigned)(ar4 + 0xc) = (char)ar4[0xc] - (char)((int)((uint)(*(byte *)(fr0_ - 0x48)) << 0x1f) >> 0x1f);
        if ((0xb4 < (int)ar4[8]) || ((char)ar4[0xc] < '\x02')) {
          ar4[8] = 0;
          *ar4 = 1;
          ar4[1] = 0x5a;
          if ((char)ar4[0xc] < '\x02') {
            ar4[0xd] = 1;
          }
          ar4[9] = 0;
          ar4[4] = ar4[4] + 1;
        }
      }
      uVar2 = ar4[6];
      if (299 < uVar2) {
        if (ar4[9] == 1) {
          uVar2 = 1;
        }
        else {
          uVar2 = (uint)cVar6;
          if (uVar2 == 0xffffffff) {
            (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x198))))(ar5,a5,ar6,ar7));
            *(byte *)(unsigned)(ar4 + 0xc) = (byte)(((uint)(*(byte *)(fr0_ - 0x48)) << 0x1e) >> 0x1f);
            *(char *)(unsigned)(ar4 + 0xc) = (char)ar4[0xc] - (char)((int)((uint)(*(byte *)(fr0_ - 0x48)) << 0x1f) >> 0x1f);
            if ((char)ar4[0xc] < '\x02') {
              ar4[9] = 0;
              *ar4 = 1;
              ar4[1] = 0x5a;
            }
            else {
              ar4[9] = 1;
            }
            uVar2 = 0;
            ar4[8] = 0;
          }
        }
      }
    }
    else {
      ar4[6] = 0;
      ar4[8] = ar4[8] + 1;
      (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x198))))(ar5,ar5,ar6,ar7));
      cVar7 = -(char)((int)((uint)(*(byte *)(fr0_ - 0x48)) << 0x1f) >> 0x1f) -
              (char)((int)((uint)(*(byte *)(fr0_ - 0x48)) << 0x1e) >> 0x1f);
      if (ar4[0xb] == 5) {
        if ((char)ar4[0xc] < cVar7) {
          ar4[0xb] = 3;
          ar4[8] = 0;
        }
        else {
          *(char *)(unsigned)(ar4 + 0xc) = cVar7;
        }
        if ((((cVar6 == '\0') || (cVar6 == '\x01')) || (cVar6 == '\x02')) || (cVar6 == '\x03')) {
          ar4[0xb] = 0;
        }
      }
      uVar2 = ar4[0xb];
      if (uVar2 == 0) {
        *ar4 = 0;
      }
      else if (uVar2 == 1) {
        *ar4 = 0;
      }
      else if (uVar2 == 2) {
        *ar4 = 0;
      }
      else if (uVar2 == 3) {
        if (5 < (int)ar4[8]) {
          *ar4 = 0;
        }
      }
      else if (600 < (int)ar4[8]) {
        *ar4 = 0;
        ar4[0xb] = 5;
      }
      uVar2 = *ar4;
      if (uVar2 == 0) {
        *(undefined1 *)(unsigned)(ar4 + 0xc) = 0xff;
        ar4[1] = 100;
        ar4[9] = 0;
        ar4[0xd] = 0;
        uVar2 = 0;
        ar4[8] = 0;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02e4cc\n.set _FUN_8c02e4cc, _FUN_8c02e4cc_def\n");
