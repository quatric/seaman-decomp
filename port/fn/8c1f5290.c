#include "../decls.h"
undefined4 FUN_8c1f5290_def(undefined4 ar4,byte *ar5,int ar6,char *ar7,uint *s0)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *ar5_00;
  uint *ar6_00;
  char *ar7_00;
  
  ar7_00 = ar7;
  FUN_8c1f518e(ar7,s0,ar6,ar7);
  ar7[2] = '\0';
  ar7[3] = '\0';
  ar5_00 = (char *)(uint)(byte)ar4;
  if ((ar5[2] & (byte)ar4) != 0) {
    ar7[4] = '\x01';
    *ar7 = '\0';
    *(int *)(ar7 + 0x24) = *(int *)(ar7 + 0x24) + 1;
  }
  if ((ar5[3] & (byte)ar4) != 0) {
    ar7[4] = '\x04';
    *ar7 = '\0';
    ar7[3] = '\x01';
    ar7[0x24] = '\0';
    ar7[0x25] = '\0';
    ar7[0x26] = '\0';
    ar7[0x27] = '\0';
  }
  piVar1 = 0x8c4727b4;
  ar6_00 = (uint *)(int)0xff;
  cVar2 = (char)0xff;
  if ((*ar5 & (byte)ar4) == 0) {
    ar7[4] = cVar2;
    *ar7 = '\0';
    goto LAB_8c1f535e;
  }
  if (ar7[7] == '\0') {
    cVar2 = *ar7;
joined_r0x8c1f5348:
    if (cVar2 == '\0') goto LAB_8c1f535e;
  }
  else {
    if (ar7[7] != '\x01') {
      if (ar7[7] == '\x04') {
        ar7[3] = '\x01';
        goto LAB_8c1f533a;
      }
      cVar2 = ar7[7];
      goto joined_r0x8c1f5348;
    }
    if (ar7[8] != '\x05') {
      iVar3 = (int)0x10d8;
      *(int *)(ar7 + 0x24) = *(int *)(ar7 + 0x24) + 1;
      if (*(uint *)(ar7 + 0x24) <= *(uint *)(iVar3 + *piVar1)) {
        ar7[4] = '\x01';
        goto LAB_8c1f535e;
      }
LAB_8c1f533a:
      *ar7 = '\0';
      ar7[4] = cVar2;
      ar7[0x24] = '\0';
      ar7[0x25] = '\0';
      ar7[0x26] = '\0';
      ar7[0x27] = '\0';
      goto LAB_8c1f535e;
    }
    ar7[2] = '\x01';
    *ar7 = '\x01';
  }
  ar7[4] = '\0';
LAB_8c1f535e:
  if ((((*ar7 != '\0') && (ar7[7] != '\0')) && (*(int *)(*(undefined4 *)0x8c4727b4 + (int)0x10c4) == 1))
     && ((*s0 != 0xffffffff && (*s0 != (int)(int)0xffffff00)))) {
    ar5_00 = (char *)((*s0 & 0xff) + 1);
    FUN_8c1f4780(s0,ar5_00,ar6_00,ar7_00);
  }
  if (ar7[2] != '\0') {
    *(undefined1 *)(ar6 + 0x10) = 0;
    ar5_00 = ar7;
    FUN_8c1f53c2(ar6,ar7,s0,ar7_00);
    ar6_00 = s0;
  }
  if (ar7[3] != '\0') {
    *(undefined1 *)(ar6 + 0x10) = 0;
    FUN_8c1f5506(ar6,ar5_00,ar6_00,ar7_00);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f5290\n.set _FUN_8c1f5290, _FUN_8c1f5290_def\n");
