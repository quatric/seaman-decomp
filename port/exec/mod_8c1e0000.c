//@unit 8c1ef400
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
undefined4 crt0_start_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "crt0_start";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _crt0_start\n.set _crt0_start, _crt0_start_def\n");
//@unit 8c1ef430
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
undefined4 FUN_8c1ef430_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1ef430";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5c9e(*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c26be70)),vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c1ef430\n.set _FUN_8c1ef430, _FUN_8c1ef430_def\n");
//@unit 8c1ef438
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
undefined4 FUN_8c1ef438_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1ef438";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5cf6(*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c26be70)),vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c1ef438\n.set _FUN_8c1ef438, _FUN_8c1ef438_def\n");
//@unit 8c1ef440
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
undefined4 FUN_8c1ef440_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1ef440";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  puVar2 = (&(*(undefined1 *)(unsigned)0x8c125404));
  for (puVar4 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1253f8))); puVar3 = (&(*(undefined1 *)(unsigned)0x8c1253f4)),
      puVar4 < ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)puVar2); puVar4 = puVar4 + 1) {
    *puVar4 = 0;
  }
  puVar6 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1253e0)));
  for (puVar5 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1253e8))); puVar2 = (&(*(undefined1 *)(unsigned)0x8c26bea4)),
      puVar5 < ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)puVar3); puVar5 = puVar5 + 1) {
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    *puVar5 = uVar1;
  }
  for (puVar5 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c26be98))); puVar3 = (&(*(undefined1 *)(unsigned)0x8c26be94)),
      puVar5 < ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)puVar2); puVar5 = puVar5 + 1) {
    *puVar5 = 0;
  }
  puVar6 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c26be80)));
  for (puVar5 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c26be88))); puVar5 < ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)puVar3);
      puVar5 = puVar5 + 1) {
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    *puVar5 = uVar1;
  }
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c1ef440\n.set _FUN_8c1ef440, _FUN_8c1ef440_def\n");
//@unit 8c1ef4fa
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
uint FUN_8c1ef4fa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1ef4fa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint ain0 = (uint)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint in_r3 = 0;
  undefined1 *puVar2;
  undefined1 *a5;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 in_PR = 0;
  
  uVar1 = ain0 & in_r3 | 0xf0;
  puVar2 = ((undefined1 *)(unsigned)0x8c470e90);
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c470e90) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c470bec) = (*(undefined4 *)(unsigned)(unsigned)0x8c470bec) + 1;
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_1efaf4(((undefined1 *)(unsigned)0x8c470e90),ar5,ar6,ar7));
    uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1ef558(puVar2,ar5,ar6,ar7); });
    a5 = ((undefined1 *)(unsigned)0x8c470920);
    piVar4 = (int *)(unsigned)((undefined1 *)(unsigned)0x8c470920);
    puVar2 = ((undefined1 *)(unsigned)0x8c470920);
    puVar3 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c470920);
    do {
      if (*piVar4 != 0) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*puVar3)))(puVar2,a5,ar6,ar7));
      }
      piVar4 = piVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (piVar4 < ((undefined1 *)(unsigned)0x8c4709a0));
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c470e90) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c470e94) = (*(undefined4 *)(unsigned)(unsigned)0x8c470e94) + 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1ef4fa\n.set _FUN_8c1ef4fa, _FUN_8c1ef4fa_def\n");
//@unit 8c1ef558
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
undefined4 FUN_8c1ef558_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1ef558";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int *piVar1;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*(undefined4 *)(unsigned)0x8c470e70 != 0) {
    iVar4 = *(undefined4 *)(unsigned)0x8c470e70 + -1;
    iVar2 = (int)0x10f4;
    uVar3 = (0x8c470e98 & 0x1fffffe0) + 0x20;
    *(uint *)(unsigned)(0xa0000000 | uVar3) = iVar4 * 0x10000 | 0x80000200;
    piVar1 = 0x8c4727b4;
    *(undefined4 *)(unsigned)0x8c470e90 = 1;
    *(uint *)(unsigned)(*(int *)(unsigned)(iVar2 + *piVar1) + 4) = uVar3;
    *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar2 + *piVar1) + 0x18) = 1;
    ((undefined4 *)(fr0_ - 0x10))[0] = 1;
    in_r0 = ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 16)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 16)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 16)) - 8); FUN_8c1f4cb8(iVar4 * 6,9,((undefined4 *)(fr0_ - 0x10)),1); });
    *(undefined4 *)(unsigned)0x8c470e78 = *(undefined4 *)(unsigned)0x8c470e70;
  }
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c1ef558\n.set _FUN_8c1ef558, _FUN_8c1ef558_def\n");
//@unit 8c1ef640
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
int FUN_8c1ef640_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1ef640";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar2 = (undefined1 *)(unsigned)(*(undefined4 *)(unsigned)0x8c4727b4 + 0x28);
  puVar3 = 0x8c4709a0;
  do {
    iVar4 = iVar4 + 1;
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3[2] = puVar2[2];
    puVar3[3] = puVar2[3];
    *(undefined4 *)(unsigned)(puVar3 + 8) = *(undefined4 *)(unsigned)(puVar2 + 0x10);
    puVar3[4] = puVar2[8];
    puVar3[5] = puVar2[9];
    puVar3[6] = puVar2[10];
    cVar1 = puVar2[0xb];
    puVar3[7] = cVar1;
    *(undefined4 *)(unsigned)(puVar3 + 0xc) = *(undefined4 *)(unsigned)(puVar2 + 0x14);
    puVar3 = puVar3 + 0x18;
    puVar2 = puVar2 + 0x2c;
  } while (iVar4 < 0x18);
  return (int)cVar1;
}

