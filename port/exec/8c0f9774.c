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
undefined4 s_REQUEST_HOT_0f9780_def(int ar4,undefined4 ar5,code *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_REQUEST_HOT_0f9780";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  int iVar1;
  code *pcVar2;
  code *ar5_00;
  char *pcVar3;
  uint uVar4;
  int ar4_00;
  undefined4 uVar5;
  bool bVar6;
  
  if (0 < *(int *)(unsigned)(ar4 + 0x1014)) {
    return 1;
  }
  uVar5 = *(undefined4 *)(unsigned)(ar4 + 0x1050);
  ar4_00 = *(int *)(unsigned)(ar4 + 0x1050) + 0x20;
  ar5_00 = (code *)((undefined1 *)(unsigned)0x8c1408e9);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(*(int *)(unsigned)(ar4 + 0x1050) + 0x40,((undefined1 *)(unsigned)0x8c1408e9),ar6,ar7); });
  uVar4 = 0;
  iVar1 = *(int *)(unsigned)(ar4 + 0x89130);
  if (iVar1 == 0) goto LAB_8c0fa1a8;
  if ((iVar1 != 1) && (iVar1 != 2)) {
    if (iVar1 == 3) {
      pcVar3 = (char *)(unsigned)0x1050;
      bVar6 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70) == 0x11;
      if (bVar6) {
        pcVar3 = ((undefined1 *)(unsigned)0x8c140bb2);
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140bb2),ar6,ar7); });
        *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70) = 0;
      }
      uVar4 = (uint)bVar6;
      pcVar2 = (code *)(vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fa658(ar4,pcVar3,ar6,ar7));
      ar5_00 = (code *)pcVar3;
      if ((((int)pcVar2 < 0x13) &&
          (ar5_00 = (code *)0x1, *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x78) != 1)) &&
         (ar5_00 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x1048)), (int)pcVar2 <= (int)((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x1048)))) {
        ar6 = (code *)((undefined1 *)(unsigned)0x8c140ba6);
        (vsp = ((unsigned long)(fr0_ - 116)), s_CHAPTER_02d_0fa206(ar4,pcVar2,((undefined1 *)(unsigned)0x8c140ba6),ar7));
        uVar4 = 1;
        ar5_00 = pcVar2;
      }
    }
    goto LAB_8c0fa1a8;
  }
  if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70) == 0xb) {
    *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70) = 0;
    if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x7c) != 7) {
      pcVar2 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x7c));
      ar5_00 = pcVar2;
      if (((int)pcVar2 < 10) && (-1 < (int)pcVar2)) {
        ar5_00 = (code *)(&(*(undefined1 *)(unsigned)0x8c0f9840))[(int)pcVar2];
                    
        switch((unsigned long)pcVar2) {
        case 0x0:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140aaa);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140aaa),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 0x1:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140ab6);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140ab6),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 0x2:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140ac3);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140ac3),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 0x3:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140ad2);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140ad2),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 0x4:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140ae3);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140ae3),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 0x5:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140af2);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140af2),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 0x8:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140afe);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140afe),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 0x9:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140b0c);
          ar6 = ((void *)0x8c0101d4);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140b0c),((void *)0x8c0101d4),ar7); });
          ar5_00 = (code *)pcVar3;
        }
      }
      iVar1 = *(int *)(unsigned)(ar4 + 0x1044);
      if ((iVar1 < 7) && (-1 < iVar1)) {
                    
        switch(iVar1) {
        case 0:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140900);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c140900),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 1:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140900);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c140900),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 2:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140911);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c140911),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 3:
          pcVar3 = ((undefined1 *)(unsigned)0x8c14094e);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c14094e),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 4:
          pcVar3 = ((undefined1 *)(unsigned)0x8c14094e);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c14094e),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 5:
          pcVar3 = ((undefined1 *)(unsigned)0x8c14094e);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c14094e),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 6:
          pcVar3 = ((undefined1 *)(unsigned)0x8c14094e);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c14094e),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
        }
      }
      uVar4 = 1;
    }
    goto LAB_8c0fa1a8;
  }
  if (((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x7c) != 7) &&
      (0 < *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x60))) ||
     (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x68) < 2)) goto LAB_8c0fa1a8;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fa658(ar4,ar5_00,ar6,ar7));
  if ((*(int *)(unsigned)(ar4 + 0xc) == 0) && (1 < iVar1)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(uVar5,((undefined1 *)(unsigned)0x8c140a8f),ar6,ar7));
    if (iVar1 == 0) {
      ar5_00 = (code *)((undefined1 *)(unsigned)0x8c140a98);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(ar4_00,((undefined1 *)(unsigned)0x8c140a98),ar6,ar7));
      if (iVar1 == 0) {
        if ((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x74) == 1) || (*(int *)(unsigned)(ar4 + 0x1034) == 1)) {
          pcVar3 = ((undefined1 *)(unsigned)0x8c140b19);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140b19),ar6,ar7); });
          uVar4 = 1;
          ar5_00 = (code *)pcVar3;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0xc) = 1;
          *(undefined4 *)(unsigned)(ar4 + 0x1018) = 1;
        }
        goto LAB_8c0fa1a8;
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(uVar5,((undefined1 *)(unsigned)0x8c140a8f),ar6,ar7));
    if (iVar1 == 0) {
      pcVar3 = ((undefined1 *)(unsigned)0x8c140b19);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(ar4_00,((undefined1 *)(unsigned)0x8c140b19),ar6,ar7));
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c1f8176(((ushort *)(fr0_ - 0x28)),pcVar3,ar6,ar7));
        if ((((ushort *)(fr0_ - 0x28))[0] < 0x7d5) && (0x7ce < ((ushort *)(fr0_ - 0x28))[0])) {
                    
          switch(((ushort *)(fr0_ - 0x28))[0]) {
          case 1999:
            pcVar3 = ((undefined1 *)(unsigned)0x8c140b22);
            (vsp = ((unsigned long)(fr0_ - 116)), strcpy(uVar5,((undefined1 *)(unsigned)0x8c140b22),ar6,ar7));
            ar5_00 = (code *)pcVar3;
            break;
          case 2000:
            pcVar3 = ((undefined1 *)(unsigned)0x8c140b2f);
            ar6 = ((void *)0x8c0101d4);
            (vsp = ((unsigned long)(fr0_ - 116)), strcpy(uVar5,((undefined1 *)(unsigned)0x8c140b2f),((void *)0x8c0101d4),ar7));
            ar5_00 = (code *)pcVar3;
            break;
          case 0x7d1:
            pcVar3 = ((undefined1 *)(unsigned)0x8c140b3c);
            (vsp = ((unsigned long)(fr0_ - 116)), strcpy(uVar5,((undefined1 *)(unsigned)0x8c140b3c),ar6,ar7));
            ar5_00 = (code *)pcVar3;
            break;
          case 0x7d2:
            pcVar3 = ((undefined1 *)(unsigned)0x8c140b49);
            (vsp = ((unsigned long)(fr0_ - 116)), strcpy(uVar5,((undefined1 *)(unsigned)0x8c140b49),ar6,ar7));
            ar5_00 = (code *)pcVar3;
            break;
          case 0x7d3:
            pcVar3 = ((undefined1 *)(unsigned)0x8c140b56);
            (vsp = ((unsigned long)(fr0_ - 116)), strcpy(uVar5,((undefined1 *)(unsigned)0x8c140b56),ar6,ar7));
            ar5_00 = (code *)pcVar3;
            break;
          case 0x7d4:
            pcVar3 = ((undefined1 *)(unsigned)0x8c140b63);
            (vsp = ((unsigned long)(fr0_ - 116)), strcpy(uVar5,((undefined1 *)(unsigned)0x8c140b63),ar6,ar7));
            ar5_00 = (code *)pcVar3;
          }
        }
        else {
          pcVar3 = ((undefined1 *)(unsigned)0x8c140b70);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c140b70),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c140b7d)); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); FUN_8c014334(ar4_00,ar5_00,ar6,ar7); });
        uVar4 = 1;
        goto LAB_8c0fa1a8;
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(uVar5,((undefined1 *)(unsigned)0x8c140b22),ar6,ar7));
    if (((((iVar1 == 0) ||
          (iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(uVar5,((undefined1 *)(unsigned)0x8c140b2f),ar6,ar7)), iVar1 == 0)) ||
         (iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(uVar5,((undefined1 *)(unsigned)0x8c140b3c),ar6,ar7)), iVar1 == 0)) ||
        ((iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(uVar5,((undefined1 *)(unsigned)0x8c140b49),ar6,ar7)), iVar1 == 0 ||
         (iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(uVar5,((undefined1 *)(unsigned)0x8c140b56),ar6,ar7)), iVar1 == 0)))) ||
       ((iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(uVar5,((undefined1 *)(unsigned)0x8c140b63),ar6,ar7)), iVar1 == 0 ||
        (iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(uVar5,((undefined1 *)(unsigned)0x8c140b70),ar6,ar7)), iVar1 == 0)))) {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c140a8f),ar6,ar7); });
      pcVar3 = ((undefined1 *)(unsigned)0x8c140b82);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140b82),ar6,ar7); });
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x1018) = 1;
      uVar4 = 1;
      ar5_00 = (code *)pcVar3;
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c140a8f),ar6,ar7); });
      ar5_00 = (code *)((undefined1 *)(unsigned)0x8c140a98);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140a98),ar6,ar7); });
      uVar4 = 1;
    }
    goto LAB_8c0fa1a8;
  }
  if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x7c) != 7) goto LAB_8c0fa1a8;
  iVar1 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70);
  if ((iVar1 < 0x12) && (8 < iVar1)) {
                    
    switch(iVar1) {
    case 9:
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70) = 0;
      ar5_00 = (code *)0x1048;
      if (0 < *(int *)(unsigned)(ar4 + 0x1048)) {
        ar5_00 = (code *)(vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fa658(ar4,((void *)0x8c0fa658),ar6,ar7));
        if (*(int *)(unsigned)(ar4 + 0x1048) < (int)ar5_00) {
          ar5_00 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x1048));
        }
        ar6 = (code *)((undefined1 *)(unsigned)0x8c140ba6);
        (vsp = ((unsigned long)(fr0_ - 116)), s_CHAPTER_02d_0fa206(ar4,ar5_00,((undefined1 *)(unsigned)0x8c140ba6),ar7));
        uVar4 = 1;
      }
      break;
    case 10:
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70) = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c140ba9),ar6,ar7); });
      ar5_00 = (code *)((undefined1 *)(unsigned)0x8c1408e9);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c1408e9),ar6,ar7); });
      uVar4 = 1;
      break;
    default:
      goto switchD_8c0f9e5a_caseD_b;
    case 0xc:
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70) = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c140b93),ar6,ar7); });
      ar5_00 = (code *)((undefined1 *)(unsigned)0x8c1408e9);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c1408e9),ar6,ar7); });
      uVar4 = 1;
      break;
    case 0xd:
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70) = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c140b99),ar6,ar7); });
      ar5_00 = (code *)((undefined1 *)(unsigned)0x8c1408e9);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c1408e9),ar6,ar7); });
      uVar4 = 1;
      break;
    case 0x11:
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70) = 0;
      pcVar3 = ((undefined1 *)(unsigned)0x8c140bb2);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140bb2),ar6,ar7); });
      uVar4 = 1;
      ar5_00 = (code *)pcVar3;
    }
  }
  else {
switchD_8c0f9e5a_caseD_b:
    ar5_00 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x1048));
    if (0 < (int)ar5_00) {
      ar5_00 = ((void *)0x8c0fa658);
      iVar1 = ar4;
      pcVar2 = (code *)(vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fa658(ar4,((void *)0x8c0fa658),ar6,ar7));
      if ((int)pcVar2 <= *(int *)(unsigned)(ar4 + 0x1048)) {
        if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x74) == 1) {
          uVar5 = (vsp = ((unsigned long)(fr0_ - 116)), rand(iVar1,ar5_00,ar6,ar7));
          ar5_00 = (code *)0x4;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar5,4,ar6,ar7));
          if (iVar1 == 0) {
            ar6 = (code *)((undefined1 *)(unsigned)0x8c140bb9);
            (vsp = ((unsigned long)(fr0_ - 116)), s_CHAPTER_02d_0fa206(ar4,pcVar2,((undefined1 *)(unsigned)0x8c140bb9),ar7));
            uVar4 = 1;
            ar5_00 = pcVar2;
          }
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c1f8176(((ushort *)(fr0_ - 0x28)),((ushort *)(fr0_ - 0x28)),ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c1f826c(((ushort *)(fr0_ - 0x28)),&(*(uint *)(fr0_ - 0x2c)),ar6,ar7));
          ar5_00 = (code *)(vsp = ((unsigned long)(fr0_ - 116)), get_field_c8_0fc440(ar4 + 0x1054,ar4 + 0x1054,ar6,ar7));
          (*(uint *)(fr0_ - 0x2c)) = (*(uint *)(fr0_ - 0x2c)) - (int)ar5_00;
          if (600 < (*(uint *)(fr0_ - 0x2c))) {
            if (*(int *)(unsigned)(ar4 + 0x1034) == 1) {
              ar6 = (code *)((undefined1 *)(unsigned)0x8c140bb9);
              (vsp = ((unsigned long)(fr0_ - 116)), s_CHAPTER_02d_0fa206(ar4,pcVar2,((undefined1 *)(unsigned)0x8c140bb9),ar7));
            }
            else {
              ar6 = (code *)((undefined1 *)(unsigned)0x8c140a98);
              (vsp = ((unsigned long)(fr0_ - 116)), s_CHAPTER_02d_0fa206(ar4,pcVar2,((undefined1 *)(unsigned)0x8c140a98),ar7));
            }
            ar5_00 = ((void *)0x8c0fc40c);
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fc40c(ar4 + 0x1054,((void *)0x8c0fc40c),ar6,ar7));
            uVar4 = 1;
          }
        }
      }
    }
  }
LAB_8c0fa1a8:
  if (uVar4 == 1) {
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0f824c(ar4,ar5_00,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fa70c(ar4,ar5_00,ar6,ar7));
  }
  return uVar4;
}

__asm__(".globl _s_REQUEST_HOT_0f9780\n.set _s_REQUEST_HOT_0f9780, _s_REQUEST_HOT_0f9780_def\n");
