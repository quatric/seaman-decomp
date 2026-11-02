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
s_r_nCOPYRIGHT_C_NEC_Corporati_205e72_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_r_nCOPYRIGHT_C_NEC_Corporati_205e72";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2092; for (int i_ = 0; i_ < 2092; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int ain0;
  char *pcVar4;
  int iVar5;
  char *ar5_00;
  undefined4 uVar6;
  int iVar7;
  int a7;
  
  if (((undefined4 *)(unsigned long)*(unsigned *)0x8c2756b0) == (undefined1 *)(unsigned)0x0) {
    *(unsigned *)0x8c2756b0 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4a9ba8));
    ar5 = 0;
    ar6 = 0x4f4;
    (vsp = ((unsigned long)(fr0_ - 2092)), memset(((undefined1 *)(unsigned)0x8c4a9ba8),0,0x4f4,ar7));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa09c) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0a0) = 2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0a4) = 6;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0a8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0ac) =
       "\r\nCOPYRIGHT        (C) NEC        Corporation 1998\r\n\r\nAll rights reserved by NEC Corporation. This program must be\r\nused solely for the purpose for which it was furnished by NEC\r\nCorporation. No part of this program may be reproduced or\r\ndisclosed to others, in any form, without the prior written\r\npermission of NEC Corporation.\r\nUse of copyright notice does not evidence publication of this\r\nprogram.\r\n\r\nDeveloped by \r\n * Semiconductor Solution Engineering Division\r\n   NEC Corpolation.\r\n * Home Multimedia Development Division\r\n   NEC Corpolation\r\n * Client Server Software Development Division\r\n   NEC Software,Ltd.\r\n"
  ;
  *(unsigned *)0x8c4a9ba8 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4aa09c));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9be0) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9be4) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9be8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bfc) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c00) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa084) = 0x1f0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa088) = 0x200;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa08c) = 0x210;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa090) = 0x220;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa094) = 0x230;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x2c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 2092)); FUN_8c2073a0(((undefined1 *)(unsigned)0x8c4aa09c),ar5,ar6,ar7); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9db4) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9db8) = 0;
  pcVar4 = "VSYNCCount";
  uVar6 = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d8c) = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("RENDER","VSYNCCount",1,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d8c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d8c) + -1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bbc) = 0x10000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bc0) = 0x800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bc4) = 0x800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d74) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d70) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d6c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d88) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e54) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d90) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d8c);
  (vsp = ((unsigned long)(fr0_ - 2092)), FUN_8c20828c(0x800000,pcVar4,uVar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("RENDER","RegionSize",0x6000,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("RENDER","ObjListSize",0x7a000,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("RENDER","ISPParamSize",0x180000,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c44) = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("RENDER","TSPParamSize",0x180000,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c40) = uVar3 & 0xfffff800;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c44) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c44) & 0xfffff800;
  a7 = (uVar1 & 0xfffff800) + (uVar2 & 0xfffff800);
  ain0 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c40) + a7;
  iVar7 = 0;
  iVar5 = 0;
  for (uVar2 = 0; uVar2 < 0x20; uVar2 = uVar2 + 0x10) {
    *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c18) + uVar2) = iVar5;
    *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c1c) + uVar2) = iVar5 + (uVar1 & 0xfffff800);
    *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c20) + uVar2) = iVar5 + a7;
    *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c24) + uVar2) = ain0 + iVar5;
    *(int *)(unsigned)(iVar7 + -0x73b563c8) = 0x7d0000 - iVar5;
    iVar5 = iVar5 + 0x400000;
    iVar7 = iVar7 + 4;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef0) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9fcc) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9efc) = 0xffffffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f00) = 0xffffffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f04) = 0xffffffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f08) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f0c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f10) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9fd8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9fe0) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9fdc) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9fec) = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("VertexBuffer","BufferBase",0xacc00000,a7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9ff0) = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("VertexBuffer","BufferSize",0x400000,a7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c10) = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("RENDER","PoolingTAStatus",0,a7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dd0) = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("RENDER","RenderTimeOut",10,a7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dd4) = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("RENDER","VertexTimeOut",10,a7));
  ar5_00 = "VSYNCTimeOut";
  uVar6 = 10;
  pcVar4 = "RENDER";
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dd8) = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("RENDER","VSYNCTimeOut",10,a7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d80) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d84) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c14) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dc4) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dc8) = 0;
  uVar6 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 2092)); noop_20b77a(pcVar4,ar5_00,uVar6,a7); });
  return uVar6;
}

__asm__(".globl _s_r_nCOPYRIGHT_C_NEC_Corporati_205e72\n.set _s_r_nCOPYRIGHT_C_NEC_Corporati_205e72, _s_r_nCOPYRIGHT_C_NEC_Corporati_205e72_def\n");
