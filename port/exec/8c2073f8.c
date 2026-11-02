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
int FUN_8c2073f8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2073f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *puVar2;
  
  if (ar5 == 0) {
    iVar1 = (int)0x234;
    *(unsigned *)(unsigned)(iVar1 + ar4) = (&(*(undefined1 *)(unsigned)0x8c2078f2));
    return iVar1;
  }
  if (ar5 == 1) {
    iVar1 = (int)0x23c;
    puVar2 = (&(*(undefined1 *)(unsigned)0x8c2078f6));
LAB_8c2074f4:
    *(unsigned *)(unsigned)(iVar1 + ar4) = puVar2;
  }
  else {
    if (ar5 == 2) {
      iVar1 = (int)0x244;
      puVar2 = (&(*(undefined1 *)(unsigned)0x8c2078fa));
    }
    else {
      if (ar5 == 3) {
        iVar1 = (int)0x24c;
        puVar2 = (&(*(undefined1 *)(unsigned)0x8c207920));
        goto LAB_8c2074f4;
      }
      if (ar5 == 4) {
        iVar1 = (int)0x254;
        puVar2 = (&(*(undefined1 *)(unsigned)0x8c207924));
      }
      else {
        if (ar5 == 5) {
          iVar1 = (int)0x25c;
          puVar2 = (&(*(undefined1 *)(unsigned)0x8c207928));
          goto LAB_8c2074f4;
        }
        if (ar5 == 6) {
          iVar1 = (int)0x264;
          puVar2 = (&(*(undefined1 *)(unsigned)0x8c20792c));
        }
        else {
          if (ar5 == 7) {
            iVar1 = (int)0x26c;
            puVar2 = (&(*(undefined1 *)(unsigned)0x8c207930));
            goto LAB_8c2074f4;
          }
          if (ar5 != 8) {
            return ar5;
          }
          iVar1 = (int)0x274;
          puVar2 = (&(*(undefined1 *)(unsigned)0x8c207934));
        }
      }
    }
    *(unsigned *)(unsigned)(iVar1 + ar4) = puVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c2073f8\n.set _FUN_8c2073f8, _FUN_8c2073f8_def\n");
