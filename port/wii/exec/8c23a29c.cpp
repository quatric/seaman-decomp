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
undefined4 FUN_8c23a29c_def(undefined4 ar4,le<int>* ar5,undefined4 ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c23a29c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 108; for (int i_ = 0; i_ < 108; i_++) z_[i_] = 0; }
  int iVar1;
  int ain0;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int ar5_00;
  le<int>* piVar6;
  uint ar7_00;
  int ar4_00;
  le<int>* ar4_01;
  le<int>* ar6_00;
  
  ar7_00 = 0xffffffff;
  piVar6 = ar5;
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c25b5b4(ar4,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c238e8c(ar4,piVar6,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c238e98(&(*(le<int>* )(fr0_ - 0x58)),4,ar6,ar7));
  if ((*(le<int>* )(fr0_ - 0x58)) == 0x484d5650) {
    uVar5 = 8;
    (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c238e98(&(*(le<int>* )(fr0_ - 0x28)),8,ar6,ar7));
    iVar1 = (int)(*(le<short>* )(fr0_ - 0x22));
    ar5[1] = iVar1;
    uVar5 = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c238f02((int)(*(le<short>* )(fr0_ - 0x24)),uVar5,ar6,ar7));
    piVar6 = &(*(le<int>* )(fr0_ - 0x28));
    (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c239f84(ar5,uVar5,piVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c238eba(0,0,piVar6,ar7));
    uVar5 = 1;
    iVar4 = (*(le<int>* )(fr0_ - 0x28)) + 8;
    (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c238eba(iVar4,1,piVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c23a078(iVar4,uVar5,piVar6,ar7));
    ar5[1] = iVar1;
    (*(le<int>* )(fr0_ - 0x5c)) = 0;
    if (0 < (*(le<short>* )(fr0_ - 0x22))) {
      do {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c239150(ar5,(*(le<int>* )(fr0_ - 0x5c)),piVar6,ar7));
        iVar4 = iVar1 * 0xc;
        ar4_00 = *ar5 + iVar4;
        ar4_01 = (le<int>* )(unsigned)(ar4_00 + 8);
        if ((*(le<uint>* )(unsigned)(ar4_00 + 4) & 0x1000000) == 0) {
          ain0 = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c23a21c(iVar4,0x1000000,piVar6,ar7));
          iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c);
          if (ain0 == 1) {
            ar6_00 = (le<int>* )(unsigned)(*(le<uint>* )(unsigned)(ar4_00 + 8) & 0x3ffffff);
            ar7_00 = *(le<uint>* )(unsigned)(ar4_00 + 8) >> 0x1a;
            piVar6 = ar6_00;
            (*(le<int>* )(fr0_ - 0x68)) = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c25a536((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),ar6_00,ar7));
            if ((*(le<int>* )(fr0_ - 0x68)) < 0) {
LAB_8c23a3b6:
              iVar2 = 2;
            }
            else {
              iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c);
              piVar6 = ar6_00;
              ar7 = ar7_00;
              iVar2 = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c25a5c0((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),ar6_00,ar7_00));
              if (-1 < iVar2) goto LAB_8c23a3ba;
              iVar2 = 0;
            }
          }
          else {
            ar6_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4_00 + 8));
            piVar6 = ar6_00;
            (*(le<int>* )(fr0_ - 0x68)) = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c25a536((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),ar6_00,ar7));
            if ((*(le<int>* )(fr0_ - 0x68)) < 0) goto LAB_8c23a3b6;
