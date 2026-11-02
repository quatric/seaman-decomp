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
uint FUN_8c020148_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020148";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*ar5 != '\0') {
    ((char *)(fr0_ - 0x3c))[0] = '\0';
    iVar3 = 0;
    iVar2 = 0;
    for (iVar1 = 0; iVar1 < 0x40; iVar1 = iVar1 + 1) {
      if ((ar5[iVar3] == '\\') || (ar5[iVar3] == '\0')) {
        ((char *)(fr0_ - 0x3c))[iVar2] = '\0';
        iVar1 = 0;
        while( true ) {
          if ((2 < iVar1) || (*(char *)(unsigned)(ar4 + iVar1 * 0x16034 + 0x38) == '\0')) {
            return 0;
          }
          iVar3 = ar4 + iVar1 * 0x16034 + 0x38; { extern void dbg_str(const char *,const char *,long,long); dbg_str((const char *)(unsigned)((char *)(fr0_ - 0x3c)), (const char *)(unsigned)(unsigned)iVar3, iVar1, 0); }
          iVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c020258(((char *)(fr0_ - 0x3c)),iVar3,ar6,ar7));
          if ((iVar2 == 0) &&
             (iVar2 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1f3952))))
                                (*(undefined4 *)(unsigned)(ar4 + iVar1 * 0x16034 + 0x58),iVar3,ar6,ar7)),
             iVar2 == 0)) break;
          iVar1 = iVar1 + 1;
        }
        return 1;
      }
      ((char *)(fr0_ - 0x3c))[iVar2] = ar5[iVar3];
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 1;
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c1f3952(*(undefined4 *)(unsigned)(ar4 + 0x58),ar5,ar6,ar7));
  return (uint)(iVar1 == 0);
}

__asm__(".globl _FUN_8c020148\n.set _FUN_8c020148, _FUN_8c020148_def\n");
