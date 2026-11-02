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
undefined4 FUN_8c02d5e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d5e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125a10)),ar5,ar6,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d400;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d400,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125a20)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d40c;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d40c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125a30)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d418;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d418,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125a40)),puVar3,uVar2,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar2,((void *)(unsigned)0x8c022cb0),0x8c27d424,ar7));
  *(undefined2 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302e0)) + 6) = *(undefined2 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x28c);
  *(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302e0)) + 8) =
       *(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x28c) + *(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x3cc);
  *(undefined2 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302e0)) + 0xe) = *(undefined2 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x78c);
  *(undefined2 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302e0)) + 0x1e) = *(undefined2 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x118c);
  *(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302e0)) + 0x20) =
       *(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x118c) + *(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x12cc);
  *(undefined2 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302e0)) + 0x24) = *(undefined2 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x154c);
  *(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302e0)) + 0x26) =
       *(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x154c) + *(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x168c);
  return 0x26;
}

__asm__(".globl _FUN_8c02d5e8\n.set _FUN_8c02d5e8, _FUN_8c02d5e8_def\n");
