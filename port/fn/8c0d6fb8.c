#include "../decls.h"
undefined4 * FUN_8c0d6fb8_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  int ar4_00;
  float fVar3;
  double dVar4;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  puVar2 = (undefined4 *)0x0;
  if (*ar4 != 0) {
    ar4_00 = *ar4;
    iVar1 = get_field_24_05c284(ar4_00,ar5,ar6,ar7);
    if ((iVar1 == 0) || (iVar1 == 0xf)) {
      puVar2 = (undefined4 *)FUN_8c02a1fc(ar4 + 5,ar5,ar6,ar7);
    }
    else {
      iVar1 = rand(ar4_00,ar5,ar6,ar7);
      if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0x47000000,(float)iVar1);
      }
      else {
        dVar4 = 1.4411521857012367e+18;
      }
      if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 / dVar4,0);
      }
      if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0x43b40000,fVar3);
      }
      else {
        dVar4 = -5629500670083072.0;
      }
      if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0xc3340000,fVar3);
      }
      else {
        dVar4 = -8.132627540887082e-251;
      }
      if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar6 == '\0') {
        ar4[6] = (int)fVar3;
      }
      else {
        *(undefined8 *)(ar4 + 6) = in_xd0;
      }
      iVar1 = rand(ar4_00,ar5,ar6,ar7);
      if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0x47000000,(float)iVar1);
      }
      else {
        dVar4 = 1.4411521857012367e+18;
      }
      if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 / dVar4,0);
      }
      if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0x43b40000,fVar3);
      }
      else {
        dVar4 = -5629500670083072.0;
      }
      if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      puVar2 = &DAT_8c0d7058;
      if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0xc3340000,fVar3);
      }
      else {
        dVar4 = -8.132627540887082e-251;
      }
      if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar6 == '\0') {
        ar4[7] = (int)fVar3;
      }
      else {
        *(undefined8 *)(ar4 + 7) = in_xd0;
      }
    }
  }
  return puVar2;
}

__asm__(".globl _FUN_8c0d6fb8\n.set _FUN_8c0d6fb8, _FUN_8c0d6fb8_def\n");
