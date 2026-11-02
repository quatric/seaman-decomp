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
undefined4 FUN_8c10d458_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10d458";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 a6;
  undefined4 a5;
  uint uVar3;
  uint uVar4;
  int *a5_00;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int a4;
  
  a4 = *ar4;
  iVar7 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x9c + ar5))))(ar5,ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x14))))(ar5,iVar7,ar6,ar7));
  *(short *)(unsigned)((int)0xe8 + (int)ar4) = (short)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x18))))(ar5,iVar7,ar6,ar7));
  *(short *)(unsigned)((int)0x98 + (int)ar4) = (short)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x10))))(ar5,iVar7,ar6,ar7));
  *(short *)(unsigned)((int)0x9a + (int)ar4) = (short)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x28))))(ar5,iVar7,ar6,ar7));
  *(short *)(unsigned)((int)0x9e + (int)ar4) = (short)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x20))))(ar5,iVar7,ar6,ar7));
  *(short *)(unsigned)((int)0x9c + (int)ar4) = (short)uVar2;
  *(short *)(unsigned)(0x9c + 4 + (int)ar4) = -*(short *)(unsigned)((int)0x9c + (int)ar4);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x78))))(ar5,iVar7,ar6,ar7));
  *(undefined4 *)(unsigned)((int)0xa4 + (int)ar4) = uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x7c))))(ar5,iVar7,ar6,ar7));
  *(undefined4 *)(unsigned)((int)0xa8 + (int)ar4) = uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x80 + ar5))))(ar5,iVar7,ar6,ar7));
  *(undefined4 *)(unsigned)((int)0xb4 + (int)ar4) = uVar2;
  if (*(int *)(unsigned)((int)0xac + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0xac + (int)ar4),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0xb0 + (int)ar4),ar6,ar7));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,(uint)*(ushort *)(unsigned)((int)0x98 + (int)ar4) << 1,ar6,ar7));
  iVar7 = (int)0x9c;
  *(undefined4 *)(unsigned)((int)0xac + (int)ar4) = uVar2;
  iVar7 = ((uint)(((ushort *)(unsigned long)*(unsigned *)(unsigned)((int)0xa8 + (int)ar4)))[*(ushort *)(unsigned)(iVar7 + (int)ar4)] -
          (uint)*((ushort *)(unsigned long)*(unsigned *)(unsigned)((int)0xa8 + (int)ar4))) * 2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,iVar7,ar6,ar7));
  *(undefined4 *)(unsigned)((int)0xb0 + (int)ar4) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10d3ec(ar4,iVar7,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x38))))(ar5,iVar7,ar6,ar7));
  *(short *)(unsigned)((int)0x92 + (int)ar4) = (short)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x70))))(ar5,iVar7,ar6,ar7));
  a6 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 8))))(ar5,iVar7,ar6,ar7));
  a5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0xc))))(ar5,iVar7,a6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10d196(ar4 + 0x1f,a5,a6,uVar2));
  if ((uVar3 & 0xff) == 0) {
    *(unsigned *)(unsigned)((int)0x88 + (int)ar4) = ar4 + 0x1f;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 8))))(ar5,a5,a6,uVar2));
    iVar8 = (int)0x8e;
    *(short *)(unsigned)(ar4 + 0xc) = (short)uVar2;
    iVar8 = iVar8 + (int)ar4;
    uVar3 = (uint)(short)ar4[0xc];
    a5_00 = ar4 + 0x1c;
    iVar7 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10cf6c(ar4,a5_00,iVar8,uVar3));
    if (iVar7 != 0) {
      uVar10 = 0;
      if ((short)ar4[0xc] != 0) {
        do {
          uVar4 = uVar10;
          uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x84 + ar5))))(ar5,uVar10,iVar8,uVar3));
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xc0 + ar5))))(uVar2,uVar4,iVar8,uVar3));
          if (iVar1 == 0) {
            uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x68))))(uVar2,uVar4,iVar8,uVar3));
          }
          else {
            iVar7 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x68))))(uVar2,uVar4,iVar8,uVar3));
            uVar3 = iVar7 + 1U >> 1;
          }
          iVar8 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x60))))(uVar2,uVar4,iVar8,uVar3));
          iVar7 = uVar10 * 0xc + ar4[0x1c];
          uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10d016(ar4,iVar7,iVar8,uVar3));
          if ((uVar4 & 0xff) != 0) {
            return 1;
          }
          iVar9 = uVar10 * 4;
          if (*(int *)(unsigned)((int)ar4 + iVar9 + 0xc0) != 0) {
            iVar7 = *(int *)(unsigned)((int)ar4 + iVar9 + 0xc0);
            (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,iVar7,iVar8,uVar3));
          }
          pcVar5 = ((code *)(unsigned long)*(unsigned *)(unsigned)(a4 + 0x10));
          iVar6 = (int)0xc0;
          a5_00 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x60))))(uVar2,iVar7,iVar8,uVar3));
          uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)pcVar5))(a4,a5_00,iVar8,uVar3));
          *(undefined4 *)(unsigned)((int)ar4 + iVar9 + iVar6) = uVar2;
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(unsigned)(ar4 + 0xc));
      }
      ar4[0x21] = ar4[0x1c];
      *(undefined2 *)(unsigned)(ar4 + 0x24) = *(undefined2 *)(unsigned)((int)ar4 + 0x8e);
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x10))))(ar5,a5_00,iVar8,uVar3));
      uVar10 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10d0da(ar4,uVar2,iVar8,uVar3));
      if ((uVar10 & 0xff) == 0) {
        if (iVar1 == 0) {
          ar4[0x1a] = (int)((void *)(unsigned)0x8c10d7f4);
        }
        else {
          ar4[0x1a] = (int)((void *)(unsigned)0x8c10da96);
        }
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10d1bc(ar4,uVar2,iVar8,uVar3));
        return 0;
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c10d458\n.set _FUN_8c10d458, _FUN_8c10d458_def\n");