LAB_8c23a3ba:
            iVar2 = 1;
          }
        }
        else {
          ar6_00 = (le<int>* )(unsigned)(*(le<uint>* )(unsigned)(iVar4 + *ar5 + 8) & 0x3ffffff);
          ar7_00 = *(le<uint>* )(unsigned)(ar4_00 + 8) >> 0x1a;
          iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c);
          piVar6 = ar6_00;
          (*(le<int>* )(fr0_ - 0x68)) = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c25a536((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),ar6_00,ar7));
          if ((*(le<int>* )(fr0_ - 0x68)) < 0) {
            iVar2 = 2;
          }
          else {
            iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c);
            piVar6 = ar6_00;
            ar7 = ar7_00;
            iVar2 = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c25a5c0((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),ar6_00,ar7_00));
            if (iVar2 < 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = 1;
            }
          }
          ain0 = 1;
        }
        if (iVar2 == 0) {
          iVar2 = (*(le<int>* )(fr0_ - 0x68)) * 0x44 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08);
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c23a1b0(((undefined1 *)(fr0_ - 0x54)),iVar4,piVar6,ar7));
          if ((*(le<uint>* )(unsigned)(iVar2 + 0x10) & 2) == 0) {
            uVar3 = *(le<uint>* )(unsigned)(ar4_00 + 4) & 0xa0000000;
            if ((uVar3 != 0) && (uVar3 != 0x20000000)) {
              if (uVar3 == 0x80000000) {
                ar7 = 1;
                ({ unsigned long t0_ = (unsigned long)(ar7_00); *(le<unsigned>* )((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,1); });
                piVar6 = ar6_00;
LAB_8c23a7c0:
                *(le<undefined2>* )(unsigned)(*ar4_01 + 0x42) = 0;
              }
              goto LAB_8c23a852;
            }
            (*(le<int>* )(fr0_ - 0x68)) = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c25a914(ar4_00,iVar2 + 0x14,piVar6,ar7));
            if (-1 < (*(le<int>* )(fr0_ - 0x68))) {
              ar7 = 1;
              ({ unsigned long t0_ = (unsigned long)(ar7_00); *(le<unsigned>* )((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,1); });
              *(le<undefined2>* )(unsigned)(*ar4_01 + 0x42) = 0;
              goto LAB_8c23a6f0;
            }
            ({ unsigned long t0_ = (unsigned long)(ar7_00); *(le<unsigned>* )((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,1); });
LAB_8c23a816:
            *(le<short>* )(unsigned)(*ar4_01 + 0x42) = -(short)(*(le<int>* )(fr0_ - 0x68));
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = iVar1;
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ar6_00;
            goto LAB_8c23a82a;
          }
          uVar3 = *(le<uint>* )(unsigned)(ar4_00 + 4) & 0xa0000000;
          if (uVar3 == 0) {
            iVar4 = iVar2 + 0x14;
            ar7 = *(le<uint>* )(unsigned)(iVar2 + 0x10);
            piVar6 = ar6_00;
            ({ unsigned long t0_ = (unsigned long)(ar7_00); *(le<unsigned>* )((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c25a380(ar4_01,iVar4,ar6_00,ar7); });
LAB_8c23a578:
            *(le<undefined2>* )(unsigned)(*ar4_01 + 0x40) = *(le<undefined2>* )(unsigned)(iVar2 + 0x40);
            *(le<undefined2>* )(unsigned)(*ar4_01 + 0x42) = 0;
LAB_8c23a6c4:
            ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c25a6ea(ar6_00,iVar4,piVar6,ar7); });
          }
          else {
            if (uVar3 == 0x80000000) {
              if ((*(le<uint>* )(unsigned)(iVar2 + 0x10) & 1) != 0) {
                ar7 = 3;
                ({ unsigned long t0_ = (unsigned long)(ar7_00); *(le<unsigned>* )((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,3); });
                *(le<undefined2>* )(unsigned)(*ar4_01 + 0x40) = *(le<undefined2>* )(unsigned)(iVar2 + 0x40);
                piVar6 = ar6_00;
                goto LAB_8c23a7c0;
              }
              (*(le<int>* )(fr0_ - 0x68)) = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c25a8c0(ar4_00,iVar2 + 0x14,piVar6,ar7));
              if ((*(le<int>* )(fr0_ - 0x68)) < 0) {
LAB_8c23a52a:
                ({ unsigned long t0_ = (unsigned long)(ar7_00); *(le<unsigned>* )((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,2); });
                *(le<undefined2>* )(unsigned)(*ar4_01 + 0x40) = *(le<undefined2>* )(unsigned)(iVar2 + 0x40);
                goto LAB_8c23a816;
              }
              ar7 = 2;
              ({ unsigned long t0_ = (unsigned long)(ar7_00); *(le<unsigned>* )((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,2); });
              *(le<undefined2>* )(unsigned)(*ar4_01 + 0x40) = *(le<undefined2>* )(unsigned)(iVar2 + 0x40);
              *(le<undefined2>* )(unsigned)(*ar4_01 + 0x42) = 0;
LAB_8c23a674:
              piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar2 + 0x14));
              uVar5 = 1;
            }
            else {
              if (uVar3 != 0x20000000) goto LAB_8c23a852;
              if ((*(le<uint>* )(unsigned)(iVar2 + 0x10) & 1) != 0) {
                iVar4 = iVar2 + 0x14;
                ar7 = 3;
                piVar6 = ar6_00;
                ({ unsigned long t0_ = (unsigned long)(ar7_00); *(le<unsigned>* )((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c25a380(ar4_01,iVar4,ar6_00,3); });
                goto LAB_8c23a578;
              }
              (*(le<int>* )(fr0_ - 0x68)) = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c25a8c0(ar4_00,iVar2 + 0x14,piVar6,ar7));
              if ((*(le<int>* )(fr0_ - 0x68)) < 0) goto LAB_8c23a52a;
              ar7 = 2;
              ({ unsigned long t0_ = (unsigned long)(ar7_00); *(le<unsigned>* )((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,2); });
              *(le<undefined2>* )(unsigned)(*ar4_01 + 0x40) = *(le<undefined2>* )(unsigned)(iVar2 + 0x40);
              *(le<undefined2>* )(unsigned)(*ar4_01 + 0x42) = 0;
LAB_8c23a6a8:
              piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar2 + 0x14));
              uVar5 = 3;
            }
            ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c25a608(ar6_00,uVar5,piVar6,ar7); });
          }
        }
        else if (iVar2 == 1) {
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c23a1b0(((undefined1 *)(fr0_ - 0x54)),iVar4,piVar6,ar7));
          iVar2 = (*(le<int>* )(fr0_ - 0x68)) * 0x44 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08);
          *(le<int>* )(unsigned)(ar4_00 + 8) = iVar2;
          uVar3 = *(le<uint>* )(unsigned)(ar4_00 + 4) & 0xa0000000;
          if (uVar3 == 0) {
            if ((*(le<uint>* )(unsigned)(iVar2 + 0x10) & 2) == 0) {
              ar5_00 = iVar2 + 0x14;
              iVar4 = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c25a914(ar4_00,ar5_00,piVar6,ar7));
              if (iVar4 < 0) goto LAB_8c23a6de;
              *(le<undefined2>* )(unsigned)(iVar2 + 0x42) = 0;
              if (ain0 != 0) {
LAB_8c23a6f0:
                piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar2 + 0x14));
                ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c25a608(ar6_00,2,piVar6,ar7); });
                *(le<uint>* )(unsigned)(iVar2 + 0x10) = *(le<uint>* )(unsigned)(iVar2 + 0x10) | 8;
                goto LAB_8c23a852;
              }