__asm__(".globl _FUN_8c1ef640\n.set _FUN_8c1ef640, _FUN_8c1ef640_def\n");
//@unit 8c1ef682
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
undefined4 FUN_8c1ef682_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1ef682";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  
  puVar3 = 0x8c470910;
  puVar2 = ((void *)(unsigned)0x8c1fa244);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c26bf98));
  uVar7 = ({ unsigned long t0_ = (unsigned long)(0x8c4727c4
                    ); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1fa244))))
                    ((int)0x900,(&(*(undefined1 *)(unsigned)0x8c1ef4e4)),*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c26bf98)),0); });
  puVar4 = (&(*(undefined1 *)(unsigned)0x8c1ef4f0));
  iVar8 = (int)0xa00;
  *puVar3 = uVar7;
  uVar7 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(iVar8,puVar4,*(undefined4 *)(unsigned)(puVar1 + 4),0));
  puVar4 = (&(*(undefined1 *)(unsigned)0x8c1ef5ca));
  iVar8 = (int)0xa00;
  puVar3[1] = uVar7;
  uVar7 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(iVar8,puVar4,*(undefined4 *)(unsigned)(puVar1 + 8),0));
  puVar4 = (&(*(undefined1 *)(unsigned)0x8c1ef5d2));
  iVar8 = (int)0xa20;
  puVar3[2] = uVar7;
  uVar7 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(iVar8,puVar4,*(undefined4 *)(unsigned)(puVar1 + 0xc),0));
  puVar5 = 0x8c470c18;
  puVar3[3] = uVar7;
  puVar6 = 0x8c470e68;
  puVar3 = 0x8c470e64;
  *puVar5 = 0;
  *puVar3 = 0;
  *puVar6 = 0;
  puVar1 = ((void *)(unsigned)0x8c013ff8);
  *(undefined4 *)(unsigned)0x8c470e6c = 0;
  *(undefined4 *)(unsigned)0x8c470e70 = 0;
  *(undefined4 *)(unsigned)0x8c470e78 = 0;
  *(undefined4 *)(unsigned)0x8c470e74 = 0xffffffff;
  *(undefined4 *)(unsigned)0x8c470e8c = 0;
  *(undefined4 *)(unsigned)0x8c470e90 = 0;
  *(undefined4 *)(unsigned)0x8c470e94 = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c470be0,0,0x38,vr7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c4709a0,0,(int)0x240,vr7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c470c20,0,(int)0x240,vr7));
  uVar7 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c470920,0,(int)0x80,vr7));
  return uVar7;
}

