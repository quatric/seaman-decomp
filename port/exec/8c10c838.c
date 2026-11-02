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
undefined4 FUN_8c10c838_def(int *ar4,uint ar5,int ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c10c838";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = ((void *)(unsigned)0x8c013ff8);
  uVar2 = ar5 & 0xff;
  if (uVar2 == 1) {
    ar4[10] = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4[0x15],0,(uint)*(ushort *)(unsigned)(ar4 + 0xc) << 5,ar7));
  }
  else if (uVar2 == 2) {
    if ((ar4[10] != 0) || (ar6 != 0)) {
      *(undefined1 *)(unsigned)(ar4 + 0x16) = 1;
      if ((uint)ar4[10] < 3) {
        iVar3 = ar4[10] + 4;
      }
      else {
        iVar3 = 7;
      }
      ar4[10] = iVar3;
    }
  }
  else if (uVar2 == (int)0xf8) {
    *ar7 = ar4[10] + -4;
  }
  else {
    if (uVar2 != (int)0xff) {
      return 0;
    }
    iVar3 = ar4[0x15];
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,iVar3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120668(ar4,iVar3,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c10c838\n.set _FUN_8c10c838, _FUN_8c10c838_def\n");
