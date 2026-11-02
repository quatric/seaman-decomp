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
undefined4 s_STATUS_SICK_05d86e_def(int *ar4,code *ar5,code *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_STATUS_SICK_05d86e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 380; for (int i_ = 0; i_ < 380; i_++) z_[i_] = 0; }
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  code *pcVar11;
  int *ar5_00;
  undefined *ar6_00;
  int iVar12;
  code *pcVar13;
  char *pcVar14;
  int ar7_00;
  
  pcVar4 = ar5;
  pcVar11 = ar6;
  (vsp = ((unsigned long)(fr0_ - 380)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  puVar10 = ((undefined1 *)(fr0_ - 0x50));
  puVar7 = ((undefined1 *)(unsigned)0x8c136948);
  iVar9 = 0x10;
  do {
    puVar8 = puVar7 + 1;
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 2;
    puVar10[1] = *puVar8;
    puVar10 = puVar10 + 2;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  pcVar13 = ((void *)0x8c02602c);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar4,pcVar11,((void *)0x8c02602c)));
  if ((uVar2 & 0xffff) == 3) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02bef8(*(int *)(unsigned)(ar6 + 4),3,pcVar11,pcVar13));
    (vsp = ((unsigned long)(fr0_ - 380)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(ar4,*(int *)(unsigned)(ar6 + 0x18),(int)(short)uVar3,pcVar13));
  }
  (*(undefined1 *)(unsigned)0x8c136908) = ar4[0x210];
  pcVar14 = (char *)(unsigned)(uint)ar4[0x211];
  ar6_00 = ((undefined1 *)(unsigned)0x8c13686c);
  uVar3 = 0xa4;
  (*(undefined1 *)(unsigned)0x8c136910) = ar4[0x212];
  *(unsigned *)0x8c13690c = (unsigned)(unsigned long)(pcVar14);
  iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_13c_028d9c(*(int *)(unsigned)(ar6 + 4),0xa4,((undefined1 *)(unsigned)0x8c13686c),pcVar14));
  ar4[0x21d] = iVar9;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02bef8(*(int *)(unsigned)(ar6 + 4),uVar3,ar6_00,pcVar14));
  (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c030d04(ar4 + 0x27,(int)(short)uVar3,ar6_00,pcVar14));
  if ('\x01' < (char)ar4[0x26]) {
    (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05d7f8(ar4 + 0x27,0,ar6_00,pcVar14));
  }
  (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05ff40(ar4,ar5,ar6,pcVar14));
  (vsp = ((unsigned long)(fr0_ - 380)), s_STATUS_SUCKED_0660da(ar4,ar5,ar6,pcVar14));
  pcVar4 = ar6;
  (vsp = ((unsigned long)(fr0_ - 380)), s_STATUS_LASTONE_066468(ar4,ar5,ar6,pcVar14));
  pcVar11 = ((void *)0x8c028d9c);
  iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_13c_028d9c(*(int *)(unsigned)(ar6 + 4),((void *)0x8c028d9c),pcVar4,pcVar14));
  if ((((iVar9 == 7) &&
       (uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c025f68(*(int *)(unsigned)(ar6 + 4) + 0x78,pcVar11,pcVar4,pcVar14)), (char)uVar3 == '\x01'
       )) && (iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(*(int *)(unsigned)(ar6 + 0xc),pcVar11,pcVar4,pcVar14)), iVar9 == 0))
     && (ar4[0xe1] == -1)) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar11,pcVar4,pcVar14));
    uVar3 = 0x43;
    iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), libgcc_divide_helper_01031c(uVar2 & 0xffff,0x43,pcVar4,pcVar14));
    if ((iVar9 == 0x16) && (ar4[1] == 0)) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02c5ac(*(int *)(unsigned)(ar6 + 4) + 0x78,uVar3,pcVar4,pcVar14));
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0fa5bc(0x8c35468c,(int)(char)uVar3,pcVar4,pcVar14));
      pcVar14 = ((undefined1 *)(unsigned)0x8c1369c1);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 380)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 380)) - 8); FUN_8c0303b8(ar4 + 0x27,0x12,0,((undefined1 *)(unsigned)0x8c1369c1)); });
    }
  }
  pcVar4 = ar5;
  pcVar11 = ar6;
  (vsp = ((unsigned long)(fr0_ - 380)), s_IDLEACTION_SNEEZE_065e70(ar4,ar5,ar6,pcVar14));
  iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar4,pcVar11,pcVar14));
  if (((iVar9 != 2) &&
      (iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14)), iVar9 == 0)) &&
     ((ar4[1] == 0 &&
      (iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_178_035734(*(int *)(unsigned)(ar6 + 8),pcVar4,pcVar11,pcVar14)), iVar9 == 0)))) {
    pcVar4 = ar5;
    pcVar11 = ar6;
    (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0620d4(ar4,ar5,ar6,pcVar14));
  }
  iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar4,pcVar11,pcVar14));
  if (iVar9 != 2) {
    pcVar4 = ar6;
    (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02f20c(ar4,ar6,pcVar11,pcVar14));
  }
  pcVar14 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 380)), get_field_4_05eed8(ar4,pcVar4,pcVar11,pcVar14));
  pcVar4 = ar5;
  pcVar11 = ar6;
  (vsp = ((unsigned long)(fr0_ - 380)), s_STATUS_SNORE_05f668(ar4,ar5,ar6,pcVar14));
  iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar4,pcVar11,pcVar14));
  if (iVar9 != 2) {
    pcVar13 = ((void *)0x8c063838);
    pcVar4 = ar5;
    pcVar11 = ar6;
    (vsp = ((unsigned long)(fr0_ - 380)), s_REQUEST_ATTENTION_063846(ar4,ar5,ar6,((void *)0x8c063838)));
    iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_178_035734(*(int *)(unsigned)(ar6 + 8),pcVar4,pcVar11,pcVar13));
    pcVar14 = (char *)(unsigned)pcVar13;
    if ((iVar9 == 0) &&
       (iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar13)),
       pcVar14 = (char *)(unsigned)pcVar13, iVar9 == 0)) {
      pcVar4 = ar5;
      pcVar11 = ar6;
      (vsp = ((unsigned long)(fr0_ - 380)), s_REACTION_TITILLATE_064bb8(ar4,ar5,ar6,pcVar13));
      pcVar14 = (char *)(unsigned)pcVar13;
    }
    pcVar4 = (code *)(vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
    if ((pcVar4 == (code *)0x0) && (ar4[1] != 0xd)) {
      (vsp = ((unsigned long)(fr0_ - 380)), s_GRATIFIC_RID_HOT_06522a(ar4,ar5,ar6,pcVar14));
      pcVar4 = ar5;
      pcVar11 = ar6;
      (vsp = ((unsigned long)(fr0_ - 380)), s_REACTION_TEMP_LACK_0628aa(ar4,ar5,ar6,pcVar14));
    }
    iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
    if (iVar9 == 0) {
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02e8e0(ar4 + 0x207,1,pcVar11,pcVar14));
      pcVar4 = ar5;
      pcVar11 = ar6;
      (vsp = ((unsigned long)(fr0_ - 380)), s_REACTION_WAKED_TAP_062b14(ar4,ar5,ar6,pcVar14));
    }
  }
  iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar4,pcVar11,pcVar14));
  if (iVar9 == 0) {
    iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
    if (iVar9 == 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_a0_035724(*(int *)(unsigned)(ar6 + 0x18),pcVar4,pcVar11,pcVar14));
      pcVar4 = (code *)(uVar2 & 0xff);
      if ((pcVar4 == (code *)0x2) && (ar4[1] == 0)) {
        iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_24_05eed0(*(int *)(unsigned)(ar6 + 4) + 0xf8,2,pcVar11,pcVar14));
        if (iVar9 == 1) {
          uVar2 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar4,pcVar11,pcVar14));
          pcVar4 = (code *)0x7;
          iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), libgcc_divide_helper_01031c(uVar2 & 0xffff,7,pcVar11,pcVar14));
          if ((iVar9 == 1) && (ar4[0xe1] == -1)) {
            pcVar14 = ((undefined1 *)(unsigned)0x8c1369cd);
            pcVar11 = (code *)0x0;
            pcVar4 = (code *)0x0;
            (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0306d4(ar4 + 0x27,0,0,((undefined1 *)(unsigned)0x8c1369cd)));
          }
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
        if ((char)uVar3 == '\0') {
          uVar2 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar4,pcVar11,pcVar14));
          pcVar4 = (code *)0x7;
          iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), libgcc_divide_helper_01031c(uVar2 & 0xffff,7,pcVar11,pcVar14));
          if ((iVar9 == 1) && (ar4[0xe1] == -1)) {
            if (ar4[0x226] == 1) {
              pcVar14 = ((undefined1 *)(unsigned)0x8c1369db);
              pcVar11 = (code *)0x0;
              pcVar4 = (code *)0x21;
              (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0306d4(ar4 + 0x27,0x21,0,((undefined1 *)(unsigned)0x8c1369db)));
            }
            else {
              pcVar14 = ((undefined1 *)(unsigned)0x8c1369eb);
              pcVar11 = (code *)0x0;
              pcVar4 = (code *)0x21;
              (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0306d4(ar4 + 0x27,0x21,0,((undefined1 *)(unsigned)0x8c1369eb)));
            }
            ar4[0x226] = 0;
          }
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
        if ((*(char *)(unsigned)((int)ar4 + 0x9a) != (char)uVar3) &&
           (uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar4,pcVar11,pcVar14)), 3 < (ushort)uVar3)) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
          if ((char)uVar3 == '\0') {
            pcVar14 = ((undefined1 *)(unsigned)0x8c1369fe);
            pcVar11 = (code *)0x0;
            pcVar4 = (code *)0xa;
            (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0306d4(ar4 + 0x27,10,0,((undefined1 *)(unsigned)0x8c1369fe)));
          }
          else {
            pcVar4 = (code *)(vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
            if (*(char *)(unsigned)((int)ar4 + 0x9a) < (char)pcVar4) {
              pcVar14 = ((undefined1 *)(unsigned)0x8c136a0f);
              pcVar11 = (code *)0x0;
              pcVar4 = (code *)0x0;
              (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0306d4(ar4 + 0x27,0,0,((undefined1 *)(unsigned)0x8c136a0f)));
            }
          }
        }
      }
    }
    iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar4,pcVar11,pcVar14));
    if (iVar9 != 2) {
      if ((((ar4[1] != 7) &&
           (iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14)), iVar9 == 0)) &&
          ('\x01' < (char)ar4[0x26])) &&
         (iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_770_05eeb8(ar4 + 0x27,pcVar4,pcVar11,pcVar14)), iVar9 == 1)) {
        if (ar4[0xe1] == -1) {
          pcVar11 = (code *)(ar4 + 0x27);
          pcVar4 = (code *)(uint)ar4[0xe2];
          iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0f8320(0x8c35468c,pcVar4,pcVar11,pcVar14));
          ar4[0xe1] = iVar9;
        }
        else {
          pcVar4 = (code *)0x2;
          (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c030870(ar4 + 0x27,2,pcVar11,pcVar14));
        }
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05eeb0(*(int *)(unsigned)(ar6 + 4) + 0xa8,pcVar4,pcVar11,pcVar14));
      if ((char)uVar3 == '\x01') {
        pcVar4 = ((void *)0x8c025f70);
        iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_140_025f70(*(int *)(unsigned)(ar6 + 4),((void *)0x8c025f70),pcVar11,pcVar14));
        if (iVar9 == 0) {
          *(undefined1 *)(unsigned)(ar4 + 0x26) = 4;
        }
      }
    }
  }
  if (((ar4[0x10] == 0) || (ar4[0x10] == 3)) &&
     ((ar4[1] != 7 &&
      ((pcVar4 = (code *)(vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14)),
       pcVar4 == (code *)0x0 && (pcVar14 = (char *)(unsigned)0x1, '\x01' < (char)ar4[0x26])))))) {
    pcVar14 = (char *)(unsigned)0x83;
    pcVar11 = (code *)(int)*(char *)(unsigned)((int)ar4 + 0x83);
    pcVar4 = (code *)(int)*(char *)(unsigned)((int)ar4 + 0x83);
    if ((pcVar4 == (code *)0x0) || (pcVar4 == (code *)0x1)) {
      pcVar4 = ar5;
      pcVar11 = ar6;
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0652f4(ar4,ar5,ar6,0x83));
    }
  }
  if (((ar4[1] != 1) && (iVar9 = (int)(char)ar4[0x26], iVar9 < 10)) && (-1 < iVar9)) {
                    
    switch(iVar9) {
    case 0:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[0x210] = 0x2e;
      ar4[0x10] = 0x2e;
      (*(undefined1 *)(unsigned)0x8c136908) = 0x2e;
      ar4[0x211] = 0x36;
      *(unsigned *)0x8c13690c = (unsigned)(unsigned long)((char *)(unsigned)0x36);
      ar4[0x212] = 0x36;
      (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
      iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)ar6 + 8) + 0x18c))))(*(int *)(unsigned)ar6,pcVar4,pcVar11,0x36));
      if (iVar9 == 0) {
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 1;
      }
      break;
    case 1:
      if (ar4[0x10] != 0x18) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05eea8(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
        *(char *)(unsigned)((int)ar4 + 0x99) = (char)uVar3;
        ar4[3] = 0;
        ar4[1] = 0xd;
        ar4[2] = 99;
        ar4[0x210] = 0x18;
        ar4[0x10] = 0x18;
        (*(undefined1 *)(unsigned)0x8c136908) = 0x18;
        ar4[0x211] = 0x36;
        *(unsigned *)0x8c13690c = (unsigned)(unsigned long)((char *)(unsigned)0x36);
        ar4[0x212] = 0x36;
        pcVar4 = (code *)0x36;
        (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
        (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0c4e2c(((void *)0x8c0c4e2c),0x36,pcVar11,pcVar14));
      }
      break;
    case 2:
      uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05eea8(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
      *(char *)(unsigned)((int)ar4 + 0x99) = (char)uVar3;
      iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
      if (iVar9 == 7) {
        pcVar4 = (code *)(uint)ar4[0x21f];
        if (pcVar4 == (code *)0x1) {
          *(undefined1 *)(unsigned)(ar4 + 0x26) = 8;
        }
        if (ar4[0x10] != 0x17) {
          ar4[1] = 0xd;
          ar4[2] = 99;
          ar4[3] = 0;
          ar4[0x10] = 0x17;
          pcVar11 = (code *)0x17;
          ar4[0x210] = 0x17;
          (*(undefined1 *)(unsigned)0x8c136908) = 0x17;
          ar4[0x211] = 0x36;
          *(unsigned *)0x8c13690c = (unsigned)(unsigned long)((char *)(unsigned)0x36);
          ar4[0x212] = 0x36;
          pcVar4 = (code *)((undefined1 *)(unsigned)0x8c13686c);
          (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
        }
      }
      break;
    case 3:
      break;
    case 4:
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02cb7c(*(int *)(unsigned)(ar6 + 4) + 0xa8,0,pcVar11,pcVar14); });
      if (((ar4[1] == 7) || (ar4[0x10] == 8)) ||
         (pcVar13 = (code *)(uint)ar4[0x10], pcVar13 == (code *)0x9)) {
        ar4[1] = 0;
        ar4[2] = 0x4b;
        ar4[3] = 0;
        ar4[0x10] = 0;
        pcVar13 = ((void *)0x8c02cb7c);
        (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02cb7c(*(int *)(unsigned)(ar6 + 4) + 0xa8,0,0x4b,((void *)0x8c02cb7c)));
      }
      pcVar11 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 0xc));
      pcVar4 = ((void *)0x8c03598c);
      iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(pcVar11,((void *)0x8c03598c),pcVar11,pcVar13));
      if ((iVar9 == 7) && (ar4[0x10] != 0x17)) {
        if (ar4[0x21f] == 1) {
          *(undefined1 *)(unsigned)(ar4 + 0x26) = 8;
        }
        (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02ce10(*(int *)(unsigned)(ar6 + 4) + 0x90,1,pcVar11,pcVar13));
        ar4[1] = 0xd;
        ar4[2] = 99;
        ar4[3] = 0;
        ar4[0x10] = 0x17;
        ar4[0x210] = 0x17;
        (*(undefined1 *)(unsigned)0x8c136908) = 0x17;
        ar4[0x211] = 0x36;
        *(unsigned *)0x8c13690c = (unsigned)(unsigned long)((char *)(unsigned)0x36);
        ar4[0x212] = 0x36;
        pcVar4 = (code *)0x36;
        (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
      }
      break;
    default:
      pcVar4 = (code *)0x0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02cb7c(*(int *)(unsigned)(ar6 + 4) + 0xa8,0,pcVar11,pcVar14); });
      break;
    case 7:
      pcVar13 = ((void *)0x8c02cb7c);
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02cb7c(*(int *)(unsigned)(ar6 + 4) + 0xa8,0,pcVar11,((void *)0x8c02cb7c)));
      pcVar11 = (code *)(ar4 + 0x10);
      pcVar4 = ((code *)(unsigned long)*(unsigned *)(unsigned)pcVar11);
      if ((pcVar4 != (code *)0x2) || (ar4[1] != 1)) {
        ar4[3] = 0;
        ar4[1] = 1;
        ar4[2] = 99;
        ar4[0x10] = 2;
        if (ar4[0x1b] != 0) {
          (vsp = ((unsigned long)(fr0_ - 380)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x1b] + 8) + 0x78))))(ar4[0x1b],pcVar4,pcVar11,pcVar13));
          ar4[0x1b] = 0;
        }
      }
      break;
    case 8:
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02cb7c(*(int *)(unsigned)(ar6 + 4) + 0xa8,0,pcVar11,pcVar14); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02c330(*(int *)(unsigned)(ar6 + 4),0,pcVar11,pcVar14); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02c330(*(int *)(unsigned)(ar6 + 4) + 0x18,0,pcVar11,pcVar14); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02c330(*(int *)(unsigned)(ar6 + 4) + 0x60,0,pcVar11,pcVar14); });
      pcVar4 = (code *)0x0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02c330(*(int *)(unsigned)(ar6 + 4) + 0x48,0,pcVar11,pcVar14); });
      if (ar4[0x21f] == 1) {
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 9;
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_a0_035724(*(int *)(unsigned)(ar6 + 0x18),pcVar4,pcVar11,pcVar14));
      if ((char)uVar3 == '\x03') {
        pcVar4 = (code *)0x9;
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 9;
      }
      if (*(char *)(unsigned)((int)ar4 + 0x879) == '\x02') {
        if ((ar4[0x10] == 0x30) || (ar4[0x21f] == 1)) {
          ar4[1] = 0;
          ar4[2] = 0x4b;
          ar4[3] = 0;
          ar4[0x10] = 0;
          ar4[0x210] = 0;
          (*(undefined1 *)(unsigned)0x8c136908) = 0;
          ar4[0x211] = 0x36;
          *(unsigned *)0x8c13690c = (unsigned)(unsigned long)((char *)(unsigned)0x36);
          ar4[0x212] = 0x36;
          (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
        }
        else {
          ar4[0x10] = 0x30;
          ar4[1] = 0xd;
          ar4[2] = 99;
          ar4[3] = 0;
          ar4[0x10] = 0x30;
          ar4[0x210] = 0x30;
          pcVar11 = (code *)0x9c;
          pcVar4 = (code *)0x30;
          (*(undefined1 *)(unsigned)0x8c136908) = 0x30;
          ar4[0x211] = 0x36;
          *(unsigned *)0x8c13690c = (unsigned)(unsigned long)((char *)(unsigned)0x36);
          ar4[0x212] = 0x36;
          (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
        }
      }
      else {
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 9;
        if (*(char *)(unsigned)((int)ar4 + 0x879) != '\x02') {
          (vsp = ((unsigned long)(fr0_ - 380)), s_STATUS_FORMAT_030306(ar4 + 0x27,pcVar4,pcVar11,pcVar14));
        }
        (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02ce10(*(int *)(unsigned)(ar6 + 4) + 0x90,1,pcVar11,pcVar14));
        (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02cbbc(*(int *)(unsigned)(ar6 + 4) + 0x90,1,pcVar11,pcVar14));
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02c330(*(int *)(unsigned)(ar6 + 4) + 0x60,0,pcVar11,pcVar14); });
        ar4[0x10] = 0x2c;
        ar4[1] = 0xd;
        ar4[2] = 99;
        ar4[3] = 0;
        ar4[0x10] = 0x2c;
        ar4[0x210] = 0x2c;
        (*(undefined1 *)(unsigned)0x8c136908) = 0x2c;
        ar4[0x211] = 0x36;
        *(unsigned *)0x8c13690c = (unsigned)(unsigned long)((char *)(unsigned)0x36);
        ar4[0x212] = 0x36;
        pcVar4 = (code *)0xa4;
        (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
      }
      break;
    case 9:
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02cb7c(*(int *)(unsigned)(ar6 + 4) + 0xa8,0,pcVar11,pcVar14); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02c330(*(int *)(unsigned)(ar6 + 4) + 0x78,0,pcVar11,((void *)0x8c02c330)); });
      pcVar4 = (code *)0x0;
      pcVar11 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 4));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02ce00(pcVar11 + 0x78,0,pcVar11,0); });
      if (((ar4[0x10] == 0x30) || (ar4[0x10] == 0x17)) || (ar4[0x10] == 0x2c)) {
        ar4[1] = 0;
        ar4[2] = 0x4b;
        ar4[3] = 0;
        ar4[0x10] = 0;
        ar4[0x210] = 0;
        (*(undefined1 *)(unsigned)0x8c136908) = 0;
        ar4[0x211] = 0x36;
        *(unsigned *)0x8c13690c = (unsigned)(unsigned long)((char *)(unsigned)0x36);
        pcVar11 = (code *)0x848;
        pcVar4 = (code *)0x36;
        ar4[0x212] = 0x36;
        (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0301f8(ar4 + 0x27,pcVar4,pcVar11,((void *)0x8c0301f8)));
  ar7_00 = 0x91;
  iVar12 = (int)*(char *)(unsigned)((int)ar4 + 0x91);
  iVar9 = (int)*(char *)(unsigned)((int)ar4 + 0x91);
  (vsp = ((unsigned long)(fr0_ - 380)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),iVar9,iVar12,0x91));
  (vsp = ((unsigned long)(fr0_ - 380)), get_field_40_05eea0(ar4,iVar9,iVar12,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 380)), s_EVENT_ENDING_0656da(ar4,ar5,ar6,ar7_00));
  pcVar4 = ar6;
  (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c065cb0(ar4,ar5,ar6,ar7_00));
  iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),ar5,pcVar4,ar7_00));
  if (iVar9 != 2) {
    pcVar11 = ar6;
    (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0665a0(ar4,ar6,pcVar4,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05ee90(*(int *)(unsigned)(ar6 + 8),pcVar11,pcVar4,ar7_00));
    if (ar4[1] == 2) {
      iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02c518(*(int *)(unsigned)(ar6 + 4),pcVar11,pcVar4,ar7_00));
      if (iVar9 == 0) {
        if (ar4[0xe1] == -1) {
          ar4[0x10] = 0;
        }
      }
      else if (iVar9 == 1) {
        ar7_00 = ar4[0xe1];
        if (ar7_00 == -1) {
          ar4[0x10] = 0;
        }
      }
      else if (iVar9 == 3) {
        if (ar4[0xe1] == -1) {
          ar7_00 = 0x40;
          pcVar4 = (code *)0x0;
          ar4[0x10] = 0;
        }
      }
      else if (iVar9 == 4) {
        if (ar4[0xe1] == -1) {
          ar4[0x10] = 0;
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02c5ac(*(int *)(unsigned)(ar6 + 4) + 0x60,*(int *)(unsigned)(ar6 + 4) + 0x60,pcVar4,ar7_00));
        (*(undefined4 *)(fr0_ - 0x178)) = CONCAT13((char)uVar3,(int3)(*(undefined4 *)(fr0_ - 0x178)));
        if ((char)uVar3 < '\x04') {
          ar4[0x10] = 0;
        }
      }
    }
    ar5 = (code *)(ar4 + 0x10);
    if (0x35 < *(int *)(unsigned)ar5) {
      ar4[0x10] = 0;
      ar4[1] = 0;
      ar4[0xe] = 2;
    }
    if ((*(char *)(unsigned)((int)ar4 + 0x91) == '\x01') ||
       (iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),ar5,pcVar4,ar7_00)), ar4[0x10] != iVar9)) {
      pcVar4 = (code *)0x1;
      ar5 = (code *)(uint)ar4[0x10];
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c031b08(*(int *)(unsigned)(ar6 + 8),ar5,1,ar7_00));
    }
  }
  *(undefined1 *)(unsigned)((int)ar4 + 0x83) = 4;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c025f68(*(int *)(unsigned)(ar6 + 4) + 0x78,ar5,pcVar4,ar7_00));
  cVar1 = (char)uVar3;
  uVar3 = CONCAT13((char)((uint)(*(undefined4 *)(fr0_ - 0x178)) >> 0x18),CONCAT12(cVar1,(short)(*(undefined4 *)(fr0_ - 0x178))))
  ;
  iVar9 = (int)cVar1;
  if (cVar1 == '\x01') {
    iVar9 = 1;
    (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05ee84(*(int *)(unsigned)(ar6 + 0xc),1,pcVar4,ar7_00));
  }
  iVar12 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02c518(*(int *)(unsigned)(ar6 + 4),iVar9,pcVar4,ar7_00));
  if (iVar12 != -1) {
    iVar9 = 0;
    (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05ee78(*(int *)(unsigned)(ar6 + 0xc),0,pcVar4,ar7_00));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),iVar9,pcVar4,ar7_00));
  uVar2 = uVar2 & 0xffff;
  if (ar4[0x219] != uVar2) {
    uVar5 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),uVar2,pcVar4,ar7_00));
    ar4[0x219] = uVar5 & 0xffff;
    uVar6 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c025f68(*(int *)(unsigned)(ar6 + 4) + 0x78,uVar2,pcVar4,ar7_00));
    uVar3 = CONCAT22((short)((uint)uVar3 >> 0x10),CONCAT11((char)uVar6,(char)uVar3));
    iVar9 = (int)(char)uVar6;
    if (iVar9 == 1) {
      iVar9 = 0;
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02cbbc(*(int *)(unsigned)(ar6 + 4) + 0x90,0,pcVar4,((void *)0x8c02cbbc)));
    }
    iVar12 = *(int *)(unsigned)(ar6 + 0xc);
    pcVar4 = ((void *)0x8c05ee6c);
    uVar2 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_d0_05ee6c(iVar12,iVar9,((void *)0x8c05ee6c),iVar12));
    if (uVar2 == 0) {
      uVar2 = 0;
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c05ee64(*(int *)(unsigned)(ar6 + 4) + 0xf8,0,pcVar4,iVar12); });
    }
    iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02c340(*(int *)(unsigned)(ar6 + 4) + 0x90,uVar2,pcVar4,iVar12));
    if (iVar9 < 0x31) {
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0e9668(*(int *)(unsigned)(ar6 + 0xc),uVar2,pcVar4,iVar12));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0e9690(*(int *)(unsigned)(ar6 + 0xc),uVar2,pcVar4,iVar12));
    }
  }
  if (((ar4[0x10] != 0x23) || (ar4[0x10] != 0x16)) || (ar4[0x10] != 0x27)) {
    ar4[0x23] = 0;
  }
  *(undefined1 *)(unsigned)((int)ar4 + 0x82) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x21) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x85) = 0;
  uVar6 = 0x87;
  *(undefined1 *)(unsigned)((int)ar4 + 0x87) = 0;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),uVar2,pcVar4,0x87));
  *(char *)(unsigned)((int)ar4 + 0x9a) = (char)uVar3;
  iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),uVar2,pcVar4,uVar6));
  if ((iVar9 == 2) && (ar4[0x25] = 0x36, ar4[0xe1] != -1)) {
    ar5_00 = ar4 + 0x37;
    iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05edfc(((undefined1 *)(unsigned)0x8c136a1c),ar5_00,pcVar4,uVar6));
    if (iVar9 == 0) {
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0f8214(0x8c35468c,ar5_00,pcVar4,uVar6));
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c030870(ar4 + 0x27,3,pcVar4,uVar6));
      ar4[2] = 0;
      ar4[3] = 0;
      *(undefined1 *)(unsigned)(ar4 + 0x20) = 1;
      ar4[0xe1] = -1;
      ar4[0x3f] = 0;
    }
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,pcVar4,uVar6));
  return uVar3;
}

__asm__(".globl _s_STATUS_SICK_05d86e\n.set _s_STATUS_SICK_05d86e, _s_STATUS_SICK_05d86e_def\n");
