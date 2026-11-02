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
undefined4 * FUN_8c0d9c80_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d9c80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  code *pcVar1;
  code *pcVar2;
  undefined1 *ar6_00;
  undefined4 uVar3;
  char cVar4;
  undefined4 ain0;
  
  cVar4 = '\0';
  uVar3 = ar7;
  ain0 = ar5;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d99e8(ar4,ar5,ar6,ar7));
  *ar4 = ((undefined1 *)(unsigned)0x8c12bb08);
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0da1dc(ar4 + 0x29,ar5,ar6,uVar3));
  uVar3 = 0x3c;
  pcVar2 = ((void *)0x8c0fe250);
  pcVar1 = ((void *)0x8c0da1b0);
  ({ unsigned long t0_ = (unsigned long)(0x11); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c010120(ar4 + 0xea,((void *)0x8c0da1b0),((void *)0x8c0fe250),0x3c); });
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0feb0c(ar4 + 0x1e9,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c015520(ar4 + 0x277,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c019208(ar4 + 0x27a,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d6264(ar4 + 0x29a,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10277c(ar4 + 0x2ea,pcVar1,pcVar2,uVar3));
  ar4[0x2ed] = ar7;
  uVar3 = 0x68;
  pcVar2 = ((void *)0x8c0f68c0);
  pcVar1 = ((void *)0x8c0f6870);
  ({ unsigned long t0_ = (unsigned long)(8); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c010120(ar4 + 0x303,((void *)0x8c0f6870),((void *)0x8c0f68c0),0x68); });
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0e91b8(ar4 + 0x3d3,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0162f8(ar4 + 0x40a,pcVar1,pcVar2,uVar3));
  ar4[0x275] = 0;
  ar4[0x276] = 0;
  ar4[0x2b3] = 0;
  uVar3 = (*(undefined1 *)(unsigned)0x8c13f5b0);
  ar4[0x2ee] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5ac);
  ar4[0x2ef] = uVar3;
  ar4[0x2f0] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5b4);
  uVar3 = (*(undefined1 *)(unsigned)0x8c13f5bc);
  ar4[0x2f1] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5b8);
  ar4[0x2f2] = uVar3;
  ar4[0x2f3] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5c0);
  uVar3 = (*(undefined1 *)(unsigned)0x8c13f5c8);
  ar4[0x2f4] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5c4);
  ar4[0x2f5] = uVar3;
  ar4[0x2f6] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5cc);
  uVar3 = (*(undefined1 *)(unsigned)0x8c13f5d4);
  ar4[0x2f7] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5d0);
  ar4[0x2f8] = uVar3;
  ar4[0x2f9] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5d8);
  uVar3 = (*(undefined1 *)(unsigned)0x8c13f5e0);
  ar4[0x2fd] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5dc);
  ar4[0x2fe] = uVar3;
  ar4[0x2ff] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5e4);
  uVar3 = (*(undefined1 *)(unsigned)0x8c13f5ec);
  ar4[0x300] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5e8);
  ar4[0x301] = uVar3;
  ar4[0x302] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5f0);
  uVar3 = (*(undefined1 *)(unsigned)0x8c13f5f8);
  ar4[0x2fa] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5f4);
  ar4[0x2fb] = uVar3;
  ar4[0x2fc] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5fc);
  if (cVar4 == '\0') {
    ar4[0x40f] = 0x43480000;
    ar4[0x410] = 0x43de8000;
    ar4[0x411] = 0x43480000;
    ar4[0x412] = 0x43df8000;
    ar4[0x413] = 0x43dc0000;
    ar4[0x414] = 0x43df8000;
    ar4[0x415] = 0x43dc0000;
    ar4[0x416] = 0x43de8000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x40f) = 0x104043480000;
    *(undefined8 *)(unsigned)(ar4 + 0x410) = 0x104443de8000;
    *(undefined8 *)(unsigned)(ar4 + 0x411) = 0x104043480000;
    *(undefined8 *)(unsigned)(ar4 + 0x412) = 0x104c43df8000;
    *(undefined8 *)(unsigned)(ar4 + 0x413) = 0x105043dc0000;
    *(undefined8 *)(unsigned)(ar4 + 0x414) = 0x104c43df8000;
    *(undefined8 *)(unsigned)(ar4 + 0x415) = 0x105043dc0000;
    *(undefined8 *)(unsigned)(ar4 + 0x416) = 0x104443de8000;
  }
  *(undefined2 *)(unsigned)(ar4 + 0x417) = 0;
  *(undefined2 *)(unsigned)((int)ar4 + 0x105e) = 0x20;
  *(undefined2 *)(unsigned)(ar4 + 0x418) = 0;
  *(undefined2 *)(unsigned)((int)ar4 + 0x1062) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x419) = 0x80;
  *(undefined2 *)(unsigned)((int)ar4 + 0x1066) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x41a) = 0x80;
  *(undefined2 *)(unsigned)((int)ar4 + 0x106a) = 0x20;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4377d8) = 0xffffffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4377dc) = 0xffffffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4377e0) = 0xffffffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4377e4) = 0xffffffff;
  uVar3 = 4;
  ar6_00 = ((undefined1 *)(unsigned)0x8c4377d8);
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c016318(ar4 + 0x40a,ar4 + 0x40f,((undefined1 *)(unsigned)0x8c4377d8),4); });
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c016324(ar4 + 0x40a,ar4 + 0x417,ar6_00,uVar3));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c015198(ar4 + 0x40a,0x80000060,ar6_00,uVar3); });
  ar4[0x409] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0d9c80\n.set _FUN_8c0d9c80, _FUN_8c0d9c80_def\n");
