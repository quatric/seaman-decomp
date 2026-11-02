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
int FUN_8c0b96e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b96e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 296; for (int i_ = 0; i_ < 296; i_++) z_[i_] = 0; }
  int iVar1;
  char *ar4_00;
  int iVar2;
  int iVar3;
  char *ar4_01;
  uint *ar5_00;
  char *ar5_01;
  undefined4 ar6_00;
  undefined4 ar7_00;
  ushort uVar4;
  uint unaff_r12 = 0;
  
  (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1f8176(((char *)(fr0_ - 0x30)) + 10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1f826c(((char *)(fr0_ - 0x30)) + 10,&(*(uint *)(fr0_ - 0x124)),ar6,ar7));
  ar5_00 = &(*(uint *)(fr0_ - 0x128));
  (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1f826c(ar5,ar5_00,ar6,ar7));
  if ((*(uint *)(fr0_ - 0x128)) < (*(uint *)(fr0_ - 0x124))) {
    *(unsigned *)0x8c4365f0 = (unsigned)(unsigned long)((char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 296)), malloc_thunk(0x10000,ar5_00,ar6,ar7)));
    if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f0) == (char *)(unsigned)0x0) {
      iVar1 = 0xb6;
    }
    else {
      *(unsigned *)0x8c4365f4 = (unsigned)(unsigned long)((char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 296)), malloc_thunk(0x3c,ar5_00,ar6,ar7)));
      if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f4) == (char *)(unsigned)0x0) {
        (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fb57c(((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f0),ar5_00,ar6,ar7));
        iVar1 = 0xb6;
      }
      else {
        ar4_00 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 296)), malloc_thunk(0x44c,ar5_00,ar6,ar7));
        if (ar4_00 == (char *)(unsigned)0x0) {
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fb57c(((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f0),ar5_00,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fb57c(((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f4),ar5_00,ar6,ar7));
          iVar1 = 0xb6;
        }
        else {
          iVar1 = 0xb6;
          ar7_00 = 0;
          ar6_00 = 0;
          ar4_01 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f0);
          ar5_01 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f4);
          iVar2 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1f6f20(((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f0),((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f4),0,0));
          if (iVar2 != 0) {
            for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
              ((char *)(fr0_ - 0x30))[iVar2] = ' ';
            }
            uVar4 = 0;
            ar4_01 = ar4_00;
            iVar2 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1f7c40(ar4_00,ar5_01,ar6_00,ar7_00));
            if (iVar2 != 0) {
              for (iVar2 = 0; iVar2 < 100; iVar2 = iVar2 + 1) {
                if (ar4_00[iVar2 * 0xb] != -1) {
                  ar5_01 = ((char *)(fr0_ - 0x120));
                  ar4_01 = ar4_00 + iVar2 * 0xb;
                  iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1f7b64(ar4_01,ar5_01,ar6_00,ar7_00));
                  if (iVar3 != 0) {
                    ar6_00 = 10;
                    ar5_01 = ((char *)(fr0_ - 0x11e));
                    ar4_01 = ((undefined1 *)(unsigned)0x8c13c830);
                    iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c013ec0(((undefined1 *)(unsigned)0x8c13c830),ar5_01,10,ar7_00));
                    if (iVar3 != 0) {
                      ar6_00 = 10;
                      ar5_01 = ((char *)(fr0_ - 0x11e));
                      ar4_01 = ((undefined1 *)(unsigned)0x8c13c59a);
                      iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c013ec0(((undefined1 *)(unsigned)0x8c13c59a),ar5_01,10,ar7_00));
                      if (iVar3 != 0) {
                        ar6_00 = 10;
                        ar5_01 = ((char *)(fr0_ - 0x11e));
                        ar4_01 = ((undefined1 *)(unsigned)0x8c13c5a5);
                        iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c013ec0(((undefined1 *)(unsigned)0x8c13c5a5),ar5_01,10,ar7_00));
                        if (iVar3 != 0) {
                          ar6_00 = 10;
                          ar5_01 = ((char *)(fr0_ - 0x11e));
                          ar4_01 = ((undefined1 *)(unsigned)0x8c13c5b0);
                          iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c013ec0(((undefined1 *)(unsigned)0x8c13c5b0),ar5_01,10,ar7_00));
                          if (iVar3 != 0) {
                            ar6_00 = 10;
                            ar5_01 = ((char *)(fr0_ - 0x11e));
                            ar4_01 = ((undefined1 *)(unsigned)0x8c13c5bb);
                            iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c013ec0(((undefined1 *)(unsigned)0x8c13c5bb),ar5_01,10,ar7_00));
                            if ((((iVar3 != 0) && ((*(uint *)(fr0_ - 0xa8)) < (*(uint *)(fr0_ - 0x124)))) &&
                                ((*(uint *)(fr0_ - 0x128)) < (*(uint *)(fr0_ - 0xa8)))) && (uVar4 < (*(ushort *)(fr0_ - 0xa4)))) {
                              ar6_00 = 10;
                              ar5_01 = ((char *)(fr0_ - 0x11e));
                              ar4_01 = ((char *)(fr0_ - 0x30));
                              (vsp = ((unsigned long)(fr0_ - 296)), memmove(ar4_01,ar5_01,10,ar7_00));
                              unaff_r12 = (*(uint *)(fr0_ - 0xb8));
                              uVar4 = (*(ushort *)(fr0_ - 0xa4));
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              for (iVar2 = 0; iVar2 < 0xb2; iVar2 = iVar2 + 1) {
                ar6_00 = 10;
                ar5_01 = ((char *)(fr0_ - 0x30));
                ar4_01 = (char *)(unsigned)(iVar2 * 10 + ar4 + 0xcc);
                iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c013ec0(ar4_01,ar5_01,10,ar7_00));
                if (iVar3 == 0) {
                  iVar1 = iVar2;
                }
              }
              if (iVar1 == 0xb6) {
                if ((unaff_r12 & 0x400) != 0) {
                  iVar1 = 0xb3;
                }
                if ((unaff_r12 & 0x200) != 0) {
                  iVar1 = 0xb4;
                }
                if ((unaff_r12 & 0x100) != 0) {
                  iVar1 = 0xb5;
                }
                if ((unaff_r12 & 0x80) != 0) {
                  iVar1 = 0xb6;
                }
                if ((unaff_r12 & 0x40) != 0) {
                  iVar1 = 0xb7;
                }
                if ((unaff_r12 & 0x20) != 0) {
                  iVar1 = 0xb8;
                }
                if ((unaff_r12 & 0x10) != 0) {
                  iVar1 = 0xb9;
                }
                if ((unaff_r12 & 8) != 0) {
                  iVar1 = 0xba;
                }
                if ((unaff_r12 & 4) != 0) {
                  iVar1 = 0xbb;
                }
                if ((unaff_r12 & 2) != 0) {
                  iVar1 = 0xbc;
                }
                if ((unaff_r12 & 1) != 0) {
                  iVar1 = 0xbd;
                }
              }
            }
          }
          ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 296)); FUN_8c1f710c(ar4_01,ar5_01,ar6_00,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fb57c(((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f0),ar5_01,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fb57c(((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f4),ar5_01,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fb57c(ar4_00,ar5_01,ar6_00,ar7_00));
        }
      }
    }
  }
  else {
    iVar1 = 0xb6;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0b96e4\n.set _FUN_8c0b96e4, _FUN_8c0b96e4_def\n");
