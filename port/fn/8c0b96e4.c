#include "../decls.h"
int FUN_8c0b96e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
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
  uint unaff_r12;
  uint uStack_128;
  uint uStack_124;
  char acStack_120 [2];
  char acStack_11e [102];
  uint uStack_b8;
  uint uStack_a8;
  ushort uStack_a4;
  char acStack_30 [24];
  
  FUN_8c1f8176(acStack_30 + 10,ar5,ar6,ar7);
  FUN_8c1f826c(acStack_30 + 10,&uStack_124,ar6,ar7);
  ar5_00 = &uStack_128;
  FUN_8c1f826c(ar5,ar5_00,ar6,ar7);
  if (uStack_128 < uStack_124) {
    _DAT_8c4365f0 = (char *)malloc_thunk(0x10000,ar5_00,ar6,ar7);
    if (_DAT_8c4365f0 == (char *)0x0) {
      iVar1 = 0xb6;
    }
    else {
      _DAT_8c4365f4 = (char *)malloc_thunk(0x3c,ar5_00,ar6,ar7);
      if (_DAT_8c4365f4 == (char *)0x0) {
        FUN_8c1fb57c(_DAT_8c4365f0,ar5_00,ar6,ar7);
        iVar1 = 0xb6;
      }
      else {
        ar4_00 = (char *)malloc_thunk(0x44c,ar5_00,ar6,ar7);
        if (ar4_00 == (char *)0x0) {
          FUN_8c1fb57c(_DAT_8c4365f0,ar5_00,ar6,ar7);
          FUN_8c1fb57c(_DAT_8c4365f4,ar5_00,ar6,ar7);
          iVar1 = 0xb6;
        }
        else {
          iVar1 = 0xb6;
          ar7_00 = 0;
          ar6_00 = 0;
          ar4_01 = _DAT_8c4365f0;
          ar5_01 = _DAT_8c4365f4;
          iVar2 = FUN_8c1f6f20(_DAT_8c4365f0,_DAT_8c4365f4,0,0);
          if (iVar2 != 0) {
            for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
              acStack_30[iVar2] = ' ';
            }
            uVar4 = 0;
            ar4_01 = ar4_00;
            iVar2 = FUN_8c1f7c40(ar4_00,ar5_01,ar6_00,ar7_00);
            if (iVar2 != 0) {
              for (iVar2 = 0; iVar2 < 100; iVar2 = iVar2 + 1) {
                if (ar4_00[iVar2 * 0xb] != -1) {
                  ar5_01 = acStack_120;
                  ar4_01 = ar4_00 + iVar2 * 0xb;
                  iVar3 = FUN_8c1f7b64(ar4_01,ar5_01,ar6_00,ar7_00);
                  if (iVar3 != 0) {
                    ar6_00 = 10;
                    ar5_01 = acStack_11e;
                    ar4_01 = s_T39401M_8c13c830;
                    iVar3 = FUN_8c013ec0(s_T39401M_8c13c830,ar5_01,10,ar7_00);
                    if (iVar3 != 0) {
                      ar6_00 = 10;
                      ar5_01 = acStack_11e;
                      ar4_01 = s_T30003M_8c13c59a;
                      iVar3 = FUN_8c013ec0(s_T30003M_8c13c59a,ar5_01,10,ar7_00);
                      if (iVar3 != 0) {
                        ar6_00 = 10;
                        ar5_01 = acStack_11e;
                        ar4_01 = s_T30004M_8c13c5a5;
                        iVar3 = FUN_8c013ec0(s_T30004M_8c13c5a5,ar5_01,10,ar7_00);
                        if (iVar3 != 0) {
                          ar6_00 = 10;
                          ar5_01 = acStack_11e;
                          ar4_01 = s_T30005M_8c13c5b0;
                          iVar3 = FUN_8c013ec0(s_T30005M_8c13c5b0,ar5_01,10,ar7_00);
                          if (iVar3 != 0) {
                            ar6_00 = 10;
                            ar5_01 = acStack_11e;
                            ar4_01 = s_T30006M_8c13c5bb;
                            iVar3 = FUN_8c013ec0(s_T30006M_8c13c5bb,ar5_01,10,ar7_00);
                            if ((((iVar3 != 0) && (uStack_a8 < uStack_124)) &&
                                (uStack_128 < uStack_a8)) && (uVar4 < uStack_a4)) {
                              ar6_00 = 10;
                              ar5_01 = acStack_11e;
                              ar4_01 = acStack_30;
                              memmove(ar4_01,ar5_01,10,ar7_00);
                              unaff_r12 = uStack_b8;
                              uVar4 = uStack_a4;
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
                ar5_01 = acStack_30;
                ar4_01 = (char *)(iVar2 * 10 + ar4 + 0xcc);
                iVar3 = FUN_8c013ec0(ar4_01,ar5_01,10,ar7_00);
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
          FUN_8c1f710c(ar4_01,ar5_01,ar6_00,ar7_00,ar5);
          FUN_8c1fb57c(_DAT_8c4365f0,ar5_01,ar6_00,ar7_00);
          FUN_8c1fb57c(_DAT_8c4365f4,ar5_01,ar6_00,ar7_00);
          FUN_8c1fb57c(ar4_00,ar5_01,ar6_00,ar7_00);
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