LAB_8c23a728:
              (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c2571fe(iVar2,ar5_00,piVar6,ar7));
              *(le<uint>* )(unsigned)(iVar2 + 0x10) = *(le<uint>* )(unsigned)(iVar2 + 0x10) | 2;
            }
            else {
joined_r0x8c23a628:
              if (ain0 != 0) goto LAB_8c23a6c4;
            }
LAB_8c23a734:
            *(le<short>* )(unsigned)(iVar2 + 0x40) = *(le<short>* )(unsigned)(iVar2 + 0x40) + 1;
          }
          else if (uVar3 == 0x80000000) {
            if ((*(le<uint>* )(unsigned)(iVar2 + 0x10) & 1) == 0) {
              iVar4 = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c25a8c0(ar4_00,iVar2 + 0x14,piVar6,ar7));
              if (iVar4 < 0) goto LAB_8c23a6de;
              *(le<undefined2>* )(unsigned)(iVar2 + 0x42) = 0;
              if (ain0 != 0) goto LAB_8c23a674;
              *(le<uint>* )(unsigned)(iVar2 + 0x10) = *(le<uint>* )(unsigned)(iVar2 + 0x10) | 1;
            }
          }
          else if (uVar3 == 0x20000000) {
            if ((*(le<uint>* )(unsigned)(iVar2 + 0x10) & 2) == 0) {
              ar5_00 = iVar2 + 0x14;
              iVar4 = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c25a914(ar4_00,ar5_00,piVar6,ar7));
              if (-1 < iVar4) {
                *(le<undefined2>* )(unsigned)(iVar2 + 0x42) = 0;
                if (ain0 == 0) goto LAB_8c23a728;
                goto LAB_8c23a6f0;
              }
            }
            else {
              if ((*(le<uint>* )(unsigned)(iVar2 + 0x10) & 1) != 0) goto joined_r0x8c23a628;
              iVar4 = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c25a8c0(ar4_00,iVar2 + 0x14,piVar6,ar7));
              if (-1 < iVar4) {
                *(le<undefined2>* )(unsigned)(iVar2 + 0x42) = 0;
                if (ain0 != 0) goto LAB_8c23a6a8;
                *(le<uint>* )(unsigned)(iVar2 + 0x10) = *(le<uint>* )(unsigned)(iVar2 + 0x10) | 1;
                goto LAB_8c23a734;
              }
            }
