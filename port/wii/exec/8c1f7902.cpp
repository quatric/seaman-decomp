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
int FUN_8c1f7902_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  TRACE_ENTER("FUN_8c1f7902");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (undefined1)ar6;
  if ((*(undefined1 *)(unsigned)0x8c273a10) == '\0') {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4748a8) = 5;
    return 0;
  }
  iVar3 = ar7;
  if ((char)ar4 == '\0') {
    iVar2 = 0xb4;
  }
  else {
    if ((char)ar4 != '\x01') goto LAB_8c1f7970;
    iVar2 = 0xae;
  }
  *(le<short>* )(unsigned)(iVar2 + -0x73b8b73c) = *(le<short>* )(unsigned)(iVar2 + -0x73b8b73c) + 1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f8176(0x8c4749f2,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f826c(0x8c4749f2,0x8c474a08,ar6,iVar3));
LAB_8c1f7970:
  if ((char)ar4 != '\x01') {
    (*(undefined1 *)(unsigned)0x8c47497a) = (undefined1)ar5;
    (*(undefined1 *)(unsigned)0x8c47497b) = uVar1;
  }
  if (ar7 != 0) {
    ar6 = 0x20;
    (vsp = ((unsigned long)(fr0_ - 0)), memmove(0x8c474988,ar7,0x20,iVar3));
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4748a8) = 10;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4749dc) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4749dc) + -1;
  iVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4748c0);
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4749dc) == 0) && ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4749e0) != 0)) &&
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f79d8(((undefined1 *)(unsigned)0x8c4749dc),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4748c0),ar6,iVar3)), iVar2 == 1)) {
    iVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4748c0);
  }
  return iVar2;
}

__asm__(".globl FUN_8c1f7902\n.set FUN_8c1f7902, FUN_8c1f7902_def\n");

}
