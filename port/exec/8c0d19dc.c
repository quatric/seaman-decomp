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
int FUN_8c0d19dc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d19dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a4;
  int a5;
  int a6;
  
  a5 = ar4;
  a6 = ar5;
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(0x8c3eb324,ar4,ar5,ar7));
  if (a4 != 0) {
    if ((ar4 < 0x10) && (-1 < ar4)) {
                    
      switch((uint)ar4) {
      default:
        a6 = 0;
        a5 = -0x73c14ccc;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,0,ar7));
        break;
      case 3:
        break;
      }
    }
    if ((ar4 == 3) && (ar5 == 2)) {
      a6 = 0;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,0,ar7));
    }
    else if ((ar4 == 3) && (ar5 == 3)) {
      a6 = 3;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,3,ar7));
    }
    else if ((ar4 == 3) && (ar5 == 4)) {
      a6 = 6;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,6,ar7));
    }
    else if ((ar4 == 5) && (ar5 == 6)) {
      a6 = 0;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,0,ar7));
    }
    else if ((ar4 == 5) && (ar5 == 7)) {
      a6 = 3;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,3,ar7));
    }
    else if ((ar4 == 10) && (ar5 == 0x11)) {
      a6 = 0;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,0,ar7));
    }
    else if ((ar4 == 10) && (ar5 == 0x13)) {
      a6 = 3;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,3,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x5c))))(a4,a5,a6,ar7));
  }
  return a4;
}

__asm__(".globl _FUN_8c0d19dc\n.set _FUN_8c0d19dc, _FUN_8c0d19dc_def\n");
