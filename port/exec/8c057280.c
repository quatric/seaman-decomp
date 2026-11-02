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
undefined4 FUN_8c057280_def(undefined **ar4,undefined **ar5,undefined **ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c057280";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 264; for (int i_ = 0; i_ < 264; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint in_fr1 = 0;
  char cVar8;
  
  cVar8 = '\0';
  uVar7 = 1;
  ppuVar5 = ar5;
  ppuVar4 = ar6;
  do {
    puVar2 = ar4[0x4b];
    if ((0xc < (int)puVar2) || ((int)puVar2 < 0)) goto switchD_8c0572ba_caseD_5;
    ppuVar4 = &(*(undefined1 *)(unsigned)0x8c0572c4);
                    
    switch((uint)puVar2) {
    case 0x0:
      ar4[0xb] = (undefined *)(unsigned)0x0;
      if (ar6 == (undefined **)(unsigned)0x1) {
        ar4[0x4b] = ar4[0x4b] + 1;
        ppuVar5 = ar4;
        ppuVar4 = &(*(undefined1 *)(unsigned)0x8c0572c4);
      }
      else {
        ar4[0x4b] = (undefined *)(unsigned)0xa;
      }
      break;
    case 0x1:
      ar4[0xae] = (undefined *)(unsigned)0x2;
      (vsp = ((unsigned long)(fr0_ - 264)), vec3_clear(ar4 + 0xaa,((void *)0x8c014e20),&(*(undefined1 *)(unsigned)0x8c0572c4),ar7));
      pcVar6 = ((void *)0x8c014e20);
      (vsp = ((unsigned long)(fr0_ - 264)), vec3_clear(ar4 + 0xb5,((void *)0x8c014e20),ppuVar4,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c02a1fc(ar4 + 0xb2,pcVar6,ppuVar4,ar7));
      if (cVar8 == '\0') {
        ar4[10] = (undefined *)(unsigned)0x0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 10) = (ulonglong)in_fr1;
      }
      ar4[0x4b] = ar4[0x4b] + 1;
      goto switchD_8c0572ba_caseD_5;
    case 0x2:
      ar7 = (code *)(uint)ar4[0x91];
      uVar3 = 0x1e;
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c033474(ar4,0x1e,ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x24)),uVar3,ar5,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c023334(ar4 + 5,((undefined1 *)(fr0_ - 0x24)),ar5,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar5,ar7));
      if (iVar1 == 3) {
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x30)),uVar3,ar5,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); FUN_8c023484(ar4 + 5,((undefined1 *)(fr0_ - 0x30)),ar5,ar7); });
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_assign(ar4 + 5,((undefined1 *)(fr0_ - 0x40)),ar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar5,ar7));
        ar7 = (code *)0x0;
        ar5 = (undefined **)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0x2f,0xffffffff,0));
      }
      else if (iVar1 == 4) {
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x4c)),uVar3,ar5,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); FUN_8c023484(ar4 + 5,((undefined1 *)(fr0_ - 0x4c)),ar5,ar7); });
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_assign(ar4 + 5,((undefined1 *)(fr0_ - 0x5c)),ar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), object_dtor_delete(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar5,ar7));
        ar7 = (code *)0x0;
        ar5 = (undefined **)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0x26,0xffffffff,0));
      }
      ar4[0xae] = (undefined *)(unsigned)0x3;
      ppuVar5 = ar4 + 5;
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_assign(ar4 + 0x20,ppuVar5,ar5,ar7));
      if (ar4[0x4a] == (undefined *)(unsigned)0x3) {
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ppuVar5,ar5,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ppuVar5,ar5,ar7));
      }
      ar4[0x4b] = ar4[0x4b] + 1;
      ppuVar4 = ar5;
    case 0x3:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x2c,ppuVar5,ppuVar4,ar7));
      if (iVar1 == 1) {
        ppuVar4 = (undefined **)(unsigned)0x64;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 264)), rand_range(ar4,0,100,ar7));
        if (iVar1 < 0x32) {
          ar4[0x4b] = (undefined *)(unsigned)0x0;
          ar4[0xae] = (undefined *)(unsigned)0x2;
          uVar7 = 0;
        }
        else {
          ar7 = (code *)0x0;
          ppuVar4 = (undefined **)(unsigned)0xffffffff;
          uVar3 = 3;
          (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,3,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,uVar3,ppuVar4,ar7));
          ar4[0xae] = (undefined *)(unsigned)0x3;
          ar4[0x4b] = ar4[0x4b] + 1;
        }
      }
      goto switchD_8c0572ba_caseD_5;
    case 0x4:
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0
                        (ar4 + 0x2c,ppuVar5,&(*(undefined1 *)(unsigned)0x8c0572c4),ar7);
      if (iVar1 == 1) {
        ar4[0x4b] = (undefined *)(unsigned)0x0;
        ar4[0xae] = (undefined *)(unsigned)0x2;
        uVar7 = 0;
      }
    default:
      goto switchD_8c0572ba_caseD_5;
    case 0xa:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); Vec3_scale(ar4 + 5,((undefined1 *)(unsigned)0x8c1365e4),&(*(undefined1 *)(unsigned)0x8c0572c4),ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0x6c)),ppuVar4,ar7); });
      ppuVar5 = ar5;
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x7c)),ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ppuVar5,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ppuVar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c05ae54(ar4,uVar3,ppuVar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c031748(ar4,uVar3,ppuVar5,ar7));
      ar7 = (code *)(uint)ar4[0x91];
      uVar3 = 0x1e;
      ppuVar5 = ar5;
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c033474(ar4,0x1e,ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c032ab0(ar4,uVar3,ppuVar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x8c)),uVar3,ppuVar5,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c023334(ar4 + 5,((undefined1 *)(fr0_ - 0x8c)),ppuVar5,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ppuVar5,ar7));
      if (iVar1 == 3) {
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x98)),uVar3,ppuVar5,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa8))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); FUN_8c023484(ar4 + 5,((undefined1 *)(fr0_ - 0x98)),ppuVar5,ar7); });
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_assign(ar4 + 5,((undefined1 *)(fr0_ - 0xa8)),ppuVar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,ppuVar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), object_dtor_delete(((undefined1 *)(fr0_ - 0x98)),0xffffffff,ppuVar5,ar7));
        ppuVar5 = ar4 + 0x9e;
        if (cVar8 == '\0') {
          *ppuVar5 = (undefined *)(unsigned)0x3f333333;
        }
        else {
          ppuVar5[0] = (undefined *)(unsigned)0x3f333333;
          ppuVar5[1] = (undefined *)(unsigned)0xbf800000;
        }
        ar7 = (code *)0x0;
        ppuVar5 = (undefined **)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0xc,0xffffffff,0));
      }
      else if (iVar1 == 4) {
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xb4)),uVar3,ppuVar5,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc4))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); FUN_8c023484(ar4 + 5,((undefined1 *)(fr0_ - 0xb4)),ppuVar5,ar7); });
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_assign(ar4 + 5,((undefined1 *)(fr0_ - 0xc4)),ppuVar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,ppuVar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), object_dtor_delete(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ppuVar5,ar7));
        ppuVar5 = ar4 + 0x9e;
        if (cVar8 == '\0') {
          *ppuVar5 = (undefined *)(unsigned)0x3f333333;
        }
        else {
          ppuVar5[0] = (undefined *)(unsigned)0x3f333333;
          ppuVar5[1] = (undefined *)(unsigned)0xbf800000;
        }
        ar7 = (code *)0x0;
        ppuVar5 = (undefined **)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0xb,0xffffffff,0));
      }
      ppuVar4 = ar4 + 5;
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_assign(ar4 + 0x20,ppuVar4,ppuVar5,ar7));
      if ((int)ar4[0x4a] < 3) {
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ppuVar4,ppuVar5,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ppuVar4,ppuVar5,ar7));
      }
      ar4[0x4b] = ar4[0x4b] + 1;
      ppuVar4 = ar4;
    case 0xb:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd4))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); Vec3_scale(ar4 + 5,((undefined1 *)(unsigned)0x8c1365e8),ppuVar4,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe4))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0xd4)),ppuVar4,ar7); });
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0xe4)),ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,ar5,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd4)),0xffffffff,ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c05ae54(ar4,uVar3,ar5,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x2c,ar4 + 0x9e,ar5,ar7));
      ppuVar4 = ar5;
      if (iVar1 == 1) {
        ar7 = (code *)0x0;
        ppuVar4 = (undefined **)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0));
        uVar3 = 0xb0;
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,0xb0,ppuVar4,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c03c314(ar4,uVar3,ppuVar4,ar7));
        ar4[0x4b] = ar4[0x4b] + 1;
      }
