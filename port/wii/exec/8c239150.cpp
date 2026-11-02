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
int FUN_8c239150_def(le<int>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c239150");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  { extern void host_log(const char*,...); extern const char *ring[256]; extern unsigned rp; if (ar5 > 0x1000) { static int nb_; if (nb_++ < 2) { host_log("tex key bad %x vsp=%lx ring:", ar5, vsp); for (int q_ = 2; q_ < 26; q_++) host_log(" %s", ring[(rp - q_) & 255]); host_log("\n"); } } static int nl_; if (nl_++ < 4) { unsigned e_ = (unsigned)*ar4; host_log("tex lookup ar4=%x ent=%x key=%x e0=%08x %08x %08x e1=%08x %08x %08x\n", (unsigned)(unsigned long)ar4, e_, ar5, (unsigned)*(le<unsigned>*)(e_), (unsigned)*(le<unsigned>*)(e_+4), (unsigned)*(le<unsigned>*)(e_+8), (unsigned)*(le<unsigned>*)(e_+12), (unsigned)*(le<unsigned>*)(e_+16), (unsigned)*(le<unsigned>*)(e_+20)); } }
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
  } while ((*(le<uint>* )(unsigned)(iVar2 * 0xc + *ar4 + 4) & 0xffff) != ar5);
  return iVar2;
}

__asm__(".globl FUN_8c239150\n.set FUN_8c239150, FUN_8c239150_def\n");

}