__asm__(".globl _FUN_8c1ef682\n.set _FUN_8c1ef682, _FUN_8c1ef682_def\n");
//@unit 8c1ef686
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
undefined4 FUN_8c1ef686_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1ef686";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 a7;
  
  puVar3 = 0x8c470910;
  puVar2 = ((void *)(unsigned)0x8c1fa244);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c26bf98));
  uVar7 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1fa244))))
                    ((int)0x900,(&(*(undefined1 *)(unsigned)0x8c1ef4e4)),*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c26bf98)),ar7));
  puVar4 = (&(*(undefined1 *)(unsigned)0x8c1ef4f0));
  iVar8 = (int)0xa00;
  *puVar3 = uVar7;
  uVar7 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(iVar8,puVar4,*(undefined4 *)(unsigned)(puVar1 + 4),0));
  puVar4 = (&(*(undefined1 *)(unsigned)0x8c1ef5ca));
  iVar8 = (int)0xa00;
  puVar3[1] = uVar7;
  uVar7 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(iVar8,puVar4,*(undefined4 *)(unsigned)(puVar1 + 8),0));
  puVar4 = (&(*(undefined1 *)(unsigned)0x8c1ef5d2));
  a7 = 0;
  iVar8 = (int)0xa20;
  puVar3[2] = uVar7;
  uVar7 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(iVar8,puVar4,*(undefined4 *)(unsigned)(puVar1 + 0xc),0));
  puVar5 = 0x8c470c18;
  puVar3[3] = uVar7;
  puVar6 = 0x8c470e68;
  puVar3 = 0x8c470e64;
  *puVar5 = 0;
  *puVar3 = 0;
  *puVar6 = 0;
  puVar1 = ((void *)(unsigned)0x8c013ff8);
  *(undefined4 *)(unsigned)0x8c470e6c = 0;
  *(undefined4 *)(unsigned)0x8c470e70 = 0;
  *(undefined4 *)(unsigned)0x8c470e78 = 0;
  *(undefined4 *)(unsigned)0x8c470e74 = 0xffffffff;
  *(undefined4 *)(unsigned)0x8c470e8c = 0;
  *(undefined4 *)(unsigned)0x8c470e90 = 0;
  *(undefined4 *)(unsigned)0x8c470e94 = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c470be0,0,0x38,a7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c4709a0,0,(int)0x240,a7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c470c20,0,(int)0x240,a7));
  uVar7 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c470920,0,(int)0x80,a7));
  return uVar7;
}

__asm__(".globl _FUN_8c1ef686\n.set _FUN_8c1ef686, _FUN_8c1ef686_def\n");
//@unit 8c1ef78c
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
undefined4 FUN_8c1ef78c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1ef78c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *a4;
  undefined4 uVar1;
  undefined4 a5;
  undefined4 a7;
  
  a4 = (&(*(undefined1 *)(unsigned)0x8c1f5a28));
  *(uint *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1f5a28)) = *(uint *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1f5a28)) | 0xa0000000;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1ef682(a4,ar5,ar6,ar7));
  a5 = 0xc000;
  a7 = 0xc000;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f3dd8(ar5,0xc000,ar4,0xc000));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1ef640(ar5,a5,ar4,a7));
  *(undefined4 *)(unsigned)0x8c470e60 = 1;
  return uVar1;
}

__asm__(".globl _FUN_8c1ef78c\n.set _FUN_8c1ef78c, _FUN_8c1ef78c_def\n");
//@unit 8c1ef7e6
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
undefined4 FUN_8c1ef7e6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1ef7e6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *a4;
  undefined4 uVar1;
  
  a4 = (&(*(undefined1 *)(unsigned)0x8c1f5a28));
  *(uint *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1f5a28)) = *(uint *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1f5a28)) | 0xa0000000;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1ef682(a4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f3ef4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1ef640(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)0x8c470e60 = 1;
  return uVar1;
}

