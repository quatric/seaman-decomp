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
undefined4
s_No_2ld_kind_d_cat_d_food_d_r_0f5008_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_No_2ld_kind_d_cat_d_food_d_r_0f5008";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 400; for (int i_ = 0; i_ < 400; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar7_00;
  undefined4 *puVar2;
  char cVar3;
  
  cVar3 = '\0';
  (*(undefined4 *)(fr0_ - 0xb8)) = *(undefined8 *)(unsigned)(ar4 + 0x6c);
  (*(undefined4 *)(fr0_ - 0xbc)) = *(undefined4 *)(unsigned)(ar4 + 0x28);
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c140230)); *(unsigned *)((((unsigned long)(fr0_ - 400)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 400)) - 8); FUN_8c014334(((undefined1 *)(fr0_ - 0xac)),ar5,ar6,ar7); });
  (*(undefined4 *)(fr0_ - 0xb8)) = CONCAT44(0xffffffff,(*(undefined4 *)(fr0_ - 0xb8)));
  ar7_00 = 0xd;
  uVar1 = ar6;
  ({ unsigned long ri0_ = (unsigned long)(0xffffffff); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 400)); noop_102824(((undefined1 *)(fr0_ - 0xac)),ar5,ar6,0xd); });
  if (cVar3 == '\0') {
    (*(undefined4 *)(fr0_ - 0xb8)) = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x38),(*(undefined4 *)(fr0_ - 0xb8)));
                    
    (*(undefined4 *)(fr0_ - 0xb8)) = *(undefined4 *)(unsigned)(ar4 + 0x34);
    (*(undefined4 *)(fr0_ - 0xbc)) = *(undefined4 *)(unsigned)(ar4 + 0x30);
    puVar2 = &(*(undefined4 *)(fr0_ - 0xbc));
  }
  else {
    (*(undefined4 *)(fr0_ - 0xb8)) = *(undefined8 *)(unsigned)(ar4 + 0x38);
    (*(undefined4 *)(fr0_ - 0xbc)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x34) >> 0x20);
    puVar2 = (undefined4 *)(unsigned)(fr0_ + (int)0xffffff38);
  }
  *(unsigned *)(unsigned)((int)puVar2 + -4) = ((undefined1 *)(unsigned)0x8c140256);
  ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar2 + -4)
              ); *(unsigned *)((((unsigned long)(fr0_ - 400)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 400)) - 8); FUN_8c014334((undefined1 *)(unsigned)((int)puVar2 + 0x10),ar5,uVar1,ar7_00); });
  *(undefined4 *)(unsigned)((int)puVar2 + 8) = 0xffffffff;
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(
                      *(undefined4 *)(unsigned)((int)puVar2 + 8)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 400)); noop_102824((undefined1 *)(unsigned)((int)puVar2 + 0x10),0xfa,ar6,0xd); });
  return uVar1;
}

__asm__(".globl _s_No_2ld_kind_d_cat_d_food_d_r_0f5008\n.set _s_No_2ld_kind_d_cat_d_food_d_r_0f5008, _s_No_2ld_kind_d_cat_d_food_d_r_0f5008_def\n");
