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
undefined4 FUN_8c268320_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c268320";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar6_00;
  int ar7_00;
  int iVar1;
  int ar4_00;
  int iVar2;
  undefined4 *puVar3;
  
  ar6_00 = *(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c0));
  if (ar6_00 == 0) {
    return 0xd000001;
  }
  ar7_00 = (int)(char)ar5;
  if (ar7_00 < 0) {
    return 0x8000003;
  }
  iVar1 = (char)ar5 * 8;
  if (ar4 == 0x42534d53) {
    if (0xf < ar7_00) {
      return 0x8000003;
    }
    iVar2 = (int)0x1e4;
    ar4_00 = *(int *)(unsigned)(0x1c0 + ar6_00) + iVar1;
  }
  else if (ar4 == 0x42504d53) {
    if (0xf < ar7_00) {
      return 0x8000003;
    }
    iVar2 = (int)0x264;
    ar4_00 = *(int *)(unsigned)(0x1c0 + ar6_00) + (int)0x80 + iVar1;
  }
  else if (ar4 == 0x42534f53) {
    if (0xf < ar7_00) {
      return 0x8000003;
    }
    iVar2 = (int)0x2e4;
    ar4_00 = *(int *)(unsigned)(0x1c0 + ar6_00) + (int)0x100 + iVar1;
  }
  else {
    if (ar4 != 0x52535053) {
      if (ar4 == 0x42504653) {
        if (0 < ar7_00) {
          return 0x8000003;
        }
        iVar1 = (int)0x3e4;
        ar4_00 = *(int *)(unsigned)(0x1c0 + ar6_00) + (int)0x200;
      }
      else if (ar4 == 0x424f4653) {
        if (0 < ar7_00) {
          return 0x8000003;
        }
        iVar1 = (int)0x464;
        ar4_00 = *(int *)(unsigned)(0x1c0 + ar6_00) + (int)0x280;
      }
      else {
        if (ar4 != 0x57504653) {
          return 0x9000001;
        }
        if (0 < ar7_00) {
          return 0x8000003;
        }
        iVar1 = (int)0x46c;
        ar4_00 = *(int *)(unsigned)(0x1c0 + ar6_00) + (int)0x288;
      }
      puVar3 = (undefined4 *)(unsigned)(iVar1 + ar6_00);
      goto LAB_8c26846a;
    }
    if (0xf < ar7_00) {
      return 0x8000003;
    }
    iVar2 = (int)0x364;
    ar4_00 = *(int *)(unsigned)(0x1c0 + ar6_00) + (int)0x180 + iVar1;
  }
  puVar3 = (undefined4 *)(unsigned)(iVar2 + ar6_00 + iVar1);
LAB_8c26846a:
  (vsp = ((unsigned long)(fr0_ - 0)), aica_ram_268748(ar4_00,ar6,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), aica_ram_268748(ar4_00 + 4,ar7,ar6_00,ar7_00));
  *puVar3 = ar6;
  puVar3[1] = ar7;
  return 0;
}

__asm__(".globl _FUN_8c268320\n.set _FUN_8c268320, _FUN_8c268320_def\n");
