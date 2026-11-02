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
int FUN_8c0a0c88_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c0a0c88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 204; for (int i_ = 0; i_ < 204; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = 1;
  puVar2 = ar6;
  puVar3 = ar7;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 204)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 204)) - 8); FUN_8c03f480(ar5,((void *)0x8c03f480),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 204)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x44)),puVar2,puVar3));
  ar5_00 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 204)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,puVar2,puVar3));
  (vsp = ((unsigned long)(fr0_ - 204)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),ar5_00,puVar2,puVar3));
  if (*(int *)(unsigned)(ar4 + 0x178) == 1) {
    (vsp = ((unsigned long)(fr0_ - 204)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),ar4 + 0x168,puVar2,puVar3));
  }
  *(undefined4 *)(unsigned)(ar4 + 0x128) = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 0x124);
  if ((iVar1 < 0xf) && (1 < iVar1)) {
                    
    switch(iVar1) {
    case 2:
      (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x5c)),ar7,puVar2,puVar3));
      puVar2 = ((undefined1 *)(fr0_ - 0x5c));
      puVar3 = ar6;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0a14d8(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),puVar2,ar6));
      (vsp = ((unsigned long)(fr0_ - 204)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,puVar2,puVar3));
      break;
    case 3:
      puVar2 = ar7;
      puVar3 = ar6;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0329ac(ar4,((undefined1 *)(fr0_ - 0x24)),ar7,ar6));
      if (iVar4 == 0) {
        puVar2 = ar7;
        puVar3 = ar6;
        (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c032788(ar4,((undefined1 *)(fr0_ - 0x24)),ar7,ar6));
      }
      (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x50)),ar7,puVar2,puVar3));
      puVar3 = ((undefined1 *)(fr0_ - 0x50));
      puVar2 = ((undefined1 *)(fr0_ - 0x24));
      iVar4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0a1828(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),puVar2,puVar3));
      (vsp = ((unsigned long)(fr0_ - 204)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x50)),0xffffffff,puVar2,puVar3));
    }
  }
  if ((*(int *)(unsigned)(ar4 + 0x178) == 1) && (iVar4 == 0)) {
    (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c031ce8(ar4,ar7,ar6,puVar3));
    (vsp = ((unsigned long)(fr0_ - 204)), Vec3_assign(ar4 + 0x168,((undefined1 *)(fr0_ - 0xc8)),ar6,puVar3));
    (vsp = ((unsigned long)(fr0_ - 204)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6,puVar3));
    puVar2 = ar6;
  }
  (vsp = ((unsigned long)(fr0_ - 204)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,puVar2,puVar3));
  (vsp = ((unsigned long)(fr0_ - 204)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,puVar2,puVar3));
  return iVar4;
}

__asm__(".globl _FUN_8c0a0c88\n.set _FUN_8c0a0c88, _FUN_8c0a0c88_def\n");
