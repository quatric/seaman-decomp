#include "../decls.h"
undefined4 FUN_8c02d5e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c125a10),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d400;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d400,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125a20),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d40c;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d40c,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125a30),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d418;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d418,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c125a40),puVar3,uVar2,ar7);
  global_list_push(uVar2,(&Vec3_dtor),0x8c27d424,ar7);
  *(undefined2 *)((&DATA_8c1302e0) + 6) = *(undefined2 *)((&DATA_8c1304a8) + 0x28c);
  *(short *)((&DATA_8c1302e0) + 8) =
       *(short *)((&DATA_8c1304a8) + 0x28c) + *(short *)((&DATA_8c1304a8) + 0x3cc);
  *(undefined2 *)((&DATA_8c1302e0) + 0xe) = *(undefined2 *)((&DATA_8c1304a8) + 0x78c);
  *(undefined2 *)((&DATA_8c1302e0) + 0x1e) = *(undefined2 *)((&DATA_8c1304a8) + 0x118c);
  *(short *)((&DATA_8c1302e0) + 0x20) =
       *(short *)((&DATA_8c1304a8) + 0x118c) + *(short *)((&DATA_8c1304a8) + 0x12cc);
  *(undefined2 *)((&DATA_8c1302e0) + 0x24) = *(undefined2 *)((&DATA_8c1304a8) + 0x154c);
  *(short *)((&DATA_8c1302e0) + 0x26) =
       *(short *)((&DATA_8c1304a8) + 0x154c) + *(short *)((&DATA_8c1304a8) + 0x168c);
  return 0x26;
}

__asm__(".globl _FUN_8c02d5e8\n.set _FUN_8c02d5e8, _FUN_8c02d5e8_def\n");
