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
undefined4 FUN_8c239012_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c239012";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4148; for (int i_ = 0; i_ < 4148; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  puVar1 = ((void *)(unsigned)0x8c25a122);
  iVar3 = (int)(int)0xffffefe0;
  do {
    puVar2 = ((void *)(unsigned)0x8c259c48);
    iVar4 = (vsp = ((unsigned long)(fr0_ - 4148)), FUN_8c259c48((fr0_ + (int)0xfffffff0) + iVar3,4,ar6,ar7));
    if (iVar4 < 0) {
      return 0xffffffff;
    }
    iVar4 = *(int *)(unsigned)((fr0_ + (int)0xfffffff0) + iVar3);
    if ((((iVar4 == 0x4e4c444d) || (iVar4 == 0x564e4f43)) || (iVar4 == 0x494d5650)) ||
       ((iVar4 == 0x43474d49 || (iVar4 == 0x4d4d4f43)))) {
LAB_8c23911c:
      iVar4 = (vsp = ((unsigned long)(fr0_ - 4148)), (*(code *)xlat((unsigned long)(puVar2)))((int)((ushort *)(fr0_ - 0x14)) + iVar3,4,ar6,ar7));
      if (iVar4 < 0) {
        return 0xffffffff;
      }
      uVar7 = *(undefined4 *)(unsigned)((int)((ushort *)(fr0_ - 0x14)) + iVar3);
      iVar4 = ar6;
override_prt_8c23912e_7a4d7f16:
      (vsp = ((unsigned long)(fr0_ - 4148)), (*(code *)xlat((unsigned long)(puVar1)))(uVar7,1,iVar4,ar7));
    }
    else {
      if (iVar4 != 0x4c505650) {
        if (iVar4 != 0x54525650) goto LAB_8c23911c;
        uVar7 = 0xfffffffc;
        iVar4 = ar6;
        goto override_prt_8c23912e_7a4d7f16;
      }
      uVar7 = 0xc;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 4148)), (*(code *)xlat((unsigned long)(puVar2)))((int)((ushort *)(fr0_ - 0x14)) + 0x1014 + iVar3,0xc,ar6,ar7));
      if (iVar4 != 1) {
        return 0xffffffff;
      }
      (vsp = ((unsigned long)(fr0_ - 4148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c255f88))))
                ((uint)*(ushort *)(unsigned)((int)((ushort *)(fr0_ - 0x14)) + 0x1018 + iVar3),uVar7,ar6,ar7));
      if (*(short *)(unsigned)((int)((ushort *)(fr0_ - 0x14)) + 0x1018 + iVar3) == 6) {
        iVar6 = 4;
      }
      else {
        iVar6 = 2;
      }
      iVar4 = (int)&s0 + iVar3;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 4148)), (*(code *)xlat((unsigned long)(puVar2)))(iVar4,*(short *)(unsigned)((int)((ushort *)(fr0_ - 0x14)) + 0x101e + iVar3) * iVar6,ar6
                                ,ar7));
      if (iVar5 < 0) {
        return 0xffffffff;
      }
      uVar7 = 1;
      iVar6 = (*(int *)(unsigned)((int)((ushort *)(fr0_ - 0x14)) + 0x1014 + iVar3) -
              *(short *)(unsigned)((int)((ushort *)(fr0_ - 0x14)) + 0x101e + iVar3) * iVar6) + -8;
      *(int *)(unsigned)((int)((ushort *)(fr0_ - 0x14)) + iVar3) = iVar6;
      (vsp = ((unsigned long)(fr0_ - 4148)), (*(code *)xlat((unsigned long)(puVar1)))(iVar6,1,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 4148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c25603a))))
                ((uint)*(ushort *)(unsigned)((int)((ushort *)(fr0_ - 0x14)) + 0x1018 + iVar3),uVar7,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 4148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c2560b4))))
                ((int)*(short *)(unsigned)((int)((ushort *)(fr0_ - 0x14)) + 0x101c + iVar3) +
                 *(short *)(unsigned)((int)((ushort *)(fr0_ - 0x14)) + 0x101a + iVar3) * 0x10,
                 (int)*(short *)(unsigned)((int)((ushort *)(fr0_ - 0x14)) + 0x101e + iVar3),iVar4,ar7));
    }
    ar6 = iVar4;
    if (*(int *)(unsigned)((fr0_ + (int)0xfffffff0) + iVar3) == 0x54525650) {
      return 1;
    }
  } while( true );
}

__asm__(".globl _FUN_8c239012\n.set _FUN_8c239012, _FUN_8c239012_def\n");
