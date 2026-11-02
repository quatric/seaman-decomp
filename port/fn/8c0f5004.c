#include "../decls.h"
undefined4
s_No_2ld_kind_d_cat_d_food_d_r_0f5008_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar7_00;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_ac [164];
  
  cVar3 = '\0';
  uStack_b8 = *(undefined8 *)(ar4 + 0x6c);
  uStack_bc = *(undefined4 *)(ar4 + 0x28);
  FUN_8c014334(auStack_ac,ar5,ar6,ar7,s_No__2ld_kind__d_cat__d_food__d_r_8c140230);
  uStack_b8 = CONCAT44(0xffffffff,uStack_b8);
  ar7_00 = 0xd;
  uVar1 = ar6;
  noop_102824(auStack_ac,ar5,ar6,0xd,0xffffffff);
  if (cVar3 == '\0') {
    uStack_b8 = CONCAT44(*(undefined4 *)(ar4 + 0x38),uStack_b8);
                    
    uStack_b8 = *(undefined4 *)(ar4 + 0x34);
    uStack_bc = *(undefined4 *)(ar4 + 0x30);
    puVar2 = &uStack_bc;
  }
  else {
    uStack_b8 = *(undefined8 *)(ar4 + 0x38);
    uStack_bc = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x34) >> 0x20);
    puVar2 = (undefined4 *)&stack0xffffff38;
  }
  *(char **)((int)puVar2 + -4) = s_pos_x__lf_y__lf_z__lf_8c140256;
  FUN_8c014334((undefined1 *)((int)puVar2 + 0x10),ar5,uVar1,ar7_00,*(undefined4 *)((int)puVar2 + -4)
              );
  *(undefined4 *)((int)puVar2 + 8) = 0xffffffff;
  uVar1 = noop_102824((undefined1 *)((int)puVar2 + 0x10),0xfa,ar6,0xd,
                      *(undefined4 *)((int)puVar2 + 8));
  return uVar1;
}

__asm__(".globl _s_No_2ld_kind_d_cat_d_food_d_r_0f5008\n.set _s_No_2ld_kind_d_cat_d_food_d_r_0f5008, _s_No_2ld_kind_d_cat_d_food_d_r_0f5008_def\n");
