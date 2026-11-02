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
int s_IDLEACTION_TREMOR_1091d0_def(int ar4,undefined4 ar5,int ar6,char *ar7)

{
  ring[rp++ & 255] = "s_IDLEACTION_TREMOR_1091d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(unsigned)(ar4 + 4);
  if (iVar1 == 0) {
    iVar1 = ar6;
    if (((*(int *)(unsigned)(ar4 + 900) == -1) &&
        (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 8)) + 0x30))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 8)),ar5,ar6,ar7)),
        iVar2 < 0x11)) && (10 < iVar2)) {
                    
      switch(iVar2) {
      case 0xb:
        ar7 = "IDLEACTION_PAW";
        iVar1 = 0;
        ar5 = 0x19;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_PAW"); });
        break;
      case 0xc:
        ar7 = "IDLEACTION_TREMOR";
        iVar1 = 0;
        ar5 = 0x19;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_TREMOR"); });
        break;
      case 0xd:
        ar7 = "IDLEACTION_BITE";
        iVar1 = 0;
        ar5 = 0x19;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_BITE"); });
        break;
      case 0xe:
        ar7 = "IDLEACTION_ACTION_JUMP";
        iVar1 = 0;
        ar5 = 0x19;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_ACTION_JUMP"); });
        break;
      case 0xf:
        if (*(char *)(unsigned)(ar4 + 0x98) < '\x05') {
          ar7 = "IDLEACTION_STAND_SWIM";
          iVar1 = 0;
          ar5 = 0x19;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_STAND_SWIM"); });
        }
        else {
          ar7 = "EVENT_WANT_LAND";
          iVar1 = 0;
          ar5 = 0x19;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"EVENT_WANT_LAND"); });
        }
        break;
      case 0x10:
        ar7 = "IDLEACTION_REVERSE_SWIM";
        iVar1 = 0;
        ar5 = 0x19;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_REVERSE_SWIM"); });
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 8)) + 0x30))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 8)),ar5,iVar1,ar7));
    if (iVar1 == 0x11) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"IDLEACTION_HEAD_DAMAGE"));
    }
  }
  return iVar1;
}

__asm__(".globl _s_IDLEACTION_TREMOR_1091d0\n.set _s_IDLEACTION_TREMOR_1091d0, _s_IDLEACTION_TREMOR_1091d0_def\n");
