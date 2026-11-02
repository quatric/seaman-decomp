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
int s_STATUS_SUCKED_1093aa_def(int ar4,int *ar5,int *ar6,char *ar7)

{
  ring[rp++ & 255] = "s_STATUS_SUCKED_1093aa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *ar5_00;
  int *ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar6 + 8) + 0xb8))))(*ar6,ar5,ar6,ar7));
  if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 4) != 1)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_6c_02f46c(*ar6,ar5_00,ar6_00,ar7));
    if ((iVar1 == 0) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_70_05f490(*ar6,ar5_00,ar6_00,ar7)), iVar1 == 0)) {
      ar6_00 = (int *)(unsigned)0x1b;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0b9ed4(ar6[6],0xe,0x1b,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
      *(undefined4 *)(unsigned)(ar4 + 4) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 8) = 99;
      ar5_00 = (int *)(unsigned)0xc7;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f298(ar4,199,ar6_00,ar7));
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 10;
    }
    else if (*(int *)(unsigned)(ar4 + 4) != 0xb) {
      *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xb;
      *(undefined4 *)(unsigned)(ar4 + 8) = 99;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0xd;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f298(ar4,0x4af,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x840) = 0xd;
      (*(undefined1 *)(unsigned)0x8c1eee30) = 0xd;
      *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x22;
      (*(undefined1 *)(unsigned)0x8c1eee34) = 0x22;
      ar7 = "STATUS_SUCKED";
      ar6_00 = (int *)(unsigned)0x0;
      ar5_00 = (int *)(unsigned)0x19;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0306d4(ar4 + 0x9c,0x19,0,"STATUS_SUCKED"));
      if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
        (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                  (*(int *)(unsigned)(ar4 + 0x6c),ar5_00,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
      }
    }
    if ((*(char *)(unsigned)(ar4 + 0x864) == '\x01') && (*(int *)(unsigned)(ar4 + 4) == 0)) {
      *(undefined1 *)(unsigned)(ar4 + 0x864) = 0;
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02bef8(ar6[1],ar5_00,ar6_00,ar7));
  if ((short)uVar2 == 1) {
LAB_8c109510:
    iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_8_1097a0(ar6[3],ar5_00,ar6_00,ar7));
    if ((((iVar1 == 1) && (*(char *)(unsigned)(ar4 + 0x864) != '\x01')) &&
        (iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02c518(ar6[1],ar5_00,ar6_00,ar7)), iVar1 == -1)) && (*(int *)(unsigned)(ar4 + 4) != 0xd)
       ) {
      *(undefined1 *)(unsigned)(ar4 + 0x864) = 1;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f298(ar4,0x2b9,ar6_00,ar7));
      ar5_00 = (int *)(unsigned)0x0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c109798(ar6[3],0,ar6_00,ar7); });
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 4) = 6;
      *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
    }
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02bef8(ar6[1],ar5_00,ar6_00,ar7));
    (*(undefined4 *)(fr0_ - 0x54)) = CONCAT22((short)uVar2,(short)(*(undefined4 *)(fr0_ - 0x54)));
    if ((short)uVar2 == 2) goto LAB_8c109510;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_c4_066448(ar6[3],ar5_00,ar6_00,ar7));
  if (((iVar1 == 0) && (*(int *)(unsigned)(ar4 + 0x40) == 0)) && (*(int *)(unsigned)(ar4 + 900) == -1)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_13c_028d9c(ar6[1],ar5_00,ar6_00,ar7));
    if ((iVar1 == 3) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_13c_028d9c(ar6[1],ar5_00,ar6_00,ar7)), iVar1 == 4)) {
      ar5_00 = (int *)(unsigned)0xf;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,0xf,ar6_00,ar7));
      if (iVar1 < 1) {
        ar7 = (char *)(unsigned)0xa;
        ar5_00 = ar5;
        ar6_00 = ar6;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f880(ar4,ar5,ar6,10));
        if (iVar1 == 0) goto LAB_8c1096ec;
      }
      uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c03584c(ar6[3],ar5_00,ar6_00,ar7));
      if (((char)uVar2 == '\x02') && (*(char *)(unsigned)(ar4 + 0x98) < '\b')) {
        ar7 = "REACTION_FEED_FULL";
        ar6_00 = (int *)(unsigned)0x0;
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_FEED_FULL"));
        ar5_00 = (int *)(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c06643c(ar6[3],1,ar6_00,ar7));
      }
    }
    else {
      ar5_00 = (int *)(unsigned)0xf;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,0xf,ar6_00,ar7));
      if ((0 < iVar1) && (*(char *)(unsigned)(ar4 + 0x865) == '\x01')) {
        ar7 = "REACTION_FEED_FULL";
        ar6_00 = (int *)(unsigned)0x0;
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_FEED_FULL"));
        ar5_00 = (int *)(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c06643c(ar6[3],1,ar6_00,ar7));
      }
    }
  }
LAB_8c1096ec:
  iVar1 = *(int *)(unsigned)(ar4 + 0x6c);
  if (((iVar1 == 0) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_13c_028d9c(ar6[1],ar5_00,ar6_00,ar7)), iVar1 == 2)) &&
     (iVar1 = *(int *)(unsigned)(ar4 + 0x40), iVar1 == 0)) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,0xf,ar6_00,ar7));
    iVar1 = 1;
    if (((0 < iVar3) && (iVar1 = (int)*(char *)(unsigned)(ar4 + 0x865), iVar1 == 0)) &&
       ((iVar1 = *(int *)(unsigned)(ar4 + 4), iVar1 != 0xd && (iVar1 = *(int *)(unsigned)(ar4 + 4), iVar1 != 6)))) {
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f298(ar4,0x2b9,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 4) = 6;
      *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
      iVar1 = 0x865;
      *(undefined1 *)(unsigned)(ar4 + 0x865) = 1;
    }
  }
  return iVar1;
}

__asm__(".globl _s_STATUS_SUCKED_1093aa\n.set _s_STATUS_SUCKED_1093aa, _s_STATUS_SUCKED_1093aa_def\n");
