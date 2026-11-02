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
int FUN_8c02dc8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02dc8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  char cVar2;
  
  cVar2 = '\x01';
  if ((*(int *)(unsigned)(ar4 + 0x48) != -1) && (*(int *)(unsigned)(ar4 + 0x48) != 4)) {
    return *(int *)(unsigned)(ar4 + 0x48);
  }
  iVar1 = (int)*(short *)(unsigned)(ar4 + 0x14);
  if ((iVar1 < 8) && (1 < iVar1)) {
                    
    switch(iVar1) {
    case 2:
      if ((*(short *)(unsigned)(ar4 + 0x16) == 2) && (*(char *)(unsigned)(ar4 + 0x40) < '\x01')) {
        cVar2 = '\0';
      }
      break;
    case 3:
      if ((*(short *)(unsigned)(ar4 + 0x16) == 0) && (*(char *)(unsigned)(ar4 + 0x40) < '\x02')) {
        cVar2 = '\0';
      }
      break;
    case 5:
      goto switchD_8c02dcc2_caseD_5;
    case 6:
      cVar2 = '\x01';
      if ((*(short *)(unsigned)(ar4 + 0x16) < 2) && (*(char *)(unsigned)(ar4 + 0x40) < '\x01')) {
        cVar2 = '\0';
      }
      if ((*(short *)(unsigned)(ar4 + 0x16) == 2) && (*(char *)(unsigned)(ar4 + 0x40) < '\x03')) {
        cVar2 = '\0';
      }
      break;
    case 7:
      if ((*(short *)(unsigned)(ar4 + 0x16) == 0) && (*(char *)(unsigned)(ar4 + 0x40) < '\x04')) {
        cVar2 = '\0';
      }
    }
  }
  else {
switchD_8c02dcc2_caseD_5:
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 1;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x44);
  if (((iVar1 == 1) && (iVar1 = (int)cVar2, iVar1 == 1)) &&
     (iVar1 = *(int *)(unsigned)(ar4 + 0x18), *(short *)(unsigned)(ar4 + *(short *)(unsigned)(ar4 + 0x16) * 2 + 0x22) <= iVar1)) {
    *(undefined2 *)(unsigned)(ar4 + 0x1e) = 1;
    if (*(short *)(unsigned)(ar4 + *(short *)(unsigned)(ar4 + 0x16) * 2 + 0x22) != 0) {
      *(short *)(unsigned)(ar4 + 0x16) = *(short *)(unsigned)(ar4 + 0x16) + 1;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
    iVar1 = (int)*(short *)(unsigned)(ar4 + 0x20);
    if (iVar1 <= *(short *)(unsigned)(ar4 + 0x16)) {
      if ((int)*(short *)(unsigned)(ar4 + 0x14) == *(int *)(unsigned)(ar4 + 0x30)) {
        *(undefined2 *)(unsigned)(ar4 + 0x1e) = 0;
        iVar1 = *(short *)(unsigned)(ar4 + 0x20) + -1;
        *(short *)(unsigned)(ar4 + 0x16) = (short)iVar1;
      }
      else {
        iVar1 = (int)*(short *)(unsigned)(ar4 + 0x20);
        *(short *)(unsigned)(ar4 + 0x16) = *(short *)(unsigned)(ar4 + 0x20);
      }
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02dc8c\n.set _FUN_8c02dc8c, _FUN_8c02dc8c_def\n");
