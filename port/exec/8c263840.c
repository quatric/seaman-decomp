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
undefined4 FUN_8c263840_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c263840";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2048; for (int i_ = 0; i_ < 2048; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int a6;
  uint uVar8;
  undefined1 *ar4_00;
  code *pcVar10;
  double dVar9;
  undefined2 uVar11;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar8 = ar5 + 0x1fU & 0xffffffe0;
  iVar7 = ar6 - (uVar8 - ar5);
  iVar4 = 0;
  do {
    if ((((undefined1 *)(unsigned)0x8c277fd0))[iVar4 * 0x94] == '\0') break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  if (iVar4 != 8) {
    iVar4 = iVar4 * 0x94;
    ar4_00 = ((undefined1 *)(unsigned)0x8c277fd0) + iVar4;
    (vsp = ((unsigned long)(fr0_ - 2048)), memset(ar4_00,0,0x94,ar7));
    *(char *)(unsigned)(iVar4 + -0x73d8802d) = (char)ar4;
    *(uint *)(unsigned)(iVar4 + -0x73d88010) = ar4 * 0x4040 + uVar8;
    *(uint *)(unsigned)(iVar4 + -0x73d8800c) = (iVar7 + ar4 * -0x4040) - 0x24U & 0xfffff800;
    *(undefined4 *)(unsigned)(iVar4 + -0x73d88008) = 0x24;
    *(uint *)(unsigned)(iVar4 + -0x73d88004) = uVar8;
    *(undefined4 *)(unsigned)(iVar4 + -0x73d88000) = 0x2000;
    *(undefined4 *)(unsigned)(iVar4 + -0x73d87ffc) = 0x2020;
    a6 = *(int *)(unsigned)(iVar4 + -0x73d88008);
    iVar6 = *(int *)(unsigned)(iVar4 + -0x73d8800c);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c26b564(*(undefined4 *)(unsigned)(iVar4 + -0x73d88010),iVar6,a6,ar7));
    *(int *)(unsigned)(iVar4 + -0x73d88020) = iVar1;
    *(int *)(unsigned)(iVar4 + -0x73d8801c) = iVar1;
    if (iVar1 != 0) {
      iVar1 = 0;
      if (0 < ar4) {
        do {
          iVar7 = iVar1 * 4;
          puVar3 = (undefined4 *)(unsigned)(iVar7 + iVar4 + -0x73d88018);
          a6 = (*(int *)(unsigned)(iVar4 + -0x73d87ffc) - *(int *)(unsigned)(iVar4 + -0x73d88000)) * 2;
          iVar6 = *(int *)(unsigned)(iVar4 + -0x73d88000) << 1;
          uVar2 = (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c26b564(*(int *)(unsigned)(iVar4 + -0x73d87ffc) * iVar1 * 2 +
                               *(int *)(unsigned)(iVar4 + -0x73d88004),iVar6,a6,ar7));
          *puVar3 = uVar2;
          if (*(int *)(unsigned)(iVar4 + -0x73d88018 + iVar7) == 0) goto override_prt_8c26394e_7a4d7f16;
          iVar1 = iVar1 + 1;
        } while (iVar1 < ar4);
      }
      a6 = iVar4 + -0x73d88018;
      iVar6 = ar4;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c262b04(*(undefined4 *)(unsigned)(iVar4 + -0x73d8801c),ar4,a6,ar7));
      *(int *)(unsigned)(iVar4 + -0x73d8802c) = iVar1;
      if (iVar1 != 0) {
        iVar6 = ar4;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 2048)), s_E1201_mwRnaCreate_Illigal_pa_268b7a(iVar4 + -0x73d88018,ar4,a6,ar7));
        *(int *)(unsigned)(iVar4 + -0x73d88024) = iVar1;
        if (iVar1 != 0) {
          *(undefined4 *)(unsigned)(iVar4 + -0x73d87ff8) = 0x3c;
          iVar7 = *(int *)(unsigned)(iVar4 + -0x73d8800c);
          if (iVar7 < 0) {
            iVar7 = iVar7 + 0x7ff;
          }
          iVar6 = 0;
          *(short *)(unsigned)(iVar4 + -0x73d87ff4) = (short)(iVar7 >> 0xb);
          if (cVar13 == '\0') {
            pcVar10 = (code *)0x3f59999a;
          }
          else {
            pcVar10 = ((void *)0x8c2629b2);
          }
          dVar9 = CONCAT44D(pcVar10,(float)(int)*(short *)(unsigned)(iVar4 + -0x73d87ff4));
          if (cVar12 == '\0') {
            uVar11 = (undefined2)(int)((float)(int)*(short *)(unsigned)(iVar4 + -0x73d87ff4) * (float)(uint)pcVar10)
            ;
          }
          else {
            uVar11 = (undefined2)(int)(dVar9 * dVar9);
          }
          *(undefined2 *)(unsigned)(iVar4 + -0x73d87ff2) = uVar11;
          *(undefined2 *)(unsigned)(iVar4 + -0x73d87ff0) = 0;
          puVar5 = (undefined2 *)(unsigned)(iVar4 + -0x73d87fee);
          if (0 < ar4) {
            do {
              iVar6 = iVar6 + 1;
              *puVar5 = 0xff80;
              puVar5 = puVar5 + 1;
            } while (iVar6 < ar4);
          }
          *(undefined1 *)(unsigned)(iVar4 + -0x73d87fc4) = 1;
          *(undefined4 *)(unsigned)(iVar4 + -0x73d87fdc) = 0;
          *(undefined4 *)(unsigned)(iVar4 + -0x73d87fd8) = 0;
          *(undefined4 *)(unsigned)(iVar4 + -0x73d87fd4) = 0;
          *(undefined2 *)(unsigned)(iVar4 + -0x73d87fd0) = 0;
          *(undefined4 *)(unsigned)(iVar4 + -0x73d87fcc) = 0;
          *(undefined2 *)(unsigned)(iVar4 + -0x73d87fc8) = 0;
          *(undefined2 *)(unsigned)(iVar4 + -0x73d87fc6) = 0;
          *(undefined1 *)(unsigned)(iVar4 + -0x73d87fc3) = 1;
          *(undefined1 *)(unsigned)(iVar4 + -0x73d87fbe) = 0;
          *(undefined4 *)(unsigned)(iVar4 + -0x73d87fa8) = 0;
          *ar4_00 = 1;
          return ar4_00;
        }
      }
    }
override_prt_8c26394e_7a4d7f16:
    ({ unsigned long ri0_ = (unsigned long)(iVar7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 2048)); FUN_8c2639fa(ar4_00,iVar6,a6,ar7); });
  }
  return 0;
}

__asm__(".globl _FUN_8c263840\n.set _FUN_8c263840, _FUN_8c263840_def\n");