switchD_8c0572ba_caseD_5:
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_assign(ar4 + 0x20,ar4 + 5,ppuVar4,ar7));
      return uVar7;
    case 0xc:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf4))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); Vec3_scale(ar4 + 5,((undefined1 *)(unsigned)0x8c1365ec),&(*(undefined1 *)(unsigned)0x8c0572c4),ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x104))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0xf4)),ppuVar4,ar7); });
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x104)),ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0x104)),0xffffffff,ar5,ar7));
      uVar3 = 0xffffffff;
      ar7 = ((void *)0x8c022cb0);
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,ar5,((void *)0x8c022cb0)));
      pcVar6 = ((void *)0x8c05ae54);
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c05ae54(ar4,uVar3,((void *)0x8c05ae54),ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x2c,0xb0,pcVar6,ar7));
      ppuVar4 = (undefined **)(unsigned)pcVar6;
      if (iVar1 == 1) {
        uVar7 = 0;
        ar4[0x4b] = (undefined *)(unsigned)0x0;
        ppuVar4 = (undefined **)(unsigned)pcVar6;
      }
      goto switchD_8c0572ba_caseD_5;
    }
  } while( true );
}

__asm__(".globl _FUN_8c057280\n.set _FUN_8c057280, _FUN_8c057280_def\n");
