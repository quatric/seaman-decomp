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
undefined4 FUN_8c0a3f4c_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a3f4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int ar6_00;
  undefined4 ar6_01;
  undefined4 ar7_00;
  float in_fr1 = 0;
  float fVar3;
  double dVar4;
  code *pcVar6;
  double dVar5;
  float fVar7;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar2 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c022d04(ar4 + 0x200,ar5,ar6,ar7));
  dVar5 = (double)(ulonglong)(uint)in_fr1;
  if (cVar9 == '\0') {
    (*(float *)(fr0_ - 0x58)) = 0.0;
  }
  else {
    ((code * *)(fr0_ - 0x54))[0] = (code *)0x0;
    (*(float *)(fr0_ - 0x58)) = in_fr1;
  }
  fVar7 = 1.0;
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),uVar2,ar6_00,ar7));
  if ((*(int *)(unsigned)(ar6 + 0x68) == 0) || (-1 < (int)((uint)*(byte *)(unsigned)(ar4 + 0x1fc) << 0x1e))) {
    if ((*(int *)(unsigned)(ar6 + 100) == 0) || (-1 < (int)((uint)*(byte *)(unsigned)(ar4 + 0x1fc) << 0x1d))) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
    }
    else if ((*(int *)(unsigned)(ar4 + 0x124) == 0xb) || (*(int *)(unsigned)(ar4 + 0x124) == 0xc)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar6 + 0x50),uVar2,ar6_00,ar7));
      if ((iVar1 == 2) &&
         (iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8) + 0x180))))
                            (*(int *)(unsigned)(ar6 + 0x50),uVar2,ar6_00,ar7)), iVar1 == 4)) {
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
        ar7_00 = 0;
        ar6_01 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 116)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0));
        uVar2 = 3;
        (vsp = ((unsigned long)(fr0_ - 116)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,3,ar6_01,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 116)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_01,ar7_00));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_01,ar7_00));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8) + 0x170))))
                  (*(int *)(unsigned)(ar6 + 0x50),uVar2,ar6_00,ar7));
        fVar3 = F32HI(dVar5);
        (*(float *)(fr0_ - 0x6c)) = fVar3;
        if (cVar9 != '\0') {
          (*(float *)(fr0_ - 0x6c)) = SUB84(dVar5,0);
          fVar3 = fVar7;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar6 + 0x50),uVar2,ar6_00,ar7); });
        ({ unsigned long t0_ = (unsigned long)(((code * *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_sub(ar5,((undefined1 *)(fr0_ - 0x44)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(ar4 + 0x200,((code * *)(fr0_ - 0x54)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((code * *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
        uVar2 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length_sq(ar4 + 0x200,uVar2,ar6_00,ar7));
        fVar7 = F32HI(dVar5);
        if (cVar9 == '\0') {
          dVar5 = CONCAT44D(fVar7,*(undefined4 *)(unsigned)(ar4 + 0x48));
          (*(float *)(fr0_ - 0x70)) = fVar7;
        }
        else {
          (*(float *)(fr0_ - 0x70)) = SUB84(dVar5,0);
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
          (*(float *)(fr0_ - 0x6c)) = fVar7;
        }
        if (cVar8 == '\0') {
          fVar3 = F32LO(dVar5) + fVar3;
        }
        else {
          fVar3 = SUB84(dVar5 + CONCAT44D(in_fr14,fVar3),0);
        }
        if (cVar9 == '\0') {
          dVar5 = CONCAT44D((*(float *)(fr0_ - 0x70)),fVar3);
        }
        else {
          dVar5 = CONCAT44D((*(float *)(fr0_ - 0x6c)),(*(float *)(fr0_ - 0x70)));
        }
        if (cVar8 == '\0') {
          fVar7 = F32LO(dVar5) - F32HI(dVar5);
        }
        else {
          fVar7 = SUB84(dVar5 - dVar5,0);
        }
        if (cVar9 == '\0') {
          pcVar6 = (code *)0x3f000000;
          (*(float *)(fr0_ - 0x58)) = fVar7;
        }
        else {
          (*(float *)(fr0_ - 0x58)) = (float)in_xd0;
          ((code * *)(fr0_ - 0x54))[0] = (code *)((ulonglong)in_xd0 >> 0x20);
          fVar7 = 0.5;
          pcVar6 = ((void *)0x8c022f54);
        }
        if (cVar8 == '\0' && fVar7 < (float)(uint)pcVar6) {
          if (cVar9 == '\0') {
            (*(float *)(fr0_ - 0x58)) = 0.5;
          }
          else {
            (*(float *)(fr0_ - 0x58)) = 0.5;
            ((code * *)(fr0_ - 0x54))[0] = ((void *)0x8c022f54);
          }
        }
        (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length(ar4 + 0x200,uVar2,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023bf4(ar4 + 0x200,&(*(float *)(fr0_ - 0x58)),ar6_00,ar7));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
      }
    }
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 1;
    if (cVar9 == '\0') {
      fVar7 = *(float *)(unsigned)(*(int *)(unsigned)(ar6 + 0x68) + 0x158);
    }
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),*(int *)(unsigned)(ar6 + 0x68) + 4,ar6_00,ar7));
    dVar4 = (*(double *)(fr0_ - 0x20));
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x20))+0)),SUB84(dVar5,0));
    }
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D(F32HI(dVar4) + fVar7,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + CONCAT44D(in_fr14,fVar7);
    }
    dVar5 = dVar4;
    if (cVar9 == '\0') {
      (*(double *)(fr0_ - 0x20)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x20))+4)),(int)(D2U(dVar4) >> 0x20));
      dVar5 = (*(double *)(fr0_ - 0x20));
    }
    (*(double *)(fr0_ - 0x20)) = dVar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_sub(ar5,((undefined1 *)(fr0_ - 0x24)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(ar4 + 0x200,((undefined1 *)(fr0_ - 0x34)),ar6_00,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length_sq(ar4 + 0x200,uVar2,ar6_00,ar7));
    fVar3 = F32HI(dVar4);
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D(fVar3,*(undefined4 *)(unsigned)(ar4 + 0x48));
      (*(float *)(fr0_ - 0x5c)) = fVar3;
    }
    else {
      (*(float *)(fr0_ - 0x5c)) = SUB84(dVar4,0);
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      (*(float *)(fr0_ - 0x58)) = fVar3;
    }
    if (cVar8 == '\0') {
      fVar7 = F32LO(dVar4) + fVar7;
    }
    else {
      fVar7 = SUB84(dVar4 + CONCAT44D(in_fr14,fVar7),0);
    }
    if (cVar9 == '\0') {
      dVar5 = CONCAT44D((*(float *)(fr0_ - 0x5c)),fVar7);
    }
    else {
      dVar5 = CONCAT44D((*(float *)(fr0_ - 0x58)),(*(float *)(fr0_ - 0x5c)));
    }
    if (cVar8 == '\0') {
      fVar7 = F32LO(dVar5) - F32HI(dVar5);
    }
    else {
      fVar7 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar9 == '\0') {
      pcVar6 = (code *)0x3f000000;
      (*(float *)(fr0_ - 0x58)) = fVar7;
    }
    else {
      (*(float *)(fr0_ - 0x58)) = (float)in_xd0;
      ((code * *)(fr0_ - 0x54))[0] = (code *)((ulonglong)in_xd0 >> 0x20);
      fVar7 = 0.5;
      pcVar6 = ((void *)0x8c022f54);
    }
    if (cVar8 == '\0' && fVar7 < (float)(uint)pcVar6) {
      if (cVar9 == '\0') {
        (*(float *)(fr0_ - 0x58)) = 0.5;
      }
      else {
        (*(float *)(fr0_ - 0x58)) = 0.5;
        ((code * *)(fr0_ - 0x54))[0] = ((void *)0x8c022f54);
      }
    }
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length(ar4 + 0x200,uVar2,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023bf4(ar4 + 0x200,&(*(float *)(fr0_ - 0x58)),ar6_00,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0a3f4c\n.set _FUN_8c0a3f4c, _FUN_8c0a3f4c_def\n");
