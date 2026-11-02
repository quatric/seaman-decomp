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
undefined4 FUN_8c1f1a7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f1a7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *a5;
  undefined4 uVar8;
  char *a6;
  undefined4 a7;
  char *ain0;
  
  ain0 = ((undefined1 *)(unsigned)0x8c470f66);
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2739e4) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2739e4) = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1fa244(0x900,((void *)(unsigned)0x8c1f1a44),0x50,(*(undefined4 *)(unsigned)(unsigned)0x8c2739e0)));
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2739e8) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2739e8) = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1fa244(0xa40,((void *)(unsigned)0x8c1f1a2a),0x10,(*(undefined4 *)(unsigned)(unsigned)0x8c2739e0)));
  }
  a7 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar6 = *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x14);
  piVar2 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f302a(uVar6,0,0,0));
  if ((piVar2 != (int *)(unsigned)0x0) &&
     (iVar3 = (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0xc) + 0x1c))))(uVar6,uVar7,uVar8,a7)), iVar3 != 0))
  {
    piVar2[0xf] = iVar3;
    *(undefined2 *)(unsigned)(piVar2 + 0x14) = 4;
    *(unsigned *)(unsigned)(*piVar2 + 0x1c) = piVar2;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f2f98(piVar2,uVar7,uVar8,a7));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0xc) + 0x20))))(&(*(int *)(fr0_ - 0x28)),uVar7,uVar8,a7));
    if (iVar4 != 0) {
      if (iVar3 != 0) {
        if (iVar3 != -0x1d) {
          return iVar3;
        }
        if ((*(int *)(fr0_ - 0x28)) == 6) {
          return 0xffffffe9;
        }
        return 0xffffffe3;
      }
      if ((*(int *)(fr0_ - 0x24)) != 0x80) {
        return 0xfffffffb;
      }
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      piVar2 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f302a(*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x14),0,0,0));
      if (piVar2 != (int *)(unsigned)0x0) {
        *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x2c) = 0;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0xc) + 0x4c))))(0x8c470f58,uVar7,uVar8,uVar6));
        if (iVar3 != 0) {
          piVar2[0xf] = iVar3;
          *(undefined2 *)(unsigned)(piVar2 + 0x14) = 4;
          *(unsigned *)(unsigned)(*piVar2 + 0x1c) = piVar2;
          iVar3 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f2f98(piVar2,uVar7,uVar8,uVar6));
          if (iVar3 == 0) {
            *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x2c) =
                 *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x2c) | ((*(undefined1 *)(unsigned)0x8c470f64) + -0x30) * 0x10000;
            *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x2c) =
                 *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x2c) | (*ain0 + -0x30) * 0x100;
            *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x2c) =
                 *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x2c) | (int)(*(undefined1 *)(unsigned)0x8c470f67) - 0x30U;
          }
        }
        a5 = (char *)(unsigned)0x1;
        a6 = (char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x40);
        iVar3 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f19ec(0xb06e,1,a6,uVar6));
        if (iVar3 == 0) {
          iVar3 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f173a((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x40,a5,a6,uVar6));
          if (iVar3 == 0) {
            return 0xfffffffb;
          }
          puVar5 = (undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 4);
          uVar7 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f1714((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0xcc,a5,a6,uVar6));
          *puVar5 = uVar7;
          *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 4) = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 4) + 0x96;
          puVar5 = (undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 8);
          uVar7 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f1714((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0xc4,a5,a6,uVar6));
          *puVar5 = uVar7;
          *(unsigned *)0x8c470f90 = (unsigned)(unsigned long)((short *)(unsigned)((undefined1 *)(unsigned)0x8c470f78));
          (*(undefined4 *)(unsigned)(unsigned)0x8c470f78) = (short)(*(undefined1 *)(unsigned)0x8c0080fc);
          uVar7 = uVar6;
          if ((*(undefined4 *)(unsigned)(unsigned)0x8c470f78) == 1) {
            a5 = ((undefined1 *)(unsigned)0x8c0080f0);
            iVar3 = 0;
            (*(undefined4 *)(unsigned)(unsigned)0x8c470f7a) = (short)(*(undefined1 *)(unsigned)0x8c0080fd);
            (*(undefined4 *)(unsigned)(unsigned)0x8c470f7c) = 0;
            a6 = ((undefined1 *)(unsigned)0x8c470f80);
            do {
              uVar7 = uVar6;
              if (*a5 == ' ') break;
              cVar1 = *a5;
              a5 = a5 + 1;
              uVar6 = 0xc;
              uVar7 = 0xc;
              iVar3 = iVar3 + 1;
              *a6 = cVar1;
              a6 = a6 + 1;
            } while (iVar3 < 0xc);
            *a6 = '\0';
          }
          iVar3 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f1714((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0xde,a5,a6,uVar7));
          uVar6 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f1714((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0xe6,a5,a6,uVar7));
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x10) + 8) = 0;
          uVar7 = *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x10);
          iVar3 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f2bfe((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x40,iVar3 + 0x96,uVar7,uVar6));
          if (iVar3 == -0xc) {
            return 0xfffffff4;
          }
          if (iVar3 == 0) {
            if (*((int *)(unsigned long)*(unsigned *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x10)) == 0) {
              return 0xfffffffb;
            }
            if (*((undefined4 *)(unsigned long)*(unsigned *)0x8c470f90) != 1) {
LAB_8c1f1d54:
              *(undefined2 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x38) = 1;
              return 0;
            }
            iVar3 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f2172(((undefined4 *)(unsigned long)*(unsigned *)0x8c470f90) + 4,&(*(undefined4 *)(fr0_ - 0x2c)),uVar7,uVar6));
            if (iVar3 == 0) {
              uVar7 = 1;
              *(undefined4 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c470f90) + 2) = (*(undefined4 *)(fr0_ - 0x2c));
              uVar6 = *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x10);
              iVar3 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f2bfe((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x40,(*(undefined4 *)(fr0_ - 0x2c)),uVar6,1));
              if (iVar3 == -0xc) {
                return 0xfffffff4;
              }
              if (iVar3 == 0) {
                if (*((int *)(unsigned long)*(unsigned *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x10)) == 0) {
                  return 0xfffffffb;
                }
                ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c1f1a52(*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x10),(*(undefined4 *)(fr0_ - 0x2c)),uVar6,uVar7); });
                goto LAB_8c1f1d54;
              }
            }
          }
        }
        return 0xfffffffc;
      }
    }
  }
  return 0xfffffffe;
}

__asm__(".globl _FUN_8c1f1a7c\n.set _FUN_8c1f1a7c, _FUN_8c1f1a7c_def\n");
