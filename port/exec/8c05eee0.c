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
undefined4 Class_12a078_m2_05eee0_def(int *ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a078_m2_05eee0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  uVar2 = ar5;
  piVar3 = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02602c(ar6[6],ar5,ar6,ar7));
  if ((short)uVar1 == 3) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02bef8(ar6[1],uVar2,piVar3,ar7));
    (*(undefined4 *)(fr0_ - 0x60)) = CONCAT22((short)uVar2,(short)(*(undefined4 *)(fr0_ - 0x60)));
    piVar3 = (int *)(unsigned)(int)(short)uVar2;
    (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(ar4,ar6[6],piVar3,ar7));
  }
  iVar4 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_40_03598c(ar6[3],((void *)0x8c03598c),piVar3,ar7));
  if (iVar4 == 2) {
    (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c05f498(ar6[3],0,piVar3,ar7));
  }
  (*(undefined1 *)(unsigned)0x8c136908) = ar4[0x210];
  (*(undefined1 *)(unsigned)0x8c13690c) = ar4[0x211];
  (*(undefined1 *)(unsigned)0x8c136910) = ar4[0x212];
  uVar2 = ar5;
  piVar3 = ar6;
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c05ff40(ar4,ar5,ar6,ar7));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar6 + 8) + 0xb8))))(*ar6,uVar2,piVar3,ar7));
  if ((iVar4 == 1) && (ar4[1] != 1)) {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_6c_02f46c(*ar6,uVar2,piVar3,ar7));
    if ((iVar4 == 0) && (iVar4 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_70_05f490(*ar6,uVar2,piVar3,ar7)), iVar4 == 0)) {
      piVar3 = (int *)(unsigned)0x1b;
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0b9ed4(ar6[6],0x1b,0x1b,ar7));
      ar4[0x10] = 2;
      ar4[0xe] = 2;
      ar4[1] = 1;
      ar4[3] = 0;
      ar4[2] = 99;
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02f298(ar4,199,piVar3,ar7));
    }
    else {
      ar4[0xe] = 2;
      ar4[1] = 0xb;
      ar4[2] = 99;
      ar4[0x10] = 0xe;
      uVar2 = 0x577;
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02f298(ar4,0x577,piVar3,ar7));
      if (ar4[0x1b] != 0) {
        (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x1b] + 8) + 0x78))))(ar4[0x1b],uVar2,piVar3,ar7));
        ar4[0x1b] = 0;
      }
    }
    if (((char)ar4[0x21e] == '\x01') && (ar4[1] == 0)) {
      *(undefined1 *)(unsigned)(ar4 + 0x21e) = 0;
    }
  }
  piVar6 = ar6;
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02f20c(ar4,ar6,piVar3,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_4_05eed8(ar4,piVar6,piVar3,ar7));
  piVar3 = ar6;
  (vsp = ((unsigned long)(fr0_ - 96)), s_STATUS_SNORE_05f668(ar4,ar5,ar6,uVar2));
  if (((ar4[1] != 1) && (iVar4 = (int)(char)ar4[0x26], iVar4 < 10)) && (-1 < iVar4)) {
                    
    switch(iVar4) {
    case 0:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[0x210] = 0x2e;
      ar4[0x10] = 0x2e;
      (*(undefined1 *)(unsigned)0x8c136908) = 0x2e;
      break;
    case 1:
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[2] = 99;
      ar4[0x210] = 0x18;
      ar4[0x10] = 0x18;
      (*(undefined1 *)(unsigned)0x8c136908) = 0x18;
      break;
    case 2:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c05eea8(ar6[3],ar5,piVar3,uVar2));
      *(char *)(unsigned)((int)ar4 + 0x99) = (char)uVar1;
      break;
    case 4:
      ar5 = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x60))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c02cb7c(ar6[1] + 0xa8,0,piVar3,uVar2); });
      break;
    case 7:
      ar5 = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x60))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c02cb7c(ar6[1] + 0xa8,0,piVar3,uVar2); });
      if ((ar4[0x10] != 2) || (ar4[1] != 1)) {
        ar4[3] = 0;
        ar4[1] = 1;
        ar4[2] = 99;
        ar4[0x10] = 2;
        if (ar4[0x1b] != 0) {
          (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x1b] + 8) + 0x78))))(ar4[0x1b],ar5,piVar3,uVar2));
          ar4[0x1b] = 0;
        }
      }
      break;
    case 8:
      ar5 = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x60))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c02cb7c(ar6[1] + 0xa8,0,piVar3,uVar2); });
      if (ar4[0x21f] == 1) {
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 9;
      }
      if (ar4[0x10] != 0x2c) {
        (vsp = ((unsigned long)(fr0_ - 96)), s_STATUS_FORMAT_030306(ar4 + 0x27,ar5,piVar3,uVar2));
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02ce10(ar6[1] + 0x90,1,piVar3,uVar2));
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02cbbc(ar6[1] + 0x90,1,piVar3,uVar2));
        ar5 = 0;
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x60))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c02c330(ar6[1] + 0x60,0,piVar3,uVar2); });
        ar4[0x10] = 0x2c;
      }
      break;
    case 9:
      if (ar4[0x10] == 0x2c) {
        ar4[1] = 0;
        ar4[2] = 0x4b;
        ar4[3] = 0;
        ar4[0x10] = 0;
        ar4[0x210] = 0;
        (*(undefined1 *)(unsigned)0x8c136908) = 0;
        ar4[0x211] = 0x36;
        (*(undefined1 *)(unsigned)0x8c13690c) = 0x36;
        ar4[0x212] = 0x36;
        (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
      }
    }
  }
  if (ar4[0xe1] != -1) {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0fa2b8(0x8c35468c,ar5,piVar3,uVar2));
    if (iVar4 == 0) {
      ar4[0x25] = 0;
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c030870(ar4 + 0x27,3,piVar3,uVar2));
      ar4[1] = 0;
      ar4[0x10] = 0;
      ar4[2] = 0x19;
      *(undefined1 *)(unsigned)((int)ar4 + 0x91) = 1;
      ar4[3] = 0;
      *(undefined1 *)(unsigned)(ar4 + 0x20) = 1;
      ar4[0xe1] = -1;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0f8214(0x8c35468c,ar5,piVar3,uVar2));
    }
    ar4[0x25] = ar4[0x55];
  }
  if (ar4[0x22] == 1) {
    ar4[0x22] = 0;
  }
  piVar6 = ar6;
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0665a0(ar4,ar6,piVar3,uVar2));
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c05ee90(ar6[2],piVar6,piVar3,uVar2));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_4_05eed8(ar4,piVar6,piVar3,uVar2));
  iVar4 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c13686c) + ar4[3] * 4 + iVar4 * 0xc);
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c05f488(ar4,iVar4,piVar3,uVar2));
  if (*(char *)(unsigned)((int)ar4 + 0x91) != '\x01') {
    iVar5 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_124_027930(ar6[2],iVar4,piVar3,uVar2));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_40_05eea0(ar4,iVar4,piVar3,uVar2));
    if (iVar5 == iVar4) {
      return iVar5;
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_40_05eea0(ar4,iVar4,piVar3,uVar2));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c031b08(ar6[2],uVar1,1,uVar2));
  return uVar2;
}

__asm__(".globl _Class_12a078_m2_05eee0\n.set _Class_12a078_m2_05eee0, _Class_12a078_m2_05eee0_def\n");
