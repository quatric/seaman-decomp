#include "../decls.h"
undefined4 s_Sq_Bone_Home_njd_0ae2fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  double dVar4;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [12];
  undefined1 auStack_10 [16];
  
  cVar6 = '\0';
  cVar5 = '\0';
  _DAT_8c2868dc = &PTR_s_Sq_Bone_Idle1_njm_8c13b504;
  _DAT_8c2868e0 = &PTR_DAT_8c13b568;
  _DAT_8c2868e4 = PTR_s_Sq_Bone_Home_njd_8c13b4dc;
  _DAT_8c2868e8 = 0;
  _DAT_8c2868ec = PTR_s_SQUID_BODY_8c13b4e8;
  _DAT_8c2868f0 = PTR_s_Sq_KeyMotionPack_npd_8c13b4e0;
  _DAT_8c2868f4 = PTR_s_hand_nt_njm_8c13b4f0;
  _DAT_8c2868f8 = PTR_s_sq_mapset_1_pvm_8c13b4ec;
  _DAT_8c2868fc = 7;
  _DAT_8c286908 = 0x8c286878;
  _DAT_8c28698c = 0x8c286cf4;
  _DAT_8c286994 = 0x3f800000;
  _DAT_8c2869a0 = CONCAT44(0x3ca3d70a,_DAT_8c2869a0);
  _DAT_8c2869a8 = 0x3f4ccccd;
  _DAT_8c2869ac = 0x43b40000;
  _DAT_8c2869c0 = 0x42100000;
  _DAT_8c286978 = 0x8c286a24;
  _DAT_8c28697c = 0x19;
  _DAT_8c286980 = 0x8c286a94;
  _DAT_8c286984 = 0x19;
  Vec3_set_xyz(auStack_10,ar5,ar6,ar7);
  vec3_copy_8c023d8c(0x8c2869d0,auStack_10,ar6,ar7);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_10,0xffffffff,ar6,ar7);
  Vec3_set_xyz(auStack_1c,uVar2,ar6,ar7);
  vec3_copy_8c023d8c(0x8c2869dc,auStack_1c,ar6,ar7);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_1c,0xffffffff,ar6,ar7);
  Vec3_set_xyz(auStack_28,uVar2,ar6,ar7);
  vec3_copy_8c023d8c(0x8c2869e8,auStack_28,ar6,ar7);
  object_dtor_delete(auStack_28,0xffffffff,ar6,ar7);
  if (cVar6 == '\0') {
    _DAT_8c2869f8 = CONCAT44(DAT_8c2869f8_4,0x43af0000);
    _DAT_8c2869c4 = CONCAT44(DAT_8c2869c4_4,0x42c80000);
    dVar4 = (double)CONCAT44(0x3f99999a,_DAT_8c2869a0);
  }
  else {
    _DAT_8c2869f8 = 0xec43af0000;
    _DAT_8c2869c4 = 0xc842c80000;
    dVar4 = -4.2624166816346474e-250;
    in_xd0 = _DAT_8c2869a0;
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  uVar1 = in_xd0;
  if (cVar6 == '\0') {
    _DAT_8c2869a0 = CONCAT44(_DAT_8c2869a4,fVar3);
    uVar1 = _DAT_8c2869a0;
  }
  _DAT_8c2869a0 = uVar1;
  _DAT_8c286a08 = 0xffff;
  _DAT_8c286a0c = 1;
  _DAT_8c286a10 = 0;
  _DAT_8c286a14 = 0;
  return 0;
}

__asm__(".globl _s_Sq_Bone_Home_njd_0ae2fc\n.set _s_Sq_Bone_Home_njd_0ae2fc, _s_Sq_Bone_Home_njd_0ae2fc_def\n");
