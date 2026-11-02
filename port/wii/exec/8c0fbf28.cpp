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
undefined4 s_SPEECH_0fbf2e_def(le<undefined4>* ar4,undefined4 ar5,char *ar6,undefined1 *ar7)

{
  TRACE_ENTER("s_SPEECH_0fbf2e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 364; for (int i_ = 0; i_ < 364; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  le<undefined4>* ar5_00;
  char *ar5_01;
  undefined *ar5_02;
  char *ar5_03;
  
  if (ar4[0x2c] == 1) {
    (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01d868(ar4[2],ar5,ar6,ar7));
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    if (ar4[0x22035] == 1) {
      ar4[0x2e] = 0;
      ar4[0x22035] = 0;
    }
    if (ar4[0x33] == 1) {
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x16c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 364)); strcpy(((undefined1 *)(fr0_ - 0x11c)),ar4 + 0x24,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x11c)),((undefined1 *)(unsigned)0x8c141e17),ar6,ar7));
      ar7 = ((undefined1 *)(fr0_ - 0x120));
      ar6 = ((undefined1 *)(unsigned)0x8c141dd0);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c02126c(0x8c3eb334,((undefined1 *)(fr0_ - 0x11c)),((undefined1 *)(unsigned)0x8c141dd0),ar7));
      if (iVar2 == 1) {
        ar7 = (undefined1 *)(unsigned)0x1;
        ar6 = ((undefined1 *)(unsigned)0x8c141dd0);
        ar5_00 = ar4 + 0x24;
        (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c021338(0x8c3eb334,ar5_00,((undefined1 *)(unsigned)0x8c141dd0),1));
        if (ar4[0x22035] == 0) {
          (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01bcf4(ar4[3],ar5_00,ar6,ar7));
        }
        if (ar4[0x22035] == 0) {
          (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01bd88(ar4[3],ar5_00,ar6,ar7));
        }
        (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01c964(ar4[3],((undefined1 *)(unsigned)0x8c140bd0),ar6,ar7));
        ar4[0x33] = 0;
      }
    }
    ar5_03 = (char *)(unsigned)(uint)ar4[0x22];
    ((char *)(fr0_ - 0x90))[0] = '\0';
    ((le<int>* )(fr0_ - 0x9c))[0] = 0;
    if ((int)ar4[0x2e] < 1) {
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x16c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 364)); strcpy(((char *)(fr0_ - 0x90)),((undefined1 *)(unsigned)0x8c141e1c),ar6,ar7); });
      ((le<int>* )(fr0_ - 0x9c))[0] = 1;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01d684(ar4[2],((le<int>* )(fr0_ - 0x9c)),ar6,ar7));
      if (((le<int>* )(fr0_ - 0x9c))[0] != 0) {
        *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x3c) + 4) = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x3c) + 4) + 1;
      }
    }
    if (((le<int>* )(fr0_ - 0x9c))[0] == 0) {
      uVar1 = 0;
    }
    else {
      ar5_01 = ((undefined1 *)(unsigned)0x8c141e20);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0faf30(((char *)(fr0_ - 0x90)),((undefined1 *)(unsigned)0x8c141e20),ar6,ar7));
      if (((iVar2 == 0) && (0 < *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4[4] + 0x3c)))) &&
         (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x40) + 100) != *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4[4] + 0x3c)))) {
        (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01d868(ar4[2],ar5_01,ar6,ar7));
        uVar1 = 2;
        *ar4 = 2;
      }
      else {
        for (iVar2 = 0; iVar2 < *(le<int>* )(unsigned)(ar5_03 + 0x6c); iVar2 = iVar2 + 1) {
          ar5_01 = ar5_03 + iVar2 * 0x68 + 0x70;
          iVar3 = (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0faf30(((char *)(fr0_ - 0x90)),ar5_01,ar6,ar7));
          if (iVar3 == 0) break;
        }
        if (*(le<int>* )(unsigned)(ar5_03 + 0x6c) <= iVar2) {
          ar5_01 = ((undefined1 *)(unsigned)0x8c141e26);
          ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x16c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 364)); strcpy(((char *)(fr0_ - 0x90)),((undefined1 *)(unsigned)0x8c141e26),ar6,ar7); });
          for (iVar2 = 0; iVar2 < *(le<int>* )(unsigned)(ar5_03 + 0x6c); iVar2 = iVar2 + 1) {
            ar5_01 = ar5_03 + iVar2 * 0x68 + 0x70;
            iVar3 = (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0faf30(((char *)(fr0_ - 0x90)),ar5_01,ar6,ar7));
            if (iVar3 == 0) break;
          }
        }
        if (((char *)(fr0_ - 0x90))[0] != '-') {
          if (((char *)(fr0_ - 0x90))[0] == '?') {
            ar5_01 = ((undefined1 *)(unsigned)0x8c1417d0);
            (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01c978(ar4[3],((undefined1 *)(unsigned)0x8c1417d0),ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fc3e4(ar4,ar5_01,ar6,ar7));
          }
          else {
            ar5_02 = ((undefined1 *)(unsigned)0x8c1411d0);
            (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01c978(ar4[3],((undefined1 *)(unsigned)0x8c1411d0),ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fc3e4(ar4,ar5_02,ar6,ar7));
            ar5_01 = ar5_03;
            iVar3 = (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fc4fc(ar4,ar5_03,ar6,ar7));
            if (iVar3 == 1) {
              ar5_01 = ar5_03;
              (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fdaac(ar4,ar5_03,ar6,ar7));
            }
          }
        }
        if (iVar2 < *(le<int>* )(unsigned)(ar5_03 + 0x6c)) {
          if (ar5_03[iVar2 * 0x68 + 0xb0] == '\0') {
            (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fc44c(ar4,ar5_03 + iVar2 * 0x68 + 0x70,ar6,ar7));
          }
          else if (ar5_03[iVar2 * 0x68 + 0x90] == '\0') {
            ar6 = ar5_03 + iVar2 * 0x68 + 0x70;
            (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fc94c(ar4,ar5_03 + iVar2 * 0x68 + 0xb0,ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fc44c(ar4,ar5_03 + iVar2 * 0x68 + 0x70,ar6,ar7));
          }
          else {
            ar6 = ar5_03 + iVar2 * 0x68 + 0x90;
            (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fc94c(ar4,ar5_03 + iVar2 * 0x68 + 0xb0,ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fc44c(ar4,ar5_03 + iVar2 * 0x68 + 0x90,ar6,ar7));
          }
          ar5_01 = ((char *)(unsigned long)*(le<unsigned>* )(unsigned)(ar5_03 + iVar2 * 0x68 + 0xd4));
          (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fdd68(*(le<undefined4>* )(unsigned)(ar4[4] + 0x40),ar5_01,ar6,ar7));
        }
        (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01d868(ar4[2],ar5_01,ar6,ar7));
        if (((char *)(fr0_ - 0x90))[0] == '!') {
          ar6 = ((undefined1 *)(unsigned)0x8c141dd0);
          (vsp = ((unsigned long)(fr0_ - 364)), asr_register_strings(ar4[2],ar4 + 0x24,((undefined1 *)(unsigned)0x8c141dd0),ar7));
        }
        if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x40) + 0x70) == 0x11) {
          uVar1 = 2;
          *ar4 = 2;
        }
        else {
          uVar1 = (vsp = ((unsigned long)(fr0_ - 364)), s_ERROR_0fb0de(ar4,ar5_03 + iVar2 * 0x68 + 0xb4,ar6,ar7));
        }
      }
    }
  }
  return uVar1;
}

__asm__(".globl s_SPEECH_0fbf2e\n.set s_SPEECH_0fbf2e, s_SPEECH_0fbf2e_def\n");

}
