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
undefined4 FUN_8c20f640_def(le<uint>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20f640");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4160; for (int i_ = 0; i_ < 4160; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 a5;
  undefined4 a6;
  uint uVar4;
  undefined4 a7;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar7 = ar4[0x25];
  uVar9 = ar4[0x26];
  (*(le<uint>* )(fr0_ - 0x3c)) = ar4[0x27];
  uVar6 = ar4[0x24];
  ((le<int>* )(fr0_ - 0x30))[0] = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d698);
  ((le<int>* )(fr0_ - 0x30))[1] = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d69c);
  ((le<int>* )(fr0_ - 0x30))[2] = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d6a0);
  ((le<int>* )(fr0_ - 0x30))[3] = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d6a4);
  uVar8 = *ar4;
  if ((uVar8 & 1) != 0) {
    uVar7 = uVar7 & 0x1fffffff | ar4[5] << 0x1d;
  }
  if ((uVar8 & 2) != 0) {
    uVar7 = uVar7 & 0xe7ffffff | ar4[6] << 0x1b;
  }
  a7 = 0x4000000;
  if ((uVar8 & 0x20) != 0) {
    if (ar4[10] == 0) {
      uVar7 = uVar7 & 0xfbffffff;
    }
    else {
      uVar7 = uVar7 | 0x4000000;
    }
  }
  uVar5 = uVar8 & 8;
  if (uVar5 != 0) {
    uVar7 = uVar7 & 0xfdffffff | (ar4[8] >> 1) << 0x19;
  }
  if ((uVar8 & 0x200) != 0) {
    uVar7 = uVar7 & 0xfeffffff | ar4[0x10] << 0x18;
  }
  if (uVar5 != 0) {
    uVar7 = uVar7 & 0xff7fffff | (ar4[8] & 1) << 0x17;
  }
  if ((uVar8 & 0x800000) != 0) {
    uVar7 = uVar7 & 0xffbfffff | ar4[4] << 0x16;
  }
  if ((uVar8 & 0x4000000) != 0) {
    if (ar4[0x2d] == 0) {
      uVar7 = uVar7 & 0xffefffff;
    }
    else {
      uVar7 = uVar7 | 0x100000;
    }
  }
  uVar2 = uVar9 & 0x1fffffff;
  if ((uVar8 & 0x40) == 0) goto LAB_8c20f862;
  switch(ar4[0xb]) {
  case 0:
    uVar9 = 0x10000000;
    uVar2 = uVar2 | 0xa0000000;
    goto code_r0x8c20f7da;
  case 1:
    uVar9 = 0x14000000;
    uVar2 = uVar2 | 0x80000000;
code_r0x8c20f7da:
    uVar9 = uVar2 & 0xe3ffffff | uVar9;
    goto LAB_8c20f862;
  case 2:
    uVar9 = 0xc0000000;
    break;
  case 3:
    uVar9 = 0x40000000;
    break;
  case 4:
    uVar9 = 0xe0000000;
    break;
  case 5:
    uVar9 = 0x60000000;
    break;
  case 6:
    uVar9 = 0xa0000000;
    break;
  default:
    goto LAB_8c20f862;
  case 8:
    uVar9 = 0x80000000;
    break;
  case 10:
    uVar9 = 0x20000000;
    break;
  case 0xb:
    uVar9 = uVar2;
    goto LAB_8c20f862;
  }
  uVar9 = uVar9 | uVar2;
