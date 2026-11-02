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
int s_EVENT_QUIZ_107596_def(unsigned char *ar4,unsigned char *ar5,unsigned char *ar6,char *ar7)

{
  ring[rp++ & 255] = "s_EVENT_QUIZ_107596";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  unsigned char *pcVar4;
  char *pcVar5;
  unsigned char *ar7_00;
  unsigned char *pcVar6;
  char cVar7;
  
  cVar7 = '\0';
  pcVar6 = ar6;
  pcVar4 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02bef8(*(int *)(unsigned)(ar6 + 4),ar5,ar6,ar7));
  if (((6 < (short)uVar1) &&
      (iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02c340(*(int *)(unsigned)(ar6 + 4) + 0x90,ar5,pcVar6,ar7)), iVar3 < 0x30)) &&
     (iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02c518(*(int *)(unsigned)(ar6 + 4),ar5,pcVar6,ar7)), iVar3 == -1)) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),ar5,pcVar6,ar7));
    pcVar6 = (unsigned char *)(unsigned)(int)(char)uVar1;
    if ((((char)uVar1 == '\x02') &&
        (iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)pcVar4 + 0x1d0))))(pcVar4,ar5,2,ar7)), iVar3 == 1)) &&
       ((iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), get_field_178_035734(*(int *)(unsigned)(ar6 + 8),ar5,pcVar6,ar7)), iVar3 == 0 &&
        (ar4[0x98] == (unsigned char)0x5)))) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0e98f0(*(int *)(unsigned)(ar6 + 0xc),ar5,pcVar6,ar7));
      if ((((char)uVar1 < '\x03') &&
          (iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02c518(*(int *)(unsigned)(ar6 + 4),ar5,pcVar6,ar7)), iVar3 == -1)) &&
         ((ar5 = ar6, iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02fcc4(ar4,ar6,pcVar6,ar7)), iVar3 == 1 &&
          ((iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637d0(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x18) + 0x7cc),ar5,pcVar6,ar7)),
           iVar3 == 0 && (iVar3 = *(int *)(unsigned)(ar4 + 0x878), iVar3 == 0)))))) {
        ar5 = ((void *)0x8c0637c8);
        uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637c8(*(int *)(unsigned)(ar6 + 0xc),((void *)0x8c0637c8),pcVar6,0));
        if ((char)uVar1 == '\0') {
          if (*(int *)(unsigned)(ar4 + 0x40) == 0x14) {
            ar7 = (char *)(unsigned)0x18;
            *(int *)(unsigned)(ar4 + 0x40) = 0x18;
          }
          else {
            uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0e98f0(*(int *)(unsigned)(ar6 + 0xc),ar5,pcVar6,iVar3));
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fa5bc(0x8c35468c,(int)(char)uVar1,pcVar6,iVar3));
            ar7 = "EVENT_QUIZ";
            pcVar6 = (unsigned char *)(unsigned)0x0;
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"EVENT_QUIZ"));
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02ce10(*(int *)(unsigned)(ar6 + 4) + 0x90,0,pcVar6,ar7));
            *(int *)(unsigned)(ar4 + 4) = 0xd;
            *(int *)(unsigned)(ar4 + 8) = 99;
            *(int *)(unsigned)(ar4 + 0xc) = 0;
            *(int *)(unsigned)(ar4 + 0x40) = 0x21;
            *(int *)(unsigned)(ar4 + 0x840) = 0x21;
            (*(undefined1 *)(unsigned)0x8c1eee30) = 0x21;
            *(int *)(unsigned)(ar4 + 0x844) = 0xb;
            (*(undefined1 *)(unsigned)0x8c1eee34) = 0xb;
            *(int *)(unsigned)(ar4 + 0x848) = 10;
            (*(undefined1 *)(unsigned)0x8c1eee38) = 10;
            ar4[0x80] = (unsigned char)0x0;
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x20)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,pcVar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x20)),pcVar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,pcVar6,ar7));
            if (cVar7 == '\0') {
              *(int *)(unsigned)(ar4 + 0x30) = 0x44960000;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x30) = 0xe444960000;
            }
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x30)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,pcVar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x30)),pcVar6,ar7));
            ar5 = (unsigned char *)(unsigned)0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,pcVar6,ar7));
          }
          goto LAB_8c107c10;
        }
      }
      ar7_00 = ((void *)0x8c0e98f0);
      uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0e98f0(*(int *)(unsigned)(ar6 + 0xc),ar5,pcVar6,((void *)0x8c0e98f0)));
      ar7 = (char *)(unsigned)ar7_00;
      if (((char)uVar1 == '\x03') &&
         (iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02c518(*(int *)(unsigned)(ar6 + 4),ar5,pcVar6,ar7_00)), ar7 = (char *)(unsigned)ar7_00,
         iVar3 == -1)) {
        pcVar6 = ((void *)0x8c035000);
        ar5 = (unsigned char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 116)), FUN_8c035000(*(int *)(unsigned)(ar6 + 4),ar5,((void *)0x8c035000),ar7_00));
        ar7 = (char *)(unsigned)ar7_00;
        if ((0 < (int)ar5) &&
           ((((iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637d0(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x18) + 0x7cc),ar5,pcVar6,ar7_00))
              , ar7 = (char *)(unsigned)ar7_00, iVar3 == 0 && ((char)ar4[0x87c] < '\x03')) &&
             (ar5 = (unsigned char *)(unsigned)0x878, *(int *)(unsigned)(ar4 + 0x878) == 0)) &&
            (uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637c8(*(int *)(unsigned)(ar6 + 0xc),0x878,pcVar6,ar7_00)), ar7 = (char *)(unsigned)ar7_00,
            (char)uVar1 == '\0')))) {
          if (*(int *)(unsigned)(ar4 + 0x40) != 0x14) {
            uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0e98f0(*(int *)(unsigned)(ar6 + 0xc),ar5,pcVar6,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fa5bc(0x8c35468c,(int)(char)uVar1,pcVar6,ar7_00));
            pcVar5 = "EVENT_QUIZ";
            uVar1 = 0;
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"EVENT_QUIZ"));
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02ce10(*(int *)(unsigned)(ar6 + 4) + 0x90,0,uVar1,pcVar5));
            *(int *)(unsigned)(ar4 + 4) = 0xd;
            *(int *)(unsigned)(ar4 + 8) = 99;
            *(int *)(unsigned)(ar4 + 0xc) = 0;
            ar7 = (char *)(unsigned)0x21;
            *(int *)(unsigned)(ar4 + 0x40) = 0x21;
            *(int *)(unsigned)(ar4 + 0x840) = 0x21;
            (*(undefined1 *)(unsigned)0x8c1eee30) = 0x21;
            pcVar6 = (unsigned char *)(unsigned)0xb;
            *(int *)(unsigned)(ar4 + 0x844) = 0xb;
            (*(undefined1 *)(unsigned)0x8c1eee34) = 0xb;
            *(int *)(unsigned)(ar4 + 0x848) = 10;
            (*(undefined1 *)(unsigned)0x8c1eee38) = 10;
            ar4[0x80] = (unsigned char)0x0;
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x40)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,0xb,0x21));
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x40)),pcVar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,pcVar6,ar7));
            if (cVar7 == '\0') {
              *(int *)(unsigned)(ar4 + 0x30) = 0x44960000;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x30) = 0xc444960000;
            }
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x50)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,pcVar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x50)),pcVar6,ar7));
            ar5 = (unsigned char *)(unsigned)0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,pcVar6,ar7));
          }
          goto LAB_8c107c10;
        }
      }
      uVar2 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),ar5,pcVar6,ar7));
      ar5 = (unsigned char *)(unsigned)0xa;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar2 & 0xffff,10,pcVar6,ar7));
      if (iVar3 == 1) {
        ar5 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x878));
        if (0 < (int)ar5) {
          (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x878),3,pcVar6,ar7));
          iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x878),0x3c,pcVar6,ar7));
          if (2 < iVar3) {
            iVar3 = 2;
          }
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fa5bc(0x8c35468c,iVar3,pcVar6,ar7));
          ar7 = "EVENT_ROCK_PUSH_INTERVAL";
          pcVar6 = (unsigned char *)(unsigned)0x0;
          ar5 = (unsigned char *)(unsigned)0x3;
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0306d4(ar4 + 0x9c,3,0,"EVENT_ROCK_PUSH_INTERVAL"));
        }
        uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0e98f0(*(int *)(unsigned)(ar6 + 0xc),ar5,pcVar6,ar7));
        if (((char)uVar1 == '\x03') &&
           (iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c035000(*(int *)(unsigned)(ar6 + 4),ar5,pcVar6,ar7)), iVar3 == 0)) {
          (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x878),3,pcVar6,ar7));
          iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x878),0x3c,pcVar6,ar7));
          if (2 < iVar3) {
            iVar3 = 2;
          }
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fa5bc(0x8c35468c,iVar3,pcVar6,ar7));
          ar7 = "EVENT_ROCK_PUSH_INTERVAL";
          pcVar6 = (unsigned char *)(unsigned)0x0;
          ar5 = (unsigned char *)(unsigned)0x3;
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0306d4(ar4 + 0x9c,3,0,"EVENT_ROCK_PUSH_INTERVAL"));
        }
      }
    }
  }
