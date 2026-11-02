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
uint FUN_8c0b95a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b95a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 288; for (int i_ = 0; i_ < 288; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *ar5_00;
  undefined4 uVar5;
  undefined4 ar7_00;
  undefined1 *ain0;
  
  uVar5 = ar5;
  (*(le<int>* )(fr0_ - 0x11c)) = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10287c(0x10000,ar5,ar6,ar7));
  if ((*(le<int>* )(fr0_ - 0x11c)) == 0) {
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10287c(0x3c,uVar5,ar6,ar7));
    (*(le<unsigned>* )(fr0_ - 0x120) = (unsigned)(unsigned long)(puVar2));
    if (puVar2 == (undefined1 *)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10289c(&(*(le<int>* )(fr0_ - 0x11c)),uVar5,ar6,ar7));
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      ar7_00 = 0;
      uVar5 = 0;
      iVar4 = (*(le<int>* )(fr0_ - 0x11c));
      ain0 = puVar2;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c1f6f20((*(le<int>* )(fr0_ - 0x11c)),puVar2,0,0));
      if (iVar3 != 0) {
        (vsp = ((unsigned long)(fr0_ - 288)), memset(((undefined1 *)(fr0_ - 0x10c)),0,0xf0,ar7_00));
        uVar5 = 10;
        (vsp = ((unsigned long)(fr0_ - 288)), memmove(((undefined1 *)(fr0_ - 0x1c)),ar5,10,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c1f7b64(((undefined1 *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x10c)),uVar5,ar7_00));
        uVar5 = 10;
        ar5_00 = ((undefined1 *)(fr0_ - 0x10a));
        puVar2 = ((undefined1 *)(fr0_ - 0x1c));
        iVar4 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c013ec0(puVar2,ar5_00,10,ar7_00));
        if (iVar4 != 0) {
          ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 288)); FUN_8c1f710c(puVar2,ar5_00,uVar5,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10289c(&(*(le<int>* )(fr0_ - 0x11c)),ar5_00,uVar5,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10289c(((undefined1 * *)(fr0_ - 0x120)),ar5_00,uVar5,ar7_00));
          return 0;
        }
        puVar2 = ((undefined1 *)(fr0_ - 0x118));
        (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c1f8300((*(le<int>* )(fr0_ - 0xa0)),puVar2,uVar5,ar7_00));
        uVar1 = (uint)(*(byte *)(fr0_ - 0x116));
        iVar4 = (*(le<int>* )(fr0_ - 0xa0));
      }
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 288)); FUN_8c1f710c(iVar4,puVar2,uVar5,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10289c(&(*(le<int>* )(fr0_ - 0x11c)),puVar2,uVar5,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10289c(((undefined1 * *)(fr0_ - 0x120)),puVar2,uVar5,ar7_00));
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c0b95a0\n.set FUN_8c0b95a0, FUN_8c0b95a0_def\n");

}