LAB_8c20f862:
  if ((uVar8 & 0x80) == 0) goto LAB_8c20f8ea;
  uVar2 = uVar9 & 0xe3ffffff;
  switch(ar4[0xc]) {
  case 0:
    uVar2 = 0x10000000;
    uVar9 = uVar9 & 0x1fffffff | 0xa0000000;
    goto code_r0x8c20f8ba;
  case 1:
    uVar2 = 0x14000000;
    uVar9 = uVar9 & 0x1fffffff | 0x80000000;
code_r0x8c20f8ba:
    uVar9 = uVar9 & 0xe3ffffff | uVar2;
    goto LAB_8c20f8ea;
  case 2:
    uVar9 = 0x18000000;
    break;
  default:
    goto LAB_8c20f8ea;
  case 4:
    uVar9 = 0x1c000000;
    break;
  case 6:
    uVar9 = 0x14000000;
    break;
  case 7:
    uVar9 = 0xc000000;
    break;
  case 8:
    uVar9 = 0x10000000;
    break;
  case 9:
    uVar9 = 0x8000000;
    break;
  case 10:
    uVar9 = uVar2 | 0x4000000;
    goto LAB_8c20f8ea;
  case 0xb:
    uVar9 = uVar2;
    goto LAB_8c20f8ea;
  }
  uVar9 = uVar9 | uVar2;
