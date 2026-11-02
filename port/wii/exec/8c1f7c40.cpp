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
undefined4 FUN_8c1f7c40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f7c40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  uVar1 = 0;
  if ((*(undefined1 *)(unsigned)0x8c273a10) == '\0') {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4748a8) = 5;
  }
  else {
    uVar1 = 3;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f6dcc(3,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f875c(uVar1,ar5,ar6,ar7));
    uVar1 = 0x44c;
    (vsp = ((unsigned long)(fr0_ - 0)), memset(ar4,0xff,0x44c,ar7));
    if ((*(undefined1 *)(unsigned)0x8c474a2b) == '\0') {
      iVar3 = 100;
      puVar2 = (undefined1 *)(unsigned)(ar4 + 10);
      do {
        iVar3 = iVar3 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + 0xb;
      } while (iVar3 != 0);
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4748a8) = 3;
      uVar1 = 0;
    }
    else {
      iVar3 = 0x18;
      do {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f6e0c(iVar3,0,uVar1,ar7));
        uVar1 = 10;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c23c814(ar4,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4748b0) + 2,10,ar7));
        iVar3 = iVar3 + 4;
        *(undefined1 *)(unsigned)(ar4 + 10) = 0;
        ar4 = ar4 + 0xb;
      } while (iVar3 < 0x1a8);
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c1f7c40\n.set FUN_8c1f7c40, FUN_8c1f7c40_def\n");

}