__asm__(".globl _FUN_8c1ef7e6\n.set _FUN_8c1ef7e6, _FUN_8c1ef7e6_def\n");
//@unit 8c1ef84c
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
int pvr_1ef84c_def(undefined4 ar4,uint *ar5,undefined4 ar6,uint ar7)

{
  ring[rp++ & 255] = "pvr_1ef84c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  int *a4;
  int a7;
  int *in_r2 = 0;
  int *piVar6;
  int *ar6_00;
  uint uVar7;
  
  ar6_00 = 0x8c470e70;
  piVar6 = 0x8c470e78;
  uVar1 = 0x3ff;
  if (*in_r2 == 0) {
    a7 = 0;
  }
  else {
    uVar7 = (uint)(short)0x3ff;
    *(undefined4 *)(unsigned)0x8c470e74 = *(undefined4 *)(unsigned)0x8c470e78 + -1;
    *piVar6 = 0;
    puVar3 = 0x8c470e7c;
    puVar2 = 0xa05f80c4;
    if (*ar6_00 != 0) {
      *(undefined4 *)(unsigned)0x8c470e7c = *(undefined4 *)(unsigned)0xa05f80c4 & uVar7;
      puVar3[1] = (int)(short)((ushort)(*puVar2 >> 0x10) & uVar1);
      ar5 = puVar2;
    }
    piVar6 = 0x8c470e6c;
    *ar6_00 = 0;
    if (*piVar6 != 0) {
      *(undefined4 *)(unsigned)0xa05f8040 = *(undefined4 *)(unsigned)0x8c470e68;
      *(undefined4 *)(unsigned)0xa05f80e8 = *(undefined4 *)(unsigned)0xa05f80e8 & 0xfffffff7;
      *piVar6 = 0;
    }
    piVar5 = 0x8c470be0;
    piVar4 = 0x8c470c18;
    puVar2 = 0xa05f6908;
    if ((*(undefined4 *)(unsigned)0xa05f6908 & (int)0xf00) == 0) {
      a7 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f4202(piVar6,ar5,ar6_00,ar7));
      a4 = 0x8c470e64;
      if (a7 < 0) {
        (vsp = ((unsigned long)(fr0_ - 12)), pvr_1efaf4(piVar6,ar5,ar6_00,ar7));
        piVar5[4] = piVar5[4] + 1;
        if (*piVar4 != 0) {
          (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(*piVar4)))(1,0xfffffff9,piVar5[2],a7));
        }
      }
      else {
        *(undefined4 *)(unsigned)0x8c470e90 = 0;
        *(undefined2 *)(unsigned)((int)piVar5 + *a4 * 2 + 0x34) = 0;
        *(ushort *)(unsigned)((int)piVar5 + *a4 * 2 + 0x2c) = (ushort)*(undefined4 *)(unsigned)0xa05f810c & uVar1;
        (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1ef640(a4,ar5,ar6_00,ar7));
        *piVar5 = *piVar5 + 1;
      }
    }
    else {
      if (((*(undefined4 *)(unsigned)0xa05f6908 & (int)0x800) != 0) &&
         (((undefined1 *)(unsigned)7)[0x8c470be0] = ((undefined1 *)(unsigned)7)[0x8c470be0] + 1, *piVar4 != 0)) {
        ar7 = *puVar2;
        ar6_00 = (int *)(unsigned)piVar5[2];
        ar5 = (uint *)(unsigned)0xfffffffe;
        piVar6 = (int *)(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(*piVar4)))(1,0xfffffffe,ar6_00,ar7));
      }
      if (((*puVar2 & (int)0x400) != 0) && (piVar5[8] = piVar5[8] + 1, *piVar4 != 0)) {
        ar7 = *puVar2;
        ar6_00 = (int *)(unsigned)piVar5[2];
        ar5 = (uint *)(unsigned)0xfffffffd;
        piVar6 = (int *)(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(*piVar4)))(1,0xfffffffd,ar6_00,ar7));
      }
      if (((*puVar2 & (int)0x200) != 0) && (piVar5[9] = piVar5[9] + 1, *piVar4 != 0)) {
        ar7 = *puVar2;
        ar6_00 = (int *)(unsigned)piVar5[2];
        ar5 = (uint *)(unsigned)0xfffffffc;
        piVar6 = (int *)(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(*piVar4)))(1,0xfffffffc,ar6_00,ar7));
      }
      if (((*puVar2 & (int)0x100) != 0) && (piVar5[10] = piVar5[10] + 1, *piVar4 != 0)) {
        ar7 = *puVar2;
        ar6_00 = (int *)(unsigned)piVar5[2];
        ar5 = (uint *)(unsigned)0xfffffffb;
        piVar6 = (int *)(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(*piVar4)))(1,0xfffffffb,ar6_00,ar7));
      }
      *puVar2 = (int)0xf00;
      (vsp = ((unsigned long)(fr0_ - 12)), pvr_1efaf4(piVar6,ar5,ar6_00,ar7));
      a7 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f4202(piVar6,ar5,ar6_00,ar7));
      if (a7 < 0) {
        if (*piVar4 != 0) {
          (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(*piVar4)))(1,0xfffffffa,piVar5[2],a7));
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1ef640(piVar6,ar5,ar6_00,ar7));
      }
    }
  }
  return a7;
}

