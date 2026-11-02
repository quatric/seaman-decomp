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
int FUN_8c03220c_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c03220c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2520; for (int i_ = 0; i_ < 2520; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  code *ar6_00;
  undefined1 *ar6_01;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  
  cVar7 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x1b4) == 1) {
    if ((*(undefined1 *)(unsigned)0x8c27defc) == '\0') {
      uVar4 = 0x10;
      ({ unsigned long t0_ = (unsigned long)(0x96); *(unsigned *)((((unsigned long)(fr0_ - 2520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 2520)) - 8); FUN_8c010120(0x8c27d590,((void *)0x8c022c4c),((void *)0x8c022cb0),0x10); });
      (vsp = ((unsigned long)(fr0_ - 2520)), global_list_push(0,((void *)0x8c032484),0x8c27def0,uVar4));
      (*(undefined1 *)(unsigned)0x8c27defc) = '\x01';
    }
    uVar4 = 0x10;
    ar6_00 = ((void *)0x8c022cb0);
    ({ unsigned long t0_ = (unsigned long)(0x96); *(unsigned *)((((unsigned long)(fr0_ - 2520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 2520)) - 8); FUN_8c010120(((undefined1 *)(fr0_ - 0x978)),((void *)0x8c022c4c),((void *)0x8c022cb0),0x10); });
    if ((*(undefined1 *)(unsigned)0x8c27df04) == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c27df00) = 0;
      (*(undefined1 *)(unsigned)0x8c27df04) = '\x01';
    }
    (*(undefined4 *)(fr0_ - 0x9b8)) = 0xffffffff;
    (*(unsigned *)(fr0_ - 0x988) = (unsigned)(unsigned long)(&(*(undefined4 *)(fr0_ - 0x994))));
    (*(unsigned *)(fr0_ - 0x984) = (unsigned)(unsigned long)(&(*(undefined4 *)(fr0_ - 0x9b8))));
    (*(undefined4 *)(fr0_ - 0x980)) = 0;
    (*(undefined4 *)(fr0_ - 0x97c)) = 1;
    (vsp = ((unsigned long)(fr0_ - 2520)), Vec3_assign((*(undefined4 *)(unsigned)(unsigned)0x8c27df00) * 0x10 + -0x73d82a70,*ar5,ar6_00,uVar4));
    iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c27df00);
    iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c27df00) + 1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27df00) = (*(undefined4 *)(unsigned)(unsigned)0x8c27df00) + 1;
    if (0x95 < iVar2) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c27df00) = 0;
    }
    iVar2 = iVar1;
    for (iVar5 = 0; iVar5 < 0x96; iVar5 = iVar5 + 1) {
      if (0x95 < iVar2) {
        iVar2 = iVar2 + -0x96;
      }
      puVar3 = (undefined8 *)(unsigned)(iVar2 * 0x10 + -0x73d82a70);
      if (cVar7 == '\0') {
        (*(undefined4 *)(fr0_ - 0x994)) = *(undefined4 *)(unsigned)puVar3;
      }
      else {
        (*(undefined4 *)(fr0_ - 0x994)) = (undefined4)*puVar3;
      }
      puVar3 = (undefined8 *)(unsigned)(iVar2 * 0x10 + -0x73d82a6c);
      if (cVar7 == '\0') {
        (*(undefined4 *)(fr0_ - 0x990)) = *(undefined4 *)(unsigned)puVar3;
      }
      else {
        (*(undefined4 *)(fr0_ - 0x990)) = (undefined4)*puVar3;
      }
      puVar3 = (undefined8 *)(unsigned)(iVar2 * 0x10 + -0x73d82a68);
      if (cVar7 == '\0') {
        (*(undefined4 *)(fr0_ - 0x98c)) = *(undefined4 *)(unsigned)puVar3;
      }
      else {
        uVar6 = *puVar3;
        (*(undefined4 *)(fr0_ - 0x98c)) = (undefined4)uVar6;
        (*(unsigned *)(fr0_ - 0x988) = (unsigned)(unsigned long)((undefined4 *)(unsigned)((ulonglong)uVar6 >> 0x20)));
      }
      if (iVar1 < 0) {
        iVar1 = 0x95;
      }
      (*(int *)(fr0_ - 0x9d4)) = iVar1;
      (vsp = ((unsigned long)(fr0_ - 2520)), Vec3_assign(((undefined1 *)(fr0_ - 0x978)) + iVar5 * 0x10,iVar1 * 0x10 + -0x73d82a70,ar6_00,uVar4));
      ar6_00 = (code *)0x0;
      (vsp = ((unsigned long)(fr0_ - 2520)), FUN_8c234fd0(((undefined4 * *)(fr0_ - 0x988)),(*(undefined4 *)(fr0_ - 0x97c)),0,uVar4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    }
    ar7 = 0x96;
    ar6 = 0x10;
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x9d4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 2520)); vec_delete_array(((undefined1 *)(fr0_ - 0x978)),((void *)0x8c022cb0),0x10,0x96); });
  }
  if (*(int *)(unsigned)(ar4 + 0x1b8) == 1) {
    ar6 = 0;
    (vsp = ((unsigned long)(fr0_ - 2520)), FUN_8c234d68(ar4 + 0x17c,*(int *)(unsigned)(ar4 + 0x188) + -1,0,ar7));
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x1c0);
  if (iVar1 == 1) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9a4))); *(unsigned *)((((unsigned long)(fr0_ - 2520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 2520)) - 8); Vec3_scale(ar4 + 0x80,ar4 + 0x48,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9b4))); *(unsigned *)((((unsigned long)(fr0_ - 2520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 2520)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x9a4)),((undefined1 *)(unsigned)0x8c132bf8),ar6,ar7); });
    uVar4 = 0xffff0000;
    ar6_01 = ((undefined1 *)(fr0_ - 0x9b4));
    (vsp = ((unsigned long)(fr0_ - 2520)), FUN_8c032cb8(ar4,*ar5,ar6_01,0xffff0000));
    (vsp = ((unsigned long)(fr0_ - 2520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9b4)),0xffffffff,ar6_01,uVar4));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 2520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9a4)),0xffffffff,ar6_01,uVar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c03220c\n.set _FUN_8c03220c, _FUN_8c03220c_def\n");
