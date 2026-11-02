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
undefined4 FUN_8c0bcedc_def(int ar4,int ar5,undefined4 ar6,char *ar7)

{
  ring[rp++ & 255] = "FUN_8c0bcedc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 488; for (int i_ = 0; i_ < 488; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  uint ar4_00;
  undefined1 *puVar3;
  undefined4 a5;
  undefined1 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined4 unaff_r8 = 0;
  undefined4 unaff_r9 = 0;
  undefined4 unaff_r10 = 0;
  undefined4 unaff_r11 = 0;
  undefined4 unaff_r12 = 0;
  undefined4 unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  undefined1 *puVar7;
  double in_dr0 = 0;
  double dVar8;
  float in_fr13 = 0;
  undefined4 in_fr12 = 0;
  undefined8 in_dr14 = 0;
  double dVar9;
  float fVar10;
  undefined8 in_xd14 = 0;
  bool bVar11;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x8)) = CONCAT44((int)in_dr14,(undefined4)(*(undefined8 *)(fr0_ - 0x8)));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x8))+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar7 = ((undefined1 *)(fr0_ - 0xc));
  }
  else {
    puVar7 = ((undefined1 *)(fr0_ - 0x18));
    (*(undefined8 *)(fr0_ - 0x8)) = in_xd14;
  }
  *(undefined4 *)(unsigned)(puVar7 + -4) = unaff_r14;
  *(undefined4 *)(unsigned)(puVar7 + -8) = unaff_r13;
  *(undefined4 *)(unsigned)(puVar7 + -0xc) = unaff_r12;
  *(undefined4 *)(unsigned)(puVar7 + -0x10) = unaff_r11;
  *(undefined4 *)(unsigned)(puVar7 + -0x14) = unaff_r10;
  *(undefined4 *)(unsigned)(puVar7 + -0x18) = unaff_r9;
  *(undefined4 *)(unsigned)(puVar7 + -0x1c) = unaff_r8;
  *(undefined4 *)(unsigned)(puVar7 + -0x20) = in_PR;
  if (*(int *)(unsigned)(ar4 + 0x44) == 0x12) {
    return 1;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa2b8(0x8c35468c,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(puVar7 + -0x2c) = uVar1;
  if (*(int *)(unsigned)(puVar7 + -0x2c) == 1) {
    return 1;
  }
  iVar2 = *(int *)(unsigned)(ar4 + 0x44);
  puVar4 = (undefined1 *)(unsigned)0x14;
  if (0x14 < iVar2) {
    return 1;
  }
  if (iVar2 < 0) {
    return 1;
  }
                    
  switch(iVar2) {
  case 0:
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366f8) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c43670c) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 9;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 6;
    puVar4 = ((undefined1 *)(unsigned)0x8c43676c);
    (*(undefined1 *)(unsigned)0x8c43676c) = '\0';
    (*(undefined1 *)(unsigned)0x8c43676d) = '\0';
    (*(undefined1 *)(unsigned)0x8c43676e) = '\0';
    (*(undefined1 *)(unsigned)0x8c43676f) = '\0';
    (*(undefined1 *)(unsigned)0x8c436770) = '\0';
    (*(undefined1 *)(unsigned)0x8c436771) = '\0';
    (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0f803c(0x8c35468c,ar5,((undefined1 *)(unsigned)0x8c43676c),ar7));
    for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
      puVar4 = ((undefined1 *)(unsigned)0x8c43670c);
      (*(undefined4 *)(unsigned)(unsigned)0x8c43670c) = (uint)*(byte *)(unsigned)(ar5 + iVar2 + 4) + (*(undefined4 *)(unsigned)(unsigned)0x8c43670c);
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c436710) = (uint)*(byte *)(unsigned)(ar5 + 0x2c);
    puVar3 = ((undefined1 *)(unsigned)0x8c436714);
    (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0b9d14(ar5,((undefined1 *)(unsigned)0x8c436714),puVar4,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), get_field_c8_0bced0(ar5,puVar3,puVar4,ar7));
    *(undefined4 *)(unsigned)(puVar7 + -0x30) = uVar1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436720) = *(undefined4 *)(unsigned)(puVar7 + -0x30);
    (*(undefined4 *)(unsigned)(unsigned)0x8c436728) = *(undefined4 *)(unsigned)(ar5 + 0xc0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c436724) = *(undefined4 *)(unsigned)(ar5 + 0xc4);
    *(ushort *)(unsigned)(puVar7 + -0x1dc) = (*(undefined4 *)(unsigned)(unsigned)0x8c436714);
    *(undefined2 *)(unsigned)(puVar7 + -0x1da) = (*(undefined4 *)(unsigned)(unsigned)0x8c436716);
    *(undefined2 *)(unsigned)(puVar7 + -0x1d8) = (*(undefined4 *)(unsigned)(unsigned)0x8c436718);
    *(undefined2 *)(unsigned)(puVar7 + -0x1d6) = (*(undefined4 *)(unsigned)(unsigned)0x8c43671a);
    *(undefined2 *)(unsigned)(puVar7 + -0x1d4) = (*(undefined4 *)(unsigned)(unsigned)0x8c43671c);
    uVar1 = ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar7 + -0x1dc)); unsigned long t1_ = (unsigned long)(
                         *(undefined4 *)(unsigned)(puVar7 + -0x1d8)); *(unsigned *)((((unsigned long)(fr0_ - 488)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 488)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 488)) - 8); FUN_8c0b9afc(ar5,((void *)0x8c0b9afc),puVar4,ar7); });
    *(undefined4 *)(unsigned)(puVar7 + -0x34) = uVar1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c43672c) = *(undefined4 *)(unsigned)(puVar7 + -0x34);
    *(unsigned *)0x8c4366f0 = (unsigned)(unsigned long)((int *)(unsigned)(ar5 + 0x30));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) = ar5 + 0x44;
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 1;
  case 1:
    if (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x25) < '\x01') {
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c43670c) == 1) {
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c8f6),((undefined1 *)(unsigned)0x8c13c025),ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x13;
        *(undefined4 *)(unsigned)(ar4 + 0x14c) = 0;
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x14c) = 1;
        *(undefined4 *)(unsigned)(ar4 + 0x44) = 2;
