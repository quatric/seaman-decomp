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
undefined4 pack_find_entry_by_name_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "pack_find_entry_by_name";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 144; for (int i_ = 0; i_ < 144; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 144)); strcpy(((char *)(fr0_ - 0x8c)),((undefined1 *)(unsigned)0x8c12fc84),ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 144)); strcpy(((char *)(fr0_ - 0x8c)),ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c01437c(((char *)(fr0_ - 0x8c)),((undefined1 *)(unsigned)0x8c12fc85),ar6,ar7));
  iVar2 = 0;
  while( true ) {
    if ((0x7fff < iVar2) || (*(char *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9ec0c) + iVar2 * 0x28) == '\0')) {
      return 0xffffffff;
    }
    if ((*(char *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9ec0c) + iVar2 * 0x28) == ((char *)(fr0_ - 0x8c))[0]) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c021c80(iVar2 * 0x28 + *(int *)(unsigned)(ar4 + 0x9ec0c),((char *)(fr0_ - 0x8c)),ar6,ar7)), iVar1 == 0)
       ) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

__asm__(".globl _pack_find_entry_by_name\n.set _pack_find_entry_by_name, _pack_find_entry_by_name_def\n");
