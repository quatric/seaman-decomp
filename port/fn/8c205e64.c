#include "../decls.h"
undefined4
s_r_nCOPYRIGHT_C_NEC_Corporati_205e72_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
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
  undefined4 in_stack_ffffffd4;
  
  if (DAT_8c2756b0 == (undefined1 *)0x0) {
    DAT_8c2756b0 = &DAT_8c4a9ba8;
    ar5 = 0;
    ar6 = 0x4f4;
    memset(&DAT_8c4a9ba8,0,0x4f4,ar7);
  }
  _DAT_8c4aa09c = 3;
  _DAT_8c4aa0a0 = 2;
  _DAT_8c4aa0a4 = 6;
  _DAT_8c4aa0a8 = 0;
  _DAT_8c4aa0ac =
       "\r\nCOPYRIGHT        (C) NEC        Corporation 1998\r\n\r\nAll rights reserved by NEC Corporation. This program must be\r\nused solely for the purpose for which it was furnished by NEC\r\nCorporation. No part of this program may be reproduced or\r\ndisclosed to others, in any form, without the prior written\r\npermission of NEC Corporation.\r\nUse of copyright notice does not evidence publication of this\r\nprogram.\r\n\r\nDeveloped by \r\n * Semiconductor Solution Engineering Division\r\n   NEC Corpolation.\r\n * Home Multimedia Development Division\r\n   NEC Corpolation\r\n * Client Server Software Development Division\r\n   NEC Software,Ltd.\r\n"
  ;
  _DAT_8c4a9ba8 = &DAT_8c4aa09c;
  _DAT_8c4a9be0 = 0;
  _DAT_8c4a9be4 = 0;
  _DAT_8c4a9be8 = 0;
  _DAT_8c4a9bfc = 0;
  _DAT_8c4a9c00 = 0;
  _DAT_8c4aa084 = 0x1f0;
  _DAT_8c4aa088 = 0x200;
  _DAT_8c4aa08c = 0x210;
  _DAT_8c4aa090 = 0x220;
  _DAT_8c4aa094 = 0x230;
  FUN_8c2073a0(&DAT_8c4aa09c,ar5,ar6,ar7,in_stack_ffffffd4);
  _DAT_8c4a9db4 = 0;
  _DAT_8c4a9db8 = 0;
  pcVar4 = "VSYNCCount";
  uVar6 = 1;
  _DAT_8c4a9d8c = s_HARDWARE_205e00("RENDER","VSYNCCount",1,ar7);
  _DAT_8c4a9d8c = _DAT_8c4a9d8c + -1;
  _DAT_8c4a9bbc = 0x10000;
  _DAT_8c4a9bc0 = 0x800000;
  _DAT_8c4a9bc4 = 0x800000;
  _DAT_8c4a9d74 = 0;
  _DAT_8c4a9d70 = 0;
  _DAT_8c4a9d6c = 0;
  _DAT_8c4a9d88 = 3;
  _DAT_8c4a9e54 = 1;
  _DAT_8c4a9d90 = _DAT_8c4a9d8c;
  FUN_8c20828c(0x800000,pcVar4,uVar6,ar7);
  uVar1 = s_HARDWARE_205e00("RENDER","RegionSize",0x6000,ar7);
  uVar2 = s_HARDWARE_205e00("RENDER","ObjListSize",0x7a000,ar7);
  uVar3 = s_HARDWARE_205e00("RENDER","ISPParamSize",0x180000,ar7);
  _DAT_8c4a9c44 = s_HARDWARE_205e00("RENDER","TSPParamSize",0x180000,ar7);
  _DAT_8c4a9c40 = uVar3 & 0xfffff800;
  _DAT_8c4a9c44 = _DAT_8c4a9c44 & 0xfffff800;
  a7 = (uVar1 & 0xfffff800) + (uVar2 & 0xfffff800);
  ain0 = _DAT_8c4a9c40 + a7;
  iVar7 = 0;
  iVar5 = 0;
  for (uVar2 = 0; uVar2 < 0x20; uVar2 = uVar2 + 0x10) {
    *(int *)(&DAT_8c4a9c18 + uVar2) = iVar5;
    *(uint *)(&DAT_8c4a9c1c + uVar2) = iVar5 + (uVar1 & 0xfffff800);
    *(int *)(&DAT_8c4a9c20 + uVar2) = iVar5 + a7;
    *(int *)(&DAT_8c4a9c24 + uVar2) = ain0 + iVar5;
    *(int *)(iVar7 + -0x73b563c8) = 0x7d0000 - iVar5;
    iVar5 = iVar5 + 0x400000;
    iVar7 = iVar7 + 4;
  }
  _DAT_8c4a9ef0 = 0;
  _DAT_8c4a9fcc = 0;
  _DAT_8c4a9ef8 = 0;
  _DAT_8c4a9efc = 0xffffffff;
  _DAT_8c4a9f00 = 0xffffffff;
  _DAT_8c4a9f04 = 0xffffffff;
  _DAT_8c4a9f08 = 0;
  _DAT_8c4a9f0c = 0;
  _DAT_8c4a9f10 = 0;
  _DAT_8c4a9fd8 = 0;
  _DAT_8c4a9fe0 = 0;
  _DAT_8c4a9fdc = 1;
  _DAT_8c4a9fec = s_HARDWARE_205e00("VertexBuffer","BufferBase",0xacc00000,a7);
  _DAT_8c4a9ff0 = s_HARDWARE_205e00("VertexBuffer","BufferSize",0x400000,a7);
  _DAT_8c4a9c10 = s_HARDWARE_205e00("RENDER","PoolingTAStatus",0,a7);
  _DAT_8c4a9dd0 = s_HARDWARE_205e00("RENDER","RenderTimeOut",10,a7);
  _DAT_8c4a9dd4 = s_HARDWARE_205e00("RENDER","VertexTimeOut",10,a7);
  ar5_00 = "VSYNCTimeOut";
  uVar6 = 10;
  pcVar4 = "RENDER";
  _DAT_8c4a9dd8 = s_HARDWARE_205e00("RENDER","VSYNCTimeOut",10,a7);
  _DAT_8c4a9d80 = 0;
  _DAT_8c4a9d84 = 1;
  _DAT_8c4a9c14 = 0xf;
  _DAT_8c4a9dc4 = 0;
  _DAT_8c4a9dc8 = 0;
  uVar6 = noop_20b77a(pcVar4,ar5_00,uVar6,a7,ain0);
  return uVar6;
}

__asm__(".globl _s_r_nCOPYRIGHT_C_NEC_Corporati_205e72\n.set _s_r_nCOPYRIGHT_C_NEC_Corporati_205e72, _s_r_nCOPYRIGHT_C_NEC_Corporati_205e72_def\n");
