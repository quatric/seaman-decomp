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
undefined4 FUN_8c26bd86_def(int ar4,int ar5,int ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c26bd86";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = ((undefined1 *)(fr0_ - 0x10));
  *ar7 = 0;
  if ((ar5 < 0) || (3 < ar5)) {
    if (*(int *)(unsigned)(ar4 + 0x28) != 0) {
      (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x28))))(*(undefined4 *)(unsigned)(ar4 + 0x2c),0xfffffffd,ar6,ar7));
    }
  }
  else {
    iVar1 = *(int *)(unsigned)(ar5 * 4 + ar4 + 0x18);
    if (iVar1 != 0) {
      (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x10)),iVar1 + 8,vr7));
      *ar7 = *(undefined4 *)(unsigned)(puVar2 + 4);
      if (*(char *)(unsigned)(ar4 + 5) == '\x01') {
        if (ar6 <= *(int *)(unsigned)(puVar2 + 4)) {
          return 1;
        }
      }
      else if (*(int *)(unsigned)(puVar2 + 4) == ar6) {
        return 1;
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c26bd86\n.set _FUN_8c26bd86, _FUN_8c26bd86_def\n");
