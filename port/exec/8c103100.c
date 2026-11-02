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
undefined4 s_REQUEST_SLEEP_10310a_def(int *ar4,code *ar5,code *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_REQUEST_SLEEP_10310a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 268; for (int i_ = 0; i_ < 268; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  char *ar7_00;
  code *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *ar5_00;
  int iVar9;
  code *pcVar10;
  int *ar5_01;
  undefined4 uVar11;
  
  puVar8 = ((undefined1 *)(fr0_ - 0x38));
  puVar6 = ((undefined1 *)(unsigned)0x8c1eee70);
  ar5_00 = (undefined1 *)(unsigned)0x10;
  do {
    puVar7 = puVar6 + 1;
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 2;
    puVar8[1] = *puVar7;
    puVar8 = puVar8 + 2;
    ar5_00 = ar5_00 + -1;
  } while (ar5_00 != (undefined1 *)(unsigned)0x0);
  pcVar2 = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),0,ar6,ar7));
  if ((short)uVar1 == 3) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02bef8(*(int *)(unsigned)(ar6 + 4),ar5_00,pcVar2,ar7));
    pcVar2 = (code *)(int)(short)uVar1;
    ar5_00 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 0x18));
    (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(ar4,ar5_00,pcVar2,ar7));
  }
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c27d430) == 1) && (ar4[0x21d] == 0)) {
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c109e40(ar4,ar6,pcVar2,ar7));
    ar5_00 = ((undefined1 *)(unsigned)0x8c27d430);
    (*(undefined4 *)(unsigned)(unsigned)0x8c27d430) = 0;
  }
  if (*(char *)(unsigned)((int)ar4 + 0x9b) == '\x01') {
    *(undefined1 *)(unsigned)((int)ar4 + 0x865) = 0;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02bef8(*(int *)(unsigned)(ar6 + 4),ar5_00,pcVar2,ar7));
    (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(ar4,*(int *)(unsigned)(ar6 + 0x18),(int)(short)uVar1,ar7));
  }
  uVar11 = 0x9c;
  (*(undefined1 *)(unsigned)0x8c1eee30) = ar4[0x210];
  (*(undefined1 *)(unsigned)0x8c1eee34) = ar4[0x211];
  iVar9 = ar4[0x212];
  (*(undefined1 *)(unsigned)0x8c1eee38) = iVar9;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_13c_028d9c(*(int *)(unsigned)(ar6 + 4),iVar9,0x9c,ar7));
  ar4[0x218] = iVar3;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02bef8(*(int *)(unsigned)(ar6 + 4),iVar9,uVar11,ar7));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c030d04(ar4 + 0x27,(int)(short)uVar1,uVar11,ar7));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c104f5c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 268)), s_STATUS_SUCKED_1093aa(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 268)), s_STATUS_LIFE_1097b2(ar4,ar5,ar6,ar7));
  pcVar2 = ar5;
  pcVar10 = ar6;
  (vsp = ((unsigned long)(fr0_ - 268)), s_IDLEACTION_TREMOR_1091d0(ar4,ar5,ar6,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,ar7));
  if (iVar3 != 2) {
    pcVar2 = ar6;
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02f20c(ar4,ar6,pcVar10,ar7));
  }
  ar7_00 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 268)), get_field_4_05eed8(ar4,pcVar2,pcVar10,ar7));
  pcVar2 = ar5;
  pcVar10 = ar6;
  (vsp = ((unsigned long)(fr0_ - 268)), s_STATUS_SNORE_10485e(ar4,ar5,ar6,ar7_00));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,ar7_00));
  if ((iVar3 != 2) &&
     (iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_178_035734(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,ar7_00)), iVar3 == 0)) {
    pcVar2 = ar5;
    pcVar10 = ar6;
    (vsp = ((unsigned long)(fr0_ - 268)), s_REACTION_TITILLATE_1080e0(ar4,ar5,ar6,ar7_00));
  }
  iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,ar7_00));
  if (iVar3 != 2) {
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02e8e0(ar4 + 0x207,1,pcVar10,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 268)), s_GRAPHICS_COMMON_106f5e(ar4,ar5,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 268)), s_GRATIFIC_RID_HOT_108562(ar4,ar5,ar6,ar7_00));
    pcVar2 = ar5;
    pcVar10 = ar6;
    (vsp = ((unsigned long)(fr0_ - 268)), s_REACTION_TEMP_LACK_106c8a(ar4,ar5,ar6,ar7_00));
  }
  iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,ar7_00));
  if (iVar3 == 0) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,ar7_00));
    if ((iVar3 != 2) && (ar4[1] == 0)) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_24_05eed0(*(int *)(unsigned)(ar6 + 4) + 0xf8,pcVar2,pcVar10,ar7_00));
      if (iVar3 == 1) {
        uVar5 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar2,pcVar10,ar7_00));
        pcVar2 = (code *)0x7;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), libgcc_divide_helper_01031c(uVar5 & 0xffff,7,pcVar10,ar7_00));
        if ((iVar3 == 1) && (ar4[0xe1] == -1)) {
          ar7_00 = "REQUEST_SLEEP";
          pcVar10 = (code *)0x0;
          pcVar2 = (code *)0x0;
          (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0306d4(ar4 + 0x27,0,0,"REQUEST_SLEEP"));
        }
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),pcVar2,pcVar10,ar7_00));
      if ((char)uVar1 == '\0') {
        uVar5 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar2,pcVar10,ar7_00));
        pcVar2 = (code *)0x7;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), libgcc_divide_helper_01031c(uVar5 & 0xffff,7,pcVar10,ar7_00));
        if ((iVar3 == 1) && (ar4[0xe1] == -1)) {
          if (ar4[0x223] == 1) {
            ar7_00 = "REQUEST_WAKE_UP";
            pcVar10 = (code *)0x0;
            (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0306d4(ar4 + 0x27,0x21,0,"REQUEST_WAKE_UP"));
          }
          else {
            ar7_00 = "REQUEST_WANT_LIGHT";
            pcVar10 = (code *)0x0;
            (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0306d4(ar4 + 0x27,0x21,0,"REQUEST_WANT_LIGHT"));
          }
          pcVar2 = (code *)0x0;
          ar4[0x223] = 0;
        }
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),pcVar2,pcVar10,ar7_00));
      if (*(char *)(unsigned)((int)ar4 + 0x9a) != (char)uVar1) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,ar7_00));
        if (iVar3 != 2) {
          uVar5 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar2,pcVar10,ar7_00));
          pcVar2 = (code *)(uVar5 & 0xffff);
          if ((code *)0x3 < pcVar2) {
            uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),pcVar2,pcVar10,ar7_00));
            if ((char)uVar1 == '\0') {
              ar7_00 = "STATUS_LIGHT_OFF";
              pcVar10 = (code *)0x0;
              pcVar2 = (code *)0xa;
              (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0306d4(ar4 + 0x27,10,0,"STATUS_LIGHT_OFF"));
            }
            else {
              uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),pcVar2,pcVar10,ar7_00));
              if (*(char *)(unsigned)((int)ar4 + 0x9a) < (char)uVar1) {
                ar7_00 = "STATUS_LIGHT";
                pcVar10 = (code *)0x0;
                pcVar2 = (code *)0x0;
                (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0306d4(ar4 + 0x27,0,0,"STATUS_LIGHT"));
              }
            }
          }
        }
        uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),pcVar2,pcVar10,ar7_00));
        *(char *)(unsigned)((int)ar4 + 0x9a) = (char)uVar1;
      }
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,ar7_00));
    if (iVar3 != 2) {
      pcVar2 = ar5;
      pcVar10 = ar6;
      (vsp = ((unsigned long)(fr0_ - 268)), s_EVENT_QUIZ_107596(ar4,ar5,ar6,ar7_00));
    }
    if ((ar4[0x10] != 2) &&
       (iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_770_05eeb8(ar4 + 0x27,pcVar2,pcVar10,ar7_00)), iVar3 == 1)) {
      if (ar4[0xe1] == -1) {
        if ((char)ar4[0x26] < '\0') {
          ar4[0x25] = 0;
          pcVar2 = (code *)0x3;
          (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c030870(ar4 + 0x27,3,pcVar10,ar7_00));
          ar4[1] = 0;
          ar4[0x10] = 0;
          ar4[2] = 0x19;
          ar4[3] = 0;
          pcVar10 = (code *)0x1;
          *(undefined1 *)(unsigned)(ar4 + 0x20) = 1;
        }
        else {
          pcVar10 = (code *)(ar4 + 0x27);
          pcVar2 = (code *)(uint)ar4[0xe2];
          iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0f8320(0x8c35468c,pcVar2,pcVar10,ar7_00));
          ar4[0xe1] = iVar3;
        }
      }
      else {
        pcVar2 = (code *)0x2;
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c030870(ar4 + 0x27,2,pcVar10,ar7_00));
      }
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,ar7_00));
    if (((iVar3 != 2) || (pcVar2 = (code *)(ar4 + 0x10), *(int *)(unsigned)pcVar2 != 2)) &&
       (uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05eeb0(*(int *)(unsigned)(ar6 + 4) + 0xa8,pcVar2,pcVar10,ar7_00)), (char)uVar1 == '\x01')
       ) {
      pcVar10 = ((void *)0x8c025f70);
      pcVar2 = (code *)(vsp = ((unsigned long)(fr0_ - 268)), get_field_140_025f70(*(int *)(unsigned)(ar6 + 4),pcVar2,((void *)0x8c025f70),ar7_00));
      if (pcVar2 == (code *)0x0) {
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 10;
        pcVar10 = (code *)0x1b;
        pcVar2 = (code *)0x14;
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0b9ed4(*(int *)(unsigned)(ar6 + 0x18),0x14,0x1b,ar7_00));
      }
    }
  }
  pcVar4 = (code *)ar7_00;
  if ((((ar4[0x10] == 0) || (ar4[0x10] == 6)) &&
      ((ar4[1] != 7 || (pcVar2 = (code *)(int)(char)ar4[0x26], (char)ar4[0x26] != '\x04')))) &&
     ((*(char *)(unsigned)((int)ar4 + 0x83) == '\0' || (*(char *)(unsigned)((int)ar4 + 0x83) == '\x01')))) {
    pcVar2 = ar5;
    pcVar10 = ar6;
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c10862c(ar4,ar5,ar6,ar7_00));
    pcVar4 = (code *)ar7_00;
  }
  iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,pcVar4));
  if (((iVar3 != 2) && (iVar3 = (int)(char)ar4[0x26], iVar3 < 0xb)) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      pcVar2 = (code *)0x2;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar5 + 0x11c))))(ar5,2,pcVar10,pcVar4));
      if (iVar3 == 0) {
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 3;
      }
      else {
        pcVar4 = (code *)0x5f;
        ar4[2] = 0x5f;
        ar4[3] = 0;
        ar4[1] = 0xd;
        ar4[0x210] = 9;
        ar4[0x10] = 9;
        (*(undefined1 *)(unsigned)0x8c1eee30) = 9;
      }
      break;
    case 1:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      uVar1 = 0x840;
      ar4[0x210] = 0x1c;
      ar4[0x10] = 0x1c;
      (*(undefined1 *)(unsigned)0x8c1eee30) = 0x1c;
      uVar5 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),0x840,pcVar10,pcVar4));
      if (ar4[0x217] != (uVar5 & 0xffff)) {
        uVar5 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),uVar1,pcVar10,pcVar4));
        ar4[0x217] = uVar5 & 0xffff;
        ar4[0x214] = ar4[0x214] + 1;
        if (ar4[0x214] == 600) {
          *(undefined1 *)(unsigned)(ar4 + 0x26) = 2;
        }
      }
      pcVar2 = (code *)0x2;
      pcVar4 = (code *)(vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar5 + 0x11c))))(ar5,2,pcVar10,pcVar4));
      if (pcVar4 == (code *)0x0) {
        pcVar4 = (code *)0x98;
        pcVar10 = (code *)0x3;
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 3;
      }
      break;
    case 2:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[0x210] = 8;
      ar4[0x10] = 8;
      (*(undefined1 *)(unsigned)0x8c1eee30) = 8;
      pcVar2 = (code *)0x2;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar5 + 0x11c))))(ar5,2,pcVar10,pcVar4));
      if (iVar3 == 0) {
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 3;
      }
      break;
    case 3:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05eea8(*(int *)(unsigned)(ar6 + 0xc),pcVar2,pcVar10,pcVar4));
      *(char *)(unsigned)((int)ar4 + 0x99) = (char)uVar1;
      break;
    case 4:
      pcVar4 = (code *)(uint)ar4[0xe1];
      if (pcVar4 != (code *)0xffffffff) {
        pcVar4 = (code *)0xdc;
        pcVar2 = (code *)(ar4 + 0x37);
        pcVar10 = pcVar2;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c1041fc("start",pcVar2,pcVar2,0xdc));
        if (iVar3 == 0) {
          pcVar4 = ((void *)0x8c0f8214);
          (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0f8214(0x8c35468c,pcVar2,pcVar10,((void *)0x8c0f8214)));
          pcVar10 = (code *)0x3;
          (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c030870(ar4 + 0x27,3,3,pcVar4));
          *(undefined1 *)(unsigned)(ar4 + 0x20) = 1;
          pcVar2 = (code *)0x384;
          ar4[0xe1] = -1;
          ar4[0x3f] = 0;
        }
      }
      if ((ar4[1] != 7) && (ar4[0xe1] != -1)) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c1041ec(ar4 + 0x27,pcVar2,pcVar10,pcVar4));
        pcVar2 = (code *)(vsp = ((unsigned long)(fr0_ - 268)), FUN_8c1041fc(uVar1,((undefined1 *)(unsigned)0x8c1eef1a),pcVar10,pcVar4));
        if (pcVar2 == (code *)0x0) {
          (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0f8214(0x8c35468c,0,pcVar10,pcVar4));
          ar4[0xe1] = -1;
        }
      }
      break;
    default:
      pcVar2 = (code *)0x0;
      pcVar4 = ((void *)0x8c02cb7c);
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02cb7c(*(int *)(unsigned)(ar6 + 4) + 0xa8,0,pcVar10,((void *)0x8c02cb7c)));
      break;
    case 7:
      pcVar4 = (code *)0x0;
      pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 4));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x108))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 268)); FUN_8c02cb7c(pcVar10 + 0xa8,0,pcVar10,0); });
      pcVar2 = (code *)0x1;
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02cb74(*(int *)(unsigned)(ar6 + 4) + 0xa8,1,pcVar10,pcVar4));
      break;
    case 8:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02d3e0(*(int *)(unsigned)(ar6 + 4) + 0x90,pcVar2,pcVar10,pcVar4));
      uVar11 = CONCAT13((char)uVar1,(int3)(*(undefined4 *)(fr0_ - 0x108)));
      pcVar4 = (code *)(int)(char)uVar1;
      if (pcVar4 == (code *)0x1) {
        pcVar4 = (code *)0x98;
        pcVar10 = (code *)0xa;
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 10;
      }
      else {
        if (ar4[0x10] != 0x1d) {
          ar4[2] = 99;
          ar4[3] = 0;
          ar4[1] = 0xd;
          ar4[0x210] = 0x1d;
          ar4[0x10] = 0x1d;
          (*(undefined1 *)(unsigned)0x8c1eee30) = 0x1d;
          uVar1 = 0;
          (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02ce10(*(int *)(unsigned)(ar6 + 4) + 0x90,0,pcVar10,pcVar4));
          (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0fa6c8(0x8c35468c,uVar1,pcVar10,pcVar4));
        }
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02cbbc(*(int *)(unsigned)(ar6 + 4) + 0x90,0,pcVar10,pcVar4));
        pcVar10 = (code *)(*(int *)(unsigned)(ar6 + 4) + 0x18);
        ({ unsigned long ri0_ = (unsigned long)(uVar11); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 268)); FUN_8c1041e4(pcVar10,0,pcVar10,pcVar4); });
        pcVar2 = (code *)0x0;
        ({ unsigned long ri0_ = (unsigned long)(uVar11); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 268)); FUN_8c1041e4(*(int *)(unsigned)(ar6 + 4),0,pcVar10,pcVar4); });
      }
      break;
    case 9:
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[2] = 99;
      ar4[0x210] = 0x13;
      ar4[0x10] = 0x13;
      (*(undefined1 *)(unsigned)0x8c1eee30) = 0x13;
      pcVar10 = (code *)0x0;
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02ce10(*(int *)(unsigned)(ar6 + 4) + 0x90,0,0,pcVar4));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x108))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 268)); FUN_8c1041e4(*(int *)(unsigned)(ar6 + 4) + 0x18,0,pcVar10,pcVar4); });
      pcVar2 = (code *)0x0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x108))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 268)); FUN_8c1041e4(*(int *)(unsigned)(ar6 + 4),0,pcVar10,pcVar4); });
      break;
    case 10:
      if ((ar4[0x10] != 2) || (ar4[1] != 1)) {
        ar4[3] = 0;
        ar4[1] = 1;
        ar4[2] = 99;
        pcVar10 = (code *)0x2;
        ar4[0x10] = 2;
        pcVar2 = (code *)(ar4 + 0x1b);
        if (*(int *)(unsigned)pcVar2 != 0) {
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4[0x1b] + 8));
          (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((pcVar10 + 0x78))))(ar4[0x1b],pcVar2,pcVar10,pcVar4));
          ar4[0x1b] = 0;
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0301f8(ar4 + 0x27,pcVar2,pcVar10,pcVar4));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c1089e4(ar4,ar5,ar6,pcVar4));
  pcVar2 = ar6;
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c108f3c(ar4,ar5,ar6,pcVar4));
  pcVar10 = ((void *)0x8c027930);
  iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),((void *)0x8c027930),pcVar2,pcVar4));
  if (iVar3 != 2) {
    pcVar10 = ar6;
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c109b18(ar4,ar6,pcVar2,pcVar4));
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05ee90(*(int *)(unsigned)(ar6 + 8),pcVar10,pcVar2,pcVar4));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_4_05eed8(ar4,pcVar10,pcVar2,pcVar4));
    uVar1 = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1eed94) + ar4[3] * 4 + iVar3 * 0xc);
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05f488(ar4,uVar1,pcVar2,pcVar4));
    if ((ar4[1] == 2) &&
       (pcVar4 = (code *)(vsp = ((unsigned long)(fr0_ - 268)), get_field_a0_035724(*(int *)(unsigned)(ar6 + 0x18),uVar1,pcVar2,pcVar4)),
       (char)pcVar4 != '\x02')) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02c518(*(int *)(unsigned)(ar6 + 4),uVar1,pcVar2,pcVar4));
      if (iVar3 == 0) {
        if (ar4[0xe1] == -1) {
          ar4[0x10] = 0;
        }
      }
      else if (iVar3 == 1) {
        if (ar4[0xe1] == -1) {
          ar4[0x10] = 0;
        }
      }
      else if (iVar3 == 2) {
        if (ar4[0xe1] == -1) {
          ar4[0x10] = 0;
        }
      }
      else if (iVar3 == 4) {
        uVar1 = 900;
        if (ar4[0xe1] == -1) {
          ar4[0x10] = 0;
        }
        uVar11 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02c5ac(*(int *)(unsigned)(ar6 + 4) + 0x60,900,pcVar2,pcVar4));
        if ((char)uVar11 < '\x04') {
          ar4[0x10] = 0;
        }
      }
    }
    if ((*(char *)(unsigned)((int)ar4 + 0x91) == '\x01') ||
       (pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),uVar1,pcVar2,pcVar4)),
       (code *)(uint)ar4[0x10] != pcVar10)) {
      pcVar2 = (code *)0x1;
      pcVar10 = (code *)(uint)ar4[0x10];
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c031b08(*(int *)(unsigned)(ar6 + 8),pcVar10,1,pcVar4));
    }
  }
  *(undefined1 *)(unsigned)((int)ar4 + 0x83) = 4;
  pcVar4 = (code *)(vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02c518(*(int *)(unsigned)(ar6 + 4),pcVar10,pcVar2,pcVar4));
  if (pcVar4 != (code *)0xffffffff) {
    pcVar2 = (code *)0x0;
    pcVar10 = (code *)0x0;
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c1041d8(*(int *)(unsigned)(ar6 + 0xc),0,0,pcVar4));
  }
  uVar5 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar10,pcVar2,pcVar4));
  if (ar4[0x217] != (uVar5 & 0xffff)) {
    uVar5 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar10,pcVar2,pcVar4));
    ar4[0x217] = uVar5 & 0xffff;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02c340(*(int *)(unsigned)(ar6 + 4) + 0x90,pcVar10,pcVar2,pcVar4));
    if (iVar3 < 0x31) {
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0e9668(*(int *)(unsigned)(ar6 + 0xc),pcVar10,pcVar2,pcVar4));
    }
    else {
      pcVar4 = ((void *)0x8c0e9690);
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0e9690(*(int *)(unsigned)(ar6 + 0xc),pcVar10,pcVar2,((void *)0x8c0e9690)));
    }
    iVar9 = *(int *)(unsigned)(ar6 + 0xc);
    iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_cc_1041cc(iVar9,pcVar10,iVar9,pcVar4));
    if (iVar3 == 0) {
      pcVar10 = (code *)0x0;
      pcVar4 = ((void *)0x8c05ee64);
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05ee64(*(int *)(unsigned)(ar6 + 4) + 0xf8,0,iVar9,((void *)0x8c05ee64)));
    }
    pcVar2 = (code *)0x878;
    if (0 < ar4[0x21e]) {
      pcVar10 = (code *)(uint)ar4[0x21e];
      ar4[0x21e] = (int)(pcVar10 + -1);
    }
  }
  if ((ar4[0x10] != 0x1d) || (ar4[0x10] != 0x1b)) {
    ar4[0x23] = 0;
  }
  iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar10,pcVar2,pcVar4));
  if ((iVar3 == 2) && (ar4[0x25] = 0x36, ar4[0xe1] != -1)) {
    ar5_01 = ar4 + 0x37;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c1041fc("start",ar5_01,pcVar2,pcVar4));
    if (iVar3 == 0) {
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0f8214(0x8c35468c,ar5_01,pcVar2,pcVar4));
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c030870(ar4 + 0x27,3,ar4 + 0x27,0x9c));
      ar4[2] = 0;
      ar4[3] = 0;
      *(undefined1 *)(unsigned)(ar4 + 0x20) = 1;
      ar4[0xe1] = -1;
      ar4[0x3f] = 0;
    }
  }
  *(undefined1 *)(unsigned)((int)ar4 + 0x82) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x21) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x85) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x87) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),*(int *)(unsigned)(ar6 + 0xc),0,0x87));
  *(char *)(unsigned)((int)ar4 + 0x9a) = (char)uVar1;
  return 0x9a;
}

__asm__(".globl _s_REQUEST_SLEEP_10310a\n.set _s_REQUEST_SLEEP_10310a, _s_REQUEST_SLEEP_10310a_def\n");
