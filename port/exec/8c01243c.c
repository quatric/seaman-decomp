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
int FUN_8c01243c_def(undefined4 ar4,char *ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c01243c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int ar6_00;
  int iVar6;
  int ain0;
  
  (*(int *)(fr0_ - 0x34)) = 1;
  pcVar5 = ar5 + ar6;
  *pcVar5 = '\0';
  iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), memmove(((undefined1 *)(fr0_ - 0x28)),ar4,8,ar7));
  (*(int *)(fr0_ - 0x48)) = ar6 + -1;
  (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1255f0) + (*(int *)(fr0_ - 0x48)) * 8));
  (*(int *)(fr0_ - 0x3c)) = ar6;
  do {
    if ((*(int *)(fr0_ - 0x48)) < 0) {
      return iVar2;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), libgcc_divide_helper_010468((*(int *)(fr0_ - 0x3c)),5,vr6,vr7));
    iVar1 = (iVar2 + 1) * -2;
    iVar6 = iVar1 + 8;
    ar6_00 = 8 - iVar6;
    (vsp = ((unsigned long)(fr0_ - 72)), memmove(((undefined1 *)(fr0_ - 0x28)) + iVar1,((undefined *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) + iVar6,ar6_00,ar7));
    iVar4 = 8;
    (*(int *)(fr0_ - 0x44)) = 0;
    ain0 = 0;
    do {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012f24(((undefined1 *)(fr0_ - 0x28)) + iVar6,((undefined1 *)(fr0_ - 0x28)) + iVar1,ar6_00,ar7));
      if (-1 < iVar2) {
        ar7 = ar6_00;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012eac(0,((undefined1 *)(fr0_ - 0x28)) + iVar6,((undefined1 *)(fr0_ - 0x28)) + iVar1,ar6_00));
        (*(int *)(fr0_ - 0x44)) = (*(int *)(fr0_ - 0x44)) + iVar4;
        (*(int *)(fr0_ - 0x34)) = iVar2;
      }
      iVar4 = iVar4 >> 1;
      if (iVar4 == 0) break;
      iVar2 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c012da8(((undefined1 *)(fr0_ - 0x28)) + iVar1,ar6_00,1,ar7); });
      ain0 = ain0 + 1;
    } while (ain0 < 4);
    cVar3 = (char)(*(int *)(fr0_ - 0x44)) + '0';
    if ((*(int *)(fr0_ - 0x34)) == 0) {
      pcVar5 = pcVar5 + -1;
      *pcVar5 = cVar3;
      while (pcVar5 = pcVar5 + -1, ar5 <= pcVar5) {
        *pcVar5 = '0';
      }
      return iVar2;
    }
    pcVar5 = pcVar5 + -1;
    *pcVar5 = cVar3;
    (*(int *)(fr0_ - 0x48)) = (*(int *)(fr0_ - 0x48)) + -1;
    (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)(((undefined *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) + -8));
    (*(int *)(fr0_ - 0x3c)) = (*(int *)(fr0_ - 0x3c)) + -1;
  } while( true );
}

__asm__(".globl _FUN_8c01243c\n.set _FUN_8c01243c, _FUN_8c01243c_def\n");