LAB_8c107c10:
  uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02bef8(*(int *)(unsigned)(ar6 + 4),ar5,pcVar6,ar7));
  if ((short)uVar1 == 3) {
    ar5 = ((void *)0x8c0637c8);
    uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637c8(*(int *)(unsigned)(ar6 + 0xc),((void *)0x8c0637c8),pcVar6,ar7));
    if ((char)uVar1 == '\0') {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 116)), get_field_a0_035724(*(int *)(unsigned)(ar6 + 0x18),ar5,pcVar6,((void *)0x8c035724)));
      pcVar6 = (unsigned char *)(unsigned)(uVar2 & 0xff);
      ar7 = (char *)(unsigned)pcVar6;
      if (pcVar6 == (unsigned char *)(unsigned)0x0) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),*(int *)(unsigned)(ar6 + 0xc),0,0));
        ar5 = (unsigned char *)(unsigned)(int)(char)uVar1;
        if (((ar5 == (unsigned char *)(unsigned)0x2) &&
            (iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02c518(*(int *)(unsigned)(ar6 + 4),2,pcVar6,ar7)), iVar3 == -1)) &&
           (iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), get_field_4_062878(*(int *)(unsigned)(ar6 + 0xc),ar5,pcVar6,ar7)), iVar3 == 1)) {
          ar5 = (unsigned char *)(unsigned)0x0;
          ({ unsigned long ri0_ = (unsigned long)(pcVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c063800(*(int *)(unsigned)(ar6 + 0xc),0,pcVar6,ar7); });
          *(int *)(unsigned)(ar4 + 0x850) = -10;
          *(int *)(unsigned)(ar4 + 0x858) = 0;
        }
      }
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02bef8(*(int *)(unsigned)(ar6 + 4),ar5,pcVar6,ar7));
  if ((short)uVar1 != 3) {
    return (int)(short)uVar1;
  }
  iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637d0(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x18) + 0x7cc),ar5,pcVar6,ar7));
  if (iVar3 != 0) {
    return iVar3;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), get_field_a0_035724(*(int *)(unsigned)(ar6 + 0x18),ar5,pcVar6,ar7));
  if ((char)uVar1 != '\0') {
    return (int)(char)uVar1;
  }
  if (*(int *)(unsigned)(ar4 + 0x850) != -10) {
    return *(int *)(unsigned)(ar4 + 0x850);
  }
  pcVar4 = (unsigned char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637c8(*(int *)(unsigned)(ar6 + 0xc),*(int *)(unsigned)(ar6 + 0xc),pcVar6,ar7));
  if ((char)pcVar4 == '\0') {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02fcc4(ar4,ar6,pcVar6,ar7));
    pcVar4 = (unsigned char *)(unsigned)0x1;
    if (iVar3 != 1) {
      if (*(int *)(unsigned)(ar4 + 900) == -1) {
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c030870(ar4 + 0x9c,0,pcVar6,ar7));
        pcVar5 = "REQUEST_ATTENTION";
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); FUN_8c0303b8(ar4 + 0x9c,10,0,"REQUEST_ATTENTION"); });
        *(int *)(unsigned)(ar4 + 0xfc) = 0;
        pcVar6 = ar4 + 0x9c;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0f8320(0x8c35468c,*(int *)(unsigned)(ar4 + 0x388),pcVar6,pcVar5));
        *(int *)(unsigned)(ar4 + 900) = iVar3;
        *(int *)(unsigned)(ar4 + 0x14c) = 0;
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c030870(ar4 + 0x9c,2,pcVar6,pcVar5));
      }
      *(int *)(unsigned)(ar4 + 0x858) = *(int *)(unsigned)(ar4 + 0x858) + 1;
      pcVar4 = ar4;
      goto LAB_8c107eb4;
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637c8(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar6,ar7));
  if (((char)uVar1 == '\0') &&
     (pcVar4 = (unsigned char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02fcc4(ar4,ar6,pcVar6,ar7)), pcVar4 == (unsigned char *)(unsigned)0x1)) {
    pcVar4 = (unsigned char *)(unsigned)0x1;
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637c0(*(int *)(unsigned)(ar6 + 0xc),1,pcVar6,ar7));
  }
