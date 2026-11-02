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
undefined4 s_SPEECH_0fae26_def(le<undefined4>* ar4,undefined4 ar5,char *ar6,undefined4 ar7)

{
  TRACE_ENTER("s_SPEECH_0fae26");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int iVar1;
  
  ar4[0x2e] = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x50))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); strcpy(((undefined1 *)(fr0_ - 0x28)),*(le<undefined4>* )(unsigned)(ar4[4] + 0x40),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(unsigned)0x8c141dd9),ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x50))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); strcpy(((undefined1 *)(fr0_ - 0x48)),*(le<undefined4>* )(unsigned)(ar4[4] + 0x40),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(unsigned)0x8c141dde),ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0faf30(ar4 + 5,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
  if (iVar1 != 0) {
    if (*(char *)(unsigned)(ar4 + 5) != '\0') {
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c021338(0x8c3eb334,ar4 + 5,((undefined1 *)(unsigned)0x8c141dd0),1));
      ar7 = 1;
      ar6 = ((undefined1 *)(unsigned)0x8c141dd0);
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c021338(0x8c3eb334,ar4 + 0xf,((undefined1 *)(unsigned)0x8c141dd0),1));
    }
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x50))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); strcpy(ar4 + 5,((undefined1 *)(fr0_ - 0x28)),ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x50))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); strcpy(ar4 + 0xf,((undefined1 *)(fr0_ - 0x48)),ar6,ar7); });
    iVar1 = ({ extern void host_log(const char*,...); int r_ = (int)((vsp = ((unsigned long)(fr0_ - 80)), FUN_8c02126c(0x8c3eb334,ar4 + 5,((undefined1 *)(unsigned)0x8c141dd0),ar4 + 0xe))); static int n_; if (n_++ < 30) host_log("02126c-b %s r=%d\n", (const char*)(unsigned long)(ar4 + 5), r_); r_; });
    if (iVar1 == 0) {
      *(undefined1 *)(unsigned)(ar4 + 5) = 0;
      return 0;
    }
  }
  *ar4 = 3;
  return 1;
}

__asm__(".globl s_SPEECH_0fae26\n.set s_SPEECH_0fae26, s_SPEECH_0fae26_def\n");

}
