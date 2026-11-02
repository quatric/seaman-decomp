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
undefined4 s_GRAPHICS_MESSAGE_0c2c72_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_MESSAGE_0c2c72";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  for (iVar5 = 0; iVar5 < 10; iVar5 = iVar5 + 1) {
    *(undefined4 *)(unsigned)(0x1cc + iVar5 * 0xc + ar4) = 0;
  }
  uVar4 = 10;
  uVar1 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c239170(ar4 + 0x1c0,ar4 + 0x1c8,0x8c4312a8,10));
  iVar5 = ar4 + 0x1c0;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 4) + 8))))((int *)(unsigned)(ar4 + 4),iVar5,uVar1,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 4,iVar5,uVar1,uVar4));
  puVar3 = (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xa0f;
  puVar2 = (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xaf2;
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02100c(ar5,puVar2,puVar3,uVar1));
  if (iVar5 == -1) {
    uVar1 = 2;
    puVar3 = (undefined *)(unsigned)0x1;
    puVar2 = (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb01;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xa20,puVar2,1,2));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x194,puVar2,puVar3,uVar1));
  puVar3 = (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xa0f;
  puVar2 = (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb1c;
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020ef0(ar5,puVar2,puVar3,uVar1));
  if (iVar5 == 0) {
    uVar1 = 2;
    puVar3 = (undefined *)(unsigned)0x1;
    puVar2 = (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb01;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb25,puVar2,1,2));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x19c,puVar2,puVar3,uVar1));
  puVar3 = (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xa0f;
  puVar2 = (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb47;
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020ef0(ar5,puVar2,puVar3,uVar1));
  if (iVar5 == 0) {
    uVar1 = 2;
    puVar3 = (undefined *)(unsigned)0x1;
    puVar2 = (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb01;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb50,puVar2,1,2));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x1a4,puVar2,puVar3,uVar1));
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020ef0))))
                    (ar5,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb72,
                     (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xa0f,uVar1));
  if (iVar5 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb7b,
               (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb01,1,2));
  }
  for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
    *(undefined4 *)(unsigned)(0x308 + iVar5 * 0xc + ar4) = 0;
  }
  uVar4 = 3;
  uVar1 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c239170(ar4 + 0x328,ar4 + 0x304,0x8c4312a8,3));
  iVar5 = ar4 + 0x328;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x2bc) + 8))))((int *)(unsigned)(ar4 + 0x2bc),iVar5,uVar1,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x2bc,iVar5,uVar1,uVar4));
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02100c))))
                    (ar5,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb9d,
                     (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xa0f,uVar1));
  if (iVar5 == -1) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xba9,
               (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb01,1,2));
  }
  return 0;
}

__asm__(".globl _s_GRAPHICS_MESSAGE_0c2c72\n.set _s_GRAPHICS_MESSAGE_0c2c72, _s_GRAPHICS_MESSAGE_0c2c72_def\n");
