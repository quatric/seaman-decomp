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
int FUN_8c02b208_def(short *ar4,int ar5,float *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b208";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  
  cVar4 = '\0';
  bVar1 = false;
  if (((ar5 == 0) || (ar5 == 0x2d)) || (ar5 == 0x1e)) {
    if ((*(float *)(unsigned)(ar4 + 2) == -100000.0) && (*ar6 != -100000.0)) {
      bVar1 = true;
    }
    else if ((*(float *)(unsigned)(ar4 + 2) != -100000.0) && (*ar6 == -100000.0)) {
      bVar1 = true;
    }
    *ar4 = *ar4 + 1;
    if (ar4[1] < *ar4) {
      bVar1 = true;
    }
    if (bVar1) {
      if (ar5 == 0) {
        if ((int)((uint)*(byte *)(unsigned)(ar4 + 10) << 0x1e) < 0) {
          iVar3 = 0x48;
        }
        else {
          iVar3 = 0x49;
        }
      }
      else if (ar5 == 0x2d) {
        if ((int)((uint)*(byte *)(unsigned)(ar4 + 10) << 0x1e) < 0) {
          iVar3 = 0x4a;
        }
        else {
          iVar3 = 0x4b;
        }
      }
      else {
        iVar3 = ar5;
        if (ar5 == 0x1e) {
          if ((int)((uint)*(byte *)(unsigned)(ar4 + 10) << 0x1e) < 0) {
            iVar3 = 0x4c;
          }
          else {
            iVar3 = 0x4d;
          }
        }
      }
      *ar4 = 0;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02b340(ar4,ar5,ar6,ar7));
      ar4[1] = (short)uVar2;
      ar5 = iVar3;
    }
    if (cVar4 == '\0') {
      *(float *)(unsigned)(ar4 + 2) = *ar6;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 2) = *(undefined8 *)(unsigned)ar6;
    }
  }
  else {
    *ar4 = 0;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02b340(ar4,ar5,ar6,ar7));
    ar4[1] = (short)uVar2;
  }
  return ar5;
}

__asm__(".globl _FUN_8c02b208\n.set _FUN_8c02b208, _FUN_8c02b208_def\n");
