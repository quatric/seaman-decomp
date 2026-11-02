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
undefined4 s_REACTION_TITILLATE_064bb8_def(int ar4,undefined4 ar5,int ar6,char *ar7)

{
  ring[rp++ & 255] = "s_REACTION_TITILLATE_064bb8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *ar5_00;
  char cVar5;
  
  cVar5 = '\0';
  ar5_00 = ((undefined1 *)(fr0_ - 0x2c));
  puVar3 = ((undefined1 *)(unsigned)0x8c136968);
  iVar2 = 0x10;
  do {
    puVar4 = puVar3 + 1;
    *ar5_00 = *puVar3;
    puVar3 = puVar3 + 2;
    ar5_00[1] = *puVar4;
    ar5_00 = ar5_00 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = ar6;
  if (*(char *)(unsigned)(ar4 + 0x84) == '\x01') {
    if (((*(int *)(unsigned)(ar4 + 0x40) == 0x15) || (*(int *)(unsigned)(ar4 + 0x40) != 0)) ||
       (*(int *)(unsigned)(ar4 + 4) == 0xd)) {
      if (((*(int *)(unsigned)(ar4 + 0x40) == 0x15) &&
          ((*(undefined4 *)(unsigned)(ar4 + 0x40) = 0x15, *(int *)(unsigned)(ar4 + 0x874) == 6 ||
           (*(int *)(unsigned)(ar4 + 0x874) == 7)))) && (*(int *)(unsigned)(ar4 + 900) == -1)) {
        (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c030870(ar4 + 0x9c,0,ar6,ar7));
        ar7 = ((undefined1 *)(unsigned)0x8c136d3b);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); FUN_8c0303b8(ar4 + 0x9c,0x28,0,((undefined1 *)(unsigned)0x8c136d3b)); });
        *(undefined4 *)(unsigned)(ar4 + 0xfc) = 0;
        iVar2 = ar4 + 0x9c;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0f8320(0x8c35468c,*(undefined4 *)(unsigned)(ar4 + 0x388),iVar2,ar7));
        *(undefined4 *)(unsigned)(ar4 + 900) = uVar1;
        *(undefined4 *)(unsigned)(ar4 + 0x14c) = 0;
        ar5_00 = (undefined1 *)(unsigned)0x2;
        (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c030870(ar4 + 0x9c,2,iVar2,ar7));
      }
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x4b;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x15;
      *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x15;
      (*(undefined1 *)(unsigned)0x8c136908) = 0x15;
      *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x36;
      (*(undefined1 *)(unsigned)0x8c13690c) = 0x36;
      *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x36;
      (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
      ar5_00 = (undefined1 *)(unsigned)0x1;
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0fdd68(ar4 + 0x9c,1,ar6,ar7));
    }
  }
  else if (*(int *)(unsigned)(ar4 + 0x40) == 0x15) {
    *(undefined4 *)(unsigned)(ar4 + 4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 8) = 0x14;
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x840) = 0;
    (*(undefined1 *)(unsigned)0x8c136908) = 0;
  }
  if (*(char *)(unsigned)(ar4 + 0x85) == '\x01') {
    if (((*(int *)(unsigned)(ar4 + 0x40) == 0x16) || (*(int *)(unsigned)(ar4 + 0x40) != 0)) ||
       (*(int *)(unsigned)(ar4 + 4) == 0xd)) {
      if (*(int *)(unsigned)(ar4 + 0x40) == 0x16) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x16;
      }
    }
    else {
      ar5_00 = (undefined1 *)(unsigned)0x1;
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0fdd68(ar4 + 0x9c,1,iVar2,ar7));
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x4b;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x16;
      *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x16;
      (*(undefined1 *)(unsigned)0x8c136908) = 0x16;
      *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x36;
      (*(undefined1 *)(unsigned)0x8c13690c) = 0x36;
      *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x36;
      (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
    }
  }
  if (*(char *)(unsigned)(ar4 + 0x87) == '\x01') {
    if (*(int *)(unsigned)(ar4 + 0x40) == 0x14) {
      if (*(int *)(unsigned)(ar4 + 0x40) == 0x14) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x14;
      }
    }
    else if (((*(int *)(unsigned)(ar4 + 0x40) == 0) || (*(int *)(unsigned)(ar4 + 0x40) == 0x12)) ||
            (*(int *)(unsigned)(ar4 + 0x40) == 0x10)) {
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x4b;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x14;
      *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x14;
      (*(undefined1 *)(unsigned)0x8c136908) = 0x14;
      *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x36;
      (*(undefined1 *)(unsigned)0x8c13690c) = 0x36;
      *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x36;
      (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0fdd68(ar4 + 0x9c,0xffffffff,iVar2,ar7));
      ar7 = ((undefined1 *)(unsigned)0x8c136d4e);
      iVar2 = 0;
      ar5_00 = (undefined1 *)(unsigned)0x27;
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0306d4(ar4 + 0x9c,0x27,0,((undefined1 *)(unsigned)0x8c136d4e)));
    }
  }
  if (((*(char *)(unsigned)(ar4 + 0x86) == '\x01') &&
      (uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c025f68(*(int *)(unsigned)(ar6 + 4) + 0x78,ar5_00,iVar2,ar7)), (char)uVar1 != '\x01')) &&
     (uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c02bef8(*(undefined4 *)(unsigned)(ar6 + 4),ar5_00,iVar2,ar7)), 2 < (short)uVar1)) {
    if ((*(int *)(unsigned)(ar4 + 4) == 0xd) || (*(int *)(unsigned)(ar4 + 0x40) != 0)) {
      if ((*(int *)(unsigned)(ar4 + 0x40) == 0x2a) || (*(int *)(unsigned)(ar4 + 0x40) == 0x2b)) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_b8_101178(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x18) + 0x7cc),ar5_00,iVar2,ar7));
        if ((char)uVar1 == '\x01') {
          *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x2a;
          (*(undefined1 *)(unsigned)0x8c13690c) = 0x2a;
          *(undefined1 *)(unsigned)(ar4 + 0x91) = 1;
          (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0fdd68(ar4 + 0x9c,1,iVar2,ar7));
          *(int *)(unsigned)(ar4 + 0x860) = *(int *)(unsigned)(ar4 + 0x860) + 1;
        }
        uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_b8_101178(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x18) + 0x7cc),
                                    ((void *)0x8c101178),iVar2,ar7));
        if ((char)uVar1 == '\x02') {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x2b;
          *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x2b;
          (*(undefined1 *)(unsigned)0x8c13690c) = 0x2b;
          *(undefined1 *)(unsigned)(ar4 + 0x91) = 1;
          *(int *)(unsigned)(ar4 + 0x860) = *(int *)(unsigned)(ar4 + 0x860) + 1;
        }
      }
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x4b;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x29;
      *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x29;
      (*(undefined1 *)(unsigned)0x8c136908) = 0x29;
      *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x2a;
      (*(undefined1 *)(unsigned)0x8c13690c) = 0x2a;
      *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x36;
      (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
      (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x3c)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,iVar2,ar7));
      (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x3c)),iVar2,ar7));
      (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,iVar2,ar7));
      (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x4c)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,iVar2,ar7));
      (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x4c)),iVar2,ar7));
      (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,iVar2,ar7));
      if (cVar5 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x44960000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x714061e344960000;
      }
    }
  }
  else if ((*(int *)(unsigned)(ar4 + 0x40) == 0x29) || (*(int *)(unsigned)(ar4 + 0x40) == 0x2a)) {
    if ((*(int *)(unsigned)(ar4 + 0x40) == 0x2a) && (0x1e < *(int *)(unsigned)(ar4 + 0x860))) {
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0306d4(ar4 + 0x9c,0x15,0,((undefined1 *)(unsigned)0x8c136d5f)));
      *(undefined4 *)(unsigned)(ar4 + 0x860) = 0;
    }
    *(undefined4 *)(unsigned)(ar4 + 4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 8) = 0x14;
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x840) = 0;
    (*(undefined1 *)(unsigned)0x8c136908) = 0;
  }
  *(undefined1 *)(unsigned)(ar4 + 0x84) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x85) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x87) = 0;
  return 0x87;
}

__asm__(".globl _s_REACTION_TITILLATE_064bb8\n.set _s_REACTION_TITILLATE_064bb8, _s_REACTION_TITILLATE_064bb8_def\n");
