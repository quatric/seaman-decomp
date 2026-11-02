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
undefined4 FUN_8c066834_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c066834";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 392; for (int i_ = 0; i_ < 392; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 *ar6_00;
  undefined1 *ar6_01;
  undefined1 *ar7_00;
  undefined1 *a6;
  undefined1 *puVar5;
  uint in_fr1 = 0;
  double dVar6;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar2 = 0;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 392)), Vec3_ctor_zero(((uint *)(fr0_ - 0x2c)),0,ar6,ar7));
  if (cVar9 == '\0') {
    in_fr15 = 50.0;
  }
  (vsp = ((unsigned long)(fr0_ - 392)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x3c)),uVar2,ar6_00,ar7));
  pcVar3 = ((void *)0x8c022ce8);
  (vsp = ((unsigned long)(fr0_ - 392)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x4c)),((void *)0x8c022ce8),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 392)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x5c)),pcVar3,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 392)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x6c)),pcVar3,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 392)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x7c)),((void *)0x8c022c4c),ar6_00,ar7));
  if (cVar9 == '\0') {
    ((uint *)(fr0_ - 0x2c))[0] = 0;
  }
  else {
    ((uint *)(fr0_ - 0x2c))[3] = 0;
    ((uint *)(fr0_ - 0x2c))[0] = in_fr1;
  }
  dVar6 = (double)(ulonglong)in_fr1;
  ((uint *)(fr0_ - 0x2c))[2] = 0;
  ((uint *)(fr0_ - 0x2c))[1] = 0;
  if (*(int *)(unsigned)(ar4 + 0x6c) == 0) {
    ar7_00 = ((undefined1 *)(fr0_ - 0x184));
    ar6_01 = ((undefined1 *)(fr0_ - 0x180));
    puVar5 = ((undefined1 *)(fr0_ - 0x17c));
    (vsp = ((unsigned long)(fr0_ - 392)), FUN_8c03f414(*ar6,puVar5,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 392)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x88)),puVar5,ar6_01,ar7_00));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 392)), FUN_8c02c518(ar6[1],puVar5,ar6_01,ar7_00));
    if (iVar1 == 4) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 392)), FUN_8c02bef8(ar6[1],puVar5,ar6_01,ar7_00));
      if ((short)uVar2 < 3) {
        (vsp = ((unsigned long)(fr0_ - 392)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0xb0)),((undefined1 *)(fr0_ - 0x88)),ar6_01,ar7_00));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc0))); *(unsigned *)((((unsigned long)(fr0_ - 392)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 392)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0xb0)),ar6_01,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 392)), Vec3_assign(((undefined1 *)(fr0_ - 0x7c)),((undefined1 *)(fr0_ - 0xc0)),ar6_01,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar6_01,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 392)), object_dtor_delete(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6_01,ar7_00));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 392)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x94)),((undefined1 *)(fr0_ - 0x88)),ar6_01,ar7_00));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 392)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 392)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x5c)),((undefined1 *)(fr0_ - 0x94)),ar6_01,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 392)), Vec3_assign(((undefined1 *)(fr0_ - 0x7c)),((undefined1 *)(fr0_ - 0xa4)),ar6_01,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6_01,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 392)), object_dtor_delete(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_01,ar7_00));
      }
      a6 = (undefined1 *)(unsigned)0x0;
      while( true ) {
        puVar5 = (undefined1 *)(unsigned)0xa;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 392)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,10,ar6_01,ar7_00));
        if (iVar1 <= (int)a6) break;
        uVar4 = 10;
        ar6_01 = a6;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 392)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,10,a6,ar7_00));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 392)), get_field_6c_02f46c(uVar2,uVar4,ar6_01,ar7_00));
        if (iVar1 != 0) {
          uVar2 = 10;
          ar6_01 = a6;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 392)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,10,a6,ar7_00));
          iVar1 = (vsp = ((unsigned long)(fr0_ - 392)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x114))))(iVar1,uVar2,ar6_01,ar7_00));
          if (iVar1 == 0x13) {
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd0))); *(unsigned *)((((unsigned long)(fr0_ - 392)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 392)) - 8); FUN_8c02f670(*ar6,uVar2,ar6_01,ar7_00); });
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe0))); *(unsigned *)((((unsigned long)(fr0_ - 392)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 392)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xd0)),((undefined1 *)(fr0_ - 0x7c)),ar6_01,ar7_00); });
            uVar4 = 10;
            ar6_01 = a6;
            uVar2 = (vsp = ((unsigned long)(fr0_ - 392)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,10,a6,ar7_00));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf0))); *(unsigned *)((((unsigned long)(fr0_ - 392)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 392)) - 8); FUN_8c02f670(uVar2,uVar4,ar6_01,ar7_00); });
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x100))); *(unsigned *)((((unsigned long)(fr0_ - 392)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 392)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0xe0)),((undefined1 *)(fr0_ - 0xf0)),ar6_01,ar7_00); });
            (vsp = ((unsigned long)(fr0_ - 392)), Vec3_assign(((uint *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x100)),ar6_01,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,ar6_01,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,ar6_01,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,ar6_01,ar7_00));
            uVar2 = 0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,ar6_01,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 392)), Vec3_length_sq(((uint *)(fr0_ - 0x2c)),uVar2,ar6_01,ar7_00));
            if (cVar8 == '\0') {
              bVar7 = F32HI(dVar6) < in_fr15;
            }
            else {
              bVar7 = dVar6 < CONCAT44D(in_fr14,in_fr15);
            }
            if (bVar7) {
              uVar2 = (vsp = ((unsigned long)(fr0_ - 392)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,10,a6,ar7_00));
              (vsp = ((unsigned long)(fr0_ - 392)), object_dtor_delete(((undefined1 *)(fr0_ - 0x88)),0xffffffff,a6,ar7_00));
              (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,a6,ar7_00));
              (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,a6,ar7_00));
              (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,a6,ar7_00));
              (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,a6,ar7_00));
              (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,a6,ar7_00));
              (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((uint *)(fr0_ - 0x2c)),0xffffffff,a6,ar7_00));
              return uVar2;
            }
          }
        }
        a6 = a6 + 1;
      }
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 392)), get_field_a0_035724(ar6[6],puVar5,ar6_01,ar7_00));
    if ((char)uVar2 == '\x02') {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 392)), FUN_8c02bef8(ar6[1],puVar5,ar6_01,ar7_00));
      if ((short)uVar2 < 3) {
        (vsp = ((unsigned long)(fr0_ - 392)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x128)),((undefined1 *)(fr0_ - 0x88)),ar6_01,ar7_00));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x138))); *(unsigned *)((((unsigned long)(fr0_ - 392)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 392)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0x128)),ar6_01,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 392)), Vec3_assign(((undefined1 *)(fr0_ - 0x7c)),((undefined1 *)(fr0_ - 0x138)),ar6_01,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x138)),0xffffffff,ar6_01,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 392)), object_dtor_delete(((undefined1 *)(fr0_ - 0x128)),0xffffffff,ar6_01,ar7_00));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 392)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x10c)),((undefined1 *)(fr0_ - 0x88)),ar6_01,ar7_00));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x11c))); *(unsigned *)((((unsigned long)(fr0_ - 392)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 392)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0x10c)),ar6_01,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 392)), Vec3_assign(((undefined1 *)(fr0_ - 0x7c)),((undefined1 *)(fr0_ - 0x11c)),ar6_01,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x11c)),0xffffffff,ar6_01,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 392)), object_dtor_delete(((undefined1 *)(fr0_ - 0x10c)),0xffffffff,ar6_01,ar7_00));
      }
      for (puVar5 = (undefined1 *)(unsigned)0x0; iVar1 = (vsp = ((unsigned long)(fr0_ - 392)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,0xd,ar6_01,ar7_00)),
          (int)puVar5 < iVar1; puVar5 = puVar5 + 1) {
        uVar4 = 0xd;
        ar6_01 = puVar5;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 392)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,0xd,puVar5,ar7_00));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 392)), get_field_6c_02f46c(uVar2,uVar4,ar6_01,ar7_00));
        if (iVar1 != 0) {
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x148))); *(unsigned *)((((unsigned long)(fr0_ - 392)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 392)) - 8); FUN_8c02f670(*ar6,uVar4,ar6_01,ar7_00); });
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x158))); *(unsigned *)((((unsigned long)(fr0_ - 392)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 392)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x148)),((undefined1 *)(fr0_ - 0x7c)),ar6_01,ar7_00); });
          uVar4 = 0xd;
          ar6_01 = puVar5;
          uVar2 = (vsp = ((unsigned long)(fr0_ - 392)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,0xd,puVar5,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x168))); *(unsigned *)((((unsigned long)(fr0_ - 392)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 392)) - 8); FUN_8c02f670(uVar2,uVar4,ar6_01,ar7_00); });
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x178))); *(unsigned *)((((unsigned long)(fr0_ - 392)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 392)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x158)),((undefined1 *)(fr0_ - 0x168)),ar6_01,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 392)), Vec3_assign(((uint *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x178)),ar6_01,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x178)),0xffffffff,ar6_01,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x168)),0xffffffff,ar6_01,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x158)),0xffffffff,ar6_01,ar7_00));
          uVar2 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x148)),0xffffffff,ar6_01,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 392)), Vec3_length_sq(((uint *)(fr0_ - 0x2c)),uVar2,ar6_01,ar7_00));
          if (cVar8 == '\0') {
            bVar7 = F32HI(dVar6) < in_fr15;
          }
          else {
            bVar7 = dVar6 < CONCAT44D(in_fr14,in_fr15);
          }
          if (bVar7) {
            uVar2 = (vsp = ((unsigned long)(fr0_ - 392)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,0xd,puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 392)), object_dtor_delete(((undefined1 *)(fr0_ - 0x88)),0xffffffff,puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,puVar5,ar7_00));
            pcVar3 = ((void *)0x8c022cb0);
            (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,puVar5,((void *)0x8c022cb0)));
            uVar4 = 0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,0xffffffff,pcVar3));
            (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((uint *)(fr0_ - 0x2c)),0xffffffff,uVar4,pcVar3));
            return uVar2;
          }
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 392)), object_dtor_delete(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((uint *)(fr0_ - 0x2c)),0xffffffff,ar6_01,ar7_00));
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(unsigned)(ar4 + 0x6c);
    (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 392)), Vec3_dtor(((uint *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c066834\n.set _FUN_8c066834, _FUN_8c066834_def\n");
