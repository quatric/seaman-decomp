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
int FUN_8c0a6628_def(int ar4,int *ar5,undefined1 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a6628";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 168; for (int i_ = 0; i_ < 168; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  undefined4 ar5_01;
  int iVar2;
  undefined8 in_dr0 = 0;
  float fVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  
  fVar3 = F32HI(in_dr0);
  cVar6 = '\0';
  cVar5 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = 1;
  iVar2 = 1;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 168)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 168)) - 8); FUN_8c03f480(*ar5,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_copy(&(*(float *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
  ar5_00 = -1;
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  if ((*(undefined1 *)(unsigned)0x8c2858ec) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2858e8) = 0;
    (*(undefined1 *)(unsigned)0x8c2858ec) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c2858f4) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2858f0) = 0;
    (*(undefined1 *)(unsigned)0x8c2858f4) = '\x01';
  }
  if (*(int *)(unsigned)(ar4 + 0x178) == 1) {
    ar5_00 = ar4 + 0x168;
    (vsp = ((unsigned long)(fr0_ - 168)), Vec3_assign(&(*(float *)(fr0_ - 0x20)),ar5_00,ar6,ar7));
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x124);
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 168)), get_field_24_026024(ar5[6],ar5_00,ar6,ar7));
      if (iVar2 == 0) {
        if (cVar6 == '\0') {
          fVar3 = 1000.0;
        }
        else {
          (*(float *)(fr0_ - 0x20)) = 1000.0;
          fVar3 = 180.0;
        }
        if (cVar5 == '\0' && fVar3 < (*(float *)(fr0_ - 0x20))) {
          (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(&(*(float *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
          return 2;
        }
        if (cVar6 == '\0') {
          (*(undefined8 *)(fr0_ - 0x1c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1c))+4)),0x43340000);
        }
        else {
          (*(undefined8 *)(fr0_ - 0x1c)) = 0x8843340000;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x4c)),*(undefined4 *)(unsigned)(uint)ar5[1],ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x5c)),&(*(float *)(fr0_ - 0x20)),ar6,ar7));
      ar6 = ((undefined1 *)(fr0_ - 0x5c));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c0a72b4(ar4,((undefined1 *)(fr0_ - 0x4c)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7));
      break;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x3c)),ar5[3],ar6,ar7));
      ar7 = *(undefined4 *)(unsigned)(ar5[1] + 4);
      ar6 = ((undefined1 *)(fr0_ - 0x3c));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c0a6974(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7));
      break;
    case 2:
      iVar2 = 0;
      break;
    case 3:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 168)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x1a8))))((int *)(unsigned)(uint)ar5[6],ar5_00,ar6,ar7));
      if (iVar2 == 1) {
        ar6 = (undefined1 *)(unsigned)*ar5;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c0aa11c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar6,ar7));
      }
      else {
        iVar2 = 2;
      }
      break;
    case 4:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x6c)),ar5_00,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x6c)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6,ar7));
      if (*(int *)(unsigned)(ar4 + 300) == 0) {
        ar5_01 = 6;
        (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c031de8(ar4,6,ar6,ar7));
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xa4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 168)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_01,ar6,ar7); });
        if (cVar6 == '\0') {
          pcVar4 = (code *)0x42b40000;
        }
        else {
          fVar3 = 90.0;
          pcVar4 = ((void *)0x8c033e68);
        }
        if (cVar5 != '\0' || (float)(uint)pcVar4 <= fVar3) {
          (vsp = ((unsigned long)(fr0_ - 168)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_01,ar6,ar7));
          iVar2 = 0;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
      }
      break;
    case 5:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c031de8(ar4,8,ar6,ar7));
    }
  }
  if ((*(int *)(unsigned)(ar4 + 0x178) == 1) && (iVar2 == 0)) {
    ar6 = (undefined1 *)(unsigned)(uint)ar5[6];
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c031ce8(ar4,ar5[3],ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 168)), Vec3_assign(ar4 + 0x168,((undefined1 *)(fr0_ - 0x7c)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(&(*(float *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  return iVar2;
}

__asm__(".globl _FUN_8c0a6628\n.set _FUN_8c0a6628, _FUN_8c0a6628_def\n");