LAB_8c107eb4:
  uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637c8(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar6,((void *)0x8c0637c8)));
  pcVar5 = (char *)(unsigned)(int)(char)uVar1;
  pcVar6 = (unsigned char *)(unsigned)(int)(char)uVar1;
  if ((pcVar6 == (unsigned char *)(unsigned)0x1) && (pcVar4 = ar6, iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02fcc4(ar4,ar6,1,pcVar5)), iVar3 == 1))
  {
    pcVar4 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 900));
    if (pcVar4 == (unsigned char *)(unsigned)0xffffffff) {
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c030870(ar4 + 0x9c,0,pcVar6,pcVar5));
      pcVar5 = "EVENT_GET_WORMBOX";
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); FUN_8c0303b8(ar4 + 0x9c,0x2a,0,"EVENT_GET_WORMBOX"); });
      *(int *)(unsigned)(ar4 + 0xfc) = 0;
      pcVar6 = ar4 + 0x9c;
      pcVar4 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x388));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0f8320(0x8c35468c,pcVar4,pcVar6,pcVar5));
      *(int *)(unsigned)(ar4 + 900) = iVar3;
      *(int *)(unsigned)(ar4 + 0x14c) = 1;
    }
    if ((*(int *)(unsigned)(ar4 + 0x14c) != 0) &&
       (pcVar4 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 900)), pcVar4 != (unsigned char *)(unsigned)0xffffffff)) {
      *(int *)(unsigned)(ar4 + 4) = 0xd;
      *(int *)(unsigned)(ar4 + 8) = 0x5f;
      *(int *)(unsigned)(ar4 + 0xc) = 0;
      *(int *)(unsigned)(ar4 + 0x840) = 0x14;
      (*(undefined1 *)(unsigned)0x8c1eee30) = 0x14;
      *(int *)(unsigned)(ar4 + 0x844) = 0xb;
      (*(undefined1 *)(unsigned)0x8c1eee34) = 0xb;
      *(int *)(unsigned)(ar4 + 0x848) = 10;
      (*(undefined1 *)(unsigned)0x8c1eee38) = 10;
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x60)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,pcVar6,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x60)),pcVar6,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,pcVar6,pcVar5));
      if (cVar7 == '\0') {
        *(int *)(unsigned)(ar4 + 0x30) = 0x44960000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x8c05f64044960000;
      }
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x70)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,pcVar6,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x70)),pcVar6,pcVar5));
      pcVar4 = (unsigned char *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,pcVar6,pcVar5));
      ar4[0x80] = (unsigned char)0x0;
    }
  }
  iVar3 = 0x858;
  if (300 < *(int *)(unsigned)(ar4 + 0x858)) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637c8(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar6,pcVar5));
    iVar3 = (int)(char)uVar1;
    if ((char)uVar1 == '\0') {
      *(int *)(unsigned)(ar4 + 0x850) = 0;
      iVar3 = 0x858;
      *(int *)(unsigned)(ar4 + 0x858) = 0;
    }
  }
  return iVar3;
}

__asm__(".globl _s_EVENT_QUIZ_107596\n.set _s_EVENT_QUIZ_107596, _s_EVENT_QUIZ_107596_def\n");