LAB_8c20f8ea:
  if ((uVar8 & 0x1000000) != 0) {
    if (ar4[0xd] == 0) {
      uVar9 = uVar9 & 0xfdffffff;
    }
    else {
      uVar9 = uVar9 | 0x2000000;
    }
  }
  if ((uVar8 & 0x2000000) != 0) {
    if (ar4[0xe] == 0) {
      uVar9 = uVar9 & 0xfeffffff;
    }
    else {
      uVar9 = uVar9 | 0x1000000;
    }
  }
  a5 = 3;
  if ((uVar8 & 0x100) != 0) {
    uVar9 = uVar9 & 0xff3fffff | (ar4[0xf] & 3) << 0x16;
  }
  if ((uVar8 & 0x40000) != 0) {
    if (ar4[0x19] == 0) {
      uVar9 = uVar9 & 0xffdfffff;
    }
    else {
      uVar9 = uVar9 | 0x200000;
    }
  }
  if ((uVar8 & 0x400) != 0) {
    if (ar4[0x11] == 0) {
      uVar9 = uVar9 & 0xffefffff;
    }
    else {
      uVar9 = uVar9 | 0x100000;
    }
  }
  if ((uVar8 & 0x800) != 0) {
    if (ar4[0x12] == 0) {
      uVar9 = uVar9 & 0xfff7ffff;
    }
    else {
      uVar9 = uVar9 | 0x80000;
    }
  }
  a6 = 0x1000;
  if ((uVar8 & 0x1000) != 0) {
    uVar9 = uVar9 & 0xfffe7fff | ar4[0x13] << 0xf;
  }
  if ((uVar8 & 0x2000) != 0) {
    uVar9 = uVar9 & 0xfff9ffff | ar4[0x14] << 0x11;
  }
  if ((uVar8 & 0x4000) != 0) {
    uVar9 = uVar9 & 0xffff9fff | ((le<int>* )(fr0_ - 0x30))[ar4[0x15]] << 0xd;
  }
  if ((uVar8 & 0x8000) != 0) {
    if (ar4[0x16] == 0) {
      uVar9 = uVar9 & 0xffffefff;
    }
    else {
      uVar9 = uVar9 | 0x1000;
    }
  }
  if ((uVar8 & 0x10000) != 0) {
    uVar2 = ar4[0x17] & 0xf;
    if (uVar2 == 0) {
      uVar2 = 4;
    }
    uVar9 = uVar9 & 0xfffff0ff | uVar2 << 8;
  }
  if ((uVar8 & 0x20000) != 0) {
    uVar9 = uVar9 & 0xffffff3f | (ar4[0x18] & 3) << 6;
  }
  if (((int)ar4[8] >> 1 == 1) && (ar4[0x1b] != 0)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4160)), FUN_8c20f340(*(le<undefined4>* )(unsigned)(ar4[0x1b] + 0xc),3,0x1000,0x4000000));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 4160)), FUN_8c20f340(*(le<undefined4>* )(unsigned)(ar4[0x1b] + 0x10),a5,a6,a7));
    uVar9 = uVar9 & 0xffffffc0 | iVar1 << 3 | uVar2;
  }
  if (((int)ar4[8] >> 1 == 1) && (ar4[0x1b] != 0)) {
    uVar3 = *(le<uint>* )(unsigned)(ar4[0x1b] + 0x18);
    uVar2 = (uint)((uVar3 & 1) != 0) << 0x1f;
    uVar4 = (uVar3 & 8) << 0x1b;
    uVar3 = *(le<uint>* )(unsigned)(ar4[0x1b] + 8) & 0x38000000;
    if ((uVar3 == 0x28000000) || (uVar3 == 0x30000000)) {
      uVar2 = uVar2 | uVar4 | uVar3 | (ar4[0x1a] & 0x3f) << 0x15;
    }
    else {
      uVar2 = (*(le<uint>* )(fr0_ - 0x3c)) & 0x1ffffff | uVar2 | uVar4 | uVar3 |
              (~(*(le<uint>* )(unsigned)(ar4[0x1b] + 0x18) & 4) & 4) << 0x18 |
              (*(le<uint>* )(unsigned)(ar4[0x1b] + 0x18) & 0x10) << 0x15;
    }
    (*(le<uint>* )(fr0_ - 0x3c)) = uVar2 & 0xffe00000 | *(le<uint>* )(unsigned)(ar4[0x1b] + 0x1c) >> 3;
  }
  if ((uVar8 & 0x100000) != 0) {
    uVar2 = ar4[1];
    if (uVar2 == 0) {
      uVar6 = uVar6 & 0x1fffffff | 0x80000000;
    }
    if (uVar2 == 1) {
      uVar6 = uVar6 & 0x1fffffff | 0x80000000;
    }
    if (uVar2 == 2) {
      uVar6 = uVar6 & 0x1fffffff | 0xa0000000;
    }
  }
  if ((uVar8 & 0x200000) != 0) {
    uVar6 = uVar6 & 0xf8ffffff | ar4[2] << 0x18;
  }
  uVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d88);
  if ((uVar8 & 0x8000000) != 0) {
    uVar2 = ar4[0x2e];
  }
  uVar3 = uVar2 << 0x12 | uVar6 & 0xfff3ffff | 0x800000;
  if ((uVar8 & 0x10000000) != 0) {
    uVar3 = uVar2 << 0x12 | uVar6 & 0xfff0ffff | 0x800000 | ar4[0x2f] << 0x10;
  }
  uVar3 = uVar3 & 0xffffff3f;
  if (((ar4[0x28] & 0x60000000) != 0) && ((ar4[2] & 1) != 0)) {
    uVar3 = uVar3 | 0x40;
  }
  if (((uVar8 & 0x10) != 0) && ((ar4[9] & 1) != 0)) {
    uVar3 = uVar3 & 0xffffffbf | ar4[9] << 7 | (*(le<undefined4>* )(unsigned)(unsigned)0x8c2757a0) << 6;
  }
  if ((uVar8 & 0x400000) != 0) {
    uVar3 = uVar3 & 0xffffffcf | ar4[3] << 4;
  }
  uVar6 = uVar3;
  if (uVar5 != 0) {
    uVar2 = (ar4[8] >> 1) << 3;
    uVar6 = uVar3 & 0xfffffff7 | uVar2;
    if (uVar5 != 0) {
      uVar6 = uVar3 & 0xfffffff5 | uVar2 | (ar4[8] & 1) << 1;
    }
  }
  if ((uVar8 & 0x200) != 0) {
    if (ar4[0x10] == 0) {
      uVar6 = uVar6 & 0xfffffffb;
    }
    else {
      uVar6 = uVar6 | 4;
    }
  }
  if ((uVar8 & 0x800000) != 0) {
    uVar6 = ar4[4] | uVar6 & 0xfffffffe;
  }
  ar4[0x25] = uVar7 & 0xffd00000;
  ar4[0x26] = uVar9;
  ar4[0x27] = (*(le<uint>* )(fr0_ - 0x3c));
  ar4[0x24] = uVar6 & 0xe78f00ff;
  return 0;
}

__asm__(".globl FUN_8c20f640\n.set FUN_8c20f640, FUN_8c20f640_def\n");

}
