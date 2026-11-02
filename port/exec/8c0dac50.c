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
int FUN_8c0dac50_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dac50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 168; for (int i_ = 0; i_ < 168; i_++) z_[i_] = 0; }
  int ar4_00;
  int iVar1;
  undefined4 uVar2;
  int *a4;
  float *ar5_00;
  undefined4 ar5_01;
  float *ar6_00;
  float fVar3;
  float fVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  (*(float *)(fr0_ - 0x98)) = 3.4028235e+38;
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x84)),ar5,ar6,ar7));
  fVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c1264b8);
  fVar4 = (*(undefined1 *)(unsigned)0x8c1264bc);
  if (cVar7 == '\0') {
    fVar3 = *ar5;
    fVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c1264b8);
  }
  if (fVar3 == fVar4) {
    *(undefined4 *)(unsigned)(ar4 + 0x9d4) = 0;
    (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6,ar7));
    ar4_00 = 0;
  }
  else {
    ar6_00 = &(*(float *)(fr0_ - 0x98));
    ar5_00 = ar5;
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c0dbe24(ar4,ar5,ar6_00,ar7));
    if (ar4_00 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x9d4) = 0;
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
    }
    else {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 168)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 168)) - 8); FUN_8c02f670(ar4_00,ar5_00,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_assign(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(fr0_ - 0x94)),ar6_00,ar7));
      ar5_01 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7));
      fVar3 = (*(float *)(fr0_ - 0x7c));
      if (cVar7 == '\0') {
        fVar3 = *(float *)(unsigned)(ar4 + 0xa70);
        (*(float *)(fr0_ - 0x78)) = (*(float *)(fr0_ - 0x7c));
      }
      if (cVar6 != '\0' || (*(float *)(fr0_ - 0x78)) <= fVar3) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), get_field_24_05c284(ar4_00,ar5_01,ar6_00,ar7));
        if (iVar1 == 0x10) {
          *(undefined4 *)(unsigned)(ar4 + 0x9d4) = 0;
          (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
          ar4_00 = 0;
        }
        else {
          if (iVar1 == 0xe) {
            uVar2 = (vsp = ((unsigned long)(fr0_ - 168)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x148))))(ar4_00,ar5_01,ar6_00,ar7));
            (*(int *)(fr0_ - 0x9c)) = (int)(short)uVar2;
            if ((*(int *)(fr0_ - 0x9c)) == 1) {
              *(undefined4 *)(unsigned)(ar4 + 0x9d4) = 0;
              (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
              return 0;
            }
          }
          if (cVar7 == '\0') {
            pcVar5 = (code *)0x42700000;
            fVar3 = (*(float *)(fr0_ - 0x98));
          }
          else {
            fVar3 = 60.0;
            pcVar5 = ((void *)0x8c032154);
          }
          if (cVar6 != '\0' || (float)(uint)pcVar5 <= fVar3) {
            if (cVar7 == '\0') {
              (*(float *)(fr0_ - 0xa4)) = *ar5;
              (*(float *)(fr0_ - 0xa0)) = ar5[1];
            }
            else {
              (*(float *)(fr0_ - 0xa4)) = (float)*(undefined8 *)(unsigned)ar5;
              (*(float *)(fr0_ - 0xa0)) = (float)*(undefined8 *)(unsigned)(ar5 + 1);
              (*(int *)(fr0_ - 0x9c)) = (int)((ulonglong)*(undefined8 *)(unsigned)(ar5 + 1) >> 0x20);
            }
            a4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 168)), get_field_a4_032154(ar4_00,ar5_01,ar6_00,ar7));
            (vsp = ((unsigned long)(fr0_ - 168)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x38))))(a4,((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7));
            iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c0d1754(&(*(float *)(fr0_ - 0xa4)),((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7));
            if (iVar1 == 0) {
              ar4_00 = 0;
            }
            *(int *)(unsigned)(ar4 + 0x9d4) = ar4_00;
            (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
          }
          else {
            *(int *)(unsigned)(ar4 + 0x9d4) = ar4_00;
            (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
          }
        }
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x9d4) = 0;
        (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
        ar4_00 = 0;
      }
    }
  }
                    
  return ar4_00;
}

__asm__(".globl _FUN_8c0dac50\n.set _FUN_8c0dac50, _FUN_8c0dac50_def\n");
