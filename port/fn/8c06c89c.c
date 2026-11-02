#include "../decls.h"
int FUN_8c06c89c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  if ((*(int *)(ar4 + 0x220) != 0) || (iVar1 = *(int *)(ar4 + 0x230), iVar1 != 7)) {
    FUN_8c0f4f0c(ar4,ar5,ar6,ar7);
    Vec3_assign(ar5 + 0x4c,ar4 + 0x268,ar6,ar7);
    vec3_copy_8c023d8c(ar5 + 0x5c,ar4 + 0x278,ar6,ar7);
    *(char *)(ar5 + 0x68) = (char)*(undefined4 *)(ar4 + 0x210);
    *(char *)(ar5 + 0x69) = (char)*(undefined4 *)(ar4 + 0x218);
    *(char *)(ar5 + 0x6a) = (char)*(undefined4 *)(ar4 + 0x21c);
    *(char *)(ar5 + 0x6b) = (char)*(undefined4 *)(ar4 + 0x220);
    *(char *)(ar5 + 0x6c) = (char)*(undefined4 *)(ar4 + 0x230);
    if (cVar2 == '\0') {
      *(undefined4 *)(ar5 + 0x70) = *(undefined4 *)(ar4 + 0x244);
    }
    else {
      *(undefined8 *)(ar5 + 0x70) = *(undefined8 *)(ar4 + 0x244);
    }
    *(undefined2 *)(ar5 + 0x74) = *(undefined2 *)(ar4 + 0x264);
    *(undefined2 *)(ar5 + 0x76) = *(undefined2 *)(ar4 + 0x266);
    if (cVar2 == '\0') {
      *(undefined4 *)(ar5 + 0x78) = *(undefined4 *)(ar4 + 0x240);
      *(undefined4 *)(ar5 + 0x7c) = *(undefined4 *)(ar4 + 0x234);
      *(undefined4 *)(ar5 + 0x80) = *(undefined4 *)(ar4 + 0x238);
    }
    else {
      *(undefined8 *)(ar5 + 0x78) = *(undefined8 *)(ar4 + 0x240);
      *(undefined8 *)(ar5 + 0x7c) = *(undefined8 *)(ar4 + 0x234);
      *(undefined8 *)(ar5 + 0x80) = *(undefined8 *)(ar4 + 0x238);
    }
    iVar1 = 0x23c;
    if (cVar2 == '\0') {
      *(undefined4 *)(ar5 + 0x84) = *(undefined4 *)(ar4 + 0x23c);
    }
    else {
      *(undefined8 *)(ar5 + 0x84) = *(undefined8 *)(ar4 + 0x23c);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c06c89c\n.set _FUN_8c06c89c, _FUN_8c06c89c_def\n");
