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
int FUN_8c0140cc_def(uint ar4,uint ar5,int *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c0140cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  uint uVar3;
  int *a6;
  uint ain0_00;
  int a5;
  uint ar5_00;
  uint uVar4;
  uint ar4_00;
  int iVar5;
  
  a6 = ar6;
  do {
    while( true ) {
      ain0_00 = (ar5 - ar4 >> 1) + ar4;
      a5 = (ain0_00 - 1) * ar6[1] + *ar6;
      ar5_00 = ar5;
      ar4_00 = ar4;
      while ((ar4_00 != 0 && (ar4_00 <= ar5_00))) {
        while (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)((uint)ar6[2])))((ar4_00 - 1) * ar6[1] + *ar6,a5,a6,ar7)), uVar4 = ar5_00,
              iVar2 < 0) {
          ar4_00 = ar4_00 + 1;
        }
        while (ain0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)((uint)ar6[2])))(a5,(uVar4 - 1) * ar6[1] + *ar6,a6,ar7)), ain0 < 0) {
          uVar4 = uVar4 - 1;
        }
        ar5_00 = uVar4;
        if (ar4_00 <= uVar4) {
          ar5_00 = uVar4 - 1;
          for (uVar3 = 0; uVar3 < (uint)ar6[1]; uVar3 = uVar3 + 1) {
            iVar2 = *ar6;
            iVar5 = (ar4_00 - 1) * ar6[1];
            ain0 = iVar5 + iVar2;
            cVar1 = *(char *)(unsigned)(ain0 + uVar3);
            ar7 = (int)cVar1;
            a6 = (int *)(unsigned)(ar5_00 * ar6[1] + iVar2 + uVar3);
            *(char *)(unsigned)(iVar5 + iVar2 + uVar3) = (char)*a6;
            *(char *)(unsigned)(ar5_00 * ar6[1] + *ar6 + uVar3) = cVar1;
          }
          if (ar4_00 == ain0_00) {
            a5 = ar5_00 * ar6[1] + *ar6;
          }
          else if (uVar4 == ain0_00) {
            a5 = (ar4_00 - 1) * ar6[1] + *ar6;
          }
          ar4_00 = ar4_00 + 1;
        }
      }
      if (ar5 - ar4_00 <= ar5_00 - ar4) break;
      if (ar4 < ar5_00) {
        a6 = ar6;
        ain0 = ({ unsigned long ri0_ = (unsigned long)(ain0_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0140cc(ar4,ar5_00,ar6,ar7); });
      }
      ar4 = ar4_00;
      if (ar5 <= ar4_00) {
        return ain0;
      }
    }
    if (ar4_00 < ar5) {
      a6 = ar6;
      ain0 = ({ unsigned long ri0_ = (unsigned long)(ain0_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0140cc(ar4_00,ar5,ar6,ar7); });
    }
    ar5 = ar5_00;
  } while (ar4 < ar5_00);
  return ain0;
}

__asm__(".globl _FUN_8c0140cc\n.set _FUN_8c0140cc, _FUN_8c0140cc_def\n");
