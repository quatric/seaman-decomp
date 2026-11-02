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
undefined4 FUN_8c0f72ec_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f72ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  double in_dr0 = 0;
  double in_dr14 = 0;
  bool bVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x1a0))))(ar5,ar5,ar6,ar7));
  iVar3 = 0;
  do {
    if (7 < iVar3) {
      return 0;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0f6ab0(iVar1 + iVar3 * 0x68,ar5,ar6,ar7));
    if ((iVar2 == 1) && (iVar1 + iVar3 * 0x68 != ar4)) {
      if (cVar6 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   *(undefined4 *)(unsigned)(iVar1 + iVar3 * 0x68 + 0x1c));
        in_dr0 = CONCAT44D(0x3fc00000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = -7.956826979325289e-251;
      }
      if (cVar5 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   F32LO(in_dr14) * F32HI(in_dr0));
      }
      else {
        in_dr14 = in_dr14 * in_dr0;
      }
      iVar2 = iVar1 + iVar3 * 0x68;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2c))); *(unsigned *)((((unsigned long)(fr0_ - 48)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 48)) - 8); Vec3_sub(ar4,iVar2,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 48)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x2c)),iVar2,ar6,ar7));
      if (cVar5 == '\0') {
        bVar4 = SUB84(in_dr14,0) < F32HI(in_dr0);
      }
      else {
        bVar4 = in_dr14 < in_dr0;
      }
      ar5 = (int *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
      if (!bVar4) {
        if (cVar6 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 4),
                                    *(undefined4 *)(unsigned)(iVar1 + iVar3 * 0x68 + 4));
        }
        else {
          in_dr0 = *(double *)(unsigned)(ar4 + 4);
        }
        if (cVar5 != '\0' || SUB84(in_dr0,0) <= F32HI(in_dr0)) {
          return 1;
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c0f72ec\n.set _FUN_8c0f72ec, _FUN_8c0f72ec_def\n");
