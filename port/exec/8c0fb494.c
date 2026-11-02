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
undefined * FUN_8c0fb494_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fb494";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int ar5_00;
  undefined *ar5_01;
  uint *ar6_00;
  uint *puVar2;
  undefined4 ar6_01;
  int *ar7_00;
  undefined4 ar7_01;
  int iVar3;
  
  puVar2 = ((uint *)(fr0_ - 0x50));
  if (ar4[0x2c] == 1) {
    (vsp = ((unsigned long)(fr0_ - 80)), pack_release_entry_handle(0x8c2b59d0,ar4[0x2d],ar6,ar7));
    puVar1 = (undefined *)(unsigned)0x2;
    *ar4 = 2;
  }
  else {
    iVar3 = ar4[0x22];
    ar7_00 = &(*(int *)(fr0_ - 0x18));
    ar6_00 = ((uint *)(fr0_ - 0x14));
    ar5_01 = (undefined *)(unsigned)(uint)ar4[0x2d];
    ar5_00 = ({ unsigned long t0_ = (unsigned long)(&(*(int *)(fr0_ - 0x1c))); *(unsigned *)((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); FUN_8c021f4c(0x8c2b59d0,ar5_01,ar6_00,ar7_00); });
    puVar1 = (undefined *)(unsigned)0x8;
    if ((ar5_00 < 9) && (-1 < ar5_00)) {
      puVar1 = (&(*(undefined1 *)(unsigned)0x8c0fb500))[ar5_00];
      (*(int *)(fr0_ - 0x20)) = ar5_00;
                    
      switch((uint)ar5_00) {
      default:
        break;
      case 2:
        (vsp = ((unsigned long)(fr0_ - 80)), pack_release_entry_handle(0x8c2b59d0,ar4[0x2d],ar6_00,ar7_00));
      case 1:
        (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0fb780(ar4,4,ar6_00,ar7_00));
        puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 80)), s_ERROR_0fb0de(ar4,ar4[0x22] + 0x28,ar6_00,ar7_00));
        break;
      case 4:
        break;
      case 5:
        if ((((uint *)(fr0_ - 0x14))[0] < 0xb) && (-1 < (int)((uint *)(fr0_ - 0x14))[0])) {
                    
          switch(((uint *)(fr0_ - 0x14))[0]) {
          case 1:
            (*(int *)(fr0_ - 0x24)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x24)) * 0x24 + iVar3 + 0x50) = 0x4e;
            break;
          case 2:
            (*(int *)(fr0_ - 0x28)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x28)) * 0x24 + iVar3 + 0x50) = 0x41;
            break;
          case 3:
            (*(int *)(fr0_ - 0x2c)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x2c)) * 0x24 + iVar3 + 0x50) = 0x4c;
            break;
          case 4:
            (*(int *)(fr0_ - 0x30)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x30)) * 0x24 + iVar3 + 0x50) = 0x50;
            break;
          case 5:
            (*(int *)(fr0_ - 0x34)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x34)) * 0x24 + iVar3 + 0x50) = 0x43;
            break;
          case 6:
            (*(int *)(fr0_ - 0x38)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x38)) * 0x24 + iVar3 + 0x50) = 0x46;
            break;
          case 7:
            (*(int *)(fr0_ - 0x3c)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x3c)) * 0x24 + iVar3 + 0x50) = 0x53;
            break;
          case 8:
            (*(int *)(fr0_ - 0x40)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x40)) * 0x24 + iVar3 + 0x50) = 0x49;
            break;
          case 9:
            (*(int *)(fr0_ - 0x44)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x44)) * 0x24 + iVar3 + 0x50) = 0x48;
            break;
          case 10:
            (*(int *)(fr0_ - 0x48)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x48)) * 0x24 + iVar3 + 0x50) = 0x55;
          }
        }
        if ((*(int *)(fr0_ - 0x18)) != 0) {
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c141e10)); *(unsigned *)((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); FUN_8c014334(((uint *)(fr0_ - 0x50)),ar5_01,ar6_00,ar7_00); });
          ar5_01 = ((undefined1 *)(unsigned)0x8c141e13);
          (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0fc94c(ar4,((undefined1 *)(unsigned)0x8c141e13),((uint *)(fr0_ - 0x50)),ar7_00));
          ar6_00 = puVar2;
        }
        if ((*(int *)(fr0_ - 0x1c)) != 0) {
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c141e10)); *(unsigned *)((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); FUN_8c014334(((uint *)(fr0_ - 0x50)),ar5_01,ar6_00,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0fc94c(ar4,((undefined1 *)(unsigned)0x8c141e15),((uint *)(fr0_ - 0x50)),ar7_00));
        }
        ar7_01 = 0;
        ar6_01 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4[4] + 0x40) + 0xc0);
        (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c021d90(0x8c2b59d0,ar4[0x2d],ar6_01,0));
        puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0fb780(ar4,ar5_00,ar6_01,ar7_01));
      }
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0fb494\n.set _FUN_8c0fb494, _FUN_8c0fb494_def\n");
