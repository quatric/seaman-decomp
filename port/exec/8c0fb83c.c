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
undefined4 FUN_8c0fb83c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fb83c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 8;
  if ((ar6 < 9) && (3 < ar6)) {
                    
    switch((uint)ar6) {
    case 4:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    
        switch((uint)ar5) {
        case 0x41:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 5;
          return 0xb8;
        case 0x43:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x14;
          return 0xb8;
        case 0x46:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x19;
          return 0xb8;
        case 0x48:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x28;
          return 0xb8;
        case 0x49:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x23;
          return 0xb8;
        case 0x4c:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 10;
          return 0xb8;
        case 0x50:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0xf;
          return 0xb8;
        case 0x53:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1e;
          return 0xb8;
        case 0x55:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2d;
          return 0xb8;
        }
      }
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0;
      return 0xb8;
    case 5:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    
        switch((uint)ar5) {
        case 0x41:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 6;
          return 0xb8;
        case 0x43:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x15;
          return 0xb8;
        case 0x46:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1a;
          return 0xb8;
        case 0x48:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x29;
          return 0xb8;
        case 0x49:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x24;
          return 0xb8;
        case 0x4c:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0xb;
          return 0xb8;
        case 0x50:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x10;
          return 0xb8;
        case 0x53:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1f;
          return 0xb8;
        case 0x55:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2e;
          return 0xb8;
        }
      }
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 1;
      return 0xb8;
    case 6:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    
        switch((uint)ar5) {
        case 0x41:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 7;
          return 0xb8;
        case 0x43:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x16;
          return 0xb8;
        case 0x46:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1b;
          return 0xb8;
        case 0x48:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2a;
          return 0xb8;
        case 0x49:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x25;
          return 0xb8;
        case 0x4c:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0xc;
          return 0xb8;
        case 0x50:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x11;
          return 0xb8;
        case 0x53:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x20;
          return 0xb8;
        case 0x55:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2f;
          return 0xb8;
        }
      }
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 2;
      return 0xb8;
    case 7:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    
        switch((uint)ar5) {
        case 0x41:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 8;
          return 0xb8;
        case 0x43:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x17;
          return 0xb8;
        case 0x46:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1c;
          return 0xb8;
        case 0x48:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2b;
          return 0xb8;
        case 0x49:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x26;
          return 0xb8;
        case 0x4c:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0xd;
          return 0xb8;
        case 0x50:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x12;
          return 0xb8;
        case 0x53:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x21;
          return 0xb8;
        case 0x55:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x30;
          return 0xb8;
        }
      }
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 3;
      return 0xb8;
    case 8:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    
        switch((uint)ar5) {
        case 0x41:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 9;
          return 0xb8;
        case 0x43:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x18;
          return 0xb8;
        case 0x46:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1d;
          return 0xb8;
        case 0x48:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2c;
          return 0xb8;
        case 0x49:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x27;
          return 0xb8;
        case 0x4c:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0xe;
          return 0xb8;
        case 0x50:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x13;
          return 0xb8;
        case 0x53:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x22;
          return 0xb8;
        case 0x55:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x31;
          return 0xb8;
        }
      }
      uVar1 = 0xb8;
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 4;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0fb83c\n.set _FUN_8c0fb83c, _FUN_8c0fb83c_def\n");
