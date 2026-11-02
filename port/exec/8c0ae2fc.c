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
undefined4 s_Sq_Bone_Home_njd_0ae2fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Sq_Bone_Home_njd_0ae2fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  double dVar4;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  *(unsigned *)0x8c2868dc = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c13b504));
  *(unsigned *)0x8c2868e0 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c13b568));
  (*(undefined4 *)(unsigned)(unsigned)0x8c2868e4) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b4dc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2868e8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2868ec) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b4e8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2868f0) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b4e0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2868f4) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b4f0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2868f8) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b4ec);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2868fc) = 7;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286908) = 0x8c286878;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28698c) = 0x8c286cf4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286994) = 0x3f800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2869a0) = CONCAT44(0x3ca3d70a,(*(undefined4 *)(unsigned)(unsigned)0x8c2869a0));
  (*(undefined4 *)(unsigned)(unsigned)0x8c2869a8) = 0x3f4ccccd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2869ac) = 0x43b40000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2869c0) = 0x42100000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286978) = 0x8c286a24;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28697c) = 0x19;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286980) = 0x8c286a94;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286984) = 0x19;
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x10)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), vec3_copy_8c023d8c(0x8c2869d0,((undefined1 *)(fr0_ - 0x10)),ar6,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 44)), object_dtor_delete(((undefined1 *)(fr0_ - 0x10)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x1c)),uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), vec3_copy_8c023d8c(0x8c2869dc,((undefined1 *)(fr0_ - 0x1c)),ar6,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 44)), object_dtor_delete(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x28)),uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), vec3_copy_8c023d8c(0x8c2869e8,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), object_dtor_delete(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  if (cVar6 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2869f8) = CONCAT44((*(undefined1 *)(unsigned)0x8c2869f8),0x43af0000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2869c4) = CONCAT44((*(undefined1 *)(unsigned)0x8c2869c4),0x42c80000);
    dVar4 = CONCAT44D(0x3f99999a,(*(undefined4 *)(unsigned)(unsigned)0x8c2869a0));
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2869f8) = 0xec43af0000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2869c4) = 0xc842c80000;
    dVar4 = -4.2624166816346474e-250;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c2869a0);
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  uVar1 = in_xd0;
  if (cVar6 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2869a0) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c2869a4),fVar3);
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c2869a0);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2869a0) = uVar1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286a08) = 0xffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286a0c) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286a10) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286a14) = 0;
  return 0;
}

__asm__(".globl _s_Sq_Bone_Home_njd_0ae2fc\n.set _s_Sq_Bone_Home_njd_0ae2fc, _s_Sq_Bone_Home_njd_0ae2fc_def\n");