override_jmp_8c0bcf7a_case_2:
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c1f826c(((undefined1 *)(unsigned)0x8c436714),puVar7 + -0x24,puVar4,ar7));
        puVar4 = (undefined1 *)(unsigned)0x8c431a68;
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c1f826c(((undefined1 *)(unsigned)0x8c431a7c),puVar7 + -0x28,0x8c431a68,ar7));
        uVar1 = libgcc_divide_helper_010284
                          (*(int *)(unsigned)(puVar7 + -0x24) - *(int *)(unsigned)(puVar7 + -0x28),0xe10,puVar4,ar7);
        *(undefined4 *)(unsigned)(puVar7 + -0x8c) = uVar1;
        ar4_00 = *(uint *)(unsigned)(puVar7 + -0x8c) & 0xffff;
        if (((((((*(undefined4 *)(unsigned)(unsigned)0x8c436714) != (*(undefined4 *)(unsigned)(unsigned)0x8c431a7c)) || ((*(undefined1 *)(unsigned)0x8c436716) != (*(undefined1 *)(unsigned)0x8c431a7e))) ||
              ((*(undefined1 *)(unsigned)0x8c436717) != (*(undefined1 *)(unsigned)0x8c431a7f))) || (ar4_00 < 8)) &&
            ((puVar4 = (undefined1 *)(unsigned)0x18, 0x17 < ar4_00 ||
             (((puVar4 = ((undefined1 *)(unsigned)0x8c431a7f), (*(undefined1 *)(unsigned)0x8c436717) <= (*(undefined1 *)(unsigned)0x8c431a7f) &&
               (ar7 = ((undefined1 *)(unsigned)0x8c436714), (*(undefined1 *)(unsigned)0x8c436716) <= (*(undefined1 *)(unsigned)0x8c431a7e))) &&
              ((*(undefined4 *)(unsigned)(unsigned)0x8c436714) <= (*(undefined4 *)(unsigned)(unsigned)0x8c431a7c))))))) && (0x17 < ar4_00)) {
          uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), libgcc_divide_helper_010284(ar4_00,0x18,puVar4,ar7));
          *(undefined4 *)(unsigned)(puVar7 + -0x90) = uVar1;
        }
        for (iVar2 = 0; iVar2 < 0xb; iVar2 = iVar2 + 1) {
          *(int *)(unsigned)(puVar7 + -0x94) = iVar2;
          puVar4 = (undefined1 *)(unsigned)0x0;
          *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c436738) + *(int *)(unsigned)(puVar7 + -0x94) * 4) = 0;
        }
        a5 = 0;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf160(*(undefined4 *)(unsigned)(ar5 + 0x7d8),0,puVar4,ar7));
        *(undefined4 *)(unsigned)(puVar7 + -0x38) = uVar1;
        *(unsigned *)0x8c436704 = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x38)));
        puVar3 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 488)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((undefined4 *)(unsigned long)*(unsigned *)0x8c436704) + 0x118))))(((undefined4 *)(unsigned long)*(unsigned *)0x8c436704),a5,uVar1,ar7));
        *(unsigned *)(unsigned)(puVar7 + -0x3c) = puVar3;
        pcVar6 = (code *)((undefined1 *)(unsigned)0x8c4366f8);
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366f8) = *(int *)(unsigned)(puVar7 + -0x3c);
        puVar4 = (undefined1 *)(unsigned)0x0;
        while (uVar1 = (undefined4)in_dr14, (int)puVar4 < (*(undefined4 *)(unsigned)(unsigned)0x8c4366f8)) {
          pcVar6 = (code *)(vsp = ((unsigned long)(fr0_ - 488)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((undefined4 *)(unsigned long)*(unsigned *)0x8c436704) + 0xfc))))(((undefined4 *)(unsigned long)*(unsigned *)0x8c436704),puVar4,pcVar6,ar7));
          *(unsigned *)(unsigned)(puVar7 + -0x40) = pcVar6;
          (*(undefined4 *)(unsigned)(unsigned)0x8c4366fc) = *(int *)(unsigned)(puVar7 + -0x40);
          uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), get_field_28_0bf124((*(undefined4 *)(unsigned)(unsigned)0x8c4366fc),((undefined1 *)(unsigned)0x8c4366fc),pcVar6,ar7));
          *(undefined4 *)(unsigned)(puVar7 + -0x44) = uVar1;
          if (*(int *)(unsigned)(puVar7 + -0x44) == 1) {
            uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366fc) + 8) + 0x164))))
                              ((*(undefined4 *)(unsigned)(unsigned)0x8c4366fc),uVar1,pcVar6,ar7));
            *(undefined4 *)(unsigned)(puVar7 + -0x48) = uVar1;
            iVar2 = *(int *)(unsigned)(puVar7 + -0x48);
            (*(undefined4 *)(unsigned)(unsigned)0x8c436700) = iVar2;
            pcVar6 = (code *)(vsp = ((unsigned long)(fr0_ - 488)), get_field_13c_028d9c(iVar2,iVar2,pcVar6,ar7));
            *(unsigned *)(unsigned)(puVar7 + -0x4c) = pcVar6;
            switch(*(undefined4 *)(unsigned)(puVar7 + -0x4c)) {
            case 1:
              pcVar6 = ((void *)0x8c02c3a8);
              uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02c3a8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,((void *)0x8c02c3a8),ar7));
              *(undefined4 *)(unsigned)(puVar7 + -0x50) = uVar1;
              if (*(int *)(unsigned)(puVar7 + -0x50) == -1) {
                (*(undefined4 *)(unsigned)(unsigned)0x8c436738) = (*(undefined4 *)(unsigned)(unsigned)0x8c436738) + 1;
              }
              break;
            case 2:
              uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02c3a8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,pcVar6,ar7));
              *(undefined4 *)(unsigned)(puVar7 + -0x54) = uVar1;
              if (*(int *)(unsigned)(puVar7 + -0x54) == -1) {
                *(unsigned *)(unsigned)(puVar7 + -0x98) = ((undefined1 *)(unsigned)0x8c436738);
                pcVar6 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(puVar7 + -0x98) + 4));
                *(unsigned *)(unsigned)(*(int *)(unsigned)(puVar7 + -0x98) + 4) = pcVar6 + 1;
              }
              break;
            case 3:
              uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02c3a8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,pcVar6,ar7));
              *(undefined4 *)(unsigned)(puVar7 + -0x58) = uVar1;
              if (*(int *)(unsigned)(puVar7 + -0x58) == -1) {
                *(unsigned *)(unsigned)(puVar7 + -0x9c) = ((undefined1 *)(unsigned)0x8c436738);
                *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0x9c) + 8) = *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0x9c) + 8) + 1;
                uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02d3e8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,pcVar6,ar7));
                *(undefined4 *)(unsigned)(puVar7 + -0x5c) = uVar1;
                iVar2 = *(int *)(unsigned)(puVar7 + -0x5c);
                if (iVar2 < 0x5a) {
                  if ((iVar2 < 0x46) || ('\x01' < (*(undefined1 *)(unsigned)0x8c436771))) {
                    if ((0x31 < iVar2) && ((*(undefined1 *)(unsigned)0x8c436771) < '\x01')) {
                      (*(undefined1 *)(unsigned)0x8c436771) = '\x01';
                    }
                  }
                  else {
                    (*(undefined1 *)(unsigned)0x8c436771) = '\x02';
                  }
                }
                else {
                  (*(undefined1 *)(unsigned)0x8c436771) = '\x03';
                }
                pcVar6 = (code *)((undefined1 *)(unsigned)0x8c436700);
                uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02bef8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),((void *)0x8c02bef8),((undefined1 *)(unsigned)0x8c436700),ar7));
                *(short *)(unsigned)(puVar7 + -0x1ca) = (short)uVar1;
                if (*(short *)(unsigned)(puVar7 + -0x1ca) == 3) {
                  (*(undefined1 *)(unsigned)0x8c43676d) = (*(undefined1 *)(unsigned)0x8c43676d) + '\x01';
                }
              }
              break;
            case 4:
              uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02c3a8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,pcVar6,ar7));
              *(undefined4 *)(unsigned)(puVar7 + -0x60) = uVar1;
              if (*(int *)(unsigned)(puVar7 + -0x60) == -1) {
                pcVar6 = (code *)((undefined1 *)(unsigned)0x8c436738);
                *(unsigned *)(unsigned)(puVar7 + -0xa0) = ((undefined1 *)(unsigned)0x8c436738);
                *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xa0) + 0xc) =
                     *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xa0) + 0xc) + 1;
                uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02d3e8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),((undefined1 *)(unsigned)0x8c436700),((undefined1 *)(unsigned)0x8c436738),ar7));
                *(undefined4 *)(unsigned)(puVar7 + -100) = uVar1;
                iVar2 = *(int *)(unsigned)(puVar7 + -100);
                if (iVar2 < 0x5a) {
                  if ((iVar2 < 0x46) || ('\x01' < (*(undefined1 *)(unsigned)0x8c436771))) {
                    if ((0x31 < iVar2) && ((*(undefined1 *)(unsigned)0x8c436771) < '\x01')) {
                      (*(undefined1 *)(unsigned)0x8c436771) = '\x01';
                    }
                  }
                  else {
                    (*(undefined1 *)(unsigned)0x8c436771) = '\x02';
                  }
                }
                else {
                  (*(undefined1 *)(unsigned)0x8c436771) = '\x03';
                }
                uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02bf8c((*(undefined4 *)(unsigned)(unsigned)0x8c436700),((undefined1 *)(unsigned)0x8c436700),pcVar6,ar7));
                *(short *)(unsigned)(puVar7 + -0x1cc) = (short)uVar1;
                if (*(short *)(unsigned)(puVar7 + -0x1cc) == 0) {
                  *(unsigned *)(unsigned)(puVar7 + -0xa4) = ((undefined1 *)(unsigned)0x8c436738);
                  *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xa4) + 0xc) =
                       *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xa4) + 0xc) + -1;
                  *(unsigned *)(unsigned)(puVar7 + -0xa8) = ((undefined1 *)(unsigned)0x8c436738);
                  *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xa8) + 8) =
                       *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xa8) + 8) + 1;
                  pcVar6 = (code *)(int)(*(undefined1 *)(unsigned)0x8c43676e);
                  (*(undefined1 *)(unsigned)0x8c43676e) = (*(undefined1 *)(unsigned)0x8c43676e) + '\x01';
                }
              }
              break;
            case 6:
              uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02c3a8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,pcVar6,ar7));
              *(undefined4 *)(unsigned)(puVar7 + -0x68) = uVar1;
              if (*(int *)(unsigned)(puVar7 + -0x68) == -1) {
                *(unsigned *)(unsigned)(puVar7 + -0xac) = ((undefined1 *)(unsigned)0x8c436738);
                *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xac) + 0x10) =
                     *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xac) + 0x10) + 1;
              }
              break;
            case 7:
              uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02c3a8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,pcVar6,ar7));
              *(undefined4 *)(unsigned)(puVar7 + -0x6c) = uVar1;
              if (*(int *)(unsigned)(puVar7 + -0x6c) == -1) {
                *(unsigned *)(unsigned)(puVar7 + -0xb0) = ((undefined1 *)(unsigned)0x8c436738);
                iVar2 = *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xb0) + 0x14);
                pcVar6 = (code *)(iVar2 + 1);
                *(unsigned *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xb0) + 0x14) = pcVar6;
                uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02d3e8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,pcVar6,ar7));
                *(undefined4 *)(unsigned)(puVar7 + -0x70) = uVar1;
                iVar5 = *(int *)(unsigned)(puVar7 + -0x70);
                if (iVar5 < 0x5a) {
                  if ((iVar5 < 0x46) || ('\x01' < (*(undefined1 *)(unsigned)0x8c436771))) {
                    if ((0x31 < iVar5) && (iVar2 = (int)(*(undefined1 *)(unsigned)0x8c436771), iVar2 < 1)) {
                      (*(undefined1 *)(unsigned)0x8c436771) = '\x01';
                    }
                  }
                  else {
                    (*(undefined1 *)(unsigned)0x8c436771) = '\x02';
                  }
                }
                else {
                  (*(undefined1 *)(unsigned)0x8c436771) = '\x03';
                }
                uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02bf8c((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,pcVar6,ar7));
                *(short *)(unsigned)(puVar7 + -0x1ce) = (short)uVar1;
                if (*(short *)(unsigned)(puVar7 + -0x1ce) == 1) {
                  uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c035000((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,pcVar6,ar7));
                  *(undefined4 *)(unsigned)(puVar7 + -0x74) = uVar1;
                  pcVar6 = ((code *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x74));
                  if (pcVar6 == (code *)0x3) {
                    pcVar6 = (code *)((undefined1 *)(unsigned)0x8c43676f);
                    iVar2 = (*(undefined1 *)(unsigned)0x8c43676f) + 1;
                    (*(undefined1 *)(unsigned)0x8c43676f) = (char)iVar2;
                  }
                }
                uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c025f68((*(undefined4 *)(unsigned)(unsigned)0x8c436700) + 0x78,iVar2,pcVar6,ar7));
                puVar7[-0x1d0] = (char)uVar1;
                if (puVar7[-0x1d0] == '\x01') {
                  ar7 = ((undefined1 *)(unsigned)0x8c436770);
                  (*(undefined1 *)(unsigned)0x8c436770) = (*(undefined1 *)(unsigned)0x8c436770) + '\x01';
                }
              }
              break;
            case 0xc:
            case 0xd:
              uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366fc) + 8) + 0x168))))
                                ((*(undefined4 *)(unsigned)(unsigned)0x8c4366fc),*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366fc) + 8),pcVar6,ar7));
              *(undefined4 *)(unsigned)(puVar7 + -0x78) = uVar1;
              *(unsigned *)0x8c436708 = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x78)));
              uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((undefined4 *)(unsigned long)*(unsigned *)0x8c436708) + 0x44))))(((undefined4 *)(unsigned long)*(unsigned *)0x8c436708),((undefined4 *)(unsigned long)*(unsigned *)0x8c436708),pcVar6,ar7));
              *(undefined4 *)(unsigned)(puVar7 + -0x7c) = uVar1;
              (*(undefined1 *)(unsigned)0x8c43676c) = (char)*(undefined4 *)(unsigned)(puVar7 + -0x7c);
            case 0:
            case 5:
              *(unsigned *)(unsigned)(puVar7 + -0xb4) = ((undefined1 *)(unsigned)0x8c436738);
              pcVar6 = ((code *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0xb4));
              *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xb4) + 0x18) = *(int *)(unsigned)(pcVar6 + 0x18) + 1;
            }
          }
          puVar3 = puVar4 + 1;
          puVar4 = puVar3;
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c436754) = 0;
        for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
          *(unsigned *)(unsigned)(puVar7 + -0xb8) = ((undefined1 *)(unsigned)0x8c436738);
          *(int *)(unsigned)(puVar7 + -0xbc) = iVar2;
          puVar3 = (undefined1 *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xbc) * 4);
          *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xb8) + 0x1c) =
               *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xb8) + 0x1c) + *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c436738) + (int)puVar3);
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c43675c) = 0;
        for (iVar2 = 0; iVar2 < 0x14; iVar2 = iVar2 + 1) {
          *(int *)(unsigned)(puVar7 + -0xc0) = iVar2;
          puVar3 = (undefined1 *)(unsigned)0x8c431a68;
          if (*(int *)(unsigned)((*(int *)(unsigned)(puVar7 + -0xc0) * 0x10 - *(int *)(unsigned)(puVar7 + -0xc0)) * 0x10 +
                      -0x73bcd0bc) != -1) {
            *(unsigned *)(unsigned)(puVar7 + -0xc4) = ((undefined1 *)(unsigned)0x8c436738);
            puVar3 = (undefined1 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xc4) + 0x24) + 1);
            *(unsigned *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xc4) + 0x24) = puVar3;
          }
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c436758) = 0;
        for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
          *(int *)(unsigned)(puVar7 + -200) = iVar2;
          puVar3 = (undefined1 *)(unsigned)0x27ac;
          if (*(int *)(unsigned)((*(int *)(unsigned)(puVar7 + -200) * 0x10 - *(int *)(unsigned)(puVar7 + -200)) * 0x10 +
                      -0x73bcbdec) != -1) {
            puVar3 = ((undefined1 *)(unsigned)0x8c436738);
            *(unsigned *)(unsigned)(puVar7 + -0xcc) = ((undefined1 *)(unsigned)0x8c436738);
            *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xcc) + 0x20) =
                 *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xcc) + 0x20) + 1;
          }
        }
        iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c436754) + (*(undefined4 *)(unsigned)(unsigned)0x8c436750);
        (*(undefined4 *)(unsigned)(unsigned)0x8c436760) = iVar2 + (*(undefined4 *)(unsigned)(unsigned)0x8c436758);
        (vsp = ((unsigned long)(fr0_ - 488)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((undefined4 *)(unsigned long)*(unsigned *)0x8c436704) + 0x17c))))(((undefined4 *)(unsigned long)*(unsigned *)0x8c436704),puVar3,iVar2,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)(puVar7 + -0x80) = (int)((ulonglong)in_dr0 >> 0x20);
          in_fr13 = *(float *)(unsigned)(puVar7 + -0x80);
        }
        else {
          *(double *)(unsigned)(puVar7 + -0x80) = in_dr0;
        }
        (vsp = ((unsigned long)(fr0_ - 488)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((undefined4 *)(unsigned long)*(unsigned *)0x8c436704) + 0x178))))(((undefined4 *)(unsigned long)*(unsigned *)0x8c436704),puVar3,iVar2,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)(puVar7 + -0x84) = (int)((ulonglong)in_dr0 >> 0x20);
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(puVar7 + -0x84),uVar1);
        }
        else {
          *(double *)(unsigned)(puVar7 + -0x84) = in_dr0;
          dVar9 = *(double *)(unsigned)(puVar7 + -0x84);
        }
        (vsp = ((unsigned long)(fr0_ - 488)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((undefined4 *)(unsigned long)*(unsigned *)0x8c436704) + 0x188))))(((undefined4 *)(unsigned long)*(unsigned *)0x8c436704),puVar3,iVar2,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)(puVar7 + -0x88) = (int)((ulonglong)in_dr0 >> 0x20);
          dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),*(undefined4 *)(unsigned)(puVar7 + -0x88));
        }
        else {
          *(double *)(unsigned)(puVar7 + -0x88) = in_dr0;
        }
        uVar1 = (undefined4)(D2U(dVar9) >> 0x20);
        if ((*(undefined1 *)(unsigned)0x8c431b10) == '\0') {
          if (in_FPSCR_SZ == '\0') {
            dVar9 = CONCAT44D(uVar1,0x42c80000);
          }
        }
        else if ((*(undefined1 *)(unsigned)0x8c431b10) == '\x01') {
          if (in_FPSCR_SZ == '\0') {
            dVar9 = CONCAT44D(uVar1,0x42c80000);
          }
        }
        else if (((*(undefined1 *)(unsigned)0x8c431b10) == '\x02') && (in_FPSCR_SZ == '\0')) {
          in_fr13 = 100.0;
        }
        if ((((*(undefined4 *)(unsigned)(unsigned)0x8c436754) - (*(undefined4 *)(unsigned)(unsigned)0x8c436738)) - (*(undefined4 *)(unsigned)(unsigned)0x8c43673c) != (*(undefined4 *)(unsigned)(unsigned)0x8c436748)) &&
           ((*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) < 0x18 || (0x1e < *((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0))))) {
          if ((*(undefined1 *)(unsigned)0x8c436771) == '\x01') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 4;
            (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 3;
          }
          else if ((*(undefined1 *)(unsigned)0x8c436771) == '\x02') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 4;
            (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 2;
          }
          else if ((*(undefined1 *)(unsigned)0x8c436771) == '\x03') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 4;
            (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 1;
          }
        }
        for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
          *(int *)(unsigned)(puVar7 + -0xd0) = iVar2;
          if ((0x1f < ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0xd0)]) &&
             (*(int *)(unsigned)(puVar7 + -0xd4) = iVar2, ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0xd4)] < 0x25)) {
            if (in_FPSCR_SZ == '\0') {
              in_dr0 = CONCAT44D(0x42200000,SUB84(in_dr0,0));
            }
            else {
              in_dr0 = -1.3550198152570648e-249;
            }
            if (in_FPSCR_PR == '\0') {
              bVar11 = SUB84(dVar9,0) < F32HI(in_dr0);
            }
            else {
              bVar11 = dVar9 < in_dr0;
            }
            if ((bVar11) && (3 < (*(undefined4 *)(unsigned)(unsigned)0x8c436734))) {
              (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 3;
              (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 3;
            }
          }
        }
        if (in_FPSCR_SZ == '\0') {
          dVar8 = CONCAT44D(0x42840000,SUB84(in_dr0,0));
        }
        else {
          dVar8 = 4294968360.25;
        }
        if (in_FPSCR_PR == '\0') {
          bVar11 = in_fr13 < F32HI(dVar8);
        }
        else {
          bVar11 = CONCAT44D(in_fr12,in_fr13) < dVar8;
        }
        if ((bVar11) && (2 < (*(undefined4 *)(unsigned)(unsigned)0x8c436734))) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 2;
          if (in_FPSCR_SZ == '\0') {
            dVar8 = CONCAT44D(0x41f00000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -3.3212364735250305e+154;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = in_fr13 < F32HI(dVar8);
          }
          else {
            bVar11 = CONCAT44D(in_fr12,in_fr13) < dVar8;
          }
          if (bVar11) {
            (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 2;
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 3;
          }
        }
        fVar10 = F32HI(dVar9);
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c436748) < 1) && ((*(undefined4 *)(unsigned)(unsigned)0x8c43674c) < 1)) {
          if (in_FPSCR_SZ == '\0') {
            dVar8 = CONCAT44D(0x41700000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -1.3550198123953496e-249;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = fVar10 < F32HI(dVar8);
          }
          else {
            bVar11 = dVar9 < dVar8;
          }
          if ((bVar11) && (2 < (*(undefined4 *)(unsigned)(unsigned)0x8c436734))) {
            (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 2;
            (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 1;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar8 = CONCAT44D(0x41a00000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -1.3550837490964348e-249;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = fVar10 < F32HI(dVar8);
          }
          else {
            bVar11 = dVar9 < dVar8;
          }
          if ((!bVar11) && (2 < (*(undefined4 *)(unsigned)(unsigned)0x8c436734))) {
            (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 2;
            (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 0;
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar8 = CONCAT44D(0x41a00000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -1.3550155507811096e-249;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = fVar10 < F32HI(dVar8);
          }
          else {
            bVar11 = dVar9 < dVar8;
          }
          if ((bVar11) && (2 < (*(undefined4 *)(unsigned)(unsigned)0x8c436734))) {
            (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 2;
            (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 1;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar8 = CONCAT44D(0x41c80000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -4.808587738876579e+231;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = fVar10 < F32HI(dVar8);
          }
          else {
            bVar11 = dVar9 < dVar8;
          }
          if ((!bVar11) && (2 < (*(undefined4 *)(unsigned)(unsigned)0x8c436734))) {
            (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 2;
            (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 0;
          }
        }
        if (in_FPSCR_PR == '\0') {
          bVar11 = fVar10 < 1.0;
        }
        else {
          bVar11 = dVar9 < CONCAT44D(0x3f800000,SUB84(dVar8,0));
        }
        if ((bVar11) && (1 < (*(undefined4 *)(unsigned)(unsigned)0x8c436734))) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 1;
          (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 1;
        }
        if ('\0' < (*(undefined1 *)(unsigned)0x8c436770)) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 5;
          (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 2;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x44) = 3;
override_jmp_8c0bcf7a_case_3:
        if ((((*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) == 5) || (*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) == 6)) || (*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) == 7)) &&
           (((*(undefined1 *)(unsigned)0x8c43676c) < '\x04' && ((*(undefined4 *)(unsigned)(unsigned)0x8c436738) == 0)))) {
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c902),((undefined1 *)(unsigned)0x8c13c907),ar7));
          *(int *)(unsigned)(puVar7 + -0xd8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
          *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xd8) + 0x25) =
               *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xd8) + 0x25) + '\x01';
          *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x13;
        }
        else if (((*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) == 0x25) ||
                 ((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[1] == 0x25 || (((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[2] == 0x25)))) &&
                (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x25) == '\0')) {
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c90c),((undefined1 *)(unsigned)0x8c13c025),ar7));
          *(int *)(unsigned)(puVar7 + -0xdc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
          *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xdc) + 0x25) =
               *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xdc) + 0x25) + '\x01';
          *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x13;
        }
        else if ((*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) < 4) && ((*(undefined4 *)(unsigned)(unsigned)0x8c43670c) == 2)) {
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c913),((undefined1 *)(unsigned)0x8c13c025),ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x10;
        }
        else if ((*(undefined4 *)(unsigned)(unsigned)0x8c436760) == 0) {
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c902),((undefined1 *)(unsigned)0x8c13c91c),ar7));
          *(int *)(unsigned)(puVar7 + -0xe0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
          *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xe0) + 0x25) =
               *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xe0) + 0x25) + '\x01';
          *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x13;
        }
        else {
          puVar4 = (undefined1 *)(unsigned)0x44;
          *(undefined4 *)(unsigned)(ar4 + 0x44) = 4;
override_jmp_8c0bcf7a_case_4:
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c436720),puVar4,ar7));
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5f0(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c436710),puVar4,ar7));
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa624(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c43672c),0x8c35468c,ar7));
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c920),((undefined1 *)(unsigned)0x8c13c025),ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x44) = 5;
        }
      }
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x13;
      *(undefined4 *)(unsigned)(ar4 + 0x14c) = 3;
    }
    break;
  case 2:
    goto override_jmp_8c0bcf7a_case_2;
  case 3:
    goto override_jmp_8c0bcf7a_case_3;
  case 4:
    goto override_jmp_8c0bcf7a_case_4;
  case 5:
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 6;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436764) = 4;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436768) = 0;
    for (iVar2 = 4; -1 < iVar2; iVar2 = iVar2 + -1) {
      *(int *)(unsigned)(puVar7 + -0xe4) = iVar2;
      if (0x29 < ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0xe4)]) {
        *(int *)(unsigned)(puVar7 + -0xe8) = iVar2;
        if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0xe8)] < 0x30) {
          *(int *)(unsigned)(puVar7 + -0xec) = iVar2;
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0xec)],*(int *)(unsigned)(puVar7 + -0xe8),
                       ar7));
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c92d),((undefined1 *)(unsigned)0x8c13c902),ar7));
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            *(int *)(unsigned)(puVar7 + -0xf0) = iVar2;
            if ((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0xf0)] < 0x2a) ||
               (*(int *)(unsigned)(puVar7 + -0xf4) = iVar2, 0x2f < ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0xf4)])) {
              *(int *)(unsigned)(puVar7 + -0x100) = iVar2;
              *(int *)(unsigned)(puVar7 + -0xfc) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x100)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
              *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0xfc)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0xfc)) + '\x01';
            }
            else {
              *(int *)(unsigned)(puVar7 + -0xf8) = iVar2;
              ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0xf8)] = 0;
            }
          }
          *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x10;
          return 1;
        }
      }
    }
    break;
  case 6:
    for (; iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c436764), -1 < (int)(*(undefined4 *)(unsigned)(unsigned)0x8c436764); (*(undefined4 *)(unsigned)(unsigned)0x8c436764) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764) + -1) {
      *(int *)(unsigned)(puVar7 + -0x104) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
      if ((4 < ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x104)]) &&
         (*(int *)(unsigned)(puVar7 + -0x108) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764),
         *(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x108)]) == '\0')) {
        *(int *)(unsigned)(puVar7 + -0x10c) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
        if (((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x10c)] == 6) ||
            ((*(int *)(unsigned)(puVar7 + -0x110) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764),
             ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x110)] == 7 ||
             (*(int *)(unsigned)(puVar7 + -0x114) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764),
             ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x114)] == 8)))) ||
           (*(int *)(unsigned)(puVar7 + -0x118) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764),
           ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x118)] == 10)) {
          iVar5 = 1;
          if ((*(undefined4 *)(unsigned)(unsigned)0x8c436764) != 1) {
            if ((*(undefined4 *)(unsigned)(unsigned)0x8c436764) != 2) {
              if ((*(undefined4 *)(unsigned)(unsigned)0x8c436764) != 3) {
                if ((*(undefined4 *)(unsigned)(unsigned)0x8c436764) != 4) goto LAB_8c0be428;
                *(undefined4 *)(unsigned)(puVar7 + -0x11c) = 4;
                *(undefined4 *)(unsigned)(puVar7 + -0x120) = 3;
                if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x11c)] + 1 ==
                    ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x120)]) {
                  *(undefined4 *)(unsigned)(puVar7 + -0x128) = 4;
                  *(int *)(unsigned)(puVar7 + -0x124) =
                       ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x128)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
                  *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x124)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x124)) + '\x01';
                  goto LAB_8c0be818;
                }
                iVar5 = 2;
              }
              *(int *)(unsigned)(puVar7 + -300) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
              *(int *)(unsigned)(puVar7 + -0x130) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764) - iVar5;
              if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -300)] + 1 ==
                  ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x130)]) {
                *(int *)(unsigned)(puVar7 + -0x138) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
                *(int *)(unsigned)(puVar7 + -0x134) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x138)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4)
                ;
                ar7 = ((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x134));
                *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x134)) = *ar7 + '\x01';
                goto LAB_8c0be818;
              }
              iVar5 = iVar5 + 1;
            }
            *(int *)(unsigned)(puVar7 + -0x13c) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
            *(int *)(unsigned)(puVar7 + -0x140) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764) - iVar5;
            if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x13c)] + 1 ==
                ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x140)]) {
              *(int *)(unsigned)(puVar7 + -0x148) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
              *(int *)(unsigned)(puVar7 + -0x144) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x148)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
              *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x144)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x144)) + '\x01';
              goto LAB_8c0be818;
            }
            iVar5 = iVar5 + 1;
          }
          *(int *)(unsigned)(puVar7 + -0x14c) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
          *(int *)(unsigned)(puVar7 + -0x150) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764) - iVar5;
          if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x14c)] + 1 ==
              ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x150)]) {
            *(int *)(unsigned)(puVar7 + -0x158) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
            *(int *)(unsigned)(puVar7 + -0x154) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x158)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
            *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x154)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x154)) + '\x01';
            goto LAB_8c0be818;
          }
        }
