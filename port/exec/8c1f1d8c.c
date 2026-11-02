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
undefined4 FUN_8c1f1d8c_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f1d8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  char *ar5_00;
  undefined4 uVar9;
  undefined4 uVar10;
  byte in_IMASK = 0;
  byte bVar11;
  byte extraout_S = 0;
  byte extraout_S_00 = 0;
  byte extraout_T = 0;
  byte extraout_T_00 = 0;
  
  if ((((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0) != (int *)(unsigned)0x0) && ((short)((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[0xe] == 1)) {
    return 0;
  }
  if (((uint)ar5 & 0x1f) != 0) {
    return 0xfffffff2;
  }
  piVar3 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0);
  uVar8 = ar6;
  uVar9 = ar7;
  (*(unsigned *)(fr0_ - 0x28) = (unsigned)(unsigned long)(ar5));
  (*(int *)(fr0_ - 0x24)) = ar4;
  puVar5 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f151c(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)(*puVar5)))(piVar3,ar5,uVar8,uVar9));
  (*(uint *)(fr0_ - 0x20)) = (((uint)extraout_T | (uint)extraout_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  bVar11 = (byte)((((uint)extraout_T | (uint)extraout_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  *(unsigned *)0x8c2739e0 = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x28)));
  *(undefined2 *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x28)) + 0xe) = 0;
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[8] = 0;
  *(unsigned *)(unsigned long)*(unsigned *)0x8c2739e0 = (unsigned)((*(int *)(fr0_ - 0x24)));
  piVar3 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0) + 4;
  iVar6 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f3078(ar7,ar6,uVar8,uVar9));
  *piVar3 = iVar6;
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[3] = (int)puVar5;
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[7] = 0;
  *(undefined2 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0) + 0x3a) = 0;
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[9] = 0;
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[0xd] = 0;
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[0xf] = s0;
  piVar3 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0) + 0x420;
  for (iVar6 = 0; iVar6 < *((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0) + 1; iVar6 = iVar6 + 1) {
    *(undefined2 *)(unsigned)(piVar3 + 0x13) = 0;
    *piVar3 = (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0);
    piVar3 = piVar3 + 0x15;
  }
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[5] = (int)(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0) + 0x420);
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[6] = (int)(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0) + 0x435);
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f21bc(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[5],0,0,0));
  uVar2 = (((uint)extraout_T_00 | (uint)extraout_S_00 << 1 | (uint)bVar11 << 4) & 0xf0) >> 4;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2739e4) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2739e4) = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1fa244(0x900,((void *)(unsigned)0x8c1f1a44),0x50,((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)));
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2739e8) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2739e8) = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1fa244(0xa40,((void *)(unsigned)0x8c1f1a2a),0x10,((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)));
  }
  uVar10 = 0;
  uVar8 = 0;
  uVar9 = 0;
  piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f302a(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[5],0,0,0));
  if ((piVar3 != (int *)(unsigned)0x0) && (iVar6 = (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[3] + 0x1c))))(uVar2,vr5,vr6,vr7)), iVar6 != 0))
  {
    piVar3[0xf] = iVar6;
    *(undefined2 *)(unsigned)(piVar3 + 0x14) = 4;
    *(unsigned *)(unsigned)(*piVar3 + 0x1c) = piVar3;
    iVar6 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f2f98(piVar3,uVar8,uVar9,uVar10));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[3] + 0x20))))(((int * *)(fr0_ - 0x28)),vr5,vr6,vr7));
    if (iVar4 != 0) {
      if (iVar6 != 0) {
        if (iVar6 != -0x1d) {
          return iVar6;
        }
        if (((int *)(unsigned long)*(unsigned *)(fr0_ - 0x28)) == (int *)(unsigned)0x6) {
          return 0xffffffe9;
        }
        return 0xffffffe3;
      }
      if ((*(int *)(fr0_ - 0x24)) != 0x80) {
        return 0xfffffffb;
      }
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f302a(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[5],0,0,0));
      if (piVar3 != (int *)(unsigned)0x0) {
        ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[0xb] = 0;
        iVar6 = (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[3] + 0x4c))))(0x8c470f58,vr5,vr6,vr7));
        if (iVar6 != 0) {
          piVar3[0xf] = iVar6;
          *(undefined2 *)(unsigned)(piVar3 + 0x14) = 4;
          *(unsigned *)(unsigned)(*piVar3 + 0x1c) = piVar3;
          iVar6 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f2f98(piVar3,uVar9,uVar10,uVar8));
          if (iVar6 == 0) {
            ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[0xb] = ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[0xb] | ((*(undefined1 *)(unsigned)0x8c470f64) + -0x30) * 0x10000;
            ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[0xb] = ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[0xb] | ((*(undefined1 *)(unsigned)0x8c470f66) + -0x30) * 0x100;
            ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[0xb] = ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[0xb] | (int)(*(undefined1 *)(unsigned)0x8c470f67) - 0x30U;
          }
        }
        ar5_00 = (char *)(unsigned)0x1;
        piVar3 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0) + 0x10;
        iVar6 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f19ec((*(undefined4 *)(unsigned)(unsigned)0x8c26c520),1,piVar3,uVar8));
        if (iVar6 == 0) {
          iVar6 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f173a(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0) + 0x10,ar5_00,piVar3,uVar8));
          if (iVar6 == 0) {
            return 0xfffffffb;
          }
          piVar7 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0) + 1;
          iVar6 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f1714(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0) + 0x33,ar5_00,piVar3,uVar8));
          *piVar7 = iVar6;
          ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[1] = ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[1] + 0x96;
          piVar7 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0) + 2;
          iVar6 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f1714(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0) + 0x31,ar5_00,piVar3,uVar8));
          *piVar7 = iVar6;
          *(unsigned *)0x8c470f90 = (unsigned)(unsigned long)((short *)(unsigned)((undefined1 *)(unsigned)0x8c470f78));
          (*(undefined4 *)(unsigned)(unsigned)0x8c470f78) = (short)(*(undefined1 *)(unsigned)0x8c0080fc);
          uVar9 = uVar8;
          if ((*(undefined4 *)(unsigned)(unsigned)0x8c470f78) == 1) {
            ar5_00 = ((undefined1 *)(unsigned)0x8c0080f0);
            iVar6 = 0;
            (*(undefined4 *)(unsigned)(unsigned)0x8c470f7a) = (short)(*(undefined1 *)(unsigned)0x8c0080fd);
            (*(undefined4 *)(unsigned)(unsigned)0x8c470f7c) = 0;
            piVar3 = (int *)(unsigned)((undefined1 *)(unsigned)0x8c470f80);
            do {
              uVar9 = uVar8;
              if (*ar5_00 == ' ') break;
              cVar1 = *ar5_00;
              ar5_00 = ar5_00 + 1;
              uVar8 = 0xc;
              uVar9 = 0xc;
              iVar6 = iVar6 + 1;
              *(char *)(unsigned)piVar3 = cVar1;
              piVar3 = (int *)(unsigned)((int)piVar3 + 1);
            } while (iVar6 < 0xc);
            *(char *)(unsigned)piVar3 = '\0';
          }
          iVar6 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f1714((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0) + 0xde,ar5_00,piVar3,uVar9));
          uVar8 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f1714((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0) + 0xe6,ar5_00,piVar3,uVar9));
          *(undefined4 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[4] + 8) = 0;
          iVar4 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[4];
          iVar6 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f2bfe(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0) + 0x10,iVar6 + 0x96,iVar4,uVar8));
          if (iVar6 == -0xc) {
            return 0xfffffff4;
          }
          if (iVar6 == 0) {
            if (*(int *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[4] == 0) {
              return 0xfffffffb;
            }
            if (*((undefined4 *)(unsigned long)*(unsigned *)0x8c470f90) != 1) {
LAB_8c1f1d54:
              *(undefined2 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0) + 0xe) = 1;
              return 0;
            }
            iVar6 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f2172(((undefined4 *)(unsigned long)*(unsigned *)0x8c470f90) + 4,&(*(undefined4 *)(fr0_ - 0x2c)),iVar4,uVar8));
            if (iVar6 == 0) {
              uVar8 = 1;
              *(undefined4 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c470f90) + 2) = (*(undefined4 *)(fr0_ - 0x2c));
              iVar4 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[4];
              iVar6 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f2bfe(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0) + 0x10,(*(undefined4 *)(fr0_ - 0x2c)),iVar4,1));
              if (iVar6 == -0xc) {
                return 0xfffffff4;
              }
              if (iVar6 == 0) {
                if (*(int *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[4] == 0) {
                  return 0xfffffffb;
                }
                ({ unsigned long ri0_ = (unsigned long)(0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c1f1a52(((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[4],(*(undefined4 *)(fr0_ - 0x2c)),iVar4,uVar8); });
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

__asm__(".globl _FUN_8c1f1d8c\n.set _FUN_8c1f1d8c, _FUN_8c1f1d8c_def\n");
