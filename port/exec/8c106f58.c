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
undefined4 s_GRAPHICS_COMMON_106f5e_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_COMMON_106f5e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 220; for (int i_ = 0; i_ < 220; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  int iVar3;
  code *ar7_00;
  char cVar4;
  
  cVar4 = '\0';
  if (((*(char *)(unsigned)(ar4 + 0x81) == '\x01') && (1 < *(int *)(unsigned)(ar4 + 0x104))) &&
     (*(int *)(unsigned)(ar4 + 4) != 0xd)) {
    iVar3 = ar6;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), get_field_124_027930(*(undefined4 *)(unsigned)(ar6 + 8),ar5,ar6,ar7));
    if (iVar2 == 0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), get_field_13c_028d9c(*(undefined4 *)(unsigned)(ar6 + 4),ar5,iVar3,ar7));
      if (iVar2 == 2) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c02602c(*(undefined4 *)(unsigned)(ar6 + 0x18),ar5,iVar3,ar7));
        *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), libgcc_divide_helper_010284(uVar1 & 0xffff,0x3c,iVar3,ar7));
        if (iVar2 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x15;
          *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x15;
          (*(undefined1 *)(unsigned)0x8c1eee30) = 0x15;
          *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x22;
          (*(undefined1 *)(unsigned)0x8c1eee34) = 0x22;
          *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x22;
          (*(undefined1 *)(unsigned)0x8c1eee38) = 0x22;
        }
        else if (iVar2 == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 0xb;
          *(undefined4 *)(unsigned)(ar4 + 0x840) = 0xb;
          (*(undefined1 *)(unsigned)0x8c1eee30) = 0xb;
          *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x1e;
          (*(undefined1 *)(unsigned)0x8c1eee34) = 0x1e;
          *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x22;
          (*(undefined1 *)(unsigned)0x8c1eee38) = 0x22;
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x40)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,iVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x40)),iVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,iVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x50)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,iVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x50)),iVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,iVar3,ar7));
          if (cVar4 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x44960000;
            *(undefined4 *)(unsigned)(ar4 + 0x78) = 0x44af0000;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x44af000044960000;
            *(undefined8 *)(unsigned)(ar4 + 0x78) = 0x84044af0000;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x14;
          *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x14;
          (*(undefined1 *)(unsigned)0x8c1eee30) = 0x14;
          *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x22;
          (*(undefined1 *)(unsigned)0x8c1eee34) = 0x22;
          *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x22;
          (*(undefined1 *)(unsigned)0x8c1eee38) = 0x22;
        }
      }
      else if ((iVar2 == 3) || (iVar2 == 4)) {
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x20)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,iVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x20)),iVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,iVar3,ar7));
        ar7_00 = ((void *)0x8c022c88);
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x30)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,iVar3,((void *)0x8c022c88)));
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x30)),iVar3,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,iVar3,ar7_00));
        if (cVar4 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x44960000;
          *(undefined4 *)(unsigned)(ar4 + 0x78) = 0x44af0000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x44af000044960000;
          *(undefined8 *)(unsigned)(ar4 + 0x78) = 0x8c1eee9044af0000;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 220)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 220)) - 8); FUN_8c0303b8(ar4 + 0x9c,0,0,"REACTION_TAP_RESPONSE"); });
        *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0x4b;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x14;
        *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x14;
        (*(undefined1 *)(unsigned)0x8c1eee30) = 0x14;
        *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x22;
        (*(undefined1 *)(unsigned)0x8c1eee34) = 0x22;
        *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x22;
        (*(undefined1 *)(unsigned)0x8c1eee38) = 0x22;
      }
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), get_field_124_027930(*(undefined4 *)(unsigned)(ar6 + 8),ar5,iVar3,ar7));
      if (iVar2 == 6) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c063810(*(int *)(unsigned)(ar6 + 4) + 0xf8,1,iVar3,ar7); });
        (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c0306d4(ar4 + 0x9c,0x22,0,"REACTION_WAKED_TAP"));
      }
    }
  }
  else if (*(char *)(unsigned)(ar4 + 0x83) == '\x02') {
    iVar3 = ar6;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), get_field_124_027930(*(undefined4 *)(unsigned)(ar6 + 8),ar5,ar6,ar7));
    if (iVar2 == 0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), get_field_13c_028d9c(*(undefined4 *)(unsigned)(ar6 + 4),ar5,iVar3,ar7));
      if (iVar2 == 2) {
        *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0x55;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x15;
        *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x15;
        (*(undefined1 *)(unsigned)0x8c1eee30) = 0x15;
        *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x22;
        (*(undefined1 *)(unsigned)0x8c1eee34) = 0x22;
        *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x22;
        (*(undefined1 *)(unsigned)0x8c1eee38) = 0x22;
      }
      else if ((iVar2 == 3) || (iVar2 == 4)) {
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x60)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,iVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x60)),iVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,iVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x70)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,iVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x70)),iVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,iVar3,ar7));
        if (cVar4 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x44960000;
          *(undefined4 *)(unsigned)(ar4 + 0x78) = 0x44af0000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x44af000044960000;
          *(undefined8 *)(unsigned)(ar4 + 0x78) = 0x84044af0000;
        }
        *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0x4b;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0xb;
        *(undefined4 *)(unsigned)(ar4 + 0x840) = 0xb;
        (*(undefined1 *)(unsigned)0x8c1eee30) = 0xb;
        *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x1e;
        (*(undefined1 *)(unsigned)0x8c1eee34) = 0x1e;
        *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x22;
        (*(undefined1 *)(unsigned)0x8c1eee38) = 0x22;
      }
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), get_field_124_027930(*(undefined4 *)(unsigned)(ar6 + 8),((void *)0x8c027930),iVar3,ar7));
      if (iVar2 == 6) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c063810(*(int *)(unsigned)(ar6 + 4) + 0xf8,2,iVar3,ar7); });
        (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c0306d4(ar4 + 0x9c,0x23,0,"REACTION_WAKED_TAP"));
      }
    }
  }
  *(undefined1 *)(unsigned)(ar4 + 0x81) = 0;
  return 0x81;
}

__asm__(".globl _s_GRAPHICS_COMMON_106f5e\n.set _s_GRAPHICS_COMMON_106f5e, _s_GRAPHICS_COMMON_106f5e_def\n");
