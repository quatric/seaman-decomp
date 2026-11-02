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
uint FUN_8c0fcd2c_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fcd2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *ar5_00;
  uint uVar7;
  
  uVar7 = 0;
  iVar6 = (int)*ar5;
  if ((iVar6 < 0x74) && (0x40 < iVar6)) {
                    
    switch(iVar6) {
    case 0x41:
    case 0x4f:
    case 0x50:
    case 0x67:
    case 0x68:
      break;
    case 0x42:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x18);
      break;
    case 0x43:
      if ((*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb0) == 1) &&
         (*(int *)(unsigned)(ar4 + 0xbc) < 1)) {
        *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb0) = 0;
      }
      iVar6 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb0);
      if (iVar6 == 0) {
        uVar7 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0xbc) = 0;
      }
      else if (iVar6 == 1) {
        uVar7 = 2;
      }
      break;
    case 0x44:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      uVar7 = (uint)(*(byte *)(fr0_ - 0x1f));
      break;
    case 0x45:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x7c);
      break;
    case 0x46:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x1c);
      break;
    case 0x47:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      uVar7 = (uint)(*(byte *)(fr0_ - 0x1a));
      break;
    case 0x48:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      uVar7 = (uint)(*(byte *)(fr0_ - 0x1e));
      break;
    default:
      goto switchD_8c0fcd62_caseD_49;
    case 0x4b:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x68);
      break;
    case 0x4c:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x60);
      break;
    case 0x4d:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      uVar7 = (uint)(*(byte *)(fr0_ - 0x20));
      break;
    case 0x4e:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      uVar7 = (uint)(*(byte *)(fr0_ - 0x1d));
      break;
    case 0x51:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      iVar6 = (vsp = ((unsigned long)(fr0_ - 48)), libgcc_divide_helper_01031c((*(ushort *)(fr0_ - 0x22)) - 0x7a8,0xc,ar6,ar7));
      if ((iVar6 < 0xc) && (-1 < iVar6)) {
                    
        switch(iVar6) {
        case 0:
          uVar7 = 0;
          break;
        case 1:
          uVar7 = 0xb;
          break;
        case 2:
          uVar7 = 10;
          break;
        case 3:
          uVar7 = 9;
          break;
        case 4:
          uVar7 = 8;
          break;
        case 5:
          uVar7 = 7;
          break;
        case 6:
          uVar7 = 6;
          break;
        case 7:
          uVar7 = 5;
          break;
        case 8:
          uVar7 = 4;
          break;
        case 9:
          uVar7 = 3;
          break;
        case 10:
          uVar7 = 2;
          break;
        case 0xb:
          uVar7 = 1;
        }
      }
      break;
    case 0x52:
      if (*(char *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 200) != '\0') {
        iVar6 = 1;
        while ((iVar6 < 0x10 &&
               (iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0faf30(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 200,
                                     *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + iVar6 * 0x20 + 200,ar6,
                                     ar7)), iVar2 == 0))) {
          uVar7 = uVar7 + 1;
          iVar6 = iVar6 + 1;
        }
      }
      break;
    case 0x53:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),((void *)0x8c1f8176),ar6,ar7));
      uVar3 = (uint)(*(ushort *)(fr0_ - 0x22));
      iVar6 = (vsp = ((unsigned long)(fr0_ - 48)), libgcc_divide_helper_01031c(uVar3,4,ar6,ar7));
      if (iVar6 == 0) {
        uVar7 = 1;
        iVar6 = (vsp = ((unsigned long)(fr0_ - 48)), libgcc_divide_helper_01031c(uVar3,100,ar6,ar7));
        if (iVar6 == 0) {
          uVar5 = (vsp = ((unsigned long)(fr0_ - 48)), libgcc_divide_helper_0101e4(uVar3,100,ar6,ar7));
          iVar6 = (vsp = ((unsigned long)(fr0_ - 48)), libgcc_divide_helper_01031c(uVar5,4,ar6,ar7));
          if (iVar6 != 0) {
            uVar7 = 0;
          }
        }
      }
      break;
    case 0x54:
      if (*(char *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 200) != '\0') {
        for (iVar6 = 1; iVar6 < 0x10; iVar6 = iVar6 + 1) {
          iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0faf30(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 200,
                               *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + iVar6 * 0x20 + 200,ar6,ar7));
          if (iVar2 == 0) {
            uVar7 = uVar7 + 1;
          }
        }
      }
      break;
    case 0x55:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0fd8d0(ar4,ar5,ar6,ar7));
      uVar7 = *(uint *)(unsigned)(ar4 + 0xc0);
      break;
    case 0x57:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      uVar7 = (uint)(*(byte *)(fr0_ - 0x1b));
      break;
    case 0x58:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      if (*(char *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0xac) != '\0') {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0xac,ar5,ar6,ar7));
        if (uVar3 == (*(byte *)(fr0_ - 0x1b))) {
          return 2;
        }
        uVar4 = (*(byte *)(fr0_ - 0x1b)) + 1;
        if (6 < uVar4) {
          uVar4 = 0;
        }
        if (uVar3 == uVar4) {
          uVar7 = 1;
        }
      }
      if (*(char *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0xb0) != '\0') {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0xb0,ar5,ar6,ar7));
        if (uVar3 == (*(byte *)(fr0_ - 0x1b))) {
          return 2;
        }
        uVar4 = (*(byte *)(fr0_ - 0x1b)) + 1;
        if (6 < uVar4) {
          uVar4 = 0;
        }
        if (uVar3 == uVar4) {
          uVar7 = 1;
        }
      }
      break;
    case 0x59:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      uVar7 = (*(ushort *)(fr0_ - 0x22)) - 0x7ce;
      if ((int)uVar7 < 0) {
        uVar7 = 0;
      }
      break;
    case 0x5a:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x20);
      break;
    case 0x61:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x28);
      break;
    case 0x62:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x2c);
      break;
    case 99:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x24);
      break;
    case 100:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      (*(byte *)(fr0_ - 0x1e)) = 0;
      (*(byte *)(fr0_ - 0x1d)) = 0;
      (*(undefined1 *)(fr0_ - 0x1c)) = 0;
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
      uVar5 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0xc0,ar5,ar6,ar7));
      (*(byte *)(fr0_ - 0x2a)) = (byte)uVar5;
      uVar5 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0xc4,((void *)0x8c013bdc),ar6,ar7));
      (*(byte *)(fr0_ - 0x29)) = (byte)uVar5;
      (*(undefined1 *)(fr0_ - 0x28)) = 0;
      (*(undefined1 *)(fr0_ - 0x27)) = 0;
      (*(undefined1 *)(fr0_ - 0x26)) = 0;
      ar5_00 = ((undefined1 *)(fr0_ - 0x2c));
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f823a(&(*(ushort *)(fr0_ - 0x22)),ar5_00,ar6,ar7));
      if (((*(byte *)(fr0_ - 0x2a)) != '\0') && ((*(byte *)(fr0_ - 0x29)) != '\0')) {
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0x1c4,ar5_00,ar6,ar7));
        ar5_00 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c141e10)); *(unsigned *)((((unsigned long)(fr0_ - 48)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 48)) - 8); FUN_8c014334(ar5_00 + 0xbc,ar5_00,ar6,ar7); });
      }
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5_00,ar6,ar7));
      (*(byte *)(fr0_ - 0x1e)) = 0xc;
      (*(byte *)(fr0_ - 0x1d)) = 0;
      (*(undefined1 *)(fr0_ - 0x1c)) = 0;
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(((undefined1 *)(fr0_ - 0x2c)),ar5_00,ar6,ar7));
      uVar5 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0x10,ar5_00,ar6,ar7));
      (*(byte *)(fr0_ - 0x2a)) = (byte)uVar5;
      uVar5 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0x14,ar5_00,ar6,ar7));
      (*(byte *)(fr0_ - 0x29)) = (byte)uVar5;
      (*(undefined1 *)(fr0_ - 0x28)) = 0xc;
      (*(undefined1 *)(fr0_ - 0x27)) = 0;
      (*(undefined1 *)(fr0_ - 0x26)) = 0;
      if (((*(byte *)(fr0_ - 0x2a)) == 0) || ((*(byte *)(fr0_ - 0x29)) == 0)) {
        return 0;
      }
      iVar6 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f823a(&(*(ushort *)(fr0_ - 0x22)),((undefined1 *)(fr0_ - 0x2c)),ar6,ar7));
      if (iVar6 == 0) {
        return 2;
      }
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f826c(&(*(ushort *)(fr0_ - 0x22)),&(*(int *)(fr0_ - 0x30)),ar6,ar7));
      (*(int *)(fr0_ - 0x30)) = (*(int *)(fr0_ - 0x30)) + 0x15180;
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8300((*(int *)(fr0_ - 0x30)),&(*(ushort *)(fr0_ - 0x22)),ar6,ar7));
      if (((*(byte *)(fr0_ - 0x2a)) == (*(byte *)(fr0_ - 0x20))) && ((*(byte *)(fr0_ - 0x29)) == (*(byte *)(fr0_ - 0x1f)))) {
        return 1;
      }
      break;
    case 0x65:
      iVar6 = (int)ar5[1];
      if ((iVar6 < 0x6a) && (0x60 < iVar6)) {
                    
        switch(iVar6) {
        case 0x61:
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x80);
          break;
        case 0x62:
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x84);
          break;
        case 99:
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x88);
          break;
        case 100:
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x8c);
          break;
        case 0x65:
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x90);
          break;
        case 0x66:
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x94);
          break;
        case 0x67:
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xa0);
          break;
        case 0x68:
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xa4);
          break;
        case 0x69:
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xac);
        }
      }
      break;
    case 0x69:
      if (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 100) < 1) {
        if (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xc0) < 900) {
          uVar7 = 0;
        }
        else {
          uVar7 = 2;
        }
      }
      else {
        uVar7 = 1;
      }
      break;
    case 0x6c:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x34);
      break;
    case 0x6d:
      uVar7 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0fc4c4(ar4,ar5,ar6,ar7));
      break;
    case 0x6e:
      uVar7 = 0;
      if ((0 < *((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c))) &&
         (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 100) ==
          *((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c)))) {
        uVar7 = 1;
      }
      break;
    case 0x73:
      cVar1 = ar5[1];
      if (cVar1 == 'd') {
        uVar7 = (uint)*(byte *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0xf);
      }
      else if (cVar1 == 'm') {
        uVar7 = (uint)*(byte *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0xe);
      }
      else if (cVar1 == 'y') {
        uVar7 = *(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0xc) - 1999;
        if ((int)uVar7 < 0) {
          uVar7 = 0;
        }
        if (6 < (int)uVar7) {
          uVar7 = 0;
        }
      }
    }
  }
  else {
switchD_8c0fcd62_caseD_49:
    iVar6 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c013bdc(ar5,ar5,ar6,ar7));
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    uVar7 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + iVar6 * 4 + 0x10,ar5,ar6,ar7));
  }
  return uVar7;
}

__asm__(".globl _FUN_8c0fcd2c\n.set _FUN_8c0fcd2c, _FUN_8c0fcd2c_def\n");
