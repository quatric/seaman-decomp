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
int FUN_8c06c89c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c06c89c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  if ((*(int *)(unsigned)(ar4 + 0x220) != 0) || (iVar1 = *(int *)(unsigned)(ar4 + 0x230), iVar1 != 7)) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4f0c(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign(ar5 + 0x4c,ar4 + 0x268,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), vec3_copy_8c023d8c(ar5 + 0x5c,ar4 + 0x278,ar6,ar7));
    *(char *)(unsigned)(ar5 + 0x68) = (char)*(undefined4 *)(unsigned)(ar4 + 0x210);
    *(char *)(unsigned)(ar5 + 0x69) = (char)*(undefined4 *)(unsigned)(ar4 + 0x218);
    *(char *)(unsigned)(ar5 + 0x6a) = (char)*(undefined4 *)(unsigned)(ar4 + 0x21c);
    *(char *)(unsigned)(ar5 + 0x6b) = (char)*(undefined4 *)(unsigned)(ar4 + 0x220);
    *(char *)(unsigned)(ar5 + 0x6c) = (char)*(undefined4 *)(unsigned)(ar4 + 0x230);
    if (cVar2 == '\0') {
      *(undefined4 *)(unsigned)(ar5 + 0x70) = *(undefined4 *)(unsigned)(ar4 + 0x244);
    }
    else {
      *(undefined8 *)(unsigned)(ar5 + 0x70) = *(undefined8 *)(unsigned)(ar4 + 0x244);
    }
    *(undefined2 *)(unsigned)(ar5 + 0x74) = *(undefined2 *)(unsigned)(ar4 + 0x264);
    *(undefined2 *)(unsigned)(ar5 + 0x76) = *(undefined2 *)(unsigned)(ar4 + 0x266);
    if (cVar2 == '\0') {
      *(undefined4 *)(unsigned)(ar5 + 0x78) = *(undefined4 *)(unsigned)(ar4 + 0x240);
      *(undefined4 *)(unsigned)(ar5 + 0x7c) = *(undefined4 *)(unsigned)(ar4 + 0x234);
      *(undefined4 *)(unsigned)(ar5 + 0x80) = *(undefined4 *)(unsigned)(ar4 + 0x238);
    }
    else {
      *(undefined8 *)(unsigned)(ar5 + 0x78) = *(undefined8 *)(unsigned)(ar4 + 0x240);
      *(undefined8 *)(unsigned)(ar5 + 0x7c) = *(undefined8 *)(unsigned)(ar4 + 0x234);
      *(undefined8 *)(unsigned)(ar5 + 0x80) = *(undefined8 *)(unsigned)(ar4 + 0x238);
    }
    iVar1 = 0x23c;
    if (cVar2 == '\0') {
      *(undefined4 *)(unsigned)(ar5 + 0x84) = *(undefined4 *)(unsigned)(ar4 + 0x23c);
    }
    else {
      *(undefined8 *)(unsigned)(ar5 + 0x84) = *(undefined8 *)(unsigned)(ar4 + 0x23c);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c06c89c\n.set _FUN_8c06c89c, _FUN_8c06c89c_def\n");
