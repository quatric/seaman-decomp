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
uint FUN_8c21849c_def(le<short>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21849c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  short sVar2;
  le<int>* piVar3;
  int iVar4;
  le<undefined4>* puVar5;
  uint uVar6;
  le<uint>* puVar7;
  le<uint>* puVar8;
  le<int>* piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint ar5_00;
  uint unaff_r12 = 0;
  int iVar13;
  
  iVar4 = 0x8c4ab158;
  piVar3 = 0x8c4c0fa0;
  ar5_00 = ar5;
  while( true ) {
    puVar5 = 0x8c4c0fa4;
    uVar12 = (uint)*ar4;
    if (uVar12 == (int)0xff) break;
    uVar1 = ar4[1];
    sVar2 = ar4[2];
    iVar13 = (int)ar4[3];
    if ((0x8000 & uVar12) == 0) {
      *piVar3 = 0;
      *puVar5 = 0;
    }
    uVar6 = 0xe0000000;
    uVar10 = 0xffff7fff;
    *(le<int>* )(unsigned)(iVar4 + 0x14) = iVar13;
    puVar7 = 0xff00003c;
    unaff_r12 = uVar12 & uVar10;
    *(le<unsigned>* )(unsigned)(iVar4 + 0x18) = ar4 + 4;
    uVar12 = 0x3ffffff;
    uVar10 = sVar2 * 0x10 + ar5;
    *(le<uint>* )(unsigned)(iVar4 + 0x1c) = uVar10;
    puVar8 = 0xff000038;
    *(le<uint>* )(unsigned)(iVar4 + 0x20) = uVar12 & uVar10 | uVar6;
    piVar9 = 0x8c4aa518;
    uVar12 = uVar10 >> 0x18 & 0x1c;
    *puVar7 = uVar12;
    *puVar8 = uVar12;
    *piVar9 = *piVar9 + iVar13;
    switch(unaff_r12 & 0xff) {
    case 0x20:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c217618(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    case 0x21:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21768c(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    case 0x22:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c217744(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    case 0x23:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21782c(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2177b8(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    case 0x28:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2178a0(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    case 0x29:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c217924(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    case 0x2a:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c217aa4(0x8c4ab158,ar5_00,ar6,ar7));
      unaff_r12 = 0x23;
      break;
    case 0x2b:
    case 0x2d:
    case 0x2e:
    case 0x2f:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2179e4(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    case 0x2c:
      ar5_00 = unaff_r12;
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c217b18(0x8c4ab158,unaff_r12,ar6,ar7));
      break;
    case 0x30:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c217c20(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    case 0x31:
    case 0x32:
      iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c217d1c(0x8c4ab158,ar5_00,ar6,ar7));
      break;
    default:
      iVar11 = 0;
    }
    uVar12 = 0xff00;
    *piVar3 = *piVar3 + iVar11;
    if (((uVar12 & unaff_r12) == (int)0x200) || ((unaff_r12 & 0xff) != 0x2c)) {
      *(le<undefined4>* )(unsigned)0x8c4c0fa4 = *(le<undefined4>* )(unsigned)0x8c4c0fa4 + iVar13;
    }
    ar4 = ar4 + 4 + (uint)uVar1 * 2 + -2;
  }
  return unaff_r12 = 0;
}

__asm__(".globl FUN_8c21849c\n.set FUN_8c21849c, FUN_8c21849c_def\n");

}