LAB_8c23a6de:
            *(le<short>* )(unsigned)(iVar2 + 0x42) = -(short)iVar4;
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = iVar1;
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b0) = ar6_00;
            goto LAB_8c23a82a;
          }
        }
        else if (iVar2 == 2) {
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c23a1b0(((undefined1 *)(fr0_ - 0x54)),iVar4,piVar6,ar7));
          uVar5 = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c25a710(ar6_00,iVar4,piVar6,ar7));
          piVar6 = (le<int>* )(unsigned)0x2c;
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c23c814(uVar5,((undefined1 *)(fr0_ - 0x54)),0x2c,ar7));
          uVar3 = *(le<uint>* )(unsigned)(ar4_00 + 4) & 0xa0000000;
          if (uVar3 == 0) {
            (*(le<int>* )(fr0_ - 0x68)) = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c25a914(ar4_00,uVar5,piVar6,ar7));
            if (-1 < (*(le<int>* )(fr0_ - 0x68))) {
              ar7 = 2;
              ({ unsigned long t0_ = (unsigned long)(ar7_00); *(le<unsigned>* )((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c25a380(ar4_00 + 8,uVar5,ar6_00,2); });
              *(le<undefined2>* )(unsigned)(*ar4_01 + 0x42) = 0;
              piVar6 = ar6_00;
joined_r0x8c23a79c:
              if (ain0 != 0) {
                *(le<uint>* )(unsigned)(*ar4_01 + 0x10) = *(le<uint>* )(unsigned)(*ar4_01 + 0x10) | 8;
              }
              goto LAB_8c23a852;
            }
          }
          else if (uVar3 == 0x80000000) {
            (*(le<int>* )(fr0_ - 0x68)) = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c25a8c0(ar4_00,uVar5,piVar6,ar7));
            if (-1 < (*(le<int>* )(fr0_ - 0x68))) {
              ar7 = 1;
              ({ unsigned long t0_ = (unsigned long)(ar7_00); *(le<unsigned>* )((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c25a380(ar4_01,uVar5,ar6_00,1); });
              piVar6 = ar6_00;
              goto LAB_8c23a7c0;
            }
          }
          else {
            if (uVar3 != 0x20000000) goto LAB_8c23a852;
            (*(le<int>* )(fr0_ - 0x68)) = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c25a914(ar4_00,uVar5,piVar6,ar7));
            if (-1 < (*(le<int>* )(fr0_ - 0x68))) {
              (*(le<int>* )(fr0_ - 0x68)) = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c25a8c0(ar4_00,uVar5,piVar6,ar7));
              if ((*(le<int>* )(fr0_ - 0x68)) < 0) {
                ({ unsigned long t0_ = (unsigned long)(ar7_00); *(le<unsigned>* )((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c25a380(ar4_01,uVar5,ar6_00,2); });
                goto LAB_8c23a816;
              }
              ar7 = 3;
              ({ unsigned long t0_ = (unsigned long)(ar7_00); *(le<unsigned>* )((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c25a380(ar4_01,uVar5,ar6_00,3); });
              *(le<undefined2>* )(unsigned)(*ar4_01 + 0x42) = 0;
              piVar6 = ar6_00;
              goto joined_r0x8c23a79c;
            }
          }
          ({ unsigned long t0_ = (unsigned long)(ar7_00); *(le<unsigned>* )((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c25a380(ar4_01,uVar5,ar6_00,0); });
          goto LAB_8c23a816;
        }
LAB_8c23a852:
        (*(le<int>* )(fr0_ - 0x5c)) = (*(le<int>* )(fr0_ - 0x5c)) + 1;
      } while ((*(le<int>* )(fr0_ - 0x5c)) < (*(le<short>* )(fr0_ - 0x22)));
    }
    uVar5 = 1;
  }
  else {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b4) = 4;
LAB_8c23a82a:
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

__asm__(".globl FUN_8c23a29c\n.set FUN_8c23a29c, FUN_8c23a29c_def\n");

}