__asm__(".globl _pvr_1ef84c\n.set _pvr_1ef84c, _pvr_1ef84c_def\n");
//@unit 8c1efa2a
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
undefined4 FUN_8c1efa2a_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1efa2a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  
  iVar3 = 0x8c470ed8;
  iVar2 = 0x8c470edc;
  bVar1 = *(byte *)(unsigned)((int)0xfb0 + *(undefined4 *)(unsigned)0x8c4727b4);
  uVar8 = 0;
  do {
    if (3 < (int)uVar8) {
      return 0;
    }
    if ((int)uVar8 < 0) {
      uVar6 = 1 >> (~uVar8 & 0x1f) + 1;
    }
    else {
      uVar6 = 1 << (uVar8 & 0x1f);
    }
    if ((uVar6 & bVar1) != 0) {
      pbVar7 = (&(*(undefined1 *)(unsigned)0x8c26bfac)) + uVar8;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efd14((uint)*pbVar7,ar5,ar6,ar7));
      puVar5 = (uint *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efd26((uint)*pbVar7,ar5,ar6,ar7));
      *(undefined1 *)(unsigned)(uVar8 + iVar3) = *(undefined1 *)(unsigned)(uVar8 + iVar2);
      if ((((*puVar5 & 0x80) != 0) && (*(char *)(unsigned)(iVar4 + 2) == '\0')) &&
         (*(char *)(unsigned)(iVar4 + 4) == '\b')) {
        uVar6 = (int)*(char *)(unsigned)(*(int *)(unsigned)(iVar4 + 8) + 8) & 4;
        *(char *)(unsigned)(uVar8 + iVar2) = (char)uVar6;
        ar5 = (int)*(char *)(unsigned)(uVar8 + iVar3) ^ uVar6;
        if ((uVar6 == 0) && (ar5 = ar5 & 0xff, ar5 != 0)) {
          return uVar8 + 1;
        }
      }
    }
    uVar8 = uVar8 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c1efa2a\n.set _FUN_8c1efa2a, _FUN_8c1efa2a_def\n");