LAB_8c0be428:
        *(int *)(unsigned)(puVar7 + -0x15c) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
        if (((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x15c)] == 5) && (2 < (*(undefined4 *)(unsigned)(unsigned)0x8c436764))) &&
           ((*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) == 8 ||
            (((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[1] == 8 || (*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) == 9)) || (((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[1] == 9)))))) {
          *(int *)(unsigned)(puVar7 + -0x164) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
          *(int *)(unsigned)(puVar7 + -0x160) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x164)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
          *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x160)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x160)) + '\x01';
        }
        else {
          *(int *)(unsigned)(puVar7 + -0x168) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
          if (((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x168)] == 7) && (0 < (*(undefined4 *)(unsigned)(unsigned)0x8c436764))) &&
             (*(int *)(unsigned)(puVar7 + -0x16c) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764) + -1,
             ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x16c)] == 9)) {
            *(int *)(unsigned)(puVar7 + -0x174) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
            *(int *)(unsigned)(puVar7 + -0x170) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x174)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
            *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x170)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x170)) + '\x01';
          }
          else {
            *(int *)(unsigned)(puVar7 + -0x178) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
            if ((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x178)] == 0xe) &&
               ('\0' < *(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0xf))) {
              *(int *)(unsigned)(puVar7 + -0x180) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
              *(int *)(unsigned)(puVar7 + -0x17c) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x180)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
              *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x17c)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x17c)) + '\x01';
            }
            else {
              *(int *)(unsigned)(puVar7 + -0x184) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
              if ((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x184)] == 0xd) && ((*(undefined4 *)(unsigned)(unsigned)0x8c436740) == 0)) {
                *(int *)(unsigned)(puVar7 + -0x18c) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
                *(int *)(unsigned)(puVar7 + -0x188) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x18c)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4)
                ;
                *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x188)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x188)) + '\x01';
              }
              else {
                *(int *)(unsigned)(puVar7 + -400) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
                if ((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -400)] == 0xf) && (2 < (*(undefined4 *)(unsigned)(unsigned)0x8c43673c))) {
                  *(int *)(unsigned)(puVar7 + -0x198) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
                  *(int *)(unsigned)(puVar7 + -0x194) =
                       ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x198)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
                  *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x194)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x194)) + '\x01';
                }
                else {
                  *(int *)(unsigned)(puVar7 + -0x19c) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
                  if ((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x19c)] == 0x10) &&
                     (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0xc) == '\0')) {
                    *(int *)(unsigned)(puVar7 + -0x1a4) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
                    *(int *)(unsigned)(puVar7 + -0x1a0) =
                         ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x1a4)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
                    *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x1a0)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x1a0)) + '\x01';
                  }
                  else {
                    *(int *)(unsigned)(puVar7 + -0x1a8) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
                    if ((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x1a8)] != 0x12) ||
                       ((*(undefined1 *)(unsigned)0x8c43676e) < '\x01')) {
                      *(int *)(unsigned)(puVar7 + -0x1ac) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
                      iVar5 = *(int *)(unsigned)(puVar7 + -0x1ac);
                      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[iVar5],iVar5,ar7));
                      *(int *)(unsigned)(puVar7 + -0x1b0) = iVar2;
                      if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x1b0)] == 0x23) {
                        *(int *)(unsigned)(puVar7 + -0x1b4) = iVar2 + -1;
                        if ((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x1b4)] == 0x22) ||
                           (*(int *)(unsigned)(puVar7 + -0x1b8) = iVar2 + -2,
                           ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x1b8)] == 0x22)) {
                          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,0x23,iVar5,ar7));
                          *(int *)(unsigned)(puVar7 + -0x1bc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
                          *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0x1bc) + 0x23) =
                               *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0x1bc) + 0x23) + '\x01';
                        }
                        else {
                          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,0x16,0x8c35468c,ar7));
                        }
                      }
                      if ((*(undefined4 *)(unsigned)(unsigned)0x8c436768) == 0) {
                        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c92d),((undefined1 *)(unsigned)0x8c13c934),((void *)0x8c0bf170)));
                      }
                      else {
                        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c92d),((undefined1 *)(unsigned)0x8c13c93a),ar7));
                      }
                      *(int *)(unsigned)(puVar7 + -0x1c4) = iVar2;
                      *(int *)(unsigned)(puVar7 + -0x1c0) =
                           ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x1c4)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
                      *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x1c0)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x1c0)) + '\x01';
                      (*(undefined4 *)(unsigned)(unsigned)0x8c436764) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764) + -1;
                      (*(undefined4 *)(unsigned)(unsigned)0x8c436768) = 1;
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_8c0be818:
    }
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 7;
    break;
  case 7:
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c436754) == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 0xf;
    }
    else if (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 5) == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 0xf;
    }
    else {
      if ((((0 < (*(undefined4 *)(unsigned)(unsigned)0x8c43674c)) && (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x1e) == '\0')) &&
          (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x1f) == '\0')) && (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x20) == '\0')) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c436748) = (*(undefined4 *)(unsigned)(unsigned)0x8c43674c);
        (*(undefined4 *)(unsigned)(unsigned)0x8c43674c) = 0;
      }
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c940),((undefined1 *)(unsigned)0x8c13c025),ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 8;
    }
    break;
  case 8:
    if (0 < (*(undefined4 *)(unsigned)(unsigned)0x8c436738)) {
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,0,0x14,ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5f0(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c436738),((void *)0x8c0fa5f0),ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c94c),((undefined1 *)(unsigned)0x8c13c025),ar7));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 9;
    break;
  case 9:
    if (0 < (*(undefined4 *)(unsigned)(unsigned)0x8c436740) + (*(undefined4 *)(unsigned)(unsigned)0x8c43673c)) {
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,1,0x14,ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5f0(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c436740) + (*(undefined4 *)(unsigned)(unsigned)0x8c43673c),puVar4,ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c94c),((undefined1 *)(unsigned)0x8c13c025),ar7));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 10;
    break;
  case 10:
    if (0 < (*(undefined4 *)(unsigned)(unsigned)0x8c436744)) {
      pcVar6 = ((void *)0x8c0fa5bc);
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,2,((void *)0x8c0fa5bc),ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5f0(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c436744),pcVar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c94c),((undefined1 *)(unsigned)0x8c13c025),ar7));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 0xb;
    break;
  case 0xb:
    if (0 < (*(undefined4 *)(unsigned)(unsigned)0x8c436748)) {
      puVar4 = ((undefined1 *)(unsigned)0x8c4366f4);
      if (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x1e) == '\0') {
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,3,((undefined1 *)(unsigned)0x8c4366f4),ar7));
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5f0(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c436748),puVar4,ar7));
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c94c),((undefined1 *)(unsigned)0x8c13c025),ar7));
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c43674c) = (*(undefined4 *)(unsigned)(unsigned)0x8c436748);
        (*(undefined4 *)(unsigned)(unsigned)0x8c436748) = 0;
      }
    }
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 0xc;
    break;
  case 0xc:
    if (0 < (*(undefined4 *)(unsigned)(unsigned)0x8c43674c)) {
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,4,0x14,ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5f0(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c43674c),puVar4,ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c94c),((undefined1 *)(unsigned)0x8c13c025),ar7));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 0xd;
    break;
  case 0xd:
    if (0 < (*(undefined4 *)(unsigned)(unsigned)0x8c436754)) {
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c958),((undefined1 *)(unsigned)0x8c13c025),ar7));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 0xe;
    break;
  case 0xe:
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c436734) < 1) || (7 < (*(undefined4 *)(unsigned)(unsigned)0x8c436734))) {
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,0,0x14,ar7));
      if (in_FPSCR_SZ == '\0') {
        puVar3 = (undefined1 *)(unsigned)0x42840000;
        fVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c431c18);
      }
      else {
        fVar10 = 66.0;
        puVar3 = ((undefined1 *)(unsigned)0x8c4366f0);
      }
      if (((in_FPSCR_PR != '\0' || (float)(uint)puVar3 <= fVar10) || (*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) < 5)) ||
         (0x17 < *((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0))) {
        if ((((*(undefined4 *)(unsigned)(unsigned)0x8c43675c) < 3) && (0xf < *((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0))) &&
           ((*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) < 0x25 &&
            (puVar4 = (undefined1 *)(unsigned)(int)*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0xc),
            '\0' < *(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0xc))))) {
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,2,puVar4,ar7));
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            puVar3 = (undefined1 *)(unsigned)0x42200000;
            fVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c432f24);
          }
          else {
            fVar10 = 40.0;
            puVar3 = ((undefined1 *)(unsigned)0x8c4366f0);
          }
          if (((in_FPSCR_PR == '\0' && fVar10 < (float)(uint)puVar3) &&
              (ar7 = (char *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0), 0xf < (int)ar7)) &&
             ((*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) < 0x25 && ('\0' < *(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0xc))))) {
            (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,3,puVar4,ar7));
          }
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,1,puVar4,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c96f),((undefined1 *)(unsigned)0x8c13c025),ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c436730),0x14,ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5f0(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c436734),puVar4,ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c962),((undefined1 *)(unsigned)0x8c13c025),ar7));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 0xf;
    break;
  case 0xf:
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x10;
    pcVar6 = ((void *)0x8c0fa5bc);
    (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0),((void *)0x8c0fa5bc),ar7));
    switch(*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)) {
    case 4:
    case 5:
    case 6:
    case 7:
      if ('\x03' < (*(undefined1 *)(unsigned)0x8c43676c)) {
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,8,((undefined1 *)(unsigned)0x8c43676c),ar7));
      }
      break;
    case 8:
    case 9:
    case 0xc:
    case 0x14:
    case 0x18:
    case 0x19:
    case 0x21:
      break;
    default:
      if (((*(undefined1 *)(unsigned)0x8c43676e) < '\x01') || (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x12) != '\0')) {
        if ((*(undefined1 *)(unsigned)0x8c43676f) < '\x01') {
          return 1;
        }
        if ((*(undefined1 *)(unsigned)0x8c436770) != '\0') {
          return 1;
        }
        if (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x21) != '\0') {
          return 1;
        }
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c43674c) == 1) {
          return 1;
        }
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,0x33,(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x21),ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,0x32,pcVar6,ar7));
      }
      break;
    case 0xf:
      if ((*(undefined1 *)(unsigned)0x8c43676d) < '\x01') {
        return 1;
      }
      if (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0xc) != '\0') {
        return 1;
      }
      break;
    case 0x10:
    case 0x11:
      if ('\x01' < *(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x43)) {
        return 1;
      }
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c436740) != 2) {
        return 1;
      }
      if (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0xd) != '\0') {
        return 1;
      }
      *(int *)(unsigned)(puVar7 + -0x1c8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
      *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0x1c8) + 0x43) =
           *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0x1c8) + 0x43) + '\x01';
      break;
    case 0x13:
      if ('\0' < *(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x14)) {
        return 1;
      }
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c436744) == 1) {
        return 1;
      }
      break;
    case 0x1f:
      if ('\0' < *(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x20)) {
        return 1;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c97a),((undefined1 *)(unsigned)0x8c13c025),ar7));
    break;
  case 0x10:
    (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c984),((undefined1 *)(unsigned)0x8c13c025),ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x13;
    *(undefined4 *)(unsigned)(ar4 + 0x14c) = 2;
    break;
  case 0x13:
    if ((*(int *)(unsigned)(ar4 + 0x14c) == 0) && ((*(undefined4 *)(unsigned)(unsigned)0x8c4362f0) != 0xe)) {
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 1;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c98b),((undefined1 *)(unsigned)0x8c13c025),ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x14;
      *(undefined4 *)(unsigned)(ar4 + 0x14c) = 2;
    }
    break;
  case 0x14:
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x12;
    *(undefined4 *)(unsigned)(ar4 + 0x14c) = 2;
  }
  return 1;
}

__asm__(".globl _FUN_8c0bcedc\n.set _FUN_8c0bcedc, _FUN_8c0bcedc_def\n");
