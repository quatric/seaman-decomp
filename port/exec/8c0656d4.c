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
undefined4 s_EVENT_ENDING_0656da_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_EVENT_ENDING_0656da";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 168; for (int i_ = 0; i_ < 168; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  code *ar5_00;
  char *ar5_01;
  undefined4 *ar6_00;
  undefined4 in_fr1 = 0;
  double dVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar5_00 = ((void *)0x8c022c4c);
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x20)),((void *)0x8c022c4c),ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 900) == -1) goto LAB_8c065be6;
  if ((*(int *)(unsigned)(ar4 + 4) == 0) && (*(int *)(unsigned)(ar4 + 0x14c) != 0)) {
    *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
    *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x12;
    (*(undefined1 *)(unsigned)0x8c136908) = 0x12;
    *(undefined4 *)(unsigned)(ar4 + 0x844) = 0xb;
    (*(undefined1 *)(unsigned)0x8c13690c) = 0xb;
    *(undefined4 *)(unsigned)(ar4 + 0x848) = 0xc;
    (*(undefined1 *)(unsigned)0x8c136910) = 0xc;
    (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x30)),ar6[5] + 0x10,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 168)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x30)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7));
    if (cVar5 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x44960000;
    }
    else {
      in_fr1 = 0x44960000;
      *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x8044960000;
    }
    *(undefined1 *)(unsigned)(ar4 + 0x80) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x40)),ar6[5] + 0x10,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x40)),ar6_00,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6_00,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 168)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 168)) - 8); FUN_8c02f670(*ar6,uVar2,ar6_00,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 168)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 168)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x50)),ar6[5] + 0x10,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x60)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6_00,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6_00,ar7));
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),in_fr1);
  }
  else {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
  }
  if (cVar4 == '\0') {
    iVar1 = (int)F32HI(dVar3);
  }
  else {
    iVar1 = (int)dVar3;
  }
  *(int *)(unsigned)(ar4 + 0x158) = iVar1;
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),SUB84(dVar3,0));
  }
  else {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
  }
  if (cVar4 == '\0') {
    iVar1 = (int)F32HI(dVar3);
  }
  else {
    iVar1 = (int)dVar3;
  }
  *(int *)(unsigned)(ar4 + 0x15c) = iVar1;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), get_field_89130_0fa740(0x8c35468c,uVar2,ar6_00,ar7));
  if ((iVar1 == 3) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), get_field_89130_0fa740(0x8c35468c,uVar2,ar6_00,ar7)), iVar1 == 5)) {
    ar5_00 = (code *)0x1;
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c065ca4(ar6[3],1,ar6_00,ar7));
  }
  else {
    ar5_00 = (code *)0x0;
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c065ca4(ar6[3],0,ar6_00,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), get_field_770_05eeb8(ar4 + 0x9c,ar5_00,ar6_00,ar7));
  if (iVar1 == 2) {
    *(undefined4 *)(unsigned)(ar4 + 0x14c) = 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6_00,ar7));
  if (iVar1 != 0) goto LAB_8c065be6;
  *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
  ar5_01 = (char *)(unsigned)0x3;
  (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c030870(ar4 + 0x9c,3,ar6_00,ar7));
  if (*(int *)(unsigned)(ar4 + 0x40) == 0xc) {
    *(undefined4 *)(unsigned)(ar4 + 4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
    *(undefined4 *)(unsigned)(ar4 + 8) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c02bef8(ar6[1],ar5_01,ar6_00,ar7));
  if ((((short)uVar2 == 3) &&
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x18c))))(ar5,ar5_01,ar6_00,ar7)), iVar1 == 0)) &&
     (*(int *)(unsigned)(ar4 + 0x10c) == 2)) {
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c0637c0(ar6[3],1,ar6_00,ar7));
    ar6_00 = (undefined4 *)(unsigned)0x1b;
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c0b9ed4(ar6[6],0x20,0x1b,ar7));
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c065c9c(ar6[3],1,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 168)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x16c))))(ar5,1,ar6_00,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x10c) = 0;
    ar5_01 = (char *)(unsigned)0x4;
    uVar2 = ar6[3];
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xa4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 168)); FUN_8c061180(uVar2,4,ar6_00,ar7); });
    *(undefined4 *)(unsigned)(ar4 + 0x854) = 0;
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c0c4e2c(uVar2,ar5_01,ar6_00,ar7));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c02bef8(ar6[1],ar5_01,ar6_00,ar7));
  if (((3 < (short)uVar2) && (uVar2 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c0637c8(ar6[3],ar5_01,ar6_00,ar7)), (char)uVar2 == '\x01')
      ) && (*(int *)(unsigned)(ar4 + 0x10c) == 7)) {
    *(undefined4 *)(unsigned)(ar4 + 0x10c) = 0;
    ar5_01 = (char *)(unsigned)0x1;
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c05f498(ar6[3],1,ar6_00,ar7));
  }
  if (((*(int *)(unsigned)(ar4 + 0x10c) == 6) || (*(int *)(unsigned)(ar4 + 0x10c) == 4)) &&
     ((uVar2 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c02bef8(ar6[1],ar5_01,ar6_00,ar7)), 3 < (short)uVar2 &&
      (uVar2 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c0637c8(ar6[3],ar5_01,ar6_00,ar7)), (char)uVar2 == '\x01')))) {
    if (*(int *)(unsigned)(ar4 + 0x10c) == 4) {
      *(undefined1 *)(unsigned)(ar4 + 0x871) = 1;
    }
    ar5_01 = (char *)(unsigned)0x4;
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c05f498(ar6[3],4,ar6_00,ar7));
  }
  if (*(int *)(unsigned)(ar4 + 0x10c) == 5) {
LAB_8c065a4a:
    *(undefined4 *)(unsigned)(ar4 + 0x87c) = 1;
    *(undefined4 *)(unsigned)(ar4 + 0x10c) = 0;
  }
  else {
    ar5_01 = ((undefined1 *)(unsigned)0x8c136c95);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c05edfc(ar4 + 0xbc,((undefined1 *)(unsigned)0x8c136c95),ar6_00,ar7));
    if (iVar1 == 0) goto LAB_8c065a4a;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c025f68(ar6[1] + 0x78,ar5_01,ar6_00,ar7));
  if (((char)uVar2 == '\x01') && (*(int *)(unsigned)(ar4 + 0x10c) == 3)) {
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c02e438(ar6[1] + 0x78,ar5_01,ar6_00,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x10c) = 0;
  }
  if (*(int *)(unsigned)(ar4 + 0x10c) == 0xf) {
    *(undefined4 *)(unsigned)(ar4 + 4) = 5;
    *(undefined4 *)(unsigned)(ar4 + 8) = 0x55;
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    *(undefined4 *)(unsigned)(ar4 + 0x840) = 5;
    (*(undefined1 *)(unsigned)0x8c136908) = 5;
    *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x36;
    (*(undefined1 *)(unsigned)0x8c13690c) = 0x36;
    *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x36;
    (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
    *(undefined4 *)(unsigned)(ar4 + 0x10c) = 0;
  }
  if ((*(int *)(unsigned)(ar4 + 0x100) < 1) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), get_field_b0_065c8c(ar6[3],ar5_01,ar6_00,ar7)), *(int *)(unsigned)(ar4 + 0x100) < iVar1)) {
    ar5_00 = (code *)0x0;
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c02af68(*ar6,0,ar6_00,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c065c80(ar6[3],*(undefined4 *)(unsigned)(ar4 + 0x100),ar6_00,ar7));
    ar5_00 = (code *)0x1;
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c02af68(*ar6,1,ar6_00,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 168)), s_STATUS_FORMAT_030306(ar4 + 0x9c,ar5_00,ar6_00,ar7));
  *(undefined1 *)(unsigned)(ar4 + 0x80) = 1;
  *(undefined4 *)(unsigned)(ar4 + 900) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0xfc) = 0;
LAB_8c065be6:
  iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6_00,ar7));
  if ((iVar1 == 0) && ((*(int *)(unsigned)(ar4 + 0x40) == 0xc || (*(int *)(unsigned)(ar4 + 0x40) == 0xb)))) {
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c030870(ar4 + 0x9c,3,ar6_00,ar7));
    *(undefined4 *)(unsigned)(ar4 + 4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
    *(undefined4 *)(unsigned)(ar4 + 8) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined1 *)(unsigned)(ar4 + 0x80) = 1;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7));
  return uVar2;
}

__asm__(".globl _s_EVENT_ENDING_0656da\n.set _s_EVENT_ENDING_0656da, _s_EVENT_ENDING_0656da_def\n");