//@unit 8c1efaf4
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
int pvr_1efaf4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "pvr_1efaf4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int a7;
  int iVar5;
  undefined4 a7_00;
  code *pcVar6;
  int iVar7;
  int a5;
  undefined4 a5_00;
  undefined4 *puVar8;
  
  iVar2 = 0x8c470be0;
  piVar1 = 0x8c4727b4;
  a7 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c1f43d2(ar4,ar5,ar6,ar7));
  if (a7 == -2) {
    *(undefined4 *)(unsigned)((int)0x10e8 + *piVar1) = 1;
  }
  else if (a7 < 0) {
    if ((code *)*(undefined4 *)(unsigned)0x8c470c18 != (code *)0x0) {
      (vsp = ((unsigned long)(fr0_ - 8)), (*(code *)xlat((unsigned long)(*(undefined4 *)(unsigned)0x8c470c18)))(2,0xfffffff8,*(undefined4 *)(unsigned)(iVar2 + 8),a7));
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c1f442a(ar4,ar5,ar6,ar7));
    a5 = (int)(short)0x3ff;
    iVar7 = *(undefined4 *)(unsigned)0x8c470e64 * 2;
    *(ushort *)(unsigned)(iVar2 + 0x30 + iVar7) =
         ((ushort)*(undefined4 *)(unsigned)0xa05f810c & 0x3ff) +
         *(short *)(unsigned)(iVar2 + 0x34 + iVar7) * ((ushort)*(undefined4 *)(unsigned)0xa05f80dc & 0x3ff);
    (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c1ef640(iVar7,a5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c1f4414(iVar7,a5,ar6,ar7));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c1f4734(iVar7,a5,ar6,ar7));
    if (iVar5 != 0) {
      if (((code *)*(undefined4 *)(unsigned)0x8c470c1c == (code *)0x0) ||
         (iVar5 = (vsp = ((unsigned long)(fr0_ - 8)), (*(code *)xlat((unsigned long)(*(undefined4 *)(unsigned)0x8c470c1c)))(iVar7,a5,ar6,ar7)), iVar5 != 0)) {
        iVar5 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c1efa2a(iVar7,a5,ar6,ar7));
        *(undefined4 *)(unsigned)0x8c470e70 = iVar5;
      }
      puVar8 = 0xa05f8040;
      if ((*(int *)(unsigned)((int)0xfbc + *piVar1) != 0) && (*(undefined4 *)(unsigned)0x8c470e70 != 0)) {
        *(undefined4 *)(unsigned)0x8c470e68 = *(undefined4 *)(unsigned)0xa05f8040;
        *puVar8 = *(undefined4 *)(unsigned)(*piVar1 + (int)0xfbc);
        *(undefined4 *)(unsigned)0xa05f80e8 = *(undefined4 *)(unsigned)0xa05f80e8 | 8;
        piVar3 = 0x8c470e8c;
        *(undefined4 *)(unsigned)0x8c470e6c = 1;
        *piVar3 = *piVar3 + 1;
      }
    }
    puVar8 = 0x8c470c20;
    for (iVar5 = 0; puVar4 = 0x8c470e64, iVar5 < 0x30; iVar5 = iVar5 + 1) {
      a7_00 = ar7;
      if (puVar8[2] != 0) {
        a5_00 = puVar8[1];
        iVar7 = (vsp = ((unsigned long)(fr0_ - 8)), thunk_FUN_8c1f461c(*puVar8,a5_00,ar6,ar7));
        a7_00 = ar7;
        if (iVar7 != 0) {
          pcVar6 = (code *)puVar8[2];
          puVar8[2] = 0;
          a7_00 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c1efd26(*puVar8,a5_00,ar6,ar7));
          ar6 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c1efd14(*puVar8,a5_00,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 8)), (*(code *)xlat((unsigned long)pcVar6))(*puVar8,puVar8[1],ar6,a7_00));
        }
      }
      puVar8 = puVar8 + 3;
      ar7 = a7_00;
    }
    *(undefined4 *)(unsigned)((int)0x10e8 + *piVar1) = 0;
    *puVar4 = *puVar4 ^ 1;
    *(int *)(unsigned)(iVar2 + 4) = *(int *)(unsigned)(iVar2 + 4) + 1;
  }
  return a7;
}

