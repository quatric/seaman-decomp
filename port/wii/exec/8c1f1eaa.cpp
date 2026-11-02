#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1f1eaa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f1eaa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  char cVar1;
  uint uVar2;
  le<int>* piVar3;
  int iVar4;
  undefined4 uVar5;
  char *ar5_00;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  le<int>* piVar9;
  byte in_IMASK = 0;
  byte bVar10;
  byte in_S = 0;
  byte extraout_S = 0;
  byte extraout_S_00 = 0;
  byte extraout_T = 0;
  
  if (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) == (void* )(le<int>* )(unsigned)0x0) {
    return 0xffffffff;
  }
  piVar9 = (le<int>*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) + 0x420);
  piVar3 = (le<int>*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0));
  for (iVar8 = 0; iVar8 < *((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) + 1; iVar8 = iVar8 + 1) {
    piVar3 = piVar9;
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f309c(piVar9,ar5,ar6,ar7));
    piVar9 = piVar9 + 0x15;
    in_S = extraout_S;
  }
  bVar10 = (byte)((((uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[3])))(piVar3,ar5,ar6,ar7));
  *(le<undefined2>* )(unsigned)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) + 0xe) = 0;
  ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[8] = 0;
  ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[7] = 0;
  *(le<undefined2>* )(unsigned)((int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) + 0x3a) = 0;
  ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[0xd] = 0;
  piVar3 = (le<int>*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) + 0x420);
  for (iVar8 = 0; iVar8 < *((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) + 1; iVar8 = iVar8 + 1) {
    *(le<undefined2>* )(unsigned)(piVar3 + 0x13) = 0;
    *piVar3 = (int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0);
    piVar3 = piVar3 + 0x15;
  }
  ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[5] = (int)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) + 0x420);
  ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[6] = (int)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) + 0x435);
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f21bc(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[5],0,0,0));
  uVar2 = (((uint)extraout_T | (uint)extraout_S_00 << 1 | (uint)bVar10 << 4) & 0xf0) >> 4;
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e4) == 0) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e4) = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1fa244(0x900,((void *)(unsigned)0x8c1f1a44),0x50,((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)));
  }
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e8) == 0) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e8) = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1fa244(0xa40,((void *)(unsigned)0x8c1f1a2a),0x10,((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)));
  }
  uVar7 = 0;
  uVar5 = 0;
  uVar6 = 0;
  piVar3 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f302a(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[5],0,0,0));
  if ((piVar3 != (le<int>* )(unsigned)0x0) && (iVar8 = (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[3] + 0x1c))))(uVar2,vr5,vr6,vr7)), iVar8 != 0))
  {
    piVar3[0xf] = iVar8;
    *(le<undefined2>* )(unsigned)(piVar3 + 0x14) = 4;
    *(le<unsigned>* )(unsigned)(*piVar3 + 0x1c) = piVar3;
    iVar8 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f2f98(piVar3,uVar5,uVar6,uVar7));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[3] + 0x20))))(&(*(le<int>* )(fr0_ - 0x28)),vr5,vr6,vr7));
    if (iVar4 != 0) {
      if (iVar8 != 0) {
        if (iVar8 != -0x1d) {
          return iVar8;
        }
        if ((*(le<int>* )(fr0_ - 0x28)) == 6) {
          return 0xffffffe9;
        }
        return 0xffffffe3;
      }
      if ((*(le<int>* )(fr0_ - 0x24)) != 0x80) {
        return 0xfffffffb;
      }
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      piVar3 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f302a(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[5],0,0,0));
      if (piVar3 != (le<int>* )(unsigned)0x0) {
        ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[0xb] = 0;
        iVar8 = (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[3] + 0x4c))))(0x8c470f58,vr5,vr6,vr7));
        if (iVar8 != 0) {
          piVar3[0xf] = iVar8;
          *(le<undefined2>* )(unsigned)(piVar3 + 0x14) = 4;
          *(le<unsigned>* )(unsigned)(*piVar3 + 0x1c) = piVar3;
          iVar8 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f2f98(piVar3,uVar6,uVar7,uVar5));
          if (iVar8 == 0) {
            ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[0xb] = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[0xb] | ((*(undefined1 *)(unsigned)0x8c470f64) + -0x30) * 0x10000;
            ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[0xb] = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[0xb] | ((*(undefined1 *)(unsigned)0x8c470f66) + -0x30) * 0x100;
            ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[0xb] = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[0xb] | (int)(*(undefined1 *)(unsigned)0x8c470f67) - 0x30U;
          }
        }
        ar5_00 = (char *)(unsigned)0x1;
        piVar3 = (le<int>*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) + 0x10);
        iVar8 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f19ec((*(le<undefined4>* )(unsigned)(unsigned)0x8c26c520),1,piVar3,uVar5));
        if (iVar8 == 0) {
          iVar8 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f173a(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) + 0x10,ar5_00,piVar3,uVar5));
          if (iVar8 == 0) {
            return 0xfffffffb;
          }
          piVar9 = (le<int>*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) + 1);
          iVar8 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f1714(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) + 0x33,ar5_00,piVar3,uVar5));
          *piVar9 = iVar8;
          ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[1] = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[1] + 0x96;
          piVar9 = (le<int>*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) + 2);
          iVar8 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f1714(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) + 0x31,ar5_00,piVar3,uVar5));
          *piVar9 = iVar8;
          *(le<unsigned>* )0x8c470f90 = (unsigned)(unsigned long)((le<short>* )(unsigned)((undefined1 *)(unsigned)0x8c470f78));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c470f78) = (short)(*(undefined1 *)(unsigned)0x8c0080fc);
          uVar6 = uVar5;
          if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c470f78) == 1) {
            ar5_00 = ((undefined1 *)(unsigned)0x8c0080f0);
            iVar8 = 0;
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c470f7a) = (short)(*(undefined1 *)(unsigned)0x8c0080fd);
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c470f7c) = 0;
            piVar3 = (le<int>* )(unsigned)((undefined1 *)(unsigned)0x8c470f80);
            do {
              uVar6 = uVar5;
              if (*ar5_00 == ' ') break;
              cVar1 = *ar5_00;
              ar5_00 = ar5_00 + 1;
              uVar5 = 0xc;
              uVar6 = 0xc;
              iVar8 = iVar8 + 1;
              *(char *)(unsigned)piVar3 = cVar1;
              piVar3 = (le<int>* )(unsigned)((int)piVar3 + 1);
            } while (iVar8 < 0xc);
            *(char *)(unsigned)piVar3 = '\0';
          }
          iVar8 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f1714((int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) + 0xde,ar5_00,piVar3,uVar6));
          uVar5 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f1714((int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) + 0xe6,ar5_00,piVar3,uVar6));
          *(le<undefined4>* )(unsigned)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[4] + 8) = 0;
          iVar4 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[4];
          iVar8 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f2bfe(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) + 0x10,iVar8 + 0x96,iVar4,uVar5));
          if (iVar8 == -0xc) {
            return 0xfffffff4;
          }
          if (iVar8 == 0) {
            if (*(le<int>* )(unsigned)((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[4] == 0) {
              return 0xfffffffb;
            }
            if (*((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c470f90) != 1) {
LAB_8c1f1d54:
              *(le<undefined2>* )(unsigned)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) + 0xe) = 1;
              return 0;
            }
            iVar8 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f2172(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c470f90) + 4,&(*(le<undefined4>* )(fr0_ - 0x2c)),iVar4,uVar5));
            if (iVar8 == 0) {
              uVar5 = 1;
              *(le<undefined4>* )(unsigned)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c470f90) + 2) = (*(le<undefined4>* )(fr0_ - 0x2c));
              iVar4 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[4];
              iVar8 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1f2bfe(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0) + 0x10,(*(le<undefined4>* )(fr0_ - 0x2c)),iVar4,1));
              if (iVar8 == -0xc) {
                return 0xfffffff4;
              }
              if (iVar8 == 0) {
                if (*(le<int>* )(unsigned)((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[4] == 0) {
                  return 0xfffffffb;
                }
                ({ unsigned long ri0_ = (unsigned long)(0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c1f1a52(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[4],(*(le<undefined4>* )(fr0_ - 0x2c)),iVar4,uVar5); });
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

__asm__(".globl FUN_8c1f1eaa\n.set FUN_8c1f1eaa, FUN_8c1f1eaa_def\n");

}
