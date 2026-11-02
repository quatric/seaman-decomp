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
undefined4 FUN_8c25a216_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25a216";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)(ar4));
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c25a122(0,0,ar6,ar7));
  (*(int *)(fr0_ - 0x18)) = -1;
  do {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c259c48(&(*(int *)(fr0_ - 0x34)),4,ar6,ar7));
    if (iVar1 < 0) {
      return 0xfffffffc;
    }
    if ((*(int *)(fr0_ - 0x34)) == 0x58494247) {
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c25a122(0xfffffffc,1,ar6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c259c48(((undefined1 *)(fr0_ - 0x20)),0xc,ar6,ar7));
joined_r0x8c25a25e:
      if (iVar1 < 0) {
        return 0xfffffffc;
      }
    }
    else if ((*(int *)(fr0_ - 0x34)) == 0x54525650) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c259c48(((undefined1 *)(fr0_ - 0x2c)),0xc,ar6,ar7));
      goto joined_r0x8c25a25e;
    }
    if ((*(int *)(fr0_ - 0x34)) == 0x54525650) {
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c25a122(0,0,ar6,ar7));
      if ((*(int *)(fr0_ - 0x18)) == -1) {
        while (iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c25a536((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),(*(undefined4 *)(unsigned)(unsigned)0x8c277b18),ar7)), iVar1 != -1) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c277b18) = (*(undefined4 *)(unsigned)(unsigned)0x8c277b18) + -1;
        }
        *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x30)) = (*(undefined4 *)(unsigned)(unsigned)0x8c277b18);
      }
      else {
        *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x30)) = (*(int *)(fr0_ - 0x18));
      }
      (*(uint *)(fr0_ - 0x28)) = (*(uint *)(fr0_ - 0x28)) & 0xff00;
      if (((((*(uint *)(fr0_ - 0x28)) == 0x500) || ((*(uint *)(fr0_ - 0x28)) == 0x600)) || ((*(uint *)(fr0_ - 0x28)) == 0x700)) ||
         ((*(uint *)(fr0_ - 0x28)) == 0x800)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
  } while( true );
}

__asm__(".globl _FUN_8c25a216\n.set _FUN_8c25a216, _FUN_8c25a216_def\n");