__asm__(".globl _pvr_1efaf4\n.set _pvr_1efaf4, _pvr_1efaf4_def\n");
//@unit 8c1efcae
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
uint FUN_8c1efcae_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1efcae";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 244; for (int i_ = 0; i_ < 244; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 ar4_00;
  byte in_MD = 0;
  byte bVar3;
  byte in_RB = 0;
  byte bVar4;
  byte in_BL = 0;
  byte bVar5;
  byte in_FD = 0;
  byte bVar6;
  byte in_M = 0;
  byte extraout_M = 0;
  byte in_Q = 0;
  byte extraout_Q = 0;
  byte in_IMASK = 0;
  byte bVar7;
  byte in_S = 0;
  byte extraout_S = 0;
  byte in_T = 0;
  byte extraout_T = 0;
  
  bVar5 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar3 = bVar5 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar7 = (byte)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  bVar6 = (byte)((((uint)in_Q << 8 | (uint)in_M << 9 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar5 = (bVar5 & 0x10) >> 4;
  bVar4 = (bVar3 & 0x20) >> 5;
  bVar3 = ((bVar3 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  *(undefined4 *)(unsigned)0xa05f6920 = *(undefined4 *)(unsigned)0xa05f6920 & (int)(int)0xffffcfff;
  iVar2 = 0x8c470910;
  puVar1 = ((void *)(unsigned)0x8c1fa54c);
  (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c1fa54c(*(undefined4 *)(unsigned)(0x8c470910 + 0xc),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 244)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(iVar2 + 0x10),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 244)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(iVar2 + 8),ar5,ar6,ar7));
  ar4_00 = *(undefined4 *)(unsigned)(iVar2 + 4);
  (vsp = ((unsigned long)(fr0_ - 244)), (*(code *)xlat((unsigned long)(puVar1)))(ar4_00,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c1f44cc(ar4_00,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 244)), memset(0x8c4709a0,0,(int)0x240,ar7));
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)extraout_T | (uint)extraout_S << 1 | (uint)bVar7 << 4 | (uint)extraout_Q << 8 |
          (uint)extraout_M << 9 | (uint)bVar6 << 0xf | (uint)bVar5 << 0x1c | (uint)bVar4 << 0x1d |
         (uint)bVar3 << 0x1e) & (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c1efcae\n.set _FUN_8c1efcae, _FUN_8c1efcae_def\n");
//@unit 8c1efd14
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
int FUN_8c1efd14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1efd14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 * 0x18 + 0x8c4709a0;
}

__asm__(".globl _FUN_8c1efd14\n.set _FUN_8c1efd14, _FUN_8c1efd14_def\n");
//@unit 8c1efd26
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
undefined4 FUN_8c1efd26_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1efd26";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f45c8(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c1efd26\n.set _FUN_8c1efd26, _FUN_8c1efd26_def\n");
//@unit 8c1efd34
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
undefined4 FUN_8c1efd34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1efd34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f45da(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c1efd34\n.set _FUN_8c1efd34, _FUN_8c1efd34_def\n");
//@unit 8c1efd42
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
undefined4 thunk_FUN_8c1f461c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "thunk_FUN_8c1f461c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f461c(vr4,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c1f461c\n.set _thunk_FUN_8c1f461c, _thunk_FUN_8c1f461c_def\n");
//@unit 8c1efd7c
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
undefined4 FUN_8c1efd7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1efd7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f55b8(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)((int)0x10e8 + *(undefined4 *)(unsigned)0x8c4727b4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_1efaf4(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1efd7c\n.set _FUN_8c1efd7c, _FUN_8c1efd7c_def\n");
//@unit 8c1efda2
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
undefined4 FUN_8c1efda2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1efda2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5684(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)((int)0x10e8 + *(undefined4 *)(unsigned)0x8c4727b4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_1efaf4(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1efda2\n.set _FUN_8c1efda2, _FUN_8c1efda2_def\n");
//@unit 8c1efdc8
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
undefined4 FUN_8c1efdc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1efdc8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5640(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)((int)0x10e8 + *(undefined4 *)(unsigned)0x8c4727b4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_1efaf4(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1efdc8\n.set _FUN_8c1efdc8, _FUN_8c1efdc8_def\n");
//@unit 8c1efdee
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
undefined4 FUN_8c1efdee_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1efdee";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f55fc(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)((int)0x10e8 + *(undefined4 *)(unsigned)0x8c4727b4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_1efaf4(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1efdee\n.set _FUN_8c1efdee, _FUN_8c1efdee_def\n");
//@unit 8c1efe14
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
undefined4 FUN_8c1efe14_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1efe14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5556(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)((int)0x10e8 + *(undefined4 *)(unsigned)0x8c4727b4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_1efaf4(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1efe14\n.set _FUN_8c1efe14, _FUN_8c1efe14_def\n");
//@unit 8c1efe3a
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
undefined4 FUN_8c1efe3a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1efe3a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f56c8(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)((int)0x10e8 + *(undefined4 *)(unsigned)0x8c4727b4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_1efaf4(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1efe3a\n.set _FUN_8c1efe3a, _FUN_8c1efe3a_def\n");
//@unit 8c1efe80
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
undefined4 FUN_8c1efe80_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1efe80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f571a(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)((int)0x10e8 + *(undefined4 *)(unsigned)0x8c4727b4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_1efaf4(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1efe80\n.set _FUN_8c1efe80, _FUN_8c1efe80_def\n");
//@unit 8c1efeac
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
undefined4 FUN_8c1efeac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1efeac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f577a(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)((int)0x10e8 + *(undefined4 *)(unsigned)0x8c4727b4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_1efaf4(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1efeac\n.set _FUN_8c1efeac, _FUN_8c1efeac_def\n");
//@unit 8c1efee0
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
undefined4 FUN_8c1efee0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1efee0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f57e4(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)((int)0x10e8 + *(undefined4 *)(unsigned)0x8c4727b4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_1efaf4(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1efee0\n.set _FUN_8c1efee0, _FUN_8c1efee0_def\n");
//@unit 8c1eff0c
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
undefined4 FUN_8c1eff0c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1eff0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5894(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)((int)0x10e8 + *(undefined4 *)(unsigned)0x8c4727b4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_1efaf4(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1eff0c\n.set _FUN_8c1eff0c, _FUN_8c1eff0c_def\n");
//@unit 8c1eff32
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
undefined4 FUN_8c1eff32_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1eff32";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f58e4(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)((int)0x10e8 + *(undefined4 *)(unsigned)0x8c4727b4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_1efaf4(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1eff32\n.set _FUN_8c1eff32, _FUN_8c1eff32_def\n");
//@unit 8c1eff58
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
undefined4 FUN_8c1eff58_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1eff58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5934(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)((int)0x10e8 + *(undefined4 *)(unsigned)0x8c4727b4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_1efaf4(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1eff58\n.set _FUN_8c1eff58, _FUN_8c1eff58_def\n");
//@unit 8c1eff9c
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
undefined4 FUN_8c1eff9c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1eff9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5850(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)((int)0x10e8 + *(undefined4 *)(unsigned)0x8c4727b4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_1efaf4(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1eff9c\n.set _FUN_8c1eff9c, _FUN_8c1eff9c_def\n");
//@unit 8c1effc2
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
undefined4 FUN_8c1effc2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1effc2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c1f4ec6(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)((int)0x10e8 + *(undefined4 *)(unsigned)0x8c4727b4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_1efaf4(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1effc2\n.set _FUN_8c1effc2, _FUN_8c1effc2_def\n");
//@unit 8c1effee
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
undefined4 thunk_FUN_8c1f4636_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "thunk_FUN_8c1f4636";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f4636(vr4,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c1f4636\n.set _thunk_FUN_8c1f4636, _thunk_FUN_8c1f4636_def\n");
//@unit 8c1efff4
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
undefined4 thunk_FUN_8c1f4646_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "thunk_FUN_8c1f4646";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f4646(vr4,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c1f4646\n.set _thunk_FUN_8c1f4646, _thunk_FUN_8c1f4646_def\n");
//@unit 8c1efffa
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
uint * FUN_8c1efffa_def(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1efffa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar2 = ar4 + 1;
  puVar4 = ar4 + 1;
  iVar1 = 0;
  uVar3 = 0x80000000;
  do {
    if ((uVar3 & *ar4) != 0) {
      if (ar5 == uVar3) {
        return puVar4;
      }
      puVar2 = puVar2 + 1;
      puVar4 = puVar2;
    }
    iVar1 = iVar1 + 1;
    uVar3 = uVar3 >> 1;
  } while (iVar1 < 0x20);
  return (uint *)(unsigned)0;
}

__asm__(".globl _FUN_8c1efffa\n.set _FUN_8c1efffa, _FUN_8c1efffa_def\n");
