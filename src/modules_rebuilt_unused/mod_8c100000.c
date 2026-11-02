/* Seaman (USA) region 0x8c100000-0x8c110000 (Ghidra decompiler) */

/* get_field_a528_100030 @ 8c100030 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_a528_100030(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c100038 + ar4);
}



/* FUN_8c10003c @ 8c10003c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10003c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c1000b4)(*(undefined4 *)(DAT_8c1000b0 + ar4),ar5,ar6,ar7);
  if ((((iVar1 == 0) &&
       (iVar1 = (*(code *)PTR_FUN_8c1000b8)(*(undefined4 *)(DAT_8c1000b0 + ar4),ar5,ar6,ar7),
       iVar1 == 0)) &&
      (iVar1 = (*(code *)PTR_input_is_mask_set_400_01ef20_8c1000bc)
                         (*(undefined4 *)(DAT_8c1000b0 + ar4),ar5,ar6,ar7), iVar1 == 0)) &&
     ((iVar1 = (*(code *)PTR_input_is_mask_set_200_01eff8_8c1000c0)
                         (*(undefined4 *)(DAT_8c1000b0 + ar4),ar5,ar6,ar7), iVar1 == 0 &&
      (iVar1 = (*(code *)PTR_FUN_8c1000c4)(*(undefined4 *)(DAT_8c1000b0 + ar4),ar5,ar6,ar7),
      iVar1 == 0)))) {
    return 1;
  }
  return 0;
}



/* FUN_8c1000c8 @ 8c1000c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1000c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c100140)(*(undefined4 *)(DAT_8c10013c + ar4),ar5,ar6,ar7);
  if ((((iVar1 == 1) &&
       (iVar1 = (*(code *)PTR_FUN_8c100144)(*(undefined4 *)(DAT_8c10013c + ar4),ar5,ar6,ar7),
       iVar1 == 0)) &&
      (iVar1 = (*(code *)PTR_FUN_8c100148)(*(undefined4 *)(DAT_8c10013c + ar4),ar5,ar6,ar7),
      iVar1 == 0)) &&
     ((iVar1 = (*(code *)PTR_input_is_mask_set_400_01ef20_8c10014c)
                         (*(undefined4 *)(DAT_8c10013c + ar4),ar5,ar6,ar7), iVar1 == 0 &&
      (iVar1 = (*(code *)PTR_input_is_mask_set_200_01eff8_8c100150)
                         (*(undefined4 *)(DAT_8c10013c + ar4),ar5,ar6,ar7), iVar1 == 0)))) {
    return 1;
  }
  return 0;
}



/* FUN_8c100154 @ 8c100154 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c100154(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_get_field_4_0637f8_8c1001c4)(ar4 + DAT_8c1001c0,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_FUN_8c1001cc)(*(undefined4 *)(DAT_8c1001c8 + ar4),ar5,ar6,ar7);
    if ((iVar1 == 1) &&
       (uVar2 = (*(code *)PTR_FUN_8c1001d0)(*(undefined4 *)(DAT_8c1001c8 + ar4),ar5,ar6,ar7),
       (ushort)uVar2 < 0x1e)) {
      return 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)PTR_FUN_8c1001cc)(*(undefined4 *)(DAT_8c1001c8 + ar4),ar5,ar6,ar7);
  }
  return uVar2;
}



/* FUN_8c1001d4 @ 8c1001d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1001d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(short *)(DAT_8c1001dc + ar4);
}



/* FUN_8c1001e0 @ 8c1001e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1001e0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c100224)(*(undefined4 *)(DAT_8c100220 + ar4),ar5,ar6,ar7);
  if ((iVar1 == 0) &&
     (iVar1 = (*(code *)PTR_FUN_8c100228)(*(undefined4 *)(DAT_8c100220 + ar4),ar5,ar6,ar7),
     iVar1 == 0)) {
    return 0;
  }
  return 1;
}



/* FUN_8c10022c @ 8c10022c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10022c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (*(code *)PTR_FUN_8c100294)(*(undefined4 *)(DAT_8c100290 + ar4),ar5,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = (*(code *)PTR_input_is_mask_set_20000_01ebd8_8c100298)
                      (*(undefined4 *)(DAT_8c100290 + ar4),ar5,ar6,ar7);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_input_is_mask_set_400_01ef20_8c10029c)
                        (*(undefined4 *)(DAT_8c100290 + ar4),ar5,ar6,ar7);
      if ((iVar1 == 0) && (*(int *)(DAT_8c1002a0 + ar4) != 3)) {
        (*(code *)PTR_FUN_8c1002a4)(ar4,1,ar6,ar7);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



/* FUN_8c1002a8 @ 8c1002a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1002a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (*(code *)PTR_input_is_mask_set_400_01ef20_8c100304)
                    (*(undefined4 *)(DAT_8c100300 + ar4),ar5,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = (*(code *)PTR_input_is_mask_set_10000_01ec68_8c100308)
                      (*(undefined4 *)(DAT_8c100300 + ar4),ar5,ar6,ar7);
    if (iVar1 == 0) {
      (*(code *)PTR_FUN_8c100314)(ar4 + DAT_8c100310,PTR_u____8c10030c,ar6,ar7);
      (*(code *)PTR_FUN_8c100318)(ar4,2,ar6,ar7);
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* FUN_8c10031c @ 8c10031c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10031c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (*(code *)PTR_get_field_4_0637f8_8c100394)(ar4 + DAT_8c100390,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_input_is_mask_set_10000_01ec68_8c10039c)
                      (*(undefined4 *)(DAT_8c100398 + ar4),ar5,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(DAT_8c10038c + ar4) == 2)) {
      (*(code *)PTR_FUN_8c1003a8)(ar4 + DAT_8c1003a4,PTR_u____8c1003a0,ar6,ar7);
      (*(code *)PTR_FUN_8c1003ac)(ar4,3,ar6,ar7);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c1003b0 @ 8c1003b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1003b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*DAT_8c100490 == '\0') {
    *DAT_8c100494 = 0;
    *DAT_8c100490 = '\x01';
  }
  iVar1 = (*(code *)PTR_get_field_4_0637f8_8c10049c)(ar4 + DAT_8c100498,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_input_is_mask_set_10000_01ec68_8c1004a4)
                      (*(undefined4 *)(DAT_8c1004a0 + ar4),ar5,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(DAT_8c1004a8 + ar4) == 2)) {
      iVar1 = (*(code *)PTR_input_is_mask_set_10000_01ec68_8c1004a4)
                        (*(undefined4 *)(DAT_8c1004a0 + ar4),ar5,ar6,ar7);
      if (iVar1 == 0) {
        *DAT_8c100494 = 0;
      }
      else {
        *DAT_8c100494 = 1;
      }
    }
    if ((*DAT_8c100494 == 1) &&
       (iVar1 = (*(code *)PTR_input_is_mask_set_10000_01ec68_8c1004a4)
                          (*(undefined4 *)(DAT_8c1004a0 + ar4),ar5,ar6,ar7), iVar1 == 0)) {
      *DAT_8c100494 = 0;
      (*(code *)PTR_FUN_8c1004ac)(ar4,2,ar6,ar7);
    }
    else if ((*DAT_8c100494 == 1) &&
            (iVar1 = (*(code *)PTR_input_is_mask_set_400_01ef20_8c1004b0)
                               (*(undefined4 *)(DAT_8c1004a0 + ar4),ar5,ar6,ar7), iVar1 == 0)) {
      *DAT_8c100494 = 0;
      (*(code *)PTR_FUN_8c1004ac)(ar4,0,ar6,ar7);
    }
    return *DAT_8c100494;
  }
  *DAT_8c100494 = 0;
  return 0;
}



/* FUN_8c1004b4 @ 8c1004b4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c1004b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  float fVar1;
  double dVar2;
  float fVar3;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (*(int *)(DAT_8c100514 + ar4) == 6) {
    (*(code *)PTR_FUN_8c100518)(ar4,0,ar6,ar7);
  }
  *(undefined2 *)(DAT_8c10051c + ar4) = 0x78;
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = *(undefined4 *)(ar4 + DAT_8c100520);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c100520);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c100524),in_fr1);
  }
  else {
    dVar2 = *(double *)(ar4 + DAT_8c100524);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c100520) = fVar1;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c100520) = in_xd0;
  }
  fVar1 = DAT_8c100528;
  fVar3 = _FUN_8c10052c;
  if (in_FPSCR_SZ == '\0') {
    fVar1 = *(float *)(ar4 + DAT_8c100520);
    fVar3 = DAT_8c100528;
  }
  if (in_FPSCR_PR != '\0' || fVar1 <= fVar3) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c100520) = DAT_8c100528;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c100520) = CONCAT44(_FUN_8c10052c,DAT_8c100528);
    }
  }
  return &DAT_8c100528;
}



/* FUN_8c10052c @ 8c10052c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c10052c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  float fVar1;
  double dVar2;
  float fVar3;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (*(int *)(DAT_8c10058c + ar4) == 6) {
    (*(code *)PTR_FUN_8c100590)(ar4,0,ar6,ar7);
  }
  *(undefined2 *)(DAT_8c100594 + ar4) = 0x78;
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = *(undefined4 *)(ar4 + DAT_8c100598);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c100598);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c10059c),in_fr1);
  }
  else {
    dVar2 = *(double *)(ar4 + DAT_8c10059c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c100598) = fVar1;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c100598) = in_xd0;
  }
  fVar1 = DAT_8c1005a0;
  fVar3 = _FUN_8c1005a4;
  if (in_FPSCR_SZ == '\0') {
    fVar1 = *(float *)(ar4 + DAT_8c100598);
    fVar3 = DAT_8c1005a0;
  }
  if (in_FPSCR_PR != '\0' || fVar3 <= fVar1) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c100598) = DAT_8c1005a0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c100598) = CONCAT44(_FUN_8c1005a4,DAT_8c1005a0);
    }
  }
  return &DAT_8c1005a0;
}



/* FUN_8c1005a4 @ 8c1005a4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c1005a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  float fVar1;
  double dVar2;
  float fVar3;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (*(int *)(DAT_8c100604 + ar4) == 6) {
    (*(code *)PTR_FUN_8c100608)(ar4,0,ar6,ar7);
  }
  *(undefined2 *)(DAT_8c10060c + ar4) = 0x78;
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = *(undefined4 *)(ar4 + DAT_8c100610);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c100610);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c100614),in_fr1);
  }
  else {
    dVar2 = *(double *)(ar4 + DAT_8c100614);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c100610) = fVar1;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c100610) = in_xd0;
  }
  fVar1 = DAT_8c100618;
  fVar3 = _FUN_8c10061c;
  if (in_FPSCR_SZ == '\0') {
    fVar1 = *(float *)(ar4 + DAT_8c100610);
    fVar3 = DAT_8c100618;
  }
  if (in_FPSCR_PR != '\0' || fVar3 <= fVar1) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c100610) = DAT_8c100618;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c100610) = CONCAT44(_FUN_8c10061c,DAT_8c100618);
    }
  }
  return &DAT_8c100618;
}



/* FUN_8c10061c @ 8c10061c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c10061c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  float fVar1;
  double dVar2;
  float fVar3;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (*(int *)(DAT_8c10067c + ar4) == 6) {
    (*(code *)PTR_FUN_8c100680)(ar4,0,ar6,ar7);
  }
  *(undefined2 *)(DAT_8c100684 + ar4) = 0x78;
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = *(undefined4 *)(ar4 + DAT_8c100688);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c100688);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c10068c),in_fr1);
  }
  else {
    dVar2 = *(double *)(ar4 + DAT_8c10068c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c100688) = fVar1;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c100688) = in_xd0;
  }
  fVar1 = DAT_8c100690;
  fVar3 = _FUN_8c100694;
  if (in_FPSCR_SZ == '\0') {
    fVar1 = *(float *)(ar4 + DAT_8c100688);
    fVar3 = DAT_8c100690;
  }
  if (in_FPSCR_PR != '\0' || fVar1 <= fVar3) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c100688) = DAT_8c100690;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c100688) = CONCAT44(_FUN_8c100694,DAT_8c100690);
    }
  }
  return &DAT_8c100690;
}



/* FUN_8c100694 @ 8c100694 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c100694(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1006b8)(ar4 + DAT_8c1006b4,PTR_u____8c1006b0,ar6,ar7);
  return uVar1;
}



/* FUN_8c1006bc @ 8c1006bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1006bc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1006d4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c1006d8 @ 8c1006d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1006d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar3 = DAT_8c100718;
  fVar4 = DAT_8c10071c;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = *(float *)(ar4 + DAT_8c100714);
    fVar4 = DAT_8c100718;
  }
  if ((in_FPSCR_PR != '\0' || fVar4 <= fVar3) ||
     (iVar1 = (*(code *)PTR_input_is_mask_set_400_01ef20_8c100720)
                        (*(undefined4 *)((int)DAT_8c10071c + ar4),ar5,ar6,ar7), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c100724 @ 8c100724 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c100724(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar3 = DAT_8c100764;
  fVar4 = DAT_8c100768;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = *(float *)(ar4 + DAT_8c100760);
    fVar4 = DAT_8c100764;
  }
  if ((in_FPSCR_PR != '\0' || fVar3 <= fVar4) ||
     (iVar1 = (*(code *)PTR_input_is_mask_set_400_01ef20_8c10076c)
                        (*(undefined4 *)((int)DAT_8c100768 + ar4),ar5,ar6,ar7), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c100770 @ 8c100770 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c100770(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar3 = DAT_8c1007b0;
  fVar4 = DAT_8c1007b4;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = *(float *)(ar4 + DAT_8c1007ac);
    fVar4 = DAT_8c1007b0;
  }
  if ((in_FPSCR_PR != '\0' || fVar3 <= fVar4) ||
     (iVar1 = (*(code *)PTR_input_is_mask_set_400_01ef20_8c1007b8)
                        (*(undefined4 *)((int)DAT_8c1007b4 + ar4),ar5,ar6,ar7), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c1007bc @ 8c1007bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1007bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar3 = DAT_8c1007fc;
  fVar4 = DAT_8c100800;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = *(float *)(ar4 + DAT_8c1007f8);
    fVar4 = DAT_8c1007fc;
  }
  if ((in_FPSCR_PR != '\0' || fVar4 <= fVar3) ||
     (iVar1 = (*(code *)PTR_input_is_mask_set_400_01ef20_8c100804)
                        (*(undefined4 *)((int)DAT_8c100800 + ar4),ar5,ar6,ar7), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c100808 @ 8c100808 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c100808(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar1 = DAT_8c100828;
  fVar2 = _FUN_8c10082c;
  if (in_FPSCR_SZ == '\0') {
    fVar1 = *(float *)(ar4 + DAT_8c100824);
    fVar2 = DAT_8c100828;
  }
  if (in_FPSCR_PR != '\0' || fVar2 <= fVar1) {
    return 0;
  }
  return 1;
}



/* FUN_8c10082c @ 8c10082c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c10082c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar1 = DAT_8c10084c;
  fVar2 = _FUN_8c100850;
  if (in_FPSCR_SZ == '\0') {
    fVar1 = *(float *)(ar4 + DAT_8c100848);
    fVar2 = DAT_8c10084c;
  }
  if (in_FPSCR_PR != '\0' || fVar1 <= fVar2) {
    return 0;
  }
  return 1;
}



/* FUN_8c100850 @ 8c100850 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c100850(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar1 = DAT_8c100870;
  fVar2 = _FUN_8c100874;
  if (in_FPSCR_SZ == '\0') {
    fVar1 = *(float *)(ar4 + DAT_8c10086c);
    fVar2 = DAT_8c100870;
  }
  if (in_FPSCR_PR != '\0' || fVar1 <= fVar2) {
    return 0;
  }
  return 1;
}



/* FUN_8c100874 @ 8c100874 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c100874(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar1 = DAT_8c100894;
  fVar2 = _FUN_8c100898;
  if (in_FPSCR_SZ == '\0') {
    fVar1 = *(float *)(ar4 + DAT_8c100890);
    fVar2 = DAT_8c100894;
  }
  if (in_FPSCR_PR != '\0' || fVar2 <= fVar1) {
    return 0;
  }
  return 1;
}



/* FUN_8c100898 @ 8c100898 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c100898(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar3 = DAT_8c1008d8;
  fVar4 = DAT_8c1008dc;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = *(float *)(ar4 + DAT_8c1008d4);
    fVar4 = DAT_8c1008d8;
  }
  if ((in_FPSCR_PR == '\0' && fVar3 < fVar4) ||
     (iVar1 = (*(code *)PTR_input_is_mask_set_10_01f2b4_8c1008e0)
                        (*(undefined4 *)((int)DAT_8c1008dc + ar4),ar5,ar6,ar7), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c1008e4 @ 8c1008e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1008e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar3 = DAT_8c100924;
  fVar4 = DAT_8c100928;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = *(float *)(ar4 + DAT_8c100920);
    fVar4 = DAT_8c100924;
  }
  if ((in_FPSCR_PR == '\0' && fVar4 < fVar3) ||
     (iVar1 = (*(code *)PTR_input_is_mask_set_20_01f22c_8c10092c)
                        (*(undefined4 *)((int)DAT_8c100928 + ar4),ar5,ar6,ar7), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c100930 @ 8c100930 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c100930(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar3 = DAT_8c100970;
  fVar4 = DAT_8c100974;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = *(float *)(ar4 + DAT_8c10096c);
    fVar4 = DAT_8c100970;
  }
  if ((in_FPSCR_PR == '\0' && fVar4 < fVar3) ||
     (iVar1 = (*(code *)PTR_input_is_mask_set_80_01f088_8c100978)
                        (*(undefined4 *)((int)DAT_8c100974 + ar4),ar5,ar6,ar7), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c10097c @ 8c10097c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10097c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar3 = DAT_8c1009bc;
  fVar4 = DAT_8c1009c0;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = *(float *)(ar4 + DAT_8c1009b8);
    fVar4 = DAT_8c1009bc;
  }
  if ((in_FPSCR_PR == '\0' && fVar3 < fVar4) ||
     (iVar1 = (*(code *)PTR_input_is_mask_set_40_01f160_8c1009c4)
                        (*(undefined4 *)((int)DAT_8c1009c0 + ar4),ar5,ar6,ar7), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c1009c8 @ 8c1009c8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1009c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar1 = DAT_8c1009e8;
  fVar2 = _FUN_8c1009ec;
  if (in_FPSCR_SZ == '\0') {
    fVar1 = *(float *)(ar4 + DAT_8c1009e4);
    fVar2 = DAT_8c1009e8;
  }
  if (in_FPSCR_PR != '\0' || fVar1 <= fVar2) {
    return 1;
  }
  return 0;
}



/* FUN_8c1009ec @ 8c1009ec callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1009ec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar1 = DAT_8c100a0c;
  fVar2 = _FUN_8c100a10;
  if (in_FPSCR_SZ == '\0') {
    fVar1 = *(float *)(ar4 + DAT_8c100a08);
    fVar2 = DAT_8c100a0c;
  }
  if (in_FPSCR_PR != '\0' || fVar2 <= fVar1) {
    return 1;
  }
  return 0;
}



/* FUN_8c100a10 @ 8c100a10 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c100a10(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar1 = DAT_8c100a30;
  fVar2 = _FUN_8c100a34;
  if (in_FPSCR_SZ == '\0') {
    fVar1 = *(float *)(ar4 + DAT_8c100a2c);
    fVar2 = DAT_8c100a30;
  }
  if (in_FPSCR_PR != '\0' || fVar2 <= fVar1) {
    return 1;
  }
  return 0;
}



/* FUN_8c100a34 @ 8c100a34 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c100a34(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar1 = DAT_8c100a54;
  fVar2 = _FUN_8c100a58;
  if (in_FPSCR_SZ == '\0') {
    fVar1 = *(float *)(ar4 + DAT_8c100a50);
    fVar2 = DAT_8c100a54;
  }
  if (in_FPSCR_PR != '\0' || fVar1 <= fVar2) {
    return 1;
  }
  return 0;
}



/* FUN_8c100a58 @ 8c100a58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c100a58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar3 = DAT_8c100aac;
  fVar4 = DAT_8c100ab0;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = *(float *)(ar4 + DAT_8c100aa8);
    fVar4 = DAT_8c100aac;
  }
  if (((in_FPSCR_PR != '\0' || fVar4 <= fVar3) ||
      (iVar1 = (*(code *)PTR_FUN_8c100ab4)(*(undefined4 *)((int)DAT_8c100ab0 + ar4),ar5,ar6,ar7),
      iVar1 == 0)) ||
     (iVar1 = (*(code *)PTR_FUN_8c100ab8)(*(undefined4 *)((int)DAT_8c100ab0 + ar4),ar5,ar6,ar7),
     iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c100abc @ 8c100abc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c100abc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar3 = DAT_8c100b10;
  fVar4 = DAT_8c100b14;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = *(float *)(ar4 + DAT_8c100b0c);
    fVar4 = DAT_8c100b10;
  }
  if (((in_FPSCR_PR != '\0' || fVar3 <= fVar4) ||
      (iVar1 = (*(code *)PTR_FUN_8c100b18)(*(undefined4 *)((int)DAT_8c100b14 + ar4),ar5,ar6,ar7),
      iVar1 == 0)) ||
     (iVar1 = (*(code *)PTR_FUN_8c100b1c)(*(undefined4 *)((int)DAT_8c100b14 + ar4),ar5,ar6,ar7),
     iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c100b20 @ 8c100b20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c100b20(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar3 = DAT_8c100b74;
  fVar4 = DAT_8c100b78;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = *(float *)(ar4 + DAT_8c100b70);
    fVar4 = DAT_8c100b74;
  }
  if (((in_FPSCR_PR != '\0' || fVar4 <= fVar3) ||
      (iVar1 = (*(code *)PTR_FUN_8c100b7c)(*(undefined4 *)((int)DAT_8c100b78 + ar4),ar5,ar6,ar7),
      iVar1 == 0)) ||
     (iVar1 = (*(code *)PTR_FUN_8c100b80)(*(undefined4 *)((int)DAT_8c100b78 + ar4),ar5,ar6,ar7),
     iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c100b84 @ 8c100b84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c100b84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar3 = DAT_8c100bd8;
  fVar4 = DAT_8c100bdc;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = *(float *)(ar4 + DAT_8c100bd4);
    fVar4 = DAT_8c100bd8;
  }
  if (((in_FPSCR_PR != '\0' || fVar3 <= fVar4) ||
      (iVar1 = (*(code *)PTR_FUN_8c100be0)(*(undefined4 *)((int)DAT_8c100bdc + ar4),ar5,ar6,ar7),
      iVar1 == 0)) ||
     (iVar1 = (*(code *)PTR_FUN_8c100be4)(*(undefined4 *)((int)DAT_8c100bdc + ar4),ar5,ar6,ar7),
     iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c100be8 @ 8c100be8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c100be8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar3 = DAT_8c100c28;
  fVar4 = DAT_8c100c2c;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = *(float *)(ar4 + DAT_8c100c24);
    fVar4 = DAT_8c100c28;
  }
  if ((in_FPSCR_PR != '\0' || fVar3 <= fVar4) ||
     (iVar1 = (*(code *)PTR_FUN_8c100c30)(*(undefined4 *)((int)DAT_8c100c2c + ar4),ar5,ar6,ar7),
     iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c100c34 @ 8c100c34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c100c34(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar3 = DAT_8c100c74;
  fVar4 = DAT_8c100c78;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = *(float *)(ar4 + DAT_8c100c70);
    fVar4 = DAT_8c100c74;
  }
  if ((in_FPSCR_PR != '\0' || fVar4 <= fVar3) ||
     (iVar1 = (*(code *)PTR_FUN_8c100c7c)(*(undefined4 *)((int)DAT_8c100c78 + ar4),ar5,ar6,ar7),
     iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c100c80 @ 8c100c80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c100c80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c100cb0)(*(undefined4 *)(DAT_8c100cac + ar4),ar5,ar6,ar7);
  return (uint)(iVar1 == 1);
}



/* FUN_8c100cb4 @ 8c100cb4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c100cb4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c100ce4)(*(undefined4 *)(DAT_8c100ce0 + ar4),ar5,ar6,ar7);
  return (uint)(iVar1 == 1);
}



/* FUN_8c100ce8 @ 8c100ce8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c100ce8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_input_is_mask_set_10000_01ec68_8c100d50)
                    (*(undefined4 *)(DAT_8c100d4c + ar4),ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_FUN_8c100d54)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(DAT_8c100d58 + ar4) = 0xf;
    }
    *(int *)(DAT_8c100d58 + ar4) = *(int *)(DAT_8c100d58 + ar4) + -1;
    if (0 < *(int *)(DAT_8c100d58 + ar4)) {
      return 1;
    }
  }
  *(undefined4 *)(DAT_8c100d58 + ar4) = 0;
  return 0;
}



/* FUN_8c100d5c @ 8c100d5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c100d5c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(int *)(DAT_8c100e38 + ar4) == 0) {
    iVar1 = (*(code *)PTR_FUN_8c100e3c)(ar4,5,ar6,ar7);
    if (((iVar1 == 1) || (iVar1 = (*(code *)PTR_FUN_8c100e3c)(ar4,10,ar6,ar7), iVar1 == 1)) ||
       (iVar1 = (*(code *)PTR_FUN_8c100e3c)(ar4,0xf,ar6,ar7), iVar1 == 1)) {
      *(undefined4 *)(DAT_8c100e38 + ar4) = 1;
    }
  }
  else {
    if ((((*(char *)(DAT_8c100e44 + ar4 + (uint)*(byte *)(DAT_8c100e40 + ar4) * 4) != '\0') ||
         (*(char *)(DAT_8c100e44 + ar4 + (*(byte *)(DAT_8c100e40 + ar4) - 1) * 4) != '\0')) ||
        (*(char *)(DAT_8c100e48 + ar4 + (uint)*(byte *)(DAT_8c100e40 + ar4) * 4) != '\0')) ||
       (*(char *)(DAT_8c100e48 + ar4 + (*(byte *)(DAT_8c100e40 + ar4) - 1) * 4) != '\0')) {
      return 1;
    }
    *(undefined4 *)(DAT_8c100e38 + ar4) = 0;
  }
  return 0;
}



/* FUN_8c100e4c @ 8c100e4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c100e4c(int ar4,ulonglong *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong *a5;
  byte bVar3;
  uint in_fr1;
  ulonglong uVar4;
  char in_FPSCR_SZ;
  
  uVar4 = (ulonglong)in_fr1;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar5 = 0;
  }
  else {
    *ar5 = uVar4;
  }
  a5 = ar5;
  iVar1 = (*(code *)PTR_input_is_mask_set_400_01ef20_8c100fe0)(DAT_8c100fdc,ar5,ar6,ar7);
  uVar2 = (undefined4)uVar4;
  if (iVar1 == 1) {
    *(undefined4 *)(DAT_8c100fe4 + ar4) = 0;
    uVar2 = 0;
  }
  else {
    if ((9 < *(int *)(DAT_8c100fe4 + ar4)) &&
       (*(int *)(DAT_8c100fe4 + ar4) = *(int *)(DAT_8c100fe4 + ar4) + 1,
       0x27 < *(int *)(DAT_8c100fe4 + ar4))) {
      *(undefined4 *)(DAT_8c100fe4 + ar4) = 0;
    }
    iVar1 = (*(code *)PTR_FUN_8c100fe8)(DAT_8c100fdc,a5,ar6,ar7);
    if ((iVar1 == 1) ||
       (iVar1 = (*(code *)PTR_input_is_mask_set_400_01ef20_8c100fe0)(DAT_8c100fdc,a5,ar6,ar7),
       iVar1 == 1)) {
      if (*(int *)(DAT_8c100fe4 + ar4) < 2) {
        *(undefined4 *)(DAT_8c100fe4 + ar4) = 0;
        uVar2 = 0;
      }
      else {
        if (*(int *)(DAT_8c100fe4 + ar4) == 2) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)ar5 = (undefined4)DAT_8c100fec;
          }
          else {
            *ar5 = CONCAT44(DAT_8c100fec._4_4_,(undefined4)DAT_8c100fec);
          }
        }
        else if (*(int *)(DAT_8c100fe4 + ar4) == 3) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)ar5 = DAT_8c100fec._4_4_;
          }
          else {
            *ar5 = CONCAT44(PTR_FUN_8c100ff4,DAT_8c100fec._4_4_);
          }
        }
        else if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)ar5 = 0x3f800000;
        }
        else {
          *ar5 = CONCAT44(0x3f800000,uVar2);
        }
        (*(code *)PTR_FUN_8c100ff4)(ar4,5,ar6,ar7);
        *(undefined4 *)(DAT_8c100fe4 + ar4) = 10;
        uVar2 = 2;
      }
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c100ff8)(DAT_8c100fdc,a5,ar6,ar7);
      if ((iVar1 == 1) &&
         (iVar1 = (*(code *)PTR_input_is_mask_set_400_01ef20_8c100fe0)(DAT_8c100fdc,a5,ar6,ar7),
         iVar1 != 1)) {
        *(undefined4 *)(DAT_8c100fe4 + ar4) = 1;
        uVar2 = 0;
      }
      else if (*(int *)(DAT_8c100fe4 + ar4) < 1) {
        uVar2 = 0;
      }
      else {
        for (bVar3 = 0; bVar3 < 0x78; bVar3 = bVar3 + 1) {
          if (*(char *)(DAT_8c101000 + ar4 + (uint)(byte)(*(char *)(DAT_8c100ffc + ar4) - bVar3) * 4
                       ) == '\0') {
            if (bVar3 < 0x3c) {
              return 0;
            }
            if (0x3b < bVar3) {
              (*(code *)PTR_FUN_8c100ff4)(ar4,4,ar6,ar7);
              *(undefined4 *)(DAT_8c100fe4 + ar4) = 2;
            }
            if (0x59 < bVar3) {
              *(undefined4 *)(DAT_8c100fe4 + ar4) = 3;
            }
            return 1;
          }
        }
        *(undefined4 *)(DAT_8c100fe4 + ar4) = 4;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



/* FUN_8c101004 @ 8c101004 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c101004(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  while (!bVar1) {
    if (*(int *)(DAT_8c101108 + ar4) != -1) {
      ar5 = *(undefined4 *)(DAT_8c101108 + ar4);
      iVar2 = (*(code *)PTR_FUN_8c101110)(DAT_8c10110c,ar5,ar6,ar7);
      if ((iVar2 == 1) || (iVar2 == 2)) {
        *(undefined4 *)(DAT_8c101108 + ar4) = 0xffffffff;
      }
    }
    bVar1 = true;
  }
  iVar2 = (*(code *)PTR_FUN_8c101118)(*(undefined4 *)(DAT_8c101114 + ar4),ar5,ar6,ar7);
  if (iVar2 == 1) {
    iVar2 = (*(code *)PTR_FUN_8c10111c)(*(undefined4 *)(DAT_8c101114 + ar4),ar5,ar6,ar7);
    if (iVar2 == 1) {
      (*(code *)PTR_FUN_8c101120)(ar4,ar5,ar6,ar7);
      *(undefined1 *)(DAT_8c101124 + ar4) = 1;
      *(int *)(DAT_8c101128 + ar4) = *(int *)(DAT_8c101128 + ar4) + 1;
      goto LAB_8c1010c2;
    }
  }
  *(undefined1 *)(DAT_8c101124 + ar4) = 0;
LAB_8c1010c2:
  (*(code *)PTR_FUN_8c10112c)(ar4,ar5,ar6,ar7);
  if (*(int *)(DAT_8c101130 + ar4) == 1) {
    iVar2 = (*(code *)PTR_FUN_8c101134)(ar4,ar5,ar6,ar7);
  }
  else {
    iVar2 = (int)*(char *)(ar4 + 0x28);
    if (iVar2 == 4) {
      (*(code *)PTR_FUN_8c101134)(ar4,ar5,ar6,ar7);
      iVar2 = (*(code *)PTR_FUN_8c101138)(ar4,ar5,ar6,ar7);
    }
  }
  return iVar2;
}



/* get_field_b0_10113c @ 8c10113c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_b0_10113c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c101144 + ar4);
}



/* FUN_8c101148 @ 8c101148 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c101148(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c101150;
  *(undefined4 *)(DAT_8c101150 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c101154 @ 8c101154 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c101154(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(int *)(DAT_8c101170 + ar4) == 1) && (*(int *)(DAT_8c101174 + ar4) == 1)) {
    return 1;
  }
  return 0;
}



/* get_field_b8_101178 @ 8c101178 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint get_field_b8_101178(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (uint)*(byte *)(DAT_8c101184 + ar4);
}



/* FUN_8c101188 @ 8c101188 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c101188(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_8c1011a8 + ar4);
  if (iVar1 == 1) {
    iVar1 = (*(code *)PTR_FUN_8c1011ac)(ar4,ar5,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c1011b0 @ 8c1011b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1011b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c1011dc)
                    ((uint)*(ushort *)(DAT_8c1011d8 + ar4),0x1e,ar6,ar7);
  return uVar1;
}



/* FUN_8c1011e0 @ 8c1011e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1011e0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c101204)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_ret_const_1_0ffb90_8c10120c)(ar4 + DAT_8c101208,ar5,ar6,ar7);
  return 1;
}



/* FUN_8c101210 @ 8c101210 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined * FUN_8c101210(int ar4,undefined8 *ar5,undefined8 *ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  char in_FPSCR_SZ;
  
  if (*(int *)(DAT_8c101240 + ar4) == 6) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)ar5 = *(undefined4 *)PTR_DAT_8c101244;
      puVar1 = PTR_DAT_8c101244;
      *(undefined4 *)ar6 = *(undefined4 *)PTR_DAT_8c101244;
    }
    else {
      *ar5 = *(undefined8 *)PTR_DAT_8c101244;
      puVar1 = PTR_DAT_8c101244;
      *ar6 = *(undefined8 *)PTR_DAT_8c101244;
    }
    return puVar1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar5 = *(undefined4 *)(ar4 + DAT_8c101248);
  }
  else {
    *ar5 = *(undefined8 *)(ar4 + DAT_8c101248);
  }
  iVar2 = DAT_8c10124c;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar6 = *(undefined4 *)(ar4 + DAT_8c10124c);
  }
  else {
    *ar6 = *(undefined8 *)(ar4 + DAT_8c10124c);
  }
  return (undefined *)iVar2;
}



/* FUN_8c101250 @ 8c101250 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c101250(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  *(undefined4 *)(DAT_8c10130c + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c101310) = (undefined4)DAT_8c101314;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c101310) = CONCAT44(DAT_8c101314._4_4_,(undefined4)DAT_8c101314);
  }
  uStack_c = DAT_8c10131c;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c101314._4_4_) = DAT_8c10131c;
    uStack_c = 0;
    uStack_8 = in_PR;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c101314._4_4_) = CONCAT44(DAT_8c101320,DAT_8c10131c);
    uStack_8 = 0;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c101320) = uStack_c;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c101320) = CONCAT44(uStack_8,uStack_c);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c101324) = uStack_c;
    uStack_10 = 0;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c101324) = CONCAT44(uStack_8,uStack_c);
    uStack_10 = uStack_c;
    uStack_c = 0;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c101328) = uStack_10;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c101328) = CONCAT44(uStack_c,uStack_10);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c10132c) = uStack_10;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c10132c) = CONCAT44(uStack_c,uStack_10);
  }
  *(undefined4 *)(DAT_8c101330 + ar4) = 0;
  uVar1 = *(undefined4 *)(DAT_8c101330 + ar4);
  (*(code *)PTR_FUN_8c101338)(ar4 + DAT_8c101334,uVar1,ar6,ar7);
  *(undefined2 *)(DAT_8c10133c + ar4) = 0x78;
  *(undefined4 *)(DAT_8c101340 + ar4) = 0;
  *(undefined4 *)(DAT_8c101344 + ar4) = 0xffffffff;
  *(undefined2 *)(DAT_8c101348 + ar4) = 0;
  (*(code *)PTR_FUN_8c10134c)(ar4,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c101350)(ar4,uVar1,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c101354)(ar4,uVar1,ar6,ar7);
  return uVar1;
}



/* FUN_8c101358 @ 8c101358 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c101358(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  
  iVar3 = 0;
  iVar2 = 0;
  cVar4 = *(char *)(DAT_8c1013ec + ar4) + -0x50;
  do {
    if (cVar4 == *(char *)(DAT_8c1013ec + ar4)) {
      return 0;
    }
    bVar1 = false;
    for (bVar5 = 0; bVar5 < 10; bVar5 = bVar5 + 1) {
      if (*(char *)(DAT_8c1013f0 + ar4 + (uint)(byte)(cVar4 + bVar5) * 4) == '\x01') {
        bVar1 = true;
        break;
      }
    }
    if (bVar1) {
      iVar3 = iVar3 + 1;
      if (iVar2 < iVar3) {
        iVar2 = iVar3;
      }
    }
    else {
      iVar3 = 0;
    }
    if (4 < iVar2) {
      return 1;
    }
    cVar4 = cVar4 + '\n';
  } while( true );
}



/* FUN_8c1013f4 @ 8c1013f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1013f4(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *ar5;
  if (iVar1 == 0) {
    if (ar6 == 0) {
      *ar5 = 1;
      return 1;
    }
  }
  else {
    if (iVar1 == 1) {
      if (ar6 == 0) {
        *ar5 = 1;
        return 1;
      }
      if (ar6 == 1) {
        *ar5 = 2;
        return 2;
      }
      *ar5 = 0;
      return 0;
    }
    if (iVar1 == 2) {
      if (ar6 == 1) {
        *ar5 = 2;
        return 2;
      }
      if (ar6 == 2) {
        *ar5 = 3;
        return 3;
      }
      *ar5 = 0;
      return 0;
    }
    if (iVar1 != 3) {
      return iVar1;
    }
    if (ar6 == 2) {
      *ar5 = 3;
      return 3;
    }
    if (ar6 == 3) {
      *ar5 = 4;
      return 4;
    }
    *ar5 = 0;
  }
  return 0;
}



/* FUN_8c101480 @ 8c101480 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c101480(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *ar5;
  if (iVar1 == 0) {
    if (ar6 == 3) {
      *ar5 = 1;
      return 1;
    }
  }
  else {
    if (iVar1 == 1) {
      if (ar6 == 3) {
        *ar5 = 1;
        return 1;
      }
      if (ar6 == 2) {
        *ar5 = 2;
        return 2;
      }
      *ar5 = 0;
      return 0;
    }
    if (iVar1 == 2) {
      if (ar6 == 2) {
        *ar5 = 2;
        return 2;
      }
      if (ar6 == 1) {
        *ar5 = 3;
        return 3;
      }
      *ar5 = 0;
      return 0;
    }
    if (iVar1 != 3) {
      return iVar1;
    }
    if (ar6 == 1) {
      *ar5 = 3;
      return 3;
    }
    if (ar6 == 0) {
      *ar5 = 4;
      return 4;
    }
    ar6 = 0;
    *ar5 = 0;
  }
  return ar6;
}



/* FUN_8c101510 @ 8c101510 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c101510(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined4 a6;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int aiStack_24 [2];
  
  aiStack_24[0] = 0;
  iStack_28 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  bVar5 = *(char *)(DAT_8c101678 + ar4) + (char)ar5 * -8;
  do {
    if (bVar5 == *(byte *)(DAT_8c101678 + ar4)) {
      return 0;
    }
    cVar1 = *(char *)(DAT_8c10167c + ar4 + (uint)bVar5 * 4);
    cVar2 = *(char *)(DAT_8c101680 + ar4 + (uint)bVar5 * 4);
    cVar3 = *(char *)(DAT_8c10167c + ar4 + (uint)(byte)(bVar5 + (char)ar5) * 4);
    cVar4 = *(char *)(DAT_8c101680 + ar4 + (uint)(byte)(bVar5 + (char)ar5) * 4);
    if ((cVar1 < cVar3) && (cVar4 < cVar2)) {
      a6 = 0;
LAB_8c1015f0:
      (*(code *)PTR_FUN_8c101684)(ar4,aiStack_24,a6,ar7);
      if (aiStack_24[0] == 4) {
        iStack_28 = iStack_28 + 1;
        aiStack_24[0] = 0;
        if (1 < iStack_28) {
          return 1;
        }
      }
      (*(code *)PTR_FUN_8c101688)(ar4,&iStack_2c,a6,ar7);
      if (iStack_2c == 4) {
        iStack_30 = iStack_30 + 1;
        iStack_2c = 0;
        if (1 < iStack_30) {
          return 1;
        }
      }
    }
    else {
      if ((cVar1 < cVar3) && (cVar2 < cVar4)) {
        a6 = 1;
        goto LAB_8c1015f0;
      }
      if ((cVar3 < cVar1) && (cVar2 < cVar4)) {
        a6 = 2;
        goto LAB_8c1015f0;
      }
      if ((cVar3 < cVar1) && (cVar4 < cVar2)) {
        a6 = 3;
        goto LAB_8c1015f0;
      }
    }
    bVar5 = bVar5 + (char)ar5;
  } while( true );
}



/* FUN_8c10168c @ 8c10168c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c10168c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c101698;
  *(undefined4 *)(DAT_8c101698 + ar4) = 0;
  return iVar1;
}



/* FUN_8c10169c @ 8c10169c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c10169c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_memset_8c1016dc)(ar4 + DAT_8c1016d8,0,DAT_8c1016d4,ar7);
  *(undefined1 *)(DAT_8c1016e0 + ar4) = 0;
  *(undefined4 *)(DAT_8c1016e4 + ar4) = 0;
  *(undefined4 *)(DAT_8c1016e8 + ar4) = 0;
  iVar1 = DAT_8c1016ec;
  *(undefined4 *)(DAT_8c1016ec + ar4) = 0;
  return iVar1;
}



/* FUN_8c1016f0 @ 8c1016f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1016f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  *(char *)(DAT_8c101768 + ar4) = *(char *)(DAT_8c101768 + ar4) + '\x01';
  puVar2 = (undefined1 *)(ar4 + (uint)*(byte *)(DAT_8c101768 + ar4) * 4 + DAT_8c10176c);
  uVar1 = (*(code *)PTR_input_get_word_a538_8c101774)(DAT_8c101770,ar5,ar6,ar7);
  *puVar2 = (char)uVar1;
  uVar1 = (*(code *)PTR_input_get_word_a53c_8c101778)(DAT_8c101770,ar5,ar6,ar7);
  puVar2[1] = (char)uVar1;
  uVar1 = (*(code *)PTR_FUN_8c10177c)(DAT_8c101770,ar5,ar6,ar7);
  puVar2[2] = (char)uVar1;
  uVar1 = (*(code *)PTR_input_is_mask_set_10000_01ec68_8c101780)(DAT_8c101770,ar5,ar6,ar7);
  puVar2[3] = (char)uVar1;
  return uVar1;
}



/* FUN_8c101784 @ 8c101784 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c101784(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  
  *(undefined4 *)(ar4 + 0x2c) = 0;
  for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
    *(undefined4 *)(ar4 + (uint)bVar3 * 0x10 + 0x38) = 0xffffffff;
  }
  bVar1 = false;
  while (!bVar1) {
    *(undefined4 *)(DAT_8c1017ec + ar4) = 0xffffffff;
    bVar1 = true;
  }
  uVar2 = (*(code *)PTR_FUN_8c1017f0)(ar4,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c1017f4 @ 8c1017f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1017f4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int a4;
  undefined4 a5;
  
  *(char *)(ar4 + 0x28) = *(char *)(ar4 + 0x28) + '\x01';
  a5 = 5;
  a4 = (int)*(char *)(ar4 + 0x28);
  uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c1019d0)(a4,5,ar6,ar7);
  *(char *)(ar4 + 0x28) = (char)uVar1;
  uVar1 = (*(code *)PTR_sh4_tmu_1f88e6_8c1019d4)(a4,a5,ar6,ar7);
  *(undefined4 *)(*(char *)(ar4 + 0x28) * 8 + ar4) = uVar1;
  *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(*(char *)(ar4 + 0x28) * 8 + ar4);
  if (*(char *)(ar4 + 0x28) == '\0') {
    *(undefined4 *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4) = 0;
  }
  else {
    ar6 = *(undefined4 *)(*(char *)(ar4 + 0x28) * 8 + ar4);
    a5 = *(undefined4 *)((*(char *)(ar4 + 0x28) + -1) * 8 + ar4);
    uVar1 = (*(code *)PTR_FUN_8c1019d8)(ar4,a5,ar6,ar7);
    *(undefined4 *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4) = uVar1;
  }
  uVar2 = 0;
  if (*(int *)(DAT_8c1019dc + ar4) != 0) {
    if (*(uint *)(DAT_8c1019e0 + ar4) < *(uint *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4)) {
      if (DAT_8c1019e4 <
          (uint)(*(int *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4) - *(int *)(DAT_8c1019e0 + ar4))) {
        uVar2 = (*(code *)PTR_FUN_8c1019e8)(ar4,a5,ar6,ar7);
      }
      else {
        uVar2 = DAT_8c1019ec;
        if (DAT_8c1019ec <
            (uint)(*(int *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4) - *(int *)(DAT_8c1019e0 + ar4))) {
          *(undefined1 *)(DAT_8c1019f0 + ar4) = 2;
          uVar2 = DAT_8c1019f4;
          *(undefined4 *)(DAT_8c1019f4 + ar4) = 0;
        }
      }
    }
    else {
      uVar2 = *(uint *)(DAT_8c1019e0 + ar4);
      if (*(uint *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4) < *(uint *)(DAT_8c1019e0 + ar4)) {
        if (DAT_8c1019e4 <
            (uint)(*(int *)(DAT_8c1019e0 + ar4) - *(int *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4))) {
          uVar2 = (*(code *)PTR_FUN_8c1019e8)(ar4,a5,ar6,ar7);
        }
        else {
          uVar2 = DAT_8c1019ec;
          if (DAT_8c1019ec <
              (uint)(*(int *)(DAT_8c1019e0 + ar4) - *(int *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4)))
          {
            *(undefined1 *)(DAT_8c1019f0 + ar4) = 2;
            uVar2 = DAT_8c1019f4;
            *(undefined4 *)(DAT_8c1019f4 + ar4) = 0;
          }
        }
      }
    }
  }
  return uVar2;
}



/* FUN_8c1019f8 @ 8c1019f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1019f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a6;
  uint uVar1;
  uint uVar2;
  undefined4 a5;
  
  a6 = (*(code *)PTR_sh4_tmu_1f88e6_8c101a3c)(ar4,ar5,ar6,ar7);
  a5 = *(undefined4 *)(ar4 + 0x2c);
  uVar1 = (*(code *)PTR_FUN_8c101a40)(ar4,a5,a6,ar7);
  uVar2 = DAT_8c101a44;
  if (DAT_8c101a44 < uVar1) {
    uVar2 = (*(code *)PTR_FUN_8c101a48)(ar4,a5,a6,ar7);
  }
  return uVar2;
}



/* FUN_8c101a4c @ 8c101a4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c101a4c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(DAT_8c101b3c + ar4) == 0) {
    for (bVar2 = 0; bVar2 < 5; bVar2 = bVar2 + 1) {
      uVar3 = *(int *)(ar4 + (uint)bVar2 * 8 + 4) + uVar3;
    }
    uVar3 = uVar3 >> 2;
    uVar1 = DAT_8c101b40;
    if ((uVar3 < DAT_8c101b40) && (uVar1 = DAT_8c101b44, DAT_8c101b44 < uVar3)) {
      uVar1 = (*(code *)PTR_FUN_8c101b48)(ar4,uVar3,ar6,ar7);
    }
  }
  else {
    if (*(int *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4) == 0) {
      uVar3 = *(uint *)(DAT_8c101b4c + ar4);
    }
    else {
      uVar3 = *(uint *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4);
    }
    if ((uVar3 < DAT_8c101b40) && (DAT_8c101b44 < uVar3)) {
      uVar1 = DAT_8c101b50;
      if (*(uint *)(DAT_8c101b4c + ar4) < uVar3) {
        if (DAT_8c101b50 < uVar3 - *(int *)(DAT_8c101b4c + ar4)) {
          uVar1 = (*(code *)PTR_FUN_8c101b54)(ar4,uVar3,ar6,ar7);
        }
      }
      else if (DAT_8c101b50 < *(int *)(DAT_8c101b4c + ar4) - uVar3) {
        uVar1 = (*(code *)PTR_FUN_8c101b54)(ar4,uVar3,ar6,ar7);
      }
    }
    else {
      uVar1 = (*(code *)PTR_FUN_8c101b58)(ar4,ar5,ar6,ar7);
    }
  }
  return uVar1;
}



/* FUN_8c101b5c @ 8c101b5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c101b5c(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  
  uVar3 = DAT_8c101be8;
  if (((DAT_8c101be8 < ar5) && (uVar3 = DAT_8c101bec, DAT_8c101bec < ar5)) &&
     (uVar3 = DAT_8c101bf0, ar5 <= DAT_8c101bf0)) {
    uVar3 = DAT_8c101bf4;
  }
  *(uint *)(DAT_8c101bf8 + ar4) = uVar3;
  *DAT_8c101bfc = *(uint *)(DAT_8c101bf8 + ar4) >> 3;
  for (bVar4 = 0; bVar4 < 4; bVar4 = bVar4 + 1) {
    uVar1 = (*(code *)PTR_FUN_8c101c04)(DAT_8c101c00,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + (uint)bVar4 * 0x10 + 0x38) = uVar1;
  }
  *(undefined4 *)(DAT_8c101c08 + ar4) = 1;
  iVar2 = DAT_8c101c0c;
  *(undefined4 *)(DAT_8c101c0c + ar4) = 1;
  return iVar2;
}



/* FUN_8c101c10 @ 8c101c10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c101c10(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = DAT_8c101c4c;
  if (((DAT_8c101c4c < ar5) && (uVar1 = DAT_8c101c50, DAT_8c101c50 < ar5)) &&
     (uVar1 = DAT_8c101c54, ar5 <= DAT_8c101c54)) {
    uVar1 = DAT_8c101c58;
  }
  *(uint *)(DAT_8c101c5c + ar4) = uVar1;
  uVar1 = *(uint *)(DAT_8c101c5c + ar4) >> 3;
  *DAT_8c101c60 = uVar1;
  return uVar1;
}



/* FUN_8c101c64 @ 8c101c64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c101c64(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  
  (*(code *)PTR_FUN_8c101d70)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c101d74 + ar4) = 0;
  *(undefined1 *)(DAT_8c101d78 + ar4) = 0;
  *(undefined4 *)(DAT_8c101d7c + ar4) = DAT_8c101d80;
  *(undefined4 *)(DAT_8c101d84 + ar4) = 0;
  for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
    *(undefined4 *)(ar4 + (uint)bVar3 * 0x10 + 0x30) = 0;
    *(undefined4 *)(ar4 + (uint)bVar3 * 0x10 + 0x34) = 0;
    if (*(int *)(ar4 + (uint)bVar3 * 0x10 + 0x38) != -1) {
      (*(code *)PTR_FUN_8c101d8c)
                (DAT_8c101d88,*(undefined4 *)(ar4 + (uint)bVar3 * 0x10 + 0x38),ar6,ar7);
      *(undefined4 *)(ar4 + (uint)bVar3 * 0x10 + 0x38) = 0xffffffff;
    }
    *(undefined4 *)(ar4 + (uint)bVar3 * 0x10 + 0x3c) = 0;
  }
  bVar1 = false;
  while (!bVar1) {
    *(undefined4 *)(DAT_8c101d90 + ar4) = 0;
    *(undefined4 *)(DAT_8c101d94 + ar4) = 0;
    *(undefined4 *)(DAT_8c101d98 + ar4) = 0;
    bVar1 = true;
  }
  iVar2 = DAT_8c101d9c;
  *(undefined4 *)(DAT_8c101d9c + ar4) = 0;
  return iVar2;
}



/* FUN_8c101da0 @ 8c101da0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c101da0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  for (cVar1 = '\0'; cVar1 < '\x05'; cVar1 = cVar1 + '\x01') {
    *(undefined4 *)(cVar1 * 8 + ar4) = 0;
    *(undefined4 *)(ar4 + cVar1 * 8 + 4) = 0;
  }
  *(undefined1 *)(ar4 + 0x28) = 0xff;
  return 0x28;
}



/* FUN_8c101de0 @ 8c101de0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c101de0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a4;
  undefined4 uVar1;
  
  uVar1 = ar6;
  a4 = (*(code *)PTR_FUN_8c101e14)(ar5,ar6,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c101e18)(a4,ar6,uVar1,ar7);
  return uVar1;
}



/* FUN_8c101e1c @ 8c101e1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c101e1c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int a6;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint auStack_cc [4];
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  
  uVar3 = (*(code *)PTR_sh4_tmu_1f88e6_8c102070)(ar4,PTR_sh4_tmu_1f88e6_8c102070,ar6,ar7);
  *(undefined4 *)((int)auStack_cc + DAT_8c102074) = uVar3;
  a6 = *(int *)((int)auStack_cc + DAT_8c102074);
  *(undefined4 *)((int)auStack_cc + DAT_8c102078) = 0;
  bVar1 = false;
  bVar2 = false;
  *(undefined4 *)((int)auStack_cc + DAT_8c10207c) = 0;
  if (0x10 < *(uint *)(DAT_8c102080 + ar4)) {
    *(undefined4 *)((int)auStack_cc + DAT_8c102084) = *(undefined4 *)(ar4 + 100);
    iVar7 = *DAT_8c102088;
    iVar5 = *(int *)(PTR_DAT_8c10208c + *(int *)((int)auStack_cc + DAT_8c102084) * 4);
    uVar3 = (*(code *)PTR_FUN_8c102090)(ar4,*(undefined4 *)(ar4 + 0x60),a6,ar7);
    *(undefined4 *)((int)auStack_cc + DAT_8c102094) = uVar3;
    if ((*(int *)(ar4 + 0x6c) == 0) ||
       ((uint)(iVar7 * iVar5) <= *(uint *)((int)auStack_cc + DAT_8c102094))) {
      iStack_50 = *(int *)(ar4 + 100);
      (*(code *)PTR_FUN_8c1020a0)
                (DAT_8c10209c,*(undefined4 *)(ar4 + 0x68),
                 *(undefined4 *)(PTR_DAT_8c102098 + iStack_50 * 4),ar7);
      if (*(int *)(ar4 + 100) == 0) {
        *(undefined4 *)((int)auStack_cc + DAT_8c10207c) = 1;
      }
      iVar5 = *(int *)(ar4 + 100);
      if ((iVar5 == 0) || (*(int *)(ar4 + 100) == 0x1a)) {
        bVar1 = true;
      }
      if ((*(int *)(ar4 + 100) == 0xe) || (*(int *)(ar4 + 100) == 0x28)) {
        bVar2 = true;
      }
      if ((bVar1) || (bVar2)) {
        *(undefined4 *)((int)auStack_cc + DAT_8c102078) = 1;
      }
      *(int *)(ar4 + 0x60) = a6;
      *(int *)(ar4 + 100) = *(int *)(ar4 + 100) + 1;
      iStack_54 = ar4;
      uStack_58 = (*(code *)PTR_libgcc_divide_helper_0103d0_8c1020a4)
                            (*(undefined4 *)(ar4 + 100),0x32,iVar5,ar7);
      *(undefined4 *)(ar4 + 100) = uStack_58;
      *(undefined4 *)(ar4 + 0x6c) = 1;
    }
  }
  iStack_5c = *(int *)(ar4 + 0x54);
  iVar7 = *DAT_8c102088;
  iVar5 = *(int *)(PTR_DAT_8c1020a8 + iStack_5c * 4);
  uVar3 = (*(code *)PTR_FUN_8c102090)(ar4,*(undefined4 *)(ar4 + 0x50),a6,ar7);
  *(undefined4 *)((int)auStack_cc + DAT_8c1020ac) = uVar3;
  if (((*(int *)(ar4 + 0x5c) == 0) ||
      ((uint)(iVar7 * iVar5) <= *(uint *)((int)auStack_cc + DAT_8c1020ac))) ||
     (*(int *)((int)auStack_cc + DAT_8c102078) == 1)) {
    if (*(int *)((int)auStack_cc + DAT_8c102078) == 1) {
      *(undefined4 *)(ar4 + 0x54) = 0;
    }
    iStack_60 = *(int *)(ar4 + 0x54);
    (*(code *)PTR_FUN_8c1020a0)
              (DAT_8c10209c,*(undefined4 *)(ar4 + 0x58),
               *(undefined4 *)(PTR_DAT_8c1020b0 + iStack_60 * 4),ar7);
    *(int *)(ar4 + 0x50) = a6;
    iStack_64 = ar4;
    *(int *)(ar4 + 0x54) = *(int *)(ar4 + 0x54) + 1;
    *(uint *)(ar4 + 0x54) = *(uint *)(ar4 + 0x54) & 0xf;
    *(undefined4 *)(ar4 + 0x5c) = 1;
  }
  if (0x20 < *(uint *)(DAT_8c102080 + ar4)) {
    if (*(int *)(ar4 + 0x3c) == 0) {
      if (*(int *)((int)auStack_cc + DAT_8c10207c) == 1) {
        iStack_68 = *(int *)(ar4 + 0x34);
        uVar3 = *(undefined4 *)(PTR_DAT_8c1020b4 + iStack_68 * 4);
        (*(code *)PTR_FUN_8c1020a0)(DAT_8c10209c,*(undefined4 *)(ar4 + 0x38),uVar3,ar7);
        *(int *)(ar4 + 0x30) = a6;
        *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + 1;
        iStack_6c = ar4;
        uStack_70 = (*(code *)PTR_libgcc_divide_helper_0103d0_8c1020d8)
                              (*(undefined4 *)(ar4 + 0x34),0x19,uVar3,ar7);
        *(undefined4 *)(ar4 + 0x34) = uStack_70;
        *(undefined4 *)(ar4 + 0x3c) = 1;
      }
    }
    else {
      iStack_74 = *(int *)(ar4 + 0x34);
      iVar7 = *DAT_8c102248;
      iVar5 = *(int *)(PTR_DAT_8c10224c + iStack_74 * 4);
      uVar3 = (*(code *)PTR_FUN_8c102250)(ar4,*(undefined4 *)(ar4 + 0x30),a6,ar7);
      *(undefined4 *)((int)auStack_cc + DAT_8c102254) = uVar3;
      if ((((uint)(iVar7 * iVar5) <= *(uint *)((int)auStack_cc + DAT_8c102254)) || (bVar1)) ||
         (bVar2)) {
        if ((bVar1) || (bVar2)) {
          *(undefined4 *)(ar4 + 0x34) = 0;
        }
        iStack_78 = *(int *)(ar4 + 0x34);
        uVar3 = *(undefined4 *)(PTR_DAT_8c102258 + iStack_78 * 4);
        (*(code *)PTR_FUN_8c102260)(DAT_8c10225c,*(undefined4 *)(ar4 + 0x38),uVar3,ar7);
        *(int *)(ar4 + 0x30) = a6;
        *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + 1;
        iStack_7c = ar4;
        uStack_80 = (*(code *)PTR_libgcc_divide_helper_0103d0_8c102264)
                              (*(undefined4 *)(ar4 + 0x34),0x19,uVar3,ar7);
        *(undefined4 *)(ar4 + 0x34) = uStack_80;
      }
    }
  }
  *(undefined4 *)((int)auStack_cc + DAT_8c102268) = 1;
  if (*(uint *)(DAT_8c10226c + ar4) < 0x41) {
    *(undefined4 *)((int)auStack_cc + DAT_8c102268) = 0;
  }
  if (DAT_8c102274 < *(uint *)(DAT_8c102270 + ar4)) {
    *(undefined4 *)((int)auStack_cc + DAT_8c102268) = 0;
  }
  if (*(uint *)(DAT_8c102270 + ar4) < DAT_8c102278) {
    *(undefined4 *)((int)auStack_cc + DAT_8c102268) = 0;
  }
  if (*(int *)((int)auStack_cc + DAT_8c102268) == 0) {
    *(undefined4 *)(ar4 + 0x44) = 0;
  }
  if (*(int *)((int)auStack_cc + DAT_8c102268) == 1) {
    if (*(int *)(ar4 + 0x4c) == 0) {
      if (*(int *)((int)auStack_cc + DAT_8c10227c) == 1) {
        iStack_84 = *(int *)(ar4 + 0x44);
        uVar3 = *(undefined4 *)(PTR_DAT_8c102280 + iStack_84 * 4);
        (*(code *)PTR_FUN_8c102260)(DAT_8c10225c,*(undefined4 *)(ar4 + 0x48),uVar3,ar7);
        *(int *)(ar4 + 0x40) = a6;
        *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + 1;
        iStack_88 = ar4;
        uStack_8c = (*(code *)PTR_libgcc_divide_helper_0103d0_8c102264)
                              (*(undefined4 *)(ar4 + 0x44),0x1c,uVar3,ar7);
        *(undefined4 *)(ar4 + 0x44) = uStack_8c;
        *(undefined4 *)(ar4 + 0x4c) = 1;
      }
    }
    else {
      iStack_90 = *(int *)(ar4 + 0x44);
      iVar7 = *DAT_8c102324;
      iVar5 = *(int *)(PTR_DAT_8c102328 + iStack_90 * 4);
      uVar3 = (*(code *)PTR_FUN_8c10232c)(ar4,*(undefined4 *)(ar4 + 0x40),a6,ar7);
      *(undefined4 *)((int)auStack_cc + DAT_8c102330) = uVar3;
      if ((uint)(iVar7 * iVar5) <= *(uint *)((int)auStack_cc + DAT_8c102330)) {
        if (*(int *)(ar4 + 0x44) == 0) {
          if (bVar1) {
            iStack_94 = *(int *)(ar4 + 0x44);
            uVar3 = *(undefined4 *)(PTR_DAT_8c102334 + iStack_94 * 4);
            (*(code *)PTR_FUN_8c10233c)(DAT_8c102338,*(undefined4 *)(ar4 + 0x48),uVar3,ar7);
            *(int *)(ar4 + 0x40) = a6;
            *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + 1;
            iStack_98 = ar4;
            uStack_9c = (*(code *)PTR_libgcc_divide_helper_0103d0_8c102340)
                                  (*(undefined4 *)(ar4 + 0x44),0x1c,uVar3,ar7);
            *(undefined4 *)(ar4 + 0x44) = uStack_9c;
          }
        }
        else if (*(int *)(ar4 + 0x44) == 7) {
          if (bVar2) {
            iStack_a0 = *(int *)(ar4 + 0x44);
            uVar3 = *(undefined4 *)(PTR_DAT_8c1023b4 + iStack_a0 * 4);
            (*(code *)PTR_FUN_8c1023bc)(DAT_8c1023b8,*(undefined4 *)(ar4 + 0x48),uVar3,ar7);
            *(int *)(ar4 + 0x40) = a6;
            *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + 1;
            iStack_a4 = ar4;
            uStack_a8 = (*(code *)PTR_libgcc_divide_helper_0103d0_8c1023c0)
                                  (*(undefined4 *)(ar4 + 0x44),0x1c,uVar3,ar7);
            *(undefined4 *)(ar4 + 0x44) = uStack_a8;
          }
        }
        else if (*(int *)(ar4 + 0x44) == 0xe) {
          if (bVar1) {
            iStack_ac = *(int *)(ar4 + 0x44);
            uVar3 = *(undefined4 *)(PTR_DAT_8c102434 + iStack_ac * 4);
            (*(code *)PTR_FUN_8c10243c)(DAT_8c102438,*(undefined4 *)(ar4 + 0x48),uVar3,ar7);
            *(int *)(ar4 + 0x40) = a6;
            *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + 1;
            iStack_b0 = ar4;
            uStack_b4 = (*(code *)PTR_libgcc_divide_helper_0103d0_8c102440)
                                  (*(undefined4 *)(ar4 + 0x44),0x1c,uVar3,ar7);
            *(undefined4 *)(ar4 + 0x44) = uStack_b4;
          }
        }
        else if (*(int *)(ar4 + 0x44) == 0x15) {
          if (bVar2) {
            iStack_b8 = *(int *)(ar4 + 0x44);
            uVar3 = *(undefined4 *)(PTR_DAT_8c1024ac + iStack_b8 * 4);
            (*(code *)PTR_FUN_8c1024b4)(DAT_8c1024b0,*(undefined4 *)(ar4 + 0x48),uVar3,ar7);
            *(int *)(ar4 + 0x40) = a6;
            *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + 1;
            iStack_bc = ar4;
            auStack_cc[3] =
                 (*(code *)PTR_libgcc_divide_helper_0103d0_8c1024b8)
                           (*(undefined4 *)(ar4 + 0x44),0x1c,uVar3,ar7);
            *(uint *)(ar4 + 0x44) = auStack_cc[3];
          }
        }
        else {
          auStack_cc[2] = *(int *)(ar4 + 0x44);
          uVar3 = *(undefined4 *)(PTR_DAT_8c1025ec + auStack_cc[2] * 4);
          (*(code *)PTR_FUN_8c1025f4)(DAT_8c1025f0,*(undefined4 *)(ar4 + 0x48),uVar3,ar7);
          *(int *)(ar4 + 0x40) = a6;
          *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + 1;
          auStack_cc[1] = ar4;
          auStack_cc[0] =
               (*(code *)PTR_libgcc_divide_helper_0103d0_8c1025f8)
                         (*(undefined4 *)(ar4 + 0x44),0x1c,uVar3,ar7);
          *(uint *)(ar4 + 0x44) = auStack_cc[0];
        }
      }
    }
  }
  uVar6 = (uint)(0x70 < *(uint *)(DAT_8c1025fc + ar4));
  if (DAT_8c102604 < *(uint *)(DAT_8c102600 + ar4)) {
    uVar6 = 0;
  }
  if (*(uint *)(DAT_8c102600 + ar4) < DAT_8c102608) {
    uVar6 = 0;
  }
  if (*(int *)(DAT_8c10260c + ar4) != -1) {
    uVar6 = 0;
  }
  if (*(int *)(ar4 + 0x44) != 0) {
    uVar6 = 0;
  }
  if (a6 == *(int *)(ar4 + 0x40)) {
    uVar6 = 0;
  }
  if (uVar6 == 1) {
    iVar7 = *(int *)PTR_DAT_8c102610;
    iVar4 = *DAT_8c102614;
    iVar5 = a6;
    uVar3 = (*(code *)PTR_FUN_8c10261c)(ar4,*(undefined4 *)(DAT_8c102618 + ar4),a6,ar7);
    *(undefined4 *)((int)auStack_cc + DAT_8c10260c) = uVar3;
    uVar6 = *(uint *)(DAT_8c102620 + ar4);
    if (((uVar6 == 0) || ((uint)(iVar7 * iVar4) <= *(uint *)((int)auStack_cc + DAT_8c10260c))) &&
       (uVar6 = *(uint *)((int)auStack_cc + DAT_8c102624), uVar6 == 1)) {
      uVar3 = (*(code *)PTR_pack_acquire_entry_handle_8c10262c)
                        (DAT_8c1025f0,PTR_s_TGU52_8c102628,iVar5,ar7);
      *(undefined4 *)((int)auStack_cc + DAT_8c102630) = uVar3;
      *(undefined4 *)(DAT_8c10260c + ar4) = *(undefined4 *)((int)auStack_cc + DAT_8c102630);
      *(int *)(DAT_8c102618 + ar4) = a6;
      uVar6 = DAT_8c102620;
      *(undefined4 *)(DAT_8c102620 + ar4) = 1;
    }
  }
  return uVar6;
}



/* FUN_8c102634 @ 8c102634 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c102634(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c1026bc)(PTR_DAT_8c1026b8,ar5,ar6,ar7);
  puVar4 = PTR_Vec3_dtor_8c1026c4;
  uVar2 = DAT_8c1026c0;
  (*(code *)PTR_global_list_push_8c1026c8)(uVar1,PTR_Vec3_dtor_8c1026c4,DAT_8c1026c0,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c1026bc)(PTR_DAT_8c1026cc,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c1026c4;
  uVar2 = DAT_8c1026d0;
  (*(code *)PTR_global_list_push_8c1026c8)(uVar1,PTR_Vec3_dtor_8c1026c4,DAT_8c1026d0,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c1026bc)(PTR_DAT_8c1026d4,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c1026c4;
  uVar2 = DAT_8c1026d8;
  (*(code *)PTR_global_list_push_8c1026c8)(uVar1,PTR_Vec3_dtor_8c1026c4,DAT_8c1026d8,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c1026bc)(PTR_DAT_8c1026dc,puVar4,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c1026c8)(uVar2,PTR_Vec3_dtor_8c1026c4,DAT_8c1026e0,ar7);
  puVar3 = DAT_8c1026e8;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c1026e4 = *(undefined4 *)DAT_8c1026e8;
  }
  else {
    *(undefined8 *)PTR_DAT_8c1026e4 = *DAT_8c1026e8;
  }
  return puVar3;
}



/* FUN_8c1026ec @ 8c1026ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

ulonglong * FUN_8c1026ec(ulonglong *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + 4) = 0;
    *(undefined4 *)ar4 = 0;
  }
  else {
    *(ulonglong *)((int)ar4 + 4) = (ulonglong)in_fr1;
    *ar4 = (ulonglong)in_fr1;
  }
  return ar4;
}



/* free_if_nonnull_wrap_10270c @ 8c10270c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_10270c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c102738)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c10273c @ 8c10273c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined2 * FUN_8c10273c(undefined2 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (undefined2)ar5;
  ar4[1] = (undefined2)ar6;
  return ar4;
}



/* FUN_8c102748 @ 8c102748 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

ulonglong * FUN_8c102748(ulonglong *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 1) = 0;
    *(undefined4 *)((int)ar4 + 4) = 0;
    *(undefined4 *)ar4 = 0;
  }
  else {
    ar4[1] = (ulonglong)in_fr1;
    *(ulonglong *)((int)ar4 + 4) = (ulonglong)in_fr1;
    *ar4 = (ulonglong)in_fr1;
  }
  return ar4;
}



/* FUN_8c10277c @ 8c10277c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c10277c(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined8 in_xd4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = in_fr4;
    *(undefined4 *)((int)ar4 + 4) = in_fr5;
    *(undefined4 *)(ar4 + 1) = in_fr6;
  }
  else {
    *ar4 = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)((int)ar4 + 4) = in_xd4;
    ar4[1] = CONCAT44(in_fr6,in_fr7);
  }
  return ar4;
}



/* free_if_nonnull_wrap_102790 @ 8c102790 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_102790(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c1027bc)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c1027c0 @ 8c1027c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined2 * FUN_8c1027c0(undefined2 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[3] = 0;
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  *(undefined1 *)((int)ar4 + 9) = 0;
  *(undefined1 *)(ar4 + 4) = 0;
  return ar4;
}



/* FUN_8c102800 @ 8c102800 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c102800(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = 0x3f800000;
    *(undefined4 *)((int)ar4 + 4) = 0x3f800000;
    *(undefined4 *)(ar4 + 1) = 0x3f800000;
    *(undefined4 *)((int)ar4 + 0xc) = 0x3f800000;
  }
  else {
    *ar4 = CONCAT44(0x3f800000,in_fr1);
    *(ulonglong *)((int)ar4 + 4) = CONCAT44(0x3f800000,in_fr1);
    ar4[1] = CONCAT44(0x3f800000,in_fr1);
    *(ulonglong *)((int)ar4 + 0xc) = CONCAT44(0x3f800000,in_fr1);
  }
  return ar4;
}



/* noop_102824 @ 8c102824 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_102824(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* report_error_message @ 8c102828 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 report_error_message(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int a6;
  
  a6 = ar6;
  (*(code *)PTR_log_message_8c102870)(ar4,ar5,ar6,ar7);
  if (ar6 == 0) {
    (*(code *)PTR_game_shutdown_a_8c102874)(ar4,ar5,a6,ar7);
    (*(code *)PTR_game_shutdown_b_8c102878)(ar4,ar5,a6,ar7);
  }
  return 0;
}



/* FUN_8c10287c @ 8c10287c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10287c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_malloc_thunk_8c102898)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c10289c @ 8c10289c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10289c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*ar4 != 0) {
    (*(code *)PTR_FUN_8c1028bc)(*ar4,ar5,ar6,ar7);
    *ar4 = 0;
  }
  return 0;
}



/* FUN_8c1028c0 @ 8c1028c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1028c0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uStack_c;
  uint auStack_8 [2];
  
  auStack_8[0] = 0;
  uStack_c = 0;
  (*(code *)PTR_FUN_8c102910)(ar4,auStack_8,ar6,ar7);
  (*(code *)PTR_FUN_8c102910)(ar5,&uStack_c,ar6,ar7);
  if (uStack_c < auStack_8[0]) {
    uVar1 = 1;
  }
  else if (auStack_8[0] < uStack_c) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c102914 @ 8c102914 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c102914(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 4) = ar5;
  return *(undefined4 *)(ar4 + 8);
}



/* FUN_8c10291c @ 8c10291c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c10291c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = PTR_DAT_8c10296c;
  (*(code *)PTR_FUN_8c102970)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c102974 @ 8c102974 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c102974(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  double in_dr0;
  double dVar4;
  float fVar5;
  double in_dr4;
  double dVar6;
  float in_fr7;
  float in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined4 uVar7;
  double in_xd0;
  undefined8 in_xd4;
  undefined8 in_xd8;
  undefined8 uVar8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar5 = (float)((ulonglong)in_dr4 >> 0x20);
  dVar6 = in_dr4;
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar5);
    dVar6 = in_xd0;
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(in_dr0,0) * in_fr7;
  }
  else {
    fVar2 = SUB84(in_dr0 * (double)CONCAT44(in_fr6,in_fr7),0);
  }
  fVar3 = in_fr7;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = fVar2;
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = fVar3 - in_fr6 * SUB84(in_dr4,0);
  }
  else {
    dVar4 = (double)CONCAT44(in_fr6,fVar3) * in_dr4;
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  dVar4 = in_dr4;
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(fVar5,fVar3);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar4,0) / ((float)((ulonglong)dVar4 >> 0x20) - in_fr6);
  }
  else {
    dVar4 = dVar4 - (double)CONCAT44(in_fr6,in_fr7);
    fVar2 = SUB84(dVar4 / dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 4) = fVar2;
  }
  else {
    *(double *)(ar4 + 4) = dVar6;
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = (SUB84(in_dr4,0) - in_fr7) / (fVar5 - in_fr6);
  }
  else {
    dVar6 = (in_dr4 - (double)CONCAT44(in_fr6,in_fr7)) - (double)CONCAT44(in_fr6,in_fr7);
    fVar5 = SUB84(dVar6 / dVar6,0);
  }
  puVar1 = (undefined8 *)(ar4 + 0x10);
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 8) = fVar5;
    *(undefined4 *)(ar4 + 0xc) = in_fr8;
    *(undefined4 *)(ar4 + 0x10) = in_fr9;
    puVar1 = (undefined8 *)(ar4 + 0xc);
  }
  else {
    *(undefined8 *)(ar4 + 8) = in_xd4;
    *(ulonglong *)(ar4 + 0xc) = CONCAT44(in_fr8,in_fr9);
    *(undefined8 *)(ar4 + 0x10) = in_xd8;
  }
  if (in_FPSCR_PR == '\0' && (float)((ulonglong)*puVar1 >> 0x20) < (float)*puVar1) {
    if (in_FPSCR_SZ == '\0') {
      uVar7 = *(undefined4 *)(ar4 + 0xc);
      *(undefined4 *)(ar4 + 0xc) = *(undefined4 *)(ar4 + 0x10);
      *(undefined4 *)(ar4 + 0xc) = uVar7;
    }
    else {
      uVar8 = *(undefined8 *)(ar4 + 0xc);
      *(undefined8 *)(ar4 + 0xc) = *(undefined8 *)(ar4 + 0x10);
      *(undefined8 *)(ar4 + 0xc) = uVar8;
    }
  }
  return ar4 + 0x10;
}



/* Class_12c3a4_m0_1029d0 @ 8c1029d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12c3a4_m0_1029d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + 0xc;
}



/* FUN_8c102a08 @ 8c102a08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c102a08(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c102a70)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c102a74;
  (*(code *)PTR_FUN_8c102a78)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c102a7c @ 8c102a7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c102a7c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r14;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  double in_dr0;
  double dVar5;
  undefined8 in_dr4;
  double in_dr6;
  double in_dr8;
  undefined4 in_fr11;
  undefined4 in_fr10;
  undefined8 in_dr12;
  undefined4 uVar6;
  undefined8 in_dr14;
  float fVar7;
  double in_xd0;
  undefined8 in_xd4;
  double in_xd6;
  double in_xd8;
  undefined8 in_xd10;
  double in_xd12;
  double in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (double)CONCAT44((int)in_dr14,(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar2 = &uStack_10;
    uStack_10 = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar2 = (undefined8 *)auStack_20;
    uStack_8 = in_xd14;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)((int)puVar2 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar2 + -8) = in_PR;
  uVar1 = SUB84(in_dr8,0);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar2 + -0x18) = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)((int)puVar2 + -0x14) = (int)in_dr4;
    uVar6 = (undefined4)((ulonglong)in_dr6 >> 0x20);
    in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),uVar6);
    in_xd8 = (double)CONCAT44(uVar1,SUB84(in_dr6,0));
    *(undefined4 *)((int)puVar2 + -0x10) = in_fr10;
    *(undefined4 *)((int)puVar2 + -0xc) = in_fr11;
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),uVar6);
    in_dr6 = in_xd0;
    uVar1 = uVar6;
    in_xd6 = in_xd12;
  }
  else {
    *(undefined8 *)((int)puVar2 + -0x18) = in_dr4;
    *(undefined8 *)((int)puVar2 + -0x14) = in_xd4;
    *(ulonglong *)((int)puVar2 + -0x10) = CONCAT44(in_fr10,in_fr11);
    *(undefined8 *)((int)puVar2 + -0xc) = in_xd10;
    in_xd14 = in_dr6;
  }
  fVar4 = (float)((ulonglong)in_xd8 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(in_dr0,0) * fVar4;
  }
  else {
    fVar3 = SUB84(in_dr0 * in_xd8,0);
  }
  fVar7 = (float)((ulonglong)in_dr8 >> 0x20);
  dVar5 = in_dr8;
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(fVar7,fVar3);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20) * SUB84(in_xd8,0);
  }
  else {
    fVar3 = SUB84(dVar5 * in_xd8 - dVar5 * in_xd8,0);
  }
  dVar5 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(uVar1,fVar3);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = (float)((ulonglong)dVar5 >> 0x20) - fVar7;
    dVar5 = (double)CONCAT44(fVar3,SUB84(dVar5,0) / fVar3);
  }
  else {
    dVar5 = (dVar5 - in_dr8) / (dVar5 - in_dr8);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0x14) = SUB84(dVar5,0);
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),SUB84(in_xd8,0));
    in_xd6 = in_dr6;
  }
  else {
    *(double *)(ar4 + 0x14) = in_dr6;
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar5,0) - fVar4;
  }
  else {
    fVar4 = SUB84(dVar5 - in_xd8,0);
  }
  dVar5 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(uVar1,fVar4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar5,0) / ((float)((ulonglong)dVar5 >> 0x20) - fVar7);
  }
  else {
    fVar4 = SUB84((dVar5 - in_dr8) / (dVar5 - in_dr8),0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x18) = fVar4;
    *(undefined4 *)(ar4 + 0x1c) = uVar1;
  }
  else {
    *(double *)(ar4 + 0x18) = in_xd6;
    *(double *)(ar4 + 0x1c) = in_xd14;
  }
  uVar1 = (*(code *)PTR_FUN_8c102b00)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* Class_12c394_m0_102b04 @ 8c102b04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12c394_m0_102b04(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 unaff_r14;
  undefined1 *puVar1;
  undefined8 in_dr0;
  undefined8 in_dr4;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar1 = auStack_4;
  }
  else {
    puVar1 = auStack_8;
  }
  *(undefined4 *)(puVar1 + -4) = unaff_r14;
  *(undefined4 *)(puVar1 + -8) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0x10) = (int)((ulonglong)in_dr4 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar1 + -0x10) = in_dr4;
  }
  (*(code *)PTR_Class_12c394_m1_102b58_8c102b54)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0xc) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar1 + -0xc) = in_dr0;
  }
  return ar4 + 0xc;
}



/* Class_12c394_m1_102b58 @ 8c102b58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12c394_m1_102b58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 unaff_r14;
  undefined1 *puVar2;
  undefined4 in_fr1;
  double dVar3;
  undefined8 in_dr4;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar4;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = auStack_4;
  }
  else {
    puVar2 = auStack_8;
  }
  *(undefined4 *)(puVar2 + -4) = unaff_r14;
  *(undefined4 *)(puVar2 + -8) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = (float)((ulonglong)in_dr4 >> 0x20);
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x1c),in_fr1);
  }
  else {
    dVar3 = *(double *)(ar4 + 0x1c);
  }
  if (in_FPSCR_PR == '\0') {
    bVar4 = in_fr15 < (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    bVar4 = (double)CONCAT44(in_fr14,in_fr15) < dVar3;
  }
  if (bVar4) {
    (*(code *)PTR_Class_12c3a4_m0_1029d0_8c102ba0)(ar4,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar2 + -0xc) = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      *(double *)(puVar2 + -0xc) = dVar3;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = ar4 + 0x18;
  }
  return iVar1;
}



/* FUN_8c102ba4 @ 8c102ba4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c102ba4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 0xc) = 0;
  return 1;
}



/* FUN_8c102bb4 @ 8c102bb4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c102bb4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + 8;
}



/* FUN_8c102bc8 @ 8c102bc8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c102bc8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 4) = 0;
  return 0;
}



/* FUN_8c102bd0 @ 8c102bd0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c102bd0(undefined4 ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 a4;
  undefined4 uVar3;
  int a5;
  int a7;
  int a5_00;
  int iVar4;
  
  a4 = 0xf;
  uVar2 = ar5;
  uVar3 = ar6;
  (*(code *)PTR_FUN_8c102cc8)(0xf,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c102ccc)(a4,uVar2,uVar3,ar7);
  (*(code *)PTR_FUN_8c102ce8)
            (((*(uint *)PTR_DAT_8c102cd0 | DAT_8c102cdc) & 0xffffffe0) + DAT_8c102ce0,
             ((*(uint *)PTR_DAT_8c102cd0 & DAT_8c102cd4 | DAT_8c102cd8) -
             (((*(uint *)PTR_DAT_8c102cd0 | DAT_8c102cdc) & 0xffffffe0) + DAT_8c102ce0)) +
             DAT_8c102ce4,uVar3,ar7);
  (*(code *)PTR_pvr_25825a_8c102cec)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c102cf0)(ar4,ar5,ar6,ar7);
  uVar3 = 0;
  a5 = DAT_8c102cf8;
  uVar2 = DAT_8c102cf4;
  (*(code *)PTR_FUN_8c102cfc)(0,DAT_8c102cf8,DAT_8c102cf4,ar7);
  (*(code *)PTR_FUN_8c102d00)(uVar3,a5,uVar2,ar7);
  uVar3 = 0;
  (*(code *)PTR_FUN_8c102cc8)(0,a5,uVar2,ar7);
  a5_00 = (DAT_8c102d04 & 0xffffffe0) + 0x20;
  a7 = (DAT_8c102d08 & 0xffffffe0) + 0x20;
  for (iVar4 = 8; 0 < iVar4; iVar4 = iVar4 + -1) {
    uVar3 = 8;
    a5 = a5_00;
    uVar2 = DAT_8c102d0c;
    ar7 = a7;
    iVar1 = (*(code *)PTR_LAB_8c102d10)(8,a5_00,DAT_8c102d0c,a7);
    if ((iVar1 == -0x17) || (iVar1 == -0x21)) {
      (*(code *)PTR_FUN_8c102d14)(uVar3,a5,uVar2,ar7);
      (*(code *)PTR_game_shutdown_b_8c102d18)(uVar3,a5,uVar2,ar7);
    }
    else if (iVar1 == 0) break;
  }
  if (iVar4 == 0) {
    (*(code *)PTR_FUN_8c102d14)(uVar3,a5,uVar2,ar7);
    (*(code *)PTR_game_shutdown_b_8c102d18)(uVar3,a5,uVar2,ar7);
  }
  uVar2 = (*(code *)PTR_FUN_8c102d1c)(uVar3,a5,uVar2,ar7);
  return uVar2;
}



/* FUN_8c102d20 @ 8c102d20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c102d20(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (ar4 & 0xf) << 4;
}



/* FUN_8c102d40 @ 8c102d40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c102d40(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c102d7c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c102d80)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c102d84)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c102d88)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c102d8c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_noop_1fb43a_8c102d90)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c102d94)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c102d98)(0xf,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c102d9c @ 8c102d9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c102d9c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c102e1c)(PTR_DAT_8c102e18,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c102e24;
  uVar2 = DAT_8c102e20;
  (*(code *)PTR_global_list_push_8c102e28)(uVar1,PTR_Vec3_dtor_8c102e24,DAT_8c102e20,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c102e1c)(PTR_DAT_8c102e2c,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c102e24;
  uVar2 = DAT_8c102e30;
  (*(code *)PTR_global_list_push_8c102e28)(uVar1,PTR_Vec3_dtor_8c102e24,DAT_8c102e30,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c102e1c)(PTR_DAT_8c102e34,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c102e24;
  uVar2 = DAT_8c102e38;
  (*(code *)PTR_global_list_push_8c102e28)(uVar1,PTR_Vec3_dtor_8c102e24,DAT_8c102e38,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c102e1c)(PTR_DAT_8c102e3c,puVar3,uVar2,ar7);
  uVar2 = (*(code *)PTR_global_list_push_8c102e28)(uVar2,PTR_Vec3_dtor_8c102e24,DAT_8c102e40,ar7);
  return uVar2;
}



/* FUN_8c102e44 @ 8c102e44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c102e44(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c102ec4)(PTR_DAT_8c102ec0,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c102ecc;
  uVar2 = DAT_8c102ec8;
  (*(code *)PTR_global_list_push_8c102ed0)(uVar1,PTR_Vec3_dtor_8c102ecc,DAT_8c102ec8,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c102ec4)(PTR_DAT_8c102ed4,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c102ecc;
  uVar2 = DAT_8c102ed8;
  (*(code *)PTR_global_list_push_8c102ed0)(uVar1,PTR_Vec3_dtor_8c102ecc,DAT_8c102ed8,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c102ec4)(PTR_DAT_8c102edc,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c102ecc;
  uVar2 = DAT_8c102ee0;
  (*(code *)PTR_global_list_push_8c102ed0)(uVar1,PTR_Vec3_dtor_8c102ecc,DAT_8c102ee0,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c102ec4)(PTR_DAT_8c102ee4,puVar3,uVar2,ar7);
  uVar2 = (*(code *)PTR_global_list_push_8c102ed0)(uVar2,PTR_Vec3_dtor_8c102ecc,DAT_8c102ee8,ar7);
  return uVar2;
}



/* s_HIGYOLINE_102eee @ 8c102eec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * s_HIGYOLINE_102eee(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c103010)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c103014;
  (*(code *)PTR_FUN_8c10301c)((int)ar4 + DAT_8c103018,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c103024)((int)ar4 + DAT_8c103020,ar5,ar6,ar7);
  *(undefined1 *)(DAT_8c103028 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c10302c + (int)ar4) = 0xffffffff;
  *(undefined4 *)(DAT_8c103030 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c103034 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c103038 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c10303c + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c103040 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c103044 + (int)ar4) = 0;
  (*(code *)PTR_strcpy_8c103050)
            ((int)ar4 + DAT_8c10304c,PTR_s_GRAPHICS_COMMON_8c103048 + 0x10,ar6,ar7);
  (*(code *)PTR_strcpy_8c103050)
            ((int)ar4 + DAT_8c103018,PTR_s_GRAPHICS_COMMON_8c103048 + 0x1a,ar6,ar7);
  (*(code *)PTR_strcpy_8c103050)
            ((int)ar4 + DAT_8c103054,PTR_s_GRAPHICS_COMMON_8c103048 + 0x25,ar6,ar7);
  (*(code *)PTR_strcpy_8c103050)
            ((int)ar4 + DAT_8c103058,PTR_s_GRAPHICS_COMMON_8c103048 + 0x33,ar6,ar7);
  *(undefined4 *)(DAT_8c10305c + (int)ar4) = 4;
  *(undefined4 *)(DAT_8c103060 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c103064 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c103068 + (int)ar4) = 0x22;
  *(undefined1 *)(DAT_8c10306c + (int)ar4) = 2;
  *(undefined1 *)(DAT_8c103070 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c103074 + (int)ar4) = 1;
  *(undefined4 *)(DAT_8c103078 + (int)ar4) = 1;
  *(undefined4 *)(DAT_8c10307c + (int)ar4) = 1;
  *(undefined4 *)(DAT_8c103074 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c103080 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c103084 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c103088 + (int)ar4) = 0x1b;
  *(undefined4 *)(DAT_8c10308c + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c103090 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c103094 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c103098 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c10309c + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c1030a0 + (int)ar4) = 0;
  return ar4;
}



/* Class_12c3c4_m0_1030a4 @ 8c1030a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12c3c4_m0_1030a4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c1030ec;
    (*(code *)PTR_free_if_nonnull_wrap_02eaec_8c1030f4)((int)ar4 + DAT_8c1030f0,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_Class_129c70_m0_02f1b8_8c1030f8)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c1030fc)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* s_REQUEST_SLEEP_10310a @ 8c103100 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_REQUEST_SLEEP_10310a(int *ar4,int *ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined4 a5;
  int a5_00;
  undefined *puVar8;
  int iVar9;
  int extraout_fr1;
  int extraout_fr0;
  char in_FPSCR_SZ;
  undefined4 uStack_108;
  undefined1 uStack_104;
  char cStack_103;
  undefined1 uStack_102;
  char cStack_101;
  char cStack_100;
  char cStack_ff;
  char cStack_fe;
  undefined2 uStack_fc;
  undefined2 uStack_fa;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined2 uStack_f4;
  undefined2 uStack_f2;
  undefined2 uStack_f0;
  short sStack_ee;
  short sStack_ec;
  short sStack_ea;
  short sStack_e8;
  int *piStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int *piStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined *puStack_a8;
  undefined *puStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  
  puVar6 = (undefined1 *)((int)&uStack_108 + DAT_8c103398);
  piVar7 = (int *)0x10;
  puVar5 = PTR_DAT_8c10339c;
  do {
    puVar4 = puVar5 + 1;
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar6[1] = *puVar4;
    puVar6 = puVar6 + 2;
    piVar7 = (int *)((int)piVar7 + -1);
  } while (piVar7 != (int *)0x0);
  piVar2 = ar6;
  uVar1 = (*(code *)PTR_FUN_8c1033a0)(ar6[6],0,ar6,ar7);
  sStack_e8 = (short)uVar1;
  if (sStack_e8 == 3) {
    uVar1 = (*(code *)PTR_FUN_8c1033a4)(ar6[1],piVar7,piVar2,ar7);
    sStack_ea = (short)uVar1;
    piVar2 = (int *)(int)sStack_ea;
    piVar7 = (int *)ar6[6];
    (**(code **)(*ar4 + 0x18))(ar4,piVar7,piVar2,ar7);
  }
  if ((*DAT_8c1033a8 == 1) && (*(int *)(DAT_8c1033ac + (int)ar4) == 0)) {
    (*(code *)PTR_FUN_8c1033b0)(ar4,ar6,piVar2,ar7);
    piVar7 = DAT_8c1033a8;
    *DAT_8c1033a8 = 0;
  }
  if (*(char *)(DAT_8c1033b4 + (int)ar4) == '\x01') {
    *(undefined1 *)(DAT_8c1033b8 + (int)ar4) = 0;
    uVar1 = (*(code *)PTR_FUN_8c1033a4)(ar6[1],piVar7,piVar2,ar7);
    sStack_ec = (short)uVar1;
    (**(code **)(*ar4 + 0x18))(ar4,ar6[6],(int)sStack_ec,ar7);
  }
  iVar9 = DAT_8c1033c0;
  *(undefined4 *)(PTR_DAT_8c1033bc + DAT_8c1033c0) = *(undefined4 *)(DAT_8c1033c4 + (int)ar4);
  *(undefined4 *)(PTR_DAT_8c1033bc + DAT_8c1033c8) = *(undefined4 *)(DAT_8c1033cc + (int)ar4);
  a5 = *(undefined4 *)(DAT_8c1033d4 + (int)ar4);
  *(undefined4 *)(PTR_DAT_8c1033bc + DAT_8c1033d0) = a5;
  uVar1 = (*(code *)PTR_get_field_13c_028d9c_8c1033d8)(ar6[1],a5,iVar9,ar7);
  *(undefined4 *)((int)&uStack_108 + DAT_8c1033dc) = uVar1;
  *(undefined4 *)(DAT_8c1033e0 + (int)ar4) = *(undefined4 *)((int)&uStack_108 + DAT_8c1033dc);
  uVar1 = (*(code *)PTR_FUN_8c1033a4)(ar6[1],a5,iVar9,ar7);
  sStack_ee = (short)uVar1;
  (*(code *)PTR_FUN_8c1033e4)((int)ar4 + DAT_8c1033c0,(int)sStack_ee,iVar9,ar7);
  (*(code *)PTR_FUN_8c1033e8)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_s_STATUS_SUCKED_1093aa_8c1033ec)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_s_STATUS_LIFE_1097b2_8c1033f0)(ar4,ar5,ar6,ar7);
  piVar7 = ar5;
  piVar2 = ar6;
  (*(code *)PTR_s_IDLEACTION_TREMOR_1091d0_8c1033f4)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_get_field_124_027930_8c1033f8)(ar6[2],piVar7,piVar2,ar7);
  *(undefined4 *)((int)&uStack_108 + DAT_8c1033fc) = uVar1;
  if (*(int *)((int)&uStack_108 + DAT_8c1033fc) != 2) {
    piVar7 = ar6;
    (*(code *)PTR_FUN_8c103400)(ar4,ar6,piVar2,ar7);
  }
  uVar1 = (*(code *)PTR_get_field_4_05eed8_8c103404)(ar4,piVar7,piVar2,ar7);
  *(undefined4 *)((int)&uStack_108 + DAT_8c103408) = uVar1;
  puVar5 = *(undefined **)((int)&uStack_108 + DAT_8c103408);
  piVar7 = ar5;
  piVar2 = ar6;
  (*(code *)PTR_s_STATUS_SNORE_10485e_8c10340c)(ar4,ar5,ar6,puVar5);
  uVar1 = (*(code *)PTR_get_field_124_027930_8c1033f8)(ar6[2],piVar7,piVar2,puVar5);
  *(undefined4 *)((int)&uStack_108 + DAT_8c103410) = uVar1;
  if (*(int *)((int)&uStack_108 + DAT_8c103410) != 2) {
    uVar1 = (*(code *)PTR_get_field_178_035734_8c103414)(ar6[2],piVar7,piVar2,puVar5);
    *(undefined4 *)((int)&uStack_108 + DAT_8c103418) = uVar1;
    if (*(int *)((int)&uStack_108 + DAT_8c103418) == 0) {
      piVar7 = ar5;
      piVar2 = ar6;
      (*(code *)PTR_s_REACTION_TITILLATE_1080e0_8c10341c)(ar4,ar5,ar6,puVar5);
    }
  }
  uVar1 = (*(code *)PTR_get_field_124_027930_8c1033f8)(ar6[2],piVar7,piVar2,puVar5);
  *(undefined4 *)((int)&uStack_108 + DAT_8c103420) = uVar1;
  if (*(int *)((int)&uStack_108 + DAT_8c103420) != 2) {
    (*(code *)PTR_FUN_8c103428)((int)ar4 + DAT_8c103424,1,piVar2,puVar5);
    (*(code *)PTR_s_GRAPHICS_COMMON_106f5e_8c10342c)(ar4,ar5,ar6,puVar5);
    (*(code *)PTR_s_GRATIFIC_RID_HOT_108562_8c103430)(ar4,ar5,ar6,puVar5);
    piVar7 = ar5;
    piVar2 = ar6;
    (*(code *)PTR_s_REACTION_TEMP_LACK_106c8a_8c103434)(ar4,ar5,ar6,puVar5);
  }
  uVar1 = (*(code *)PTR_get_field_124_027930_8c1033f8)(ar6[2],piVar7,piVar2,puVar5);
  *(undefined4 *)((int)&uStack_108 + DAT_8c103438) = uVar1;
  if (*(int *)((int)&uStack_108 + DAT_8c103438) == 0) {
    uVar1 = (*(code *)PTR_get_field_124_027930_8c1033f8)(ar6[2],piVar7,piVar2,puVar5);
    *(undefined4 *)((int)&uStack_108 + DAT_8c10343c) = uVar1;
    if ((*(int *)((int)&uStack_108 + DAT_8c10343c) != 2) && (ar4[1] == 0)) {
      uVar1 = (*(code *)PTR_get_field_24_05eed0_8c103444)
                        (ar6[1] + DAT_8c103440,piVar7,piVar2,puVar5);
      *(undefined4 *)((int)&uStack_108 + DAT_8c103448) = uVar1;
      if (*(int *)((int)&uStack_108 + DAT_8c103448) == 1) {
        uVar3 = (*(code *)PTR_FUN_8c1033a0)(ar6[6],piVar7,piVar2,puVar5);
        uStack_f0 = (undefined2)uVar3;
        piVar7 = (int *)0x7;
        iStack_bc = (*(code *)PTR_libgcc_divide_helper_01031c_8c10344c)
                              (uVar3 & 0xffff,7,piVar2,puVar5);
        if ((iStack_bc == 1) && (*(int *)(DAT_8c103450 + (int)ar4) == -1)) {
          puVar5 = PTR_s_GRAPHICS_COMMON_8c1034ec + 0x35;
          piVar2 = (int *)0x0;
          piVar7 = (int *)0x0;
          (*(code *)PTR_FUN_8c1034f4)((int)ar4 + DAT_8c1034f0,0,0,puVar5);
        }
      }
      uVar1 = (*(code *)PTR_FUN_8c1034f8)(ar6[3],piVar7,piVar2,puVar5);
      cStack_fe = (char)uVar1;
      if (cStack_fe == '\0') {
        uVar3 = (*(code *)PTR_FUN_8c1034fc)(ar6[6],piVar7,piVar2,puVar5);
        uStack_f2 = (undefined2)uVar3;
        piVar7 = (int *)0x7;
        iStack_c0 = (*(code *)PTR_libgcc_divide_helper_01031c_8c103500)
                              (uVar3 & 0xffff,7,piVar2,puVar5);
        if ((iStack_c0 == 1) && (*(int *)(DAT_8c103504 + (int)ar4) == -1)) {
          if (*(int *)(DAT_8c103508 + (int)ar4) == 1) {
            puVar5 = PTR_s_GRAPHICS_COMMON_8c1034ec + 0x43;
            piVar2 = (int *)0x0;
            (*(code *)PTR_FUN_8c1034f4)((int)ar4 + DAT_8c1034f0,0x21,0,puVar5);
          }
          else {
            puVar5 = PTR_s_GRAPHICS_COMMON_8c1035c4 + 0x53;
            piVar2 = (int *)0x0;
            (*(code *)PTR_FUN_8c1035cc)((int)ar4 + DAT_8c1035c8,0x21,0,puVar5);
          }
          piVar7 = (int *)0x0;
          *(undefined4 *)(DAT_8c1035d0 + (int)ar4) = 0;
        }
      }
      uVar1 = (*(code *)PTR_FUN_8c1035d4)(ar6[3],piVar7,piVar2,puVar5);
      cStack_ff = (char)uVar1;
      if (*(char *)(DAT_8c1035d8 + (int)ar4) != cStack_ff) {
        uVar1 = (*(code *)PTR_get_field_124_027930_8c1035dc)(ar6[2],piVar7,piVar2,puVar5);
        *(undefined4 *)((int)&uStack_108 + DAT_8c1035e0) = uVar1;
        if (*(int *)((int)&uStack_108 + DAT_8c1035e0) != 2) {
          uVar3 = (*(code *)PTR_FUN_8c1035e4)(ar6[6],piVar7,piVar2,puVar5);
          uStack_f4 = (undefined2)uVar3;
          piVar7 = (int *)(uVar3 & 0xffff);
          if ((int *)0x3 < piVar7) {
            uVar1 = (*(code *)PTR_FUN_8c1035d4)(ar6[3],piVar7,piVar2,puVar5);
            cStack_100 = (char)uVar1;
            if (cStack_100 == '\0') {
              puVar5 = PTR_s_GRAPHICS_COMMON_8c1035c4 + 0x66;
              piVar2 = (int *)0x0;
              piVar7 = (int *)0xa;
              (*(code *)PTR_FUN_8c1035cc)((int)ar4 + DAT_8c1035c8,10,0,puVar5);
            }
            else {
              uVar1 = (*(code *)PTR_FUN_8c1036b8)(ar6[3],piVar7,piVar2,puVar5);
              cStack_101 = (char)uVar1;
              if (*(char *)(DAT_8c1036bc + (int)ar4) < cStack_101) {
                puVar5 = PTR_s_GRAPHICS_COMMON_8c1036c0 + 0x77;
                piVar2 = (int *)0x0;
                piVar7 = (int *)0x0;
                (*(code *)PTR_FUN_8c1036c8)((int)ar4 + DAT_8c1036c4,0,0,puVar5);
              }
            }
          }
        }
        uVar1 = (*(code *)PTR_FUN_8c1036b8)(ar6[3],piVar7,piVar2,puVar5);
        uStack_102 = (undefined1)uVar1;
        *(undefined1 *)(DAT_8c1036bc + (int)ar4) = uStack_102;
      }
    }
    uVar1 = (*(code *)PTR_get_field_124_027930_8c1036cc)(ar6[2],piVar7,piVar2,puVar5);
    *(undefined4 *)((int)&uStack_108 + DAT_8c1036d0) = uVar1;
    if (*(int *)((int)&uStack_108 + DAT_8c1036d0) != 2) {
      piVar7 = ar5;
      piVar2 = ar6;
      (*(code *)PTR_s_EVENT_QUIZ_107596_8c1036d4)(ar4,ar5,ar6,puVar5);
    }
    if (ar4[0x10] != 2) {
      uVar1 = (*(code *)PTR_get_field_770_05eeb8_8c1036d8)
                        ((int)ar4 + DAT_8c1036c4,piVar7,piVar2,puVar5);
      *(undefined4 *)((int)&uStack_108 + DAT_8c1036dc) = uVar1;
      if (*(int *)((int)&uStack_108 + DAT_8c1036dc) == 1) {
        if (*(int *)(DAT_8c1036e0 + (int)ar4) == -1) {
          if (*(char *)(DAT_8c1036e4 + (int)ar4) < '\0') {
            *(undefined4 *)(DAT_8c103728 + (int)ar4) = 0;
            piVar7 = (int *)0x3;
            (*(code *)PTR_FUN_8c103730)((int)ar4 + DAT_8c10372c,3,piVar2,puVar5);
            ar4[1] = 0;
            ar4[0x10] = 0;
            ar4[2] = 0x19;
            ar4[3] = 0;
            piVar2 = (int *)0x1;
            *(undefined1 *)(DAT_8c103734 + (int)ar4) = 1;
          }
          else {
            piVar2 = (int *)((int)ar4 + DAT_8c1036c4);
            piVar7 = *(int **)(DAT_8c1036e8 + (int)ar4);
            uVar1 = (*(code *)PTR_FUN_8c1036f0)(DAT_8c1036ec,piVar7,piVar2,puVar5);
            *(undefined4 *)((int)&uStack_108 + DAT_8c1036c4) = uVar1;
            *(undefined4 *)(DAT_8c1036e0 + (int)ar4) =
                 *(undefined4 *)((int)&uStack_108 + DAT_8c1036c4);
          }
        }
        else {
          piVar7 = (int *)0x2;
          (*(code *)PTR_FUN_8c1037f8)((int)ar4 + DAT_8c1037f4,2,piVar2,puVar5);
        }
      }
    }
    uVar1 = (*(code *)PTR_get_field_124_027930_8c1037fc)(ar6[2],piVar7,piVar2,puVar5);
    *(undefined4 *)((int)&uStack_108 + DAT_8c103800) = uVar1;
    if ((*(int *)((int)&uStack_108 + DAT_8c103800) != 2) || (piVar7 = ar4 + 0x10, *piVar7 != 2)) {
      uVar1 = (*(code *)PTR_FUN_8c103808)(ar6[1] + DAT_8c103804,piVar7,piVar2,puVar5);
      cStack_103 = (char)uVar1;
      if (cStack_103 == '\x01') {
        piVar2 = (int *)PTR_get_field_140_025f70_8c10380c;
        piVar7 = (int *)(*(code *)PTR_get_field_140_025f70_8c10380c)
                                  (ar6[1],piVar7,PTR_get_field_140_025f70_8c10380c,puVar5);
        *(int **)((int)&uStack_108 + DAT_8c103810) = piVar7;
        if (*(int *)((int)&uStack_108 + DAT_8c103810) == 0) {
          *(undefined1 *)(DAT_8c103800 + (int)ar4) = 10;
          piVar2 = (int *)0x1b;
          piVar7 = (int *)0x14;
          (*(code *)PTR_FUN_8c103814)(ar6[6],0x14,0x1b,puVar5);
        }
      }
    }
  }
  if ((((ar4[0x10] == 0) || (ar4[0x10] == 6)) &&
      ((ar4[1] != 7 ||
       (piVar7 = (int *)(int)*(char *)(DAT_8c103800 + (int)ar4),
       *(char *)(DAT_8c103800 + (int)ar4) != '\x04')))) &&
     ((*(char *)(DAT_8c103818 + (int)ar4) == '\0' || (*(char *)(DAT_8c103818 + (int)ar4) == '\x01'))
     )) {
    piVar7 = ar5;
    piVar2 = ar6;
    (*(code *)PTR_FUN_8c10386c)(ar4,ar5,ar6,puVar5);
  }
  uVar1 = (*(code *)PTR_get_field_124_027930_8c103870)(ar6[2],piVar7,piVar2,puVar5);
  *(undefined4 *)((int)&uStack_108 + DAT_8c103874) = uVar1;
  if (*(int *)((int)&uStack_108 + DAT_8c103874) != 2) {
    switch(*(undefined1 *)(DAT_8c103878 + (int)ar4)) {
    case 0:
      piVar7 = (int *)0x2;
      uVar1 = (**(code **)(DAT_8c1038d4 + *ar5))(ar5,2,piVar2,puVar5);
      *(undefined4 *)((int)&uStack_108 + DAT_8c1038d8) = uVar1;
      if (*(int *)((int)&uStack_108 + DAT_8c1038d8) == 0) {
        *(undefined1 *)(DAT_8c1038dc + (int)ar4) = 3;
      }
      else {
        puVar5 = (undefined *)0x5f;
        ar4[2] = 0x5f;
        ar4[3] = 0;
        ar4[1] = 0xd;
        uStack_c4 = 9;
        *(undefined4 *)(DAT_8c103914 + (int)ar4) = 9;
        ar4[0x10] = 9;
        *(undefined4 *)(PTR_DAT_8c103918 + DAT_8c10391c) = 9;
      }
      break;
    case 1:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      iVar9 = DAT_8c1039dc;
      uStack_c8 = 0x1c;
      *(undefined4 *)(DAT_8c1039dc + (int)ar4) = 0x1c;
      ar4[0x10] = 0x1c;
      *(undefined4 *)(PTR_DAT_8c1039e0 + DAT_8c1039e4) = 0x1c;
      uVar3 = (*(code *)PTR_FUN_8c1039e8)(ar6[6],iVar9,piVar2,puVar5);
      uStack_f6 = (undefined2)uVar3;
      if (*(uint *)(DAT_8c1039ec + (int)ar4) != (uVar3 & 0xffff)) {
        uVar3 = (*(code *)PTR_FUN_8c1039e8)(ar6[6],iVar9,piVar2,puVar5);
        uStack_f8 = (undefined2)uVar3;
        *(uint *)(DAT_8c1039ec + (int)ar4) = uVar3 & 0xffff;
        *(int *)(DAT_8c1039f0 + (int)ar4) = *(int *)(DAT_8c1039f0 + (int)ar4) + 1;
        piStack_cc = ar4;
        if (*(int *)(DAT_8c1039f0 + (int)ar4) == DAT_8c1039f4) {
          DAT_8c1039f8[(int)ar4] = 2;
        }
      }
      piVar7 = (int *)0x2;
      uVar1 = (**(code **)(DAT_8c1039fc + *ar5))(ar5,2,piVar2,puVar5);
      puVar8 = DAT_8c1039f8;
      *(undefined4 *)((int)&uStack_108 + DAT_8c103a00) = uVar1;
      puVar5 = *(undefined **)((int)&uStack_108 + DAT_8c103a00);
      if (puVar5 == (undefined *)0x0) {
        piVar2 = (int *)0x3;
        DAT_8c1039f8[(int)ar4] = 3;
        puVar5 = puVar8;
      }
      break;
    case 2:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      uStack_d0 = 8;
      *(undefined4 *)(DAT_8c103a5c + (int)ar4) = 8;
      ar4[0x10] = 8;
      *(undefined4 *)(PTR_DAT_8c103a60 + DAT_8c103a64) = 8;
      piVar7 = (int *)0x2;
      uVar1 = (**(code **)(DAT_8c103a68 + *ar5))(ar5,2,piVar2,puVar5);
      *(undefined4 *)((int)&uStack_108 + DAT_8c103a6c) = uVar1;
      if (*(int *)((int)&uStack_108 + DAT_8c103a6c) == 0) {
        *(undefined1 *)(DAT_8c103a70 + (int)ar4) = 3;
      }
      break;
    case 3:
      uVar1 = (*(code *)PTR_FUN_8c103a90)(ar6[3],piVar7,piVar2,puVar5);
      uStack_104 = (undefined1)uVar1;
      *(undefined1 *)(DAT_8c103a94 + (int)ar4) = uStack_104;
      break;
    case 4:
      puVar5 = *(undefined **)((int)DAT_8c103b60 + (int)ar4);
      if (puVar5 != (undefined *)0xffffffff) {
        piVar7 = (int *)((int)ar4 + (int)DAT_8c103b64);
        piVar2 = piVar7;
        puVar5 = DAT_8c103b64;
        uVar1 = (*(code *)PTR_FUN_8c103b70)
                          (PTR_s_GRAPHICS_COMMON_8c103b68 + DAT_8c103b6c,piVar7,piVar7,DAT_8c103b64)
        ;
        *(undefined4 *)((int)&uStack_108 + DAT_8c103b74) = uVar1;
        if (*(int *)((int)&uStack_108 + DAT_8c103b74) == 0) {
          puVar5 = PTR_FUN_8c103b7c;
          (*(code *)PTR_FUN_8c103b7c)(DAT_8c103b78,piVar7,piVar2,PTR_FUN_8c103b7c);
          piVar2 = (int *)0x3;
          (*(code *)PTR_FUN_8c103b84)((int)ar4 + DAT_8c103b80,3,3,puVar5);
          *(undefined1 *)(DAT_8c103b74 + (int)ar4) = 1;
          piVar7 = DAT_8c103b60;
          *(undefined4 *)((int)DAT_8c103b60 + (int)ar4) = 0xffffffff;
          *(undefined4 *)(DAT_8c103b88 + (int)ar4) = 0;
        }
      }
      if ((ar4[1] != 7) && (*(int *)((int)DAT_8c103b60 + (int)ar4) != -1)) {
        uStack_8c = (*(code *)PTR_FUN_8c103b8c)((int)ar4 + DAT_8c103b80,piVar7,piVar2,puVar5);
        piVar7 = (int *)(*(code *)PTR_FUN_8c103b70)
                                  (uStack_8c,PTR_s_GRAPHICS_COMMON_8c103b68 + DAT_8c103b90,piVar2,
                                   puVar5);
        piStack_90 = piVar7;
        if (piVar7 == (int *)0x0) {
          (*(code *)PTR_FUN_8c103b7c)(DAT_8c103b78,0,piVar2,puVar5);
          *(undefined4 *)((int)DAT_8c103b60 + (int)ar4) = 0xffffffff;
        }
      }
      break;
    case 5:
    case 6:
      piVar7 = (int *)0x0;
      puVar5 = PTR_FUN_8c103bb0;
      (*(code *)PTR_FUN_8c103bb0)(ar6[1] + DAT_8c103bac,0,piVar2,PTR_FUN_8c103bb0);
      break;
    case 7:
      puVar5 = (undefined *)0x0;
      piVar2 = (int *)ar6[1];
      (*(code *)PTR_FUN_8c103be0)((undefined *)((int)piVar2 + DAT_8c103bdc),0,piVar2,0);
      piVar7 = (int *)0x1;
      (*(code *)PTR_FUN_8c103be4)(ar6[1] + DAT_8c103bdc,1,piVar2,puVar5);
      break;
    case 8:
      uVar1 = (*(code *)PTR_FUN_8c103c18)(ar6[1] + DAT_8c103c14,piVar7,piVar2,puVar5);
      puVar8 = DAT_8c103c1c;
      uStack_108._3_1_ = (char)uVar1;
      puVar5 = (undefined *)(int)uStack_108._3_1_;
      if (puVar5 == (undefined *)0x1) {
        piVar2 = (int *)0xa;
        DAT_8c103c1c[(int)ar4] = 10;
        puVar5 = puVar8;
      }
      else {
        if (ar4[0x10] != 0x1d) {
          ar4[2] = 99;
          ar4[3] = 0;
          ar4[1] = 0xd;
          uStack_d4 = 0x1d;
          *(undefined4 *)(DAT_8c103ca0 + (int)ar4) = 0x1d;
          ar4[0x10] = 0x1d;
          *(undefined4 *)(PTR_DAT_8c103ca4 + DAT_8c103ca8) = 0x1d;
          uVar1 = 0;
          (*(code *)PTR_FUN_8c103cb0)(ar6[1] + DAT_8c103cac,0,piVar2,puVar5);
          (*(code *)PTR_FUN_8c103cb8)(DAT_8c103cb4,uVar1,piVar2,puVar5);
        }
        (*(code *)PTR_FUN_8c103cbc)(ar6[1] + DAT_8c103cac,0,piVar2,puVar5);
        piVar2 = (int *)(ar6[1] + 0x18);
        (*(code *)PTR_FUN_8c103cc0)(piVar2,0,piVar2,puVar5);
        piVar7 = (int *)0x0;
        (*(code *)PTR_FUN_8c103cc0)(ar6[1],0,piVar2,puVar5);
      }
      break;
    case 9:
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[2] = 99;
      uStack_d8 = 0x13;
      *(undefined4 *)(DAT_8c103d1c + (int)ar4) = 0x13;
      ar4[0x10] = 0x13;
      *(undefined4 *)(PTR_DAT_8c103d20 + DAT_8c103d24) = 0x13;
      piVar2 = (int *)0x0;
      (*(code *)PTR_FUN_8c103d2c)(ar6[1] + DAT_8c103d28,0,0,puVar5);
      (*(code *)PTR_FUN_8c103d30)(ar6[1] + 0x18,0,piVar2,puVar5);
      piVar7 = (int *)0x0;
      (*(code *)PTR_FUN_8c103d30)(ar6[1],0,piVar2,puVar5);
      break;
    case 10:
      if ((ar4[0x10] != 2) || (ar4[1] != 1)) {
        ar4[3] = 0;
        ar4[1] = 1;
        ar4[2] = 99;
        piVar2 = (int *)0x2;
        ar4[0x10] = 2;
        piVar7 = ar4 + 0x1b;
        if (*piVar7 != 0) {
          piVar2 = *(int **)(ar4[0x1b] + 8);
          (*(code *)piVar2[0x1e])(ar4[0x1b],piVar7,piVar2,puVar5);
          ar4[0x1b] = 0;
        }
      }
    }
  }
  (*(code *)PTR_FUN_8c103e70)((int)ar4 + DAT_8c103e6c,piVar7,piVar2,puVar5);
  (*(code *)PTR_FUN_8c103e74)(ar4,ar5,ar6,puVar5);
  piVar7 = ar6;
  (*(code *)PTR_FUN_8c103e78)(ar4,ar5,ar6,puVar5);
  puVar8 = PTR_get_field_124_027930_8c103e7c;
  iStack_94 = (*(code *)PTR_get_field_124_027930_8c103e7c)
                        (ar6[2],PTR_get_field_124_027930_8c103e7c,piVar7,puVar5);
  if (iStack_94 != 2) {
    piVar2 = ar6;
    (*(code *)PTR_FUN_8c103e80)(ar4,ar6,piVar7,puVar5);
    iStack_98 = extraout_fr1;
    iVar9 = extraout_fr0;
    if (in_FPSCR_SZ == '\0') {
      iStack_98 = extraout_fr0;
      iVar9 = iStack_94;
    }
    iStack_94 = iVar9;
    (*(code *)PTR_FUN_8c103e84)(ar6[2],piVar2,piVar7,puVar5);
    iStack_dc = (*(code *)PTR_get_field_4_05eed8_8c103e88)(ar4,piVar2,piVar7,puVar5);
    iStack_e0 = ar4[3];
    iVar9 = *(int *)(PTR_DAT_8c103e8c + iStack_e0 * 4 + iStack_dc * 0xc);
    iStack_9c = iStack_dc;
    (*(code *)PTR_FUN_8c103e90)(ar4,iVar9,piVar7,puVar5);
    if (ar4[1] == 2) {
      puVar5 = (undefined *)(*(code *)PTR_get_field_a0_035724_8c103e94)(ar6[6],iVar9,piVar7,puVar5);
      uStack_108._2_1_ = (char)puVar5;
      if (uStack_108._2_1_ != '\x02') {
        iStack_a0 = (*(code *)PTR_FUN_8c103e98)(ar6[1],iVar9,piVar7,puVar5);
        a5_00 = DAT_8c103f10;
        if (iStack_a0 == 0) {
          if (*(int *)(DAT_8c103eb4 + (int)ar4) == -1) {
            ar4[0x10] = 0;
          }
        }
        else if (iStack_a0 == 1) {
          if (*(int *)(DAT_8c103ecc + (int)ar4) == -1) {
            ar4[0x10] = 0;
          }
        }
        else if (iStack_a0 == 2) {
          if (*(int *)(DAT_8c104000 + (int)ar4) == -1) {
            ar4[0x10] = 0;
          }
        }
        else if (iStack_a0 == 4) {
          if (*(int *)(DAT_8c103f10 + (int)ar4) == -1) {
            ar4[0x10] = 0;
          }
          uVar1 = (*(code *)PTR_FUN_8c103f14)(ar6[1] + 0x60,a5_00,piVar7,puVar5);
          uStack_108._1_1_ = (char)uVar1;
          iVar9 = a5_00;
          if (uStack_108._1_1_ < '\x04') {
            ar4[0x10] = 0;
          }
        }
      }
    }
    if ((*(char *)(DAT_8c104004 + (int)ar4) == '\x01') ||
       (puVar8 = (undefined *)
                 (*(code *)PTR_get_field_124_027930_8c104008)(ar6[2],iVar9,piVar7,puVar5),
       puStack_a4 = puVar8, (undefined *)ar4[0x10] != puVar8)) {
      piVar7 = (int *)0x1;
      puVar8 = (undefined *)ar4[0x10];
      (*(code *)PTR_FUN_8c10400c)(ar6[2],puVar8,1,puVar5);
    }
  }
  *(undefined1 *)(DAT_8c104010 + (int)ar4) = 4;
  puVar5 = (undefined *)(*(code *)PTR_FUN_8c104014)(ar6[1],puVar8,piVar7,puVar5);
  puStack_a8 = puVar5;
  if (puVar5 != (undefined *)0xffffffff) {
    piVar7 = (int *)0x0;
    puVar8 = (undefined *)0x0;
    (*(code *)PTR_FUN_8c104018)(ar6[3],0,0,puVar5);
  }
  uVar3 = (*(code *)PTR_FUN_8c10401c)(ar6[6],puVar8,piVar7,puVar5);
  uStack_fa = (undefined2)uVar3;
  if (*(uint *)(DAT_8c104020 + (int)ar4) != (uVar3 & 0xffff)) {
    uVar3 = (*(code *)PTR_FUN_8c10401c)(ar6[6],puVar8,piVar7,puVar5);
    uStack_fc = (undefined2)uVar3;
    *(uint *)(DAT_8c104020 + (int)ar4) = uVar3 & 0xffff;
    iStack_ac = (*(code *)PTR_FUN_8c104028)(ar6[1] + DAT_8c104024,puVar8,piVar7,puVar5);
    if (iStack_ac < 0x31) {
      (*(code *)PTR_FUN_8c10402c)(ar6[3],puVar8,piVar7,puVar5);
    }
    else {
      puVar5 = PTR_FUN_8c10416c;
      (*(code *)PTR_FUN_8c10416c)(ar6[3],puVar8,piVar7,PTR_FUN_8c10416c);
    }
    iVar9 = ar6[3];
    iStack_b0 = (*(code *)PTR_get_field_cc_1041cc_8c104170)(iVar9,puVar8,iVar9,puVar5);
    if (iStack_b0 == 0) {
      puVar8 = (undefined *)0x0;
      puVar5 = PTR_FUN_8c104178;
      (*(code *)PTR_FUN_8c104178)(ar6[1] + DAT_8c104174,0,iVar9,PTR_FUN_8c104178);
    }
    piVar7 = DAT_8c10417c;
    if (0 < *(int *)((int)DAT_8c10417c + (int)ar4)) {
      puVar8 = *(undefined **)((int)DAT_8c10417c + (int)ar4);
      *(undefined **)((int)DAT_8c10417c + (int)ar4) = puVar8 + -1;
      piStack_e4 = ar4;
    }
  }
  if ((ar4[0x10] != 0x1d) || (ar4[0x10] != 0x1b)) {
    *(undefined4 *)(DAT_8c104180 + (int)ar4) = 0;
  }
  iStack_b4 = (*(code *)PTR_get_field_124_027930_8c104184)(ar6[2],puVar8,piVar7,puVar5);
  if ((iStack_b4 == 2) &&
     (*(undefined4 *)(DAT_8c104188 + (int)ar4) = 0x36, *(int *)(DAT_8c10418c + (int)ar4) != -1)) {
    iVar9 = (int)ar4 + DAT_8c104190;
    iStack_b8 = (*(code *)PTR_FUN_8c10419c)
                          (PTR_s_GRAPHICS_COMMON_8c104194 + DAT_8c104198,iVar9,piVar7,puVar5);
    if (iStack_b8 == 0) {
      (*(code *)PTR_FUN_8c1041a4)(DAT_8c1041a0,iVar9,piVar7,puVar5);
      (*(code *)PTR_FUN_8c1041ac)((int)ar4 + DAT_8c1041a8,3,(int)ar4 + DAT_8c1041a8,DAT_8c1041a8);
      ar4[2] = 0;
      ar4[3] = 0;
      *(undefined1 *)(DAT_8c1041b0 + (int)ar4) = 1;
      *(undefined4 *)(DAT_8c10418c + (int)ar4) = 0xffffffff;
      *(undefined4 *)(DAT_8c1041b4 + (int)ar4) = 0;
    }
  }
  *(undefined1 *)(DAT_8c1041b8 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c104198 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c1041bc + (int)ar4) = 0;
  iVar9 = DAT_8c1041c0;
  *(undefined1 *)(DAT_8c1041c0 + (int)ar4) = 0;
  uVar1 = (*(code *)PTR_FUN_8c1041c4)(ar6[3],ar6[3],0,iVar9);
  iVar9 = DAT_8c1041c8;
  *(char *)(DAT_8c1041c8 + (int)ar4) = (char)uVar1;
  return iVar9;
}



/* get_field_cc_1041cc @ 8c1041cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_cc_1041cc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c1041d4 + ar4);
}



/* FUN_8c1041d8 @ 8c1041d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1041d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c1041e0;
  *(undefined4 *)(DAT_8c1041e0 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c1041e4 @ 8c1041e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1041e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x14) = ar5;
  return in_r0;
}



/* FUN_8c1041ec @ 8c1041ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1041ec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + DAT_8c1041f8;
}



/* FUN_8c1041fc @ 8c1041fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1041fc(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  
  do {
    bVar1 = *ar4;
    if (bVar1 != *ar5) {
      return (uint)bVar1 - (uint)*ar5;
    }
    ar5 = ar5 + 1;
    ar4 = ar4 + 1;
  } while (bVar1 != 0);
  return 0;
}



/* Class_12c3c4_m2_104264 @ 8c104264 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12c3c4_m2_104264(int *ar4,int ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  *(undefined4 *)(PTR_DAT_8c104350 + DAT_8c104354) = *(undefined4 *)(DAT_8c104358 + (int)ar4);
  *(undefined4 *)(PTR_DAT_8c104350 + DAT_8c10435c) = *(undefined4 *)(DAT_8c104360 + (int)ar4);
  *(undefined4 *)(PTR_DAT_8c104350 + DAT_8c104364) = *(undefined4 *)(DAT_8c104368 + (int)ar4);
  iVar5 = ar5;
  piVar2 = ar6;
  uVar1 = (*(code *)PTR_FUN_8c10436c)(ar6[6],ar5,ar6,ar7);
  if ((short)uVar1 == 3) {
    uVar1 = (*(code *)PTR_FUN_8c104370)(ar6[1],iVar5,piVar2,ar7);
    piVar2 = (int *)(int)(short)uVar1;
    iVar5 = ar6[6];
    (**(code **)(*ar4 + 0x18))(ar4,iVar5,piVar2,ar7);
  }
  uVar1 = (*(code *)PTR_get_field_13c_028d9c_8c104374)(ar6[1],iVar5,piVar2,ar7);
  *(undefined4 *)(DAT_8c104378 + (int)ar4) = uVar1;
  iVar5 = ar5;
  piVar2 = ar6;
  (*(code *)PTR_FUN_8c10437c)(ar4,ar5,ar6,ar7);
  iVar3 = (**(code **)(DAT_8c104380 + *(int *)(*ar6 + 8)))(*ar6,iVar5,piVar2,ar7);
  if ((iVar3 == 1) && (ar4[1] != 1)) {
    iVar3 = (*(code *)PTR_get_field_6c_02f46c_8c104384)(*ar6,iVar5,piVar2,ar7);
    if ((iVar3 == 0) &&
       (iVar5 = (*(code *)PTR_get_field_70_05f490_8c104388)(*ar6,iVar5,piVar2,ar7), iVar5 == 0)) {
      ar4[0xe] = 2;
      ar4[1] = 2;
      ar4[3] = 0;
      ar4[2] = 99;
      (*(code *)PTR_FUN_8c104390)(ar4,DAT_8c10438c,piVar2,ar7);
      (*(code *)PTR_FUN_8c104394)(ar6[3],0,piVar2,ar7);
    }
    else {
      ar4[0xe] = 2;
      ar4[1] = 0xb;
      ar4[2] = 99;
      ar4[0x10] = 0xd;
      uVar1 = DAT_8c104430;
      (*(code *)PTR_FUN_8c104434)(ar4,DAT_8c104430,piVar2,ar7);
      if (ar4[0x1b] != 0) {
        (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],uVar1,piVar2,ar7);
        ar4[0x1b] = 0;
      }
    }
  }
  piVar6 = ar6;
  (*(code *)PTR_FUN_8c104438)(ar4,ar6,piVar2,ar7);
  uVar1 = (*(code *)PTR_get_field_4_05eed8_8c10443c)(ar4,piVar6,piVar2,ar7);
  piVar2 = ar6;
  (*(code *)PTR_s_STATUS_SNORE_10485e_8c104440)(ar4,ar5,ar6,uVar1);
  iVar5 = (*(code *)PTR_get_field_124_027930_8c104444)(ar6[2],ar5,piVar2,uVar1);
  if (iVar5 != 2) {
    switch(*(undefined1 *)(DAT_8c104448 + (int)ar4)) {
    case 0:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      *(undefined4 *)(DAT_8c1044a0 + (int)ar4) = 9;
      ar4[0x10] = 9;
      *(undefined4 *)(PTR_DAT_8c1044a4 + DAT_8c1044a8) = 9;
      break;
    case 3:
      uVar4 = (*(code *)PTR_FUN_8c1044c4)(ar6[3],ar5,piVar2,uVar1);
      *(char *)(DAT_8c1044c8 + (int)ar4) = (char)uVar4;
      break;
    case 8:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      *(undefined4 *)(DAT_8c1044f4 + (int)ar4) = 0x1d;
      ar4[0x10] = 0x1d;
      *(undefined4 *)(PTR_DAT_8c1044f8 + DAT_8c1044fc) = 0x1d;
      break;
    case 9:
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[2] = 99;
      *(undefined4 *)(DAT_8c104528 + (int)ar4) = 0x13;
      ar4[0x10] = 0x13;
      *(undefined4 *)(PTR_DAT_8c10452c + DAT_8c104530) = 0x13;
      break;
    case 10:
      if ((ar4[0x10] != 2) || (ar4[1] != 1)) {
        ar4[3] = 0;
        ar4[1] = 1;
        ar4[2] = 99;
        ar4[0x10] = 2;
        if (ar4[0x1b] != 0) {
          (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],ar5,piVar2,uVar1);
          ar4[0x1b] = 0;
        }
      }
    }
  }
  if (*(int *)(DAT_8c1045cc + (int)ar4) != -1) {
    iVar5 = (*(code *)PTR_FUN_8c1045d4)(DAT_8c1045d0,ar5,piVar2,uVar1);
    if (iVar5 == 0) {
      *(undefined4 *)(DAT_8c1045d8 + (int)ar4) = 0;
      (*(code *)PTR_FUN_8c1045e0)((int)ar4 + DAT_8c1045dc,3,piVar2,uVar1);
      ar4[1] = 0;
      ar4[0x10] = 0;
      ar4[2] = 0x19;
      *(undefined1 *)(DAT_8c1045e4 + (int)ar4) = 1;
      ar4[3] = 0;
      *(undefined1 *)(DAT_8c1045e8 + (int)ar4) = 1;
      *(undefined4 *)(DAT_8c1045cc + (int)ar4) = 0xffffffff;
    }
    else {
      (*(code *)PTR_FUN_8c104674)(DAT_8c104670,ar5,piVar2,uVar1);
    }
    *(undefined4 *)(DAT_8c104678 + (int)ar4) = *(undefined4 *)(DAT_8c10467c + (int)ar4);
  }
  if (*(int *)(DAT_8c104680 + (int)ar4) == 1) {
    *(undefined4 *)(DAT_8c104680 + (int)ar4) = 0;
  }
  piVar6 = ar6;
  (*(code *)PTR_FUN_8c104684)(ar4,ar6,piVar2,uVar1);
  (*(code *)PTR_FUN_8c104688)(ar6[2],piVar6,piVar2,uVar1);
  if (*(char *)(DAT_8c10468c + (int)ar4) != '\x01') {
    iVar5 = (*(code *)PTR_get_field_124_027930_8c104690)(ar6[2],piVar6,piVar2,uVar1);
    iVar3 = (*(code *)PTR_get_field_40_05eea0_8c104694)(ar4,piVar6,piVar2,uVar1);
    if (iVar5 == iVar3) {
      return iVar3;
    }
  }
  uVar4 = (*(code *)PTR_get_field_40_05eea0_8c104694)(ar4,piVar6,piVar2,uVar1);
  uVar1 = (*(code *)PTR_FUN_8c104698)(ar6[2],uVar4,1,uVar1);
  return uVar1;
}



/* s_REACTION_CATCH_1046a0 @ 8c10469c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_REACTION_CATCH_1046a0(int ar4,int ar5,int ar6,undefined *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [20];
  
  if (*(int *)(ar4 + 4) == 1) {
    iVar1 = 1;
  }
  else {
    if (*(int *)(ar4 + 0x6c) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
    (*(code *)PTR_Vec3_ctor_copy_8c1047fc)(auStack_1c,ar5 + 0x10,ar6,ar7);
    (*(code *)PTR_Vec3_assign_wrap_05f640_8c104800)(ar4,auStack_1c,ar6,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c104804)(auStack_1c,0xffffffff,ar6,ar7);
    *(undefined4 *)(DAT_8c104808 + ar4) = 0x15;
    if (*(int *)(DAT_8c10480c + ar4) == -1) {
      (*(code *)PTR_FUN_8c104814)(ar4 + DAT_8c104810,0,ar6,ar7);
      ar7 = PTR_s_GRAPHICS_COMMON_8c104818 + DAT_8c10481c;
      uVar2 = 0;
      (*(code *)PTR_FUN_8c104820)(ar4 + DAT_8c104810,0x25,0,ar7);
      (*(code *)PTR_strcpy_8c104828)
                (ar4 + DAT_8c104824,PTR_s_GRAPHICS_COMMON_8c104818 + DAT_8c10481c,uVar2,ar7);
      (*(code *)PTR_strcpy_8c104828)
                (ar4 + DAT_8c10482c,PTR_s_GRAPHICS_COMMON_8c104818 + 0x33,uVar2,ar7);
      *(undefined4 *)(DAT_8c104830 + ar4) = 0;
      ar6 = ar4 + DAT_8c104810;
      uVar2 = (*(code *)PTR_FUN_8c10483c)(DAT_8c104838,*(undefined4 *)(DAT_8c104834 + ar4),ar6,ar7);
      *(undefined4 *)(DAT_8c10480c + ar4) = uVar2;
      *(undefined4 *)(DAT_8c104840 + ar4) = 0;
      uVar2 = 2;
      (*(code *)PTR_FUN_8c104814)(ar4 + DAT_8c104810,2,ar6,ar7);
    }
    iVar1 = *(int *)(DAT_8c10480c + ar4);
    if (iVar1 != -1) {
      *(undefined4 *)(DAT_8c104808 + ar4) = *(undefined4 *)(DAT_8c104844 + ar4);
      iVar1 = (*(code *)PTR_FUN_8c104848)(DAT_8c104838,uVar2,ar6,ar7);
      if (iVar1 == 0) {
        *(undefined4 *)(DAT_8c104808 + ar4) = 0;
        (*(code *)PTR_FUN_8c104814)(ar4 + DAT_8c104810,3,ar6,ar7);
        *(undefined4 *)(ar4 + 4) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0;
        *(undefined4 *)(ar4 + 8) = 0x19;
        *(undefined1 *)(DAT_8c10484c + ar4) = 1;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined1 *)(DAT_8c104850 + ar4) = 1;
        iVar1 = DAT_8c10480c;
        *(undefined4 *)(DAT_8c10480c + ar4) = 0xffffffff;
      }
    }
  }
  return iVar1;
}



/* s_STATUS_SNORE_10485e @ 8c104854 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_STATUS_SNORE_10485e(int ar4,undefined4 ar5,int *ar6,undefined *ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int a5;
  undefined4 a5_00;
  int *piVar4;
  undefined *puVar5;
  undefined *puVar6;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_38 [4];
  undefined *puStack_34;
  undefined1 auStack_28 [20];
  
  piVar4 = ar6;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(PTR_DAT_8c1048b0 + *(int *)(ar4 + 0xc) * 4 + (int)ar7 * 0xc);
    (*(code *)PTR_FUN_8c1048b4)(ar4,ar5,ar6,ar7);
    uVar3 = 1;
    (*(code *)PTR_FUN_8c1048b8)(ar4,1,piVar4,ar7);
  }
  else {
    uVar3 = *(undefined4 *)(PTR_DAT_8c104900 + *(int *)(ar4 + 0xc) * 4 + (int)ar7 * 0xc);
    *(undefined4 *)(ar4 + 0x40) = uVar3;
  }
  switch(*(undefined4 *)(ar4 + 0x40)) {
  case 0:
    (*(code *)PTR_FUN_8c10499c)(ar4,3,piVar4,ar7);
    break;
  case 1:
    uVar3 = 3;
    (*(code *)PTR_FUN_8c104e54)(ar4,3,piVar4,ar7);
    iVar2 = (*(code *)PTR_FUN_8c104e58)(ar4,uVar3,piVar4,ar7);
    if (iVar2 == 1) {
      (*(code *)PTR_FUN_8c104e74)(ar4,ar5,piVar4,ar7);
    }
    else {
      *(undefined4 *)(ar4 + 0x6c) = 0;
      *(undefined4 *)(ar4 + 0x38) = 2;
    }
    (*(code *)PTR_FUN_8c104e78)(ar4,ar5,piVar4,ar7);
    break;
  case 2:
    a5 = *(int *)(*ar6 + 8);
    iVar2 = (**(code **)(DAT_8c1049d0 + a5))(*ar6,a5,piVar4,ar7);
    if (iVar2 == 1) {
      iVar2 = *ar6;
      (*(code *)PTR_FUN_8c1049d4)(iVar2,a5,piVar4,ar7);
      (*(code *)PTR_FUN_8c1049d8)(iVar2,a5,piVar4,PTR_FUN_8c1049d8);
    }
    break;
  case 4:
    iVar2 = (*(code *)PTR_FUN_8c104b00)(ar4,uVar3,piVar4,ar7);
    if (iVar2 == 1) {
      if (*(int *)(DAT_8c104b04 + ar4) == 1) {
        (*(code *)PTR_FUN_8c104b08)(*(undefined4 *)(ar4 + 0x6c),1,piVar4,ar7);
      }
      (*(code *)PTR_FUN_8c104b0c)(ar4,ar5,piVar4,ar7);
    }
    else {
      *(undefined4 *)(ar4 + 0x38) = 2;
    }
    break;
  case 6:
    puVar5 = PTR_FUN_8c104a2c;
    uVar1 = (*(code *)PTR_FUN_8c104a2c)(ar6[6],uVar3,piVar4,PTR_FUN_8c104a2c);
    iVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c104a30)(uVar1 & 0xffff,0x25,piVar4,puVar5);
    if (iVar2 == 0xe) {
      puVar5 = PTR_s_GRAPHICS_COMMON_8c104a34 + DAT_8c104a38;
      uVar3 = 0;
      (*(code *)PTR_FUN_8c104a40)(ar4 + DAT_8c104a3c,0x11,0,puVar5);
      (*(code *)PTR_FUN_8c104a44)(ar4,3,uVar3,puVar5);
    }
    break;
  case 7:
    (*(code *)PTR_FUN_8c104a58)(ar4,3,piVar4,ar7);
    break;
  case 10:
  case 0x14:
  case 0x21:
    (*(code *)PTR_Vec3_ctor_copy_8c104e14)(auStack_28,ar6[5] + 0x10,piVar4,ar7);
    (*(code *)PTR_Vec3_assign_wrap_05f640_8c104e18)(ar4,auStack_28,piVar4,ar7);
    (*(code *)PTR_Vec3_dtor_8c104e1c)(auStack_28,0xffffffff,piVar4,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x78) = DAT_8c104e20;
    }
    else {
      *(undefined8 *)(ar4 + 0x78) = CONCAT44(uRam8c104e24,DAT_8c104e20);
    }
    break;
  case 0xc:
    iVar2 = (*(code *)PTR_FUN_8c104b54)(ar4,uVar3,piVar4,ar7);
    if (iVar2 == 1) {
      if (*(int *)(DAT_8c104b58 + ar4) == 1) {
        (*(code *)PTR_FUN_8c104b5c)(*(undefined4 *)(ar4 + 0x6c),1,piVar4,ar7);
        *(undefined4 *)(DAT_8c104b58 + ar4) = 0;
      }
      (*(code *)PTR_FUN_8c104b60)(ar4,ar5,piVar4,ar7);
    }
    else {
      *(undefined4 *)(ar4 + 0x38) = 2;
      (*(code *)PTR_FUN_8c104b78)(ar6[3],0,piVar4,ar7);
    }
    break;
  case 0x11:
    uVar1 = (*(code *)PTR_FUN_8c104c04)(ar6[6],uVar3,piVar4,ar7);
    uVar3 = 10;
    iVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c104c08)(uVar1 & 0xffff,10,piVar4,ar7);
    if (((iVar2 == 5) && (*(char *)(DAT_8c104c0c + ar4) == '\0')) &&
       (iVar2 = (*(code *)PTR_get_field_140_025f70_8c104c10)(ar6[1],uVar3,piVar4,ar7), iVar2 == 0))
    {
      (*(code *)PTR_FUN_8c104c18)(DAT_8c104c14,(int)*(char *)(DAT_8c104c0c + ar4),piVar4,ar7);
      iVar2 = (*(code *)PTR_FUN_8c104c1c)(ar4,ar6,piVar4,ar7);
      if (iVar2 == 0) {
        (*(code *)PTR_FUN_8c104c64)
                  (ar4 + DAT_8c104c60,10,0,PTR_s_GRAPHICS_COMMON_8c104c58 + DAT_8c104c5c);
      }
      else {
        (*(code *)PTR_FUN_8c104c2c)
                  (ar4 + DAT_8c104c28,10,0,PTR_s_GRAPHICS_COMMON_8c104c20 + DAT_8c104c24);
      }
      *(undefined1 *)(DAT_8c104c68 + ar4) = 1;
    }
    break;
  case 0x18:
  case 0x20:
    if (*(int *)(DAT_8c104d4c + ar4) == 1) {
      (*(code *)PTR_FUN_8c104d50)(ar6[3],uVar3,piVar4,ar7);
      a5_00 = 0;
      (*(code *)PTR_FUN_8c104d54)(ar6[3],0,piVar4,ar7);
      *(char *)(DAT_8c104d58 + ar4) = *(char *)(DAT_8c104d58 + ar4) + '\x01';
      *(undefined4 *)(DAT_8c104d5c + ar4) = DAT_8c104d60;
      uVar3 = (*(code *)PTR_FUN_8c104d64)(ar6[3],a5_00,piVar4,ar7);
      if ((char)uVar3 < '\x04') {
        uVar3 = (*(code *)PTR_FUN_8c104d64)(ar6[3],a5_00,piVar4,ar7);
        if ((char)uVar3 == '\x01') {
          (*(code *)PTR_FUN_8c104d6c)(ar6[1] + DAT_8c104d68,0,piVar4,ar7);
        }
        piVar4 = (int *)0x1b;
        a5_00 = 0x17;
        iVar2 = ar6[6];
        (*(code *)PTR_FUN_8c104d70)(iVar2,0x17,0x1b,ar7);
        (*(code *)PTR_FUN_8c104d74)(iVar2,a5_00,piVar4,ar7);
      }
      uVar3 = (*(code *)PTR_FUN_8c104d64)(ar6[3],a5_00,piVar4,ar7);
      if ((char)uVar3 == '\x04') {
        *(undefined1 *)(DAT_8c104d78 + ar4) = 7;
        (*(code *)PTR_FUN_8c104d6c)(ar6[1] + DAT_8c104d68,1,piVar4,ar7);
        (*(code *)PTR_FUN_8c104d7c)(ar6[6],2,piVar4,ar7);
        (*(code *)PTR_FUN_8c104d70)(ar6[6],0x18,0x1b,ar7);
      }
      (*(code *)PTR_FUN_8c104d8c)
                (ar4 + DAT_8c104d88,0x1f,0,PTR_s_GRAPHICS_COMMON_8c104d80 + DAT_8c104d84);
      *(undefined4 *)(DAT_8c104d4c + ar4) = 0;
    }
    break;
  case 0x1b:
    if (*(int *)(DAT_8c104dc4 + ar4) == 1) {
      (*(code *)PTR_FUN_8c104dd4)
                (ar4 + DAT_8c104dd0,0x2a,0,PTR_s_GRAPHICS_COMMON_8c104dc8 + DAT_8c104dcc);
      *(undefined4 *)(DAT_8c104dc4 + ar4) = 0;
    }
    break;
  case 0x1d:
    if (*(int *)(DAT_8c104f20 + ar4) == 1) {
      ar7 = PTR_s_GRAPHICS_COMMON_8c104f24 + DAT_8c104f28;
      piVar4 = (int *)0x0;
      (*(code *)PTR_FUN_8c104f30)(ar4 + DAT_8c104f2c,0x2a,0,ar7);
      *(undefined4 *)(DAT_8c104f20 + ar4) = 0;
    }
    (*(code *)PTR_FUN_8c104f34)(*ar6,*ar6,piVar4,ar7);
    puVar5 = DAT_8c104f38;
    puVar6 = PTR_Vec3_dtor_8c104f3c;
    if (in_FPSCR_SZ == '\0') {
      puVar5 = puStack_34;
      puVar6 = DAT_8c104f38;
    }
    (*(code *)PTR_Vec3_dtor_8c104f3c)(auStack_38,0xffffffff,piVar4,ar7);
    if (in_FPSCR_PR != '\0' || (float)puVar6 <= (float)puVar5) {
      (*(code *)PTR_FUN_8c104f30)
                (ar4 + DAT_8c104f2c,0x14,0,PTR_s_GRAPHICS_COMMON_8c104f24 + DAT_8c104f40);
    }
    break;
  case 0x1f:
    iVar2 = (*(code *)PTR_FUN_8c104a98)(ar4,uVar3,piVar4,ar7);
    if (iVar2 == 1) {
      puVar5 = PTR_s_GRAPHICS_COMMON_8c104a9c + DAT_8c104aa0;
      uVar3 = 0;
      (*(code *)PTR_FUN_8c104aa8)(ar4 + DAT_8c104aa4,0x26,0,puVar5);
      (*(code *)PTR_FUN_8c104aac)(ar4,ar5,uVar3,puVar5);
    }
    else {
      *(undefined4 *)(ar4 + 0x38) = 2;
      if (*(int *)(ar4 + 0x6c) != 0) {
        *(undefined4 *)(ar4 + 0x6c) = 0;
      }
    }
  }
  return 1;
}



/* FUN_8c104f44 @ 8c104f44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c104f44(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x39) = *(char *)(ar4 + 0x39) + '\x01';
  return 0x39;
}



/* FUN_8c104f5c @ 8c104f5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c104f5c(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  char in_FPSCR_SZ;
  
  if (*(int *)(ar4 + 0x3c) == 0) {
    (*(code *)PTR_get_field_124_027930_8c10507c)(*(undefined4 *)(ar6 + 8),ar5,ar6,ar7);
    uVar2 = ar5;
    iVar1 = ar6;
    (*(code *)PTR_s_GRATIFIC_EAT_1063b2_8c105080)(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + 1;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(PTR_DAT_8c105084 + *(int *)(ar4 + 0xc) * 4 + *(int *)(ar4 + 4) * 0xc);
    if ((*(int *)(ar4 + 0x40) == 0x22) || (*(int *)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(ar4 + 0x40) = 0;
      *(undefined4 *)(ar4 + 8) = 0;
      if (*(int *)(ar4 + 4) == 1) {
        *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + -1;
        ar5 = uVar2;
        ar6 = iVar1;
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x70) = DAT_8c105088;
        }
        else {
          *(undefined8 *)(ar4 + 0x70) = CONCAT44(PTR_FUN_8c10508c,DAT_8c105088);
        }
        *(undefined4 *)(ar4 + 0xc) = 0;
        ar5 = 0;
        (*(code *)PTR_FUN_8c10508c)(ar4,0,iVar1,ar7);
        ar6 = iVar1;
      }
    }
    else {
      (*(code *)PTR_FUN_8c105090)(ar4,ar5,ar6,ar7);
    }
  }
  if (*(int *)(ar4 + 0x3c) == 2) {
    ar5 = 2;
    (*(code *)PTR_FUN_8c10508c)(ar4,2,ar6,ar7);
  }
  iVar1 = *(int *)(ar4 + 0x38);
  if (iVar1 == 2) {
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 8) = 0;
    *(undefined4 *)(ar4 + 0xc) = 0;
    iVar1 = 0;
    if (*(int *)(ar4 + 0x6c) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
      iVar1 = 0x6c;
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
  }
  return iVar1;
}



/* FUN_8c105094 @ 8c105094 callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c1050f2 */
/* WARNING: Switch with 1 destination removed at 0x8c105104 */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c105094(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 auStack_10c [60];
  
  *(undefined4 *)((int)auStack_10c + DAT_8c105118) = 0xffffffff;
  if ((*(int *)(ar4 + 0x38) == 2) && (*(int *)(ar4 + 0x6c) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  iVar2 = *(int *)(ar4 + 0x40);
  uVar1 = 0x20;
  if ((iVar2 < 0x21) && (uVar1 = 1, 0 < iVar2)) {
                    /* WARNING: Could not recover jumptable at 0x8c105114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_8c10511c)[iVar2 + -1])();
    return uVar1;
  }
  return uVar1;
}



/* s_GRATIFIC_EAT_1063b2 @ 8c1063a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined * s_GRATIFIC_EAT_1063b2(int ar4,int *ar5,int *ar6,undefined *ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 a6;
  undefined4 uVar4;
  int *a4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 a7;
  int iVar8;
  
  iVar8 = 0;
  piVar5 = ar5;
  piVar7 = ar6;
  iVar2 = (*(code *)PTR_get_field_124_027930_8c1063f0)(ar6[2],ar5,ar6,ar7);
  puVar1 = DAT_8c106ba8;
  puVar3 = (undefined *)0x21;
  if ((iVar2 < 0x22) && (puVar3 = (undefined *)0x1, 0 < iVar2)) {
    puVar3 = (&switchD_8c1063ec::switchdataD_8c1063f4)[iVar2 + -1];
    switch(iVar2) {
    case 4:
      iVar2 = (*(code *)PTR_FUN_8c10650c)(ar4,piVar5,piVar7,ar7);
      if (iVar2 == 1) {
        iVar2 = (*(code *)PTR_get_field_24_05c284_8c106510)
                          (*(undefined4 *)(ar4 + 0x6c),piVar5,piVar7,ar7);
        if ((iVar2 == 0xf) &&
           (ar7 = (undefined *)
                  (*(code *)PTR_get_field_13c_028d9c_8c106514)
                            (ar6[1],piVar5,piVar7,PTR_get_field_13c_028d9c_8c106514),
           ar7 == (undefined *)0x2)) {
          piVar5 = (int *)0x1e;
          (*(code *)PTR_FUN_8c106518)(*(undefined4 *)(ar4 + 0x6c),0x1e,piVar7,2);
        }
        else {
          iVar2 = (*(code *)PTR_get_field_24_05c284_8c106574)
                            (*(undefined4 *)(ar4 + 0x6c),piVar5,piVar7,ar7);
          if (iVar2 == 0xf) {
            uVar4 = (*(code *)PTR_get_field_6c_02f46c_8c106578)
                              (*(undefined4 *)(ar4 + 0x6c),piVar5,piVar7,ar7);
            piVar5 = (int *)(*(code *)PTR_FUN_8c10657c)
                                      (*(undefined4 *)(ar4 + 0x6c),uVar4,piVar7,ar7);
            (*(code *)PTR_FUN_8c106580)(ar6[1],piVar5,piVar7,ar7);
          }
          else {
            piVar5 = (int *)(*(code *)PTR_FUN_8c1065f0)(*(undefined4 *)(ar4 + 0x6c),0x1e,piVar7,ar7)
            ;
            (*(code *)PTR_FUN_8c1065f4)(ar6[1],piVar5,piVar7,ar7);
          }
        }
      }
      if (*(int *)(ar4 + 0x6c) == 0) {
        puVar3 = (undefined *)0x0;
      }
      else {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                  (*(int *)(ar4 + 0x6c),piVar5,piVar7,ar7);
        *(undefined4 *)(ar4 + 0x6c) = 0;
        puVar3 = (undefined *)
                 (*(code *)PTR_FUN_8c106604)
                           (ar4 + DAT_8c106600,2,0,PTR_s_GRAPHICS_COMMON_8c1065f8 + DAT_8c1065fc);
      }
      break;
    case 6:
      *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + -1;
      puVar3 = (undefined *)0x32;
      *(undefined4 *)(ar4 + 8) = 0x32;
      break;
    case 8:
      DAT_8c106ba8[ar4] = 3;
      puVar3 = puVar1;
      break;
    case 9:
      *(undefined4 *)(ar4 + 8) = 0;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0;
      puVar3 = DAT_8c106494;
      DAT_8c106494[ar4] = 3;
      break;
    case 0xb:
      if (*(int *)(DAT_8c106998 + ar4) == -1) {
        puVar3 = (undefined *)0xffffffff;
      }
      else {
        puVar3 = (undefined *)(*(code *)PTR_FUN_8c1069a0)(ar4 + DAT_8c10699c,2,piVar7,ar7);
      }
      break;
    case 0xc:
      iVar2 = (*(code *)PTR_FUN_8c10668c)(ar4,piVar5,piVar7,ar7);
      if (iVar2 == 1) {
        uVar4 = (*(code *)PTR_get_field_6c_02f46c_8c106690)
                          (*(undefined4 *)(ar4 + 0x6c),piVar5,piVar7,ar7);
        uVar4 = (*(code *)PTR_FUN_8c106694)(*(undefined4 *)(ar4 + 0x6c),uVar4,piVar7,ar7);
        (*(code *)PTR_FUN_8c106698)(ar6[1],uVar4,piVar7,ar7);
        piVar7 = *(int **)(*(int *)(ar4 + 0x6c) + 8);
        (*(code *)piVar7[0x1e])(*(int *)(ar4 + 0x6c),uVar4,piVar7,ar7);
        *(undefined4 *)(ar4 + 0x6c) = 0;
        uVar4 = (*(code *)PTR_FUN_8c10669c)(ar6[1],PTR_FUN_8c10669c,piVar7,ar7);
        if ((short)uVar4 == 2) {
          piVar5 = (int *)0x0;
          while( true ) {
            uVar4 = 3;
            a4 = ar5;
            iVar2 = (**(code **)(DAT_8c1067a0 + *ar5))(ar5,3,piVar7,ar7);
            if (iVar2 <= (int)piVar5) break;
            uVar4 = 3;
            piVar7 = piVar5;
            iVar2 = (**(code **)(DAT_8c106790 + *ar5))(ar5,3,piVar5,ar7);
            iVar2 = (**(code **)(DAT_8c106794 + *(int *)(iVar2 + 8)))(iVar2,uVar4,piVar7,ar7);
            if (iVar2 == 2) {
              uVar4 = 3;
              iVar2 = (**(code **)(DAT_8c106790 + *ar5))(ar5,3,piVar5,ar7);
              piVar7 = *(int **)(iVar2 + 8);
              iVar2 = (**(code **)(DAT_8c106798 + (int)piVar7))(iVar2,uVar4,piVar7,ar7);
              if (iVar2 == 1) {
                uVar4 = 3;
                piVar7 = piVar5;
                iVar2 = (**(code **)(DAT_8c106790 + *ar5))(ar5,3,piVar5,ar7);
                piVar7 = (int *)(**(code **)(DAT_8c10679c + *(int *)(iVar2 + 8)))
                                          (iVar2,uVar4,piVar7,ar7);
                if (piVar7 == (int *)0x0) {
                  iVar8 = iVar8 + 1;
                }
              }
            }
            piVar5 = (int *)((int)piVar5 + 1);
          }
          if (iVar8 == 2) {
            piVar7 = (int *)0x1b;
            (*(code *)PTR_FUN_8c1067a4)(ar6[6],0xf,0x1b,ar7);
            uVar4 = 1;
            a4 = (int *)ar6[3];
            (*(code *)PTR_FUN_8c1067a8)(a4,1,piVar7,ar7);
          }
          (*(code *)PTR_FUN_8c1067ac)(a4,uVar4,piVar7,ar7);
        }
      }
      puVar3 = (undefined *)(*(code *)PTR_FUN_8c1067b0)(ar6[3],0,piVar7,ar7);
      break;
    case 0xe:
      (*(code *)PTR_FUN_8c106b90)(ar6[1] + DAT_8c106b8c,0,piVar7,ar7);
      uVar4 = (*(code *)PTR_get_field_13c_028d9c_8c106b94)(ar6[1],ar6[1],piVar7,ar7);
      puVar3 = (undefined *)(*(code *)PTR_FUN_8c106b98)(ar6[6],0x11,uVar4,ar7);
      break;
    case 0x10:
      (**(code **)(DAT_8c106860 + *(int *)(*ar6 + 8)))(*ar6,piVar5,piVar7,ar7);
      uVar4 = (**(code **)(DAT_8c106864 + *ar5))(ar5,piVar5,piVar7,ar7);
      uVar6 = (*(code *)PTR_FUN_8c106868)(ar6[1],piVar5,piVar7,ar7);
      a6 = (*(code *)PTR_get_field_140_025f70_8c10686c)(ar6[1],piVar5,piVar7,ar7);
      a7 = 1;
      iVar2 = (int)(short)uVar6;
      (*(code *)PTR_FUN_8c106870)(uVar4,iVar2,a6,1);
      uVar4 = (**(code **)(DAT_8c106864 + *ar5))(ar5,iVar2,a6,a7);
      uVar6 = (*(code *)PTR_FUN_8c106868)(ar6[1],iVar2,a6,a7);
      iVar2 = (*(code *)PTR_get_field_140_025f70_8c10686c)(ar6[1],iVar2,a6,a7);
      uVar4 = (*(code *)PTR_FUN_8c106874)(uVar4,(int)(short)uVar6,1 - iVar2,a7);
      if ((char)uVar4 == '\x01') {
        puVar3 = (undefined *)0x1;
      }
      else {
        puVar3 = (undefined *)(*(int *)(ar4 + 0xc) + -1);
        *(undefined **)(ar4 + 0xc) = puVar3;
      }
      break;
    case 0x11:
      iVar2 = (*(code *)PTR_get_field_140_025f70_8c106938)(ar6[1],piVar5,piVar7,ar7);
      if (iVar2 == 1) {
        *(undefined1 *)(DAT_8c10693c + ar4) = 5;
        (**(code **)(DAT_8c106940 + *(int *)(*ar6 + 8)))(*ar6,piVar5,piVar7,ar7);
        piVar5 = (int *)0x1;
        (*(code *)PTR_FUN_8c106948)(ar6[1] + DAT_8c106944,1,piVar7,ar7);
        *(undefined4 *)PTR_DAT_8c10694c = 1;
      }
      iVar2 = (*(code *)PTR_get_field_140_025f70_8c106938)(ar6[1],piVar5,piVar7,ar7);
      if (iVar2 == 0) {
        *(undefined1 *)(DAT_8c10693c + ar4) = 10;
        (*(code *)PTR_FUN_8c106954)(DAT_8c106950,piVar5,piVar7,ar7);
        ar7 = PTR_s_GRAPHICS_COMMON_8c106958 + DAT_8c10695c;
        (*(code *)PTR_FUN_8c106964)(ar4 + DAT_8c106960,9,0,ar7);
        piVar7 = (int *)0x1b;
        (*(code *)PTR_FUN_8c106968)(ar6[6],0x14,0x1b,ar7);
      }
      *(undefined4 *)(ar4 + 4) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0;
      *(undefined4 *)(ar4 + 8) = 0;
      *(undefined4 *)(ar4 + 0xc) = 0;
      (*(code *)PTR_FUN_8c10696c)(ar6[1] + DAT_8c106944,0,piVar7,ar7);
      uVar4 = 1;
      iVar2 = ar6[1] + DAT_8c106944;
      (*(code *)PTR_FUN_8c106970)(iVar2,1,piVar7,ar7);
      puVar3 = (undefined *)(*(code *)PTR_FUN_8c106974)(iVar2,uVar4,piVar7,ar7);
      break;
    case 0x13:
      *(undefined1 *)(DAT_8c106c58 + ar4) = 10;
      *(undefined4 *)PTR_DAT_8c106c5c = 1;
      uVar4 = (*(code *)PTR_get_field_13c_028d9c_8c106c60)(ar6[1],piVar5,piVar7,ar7);
      uVar6 = 0x19;
      (*(code *)PTR_FUN_8c106c64)(ar6[6],0x19,uVar4,ar7);
      (*(code *)PTR_FUN_8c106c6c)(DAT_8c106c68,uVar6,uVar4,ar7);
      puVar3 = PTR_s_GRAPHICS_COMMON_8c106c70 + DAT_8c106c74;
      uVar4 = 0;
      iVar2 = ar4 + DAT_8c106c78;
      (*(code *)PTR_FUN_8c106c7c)(iVar2,0x1f,0,puVar3);
      puVar3 = (undefined *)(*(code *)PTR_FUN_8c106c80)(iVar2,PTR_FUN_8c106c80,uVar4,puVar3);
      break;
    case 0x18:
    case 0x20:
      (*(code *)PTR_FUN_8c106ac8)(DAT_8c106ac4,piVar5,piVar7,ar7);
      uVar4 = (*(code *)PTR_FUN_8c106acc)(ar6[3],piVar5,piVar7,ar7);
      if ('\x03' < (char)uVar4) {
        uVar4 = (*(code *)PTR_FUN_8c106acc)(ar6[3],piVar5,piVar7,ar7);
        (*(code *)PTR_FUN_8c106ad0)(DAT_8c106ac4,(int)(char)uVar4,piVar7,ar7);
        ar7 = PTR_s_GRAPHICS_COMMON_8c106ad4 + DAT_8c106ad8;
        piVar7 = (int *)0x0;
        (*(code *)PTR_FUN_8c106ae0)(ar4 + DAT_8c106adc,0x26,0,ar7);
        (*(code *)PTR_FUN_8c106ae8)(ar6[1] + DAT_8c106ae4,1,piVar7,ar7);
        (*(code *)PTR_FUN_8c106aec)(ar6[1],0,piVar7,ar7);
        (*(code *)PTR_FUN_8c106aec)(ar6[1] + 0x18,0,piVar7,ar7);
        (*(code *)PTR_FUN_8c106aec)(ar6[1] + 0x60,0,piVar7,ar7);
        (*(code *)PTR_FUN_8c106aec)(ar6[1] + 0x30,0,piVar7,ar7);
        piVar5 = (int *)0x1;
        (*(code *)PTR_FUN_8c106af4)(ar6[1] + DAT_8c106af0,1,piVar7,ar7);
        *(undefined4 *)(DAT_8c106af8 + ar4) = 1;
      }
      uVar4 = (*(code *)PTR_FUN_8c106acc)(ar6[3],piVar5,piVar7,ar7);
      puVar3 = (undefined *)(int)(char)uVar4;
      if ((char)uVar4 < '\x04') {
        puVar3 = PTR_FUN_8c106afc;
        (*(code *)PTR_FUN_8c106afc)(ar6[6],0x17,0x1b,PTR_FUN_8c106afc);
        iVar2 = ar6[3];
        uVar4 = (*(code *)PTR_FUN_8c106acc)(iVar2,PTR_FUN_8c106acc,iVar2,puVar3);
        (*(code *)PTR_FUN_8c106ad0)(DAT_8c106ac4,(int)(char)uVar4,iVar2,puVar3);
        if (*(char *)(DAT_8c106b00 + ar4) < '\x03') {
          (*(code *)PTR_FUN_8c106b04)(DAT_8c106ac4,0,iVar2,puVar3);
        }
        else {
          (*(code *)PTR_FUN_8c106b44)(DAT_8c106b40,1,iVar2,puVar3);
        }
        puVar3 = (undefined *)
                 (*(code *)PTR_FUN_8c106b54)
                           (ar4 + DAT_8c106b50,0x1e,0,PTR_s_GRAPHICS_COMMON_8c106b48 + DAT_8c106b4c)
        ;
      }
      break;
    case 0x19:
      puVar3 = (undefined *)
               (*(code *)PTR_FUN_8c106be4)
                         (ar4 + DAT_8c106be0,0x1f,0,PTR_s_GRAPHICS_COMMON_8c106bd8 + DAT_8c106bdc);
      break;
    case 0x1f:
      if (*(int *)(ar4 + 0x6c) == 0) {
        puVar3 = (undefined *)0x0;
      }
      else {
        *(undefined4 *)(ar4 + 0x6c) = 0;
        puVar3 = (undefined *)0x6c;
      }
    }
  }
  return puVar3;
}



/* s_REACTION_TEMP_LACK_106c8a @ 8c106c84 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * s_REACTION_TEMP_LACK_106c8a(int ar4,int *ar5,int ar6,undefined *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int a6;
  float fVar5;
  ulonglong in_dr0;
  float fVar6;
  float fVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  a6 = ar6;
  if ((*(int *)(DAT_8c106efc + ar4) == 0) &&
     (iVar1 = (**(code **)(DAT_8c106f00 + *ar5))(ar5,0,ar6,ar7),
     *(int *)(DAT_8c106f04 + ar4) != iVar1)) {
    uVar4 = 0;
    uVar2 = (**(code **)(DAT_8c106f00 + *ar5))(ar5,0,a6,ar7);
    *(undefined4 *)(DAT_8c106f04 + ar4) = uVar2;
    if (*(int *)(DAT_8c106f04 + ar4) == 0) {
      (**(code **)(DAT_8c106f08 + *ar5))(ar5,uVar4,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44(DAT_8c106f0c,(int)(in_dr0 >> 0x20));
      }
      else {
        in_dr0 = CONCAT44(_DAT_8c106f10,DAT_8c106f0c);
      }
      if (in_FPSCR_PR != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) {
        (**(code **)(DAT_8c106f08 + *ar5))(ar5,uVar4,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = CONCAT44(_DAT_8c106f10,(int)(in_dr0 >> 0x20));
        }
        else {
          in_dr0 = CONCAT44(PTR_FUN_8c106f14,_DAT_8c106f10);
        }
        if ((in_FPSCR_PR != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) &&
           (uVar2 = (*(code *)PTR_FUN_8c106f14)(*(undefined4 *)(ar6 + 0x18),uVar4,a6,ar7),
           2 < (ushort)uVar2)) {
          ar7 = PTR_s_GRAPHICS_COMMON_8c106f18 + DAT_8c106f1c;
          a6 = 0;
          (*(code *)PTR_FUN_8c106f24)(ar4 + DAT_8c106f20,0x2c,0,ar7);
          *(undefined4 *)(DAT_8c106efc + ar4) = 1;
        }
      }
    }
  }
  if (*(int *)(DAT_8c106f28 + ar4) == 0) {
    uVar2 = 0;
    iVar1 = (**(code **)(DAT_8c106f2c + *ar5))(ar5,0,a6,ar7);
    if (iVar1 == 2) {
      iVar1 = (*(code *)PTR_get_field_13c_028d9c_8c106f30)(*(undefined4 *)(ar6 + 4),uVar2,a6,ar7);
      uVar4 = (undefined4)(in_dr0 >> 0x20);
      if (iVar1 == 4) {
        (**(code **)(DAT_8c106f08 + *ar5))(ar5,uVar2,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = CONCAT44(DAT_8c106f3c,uVar4);
        }
        else {
          in_dr0 = CONCAT44(DAT_8c106f40,DAT_8c106f3c);
        }
        if ((in_FPSCR_PR != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) &&
           (uVar2 = (*(code *)PTR_FUN_8c106f14)(*(undefined4 *)(ar6 + 0x18),uVar2,a6,ar7),
           2 < (ushort)uVar2)) {
          ar7 = PTR_s_GRAPHICS_COMMON_8c106f18 + DAT_8c106f38;
          a6 = 0;
          (*(code *)PTR_FUN_8c106f24)(ar4 + DAT_8c106f20,0x2c,0,ar7);
          *(undefined4 *)(DAT_8c106f28 + ar4) = 1;
        }
      }
      else {
        (**(code **)(DAT_8c106f08 + *ar5))(ar5,uVar2,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = CONCAT44(DAT_8c106f34,uVar4);
        }
        else {
          in_dr0 = CONCAT44(DAT_8c106f38,DAT_8c106f34);
        }
        if ((in_FPSCR_PR != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) &&
           (uVar2 = (*(code *)PTR_FUN_8c106f14)(*(undefined4 *)(ar6 + 0x18),uVar2,a6,ar7),
           2 < (ushort)uVar2)) {
          ar7 = PTR_s_GRAPHICS_COMMON_8c106f18 + DAT_8c106f38;
          a6 = 0;
          (*(code *)PTR_FUN_8c106f24)(ar4 + DAT_8c106f20,0x2c,0,ar7);
          *(undefined4 *)(DAT_8c106f28 + ar4) = 1;
        }
      }
    }
  }
  puVar3 = *(undefined4 **)((int)DAT_8c106f40 + ar4);
  if ((puVar3 == (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)(**(code **)(DAT_8c106f00 + *ar5))(ar5,1,a6,ar7),
     *(undefined4 **)(DAT_8c106f44 + ar4) != puVar3)) {
    uVar4 = 1;
    uVar2 = (**(code **)(DAT_8c106f00 + *ar5))(ar5,1,a6,ar7);
    *(undefined4 *)(DAT_8c106f44 + ar4) = uVar2;
    puVar3 = *(undefined4 **)(DAT_8c106f44 + ar4);
    if (puVar3 == (undefined4 *)0x0) {
      (**(code **)(DAT_8c106f48 + *ar5))(ar5,uVar4,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = in_dr0 >> 0x20;
      }
      puVar3 = &DAT_8c106f4c;
      fVar5 = DAT_8c106f4c;
      fVar6 = _DAT_8c106f50;
      if (in_FPSCR_SZ == '\0') {
        fVar5 = (float)in_dr0;
        fVar6 = DAT_8c106f4c;
      }
      if (in_FPSCR_PR != '\0' || fVar6 <= fVar5) {
        (**(code **)(DAT_8c106f48 + *ar5))(ar5,uVar4,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          fVar5 = fVar6;
        }
        puVar3 = (undefined4 *)&DAT_8c106f50;
        fVar6 = _DAT_8c106f50;
        fVar7 = _DAT_8c106f54;
        if (in_FPSCR_SZ == '\0') {
          fVar6 = fVar5;
          fVar7 = _DAT_8c106f50;
        }
        if (in_FPSCR_PR != '\0' || fVar6 <= fVar7) {
          uVar2 = (*(code *)PTR_FUN_8c106f14)(*(undefined4 *)(ar6 + 0x18),uVar4,a6,ar7);
          puVar3 = (undefined4 *)0x3;
          if (2 < (ushort)uVar2) {
            (*(code *)PTR_FUN_8c106f24)
                      (ar4 + DAT_8c106f20,0x2c,0,PTR_s_GRAPHICS_COMMON_8c106f18 + (int)_DAT_8c106f54
                      );
            puVar3 = DAT_8c106f40;
            *(undefined4 *)((int)DAT_8c106f40 + ar4) = 1;
          }
        }
      }
    }
  }
  return puVar3;
}



/* s_GRAPHICS_COMMON_106f5e @ 8c106f58 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int s_GRAPHICS_COMMON_106f5e(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined *a7;
  char in_FPSCR_SZ;
  undefined2 auStack_d8 [32];
  int iStack_98;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [84];
  
  if (((*(char *)(DAT_8c106fd4 + ar4) == '\x01') && (1 < *(int *)(DAT_8c106fd8 + ar4))) &&
     (*(int *)(ar4 + 4) != 0xd)) {
    iVar2 = ar6;
    iStack_74 = (*(code *)PTR_get_field_124_027930_8c106fdc)(*(undefined4 *)(ar6 + 8),ar5,ar6,ar7);
    if (iStack_74 == 0) {
      iStack_78 = (*(code *)PTR_get_field_13c_028d9c_8c106fe0)
                            (*(undefined4 *)(ar6 + 4),ar5,iVar2,ar7);
      if (iStack_78 == 2) {
        uVar1 = (*(code *)PTR_FUN_8c107164)(*(undefined4 *)(ar6 + 0x18),ar5,iVar2,ar7);
        auStack_d8[0] = (undefined2)uVar1;
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        iStack_98 = (*(code *)PTR_libgcc_divide_helper_010284_8c107168)
                              (uVar1 & 0xffff,0x3c,iVar2,ar7);
        if (iStack_98 == 0) {
          *(undefined4 *)(ar4 + 0x40) = 0x15;
          *(undefined4 *)(DAT_8c1071ac + ar4) = 0x15;
          *(undefined4 *)(PTR_DAT_8c1071b0 + DAT_8c1071b4) = 0x15;
          *(undefined4 *)(DAT_8c1071b8 + ar4) = 0x22;
          *(undefined4 *)(PTR_DAT_8c1071b0 + DAT_8c1071bc) = 0x22;
          *(undefined4 *)(DAT_8c1071c0 + ar4) = 0x22;
          *(undefined4 *)(PTR_DAT_8c1071b0 + DAT_8c1071c4) = 0x22;
        }
        else if (iStack_98 == 1) {
          *(undefined4 *)(ar4 + 0x40) = 0xb;
          *(undefined4 *)(DAT_8c107208 + ar4) = 0xb;
          *(undefined4 *)(PTR_DAT_8c10720c + DAT_8c107210) = 0xb;
          *(undefined4 *)(DAT_8c107214 + ar4) = 0x1e;
          *(undefined4 *)(PTR_DAT_8c10720c + DAT_8c107218) = 0x1e;
          *(undefined4 *)(DAT_8c10721c + ar4) = 0x22;
          *(undefined4 *)(PTR_DAT_8c10720c + DAT_8c107220) = 0x22;
        }
        else {
          (*(code *)PTR_Vec3_ctor_copy_8c1072c8)
                    ((int)auStack_d8 + DAT_8c1072c4,*(int *)(ar6 + 0x14) + 0x10,iVar2,ar7);
          (*(code *)PTR_Vec3_assign_wrap_063818_8c1072cc)
                    (ar4,(int)auStack_d8 + DAT_8c1072c4,iVar2,ar7);
          (*(code *)PTR_Vec3_dtor_8c1072d0)((int)auStack_d8 + DAT_8c1072c4,0xffffffff,iVar2,ar7);
          (*(code *)PTR_Vec3_ctor_copy_8c1072c8)
                    ((int)auStack_d8 + DAT_8c1072d4,*(int *)(ar6 + 0x14) + 0x10,iVar2,ar7);
          (*(code *)PTR_Vec3_assign_wrap_05f640_8c1072d8)
                    (ar4,(int)auStack_d8 + DAT_8c1072d4,iVar2,ar7);
          (*(code *)PTR_Vec3_dtor_8c1072d0)((int)auStack_d8 + DAT_8c1072d4,0xffffffff,iVar2,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x30) = (undefined4)DAT_8c1072dc;
            *(undefined4 *)(ar4 + 0x78) = DAT_8c1072dc._4_4_;
          }
          else {
            *(undefined8 *)(ar4 + 0x30) = CONCAT44(DAT_8c1072dc._4_4_,(undefined4)DAT_8c1072dc);
            *(ulonglong *)(ar4 + 0x78) = CONCAT44(DAT_8c1072e4,DAT_8c1072dc._4_4_);
          }
          *(undefined4 *)(ar4 + 0x40) = 0x14;
          *(undefined4 *)(DAT_8c1072e4 + ar4) = 0x14;
          *(undefined4 *)(PTR_DAT_8c1072e8 + DAT_8c1072ec) = 0x14;
          *(undefined4 *)(DAT_8c1072f0 + ar4) = 0x22;
          *(undefined4 *)(PTR_DAT_8c1072e8 + DAT_8c1072f4) = 0x22;
          *(undefined4 *)(DAT_8c1072f8 + ar4) = 0x22;
          *(undefined4 *)(PTR_DAT_8c1072e8 + DAT_8c1072fc) = 0x22;
        }
      }
      else if ((iStack_78 == 3) || (iStack_78 == 4)) {
        (*(code *)PTR_Vec3_ctor_copy_8c1070e0)
                  ((int)auStack_d8 + DAT_8c1070dc,*(int *)(ar6 + 0x14) + 0x10,iVar2,ar7);
        (*(code *)PTR_Vec3_assign_wrap_063818_8c1070e4)
                  (ar4,(int)auStack_d8 + DAT_8c1070dc,iVar2,ar7);
        (*(code *)PTR_Vec3_dtor_8c1070e8)((int)auStack_d8 + DAT_8c1070dc,0xffffffff,iVar2,ar7);
        a7 = PTR_Vec3_ctor_copy_8c1070e0;
        (*(code *)PTR_Vec3_ctor_copy_8c1070e0)
                  ((int)auStack_d8 + DAT_8c1070ec,*(int *)(ar6 + 0x14) + 0x10,iVar2,
                   PTR_Vec3_ctor_copy_8c1070e0);
        (*(code *)PTR_Vec3_assign_wrap_05f640_8c1070f0)(ar4,(int)auStack_d8 + DAT_8c1070ec,iVar2,a7)
        ;
        (*(code *)PTR_Vec3_dtor_8c1070e8)((int)auStack_d8 + DAT_8c1070ec,0xffffffff,iVar2,a7);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x30) = (undefined4)DAT_8c1070f4;
          *(undefined4 *)(ar4 + 0x78) = DAT_8c1070f4._4_4_;
        }
        else {
          *(undefined8 *)(ar4 + 0x30) = CONCAT44(DAT_8c1070f4._4_4_,(undefined4)DAT_8c1070f4);
          *(ulonglong *)(ar4 + 0x78) = CONCAT44(PTR_s_GRAPHICS_COMMON_8c1070fc,DAT_8c1070f4._4_4_);
        }
        (*(code *)PTR_FUN_8c107108)
                  (ar4 + DAT_8c107104,0,0,PTR_s_GRAPHICS_COMMON_8c1070fc + DAT_8c107100);
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x4b;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0x14;
        *(undefined4 *)(DAT_8c10710c + ar4) = 0x14;
        *(undefined4 *)(PTR_DAT_8c107110 + DAT_8c107104) = 0x14;
        *(undefined4 *)(DAT_8c107114 + ar4) = 0x22;
        *(undefined4 *)(PTR_DAT_8c107110 + DAT_8c107118) = 0x22;
        *(undefined4 *)(DAT_8c10711c + ar4) = 0x22;
        *(undefined4 *)(PTR_DAT_8c107110 + DAT_8c107120) = 0x22;
      }
    }
    else {
      iStack_7c = (*(code *)PTR_get_field_124_027930_8c10734c)
                            (*(undefined4 *)(ar6 + 8),ar5,iVar2,ar7);
      if (iStack_7c == 6) {
        (*(code *)PTR_FUN_8c107354)(*(int *)(ar6 + 4) + DAT_8c107350,1,iVar2,ar7);
        (*(code *)PTR_FUN_8c107364)
                  (ar4 + DAT_8c107360,0x22,0,PTR_s_GRAPHICS_COMMON_8c107358 + DAT_8c10735c);
      }
    }
  }
  else if (*(char *)(DAT_8c1073b4 + ar4) == '\x02') {
    iVar2 = ar6;
    iStack_80 = (*(code *)PTR_get_field_124_027930_8c1073b8)(*(undefined4 *)(ar6 + 8),ar5,ar6,ar7);
    if (iStack_80 == 0) {
      iStack_84 = (*(code *)PTR_get_field_13c_028d9c_8c1073bc)
                            (*(undefined4 *)(ar6 + 4),ar5,iVar2,ar7);
      if (iStack_84 == 2) {
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x55;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0x15;
        *(undefined4 *)(DAT_8c1074ec + ar4) = 0x15;
        *(undefined4 *)(PTR_DAT_8c1074f0 + DAT_8c1074f4) = 0x15;
        *(undefined4 *)(DAT_8c1074f8 + ar4) = 0x22;
        *(undefined4 *)(PTR_DAT_8c1074f0 + DAT_8c1074fc) = 0x22;
        *(undefined4 *)(DAT_8c107500 + ar4) = 0x22;
        *(undefined4 *)(PTR_DAT_8c1074f0 + DAT_8c107504) = 0x22;
      }
      else if ((iStack_84 == 3) || (iStack_84 == 4)) {
        (*(code *)PTR_Vec3_ctor_copy_8c10746c)(auStack_60,*(int *)(ar6 + 0x14) + 0x10,iVar2,ar7);
        (*(code *)PTR_Vec3_assign_wrap_063818_8c107470)(ar4,auStack_60,iVar2,ar7);
        (*(code *)PTR_Vec3_dtor_8c107474)(auStack_60,0xffffffff,iVar2,ar7);
        (*(code *)PTR_Vec3_ctor_copy_8c10746c)(auStack_70,*(int *)(ar6 + 0x14) + 0x10,iVar2,ar7);
        (*(code *)PTR_Vec3_assign_wrap_05f640_8c107478)(ar4,auStack_70,iVar2,ar7);
        (*(code *)PTR_Vec3_dtor_8c107474)(auStack_70,0xffffffff,iVar2,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x30) = (undefined4)DAT_8c10747c;
          *(undefined4 *)(ar4 + 0x78) = DAT_8c10747c._4_4_;
        }
        else {
          *(undefined8 *)(ar4 + 0x30) = CONCAT44(DAT_8c10747c._4_4_,(undefined4)DAT_8c10747c);
          *(ulonglong *)(ar4 + 0x78) = CONCAT44(_DAT_8c107484,DAT_8c10747c._4_4_);
        }
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x4b;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0xb;
        *(undefined4 *)(_DAT_8c107484 + ar4) = 0xb;
        *(undefined4 *)(PTR_DAT_8c107488 + DAT_8c10748c) = 0xb;
        *(undefined4 *)(DAT_8c107490 + ar4) = 0x1e;
        *(undefined4 *)(PTR_DAT_8c107488 + DAT_8c107494) = 0x1e;
        *(undefined4 *)(DAT_8c107498 + ar4) = 0x22;
        *(undefined4 *)(PTR_DAT_8c107488 + DAT_8c10749c) = 0x22;
      }
    }
    else {
      iStack_88 = (*(code *)PTR_get_field_124_027930_8c107570)
                            (*(undefined4 *)(ar6 + 8),PTR_get_field_124_027930_8c107570,iVar2,ar7);
      if (iStack_88 == 6) {
        (*(code *)PTR_FUN_8c107578)(*(int *)(ar6 + 4) + DAT_8c107574,2,iVar2,ar7);
        (*(code *)PTR_FUN_8c107588)
                  (ar4 + DAT_8c107584,0x23,0,PTR_s_GRAPHICS_COMMON_8c10757c + DAT_8c107580);
      }
    }
  }
  iVar2 = DAT_8c10758c;
  *(undefined1 *)(DAT_8c10758c + ar4) = 0;
  return iVar2;
}



/* s_EVENT_QUIZ_107596 @ 8c107590 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int s_EVENT_QUIZ_107596(int *ar4,int *ar5,int *ar6,int *ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int *a5;
  undefined *puVar3;
  int iVar4;
  undefined *a6;
  int *a6_00;
  char in_FPSCR_SZ;
  int *piStack_114;
  char cStack_10f;
  char cStack_10e;
  char cStack_10d;
  char cStack_10c;
  char cStack_10b;
  undefined1 uStack_10a;
  char cStack_109;
  char cStack_108;
  char cStack_107;
  char cStack_106;
  char cStack_105;
  char cStack_104;
  char cStack_103;
  char cStack_102;
  char cStack_101;
  short sStack_100;
  short sStack_fe;
  undefined2 uStack_fc;
  short sStack_fa;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int *piStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int *piStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  
  a6_00 = ar6;
  piStack_114 = ar5;
  uVar1 = (*(code *)PTR_FUN_8c107820)(ar6[1],ar5,ar6,ar7);
  sStack_fa = (short)uVar1;
  if (6 < sStack_fa) {
    uVar1 = (*(code *)PTR_FUN_8c107828)(ar6[1] + DAT_8c107824,ar5,a6_00,ar7);
    *(undefined4 *)((int)&piStack_114 + DAT_8c10782c) = uVar1;
    if (*(int *)((int)&piStack_114 + DAT_8c10782c) < 0x30) {
      uVar1 = (*(code *)PTR_FUN_8c107830)(ar6[1],ar5,a6_00,ar7);
      *(undefined4 *)((int)&piStack_114 + DAT_8c107834) = uVar1;
      if (*(int *)((int)&piStack_114 + DAT_8c107834) == -1) {
        uVar1 = (*(code *)PTR_FUN_8c107838)(ar6[3],ar5,a6_00,ar7);
        cStack_101 = (char)uVar1;
        a6_00 = (int *)(int)cStack_101;
        if (cStack_101 == '\x02') {
          uVar1 = (**(code **)(DAT_8c10783c + *piStack_114))(piStack_114,ar5,2,ar7);
          *(undefined4 *)((int)&piStack_114 + DAT_8c107840) = uVar1;
          if (*(int *)((int)&piStack_114 + DAT_8c107840) == 1) {
            uVar1 = (*(code *)PTR_get_field_178_035734_8c107844)(ar6[2],ar5,a6_00,ar7);
            *(undefined4 *)((int)&piStack_114 + DAT_8c107848) = uVar1;
            if ((*(int *)((int)&piStack_114 + DAT_8c107848) == 0) &&
               (*(char *)(DAT_8c107840 + (int)ar4) == '\x05')) {
              uVar1 = (*(code *)PTR_FUN_8c10784c)(ar6[3],ar5,a6_00,ar7);
              cStack_102 = (char)uVar1;
              if (cStack_102 < '\x03') {
                uVar1 = (*(code *)PTR_FUN_8c107830)(ar6[1],ar5,a6_00,ar7);
                *(undefined4 *)((int)&piStack_114 + DAT_8c107824) = uVar1;
                if (*(int *)((int)&piStack_114 + DAT_8c107824) == -1) {
                  ar5 = ar6;
                  uVar1 = (*(code *)PTR_FUN_8c107850)(ar4,ar6,a6_00,ar7);
                  *(undefined4 *)((int)&piStack_114 + DAT_8c107854) = uVar1;
                  if (*(int *)((int)&piStack_114 + DAT_8c107854) == 1) {
                    uVar1 = (*(code *)PTR_FUN_8c10785c)
                                      (*(undefined4 *)(DAT_8c107858 + ar6[6]),ar5,a6_00,ar7);
                    *(undefined4 *)((int)&piStack_114 + DAT_8c107860) = uVar1;
                    if ((*(int *)((int)&piStack_114 + DAT_8c107860) == 0) &&
                       (iVar4 = *(int *)(DAT_8c107864 + (int)ar4), iVar4 == 0)) {
                      ar5 = (int *)PTR_FUN_8c107868;
                      uVar1 = (*(code *)PTR_FUN_8c107868)(ar6[3],PTR_FUN_8c107868,a6_00,0);
                      cStack_103 = (char)uVar1;
                      if (cStack_103 == '\0') {
                        if (ar4[0x10] == 0x14) {
                          ar7 = (int *)0x18;
                          ar4[0x10] = 0x18;
                        }
                        else {
                          uVar1 = (*(code *)PTR_FUN_8c10784c)(ar6[3],ar5,a6_00,iVar4);
                          cStack_104 = (char)uVar1;
                          (*(code *)PTR_FUN_8c107870)(DAT_8c10786c,(int)cStack_104,a6_00,iVar4);
                          ar7 = (int *)(PTR_s_GRAPHICS_COMMON_8c107874 + DAT_8c107878);
                          a6_00 = (int *)0x0;
                          (*(code *)PTR_FUN_8c10787c)
                                    ((undefined *)((int)ar4 + DAT_8c107834),0x2c,0,ar7);
                          (*(code *)PTR_FUN_8c107880)(ar6[1] + DAT_8c107824,0,a6_00,ar7);
                          ar4[1] = 0xd;
                          ar4[2] = 99;
                          ar4[3] = 0;
                          ar4[0x10] = 0x21;
                          uStack_c0 = 0x21;
                          *(undefined4 *)(DAT_8c107884 + (int)ar4) = 0x21;
                          *(undefined4 *)(PTR_DAT_8c107888 + DAT_8c107834) = 0x21;
                          uStack_c4 = 0xb;
                          *(undefined4 *)(DAT_8c10788c + (int)ar4) = 0xb;
                          *(undefined4 *)(PTR_DAT_8c107888 + DAT_8c10782c) = 0xb;
                          uStack_c8 = 10;
                          *(undefined4 *)(DAT_8c107890 + (int)ar4) = 10;
                          *(undefined4 *)(PTR_DAT_8c107888 + DAT_8c107894) = 10;
                          *(undefined1 *)(DAT_8c107898 + (int)ar4) = 0;
                          (*(code *)PTR_Vec3_ctor_copy_8c1078a0)
                                    ((int)&piStack_114 + DAT_8c10789c,ar6[5] + 0x10,a6_00,ar7);
                          (*(code *)PTR_Vec3_assign_wrap_063818_8c1078a4)
                                    (ar4,(int)&piStack_114 + DAT_8c10789c,a6_00,ar7);
                          (*(code *)PTR_Vec3_dtor_8c1078a8)
                                    ((int)&piStack_114 + DAT_8c10789c,0xffffffff,a6_00,ar7);
                          if (in_FPSCR_SZ == '\0') {
                            ar4[0xc] = (int)DAT_8c1078ac;
                          }
                          else {
                            *(ulonglong *)(ar4 + 0xc) =
                                 CONCAT44(DAT_8c1078ac._4_4_,(int)DAT_8c1078ac);
                          }
                          (*(code *)PTR_Vec3_ctor_copy_8c1078a0)
                                    ((int)&piStack_114 + DAT_8c1078ac._4_4_,ar6[5] + 0x10,a6_00,ar7)
                          ;
                          (*(code *)PTR_Vec3_assign_wrap_05f640_8c1078b4)
                                    (ar4,(int)&piStack_114 + DAT_8c1078ac._4_4_,a6_00,ar7);
                          ar5 = (int *)0xffffffff;
                          (*(code *)PTR_Vec3_dtor_8c1078a8)
                                    ((int)&piStack_114 + DAT_8c1078ac._4_4_,0xffffffff,a6_00,ar7);
                        }
                        goto LAB_8c107c10;
                      }
                    }
                  }
                }
              }
              ar7 = (int *)PTR_FUN_8c107a80;
              uVar1 = (*(code *)PTR_FUN_8c107a80)(ar6[3],ar5,a6_00,PTR_FUN_8c107a80);
              cStack_105 = (char)uVar1;
              if (cStack_105 == '\x03') {
                uVar1 = (*(code *)PTR_FUN_8c107a84)(ar6[1],ar5,a6_00,ar7);
                *(undefined4 *)((int)&piStack_114 + DAT_8c107a88) = uVar1;
                if (*(int *)((int)&piStack_114 + DAT_8c107a88) == -1) {
                  a6_00 = (int *)PTR_FUN_8c107a8c;
                  uVar1 = (*(code *)PTR_FUN_8c107a8c)(ar6[1],ar5,PTR_FUN_8c107a8c,ar7);
                  *(undefined4 *)((int)&piStack_114 + DAT_8c107a90) = uVar1;
                  ar5 = *(int **)((int)&piStack_114 + DAT_8c107a90);
                  if ((((0 < (int)ar5) &&
                       (iStack_98 = (*(code *)PTR_FUN_8c107a98)
                                              (*(undefined4 *)(DAT_8c107a94 + ar6[6]),ar5,a6_00,ar7)
                       , iStack_98 == 0)) && (*(char *)(DAT_8c107a9c + (int)ar4) < '\x03')) &&
                     (ar5 = DAT_8c107aa0, *(int *)((int)DAT_8c107aa0 + (int)ar4) == 0)) {
                    uVar1 = (*(code *)PTR_FUN_8c107aa4)(ar6[3],DAT_8c107aa0,a6_00,ar7);
                    cStack_106 = (char)uVar1;
                    if (cStack_106 == '\0') {
                      if (ar4[0x10] != 0x14) {
                        uVar1 = (*(code *)PTR_FUN_8c107a80)(ar6[3],ar5,a6_00,ar7);
                        cStack_107 = (char)uVar1;
                        (*(code *)PTR_FUN_8c107aac)(DAT_8c107aa8,(int)cStack_107,a6_00,ar7);
                        puVar3 = PTR_s_GRAPHICS_COMMON_8c107ab0 + DAT_8c107ab4;
                        uVar1 = 0;
                        (*(code *)PTR_FUN_8c107abc)
                                  ((undefined *)((int)ar4 + DAT_8c107ab8),0x2c,0,puVar3);
                        (*(code *)PTR_FUN_8c107ac4)(ar6[1] + DAT_8c107ac0,0,uVar1,puVar3);
                        ar4[1] = 0xd;
                        ar4[2] = 99;
                        ar4[3] = 0;
                        ar7 = (int *)0x21;
                        ar4[0x10] = 0x21;
                        uStack_cc = 0x21;
                        *(undefined4 *)(DAT_8c107ac8 + (int)ar4) = 0x21;
                        *(undefined4 *)(PTR_DAT_8c107acc + DAT_8c107ab8) = 0x21;
                        uStack_d0 = 0xb;
                        a6_00 = (int *)0xb;
                        *(undefined4 *)(DAT_8c107ad0 + (int)ar4) = 0xb;
                        *(undefined4 *)(PTR_DAT_8c107acc + DAT_8c107ad4) = 0xb;
                        uStack_d4 = 10;
                        *(undefined4 *)(DAT_8c107ad8 + (int)ar4) = 10;
                        *(undefined4 *)(PTR_DAT_8c107acc + DAT_8c107adc) = 10;
                        *(undefined1 *)(DAT_8c107a90 + (int)ar4) = 0;
                        (*(code *)PTR_Vec3_ctor_copy_8c107ae4)
                                  ((int)&piStack_114 + DAT_8c107ae0,ar6[5] + 0x10,0xb,0x21);
                        (*(code *)PTR_Vec3_assign_wrap_063818_8c107ae8)
                                  (ar4,(int)&piStack_114 + DAT_8c107ae0,a6_00,ar7);
                        (*(code *)PTR_Vec3_dtor_8c107aec)
                                  ((int)&piStack_114 + DAT_8c107ae0,0xffffffff,a6_00,ar7);
                        if (in_FPSCR_SZ == '\0') {
                          ar4[0xc] = (int)DAT_8c107af0;
                        }
                        else {
                          *(ulonglong *)(ar4 + 0xc) = CONCAT44(DAT_8c107af0._4_4_,(int)DAT_8c107af0)
                          ;
                        }
                        (*(code *)PTR_Vec3_ctor_copy_8c107ae4)
                                  ((int)&piStack_114 + DAT_8c107af0._4_4_,ar6[5] + 0x10,a6_00,ar7);
                        (*(code *)PTR_Vec3_assign_wrap_05f640_8c107af8)
                                  (ar4,(int)&piStack_114 + DAT_8c107af0._4_4_,a6_00,ar7);
                        ar5 = (int *)0xffffffff;
                        (*(code *)PTR_Vec3_dtor_8c107aec)
                                  ((int)&piStack_114 + DAT_8c107af0._4_4_,0xffffffff,a6_00,ar7);
                      }
                      goto LAB_8c107c10;
                    }
                  }
                }
              }
              uVar2 = (*(code *)PTR_FUN_8c107d48)(ar6[6],ar5,a6_00,ar7);
              uStack_fc = (undefined2)uVar2;
              ar5 = (int *)0xa;
              iStack_d8 = (*(code *)PTR_libgcc_divide_helper_01031c_8c107d4c)
                                    (uVar2 & 0xffff,10,a6_00,ar7);
              if (iStack_d8 == 1) {
                ar5 = *(int **)(DAT_8c107d50 + (int)ar4);
                if (0 < (int)ar5) {
                  uStack_dc = (*(code *)PTR_libgcc_divide_helper_0101e4_8c107d54)
                                        (*(undefined4 *)(DAT_8c107d50 + (int)ar4),3,a6_00,ar7);
                  iStack_e0 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c107d54)
                                        (*(undefined4 *)(DAT_8c107d50 + (int)ar4),0x3c,a6_00,ar7);
                  iVar4 = iStack_e0;
                  if (2 < iStack_e0) {
                    iVar4 = 2;
                  }
                  (*(code *)PTR_FUN_8c107d5c)(DAT_8c107d58,iVar4,a6_00,ar7);
                  ar7 = (int *)(PTR_s_GRAPHICS_COMMON_8c107d60 + DAT_8c107d64);
                  a6_00 = (int *)0x0;
                  ar5 = (int *)0x3;
                  (*(code *)PTR_FUN_8c107d6c)((undefined *)((int)ar4 + DAT_8c107d68),3,0,ar7);
                }
                uVar1 = (*(code *)PTR_FUN_8c107d70)(ar6[3],ar5,a6_00,ar7);
                cStack_108 = (char)uVar1;
                if ((cStack_108 == '\x03') &&
                   (iStack_9c = (*(code *)PTR_FUN_8c107d74)(ar6[1],ar5,a6_00,ar7), iStack_9c == 0))
                {
                  uStack_e4 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c107d54)
                                        (*(undefined4 *)(DAT_8c107d50 + (int)ar4),3,a6_00,ar7);
                  iStack_e8 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c107d54)
                                        (*(undefined4 *)(DAT_8c107d50 + (int)ar4),0x3c,a6_00,ar7);
                  iVar4 = iStack_e8;
                  if (2 < iStack_e8) {
                    iVar4 = 2;
                  }
                  (*(code *)PTR_FUN_8c107d5c)(DAT_8c107d58,iVar4,a6_00,ar7);
                  ar7 = (int *)(PTR_s_GRAPHICS_COMMON_8c107d60 + DAT_8c107d64);
                  a6_00 = (int *)0x0;
                  ar5 = (int *)0x3;
                  (*(code *)PTR_FUN_8c107d6c)((undefined *)((int)ar4 + DAT_8c107d68),3,0,ar7);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_8c107c10:
  uVar1 = (*(code *)PTR_FUN_8c107d78)(ar6[1],ar5,a6_00,ar7);
  sStack_fe = (short)uVar1;
  if (sStack_fe == 3) {
    ar5 = (int *)PTR_FUN_8c107d7c;
    uVar1 = (*(code *)PTR_FUN_8c107d7c)(ar6[3],PTR_FUN_8c107d7c,a6_00,ar7);
    cStack_109 = (char)uVar1;
    if (cStack_109 == '\0') {
      uVar2 = (*(code *)PTR_get_field_a0_035724_8c107d80)
                        (ar6[6],ar5,a6_00,PTR_get_field_a0_035724_8c107d80);
      uStack_10a = (undefined1)uVar2;
      a6_00 = (int *)(uVar2 & 0xff);
      ar7 = a6_00;
      if (a6_00 == (int *)0x0) {
        uVar1 = (*(code *)PTR_FUN_8c107d84)(ar6[3],ar6[3],0,0);
        cStack_10b = (char)uVar1;
        ar5 = (int *)(int)cStack_10b;
        if (((ar5 == (int *)0x2) &&
            (iStack_a0 = (*(code *)PTR_FUN_8c107d88)(ar6[1],2,a6_00,ar7), iStack_a0 == -1)) &&
           (iStack_a4 = (*(code *)PTR_get_field_4_062878_8c107d8c)(ar6[3],ar5,a6_00,ar7),
           iStack_a4 == 1)) {
          ar5 = (int *)0x0;
          (*(code *)PTR_FUN_8c107d90)(ar6[3],0,a6_00,ar7);
          *(undefined4 *)(DAT_8c107d94 + (int)ar4) = 0xfffffff6;
          *(undefined4 *)(DAT_8c107d98 + (int)ar4) = 0;
        }
      }
    }
  }
  uVar1 = (*(code *)PTR_FUN_8c107d78)(ar6[1],ar5,a6_00,ar7);
  sStack_100 = (short)uVar1;
  if (sStack_100 != 3) {
    return (int)sStack_100;
  }
  iStack_a8 = (*(code *)PTR_FUN_8c107da0)(*(undefined4 *)(DAT_8c107d9c + ar6[6]),ar5,a6_00,ar7);
  if (iStack_a8 != 0) {
    return iStack_a8;
  }
  uVar1 = (*(code *)PTR_get_field_a0_035724_8c107d80)(ar6[6],ar5,a6_00,ar7);
  cStack_10c = (char)uVar1;
  if (cStack_10c != '\0') {
    return (int)cStack_10c;
  }
  if (*(int *)(DAT_8c107d94 + (int)ar4) != -10) {
    return *(int *)(DAT_8c107d94 + (int)ar4);
  }
  a5 = (int *)(*(code *)PTR_FUN_8c107d7c)(ar6[3],ar6[3],a6_00,ar7);
  cStack_10d = (char)a5;
  if (cStack_10d == '\0') {
    iStack_ac = (*(code *)PTR_FUN_8c107da4)(ar4,ar6,a6_00,ar7);
    a5 = (int *)0x1;
    if (iStack_ac != 1) {
      if (*(int *)(DAT_8c107e48 + (int)ar4) == -1) {
        (*(code *)PTR_FUN_8c107e50)((undefined *)((int)ar4 + DAT_8c107e4c),0,a6_00,ar7);
        puVar3 = PTR_s_GRAPHICS_COMMON_8c107e54 + DAT_8c107e58;
        (*(code *)PTR_FUN_8c107e5c)((undefined *)((int)ar4 + DAT_8c107e4c),10,0,puVar3);
        *(undefined4 *)(DAT_8c107e60 + (int)ar4) = 0;
        a6_00 = (int *)((int)ar4 + DAT_8c107e4c);
        uStack_b0 = (*(code *)PTR_FUN_8c107e6c)
                              (DAT_8c107e68,*(undefined4 *)(DAT_8c107e64 + (int)ar4),a6_00,puVar3);
        *(undefined4 *)(DAT_8c107e48 + (int)ar4) = uStack_b0;
        *(undefined4 *)(DAT_8c107e70 + (int)ar4) = 0;
        (*(code *)PTR_FUN_8c107e50)((undefined *)((int)ar4 + DAT_8c107e4c),2,a6_00,puVar3);
      }
      *(int *)(DAT_8c107e74 + (int)ar4) = *(int *)(DAT_8c107e74 + (int)ar4) + 1;
      a5 = ar4;
      piStack_ec = ar4;
      goto LAB_8c107eb4;
    }
  }
  uVar1 = (*(code *)PTR_FUN_8c108064)(ar6[3],a5,a6_00,ar7);
  cStack_10e = (char)uVar1;
  if ((cStack_10e == '\0') &&
     (piStack_b4 = (int *)(*(code *)PTR_FUN_8c108068)(ar4,ar6,a6_00,ar7), a5 = piStack_b4,
     piStack_b4 == (int *)0x1)) {
    a5 = (int *)0x1;
    (*(code *)PTR_FUN_8c10806c)(ar6[3],1,a6_00,ar7);
  }
LAB_8c107eb4:
  uVar1 = (*(code *)PTR_FUN_8c108064)(ar6[3],a5,a6_00,PTR_FUN_8c108064);
  cStack_10f = (char)uVar1;
  puVar3 = (undefined *)(int)cStack_10f;
  a6 = (undefined *)(int)cStack_10f;
  if ((a6 == (undefined *)0x1) &&
     (a5 = ar6, iStack_b8 = (*(code *)PTR_FUN_8c108068)(ar4,ar6,1,puVar3), iStack_b8 == 1)) {
    a5 = *(int **)(DAT_8c108070 + (int)ar4);
    if (a5 == (int *)0xffffffff) {
      (*(code *)PTR_FUN_8c108078)((undefined *)((int)ar4 + DAT_8c108074),0,a6,puVar3);
      puVar3 = PTR_s_GRAPHICS_COMMON_8c10807c + DAT_8c108080;
      (*(code *)PTR_FUN_8c108084)((undefined *)((int)ar4 + DAT_8c108074),0x2a,0,puVar3);
      *(undefined4 *)(DAT_8c108088 + (int)ar4) = 0;
      a6 = (undefined *)((int)ar4 + DAT_8c108074);
      a5 = *(int **)(DAT_8c10808c + (int)ar4);
      uStack_bc = (*(code *)PTR_FUN_8c108094)(DAT_8c108090,a5,a6,puVar3);
      *(undefined4 *)(DAT_8c108070 + (int)ar4) = uStack_bc;
      *(undefined4 *)(DAT_8c108098 + (int)ar4) = 1;
    }
    if ((*(int *)(DAT_8c108098 + (int)ar4) != 0) &&
       (a5 = *(int **)(DAT_8c108070 + (int)ar4), a5 != (int *)0xffffffff)) {
      ar4[1] = 0xd;
      ar4[2] = 0x5f;
      ar4[3] = 0;
      uStack_f0 = 0x14;
      *(undefined4 *)(DAT_8c10809c + (int)ar4) = 0x14;
      *(undefined4 *)(PTR_DAT_8c1080a0 + DAT_8c108074) = 0x14;
      uStack_f4 = 0xb;
      *(undefined4 *)(DAT_8c1080a4 + (int)ar4) = 0xb;
      *(undefined4 *)(PTR_DAT_8c1080a0 + DAT_8c1080a8) = 0xb;
      uStack_f8 = 10;
      *(undefined4 *)(DAT_8c1080ac + (int)ar4) = 10;
      *(undefined4 *)(PTR_DAT_8c1080a0 + DAT_8c1080b0) = 10;
      (*(code *)PTR_Vec3_ctor_copy_8c1080b8)
                ((int)&piStack_114 + DAT_8c1080b4,ar6[5] + 0x10,a6,puVar3);
      (*(code *)PTR_Vec3_assign_wrap_063818_8c1080bc)
                (ar4,(int)&piStack_114 + DAT_8c1080b4,a6,puVar3);
      (*(code *)PTR_Vec3_dtor_8c1080c0)((int)&piStack_114 + DAT_8c1080b4,0xffffffff,a6,puVar3);
      if (in_FPSCR_SZ == '\0') {
        ar4[0xc] = _DAT_8c1080c4;
      }
      else {
        *(ulonglong *)(ar4 + 0xc) = CONCAT44(PTR_Vec3_assign_wrap_05f640_8c1080c8,_DAT_8c1080c4);
      }
      (*(code *)PTR_Vec3_ctor_copy_8c1080b8)
                ((int)&piStack_114 + DAT_8c1080b0,ar6[5] + 0x10,a6,puVar3);
      (*(code *)PTR_Vec3_assign_wrap_05f640_8c1080c8)
                (ar4,(int)&piStack_114 + DAT_8c1080b0,a6,puVar3);
      a5 = (int *)0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c1080c0)((int)&piStack_114 + DAT_8c1080b0,0xffffffff,a6,puVar3);
      *(undefined1 *)(DAT_8c1080cc + (int)ar4) = 0;
    }
  }
  iVar4 = DAT_8c1080d0;
  if (DAT_8c1080d4 < *(int *)(DAT_8c1080d0 + (int)ar4)) {
    uVar1 = (*(code *)PTR_FUN_8c108064)(ar6[3],a5,a6,puVar3);
    iVar4 = (int)(char)uVar1;
    if ((char)uVar1 == '\0') {
      *(undefined4 *)(DAT_8c1080d8 + (int)ar4) = 0;
      iVar4 = DAT_8c1080d0;
      *(undefined4 *)(DAT_8c1080d0 + (int)ar4) = 0;
    }
  }
  return iVar4;
}



/* s_REACTION_TITILLATE_1080e0 @ 8c1080dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_REACTION_TITILLATE_1080e0(int ar4,int *ar5,int ar6,undefined *ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 a6;
  
  iVar2 = ar6;
  if (*(char *)(DAT_8c108170 + ar4) == '\x01') {
    if ((*(int *)(ar4 + 0x40) == 0x1a) || (*(int *)(ar4 + 0x40) != 0)) {
      if ((*(int *)(ar4 + 0x40) == 0x1a) &&
         (*(undefined4 *)(ar4 + 0x40) = 0x1a, *(int *)(DAT_8c108218 + ar4) == -1)) {
        (*(code *)PTR_FUN_8c108220)(ar4 + DAT_8c10821c,0,ar6,ar7);
        ar7 = PTR_s_GRAPHICS_COMMON_8c108224 + DAT_8c108228;
        (*(code *)PTR_FUN_8c10822c)(ar4 + DAT_8c10821c,0x28,0,ar7);
        *(undefined4 *)(DAT_8c108230 + ar4) = 0;
        iVar2 = ar4 + DAT_8c10821c;
        uVar1 = (*(code *)PTR_FUN_8c10823c)
                          (DAT_8c108238,*(undefined4 *)(DAT_8c108234 + ar4),iVar2,ar7);
        *(undefined4 *)(DAT_8c108218 + ar4) = uVar1;
        *(undefined4 *)(DAT_8c108240 + ar4) = 0;
        (*(code *)PTR_FUN_8c108220)(ar4 + DAT_8c10821c,2,iVar2,ar7);
      }
    }
    else {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x1a;
      *(undefined4 *)(DAT_8c108174 + ar4) = 0x1a;
      *(undefined4 *)(PTR_DAT_8c108178 + DAT_8c10817c) = 0x1a;
      *(undefined4 *)(DAT_8c108180 + ar4) = 0x22;
      *(undefined4 *)(PTR_DAT_8c108178 + DAT_8c108184) = 0x22;
      *(undefined4 *)(DAT_8c108188 + ar4) = 0x22;
      *(undefined4 *)(PTR_DAT_8c108178 + DAT_8c10818c) = 0x22;
      (*(code *)PTR_FUN_8c108190)(ar4 + DAT_8c10817c,1,ar6,ar7);
    }
  }
  else if (*(int *)(ar4 + 0x40) == 0x1a) {
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 8) = 0x14;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(DAT_8c1082ec + ar4) = 0;
    *(undefined4 *)(PTR_DAT_8c1082f0 + DAT_8c1082f4) = 0;
  }
  if (*(char *)(DAT_8c1082f8 + ar4) == '\x01') {
    if ((*(int *)(ar4 + 0x40) == 0x1b) || (*(int *)(ar4 + 0x40) != 0)) {
      if (*(int *)(ar4 + 0x40) == 0x1b) {
        *(undefined4 *)(ar4 + 0x40) = 0x1b;
      }
    }
    else {
      (*(code *)PTR_FUN_8c1082fc)(ar4 + DAT_8c1082f4,1,iVar2,ar7);
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x1b;
      *(undefined4 *)(DAT_8c1082ec + ar4) = 0x1b;
      *(undefined4 *)(PTR_DAT_8c1082f0 + DAT_8c1082f4) = 0x1b;
      *(undefined4 *)(DAT_8c108300 + ar4) = 0x22;
      *(undefined4 *)(PTR_DAT_8c1082f0 + DAT_8c108304) = 0x22;
      *(undefined4 *)(DAT_8c108308 + ar4) = 0x22;
      *(undefined4 *)(PTR_DAT_8c1082f0 + DAT_8c10830c) = 0x22;
    }
  }
  if ((*(char *)(DAT_8c1083cc + ar4) == '\x01') && (*(int *)(ar4 + 0x40) != 0x19)) {
    if ((*(int *)(ar4 + 0x40) == 0) ||
       ((*(int *)(ar4 + 0x40) == 3 || (*(int *)(ar4 + 0x40) == 0x14)))) {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x19;
      *(undefined4 *)(DAT_8c1083d0 + ar4) = 0x19;
      *(undefined4 *)(PTR_DAT_8c1083d4 + DAT_8c1083d8) = 0x19;
      *(undefined4 *)(DAT_8c1083dc + ar4) = 0x22;
      *(undefined4 *)(PTR_DAT_8c1083d4 + DAT_8c1083e0) = 0x22;
      *(undefined4 *)(DAT_8c1083e4 + ar4) = 0x22;
      *(undefined4 *)(PTR_DAT_8c1083d4 + DAT_8c1083e8) = 0x22;
      (*(code *)PTR_FUN_8c1083ec)(ar4 + DAT_8c1083d8,0xffffffff,iVar2,ar7);
      ar7 = PTR_s_GRAPHICS_COMMON_8c1083f0 + DAT_8c1083f4;
      iVar2 = 4;
      (*(code *)PTR_FUN_8c1083f8)(ar4 + DAT_8c1083d8,0x27,4,ar7);
    }
    else if (*(int *)(ar4 + 0x40) == 0x19) {
      *(undefined4 *)(ar4 + 0x40) = 0x19;
    }
  }
  iVar2 = (**(code **)(DAT_8c1084f8 + *ar5))(ar5,0xd,iVar2,ar7);
  if (0 < iVar2) {
    a6 = 0;
    uVar1 = 0xd;
    iVar2 = (**(code **)(DAT_8c1084fc + *ar5))(ar5,0xd,0,ar7);
    iVar2 = (**(code **)(DAT_8c108500 + *(int *)(iVar2 + 8)))(iVar2,uVar1,a6,ar7);
    if (((iVar2 == 1) &&
        (uVar1 = (*(code *)PTR_get_field_a0_035724_8c108504)
                           (*(undefined4 *)(ar6 + 0x18),uVar1,a6,ar7), (byte)uVar1 < 2)) &&
       (*(int *)(ar4 + 0x40) != 0x1f)) {
      if (*(int *)(ar4 + 0x40) == 0) {
        uVar1 = (**(code **)(DAT_8c1084fc + *ar5))(ar5,0xd,0,ar7);
        *(undefined4 *)(ar4 + 0x6c) = uVar1;
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x41;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0x1f;
        *(undefined4 *)(DAT_8c108508 + ar4) = 0x1f;
        *(undefined4 *)(PTR_DAT_8c10850c + DAT_8c108510) = 0x1f;
        *(undefined4 *)(DAT_8c108514 + ar4) = 0x22;
        *(undefined4 *)(PTR_DAT_8c10850c + DAT_8c108518) = 0x22;
        *(undefined4 *)(DAT_8c10851c + ar4) = 0x22;
        *(undefined4 *)(PTR_DAT_8c10850c + DAT_8c108520) = 0x22;
      }
      else if (*(int *)(ar4 + 0x40) == 0x1f) {
        *(undefined4 *)(ar4 + 0x40) = 0x1f;
      }
    }
  }
  *(undefined1 *)(DAT_8c108554 + ar4) = 0;
  *(undefined1 *)(DAT_8c108558 + ar4) = 0;
  iVar2 = DAT_8c10855c;
  *(undefined1 *)(DAT_8c10855c + ar4) = 0;
  return iVar2;
}



/* s_GRATIFIC_RID_HOT_108562 @ 8c108560 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRATIFIC_RID_HOT_108562(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c10860c)(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      (*(code *)PTR_FUN_8c10861c)
                (ar4 + DAT_8c108618,7,0,PTR_s_GRAPHICS_COMMON_8c108610 + DAT_8c108614);
      iVar1 = DAT_8c108620;
      *(undefined4 *)(DAT_8c108620 + ar4) = 7;
    }
    else if (iVar1 == 1) {
      (*(code *)PTR_FUN_8c10861c)
                (ar4 + DAT_8c108618,8,0,PTR_s_GRAPHICS_COMMON_8c108610 + DAT_8c108624);
      iVar1 = DAT_8c108620;
      *(undefined4 *)(DAT_8c108620 + ar4) = 7;
    }
    else if (iVar1 == 2) {
      (*(code *)PTR_FUN_8c10861c)
                (ar4 + DAT_8c108618,0x1a,0,PTR_s_GRAPHICS_COMMON_8c108610 + DAT_8c108628);
      iVar1 = DAT_8c108620;
      *(undefined4 *)(DAT_8c108620 + ar4) = 7;
    }
  }
  return iVar1;
}



/* FUN_8c10862c @ 8c10862c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c10862c(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int a6;
  char in_FPSCR_SZ;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  a6 = ar6;
  uVar1 = (*(code *)PTR_FUN_8c108668)(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
  switch(uVar1) {
  case 0:
    *(undefined4 *)(DAT_8c1086a4 + ar4) = 0;
    uVar1 = (*(code *)PTR_FUN_8c1086a8)(*(undefined4 *)(ar6 + 4),ar5,a6,ar7);
    *(int *)(DAT_8c1086ac + ar4) = (int)(char)uVar1;
    break;
  case 1:
    *(undefined4 *)(DAT_8c1086d0 + ar4) = 1;
    uVar1 = (*(code *)PTR_FUN_8c1086d4)(*(int *)(ar6 + 4) + 0x18,ar5,a6,ar7);
    *(int *)(DAT_8c1086d8 + ar4) = (int)(char)uVar1;
    break;
  case 2:
    *(undefined4 *)(DAT_8c108728 + ar4) = 2;
    uVar1 = (*(code *)PTR_FUN_8c10872c)(*(int *)(ar6 + 4) + 0x30,ar5,a6,ar7);
    *(int *)(DAT_8c108730 + ar4) = (int)(char)uVar1;
    break;
  default:
    *(undefined4 *)(DAT_8c1087f8 + ar4) = 7;
    *(undefined4 *)(DAT_8c1087fc + ar4) = 0;
    if (*(int *)(ar4 + 0x40) == 6) {
      *(undefined4 *)(DAT_8c1087f8 + ar4) = 9;
    }
    iVar2 = (*(code *)PTR_get_field_24_05eed0_8c108804)(*(int *)(ar6 + 4) + DAT_8c108800,ar5,a6,ar7)
    ;
    if (iVar2 == 1) {
      *(undefined4 *)(DAT_8c1087f8 + ar4) = 8;
    }
    break;
  case 4:
    *(undefined4 *)(DAT_8c1086fc + ar4) = 4;
    uVar1 = (*(code *)PTR_FUN_8c108700)(*(int *)(ar6 + 4) + 0x60,ar5,a6,ar7);
    *(int *)(DAT_8c108704 + ar4) = (int)(char)uVar1;
    break;
  case 5:
    *(undefined4 *)(DAT_8c108754 + ar4) = 5;
    uVar1 = (*(code *)PTR_FUN_8c108758)(*(int *)(ar6 + 4) + 0x78,ar5,a6,ar7);
    *(int *)(DAT_8c10875c + ar4) = (int)(char)uVar1;
  }
  if ((*(int *)(ar4 + 0x40) == 0) || (*(int *)(ar4 + 0x40) == 6)) {
    if ((*(int *)(DAT_8c108808 + ar4) == -1) &&
       ((iVar2 = (*(code *)PTR_get_field_178_035734_8c10880c)(*(undefined4 *)(ar6 + 8),ar5,a6,ar7),
        iVar2 == 0 &&
        (iVar2 = (*(code *)PTR_get_field_770_05eeb8_8c108814)(ar4 + DAT_8c108810,ar5,a6,ar7),
        iVar2 == 0)))) {
      uVar1 = 0;
      iVar2 = (*(code *)PTR_s_JUNGLE_0309ca_8c108818)(ar4 + DAT_8c108810,0,a6,ar7);
      if (iVar2 != 0) {
        for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
          uVar3 = (*(code *)PTR_FUN_8c108854)(iVar2 * 0x18 + *(int *)(ar6 + 4),uVar1,a6,ar7);
          if ((char)uVar3 == '\x01') {
            *(undefined4 *)(DAT_8c108858 + ar4 + iVar2 * 4) = 1;
          }
          else {
            *(undefined4 *)(DAT_8c10898c + ar4 + iVar2 * 4) = 0;
          }
        }
        uVar1 = (*(code *)PTR_FUN_8c108994)(*(int *)(ar6 + 4) + DAT_8c108990,uVar1,a6,ar7);
        if ((char)uVar1 == '\x01') {
          *(undefined4 *)(DAT_8c108998 + ar4) = 1;
        }
        a6 = ar4 + DAT_8c10899c;
        uVar1 = (*(code *)PTR_FUN_8c1089a4)(DAT_8c1089a0,1,a6,ar7);
        *(undefined4 *)(DAT_8c1089a8 + ar4) = uVar1;
      }
    }
    if ((*(int *)(ar4 + 0x40) == 6) && (*(int *)(DAT_8c1089a8 + ar4) != -1)) {
      (*(code *)PTR_FUN_8c1089ac)(ar4 + DAT_8c10899c,1,a6,ar7);
    }
  }
  iVar2 = *(int *)(ar4 + 4);
  if (((iVar2 == 0) && (iVar2 = 0, *(int *)(DAT_8c1089b0 + ar4) != 0)) &&
     (iVar2 = *(int *)(DAT_8c1089a8 + ar4), iVar2 != -1)) {
    *(undefined4 *)(ar4 + 4) = 0xd;
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(DAT_8c1089b4 + ar4) = 0x14;
    *(undefined4 *)(PTR_DAT_8c1089b8 + DAT_8c10899c) = 0x14;
    *(undefined4 *)(DAT_8c1089bc + ar4) = 0xb;
    *(undefined4 *)(PTR_DAT_8c1089b8 + DAT_8c1089c0) = 0xb;
    *(undefined4 *)(DAT_8c1089c4 + ar4) = 10;
    *(undefined4 *)(PTR_DAT_8c1089b8 + DAT_8c1089c8) = 10;
    (*(code *)PTR_Vec3_ctor_copy_8c1089cc)(auStack_24,*(int *)(ar6 + 0x14) + 0x10,a6,ar7);
    (*(code *)PTR_Vec3_assign_wrap_063818_8c1089d0)(ar4,auStack_24,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c1089d4)(auStack_24,0xffffffff,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x30) = _DAT_8c1089d8;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = CONCAT44(PTR_Vec3_assign_wrap_05f640_8c1089dc,_DAT_8c1089d8);
    }
    (*(code *)PTR_Vec3_ctor_copy_8c1089cc)(auStack_34,*(int *)(ar6 + 0x14) + 0x10,a6,ar7);
    (*(code *)PTR_Vec3_assign_wrap_05f640_8c1089dc)(ar4,auStack_34,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c1089d4)(auStack_34,0xffffffff,a6,ar7);
    iVar2 = DAT_8c1089e0;
    *(undefined1 *)(DAT_8c1089e0 + ar4) = 0;
  }
  return iVar2;
}



/* FUN_8c1089e4 @ 8c1089e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1089e4(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *a6;
  undefined4 in_fr1;
  undefined8 uVar3;
  double dVar4;
  int iVar5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [36];
  
  a6 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c108b5c)((int)&uStack_a4 + DAT_8c108b58,ar5,ar6,ar7);
  if (*(int *)(DAT_8c108b60 + ar4) != -1) {
    if ((*(int *)(ar4 + 4) == 0) && (*(int *)(DAT_8c108b64 + ar4) != 0)) {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      uStack_7c = 0x14;
      *(undefined4 *)(DAT_8c108b68 + ar4) = 0x14;
      *(undefined4 *)(PTR_DAT_8c108b6c + DAT_8c108b70) = 0x14;
      uStack_80 = 0xb;
      *(undefined4 *)(DAT_8c108b74 + ar4) = 0xb;
      *(undefined4 *)(PTR_DAT_8c108b6c + DAT_8c108b78) = 0xb;
      uStack_84 = 10;
      *(undefined4 *)(DAT_8c108b7c + ar4) = 10;
      *(undefined4 *)(PTR_DAT_8c108b6c + DAT_8c108b80) = 10;
      (*(code *)PTR_Vec3_ctor_copy_8c108b84)(auStack_2c,ar6[5] + 0x10,a6,ar7);
      (*(code *)PTR_Vec3_assign_wrap_063818_8c108b88)(ar4,auStack_2c,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c108b8c)(auStack_2c,0xffffffff,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        uVar3 = CONCAT44((undefined4)DAT_8c108b90,in_fr1);
        *(undefined4 *)(ar4 + 0x30) = (undefined4)DAT_8c108b90;
      }
      else {
        uVar3 = CONCAT44(DAT_8c108b90._4_4_,(undefined4)DAT_8c108b90);
        *(undefined8 *)(ar4 + 0x30) = uVar3;
      }
      in_fr1 = (undefined4)uVar3;
      *(undefined1 *)(DAT_8c108b90._4_4_ + ar4) = 0;
    }
    (*(code *)PTR_Vec3_ctor_copy_8c108b84)(auStack_3c,ar6[5] + 0x10,a6,ar7);
    (*(code *)PTR_Vec3_assign_wrap_05f640_8c108b98)(ar4,auStack_3c,a6,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c108b8c)(auStack_3c,0xffffffff,a6,ar7);
    (*(code *)PTR_FUN_8c108b9c)(*ar6,uVar2,a6,ar7);
    (*(code *)PTR_Vec3_sub_8c108ba0)(auStack_4c,ar6[5] + 0x10,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c108ba4)((int)&uStack_a4 + DAT_8c108b58,auStack_5c,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c108b8c)(auStack_5c,0xffffffff,a6,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c108b8c)(auStack_4c,0xffffffff,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)&uStack_a4 + DAT_8c108bac),in_fr1);
    }
    else {
      dVar4 = *(double *)((int)&uStack_a4 + DAT_8c108bac);
    }
    if (in_FPSCR_PR == '\0') {
      iVar5 = (int)(float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      iVar5 = (int)dVar4;
    }
    *(int *)(DAT_8c108ba8 + ar4) = iVar5;
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)&uStack_a4 + DAT_8c108b58),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)((int)&uStack_a4 + DAT_8c108b58);
    }
    if (in_FPSCR_PR == '\0') {
      iVar5 = (int)(float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      iVar5 = (int)dVar4;
    }
    *(int *)(DAT_8c108bb0 + ar4) = iVar5;
    iStack_60 = (*(code *)PTR_get_field_89130_0fa740_8c108bb8)(DAT_8c108bb4,uVar2,a6,ar7);
    if ((iStack_60 == 3) ||
       (iStack_64 = (*(code *)PTR_get_field_89130_0fa740_8c108bb8)(DAT_8c108bb4,uVar2,a6,ar7),
       iStack_64 == 5)) {
      ar5 = 1;
      (*(code *)PTR_FUN_8c108bbc)(ar6[3],1,a6,ar7);
    }
    else {
      ar5 = 0;
      (*(code *)PTR_FUN_8c108d1c)(ar6[3],0,a6,ar7);
    }
    iStack_68 = (*(code *)PTR_get_field_770_05eeb8_8c108d24)(ar4 + DAT_8c108d20,ar5,a6,ar7);
    if (iStack_68 == 2) {
      *(undefined4 *)(DAT_8c108d28 + ar4) = 0;
    }
    iStack_6c = (*(code *)PTR_FUN_8c108d30)(DAT_8c108d2c,ar5,a6,ar7);
    if (iStack_6c == 0) {
      *(undefined4 *)(DAT_8c108d34 + ar4) = 0;
      uVar2 = 3;
      (*(code *)PTR_FUN_8c108d38)(ar4 + DAT_8c108d20,3,a6,ar7);
      if (*(int *)(ar4 + 0x40) == 10) {
        *(undefined4 *)(ar4 + 4) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0;
        *(undefined4 *)(ar4 + 8) = 0;
        *(undefined4 *)(ar4 + 0xc) = 0;
      }
      uVar1 = (*(code *)PTR_FUN_8c108d3c)(ar6[1],uVar2,a6,ar7);
      uStack_a4._4_2_ = (short)uVar1;
      if (uStack_a4._4_2_ == 0) {
        uVar2 = 0;
        iStack_70 = (*(code *)PTR_FUN_8c108d40)(DAT_8c108d2c,0,a6,ar7);
        if (iStack_70 == 1) {
          a6 = (undefined4 *)0x1b;
          uVar2 = 0xb;
          (*(code *)PTR_FUN_8c108d44)(ar6[6],0xb,0x1b,ar7);
        }
      }
      uVar1 = (*(code *)PTR_FUN_8c108d3c)(ar6[1],uVar2,a6,ar7);
      uStack_a4._2_2_ = (short)uVar1;
      if (uStack_a4._2_2_ == 3) {
        uVar1 = (*(code *)PTR_get_field_a0_035724_8c108d48)(ar6[6],uVar2,a6,ar7);
        uStack_a4._1_1_ = (char)uVar1;
        if (uStack_a4._1_1_ == '\0') {
          uVar1 = (*(code *)PTR_FUN_8c108d4c)(ar6[3],uVar2,a6,ar7);
          uStack_a4._0_1_ = (char)uVar1;
          if (((char)uStack_a4 == '\x01') && (*(int *)(DAT_8c108d50 + ar4) == 1)) {
            a6 = (undefined4 *)0x1b;
            (*(code *)PTR_FUN_8c108d44)(ar6[6],0xc,0x1b,ar7);
            (*(code *)PTR_FUN_8c108d54)(ar6[3],0,a6,ar7);
            (*(code *)PTR_FUN_8c108d58)(ar6[3],1,a6,ar7);
            (*(code *)PTR_FUN_8c108d5c)(ar6[6],1,a6,ar7);
            *(undefined4 *)(DAT_8c108d50 + ar4) = 0;
            uVar2 = 2;
            (*(code *)PTR_FUN_8c108d60)(ar6[3],2,a6,ar7);
            *(undefined4 *)(DAT_8c108d64 + ar4) = 0;
          }
        }
      }
      if ((*(int *)(DAT_8c108d68 + ar4) < 1) ||
         (iStack_74 = (*(code *)PTR_get_field_b0_065c8c_8c108d6c)(ar6[3],uVar2,a6,ar7),
         *(int *)(DAT_8c108d68 + ar4) < iStack_74)) {
        ar5 = 0;
        (*(code *)PTR_FUN_8c108ee4)(*ar6,0,a6,ar7);
      }
      else {
        (*(code *)PTR_FUN_8c108d70)(ar6[3],*(undefined4 *)(DAT_8c108d68 + ar4),a6,ar7);
        (*(code *)PTR_FUN_8c108d74)(*ar6,1,a6,ar7);
        a6 = (undefined4 *)0x1b;
        ar5 = 0xd;
        (*(code *)PTR_FUN_8c108d44)(ar6[6],0xd,0x1b,ar7);
      }
      if (*(int *)(DAT_8c108ee8 + ar4) == 0xf) {
        *(undefined4 *)(ar4 + 4) = 5;
        *(undefined4 *)(ar4 + 8) = 0x55;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0xe;
        uStack_88 = 0xe;
        *(undefined4 *)(DAT_8c108eec + ar4) = 0xe;
        *(undefined4 *)(PTR_DAT_8c108ef0 + DAT_8c108ef4) = 0xe;
        uStack_8c = 0x22;
        *(undefined4 *)(DAT_8c108ef8 + ar4) = 0x22;
        *(undefined4 *)(PTR_DAT_8c108ef0 + DAT_8c108efc) = 0x22;
        uStack_90 = 0x22;
        *(undefined4 *)(DAT_8c108f00 + ar4) = 0x22;
        *(undefined4 *)(PTR_DAT_8c108ef0 + DAT_8c108f04) = 0x22;
        *(undefined4 *)(DAT_8c108ee8 + ar4) = 0;
      }
      if (*(int *)(DAT_8c108ee8 + ar4) == 0x10) {
        (*(code *)PTR_FUN_8c108f0c)(ar6[1] + DAT_8c108f08,0,a6,ar7);
        ar5 = 1;
        (*(code *)PTR_FUN_8c108f10)(ar6[3],1,a6,ar7);
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 99;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0x20;
        uStack_94 = 0x20;
        *(undefined4 *)(DAT_8c108eec + ar4) = 0x20;
        *(undefined4 *)(PTR_DAT_8c108ef0 + DAT_8c108ef4) = 0x20;
        uStack_98 = 0x22;
        *(undefined4 *)(DAT_8c108ef8 + ar4) = 0x22;
        *(undefined4 *)(PTR_DAT_8c108ef0 + DAT_8c108efc) = 0x22;
        uStack_9c = 0x22;
        *(undefined4 *)(DAT_8c108f00 + ar4) = 0x22;
        *(undefined4 *)(PTR_DAT_8c108ef0 + DAT_8c108f04) = 0x22;
        *(undefined4 *)(DAT_8c108ee8 + ar4) = 0;
        (*(code *)PTR_FUN_8c108f18)(DAT_8c108f14,ar5,a6,ar7);
      }
      (*(code *)PTR_s_STATUS_FORMAT_030306_8c108f1c)(ar4 + DAT_8c108ef4,ar5,a6,ar7);
      *(undefined1 *)(DAT_8c108f20 + ar4) = 1;
      *(undefined4 *)(DAT_8c108f24 + ar4) = 0xffffffff;
      *(undefined4 *)(DAT_8c108f28 + ar4) = 0;
    }
  }
  iStack_78 = (*(code *)PTR_FUN_8c108f2c)(DAT_8c108f14,ar5,a6,ar7);
  if ((iStack_78 == 0) && ((*(int *)(ar4 + 0x40) == 10 || (*(int *)(ar4 + 0x40) == 0xb)))) {
    (*(code *)PTR_FUN_8c108f30)(ar4 + DAT_8c108ef4,3,a6,ar7);
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(DAT_8c108f28 + ar4) = 0;
    *(undefined4 *)(ar4 + 8) = 0;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined1 *)(DAT_8c108f20 + ar4) = 1;
  }
  uVar2 = (*(code *)PTR_Vec3_dtor_8c108f38)((int)&uStack_a4 + DAT_8c108f34,0xffffffff,a6,ar7);
  return uVar2;
}



/* FUN_8c108f3c @ 8c108f3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c108f3c(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined4 *)(DAT_8c108f7c + ar4) = *(undefined4 *)(DAT_8c108f80 + ar4);
  if (*(int *)(DAT_8c108f84 + ar4) == -1) {
    *(undefined4 *)(DAT_8c108f7c + ar4) = 0;
    switch(*(undefined4 *)(DAT_8c108f88 + ar4)) {
    case 0:
      *(undefined4 *)(DAT_8c108fac + ar4) = 0x14;
      break;
    case 1:
      *(undefined4 *)(DAT_8c108fbc + ar4) = 0x2d;
      break;
    case 4:
      *(undefined4 *)(DAT_8c108fdc + ar4) = 0x1e;
    }
    iVar3 = *(int *)(ar4 + 0x40);
    if (iVar3 < 0xf) {
      if (iVar3 < 0xe) {
        if (iVar3 < 7) {
          if (-1 < iVar3) {
            if (iVar3 == 0) {
              iVar3 = ar6;
              iVar1 = (*(code *)PTR_FUN_8c109100)(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
              uVar2 = (*(code *)PTR_FUN_8c109104)(iVar1 * 0x18 + *(int *)(ar6 + 4),ar5,iVar3,ar7);
              if ('\0' < (char)uVar2) {
                iVar3 = (*(code *)PTR_FUN_8c109100)(*(undefined4 *)(ar6 + 4),ar5,iVar3,ar7);
                if (iVar3 == 0) {
                  *(undefined4 *)(DAT_8c109114 + ar4) = 0x14;
                }
                else if (iVar3 == 1) {
                  *(undefined4 *)(DAT_8c109124 + ar4) = 0x14;
                }
                else if (iVar3 == 2) {
                  *(undefined4 *)(DAT_8c109144 + ar4) = 0x14;
                }
                else if (iVar3 == 4) {
                  *(undefined4 *)(DAT_8c109134 + ar4) = 0x14;
                }
              }
            }
            else if (iVar3 == 3) {
              iVar3 = (*(code *)PTR_FUN_8c109168)(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
              if (iVar3 == 0) {
                *(undefined4 *)(DAT_8c109178 + ar4) = 0x14;
              }
              else if (iVar3 == 1) {
                *(undefined4 *)(DAT_8c109188 + ar4) = 0x14;
              }
              else if (iVar3 == 2) {
                *(undefined4 *)(DAT_8c1091c4 + ar4) = 0x14;
              }
              else if (iVar3 == 4) {
                *(undefined4 *)(DAT_8c109198 + ar4) = 0x14;
              }
            }
            else if (iVar3 == 6) {
              *(undefined4 *)(DAT_8c109038 + ar4) = 0x37;
            }
          }
        }
        else if (iVar3 == 0xd) {
          *(undefined4 *)(DAT_8c109048 + ar4) = 0xf;
        }
      }
      else {
        *(undefined4 *)(DAT_8c1090ac + ar4) = 0x14;
      }
    }
    else if (iVar3 < 0x14) {
      if (0x10 < iVar3) {
        if (iVar3 == 0x11) {
          iVar3 = (*(code *)PTR_get_field_140_025f70_8c109068)(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7)
          ;
          if (iVar3 == 0) {
            *(undefined4 *)(DAT_8c10906c + ar4) = 0x19;
          }
          else {
            *(undefined4 *)(DAT_8c10907c + ar4) = 0x1e;
          }
        }
        else if (iVar3 == 0x13) {
          *(undefined4 *)(DAT_8c10909c + ar4) = 0x23;
        }
      }
    }
    else if (iVar3 == 0x1d) {
      *(undefined4 *)(DAT_8c10908c + ar4) = 0x14;
    }
  }
  iVar3 = *(int *)(DAT_8c1091c8 + ar4);
  if (iVar3 == 1) {
    *(undefined4 *)(DAT_8c1091c4 + ar4) = 0x47;
    iVar3 = DAT_8c1091c8;
    *(undefined4 *)(DAT_8c1091c8 + ar4) = 0;
  }
  return iVar3;
}



/* s_IDLEACTION_TREMOR_1091d0 @ 8c1091cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_IDLEACTION_TREMOR_1091d0(int ar4,undefined4 ar5,int ar6,undefined *ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(ar4 + 4);
  if (iVar1 == 0) {
    iVar1 = ar6;
    if (*(int *)(DAT_8c10936c + ar4) == -1) {
      uVar2 = (**(code **)(**(int **)(ar6 + 8) + 0x30))(*(int **)(ar6 + 8),ar5,ar6,ar7);
      switch(uVar2) {
      case 0xb:
        ar7 = PTR_s_GRAPHICS_COMMON_8c109370 + DAT_8c109394;
        iVar1 = 0;
        ar5 = 0x19;
        (*(code *)PTR_FUN_8c10937c)(ar4 + DAT_8c109378,0x19,0,ar7);
        break;
      case 0xc:
        ar7 = PTR_s_GRAPHICS_COMMON_8c109370 + DAT_8c109374;
        iVar1 = 0;
        ar5 = 0x19;
        (*(code *)PTR_FUN_8c10937c)(ar4 + DAT_8c109378,0x19,0,ar7);
        break;
      case 0xd:
        ar7 = PTR_s_GRAPHICS_COMMON_8c109370 + DAT_8c109390;
        iVar1 = 0;
        ar5 = 0x19;
        (*(code *)PTR_FUN_8c10937c)(ar4 + DAT_8c109378,0x19,0,ar7);
        break;
      case 0xe:
        ar7 = PTR_s_GRAPHICS_COMMON_8c109370 + DAT_8c109398;
        iVar1 = 0;
        ar5 = 0x19;
        (*(code *)PTR_FUN_8c10937c)(ar4 + DAT_8c109378,0x19,0,ar7);
        break;
      case 0xf:
        if (*(char *)(DAT_8c109380 + ar4) < '\x05') {
          ar7 = PTR_s_GRAPHICS_COMMON_8c109370 + DAT_8c109388;
          iVar1 = 0;
          ar5 = 0x19;
          (*(code *)PTR_FUN_8c10937c)(ar4 + DAT_8c109378,0x19,0,ar7);
        }
        else {
          ar7 = PTR_s_GRAPHICS_COMMON_8c109370 + DAT_8c109384;
          iVar1 = 0;
          ar5 = 0x19;
          (*(code *)PTR_FUN_8c10937c)(ar4 + DAT_8c109378,0x19,0,ar7);
        }
        break;
      case 0x10:
        ar7 = PTR_s_GRAPHICS_COMMON_8c109370 + DAT_8c10938c;
        iVar1 = 0;
        ar5 = 0x19;
        (*(code *)PTR_FUN_8c10937c)(ar4 + DAT_8c109378,0x19,0,ar7);
      }
    }
    iVar1 = (**(code **)(**(int **)(ar6 + 8) + 0x30))(*(int **)(ar6 + 8),ar5,iVar1,ar7);
    if (iVar1 == 0x11) {
      iVar1 = (*(code *)PTR_FUN_8c1093a0)
                        (ar4 + DAT_8c109378,0x2c,0,PTR_s_GRAPHICS_COMMON_8c109370 + DAT_8c10939c);
    }
  }
  return iVar1;
}



/* s_STATUS_SUCKED_1093aa @ 8c1093a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_STATUS_SUCKED_1093aa(int ar4,int *ar5,int *ar6,undefined *ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *a5;
  int *a6;
  
  a5 = ar5;
  a6 = ar6;
  iVar1 = (**(code **)(DAT_8c109430 + *(int *)(*ar6 + 8)))(*ar6,ar5,ar6,ar7);
  if ((iVar1 == 1) && (*(int *)(ar4 + 4) != 1)) {
    iVar1 = (*(code *)PTR_get_field_6c_02f46c_8c109434)(*ar6,a5,a6,ar7);
    if ((iVar1 == 0) &&
       (iVar1 = (*(code *)PTR_get_field_70_05f490_8c109438)(*ar6,a5,a6,ar7), iVar1 == 0)) {
      a6 = (int *)0x1b;
      (*(code *)PTR_FUN_8c10943c)(ar6[6],0xe,0x1b,ar7);
      *(undefined4 *)(ar4 + 0x38) = 2;
      *(undefined4 *)(ar4 + 4) = 1;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 8) = 99;
      a5 = DAT_8c109440;
      (*(code *)PTR_FUN_8c109444)(ar4,DAT_8c109440,a6,ar7);
      *(undefined1 *)(DAT_8c109448 + ar4) = 10;
    }
    else if (*(int *)(ar4 + 4) != 0xb) {
      *(undefined4 *)(ar4 + 0x38) = 2;
      *(undefined4 *)(ar4 + 4) = 0xb;
      *(undefined4 *)(ar4 + 8) = 99;
      *(undefined4 *)(ar4 + 0x40) = 0xd;
      (*(code *)PTR_FUN_8c109640)(ar4,DAT_8c10963c,a6,ar7);
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(DAT_8c109644 + ar4) = 0xd;
      *(undefined4 *)(PTR_DAT_8c109648 + DAT_8c10964c) = 0xd;
      *(undefined4 *)(DAT_8c109650 + ar4) = 0x22;
      *(undefined4 *)(PTR_DAT_8c109648 + DAT_8c109654) = 0x22;
      ar7 = PTR_s_GRAPHICS_COMMON_8c109658 + DAT_8c10965c;
      a6 = (int *)0x0;
      a5 = (int *)0x19;
      (*(code *)PTR_FUN_8c109660)(ar4 + DAT_8c10964c,0x19,0,ar7);
      if (*(int *)(ar4 + 0x6c) != 0) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),a5,a6,ar7);
        *(undefined4 *)(ar4 + 0x6c) = 0;
      }
    }
    if ((*(char *)(DAT_8c109664 + ar4) == '\x01') && (*(int *)(ar4 + 4) == 0)) {
      *(undefined1 *)(DAT_8c109664 + ar4) = 0;
    }
  }
  uVar2 = (*(code *)PTR_FUN_8c109668)(ar6[1],a5,a6,ar7);
  if (((((short)uVar2 == 1) ||
       (uVar2 = (*(code *)PTR_FUN_8c109668)(ar6[1],a5,a6,ar7), (short)uVar2 == 2)) &&
      (iVar1 = (*(code *)PTR_get_field_8_1097a0_8c10966c)(ar6[3],a5,a6,ar7), iVar1 == 1)) &&
     (((*(char *)(DAT_8c109664 + ar4) != '\x01' &&
       (iVar1 = (*(code *)PTR_FUN_8c109670)(ar6[1],a5,a6,ar7), iVar1 == -1)) &&
      (*(int *)(ar4 + 4) != 0xd)))) {
    *(undefined1 *)(DAT_8c109664 + ar4) = 1;
    (*(code *)PTR_FUN_8c109640)(ar4,DAT_8c109674,a6,ar7);
    a5 = (int *)0x0;
    (*(code *)PTR_FUN_8c109678)(ar6[3],0,a6,ar7);
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 4) = 6;
    *(undefined4 *)(ar4 + 0x38) = 2;
  }
  iVar1 = (*(code *)PTR_get_field_c4_066448_8c10967c)(ar6[3],a5,a6,ar7);
  if (((iVar1 == 0) && (*(int *)(ar4 + 0x40) == 0)) && (*(int *)(DAT_8c109680 + ar4) == -1)) {
    iVar1 = (*(code *)PTR_get_field_13c_028d9c_8c109684)(ar6[1],a5,a6,ar7);
    if ((iVar1 == 3) ||
       (iVar1 = (*(code *)PTR_get_field_13c_028d9c_8c109684)(ar6[1],a5,a6,ar7), iVar1 == 4)) {
      a5 = (int *)0xf;
      iVar1 = (**(code **)(DAT_8c109688 + *ar5))(ar5,0xf,a6,ar7);
      if (iVar1 < 1) {
        ar7 = (undefined *)0xa;
        a5 = ar5;
        a6 = ar6;
        iVar1 = (*(code *)PTR_FUN_8c10968c)(ar4,ar5,ar6,10);
        if (iVar1 == 0) goto LAB_8c1096ec;
      }
      uVar2 = (*(code *)PTR_FUN_8c109690)(ar6[3],a5,a6,ar7);
      if (((char)uVar2 == '\x02') && (*(char *)(DAT_8c109694 + ar4) < '\b')) {
        ar7 = PTR_s_GRAPHICS_COMMON_8c109658 + DAT_8c109698;
        a6 = (int *)0x0;
        (*(code *)PTR_FUN_8c109660)(ar4 + DAT_8c10964c,0x2c,0,ar7);
        a5 = (int *)0x1;
        (*(code *)PTR_FUN_8c10969c)(ar6[3],1,a6,ar7);
      }
    }
    else {
      a5 = (int *)0xf;
      iVar1 = (**(code **)(DAT_8c109770 + *ar5))(ar5,0xf,a6,ar7);
      if ((0 < iVar1) && (*(char *)(DAT_8c109774 + ar4) == '\x01')) {
        ar7 = PTR_s_GRAPHICS_COMMON_8c109778 + DAT_8c10977c;
        a6 = (int *)0x0;
        (*(code *)PTR_FUN_8c109784)(ar4 + DAT_8c109780,0x2c,0,ar7);
        a5 = (int *)0x1;
        (*(code *)PTR_FUN_8c109788)(ar6[3],1,a6,ar7);
      }
    }
  }
LAB_8c1096ec:
  iVar1 = *(int *)(ar4 + 0x6c);
  if (((iVar1 == 0) &&
      (iVar1 = (*(code *)PTR_get_field_13c_028d9c_8c10978c)(ar6[1],a5,a6,ar7), iVar1 == 2)) &&
     (iVar1 = *(int *)(ar4 + 0x40), iVar1 == 0)) {
    iVar3 = (**(code **)(DAT_8c109770 + *ar5))(ar5,0xf,a6,ar7);
    iVar1 = 1;
    if (((0 < iVar3) && (iVar1 = (int)*(char *)(DAT_8c109774 + ar4), iVar1 == 0)) &&
       ((iVar1 = *(int *)(ar4 + 4), iVar1 != 0xd && (iVar1 = *(int *)(ar4 + 4), iVar1 != 6)))) {
      (*(code *)PTR_FUN_8c109794)(ar4,DAT_8c109790,a6,ar7);
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 6;
      *(undefined4 *)(ar4 + 0x38) = 2;
      iVar1 = DAT_8c109774;
      *(undefined1 *)(DAT_8c109774 + ar4) = 1;
    }
  }
  return iVar1;
}



/* FUN_8c109798 @ 8c109798 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c109798(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 8) = ar5;
  return in_r0;
}



/* get_field_8_1097a0 @ 8c1097a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_8_1097a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 8);
}



/* s_STATUS_LIFE_1097b2 @ 8c1097a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_STATUS_LIFE_1097b2(int ar4,int *ar5,int *ar6,undefined *ar7)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  piVar3 = ar5;
  piVar5 = ar6;
  iVar1 = (*(code *)PTR_get_field_124_027930_8c109824)(ar6[2],ar5,ar6,ar7);
  if ((iVar1 != 2) &&
     (piVar3 = ar6, iVar1 = (*(code *)PTR_FUN_8c109828)(ar4,ar6,piVar5,ar7), iVar1 == 1)) {
    uVar2 = (*(code *)PTR_FUN_8c10982c)(ar6[6],piVar3,piVar5,ar7);
    piVar3 = (int *)0x3c;
    iVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c109830)(uVar2 & 0xffff,0x3c,piVar5,ar7);
    if (1 < iVar1) {
      piVar3 = (int *)0x0;
      while( true ) {
        uVar4 = 3;
        iVar1 = (**(code **)(DAT_8c109a44 + *ar5))(ar5,3,piVar5,ar7);
        if (iVar1 <= (int)piVar3) break;
        uVar4 = 3;
        piVar5 = piVar3;
        iVar1 = (**(code **)(DAT_8c109a38 + *ar5))(ar5,3,piVar3,ar7);
        iVar1 = (**(code **)(DAT_8c109a3c + *(int *)(iVar1 + 8)))(iVar1,uVar4,piVar5,ar7);
        if (iVar1 == 4) {
LAB_8c1098a4:
          uVar4 = 3;
          piVar5 = piVar3;
          iVar1 = (**(code **)(DAT_8c109a38 + *ar5))(ar5,3,piVar3,ar7);
          iVar1 = (**(code **)(DAT_8c109a40 + *(int *)(iVar1 + 8)))(iVar1,uVar4,piVar5,ar7);
          if (iVar1 == 1) {
            iVar6 = iVar6 + 1;
          }
        }
        else {
          uVar4 = 3;
          piVar5 = piVar3;
          iVar1 = (**(code **)(DAT_8c109a38 + *ar5))(ar5,3,piVar3,ar7);
          iVar1 = (**(code **)(DAT_8c109a3c + *(int *)(iVar1 + 8)))(iVar1,uVar4,piVar5,ar7);
          if (iVar1 == 3) goto LAB_8c1098a4;
        }
        piVar3 = (int *)((int)piVar3 + 1);
      }
      uVar2 = (*(code *)PTR_FUN_8c109a48)(ar6[6],uVar4,piVar5,ar7);
      piVar3 = (int *)0x3c;
      iVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c109a4c)(uVar2 & 0xffff,0x3c,piVar5,ar7);
      if ((((0 < iVar1) &&
           (uVar4 = (*(code *)PTR_FUN_8c109a50)(ar6[1],piVar3,piVar5,ar7), 6 < (short)uVar4)) &&
          (iVar1 = (*(code *)PTR_get_field_18_02d1a0_8c109a58)
                             (ar6[1] + DAT_8c109a54,piVar3,piVar5,ar7), 0 < iVar1)) &&
         (((iVar1 = (*(code *)PTR_get_field_13c_028d9c_8c109a5c)(ar6[1],piVar3,piVar5,ar7),
           iVar1 == 4 && (*(int *)(DAT_8c109a60 + ar4) == -1)) &&
          ((iVar6 == 1 && ((*(char *)(DAT_8c109a64 + ar4) < '\x04' && (*(int *)(ar4 + 4) == 0)))))))
         ) {
        ar7 = PTR_s_GRAPHICS_COMMON_8c109a68 + DAT_8c109a6c;
        piVar5 = (int *)0x0;
        (*(code *)PTR_FUN_8c109a74)(ar4 + DAT_8c109a70,0x16,0,ar7);
        piVar3 = (int *)0x0;
        (*(code *)PTR_FUN_8c109a78)(ar6[1] + DAT_8c109a54,0,piVar5,ar7);
      }
    }
  }
  iVar1 = (*(code *)PTR_get_field_13c_028d9c_8c109a5c)(ar6[1],piVar3,piVar5,ar7);
  if ((iVar1 == 3) ||
     (iVar1 = (*(code *)PTR_get_field_13c_028d9c_8c109a5c)(ar6[1],piVar3,piVar5,ar7), iVar1 == 4)) {
    uVar2 = (*(code *)PTR_FUN_8c109a48)(ar6[6],piVar3,piVar5,ar7);
    iVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c109a7c)(uVar2 & 0xffff,0x45,piVar5,ar7);
    if (iVar1 == 0x14) {
      *(undefined1 *)(DAT_8c109a80 + ar4) = 0;
    }
    iVar1 = (**(code **)(DAT_8c109a44 + *ar5))(ar5,3,piVar5,ar7);
    if (((((iVar1 == 1) && (iVar1 = *(int *)(DAT_8c109a60 + ar4), iVar1 == -1)) &&
         (iVar1 = 3, *(char *)(DAT_8c109a64 + ar4) < '\x04')) &&
        ((piVar3 = ar6, iVar1 = (*(code *)PTR_FUN_8c109a84)(ar4,ar6,piVar5,ar7), iVar1 == 1 &&
         (iVar1 = (*(code *)PTR_FUN_8c109a8c)
                            (*(undefined4 *)(DAT_8c109a88 + ar6[6]),piVar3,piVar5,ar7), iVar1 == 0))
        )) && (iVar1 = (int)*(char *)(DAT_8c109af4 + ar4), iVar1 == 0)) {
      uVar2 = (*(code *)PTR_FUN_8c109af8)(ar6[6],piVar3,piVar5,ar7);
      iVar6 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c109afc)(uVar2 & 0xffff,0x3c,piVar5,ar7);
      iVar1 = 2;
      if (2 < iVar6) {
        *(undefined1 *)(DAT_8c109af4 + ar4) = 1;
        iVar1 = (*(code *)PTR_FUN_8c109b0c)
                          (ar4 + DAT_8c109b08,0x16,0,PTR_s_GRAPHICS_COMMON_8c109b00 + DAT_8c109b04);
      }
    }
  }
  return iVar1;
}



/* FUN_8c109b10 @ 8c109b10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c109b10(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x1c) = (undefined1)ar5;
  return 0x1c;
}



/* FUN_8c109b18 @ 8c109b18 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c109b18(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c109b88)(*(undefined4 *)(ar5 + 4),ar5,ar6,ar7);
  if ((iVar1 == 0) || (iVar1 != 1)) {
    if (*(int *)(ar4 + 4) == 2) {
      puVar2 = (undefined4 *)(*(code *)PTR_get_field_8_066620_8c109b90)(ar4,ar5,ar6,ar7);
    }
    else {
      (*(code *)PTR_get_field_8_066620_8c109b90)(ar4,ar5,ar6,ar7);
      puVar2 = &DAT_8c109b94;
    }
  }
  else {
    puVar2 = (undefined4 *)&DAT_8c109b8c;
  }
  return puVar2;
}



/* FUN_8c109b98 @ 8c109b98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c109b98(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *a5;
  undefined1 *a6;
  undefined1 *a7;
  char in_FPSCR_SZ;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  (*(code *)PTR_Vec3_ctor_zero_8c109d80)(&uStack_18,ar5,ar6,ar7);
  a7 = auStack_44;
  a6 = auStack_40;
  a5 = auStack_3c;
  (**(code **)(DAT_8c109d84 + *ar5))(ar5,a5,a6,a7);
  uVar1 = (*(code *)PTR_get_field_4_05eed8_8c109d88)(ar4,a5,a6,a7);
  switch(uVar1) {
  case 6:
    (*(code *)PTR_FUN_8c109d8c)(*(undefined4 *)(ar4 + 0x6c),a5,a6,a7);
    uVar1 = (*(code *)PTR_Vec3_assign_8c109d90)(&uStack_18,auStack_38,a6,a7);
    uVar1 = (*(code *)PTR_Vec3_assign_8c109d90)(ar4 + 0x70,uVar1,a6,a7);
    (*(code *)PTR_Vec3_assign_8c109d90)(ar4 + 0x28,uVar1,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c109d94)(auStack_38,0xffffffff,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = uStack_18;
      *(undefined4 *)(ar4 + 0x70) = uStack_18;
      *(undefined4 *)(ar4 + 0x2c) = uStack_14;
      *(undefined4 *)(ar4 + 0x74) = uStack_14;
      *(undefined4 *)(ar4 + 0x30) = uStack_10;
      *(undefined4 *)(ar4 + 0x78) = uStack_10;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = CONCAT44(uStack_14,uStack_18);
      *(ulonglong *)(ar4 + 0x70) = CONCAT44(uStack_14,uStack_18);
      *(ulonglong *)(ar4 + 0x2c) = CONCAT44(uStack_10,uStack_14);
      *(ulonglong *)(ar4 + 0x74) = CONCAT44(uStack_10,uStack_14);
      *(ulonglong *)(ar4 + 0x30) = CONCAT44(uStack_c,uStack_10);
      *(ulonglong *)(ar4 + 0x78) = CONCAT44(uStack_c,uStack_10);
    }
    break;
  case 0xd:
    if (*(int *)(ar4 + 0x6c) != 0) {
      (*(code *)PTR_FUN_8c109d8c)(*(undefined4 *)(ar4 + 0x6c),a5,a6,a7);
      (*(code *)PTR_Vec3_assign_8c109d90)(&uStack_18,auStack_28,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c109d94)(auStack_28,0xffffffff,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = uStack_18;
        *(undefined4 *)(ar4 + 0x70) = uStack_18;
        *(undefined4 *)(ar4 + 0x2c) = uStack_14;
        *(undefined4 *)(ar4 + 0x74) = uStack_14;
        *(undefined4 *)(ar4 + 0x30) = uStack_10;
        *(undefined4 *)(ar4 + 0x78) = uStack_10;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = CONCAT44(uStack_14,uStack_18);
        *(ulonglong *)(ar4 + 0x70) = CONCAT44(uStack_14,uStack_18);
        *(ulonglong *)(ar4 + 0x2c) = CONCAT44(uStack_10,uStack_14);
        *(ulonglong *)(ar4 + 0x74) = CONCAT44(uStack_10,uStack_14);
        *(ulonglong *)(ar4 + 0x30) = CONCAT44(uStack_c,uStack_10);
        *(ulonglong *)(ar4 + 0x78) = CONCAT44(uStack_c,uStack_10);
      }
    }
  }
  uVar1 = (*(code *)PTR_Vec3_dtor_8c109d94)(&uStack_18,0xffffffff,a6,a7);
  return uVar1;
}



/* Class_12c3c4_m6_109d98 @ 8c109d98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint Class_12c3c4_m6_109d98(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c109dc0)(DAT_8c109dbc,ar5,ar6,ar7);
  return (uint)(iVar1 == 0);
}



/* FUN_8c109dc4 @ 8c109dc4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c109dc4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a5;
  
  if (*(char *)(DAT_8c109e20 + ar4) == '\x03') {
    a5 = 1;
    uVar1 = (*(code *)PTR_FUN_8c109e24)(*(undefined4 *)(ar5 + 0x10),1,ar6,ar7);
    if ((((char)uVar1 == '\x05') && (*(int *)(DAT_8c109e28 + ar4) == 0)) &&
       (uVar1 = (*(code *)PTR_FUN_8c109e30)(*(int *)(ar5 + 4) + DAT_8c109e2c,a5,ar6,ar7),
       (char)uVar1 == '\x01')) {
      return 1;
    }
  }
  return 0;
}



/* FUN_8c109e34 @ 8c109e34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c109e34(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + (char)ar5 + 0xc);
}



/* FUN_8c109e40 @ 8c109e40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c109e40(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(DAT_8c109edc + ar4);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_8c109ee0 + ar4) = 3;
    (*(code *)PTR_FUN_8c109ee8)(*(int *)(ar5 + 4) + DAT_8c109ee4,0,ar6,ar7);
    (*(code *)PTR_FUN_8c109eec)(*(int *)(ar5 + 4) + DAT_8c109ee4,0,ar6,ar7);
    uVar2 = 1;
    (*(code *)PTR_FUN_8c109ef0)(*(undefined4 *)(ar5 + 0x10),1,ar6,ar7);
    iVar1 = (*(code *)PTR_FUN_8c109ef8)(*(int *)(ar5 + 4) + DAT_8c109ef4,uVar2,ar6,ar7);
    if (0x5e < iVar1) {
      uVar2 = (*(code *)PTR_get_field_4_02d1e0_8c109efc)
                        (*(int *)(ar5 + 4) + DAT_8c109ef4,uVar2,ar6,ar7);
      iVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c109f00)(uVar2,10,ar6,ar7);
      (*(code *)PTR_FUN_8c109f04)(*(int *)(ar5 + 4) + DAT_8c109ef4,iVar1 * 9,ar6,ar7);
    }
    iVar1 = DAT_8c109edc;
    *(undefined4 *)(DAT_8c109edc + ar4) = 1;
  }
  return iVar1;
}



/* FUN_8c109f08 @ 8c109f08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c109f08(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_14;
  
  uStack_20 = ar5;
  uStack_14 = ar6;
  iVar1 = (*(code *)PTR_FUN_8c109f4c)(ar4,auStack_24,ar6,ar7);
  if (iVar1 == 1) {
    (*(code *)PTR_FUN_8c109f50)(ar4,auStack_24,ar6,ar7);
    iVar1 = 1;
    *DAT_8c109f54 = 1;
  }
  return iVar1;
}



/* get_field_150_109f58 @ 8c109f58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_150_109f58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c109f60 + ar4);
}



/* FUN_8c109f64 @ 8c109f64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c109f64(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c109f6c;
  *(undefined4 *)(DAT_8c109f6c + ar4) = ar5;
  return iVar1;
}



/* Class_12c3c4_m7_109f70 @ 8c109f70 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12c3c4_m7_109f70(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(char *)(DAT_8c109fac + ar4) = (char)*(undefined4 *)(ar5 + 4);
  *(undefined1 *)(DAT_8c109fb0 + ar4) = *ar5;
  (*(code *)PTR_FUN_8c109fb8)(ar4 + DAT_8c109fb4,ar5 + 8,ar6,ar7);
  iVar1 = DAT_8c109fbc;
  *(undefined1 *)(DAT_8c109fbc + ar4) = ar5[1];
  return iVar1;
}



/* Class_12c3c4_m8_109fc0 @ 8c109fc0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12c3c4_m8_109fc0(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(int *)(ar5 + 4) = (int)*(char *)(DAT_8c109ff8 + ar4);
  *ar5 = *(undefined1 *)(DAT_8c109ffc + ar4);
  ar5[1] = *(undefined1 *)(DAT_8c10a000 + ar4);
  uVar1 = (*(code *)PTR_FUN_8c10a008)(ar4 + DAT_8c10a004,ar5 + 8,ar6,ar7);
  return uVar1;
}



/* Class_12c3c4_m9_10a00c @ 8c10a00c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12c3c4_m9_10a00c(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  if (ar6 == 2) {
    *(char *)(DAT_8c10a05c + ar4) = (char)*(undefined4 *)(ar5 + 4);
  }
  else {
    *(char *)(DAT_8c10a060 + ar4) = (char)*(undefined4 *)(ar5 + 4);
  }
  *(undefined1 *)(DAT_8c10a064 + ar4) = *ar5;
  (*(code *)PTR_FUN_8c10a06c)(ar4 + DAT_8c10a068,ar5 + 8,ar6,ar7);
  iVar1 = DAT_8c10a070;
  *(undefined1 *)(DAT_8c10a070 + ar4) = ar5[1];
  return iVar1;
}



/* Class_12c3c4_m10_10a074 @ 8c10a074 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12c3c4_m10_10a074(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar6 == 2) {
    *(int *)(ar5 + 4) = (int)*(char *)(DAT_8c10a0c4 + ar4);
  }
  else {
    *(int *)(ar5 + 4) = (int)*(char *)(DAT_8c10a0c8 + ar4);
  }
  *ar5 = *(undefined1 *)(DAT_8c10a0cc + ar4);
  ar5[1] = *(undefined1 *)(DAT_8c10a0d0 + ar4);
  uVar1 = (*(code *)PTR_FUN_8c10a0d8)(ar4 + DAT_8c10a0d4,ar5 + 8,ar6,ar7);
  return uVar1;
}



/* Class_12c3c4_m5_10a0dc @ 8c10a0dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12c3c4_m5_10a0dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  
  iVar1 = *(int *)(DAT_8c10a14c + ar4);
  if (iVar1 != -1) {
    (*(code *)PTR_FUN_8c10a154)(DAT_8c10a150,ar5,ar6,ar7);
    a5 = 3;
    (*(code *)PTR_FUN_8c10a15c)(ar4 + DAT_8c10a158,3,ar6,ar7);
    *(undefined1 *)(DAT_8c10a160 + ar4) = 1;
    *(undefined4 *)(DAT_8c10a14c + ar4) = 0xffffffff;
    *(undefined4 *)(DAT_8c10a164 + ar4) = 0;
    (*(code *)PTR_s_STATUS_FORMAT_030306_8c10a168)(ar4 + DAT_8c10a158,a5,ar6,ar7);
    if ((*(int *)(ar4 + 0x40) == 0xb) || (iVar1 = *(int *)(ar4 + 0x40), iVar1 == 10)) {
      *(undefined4 *)(ar4 + 4) = 0;
      *(undefined4 *)(ar4 + 8) = 0x14;
      *(undefined4 *)(ar4 + 0xc) = 0;
      iVar1 = 0x40;
      *(undefined4 *)(ar4 + 0x40) = 0;
    }
  }
  return iVar1;
}



/* Class_12c3c4_m4_10a16c @ 8c10a16c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined * Class_12c3c4_m4_10a16c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (int)(char)ar6;
  puVar1 = (undefined *)0x7;
  if ((iVar2 < 8) && (-1 < iVar2)) {
    puVar1 = (&switchD_8c10a18c::switchdataD_8c10a190)[iVar2];
    switch((char)ar6) {
    case '\0':
      puVar1 = (undefined *)(*(code *)PTR_FUN_8c10a1f8)(ar5,10,0x1b,ar7);
      break;
    case '\x03':
      puVar1 = (undefined *)(*(code *)PTR_FUN_8c10a1f8)(ar5,0x10,0x1b,ar7);
      break;
    case '\x06':
      puVar1 = (undefined *)(*(code *)PTR_FUN_8c10a1f8)(ar5,0x12,0x1b,ar7);
      break;
    case '\a':
      puVar1 = (undefined *)(*(code *)PTR_FUN_8c10a1f8)(ar5,0x13,0x1b,ar7);
    }
  }
  return puVar1;
}



/* get_field_100_10a1fc @ 8c10a1fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_100_10a1fc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c10a204 + ar4);
}



/* get_field_870_10a208 @ 8c10a208 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_870_10a208(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c10a210 + ar4);
}



/* FUN_8c10a214 @ 8c10a214 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c10a214(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c10a29c)(PTR_DAT_8c10a298,ar5,ar6,ar7);
  puVar4 = PTR_Vec3_dtor_8c10a2a4;
  uVar2 = DAT_8c10a2a0;
  (*(code *)PTR_global_list_push_8c10a2a8)(uVar1,PTR_Vec3_dtor_8c10a2a4,DAT_8c10a2a0,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c10a29c)(PTR_DAT_8c10a2ac,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c10a2a4;
  uVar2 = DAT_8c10a2b0;
  (*(code *)PTR_global_list_push_8c10a2a8)(uVar1,PTR_Vec3_dtor_8c10a2a4,DAT_8c10a2b0,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c10a29c)(PTR_DAT_8c10a2b4,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c10a2a4;
  uVar2 = DAT_8c10a2b8;
  (*(code *)PTR_global_list_push_8c10a2a8)(uVar1,PTR_Vec3_dtor_8c10a2a4,DAT_8c10a2b8,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c10a29c)(PTR_DAT_8c10a2bc,puVar4,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c10a2a8)(uVar2,PTR_Vec3_dtor_8c10a2a4,DAT_8c10a2c0,ar7);
  puVar3 = DAT_8c10a2c8;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c10a2c4 = *(undefined4 *)DAT_8c10a2c8;
  }
  else {
    *(undefined8 *)PTR_DAT_8c10a2c4 = *DAT_8c10a2c8;
  }
  return puVar3;
}



/* FUN_8c10a2cc @ 8c10a2cc callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10a2cc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 in_dr4;
  undefined8 in_dr12;
  undefined8 in_xd4;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_8);
  }
  else {
    puVar2 = &uStack_8;
    uStack_8 = in_dr12;
  }
  *(undefined4 *)((int)puVar2 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar2 + -8) = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)((int)puVar2 + -0xc) = (int)in_dr4;
  }
  else {
    *(undefined8 *)((int)puVar2 + -8) = in_dr4;
    *(undefined8 *)((int)puVar2 + -0xc) = in_xd4;
  }
  (*(code *)PTR_thunk_FUN_8c013cd8_8c10a3ec)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_thunk_FUN_8c013cd8_8c10a3ec)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_thunk_FUN_8c013dfc_8c10a3f4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c10a308 @ 8c10a308 callers=2 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c10a308(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 in_fr3;
  undefined8 uVar2;
  byte in_FPSCR_DN;
  byte bVar3;
  byte in_FPSCR_PR;
  byte bVar4;
  byte in_FPSCR_SZ;
  byte bVar5;
  
  *(undefined4 *)(ar4 + 0x30) = *(undefined4 *)(ar4 + 0x28);
  *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)(ar4 + 0x28);
  *(undefined4 *)(ar4 + 0x38) = 0;
  *(undefined4 *)(ar4 + 0x4c) = 2;
  *(undefined1 *)(ar4 + 0x50) = 0;
  if (in_FPSCR_SZ == 0) {
    in_fr3 = _DAT_8c10a3f8;
  }
  if (in_FPSCR_SZ == 0) {
    uVar2 = CONCAT44(*(undefined4 *)(DAT_8c10a3ea + ar4),in_fr3);
  }
  else {
    uVar2 = *(undefined8 *)(DAT_8c10a3ea + ar4);
  }
  if (in_FPSCR_PR != 0 || (float)((ulonglong)uVar2 >> 0x20) <= (float)uVar2) {
    (*(code *)PTR_memset_8c10a404)(*(undefined4 *)(ar4 + 0x58),0,*(int *)(ar4 + 0x7c) << 2);
    *(undefined1 *)(ar4 + 0x51) = 0;
  }
  else {
    (*(code *)PTR_memmove_8c10a3fc)
              (*(undefined4 *)(ar4 + 0x58),*(undefined4 *)(ar4 + 0xa8),*(int *)(ar4 + 0x7c) << 2);
    bVar3 = 0;
    bVar4 = 0;
    bVar5 = (byte)((((uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
                    (uint)in_FPSCR_SZ << 0x14) & DAT_8c10a3f0 & 0x100000) >> 0x14);
    (*(code *)PTR_memmove_8c10a3fc)
              (*(undefined4 *)(ar4 + 0x54),*(undefined4 *)(ar4 + 0xa8),*(int *)(ar4 + 0x7c) << 2);
    in_FPSCR_DN = 0;
    in_FPSCR_PR = 0;
    in_FPSCR_SZ = (byte)((((uint)bVar3 << 0x12 | (uint)bVar4 << 0x13 | (uint)bVar5 << 0x14) &
                          DAT_8c10a3f0 & 0x100000) >> 0x14);
    cVar1 = (*(code *)PTR_FUN_8c10a400)(*(undefined4 *)(ar4 + 0xb0),*(undefined4 *)(ar4 + 0x54));
    if (cVar1 != '\0') {
      return 1;
    }
    *(undefined1 *)(ar4 + 0x51) = 1;
  }
  cVar1 = (char)((((uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14
                  ) & DAT_8c10a3f0 & 0x100000) >> 0x14);
  (*(code *)PTR_memset_8c10a404)(*(undefined4 *)(ar4 + 0x5c),0,*(int *)(ar4 + 0x7c) << 2);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x60) = (undefined4)DAT_8c10a408;
    *(undefined4 *)(ar4 + 100) = *(undefined4 *)(ar4 + 0xa0);
  }
  else {
    *(ulonglong *)(ar4 + 0x60) = CONCAT44(DAT_8c10a408._4_4_,(undefined4)DAT_8c10a408);
    *(undefined8 *)(ar4 + 100) = *(undefined8 *)(ar4 + 0xa0);
  }
  *(undefined4 *)(ar4 + 0x68) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x6c) = DAT_8c10a408._4_4_;
    *(undefined4 *)(ar4 + 0x70) = _DAT_8c10a3f8;
  }
  else {
    *(ulonglong *)(ar4 + 0x6c) = CONCAT44(_FUN_8c10a410,DAT_8c10a408._4_4_);
    *(ulonglong *)(ar4 + 0x70) = CONCAT44(PTR_memmove_8c10a3fc,_DAT_8c10a3f8);
  }
  *(undefined4 *)(ar4 + 0x74) = 0;
  *(undefined4 *)(ar4 + 0x78) = 0;
  return 0;
}



/* FUN_8c10a312 @ 8c10a312 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c10a312(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint uVar1;
  int a6;
  undefined4 unaff_r13;
  int unaff_r14;
  undefined4 in_fr3;
  undefined8 uVar2;
  byte in_FPSCR_DN;
  byte bVar3;
  byte in_FPSCR_PR;
  byte bVar4;
  byte in_FPSCR_SZ;
  byte bVar5;
  char cVar6;
  
  *(undefined4 *)(unaff_r14 + 0x30) = *(undefined4 *)(unaff_r14 + 0x28);
  *(undefined4 *)(unaff_r14 + 0x34) = *(undefined4 *)(unaff_r14 + 0x28);
  *(undefined4 *)(unaff_r14 + 0x38) = unaff_r13;
  *(undefined4 *)(in_r0 + unaff_r14) = 2;
  *(char *)(unaff_r14 + 0x50) = (char)unaff_r13;
  if (in_FPSCR_SZ == 0) {
    in_fr3 = _DAT_8c10a3f8;
  }
  if (in_FPSCR_SZ == 0) {
    uVar2 = CONCAT44(*(undefined4 *)(DAT_8c10a3ea + unaff_r14),in_fr3);
  }
  else {
    uVar2 = *(undefined8 *)(DAT_8c10a3ea + unaff_r14);
  }
  if (in_FPSCR_PR != 0 || (float)((ulonglong)uVar2 >> 0x20) <= (float)uVar2) {
    (*(code *)PTR_memset_8c10a404)
              (*(undefined4 *)(unaff_r14 + 0x58),0,*(int *)(unaff_r14 + 0x7c) << 2,ar7);
    *(char *)(unaff_r14 + 0x51) = (char)unaff_r13;
  }
  else {
    (*(code *)PTR_memmove_8c10a3fc)
              (*(undefined4 *)(unaff_r14 + 0x58),*(undefined4 *)(unaff_r14 + 0xa8),
               *(int *)(unaff_r14 + 0x7c) << 2,ar7);
    a6 = *(int *)(unaff_r14 + 0x7c) << 2;
    bVar3 = 0;
    bVar4 = 0;
    bVar5 = (byte)((((uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
                    (uint)in_FPSCR_SZ << 0x14) & DAT_8c10a3f0 & 0x100000) >> 0x14);
    (*(code *)PTR_memmove_8c10a3fc)
              (*(undefined4 *)(unaff_r14 + 0x54),*(undefined4 *)(unaff_r14 + 0xa8),a6,ar7);
    in_FPSCR_DN = 0;
    in_FPSCR_PR = 0;
    in_FPSCR_SZ = (byte)((((uint)bVar3 << 0x12 | (uint)bVar4 << 0x13 | (uint)bVar5 << 0x14) &
                          DAT_8c10a3f0 & 0x100000) >> 0x14);
    uVar1 = (*(code *)PTR_FUN_8c10a400)
                      (*(undefined4 *)(unaff_r14 + 0xb0),*(undefined4 *)(unaff_r14 + 0x54),a6,ar7);
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
    *(undefined1 *)(unaff_r14 + 0x51) = 1;
  }
  cVar6 = (char)((((uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14
                  ) & DAT_8c10a3f0 & 0x100000) >> 0x14);
  (*(code *)PTR_memset_8c10a404)
            (*(undefined4 *)(unaff_r14 + 0x5c),0,*(int *)(unaff_r14 + 0x7c) << 2,ar7);
  if (cVar6 == '\0') {
    *(undefined4 *)(unaff_r14 + 0x60) = (undefined4)DAT_8c10a408;
    *(undefined4 *)(unaff_r14 + 100) = *(undefined4 *)(unaff_r14 + 0xa0);
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x60) = CONCAT44(DAT_8c10a408._4_4_,(undefined4)DAT_8c10a408);
    *(undefined8 *)(unaff_r14 + 100) = *(undefined8 *)(unaff_r14 + 0xa0);
  }
  *(undefined4 *)(unaff_r14 + 0x68) = 0;
  if (cVar6 == '\0') {
    *(undefined4 *)(unaff_r14 + 0x6c) = DAT_8c10a408._4_4_;
    *(undefined4 *)(unaff_r14 + 0x70) = _DAT_8c10a3f8;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x6c) = CONCAT44(_FUN_8c10a410,DAT_8c10a408._4_4_);
    *(ulonglong *)(unaff_r14 + 0x70) = CONCAT44(PTR_memmove_8c10a3fc,_DAT_8c10a3f8);
  }
  *(undefined4 *)(unaff_r14 + 0x74) = unaff_r13;
  *(undefined4 *)(unaff_r14 + 0x78) = 0;
  return 0;
}



/* FUN_8c10a410 @ 8c10a410 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10a410(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int a6;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 extraout_fr3;
  undefined4 uVar5;
  undefined8 in_xd2;
  byte in_FPSCR_DN;
  byte bVar6;
  byte in_FPSCR_PR;
  byte bVar7;
  byte in_FPSCR_SZ;
  byte bVar8;
  char cVar9;
  
  puVar1 = PTR_memmove_8c10a55c;
  iVar2 = *(int *)(ar4 + 0x7c);
  *ar5 = *(undefined4 *)(ar4 + 0x4c);
  *(undefined1 *)(ar5 + 1) = *(undefined1 *)(ar4 + 0x50);
  *(undefined1 *)(ar5 + 2) = *(undefined1 *)(ar4 + 0x51);
  puVar3 = ar5 + 3;
  a6 = iVar2 * 4;
  (*(code *)puVar1)(puVar3,*(undefined4 *)(ar4 + 0x54),a6,ar7);
  puVar3 = puVar3 + iVar2;
  bVar6 = 0;
  bVar7 = 0;
  bVar8 = (byte)((((uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14
                  ) & DAT_8c10a560 & 0x100000) >> 0x14);
  (*(code *)puVar1)(puVar3,*(undefined4 *)(ar4 + 0x58),a6,ar7);
  cVar9 = (char)((((uint)bVar6 << 0x12 | (uint)bVar7 << 0x13 | (uint)bVar8 << 0x14) & DAT_8c10a560 &
                 0x100000) >> 0x14);
  (*(code *)puVar1)(puVar3 + iVar2,*(undefined4 *)(ar4 + 0x5c),a6,ar7);
  if (cVar9 == '\0') {
    uVar5 = *(undefined4 *)(ar4 + 0x60);
  }
  else {
    in_xd2 = *(undefined8 *)(ar4 + 0x60);
    uVar5 = extraout_fr3;
  }
  puVar4 = (undefined8 *)(puVar3 + iVar2 + iVar2);
  if (cVar9 == '\0') {
    *(undefined4 *)puVar4 = uVar5;
    *(undefined4 *)((int)puVar4 + 4) = *(undefined4 *)(ar4 + 100);
  }
  else {
    *puVar4 = in_xd2;
    *(undefined8 *)((int)puVar4 + 4) = *(undefined8 *)(ar4 + 100);
  }
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(ar4 + 0x68);
  if (cVar9 == '\0') {
    *(undefined4 *)((int)puVar4 + 0xc) = *(undefined4 *)(ar4 + 0x6c);
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(ar4 + 0x70);
  }
  else {
    *(undefined8 *)((int)puVar4 + 0xc) = *(undefined8 *)(ar4 + 0x6c);
    puVar4[2] = *(undefined8 *)(ar4 + 0x70);
  }
  *(undefined4 *)((int)puVar4 + 0x14) = *(undefined4 *)(ar4 + 0x74);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(ar4 + 0x78);
  return 0x78;
}



/* FUN_8c10a4bc @ 8c10a4bc callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10a4bc(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int a6;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  byte in_FPSCR_DN;
  byte bVar6;
  byte in_FPSCR_PR;
  byte bVar7;
  byte in_FPSCR_SZ;
  byte bVar8;
  char cVar9;
  
  puVar1 = PTR_memmove_8c10a55c;
  iVar2 = *(int *)(ar4 + 0x7c);
  *(undefined4 *)(ar4 + 0x4c) = *ar5;
  *(undefined1 *)(ar4 + 0x50) = *(undefined1 *)(ar5 + 1);
  puVar5 = ar5 + 3;
  *(undefined1 *)(ar4 + 0x51) = *(undefined1 *)(ar5 + 2);
  a6 = iVar2 * 4;
  (*(code *)puVar1)(*(undefined4 *)(ar4 + 0x54),puVar5,a6,ar7);
  puVar5 = puVar5 + iVar2;
  bVar6 = 0;
  bVar7 = 0;
  bVar8 = (byte)((((uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14
                  ) & DAT_8c10a560 & 0x100000) >> 0x14);
  (*(code *)puVar1)(*(undefined4 *)(ar4 + 0x58),puVar5,a6,ar7);
  cVar9 = (char)((((uint)bVar6 << 0x12 | (uint)bVar7 << 0x13 | (uint)bVar8 << 0x14) & DAT_8c10a560 &
                 0x100000) >> 0x14);
  (*(code *)puVar1)(*(undefined4 *)(ar4 + 0x5c),puVar5 + iVar2,a6,ar7);
  puVar3 = (undefined8 *)(puVar5 + iVar2 + iVar2);
  if (cVar9 == '\0') {
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)puVar3;
    puVar4 = puVar3 + 1;
    *(undefined4 *)(ar4 + 100) = *(undefined4 *)((int)puVar3 + 4);
  }
  else {
    *(undefined8 *)(ar4 + 0x60) = *puVar3;
    puVar4 = puVar3 + 2;
    *(undefined8 *)(ar4 + 100) = puVar3[1];
  }
  *(undefined4 *)(ar4 + 0x68) = *(undefined4 *)puVar4;
  if (cVar9 == '\0') {
    *(undefined4 *)(ar4 + 0x6c) = *(undefined4 *)((int)puVar4 + 4);
    puVar5 = (undefined4 *)((int)puVar4 + 0xc);
    *(undefined4 *)(ar4 + 0x70) = *(undefined4 *)(puVar4 + 1);
  }
  else {
    *(undefined8 *)(ar4 + 0x6c) = *(undefined8 *)((int)puVar4 + 4);
    puVar5 = (undefined4 *)((int)puVar4 + 0x14);
    *(undefined8 *)(ar4 + 0x70) = *(undefined8 *)((int)puVar4 + 0xc);
  }
  *(undefined4 *)(ar4 + 0x74) = *puVar5;
  *(undefined4 *)(ar4 + 0x78) = puVar5[1];
  return 0x78;
}



/* FUN_8c10a564 @ 8c10a564 callers=1 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c10a564(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  double *pdVar3;
  double *pdVar4;
  uint uVar5;
  double *a4;
  double *a5;
  int iVar6;
  int iVar7;
  double *a5_00;
  double *a4_00;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  double in_dr0;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined8 in_dr12;
  undefined4 uVar18;
  undefined8 in_dr14;
  double dVar19;
  double in_xd2;
  undefined8 in_xd14;
  undefined4 in_PR;
  uint uVar20;
  byte in_FPSCR_CAUSE;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte in_FPSCR_DN;
  byte bVar25;
  byte in_FPSCR_PR;
  byte bVar26;
  byte in_FPSCR_SZ;
  char cVar27;
  undefined1 auStack_3c [16];
  undefined8 uStack_2c;
  undefined8 uStack_24;
  
  puVar1 = PTR_memmove_8c10a5e8;
  if (in_FPSCR_SZ == 0) {
    uStack_24 = CONCAT44((int)in_dr14,(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar8 = &uStack_2c;
    uStack_2c = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar8 = (undefined8 *)auStack_3c;
    uStack_24 = in_xd14;
    uStack_2c = in_dr14;
  }
  *(undefined4 *)((int)puVar8 + -4) = in_PR;
  puVar11 = (undefined4 *)((int)puVar8 + -0x18);
  a5_00 = *(double **)(DAT_8c10a5e6 + ar4);
  if (in_FPSCR_SZ == 0) {
    uVar14 = CONCAT44(*(undefined4 *)(ar4 + 0x70),*(undefined4 *)(ar4 + 0x80));
  }
  else {
    in_xd2 = *(double *)(ar4 + 0x80);
    uVar14 = *(undefined8 *)(ar4 + 0x70);
  }
  iVar7 = *(int *)(ar4 + 0x7c) * 4;
  if (in_FPSCR_PR == 0 && (float)uVar14 < (float)((ulonglong)uVar14 >> 0x20)) {
    if (in_FPSCR_SZ == 0) {
      *(undefined4 *)(ar4 + 0x70) = DAT_8c10a5ec;
    }
    else {
      in_xd2 = (double)CONCAT44(_DAT_8c10a5f0,DAT_8c10a5ec);
      *(double *)(ar4 + 0x70) = in_xd2;
    }
    ar6 = iVar7;
    (*(code *)puVar1)(*(undefined4 *)(ar4 + 0x54),*(undefined4 *)(ar4 + 0x58),iVar7,ar7);
    ar5 = *(undefined4 *)(ar4 + 0x54);
    uVar5 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & _DAT_8c10a5f0;
    in_FPSCR_CAUSE = 0;
    in_FPSCR_DN = 0;
    in_FPSCR_PR = (byte)((uVar5 & 0x80000) >> 0x13);
    in_FPSCR_SZ = (byte)((uVar5 & 0x100000) >> 0x14);
    uVar5 = (*(code *)PTR_FUN_8c10a5f4)(*(undefined4 *)(ar4 + 0xb0),ar5,ar6,ar7);
    if ((uVar5 & 0xff) != 0) {
      return 0;
    }
    *(undefined1 *)(ar4 + 0x51) = 1;
  }
  uVar18 = (undefined4)in_dr14;
  if ((*(int *)(ar4 + 0x38) != 0) && (*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01')) {
    uVar5 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & DAT_8c10a778;
    bVar21 = 0;
    bVar24 = 0;
    bVar22 = (byte)((uVar5 & 0x80000) >> 0x13);
    bVar23 = (byte)((uVar5 & 0x100000) >> 0x14);
    pdVar3 = (double *)(*(code *)PTR_FUN_8c10a77c)(**(undefined4 **)(ar4 + 0x10),ar5,ar6,ar7);
    a4_00 = (double *)((int)pdVar3 + 4);
    iVar6 = iVar7;
    if (*(char *)(ar4 + 0x51) == '\0') {
      bVar25 = 0;
      bVar26 = 0;
      bVar24 = (byte)((((uint)bVar24 << 0x12 | (uint)bVar22 << 0x13 | (uint)bVar23 << 0x14) &
                       DAT_8c10a860 & 0x100000) >> 0x14);
      (*(code *)puVar1)(a4_00,a5_00,iVar7,ar7);
      a4 = a4_00;
      a5 = a5_00;
      puVar11 = (undefined4 *)((int)puVar8 + -0x18);
    }
    else {
      *(float **)((int)puVar8 + -0x18) = (float *)(iVar7 + (int)a4_00);
      a5 = *(double **)(ar4 + 0x30);
      uVar5 = ((uint)bVar21 << 0xc | (uint)bVar24 << 0x12 | (uint)bVar22 << 0x13 |
              (uint)bVar23 << 0x14) & DAT_8c10a778;
      bVar21 = 0;
      bVar25 = 0;
      bVar26 = (byte)((uVar5 & 0x80000) >> 0x13);
      bVar24 = (byte)((uVar5 & 0x100000) >> 0x14);
      a4 = a4_00;
      (*(code *)puVar1)(a4_00,a5,iVar7,ar7);
      puVar2 = PTR_thunk_FUN_8c013dfc_8c10a790;
      puVar1 = PTR_thunk_FUN_8c013cd8_8c10a78c;
      *(undefined4 *)((int)puVar8 + -0xc) = *(undefined4 *)(ar4 + 0x54);
      uVar17 = (undefined4)DAT_8c10a780;
      if (bVar24 == 0) {
        uVar17 = DAT_8c10a780._4_4_;
      }
      if (bVar24 == 0) {
        dVar19 = (double)CONCAT44(DAT_8c10a788,uVar18);
      }
      else {
        dVar19 = (double)CONCAT44(PTR_thunk_FUN_8c013cd8_8c10a78c,DAT_8c10a788);
      }
      if (bVar24 == 0) {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),uVar17);
      }
      puVar9 = (undefined4 *)((int)puVar8 + -0x18);
      if (a4_00 < *(double **)((int)puVar8 + -0x18)) {
        do {
          pdVar4 = *(double **)((int)puVar9 + 0xc);
          *(int *)((int)puVar9 + 0xc) = (int)pdVar4 + 4;
          uVar5 = ((uint)bVar21 << 0xc | (uint)bVar25 << 0x12 | (uint)bVar26 << 0x13 |
                  (uint)bVar24 << 0x14) & DAT_8c10a778;
          if (bVar24 == 0) {
            dVar15 = (double)CONCAT44(*(float *)a4_00,*(undefined4 *)pdVar4);
          }
          else {
            in_xd2 = *pdVar4;
            dVar15 = *a4_00;
          }
          uVar20 = (uVar5 & 0x80000) >> 0x13;
          uVar5 = (uVar5 & 0x100000) >> 0x14;
          cVar27 = (char)uVar5;
          if ((char)uVar20 == '\0') {
            dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) - SUB84(dVar15,0),
                                      SUB84(dVar15,0));
          }
          else {
            dVar15 = dVar15 - dVar15;
          }
          if (cVar27 == '\0') {
            fVar13 = (float)((ulonglong)dVar15 >> 0x20);
            *(float *)a4_00 = fVar13;
            dVar16 = (double)CONCAT44(*(float *)a5_00,fVar13);
            dVar15 = in_xd2;
          }
          else {
            *a4_00 = dVar15;
            dVar16 = *a5_00;
          }
          fVar13 = SUB84(dVar16,0);
          fVar12 = (float)((ulonglong)dVar19 >> 0x20);
          in_xd2 = dVar15;
          if ((char)uVar20 != '\0' || (float)((ulonglong)dVar16 >> 0x20) <= fVar13) {
            if (cVar27 == '\0') {
              fVar13 = *(float *)a4_00;
              *(float *)((int)puVar9 + 8) = fVar13;
            }
            else {
              in_xd2 = *a4_00;
              *(double *)((int)puVar9 + 8) = in_xd2;
            }
            uVar20 = uVar20 << 0x13 | uVar5 << 0x14 | DAT_8c10a794 & 0x3fffff;
            uVar5 = (uVar20 & 0x100000) >> 0x14;
            uVar20 = (uVar20 & 0x80000 | uVar5 << 0x14) & DAT_8c10a778;
            if ((char)uVar5 == '\0') {
              puVar10 = (undefined1 *)((int)puVar9 + -8);
              *(double *)((int)puVar9 + -8) = (double)fVar13;
              dVar15 = (double)CONCAT44(*(float *)a5_00,*(undefined4 *)((int)puVar9 + 8));
            }
            else {
              *(double *)((int)puVar9 + -8) = (double)fVar13;
              puVar10 = (undefined1 *)((int)puVar9 + -0x10);
              *(double *)((int)puVar9 + -0x10) = in_xd2;
              dVar15 = *a5_00;
            }
            uVar5 = (uVar20 & 0x80000) >> 0x13;
            if ((char)uVar5 == '\0') {
              fVar13 = (float)((ulonglong)dVar15 >> 0x20) - SUB84(dVar15,0);
            }
            else {
              fVar13 = (float)((ulonglong)(dVar15 - dVar15) >> 0x20);
            }
            uVar20 = uVar5 << 0x13 | uVar20 & 0xfff00000 | DAT_8c10a794 & 0x3fffff;
            uVar5 = (uVar20 & 0x80000) >> 0x13;
            uVar20 = (uVar5 << 0x13 | uVar20 & 0x100000) & DAT_8c10a778;
            if ((char)uVar5 == '\0') {
              fVar12 = (float)((ulonglong)(double)fVar13 >> 0x20) * fVar12;
            }
            else {
              fVar12 = (float)((ulonglong)((double)fVar13 * dVar19) >> 0x20);
            }
            bVar21 = 0;
            bVar23 = 0;
            bVar22 = (byte)((uVar20 & 0x80000) >> 0x13);
            bVar24 = (byte)(uVar20 >> 0x14);
            (*(code *)puVar1)(a4,a5,iVar6,ar7);
            uVar5 = ((uint)bVar21 << 0xc | (uint)bVar23 << 0x12 | (uint)bVar22 << 0x13 |
                     (uint)bVar24 << 0x14 | DAT_8c10a794) & 0x180000 & DAT_8c10a778;
            bVar24 = 0;
            bVar22 = 0;
            bVar23 = (byte)((uVar5 & 0x80000) >> 0x13);
            bVar21 = (byte)(uVar5 >> 0x14);
            (*(code *)puVar2)(a4,a5,iVar6,ar7);
            uVar5 = (uint)bVar24 << 0xc | (uint)bVar22 << 0x12 | (uint)bVar23 << 0x13 |
                    (uint)bVar21 << 0x14 | DAT_8c10a794;
            bVar26 = (byte)((uVar5 & 0x80000) >> 0x13);
            bVar24 = (byte)((uVar5 & 0x100000) >> 0x14);
          }
          else {
            if (cVar27 == '\0') {
              fVar13 = *(float *)a5_00;
              *(float *)((int)puVar9 + 4) = fVar13;
            }
            else {
              in_xd2 = *a5_00;
              *(double *)((int)puVar9 + 4) = in_xd2;
            }
            uVar20 = uVar20 << 0x13 | uVar5 << 0x14 | DAT_8c10a794 & 0x3fffff;
            uVar5 = (uVar20 & 0x100000) >> 0x14;
            uVar20 = (uVar20 & 0x80000 | uVar5 << 0x14) & DAT_8c10a778;
            if ((char)uVar5 == '\0') {
              puVar10 = (undefined1 *)((int)puVar9 + -8);
              *(double *)((int)puVar9 + -8) = (double)fVar13;
              dVar15 = (double)CONCAT44(*(float *)a4_00,*(undefined4 *)((int)puVar9 + 4));
            }
            else {
              *(double *)((int)puVar9 + -8) = (double)fVar13;
              puVar10 = (undefined1 *)((int)puVar9 + -0x10);
              *(double *)((int)puVar9 + -0x10) = in_xd2;
              dVar15 = *a4_00;
            }
            uVar5 = (uVar20 & 0x80000) >> 0x13;
            if ((char)uVar5 == '\0') {
              fVar13 = (float)((ulonglong)dVar15 >> 0x20) - SUB84(dVar15,0);
            }
            else {
              fVar13 = (float)((ulonglong)(dVar15 - dVar15) >> 0x20);
            }
            uVar20 = uVar5 << 0x13 | uVar20 & 0xfff00000 | DAT_8c10a794 & 0x3fffff;
            uVar5 = (uVar20 & 0x80000) >> 0x13;
            uVar20 = (uVar5 << 0x13 | uVar20 & 0x100000) & DAT_8c10a778;
            if ((char)uVar5 == '\0') {
              fVar12 = (float)((ulonglong)(double)fVar13 >> 0x20) * fVar12;
            }
            else {
              fVar12 = (float)((ulonglong)((double)fVar13 * dVar19) >> 0x20);
            }
            bVar22 = 0;
            bVar24 = 0;
            bVar23 = (byte)((uVar20 & 0x80000) >> 0x13);
            bVar21 = (byte)(uVar20 >> 0x14);
            (*(code *)puVar1)(a4,a5,iVar6,ar7);
            uVar5 = ((uint)bVar22 << 0xc | (uint)bVar24 << 0x12 | (uint)bVar23 << 0x13 |
                     (uint)bVar21 << 0x14 | DAT_8c10a794) & 0x180000 & DAT_8c10a778;
            bVar23 = 0;
            bVar21 = 0;
            bVar24 = (byte)((uVar5 & 0x80000) >> 0x13);
            bVar22 = (byte)(uVar5 >> 0x14);
            (*(code *)puVar2)(a4,a5,iVar6,ar7);
            uVar5 = (uint)bVar23 << 0xc | (uint)bVar21 << 0x12 | (uint)bVar24 << 0x13 |
                    (uint)bVar22 << 0x14 | DAT_8c10a794;
            bVar26 = (byte)((uVar5 & 0x80000) >> 0x13);
            bVar24 = (byte)((uVar5 & 0x100000) >> 0x14);
          }
          bVar25 = 0;
          bVar21 = 0;
          dVar15 = (double)fVar12;
          if (bVar24 == 0) {
            dVar16 = (double)CONCAT44(DAT_8c10a798,DAT_8c10a780._4_4_);
          }
          else {
            dVar16 = (double)CONCAT44(uRam8c10a79c,DAT_8c10a798);
          }
          if (bVar26 == 0) {
            dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) *
                                      (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar15,0));
          }
          else {
            dVar15 = dVar15 * dVar16;
          }
          if (bVar24 == 0) {
            puVar11 = (undefined4 *)(puVar10 + 8);
            pdVar4 = (double *)puVar10;
          }
          else {
            pdVar4 = (double *)(puVar10 + 8);
            puVar11 = (undefined4 *)(puVar10 + 0x10);
          }
          in_dr0 = *pdVar4;
          if (bVar26 == 0) {
            in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) +
                                      (float)((ulonglong)dVar15 >> 0x20),SUB84(in_dr0,0));
          }
          else {
            in_dr0 = in_dr0 + dVar15;
          }
          if (bVar24 == 0) {
            *(float *)a4_00 = (float)in_dr0;
          }
          else {
            *a4_00 = in_xd2;
          }
          a4_00 = (double *)((int)a4_00 + 4);
          a5_00 = (double *)((int)a5_00 + 4);
          puVar9 = puVar11;
        } while (a4_00 < (double *)*puVar11);
      }
    }
    if (bVar24 == 0) {
      *(undefined4 *)((int)puVar11 + 0x10) = *(undefined4 *)(*(int *)(ar4 + 0x30) + iVar7);
    }
    else {
      *(undefined8 *)((int)puVar11 + 0x10) = *(undefined8 *)(*(int *)(ar4 + 0x30) + iVar7);
    }
    cVar27 = (char)((((uint)bVar25 << 0x12 | (uint)bVar26 << 0x13 | (uint)bVar24 << 0x14) &
                     DAT_8c10a860 & 0x100000) >> 0x14);
    FUN_8c10a2cc(a4,a5,iVar6,ar7);
    if (cVar27 == '\0') {
      *(int *)pdVar3 = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *pdVar3 = in_dr0;
    }
    iVar7 = *(int *)(ar4 + 0x30) + *(int *)(ar4 + 0x40) * 4;
    *(int *)(ar4 + 0x30) = iVar7;
    if (iVar7 == *(int *)(ar4 + 0x2c)) {
      *(undefined4 *)(ar4 + 0x30) = *(undefined4 *)(ar4 + 0x28);
    }
    *(int *)(ar4 + 0x38) = *(int *)(ar4 + 0x38) + -1;
    return 1;
  }
  return 0;
}



/* FUN_8c10a80c @ 8c10a80c callers=0 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c10aad2) */
/* WARNING: Removing unreachable block (ram,0x8c10aaa4) */
/* WARNING: Removing unreachable block (ram,0x8c10aac8) */
/* WARNING: Removing unreachable block (ram,0x8c10aaf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c10a80c(int ar4,undefined4 ar5,undefined4 ar6,double *ar7)

{
  char cVar1;
  double *pdVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  double *pdVar8;
  double *a5;
  double *a6;
  int iVar9;
  undefined1 *puVar10;
  float extraout_fr1;
  undefined4 extraout_fr0;
  undefined4 uVar11;
  float fVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 in_fr5;
  double dVar15;
  float fVar16;
  double in_dr6;
  undefined4 in_fr9;
  double dVar17;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd2;
  double dVar19;
  double dVar20;
  double in_xd4;
  double in_xd14;
  bool bVar21;
  undefined4 in_PR;
  byte in_FPSCR_CAUSE;
  byte bVar22;
  byte in_FPSCR_DN;
  byte bVar23;
  byte in_FPSCR_PR;
  byte bVar24;
  byte in_FPSCR_SZ;
  byte bVar25;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  char cVar2;
  float fVar18;
  
  if (in_FPSCR_SZ == 0) {
    puVar10 = auStack_18;
  }
  else {
    puVar10 = auStack_1c;
  }
  *(undefined4 *)(puVar10 + -4) = in_PR;
  if (in_FPSCR_SZ == 0) {
    dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 100),*(undefined4 *)(DAT_8c10a85e + ar4));
  }
  else {
    in_xd2 = *(double *)(DAT_8c10a85e + ar4);
    dVar13 = *(double *)(ar4 + 100);
  }
  if (in_FPSCR_PR != 0 || SUB84(dVar13,0) <= (float)((ulonglong)dVar13 >> 0x20)) {
    *(undefined4 *)(ar4 + 0x4c) = 0;
    *(undefined1 *)(ar4 + 0x50) = 1;
  }
  if (*(char *)(ar4 + 0x50) != '\0') {
    if (*(int *)(ar4 + 0x38) == 0) {
      *(undefined1 *)(ar4 + 0x50) = 0;
    }
    if (*(char *)(ar4 + 0x50) != '\0') {
      FUN_8c10a564(ar4,ar5,ar6,ar7);
      return 1;
    }
  }
  if (*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') {
    uVar7 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & DAT_8c10a9bc;
    bVar22 = 0;
    bVar23 = 0;
    bVar24 = (byte)((uVar7 & 0x80000) >> 0x13);
    bVar25 = (byte)((uVar7 & 0x100000) >> 0x14);
    uVar5 = (*(code *)PTR_FUN_8c10a9c0)(*(undefined4 *)(ar4 + 0xc),5,puVar10 + -0x18,ar7);
    uVar7 = DAT_8c10a9bc;
    if ((uVar5 & 0xff) == 0) {
      return 0;
    }
    iVar9 = *(int *)(ar4 + 0x7c);
    *(undefined4 *)(puVar10 + -0x20) = *(undefined4 *)(puVar10 + -0x18);
    if (bVar25 == 0) {
      uVar11 = *(undefined4 *)*(double **)(puVar10 + -8);
      dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),uVar11);
      in_fr15 = *(float *)*(double **)(puVar10 + -0x10);
      *(undefined4 *)(puVar10 + -0x1c) = uVar11;
    }
    else {
      in_xd2 = **(double **)(puVar10 + -8);
      in_xd14 = **(double **)(puVar10 + -0x10);
      *(double *)(puVar10 + -0x1c) = in_xd2;
    }
    if (bVar25 == 0) {
      uVar11 = *(undefined4 *)*(double **)(puVar10 + -0xc);
      dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),uVar11);
      *(undefined4 *)(ar4 + 0x60) = uVar11;
    }
    else {
      in_xd2 = **(double **)(puVar10 + -0xc);
      *(double *)(ar4 + 0x60) = in_xd2;
    }
    uVar7 = ((uint)bVar22 << 0xc | (uint)bVar23 << 0x12 | (uint)bVar24 << 0x13 |
            (uint)bVar25 << 0x14) & uVar7;
    bVar22 = 0;
    bVar23 = 0;
    bVar24 = (byte)((uVar7 & 0x80000) >> 0x13);
    bVar25 = (byte)((uVar7 & 0x100000) >> 0x14);
    (*(code *)PTR_memmove_8c10a9c4)
              (*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)(puVar10 + -0x14),iVar9,ar7);
    a6 = (double *)(iVar9 << 2);
    uVar7 = ((uint)bVar22 << 0xc | (uint)bVar23 << 0x12 | (uint)bVar24 << 0x13 |
            (uint)bVar25 << 0x14) & DAT_8c10a9bc;
    *(double **)(puVar10 + -0x24) = a6;
    a5 = *(double **)(puVar10 + -0x20);
    bVar22 = 0;
    bVar23 = 0;
    bVar24 = (byte)((uVar7 & 0x80000) >> 0x13);
    bVar25 = (byte)((uVar7 & 0x100000) >> 0x14);
    (*(code *)PTR_memmove_8c10a9c4)(*(undefined4 *)(ar4 + 0x34),a5,a6,ar7);
    if (bVar25 == 0) {
      dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)(puVar10 + -0x1c));
    }
    else {
      in_xd2 = *(double *)(puVar10 + -0x1c);
    }
    if (bVar25 == 0) {
      *(int *)(*(int *)(ar4 + 0x34) + *(int *)(puVar10 + -0x24)) = SUB84(dVar13,0);
    }
    else {
      *(double *)(*(int *)(ar4 + 0x34) + *(int *)(puVar10 + -0x24)) = in_xd2;
    }
    iVar6 = *(int *)(ar4 + 0x34) + *(int *)(ar4 + 0x40) * 4;
    *(int *)(ar4 + 0x34) = iVar6;
    if (iVar6 == *(int *)(ar4 + 0x2c)) {
      *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)(ar4 + 0x28);
    }
    uVar7 = DAT_8c10a9bc;
    *(int *)(ar4 + 0x38) = *(int *)(ar4 + 0x38) + 1;
    puVar4 = PTR_DAT_8c10a9c8;
    *(int *)(ar4 + 0x74) = *(int *)(ar4 + 0x74) + 1;
    if (bVar25 == 0) {
      dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)puVar4);
    }
    else {
      in_xd2 = *(double *)puVar4;
    }
    uVar7 = ((uint)bVar22 << 0xc | (uint)bVar23 << 0x12 | (uint)bVar24 << 0x13 |
            (uint)bVar25 << 0x14) & uVar7;
    uVar5 = (uVar7 & 0x80000) >> 0x13;
    bVar22 = (byte)uVar5;
    uVar7 = (uVar7 & 0x100000) >> 0x14;
    bVar23 = (byte)uVar7;
    if (bVar22 == 0) {
      bVar21 = SUB84(dVar13,0) < in_fr15;
    }
    else {
      bVar21 = dVar13 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (bVar21) {
      ar7 = *(double **)(ar4 + 0x5c);
      pdVar8 = *(double **)(ar4 + 0x58);
      a6 = (double *)(*(int *)(ar4 + 0x34) + *(int *)(ar4 + 0x48) * -4);
      a5 = (double *)(*(int *)(puVar10 + -0x24) + (int)pdVar8);
      if (a6 < *(double **)(ar4 + 0x28)) {
        a6 = (double *)((int)a6 + *(int *)(ar4 + 0x44) * 4);
      }
      if (bVar23 == 0) {
        dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)(ar4 + 100));
      }
      else {
        in_xd2 = *(double *)(ar4 + 100);
      }
      uVar5 = (uVar5 << 0x13 | uVar7 << 0x14) & DAT_8c10a9bc;
      uVar7 = (uVar5 & 0x80000) >> 0x13;
      cVar1 = (char)uVar7;
      uVar5 = uVar5 >> 0x14;
      cVar2 = (char)uVar5;
      if (cVar1 == '\0') {
        fVar12 = SUB84(dVar13,0) + in_fr15;
      }
      else {
        fVar12 = SUB84(dVar13 + (double)CONCAT44(in_fr14,in_fr15),0);
      }
      if (cVar2 == '\0') {
        *(float *)(ar4 + 100) = fVar12;
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 100),*(undefined4 *)(ar4 + 0x88));
      }
      else {
        *(double *)(ar4 + 100) = in_xd2;
        in_xd2 = *(double *)(ar4 + 0x88);
        dVar13 = *(double *)(ar4 + 100);
      }
      fVar12 = (float)((ulonglong)dVar13 >> 0x20);
      if (cVar1 != '\0' || SUB84(dVar13,0) <= fVar12) {
        if (cVar2 == '\0') {
          uVar11 = *(undefined4 *)(DAT_8c10a9b8 + ar4);
          dVar13 = (double)CONCAT44(fVar12,uVar11);
          *(undefined4 *)(ar4 + 100) = uVar11;
        }
        else {
          in_xd2 = *(double *)(DAT_8c10a9b8 + ar4);
          *(double *)(ar4 + 100) = in_xd2;
        }
      }
      dVar15 = in_xd14;
      if (cVar2 == '\0') {
        dVar15 = (double)CONCAT44(in_fr15,in_fr5);
      }
      uVar7 = (uVar7 << 0x13 | uVar5 << 0x14) & DAT_8c10a9bc;
      if (cVar2 == '\0') {
        dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)(ar4 + 100));
      }
      else {
        in_xd2 = *(double *)(ar4 + 100);
      }
      uVar5 = (uVar7 & 0x80000) >> 0x13;
      cVar1 = (char)uVar5;
      uVar7 = uVar7 >> 0x14;
      cVar2 = (char)uVar7;
      if (cVar1 == '\0') {
        dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) / SUB84(dVar13,0),
                                  SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 / dVar13;
      }
      if (cVar2 == '\0') {
        dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)(ar4 + 0x70));
      }
      else {
        in_xd2 = *(double *)(ar4 + 0x70);
      }
      fVar12 = (float)((ulonglong)dVar15 >> 0x20);
      if (cVar1 == '\0') {
        dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),SUB84(dVar13,0) + fVar12);
      }
      else {
        dVar13 = dVar13 + dVar15;
      }
      if (cVar2 == '\0') {
        *(int *)(ar4 + 0x70) = SUB84(dVar13,0);
        dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)(ar4 + 0x90));
        dVar15 = (double)CONCAT44(fVar12,DAT_8c10a9cc);
        dVar17 = (double)CONCAT44(fVar12,in_fr9);
      }
      else {
        *(double *)(ar4 + 0x70) = in_xd2;
        in_xd2 = *(double *)(ar4 + 0x90);
        in_xd4 = (double)CONCAT44(_DAT_8c10a9d0,DAT_8c10a9cc);
        dVar17 = dVar15;
      }
      fVar12 = SUB84(dVar15,0);
      if (cVar1 == '\0') {
        fVar18 = (float)((ulonglong)dVar17 >> 0x20) * SUB84(dVar13,0);
        dVar17 = (double)CONCAT44(fVar18,SUB84(dVar17,0));
        bVar21 = fVar12 < fVar18;
      }
      else {
        dVar17 = dVar17 * dVar13;
        bVar21 = dVar15 < dVar17;
      }
      dVar20 = dVar17;
      if ((bVar21) && (dVar20 = in_xd4, cVar2 == '\0')) {
        dVar20 = (double)CONCAT44(fVar12,SUB84(dVar17,0));
      }
      uVar7 = (uVar5 << 0x13 | uVar7 << 0x14) & DAT_8c10a9bc;
      if (cVar2 == '\0') {
        in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),(int)((ulonglong)dVar15 >> 0x20))
        ;
        dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),
                                  *(undefined4 *)(DAT_8c10a9ba + ar4));
      }
      else {
        in_xd2 = *(double *)(DAT_8c10a9ba + ar4);
      }
      bVar22 = (byte)((uVar7 & 0x80000) >> 0x13);
      bVar23 = (byte)(uVar7 >> 0x14);
      if (bVar22 == 0) {
        fVar18 = SUB84(in_dr6,0) / SUB84(dVar13,0);
        in_dr6 = (double)(ulonglong)(uint)fVar18;
        bVar21 = fVar12 < fVar18;
      }
      else {
        in_dr6 = in_dr6 / dVar13;
        bVar21 = dVar15 < in_dr6;
      }
      if ((bVar21) && (bVar23 == 0)) {
        in_dr6 = (double)((ulonglong)dVar15 & 0xffffffff);
      }
      if (bVar23 == 0) {
        dVar15 = (double)(ulonglong)_DAT_8c10a9d0;
      }
      uVar11 = SUB84(dVar15,0);
      fVar12 = extraout_fr1;
      pdVar3 = (double *)PTR_DAT_8c10ab54;
      while (PTR_DAT_8c10ab54 = (undefined *)pdVar3, pdVar8 < a5) {
        if (bVar23 == 0) {
          in_dr6 = (double)CONCAT44(*(undefined4 *)a6,SUB84(in_dr6,0));
        }
        else {
          in_dr6 = *a6;
        }
        iVar6 = (int)DAT_8c10aa46;
        uVar7 = ((uint)bVar22 << 0x13 | (uint)bVar23 << 0x14) & DAT_8c10aa4c;
        if (bVar23 == 0) {
          dVar13 = (double)CONCAT44(*(undefined4 *)ar7,*(undefined4 *)(iVar6 + ar4));
        }
        else {
          dVar13 = *ar7;
          in_xd2 = *(double *)(iVar6 + ar4);
        }
        uVar5 = (uVar7 & 0x80000) >> 0x13;
        cVar1 = (char)uVar5;
        uVar7 = uVar7 >> 0x14;
        cVar2 = (char)uVar7;
        if (cVar1 == '\0') {
          fVar18 = (float)((ulonglong)dVar13 >> 0x20) + SUB84(dVar13,0);
          dVar13 = (double)CONCAT44(fVar18,SUB84(dVar13,0));
          bVar21 = (float)((ulonglong)in_dr6 >> 0x20) < fVar18;
        }
        else {
          dVar13 = dVar13 + dVar13;
          fVar18 = (float)((ulonglong)dVar13 >> 0x20);
          bVar21 = in_dr6 < dVar13;
        }
        if (bVar21) {
          if (cVar2 == '\0') {
            in_dr6 = (double)CONCAT44(*(undefined4 *)ar7,SUB84(in_dr6,0));
            dVar13 = (double)CONCAT44(fVar18,*(undefined4 *)(iVar6 + ar4));
          }
          else {
            in_dr6 = *ar7;
            in_xd2 = *(double *)(iVar6 + ar4);
          }
          if (cVar1 == '\0') {
            in_dr6 = (double)CONCAT44((float)((ulonglong)in_dr6 >> 0x20) + SUB84(dVar13,0),
                                      SUB84(in_dr6,0));
          }
          else {
            in_dr6 = in_dr6 + dVar13;
          }
        }
        if (cVar2 == '\0') {
          dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)pdVar8);
        }
        else {
          in_xd2 = *pdVar8;
        }
        uVar7 = (uVar5 << 0x13 | uVar7 << 0x14) & DAT_8c10aa4c;
        uVar11 = (undefined4)((ulonglong)in_dr6 >> 0x20);
        dVar17 = in_dr6;
        if (cVar2 == '\0') {
          dVar17 = (double)CONCAT44(uVar11,SUB84(dVar15,0));
        }
        uVar5 = (uVar7 & 0x80000) >> 0x13;
        cVar1 = (char)uVar5;
        uVar7 = uVar7 >> 0x14;
        cVar2 = (char)uVar7;
        iVar6 = (int)DAT_8c10aa48;
        if (cVar1 == '\0') {
          dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) - SUB84(dVar13,0),
                                    SUB84(dVar17,0));
        }
        else {
          dVar17 = dVar17 - dVar13;
        }
        if (cVar2 == '\0') {
          dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)(iVar6 + ar4));
        }
        else {
          in_xd2 = *(double *)(iVar6 + ar4);
        }
        if (cVar1 == '\0') {
          bVar21 = (float)((ulonglong)dVar17 >> 0x20) < SUB84(dVar13,0);
        }
        else {
          bVar21 = dVar17 < dVar13;
        }
        if (bVar21) {
          if (cVar2 == '\0') {
            dVar17 = (double)CONCAT44(*(undefined4 *)(iVar6 + ar4),SUB84(dVar17,0));
          }
          else {
            dVar17 = *(double *)(iVar6 + ar4);
          }
        }
        if (cVar2 == '\0') {
          dVar13 = (double)CONCAT44(DAT_8c10aa50,SUB84(dVar13,0));
        }
        else {
          dVar13 = (double)CONCAT44(uRam8c10aa54,DAT_8c10aa50);
        }
        uVar7 = (uVar5 << 0x13 | uVar7 << 0x14) & DAT_8c10aa4c;
        uVar5 = (uVar7 & 0x80000) >> 0x13;
        cVar1 = (char)uVar5;
        uVar7 = uVar7 >> 0x14;
        cVar2 = (char)uVar7;
        fVar18 = (float)((ulonglong)dVar17 >> 0x20);
        if (cVar1 == '\0') {
          bVar21 = (float)((ulonglong)dVar13 >> 0x20) < fVar18;
        }
        else {
          bVar21 = dVar13 < dVar17;
        }
        if (cVar2 == '\0') {
          dVar13 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar13,0));
        }
        else {
          dVar13 = *pdVar8;
        }
        uVar14 = (undefined4)((ulonglong)dVar13 >> 0x20);
        dVar19 = dVar17;
        if (bVar21) {
          if (cVar2 == '\0') {
            dVar13 = (double)CONCAT44(uVar14,fVar18);
            dVar19 = in_xd2;
          }
          if (cVar1 == '\0') {
            dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),
                                      SUB84(dVar13,0) * (float)((ulonglong)dVar20 >> 0x20));
          }
          else {
            dVar13 = dVar13 * dVar20;
          }
        }
        else {
          if (cVar2 == '\0') {
            dVar13 = (double)CONCAT44(uVar14,fVar18);
            dVar19 = in_xd2;
          }
          if (cVar1 == '\0') {
            dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),
                                      SUB84(dVar13,0) * SUB84(in_dr6,0));
          }
          else {
            dVar13 = dVar13 * in_dr6;
          }
        }
        uVar7 = (uVar5 << 0x13 | uVar7 << 0x14) & DAT_8c10aa4c;
        uVar5 = (uVar7 & 0x80000) >> 0x13;
        cVar1 = (char)uVar5;
        uVar7 = uVar7 >> 0x14;
        cVar2 = (char)uVar7;
        if (cVar1 == '\0') {
          dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) + SUB84(dVar13,0),
                                    SUB84(dVar13,0));
        }
        else {
          dVar13 = dVar13 + dVar13;
        }
        in_xd2 = dVar13;
        dVar15 = in_dr6;
        if (cVar2 == '\0') {
          uVar14 = (undefined4)((ulonglong)dVar13 >> 0x20);
          dVar13 = (double)CONCAT44(uVar14,uVar14);
          in_xd2 = dVar19;
          dVar15 = (double)CONCAT44(uVar11,SUB84(dVar17,0));
        }
        if (cVar1 == '\0') {
          dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) - SUB84(dVar13,0),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 - dVar13;
        }
        uVar11 = (undefined4)((ulonglong)dVar13 >> 0x20);
        if (cVar2 == '\0') {
          *(undefined4 *)pdVar8 = uVar11;
          dVar13 = (double)CONCAT44(uVar11,DAT_8c10aa50);
        }
        else {
          *pdVar8 = dVar13;
          in_xd2 = (double)CONCAT44(uRam8c10aa54,DAT_8c10aa50);
        }
        fVar18 = SUB84(dVar13,0);
        fVar16 = (float)((ulonglong)dVar15 >> 0x20);
        if (cVar1 == '\0') {
          bVar21 = fVar18 < fVar16;
        }
        else {
          bVar21 = dVar13 < dVar15;
        }
        if (bVar21) {
          dVar13 = dVar15;
          if (cVar2 == '\0') {
            fVar12 = *(float *)(DAT_8c10aa4a + ar4);
            dVar13 = (double)CONCAT44(fVar16,fVar18);
          }
          if (cVar1 == '\0') {
            dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) * fVar12,SUB84(dVar13,0));
          }
          else {
            dVar13 = dVar13 * (double)CONCAT44(extraout_fr0,fVar12);
          }
        }
        else {
          dVar13 = dVar15;
          if (cVar2 == '\0') {
            fVar12 = *(float *)(DAT_8c10ab4c + ar4);
            dVar13 = (double)CONCAT44(fVar16,fVar18);
          }
          if (cVar1 == '\0') {
            dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) / fVar12,SUB84(dVar13,0));
          }
          else {
            dVar13 = dVar13 / (double)CONCAT44(extraout_fr0,fVar12);
          }
        }
        pdVar8 = (double *)((int)pdVar8 + 4);
        a6 = (double *)((int)a6 + 4);
        uVar7 = (uVar5 << 0x13 | uVar7 << 0x14) & DAT_8c10ab50;
        bVar22 = (byte)((uVar7 & 0x80000) >> 0x13);
        bVar23 = (byte)(uVar7 >> 0x14);
        if (bVar22 == 0) {
          dVar15 = (double)(ulonglong)(uint)(SUB84(dVar15,0) + (float)((ulonglong)dVar13 >> 0x20));
        }
        else {
          dVar15 = dVar15 + dVar13;
        }
        uVar11 = SUB84(dVar15,0);
        ar7 = (double *)((int)ar7 + 4);
        pdVar3 = (double *)PTR_DAT_8c10ab54;
      }
      if (bVar23 == 0) {
        dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)(ar4 + 0x6c));
      }
      else {
        in_xd2 = *(double *)(ar4 + 0x6c);
      }
      uVar7 = ((uint)bVar22 << 0x13 | (uint)bVar23 << 0x14) & DAT_8c10ab50;
      uVar5 = (uVar7 & 0x80000) >> 0x13;
      cVar1 = (char)uVar5;
      uVar7 = uVar7 >> 0x14;
      cVar2 = (char)uVar7;
      if (cVar1 == '\0') {
        dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),SUB84(dVar13,0) + in_fr15);
      }
      else {
        dVar13 = dVar13 + (double)CONCAT44(in_fr14,in_fr15);
      }
      if (cVar2 == '\0') {
        *(float *)(ar4 + 0x6c) = SUB84(dVar13,0);
        dVar15 = (double)CONCAT44(*(undefined4 *)pdVar3,uVar11);
      }
      else {
        *(double *)(ar4 + 0x6c) = in_xd2;
        dVar15 = *pdVar3;
      }
      fVar12 = (float)((ulonglong)dVar15 >> 0x20);
      if (cVar1 == '\0') {
        bVar21 = fVar12 < SUB84(dVar13,0);
      }
      else {
        bVar21 = dVar15 < dVar13;
      }
      if (bVar21) {
        if (cVar2 == '\0') {
          *(float *)(ar4 + 0x6c) = fVar12;
        }
        else {
          *(double *)(ar4 + 0x6c) = dVar15;
        }
      }
      if (cVar2 == '\0') {
        in_xd14 = (double)CONCAT44(in_fr15,SUB84(dVar15,0));
      }
      uVar7 = (uVar5 << 0x13 | uVar7 << 0x14) & DAT_8c10ab50;
      if (cVar2 == '\0') {
        dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)(ar4 + 0x6c));
      }
      else {
        in_xd2 = *(double *)(ar4 + 0x6c);
      }
      uVar5 = (uVar7 & 0x80000) >> 0x13;
      cVar1 = (char)uVar5;
      uVar7 = uVar7 >> 0x14;
      cVar2 = (char)uVar7;
      if (cVar1 == '\0') {
        in_xd14 = (double)CONCAT44((float)((ulonglong)in_xd14 >> 0x20) / SUB84(dVar13,0),
                                   SUB84(in_xd14,0));
      }
      else {
        in_xd14 = in_xd14 / dVar13;
      }
      if (cVar2 == '\0') {
        dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)(ar4 + 0x70));
      }
      else {
        in_xd2 = *(double *)(ar4 + 0x70);
      }
      fVar12 = (float)((ulonglong)in_xd14 >> 0x20);
      if (cVar1 == '\0') {
        dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),SUB84(dVar13,0) + fVar12);
      }
      else {
        dVar13 = dVar13 + in_xd14;
      }
      if (cVar2 == '\0') {
        *(int *)(ar4 + 0x70) = SUB84(dVar13,0);
      }
      else {
        *(double *)(ar4 + 0x70) = in_xd2;
      }
      fVar18 = (float)iVar9;
      dVar15 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),fVar18);
      if (iVar9 < 0) {
        if (cVar1 == '\0') {
          dVar15 = (double)CONCAT44(DAT_8c10ab58,fVar18 + DAT_8c10ab58);
        }
        else {
          dVar15 = (double)CONCAT44(DAT_8c10ab58,fVar18) + (double)CONCAT44(DAT_8c10ab58,fVar18);
        }
      }
      if (cVar1 == '\0') {
        fVar12 = SUB84(in_xd14,0) * (fVar12 / SUB84(dVar15,0));
      }
      else {
        fVar12 = SUB84((in_xd14 / dVar15) * (in_xd14 / dVar15),0);
      }
      if (cVar2 == '\0') {
        dVar17 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c10ab5c,fVar12);
      }
      else {
        dVar17 = *(double *)PTR_DAT_8c10ab5c;
      }
      fVar12 = (float)((ulonglong)dVar17 >> 0x20);
      dVar20 = dVar17;
      if (cVar2 == '\0') {
        dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),fVar12);
        dVar20 = in_xd2;
      }
      if ((cVar1 == '\0' && fVar12 < SUB84(dVar17,0)) && (cVar2 == '\0')) {
        dVar17 = (double)CONCAT44(fVar12,fVar12);
      }
      uVar7 = (uVar5 << 0x13 | uVar7 << 0x14) & DAT_8c10ab50;
      bVar22 = (byte)((uVar7 & 0x80000) >> 0x13);
      bVar23 = (byte)(uVar7 >> 0x14);
      dVar13 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),-SUB84(dVar15,0));
      if (bVar22 == 0) {
        bVar21 = SUB84(dVar17,0) < -SUB84(dVar15,0);
      }
      else {
        bVar21 = dVar17 < dVar13;
      }
      if (bVar21) {
        if (bVar23 == 0) {
          uVar11 = (undefined4)((ulonglong)dVar17 >> 0x20);
          dVar17 = (double)CONCAT44(uVar11,uVar11);
        }
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),-SUB84(dVar17,0));
      }
      for (pdVar8 = *(double **)(ar4 + 0x58); pdVar8 < a5; pdVar8 = (double *)((int)pdVar8 + 4)) {
        if (bVar23 == 0) {
          dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)pdVar8);
        }
        else {
          dVar20 = *pdVar8;
        }
        uVar7 = ((uint)bVar22 << 0x13 | (uint)bVar23 << 0x14) & DAT_8c10ab50;
        bVar22 = (byte)((uVar7 & 0x80000) >> 0x13);
        bVar23 = (byte)(uVar7 >> 0x14);
        if (bVar22 == 0) {
          dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),
                                    SUB84(dVar13,0) + SUB84(dVar17,0));
        }
        else {
          dVar13 = dVar13 + dVar17;
        }
        if (bVar23 == 0) {
          *(int *)pdVar8 = SUB84(dVar13,0);
        }
        else {
          *pdVar8 = dVar20;
        }
      }
    }
    uVar7 = ((uint)bVar22 << 0x13 | (uint)bVar23 << 0x14) & DAT_8c10ab50;
    dVar15 = (double)((ulonglong)dVar13 & 0xffffffff00000000);
    if ((in_fr15 == 0.0) && (*(uint *)(DAT_8c10ab4e + ar4) < *(uint *)(ar4 + 0x74))) {
      *(int *)(ar4 + 0x78) = *(int *)(ar4 + 0x78) + 1;
      puVar4 = PTR_DAT_8c10ab60;
      iVar9 = *(int *)(ar4 + 0x68) + 1;
      *(int *)(ar4 + 0x68) = iVar9;
      if (*(int *)puVar4 < iVar9) {
        *(int *)(ar4 + 0x68) = *(int *)puVar4;
      }
    }
    else {
      *(undefined4 *)(ar4 + 0x78) = 0;
    }
    iVar9 = *(int *)(ar4 + 0x4c);
    if (iVar9 == 0) {
      FUN_8c10a564(ar4,a5,a6,ar7);
    }
    else if (iVar9 == 1) {
      if (*(int *)(DAT_8c10ac5c + ar4) < *(int *)(ar4 + 0x78)) {
        *(undefined4 *)(ar4 + 0x4c) = 2;
        *(undefined1 *)(ar4 + 0x50) = 1;
        FUN_8c10a564(ar4,a5,a6,ar7);
      }
      else if (*(int *)(ar4 + 0x38) == *(int *)(ar4 + 0x3c)) {
        FUN_8c10a564(ar4,a5,a6,ar7);
      }
    }
    else if (iVar9 == 2) {
      if ((char)(uVar7 >> 0x14) == '\0') {
        dVar15 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)PTR_DAT_8c10ac64);
      }
      if ((char)((uVar7 & 0x80000 & DAT_8c10ac68) >> 0x13) == '\0') {
        bVar21 = SUB84(dVar15,0) < in_fr15;
      }
      else {
        bVar21 = dVar15 < (double)CONCAT44(in_fr14,in_fr15);
      }
      if (bVar21) {
        *(undefined4 *)(ar4 + 0x4c) = 1;
      }
      else {
        FUN_8c10a564(ar4,a5,a6,ar7);
      }
    }
  }
  if ((*(char *)(ar4 + 0x50) == '\0') &&
     (*(int *)(*(int *)(**(int **)(ar4 + 0xc) + 0x40) + (*(int **)(ar4 + 0xc))[1] * 4) ==
      *(int *)(**(int **)(ar4 + 0xc) + 0x3c))) {
    return 0;
  }
  return 1;
}



/* FUN_8c10abf4 @ 8c10abf4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10abf4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  (**(code **)(iVar2 + 0x18))(iVar2,ar4[10]);
  (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x16]);
  uVar1 = (*(code *)PTR_FUN_8c10ac6c)(*(undefined4 *)((int)DAT_8c10ac5e + (int)ar4),iVar2);
  return uVar1;
}



/* FUN_8c10abfa @ 8c10abfa callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10abfa(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *unaff_r13;
  int a4;
  
  a4 = *unaff_r13;
  (**(code **)(a4 + 0x18))(a4,unaff_r13[10],ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,unaff_r13[0x16],ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c10ac6c)(*(undefined4 *)((int)DAT_8c10ac5e + (int)unaff_r13),a4);
  return uVar1;
}



/* FUN_8c10ac3c @ 8c10ac3c callers=0 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10ac3c(undefined4 ar4,undefined4 ar5,int ar6,int *ar7)

{
  int in_r0;
  uint uVar1;
  int iVar2;
  int unaff_r14;
  char in_T;
  
  if (in_T == '\x01') {
    *(undefined1 *)(unaff_r14 + 0x50) = 1;
    return 1;
  }
  if (in_r0 == 3) {
    if (ar6 != 0) {
      FUN_8c10a410(unaff_r14,*ar7 + ar6,ar6,ar7);
    }
    iVar2 = *ar7 + (*(int *)(unaff_r14 + 0x7c) * 3 + 10) * 4;
  }
  else {
    if (in_r0 != 4) {
      if (in_r0 == DAT_8c10ac60) {
        *ar7 = *(int *)(unaff_r14 + 0x38);
        return 1;
      }
      if (in_r0 == DAT_8c10ac62) {
        FUN_8c10abf4(unaff_r14,ar5,ar6,ar7);
        (*(code *)PTR_FUN_8c10acfc)(unaff_r14,ar5,ar6,ar7);
        return 1;
      }
      return 0;
    }
    if (ar6 == 0) {
      uVar1 = FUN_8c10a308(unaff_r14,ar5,0,ar7);
      if ((uVar1 & 0xff) == 0) {
        return 1;
      }
      return 0;
    }
    FUN_8c10a4bc(unaff_r14,*ar7 + ar6,ar6,ar7);
    iVar2 = *ar7 + (*(int *)(unaff_r14 + 0x7c) * 3 + 10) * 4;
  }
  *ar7 = iVar2;
  return 1;
}



/* FUN_8c10ad00 @ 8c10ad00 callers=0 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c10ae4a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint FUN_8c10ad00(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 a6;
  uint uVar8;
  int a4;
  double in_dr0;
  double in_dr2;
  undefined8 uVar9;
  double dVar10;
  undefined8 in_xd2;
  short sVar11;
  byte in_FPSCR_CAUSE;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte in_FPSCR_DN;
  byte bVar15;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  puVar2 = PTR_FUN_8c10ae94;
  a4 = *ar4;
  (*(code *)PTR_FUN_8c10ae94)(ar4,9,ar6,ar7);
  uVar8 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c10ae98._4_4_;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar8 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar8 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    uVar8 = (uint)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar8 = (uint)in_dr0;
  }
  uVar8 = uVar8 & 0xffff;
  ar4[0x1f] = uVar8;
  iVar5 = uVar8 + 1;
  *(short *)(*(int *)ar4[4] + 0xc) = (short)iVar5 * 4;
  (*(code *)puVar2)(ar4,1,ar6,ar7);
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & DAT_8c10ae98._4_4_;
  bVar13 = 0;
  bVar15 = 0;
  bVar14 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar12 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar14 == 0) {
    uVar6 = (uint)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar6 = (uint)in_dr0;
  }
  *(uint *)((int)DAT_8c10ae86 + (int)ar4) = uVar6 & 0xffff;
  (*(code *)puVar2)(ar4,2,ar6,ar7);
  uVar6 = ((uint)bVar13 << 0xc | (uint)bVar15 << 0x12 | (uint)bVar14 << 0x13 | (uint)bVar12 << 0x14)
          & DAT_8c10ae98._4_4_;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    uVar6 = (uint)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar6 = (uint)in_dr0;
  }
  ar4[0xf] = uVar6 & 0xffff;
  ar4[0x10] = iVar5;
  ar4[0x11] = iVar5 * ar4[0xf];
  ar4[0x12] = ar4[0x10] * (ar4[0x27] + 1);
  iVar5 = (**(code **)(a4 + 0x14))(a4,ar4[0x11],4,ar7);
  ar4[10] = iVar5;
  ar4[0xb] = ar4[0x11] * 4 + ar4[10];
  uVar7 = 4;
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & DAT_8c10ae98._4_4_;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  iVar5 = (**(code **)(a4 + 0x14))(a4,uVar8 * 3,4,ar7);
  ar4[0x16] = iVar5;
  iVar5 = ar4[0x16] + uVar8 * 4;
  ar4[0x17] = iVar5;
  uVar6 = DAT_8c10ae98._4_4_;
  ar4[0x15] = uVar8 * 4 + iVar5;
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & uVar6;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  (*(code *)puVar2)(ar4,3,uVar7,ar7);
  if (bVar14 == 0) {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),_DAT_8c10aeac);
  }
  else {
    in_xd2 = CONCAT44(_DAT_8c10aeb0,_DAT_8c10aeac);
  }
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & DAT_8c10ae98._4_4_;
  bVar12 = 0;
  bVar14 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar13 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr2,0),SUB84(in_dr0,0));
  }
  else {
    in_dr0 = in_dr0 * in_dr2;
  }
  if (bVar13 == 0) {
    *(int *)((int)DAT_8c10ae88 + (int)ar4) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(double *)((int)DAT_8c10ae88 + (int)ar4) = in_dr0;
  }
  (*(code *)puVar2)(ar4,4,uVar7,ar7);
  if (bVar13 == 0) {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),_DAT_8c10aeac);
  }
  else {
    in_xd2 = CONCAT44(_DAT_8c10aeb0,_DAT_8c10aeac);
  }
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar14 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar13 << 0x14)
          & DAT_8c10ae98._4_4_;
  bVar14 = 0;
  bVar12 = 0;
  bVar13 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar15 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar13 == 0) {
    in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr2,0),SUB84(in_dr0,0));
  }
  else {
    in_dr0 = in_dr0 * in_dr2;
  }
  if (bVar15 == 0) {
    *(int *)((int)DAT_8c10ae8a + (int)ar4) = (int)((ulonglong)in_dr0 >> 0x20);
    uVar9 = CONCAT44(_DAT_8c10aeb0,SUB84(in_dr2,0));
  }
  else {
    *(double *)((int)DAT_8c10ae8a + (int)ar4) = in_dr0;
    uVar9 = CONCAT44(DAT_8c10aeb4,_DAT_8c10aeb0);
  }
  if (bVar15 == 0) {
    *(int *)((int)DAT_8c10ae8c + (int)ar4) = (int)((ulonglong)uVar9 >> 0x20);
  }
  else {
    *(undefined8 *)((int)DAT_8c10ae8c + (int)ar4) = uVar9;
  }
  (*(code *)puVar2)(ar4,5,uVar7,ar7);
  iVar5 = (int)DAT_8c10ae8e;
  uVar6 = ((uint)bVar14 << 0xc | (uint)bVar12 << 0x12 | (uint)bVar13 << 0x13 | (uint)bVar15 << 0x14)
          & DAT_8c10ae98._4_4_;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    sVar11 = (short)(int)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    sVar11 = (short)(int)in_dr0;
  }
  if (bVar14 == 0) {
    *(float *)(iVar5 + (int)ar4) = (float)(int)sVar11;
    dVar10 = (double)CONCAT44(_DAT_8c10aeb8,*(undefined4 *)(iVar5 + (int)ar4));
  }
  else {
    *(undefined8 *)(iVar5 + (int)ar4) = in_xd2;
    dVar10 = (double)CONCAT44(DAT_8c10aebc,_DAT_8c10aeb8);
  }
  if (bVar15 == 0) {
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) / SUB84(dVar10,0),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 / dVar10;
  }
  if (bVar14 == 0) {
    *(int *)((int)DAT_8c10ae90 + (int)ar4) = (int)((ulonglong)dVar10 >> 0x20);
  }
  else {
    *(double *)((int)DAT_8c10ae90 + (int)ar4) = dVar10;
  }
  (*(code *)puVar2)(ar4,6,uVar7,ar7);
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & DAT_8c10ae98._4_4_;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    sVar11 = (short)(int)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    sVar11 = (short)(int)in_dr0;
  }
  *(int *)((int)DAT_8c10ae92 + (int)ar4) = (int)sVar11;
  (*(code *)puVar2)(ar4,7,uVar7,ar7);
  puVar4 = PTR_DAT_8c10af74;
  puVar3 = PTR_DAT_8c10af70;
  if (bVar14 == 0) {
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),_DAT_8c10aec4);
  }
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & DAT_8c10af68;
  cVar1 = (char)((uVar6 & 0x100000) >> 0x14);
  if ((char)((uVar6 & 0x80000) >> 0x13) == '\0') {
    in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar10,0),SUB84(in_dr0,0));
  }
  else {
    in_dr0 = in_dr0 * dVar10;
  }
  if (cVar1 == '\0') {
    *(int *)((int)DAT_8c10af5e + (int)ar4) = (int)((ulonglong)in_dr0 >> 0x20);
    uVar9 = CONCAT44(DAT_8c10af6c,SUB84(dVar10,0));
  }
  else {
    *(double *)((int)DAT_8c10af5e + (int)ar4) = in_dr0;
    uVar9 = CONCAT44(PTR_DAT_8c10af70,DAT_8c10af6c);
  }
  iVar5 = (int)DAT_8c10af60;
  if (cVar1 == '\0') {
    *(int *)(iVar5 + (int)ar4) = (int)((ulonglong)uVar9 >> 0x20);
  }
  else {
    *(undefined8 *)(iVar5 + (int)ar4) = uVar9;
  }
  *(undefined **)(iVar5 + 4 + (int)ar4) = puVar3;
  puVar3 = PTR_PTR_8c10af78;
  *(undefined **)(iVar5 + 8 + (int)ar4) = puVar4;
  *(undefined **)(iVar5 + 0xc + (int)ar4) = puVar3;
  (*(code *)puVar2)(ar4,8,uVar7,ar7);
  a6 = *(undefined4 *)((int)DAT_8c10af62 + (int)ar4);
  uVar7 = (*(code *)PTR_FUN_8c10af80)(a4,uVar8,a6,ar7);
  *(undefined4 *)((int)DAT_8c10af64 + (int)ar4) = uVar7;
  uVar8 = FUN_8c10a308(ar4,uVar8,a6,ar7);
  return (uint)((uVar8 & 0xff) != 0);
}



/* FUN_8c10af3c @ 8c10af3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10af3c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c10af90)(ar4,ar5,5,1);
  return uVar1;
}



/* FUN_8c10af94 @ 8c10af94 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c10af94(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)DAT_8c10b0cc;
  return (*(int *)(iVar1 + ar4) * 2 + ar4 + (int)DAT_8c10b0ce + 3U & 0xfffffffc) +
         (*(int *)(iVar1 + -0x1c + ar4) + 1) * 4 + (*(int *)(iVar1 + -0x14 + ar4) + 1) * 4;
}



/* FUN_8c10afbe @ 8c10afbe callers=2 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c10afbe(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_8c10af94(ar4,ar5,ar6,ar7);
  iVar2 = (int)DAT_8c10b0d0;
  return (iVar1 + *(int *)(iVar2 + ar4) * 2 + 3U & 0xfffffffc) +
         (*(int *)(iVar2 + -0x1c + ar4) + 1) * 4 + (*(int *)(iVar2 + -0x14 + ar4) + 1) * 4;
}



/* FUN_8c10aff4 @ 8c10aff4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10aff4(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar5 + 4);
  uStack_c = 0;
  if (ar5[1] != 0) {
    uStack_c = *(undefined4 *)(ar5[1] + 8);
  }
  uVar1 = (**(code **)(*ar5 + 8))(ar4,&uStack_10,ar6,ar7);
  return uVar1;
}



/* FUN_8c10b02a @ 8c10b02a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10b02a(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar5 + 4);
  uStack_c = 0;
  if (ar5[1] != 0) {
    uStack_c = *(undefined4 *)(ar5[1] + 8);
  }
  uVar1 = (**(code **)(*ar5 + 0xc))(ar4,&uStack_10,ar6,ar7);
  return uVar1;
}



/* FUN_8c10b060 @ 8c10b060 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10b060(undefined4 ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar6 + 4);
  uStack_c = 0;
  if (ar6[1] != 0) {
    uStack_c = *(undefined4 *)(ar6[1] + 8);
  }
  uVar1 = (**(code **)(*ar6 + 0x10))(ar4,ar5,&uStack_10,ar7);
  return uVar1;
}



/* FUN_8c10b096 @ 8c10b096 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10b096(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar4 + 4);
  uStack_c = 0;
  if (ar4[1] != 0) {
    uStack_c = *(undefined4 *)(ar4[1] + 8);
  }
  uVar1 = (**(code **)(*ar4 + 0x14))(&uStack_10,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c10b0d8 @ 8c10b0d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10b0d8(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar4 + 4);
  uStack_c = 0;
  if (ar4[1] != 0) {
    uStack_c = *(undefined4 *)(ar4[1] + 8);
  }
  uVar1 = (**(code **)(*ar4 + 0x18))(&uStack_10,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c10b10e @ 8c10b10e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10b10e(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar4 + 4);
  uStack_c = 0;
  if (ar4[1] != 0) {
    uStack_c = *(undefined4 *)(ar4[1] + 8);
  }
  uVar1 = (**(code **)(*ar4 + 0x1c))(&uStack_10,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c10b144 @ 8c10b144 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10b144(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar5 + 4);
  uStack_c = 0;
  if (ar5[1] != 0) {
    uStack_c = *(undefined4 *)(ar5[1] + 8);
  }
  uVar1 = (**(code **)(*ar5 + 0x20))(ar4,&uStack_10,ar6,ar7);
  return uVar1;
}



/* FUN_8c10b17a @ 8c10b17a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10b17a(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar5 + 4);
  uStack_c = 0;
  if (ar5[1] != 0) {
    uStack_c = *(undefined4 *)(ar5[1] + 8);
  }
  uVar1 = (**(code **)(*ar5 + 0x24))(ar4,&uStack_10,ar6,ar7);
  return uVar1;
}



/* FUN_8c10b1b0 @ 8c10b1b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10b1b0(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar5 + 4);
  uStack_c = 0;
  if (ar5[1] != 0) {
    uStack_c = *(undefined4 *)(ar5[1] + 8);
  }
  uVar1 = (**(code **)(*ar5 + 0x28))(ar4,&uStack_10,ar6,ar7);
  return uVar1;
}



/* FUN_8c10b1ec @ 8c10b1ec callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10b1ec(int *ar4,int *ar5,undefined4 *ar6,int *ar7)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int a4;
  int iVar11;
  int iVar12;
  int iVar13;
  int iStack_64;
  int iStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *piStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int *piStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  piStack_2c = (int *)0x0;
  piStack_30 = (int *)0x0;
  puStack_34 = (undefined4 *)0x0;
  iVar13 = *ar5;
  uStack_28 = *(undefined4 *)(iVar13 + 4);
  uStack_24 = 0;
  if (ar5[1] != 0) {
    uStack_24 = *(undefined4 *)(ar5[1] + 8);
  }
  piVar5 = ar5;
  piVar3 = (int *)(*(code *)PTR_FUN_8c10b334)(*(undefined4 *)ar5[1],ar5,ar6,ar7);
  a4 = *piVar3;
  iVar4 = FUN_8c10afbe(a4,piVar5,ar6,ar7);
  uVar1 = DAT_8c10b32c;
  iVar6 = *ar4;
  puStack_58 = (undefined4 *)0x0;
  piStack_44 = (int *)0x0;
  iVar12 = 0;
  piStack_3c = ar7;
  puStack_38 = (undefined4 *)ar4[1];
  if (0 < iVar6) {
    do {
      piStack_3c = (int *)*puStack_38;
      iStack_64 = 0;
      iVar11 = 0;
      piStack_4c = (int *)puStack_38[5];
      if (0 < (int)piStack_3c) {
        do {
          iVar9 = 0;
          iVar8 = *piStack_4c;
          ar6 = (undefined4 *)0x0;
          iStack_60 = piStack_4c[3];
          if (0 < iVar8) {
            do {
              ar6 = (undefined4 *)((int)ar6 + 1);
              if ((*(ushort *)(iVar4 + *(int *)(iStack_60 + 8) * 2) & DAT_8c10b32c) == 0) {
                iVar9 = iVar9 + 1;
              }
              iStack_60 = iStack_60 + 0xc;
            } while ((int)ar6 < iVar8);
          }
          iVar12 = (iVar12 + iVar8) - iVar9;
          if (iVar9 == iVar8) {
            iStack_64 = iStack_64 + 1;
          }
          iVar11 = iVar11 + 1;
          piStack_4c = piStack_4c + 4;
        } while (iVar11 < (int)piStack_3c);
      }
      puStack_58 = (undefined4 *)((int)piStack_3c + ((int)puStack_58 - iStack_64));
      piStack_44 = (int *)((int)piStack_44 + 1);
      puStack_38 = puStack_38 + 6;
    } while ((int)piStack_44 < iVar6);
  }
  piVar5 = (int *)(**(code **)(iVar13 + 8))(0xc,&uStack_28,ar6,piStack_3c);
  if (piVar5 != (int *)0x0) {
    if (iVar6 < 1) {
LAB_8c10b3fc:
      *piVar5 = *ar4;
      piVar5[1] = (int)piStack_2c;
      piStack_4c = (int *)0x0;
      puStack_58 = ar6;
      piVar3 = piStack_30;
      puStack_5c = puStack_34;
      piStack_44 = (int *)ar4[1];
      piVar2 = piStack_2c;
      if (0 < iVar6) {
        do {
          piStack_3c = piVar2;
          piStack_48 = (int *)piStack_44[5];
          iVar12 = *piStack_44;
          *piStack_3c = iVar12;
          piStack_3c[1] = piStack_44[1];
          piStack_3c[2] = piStack_44[2];
          piStack_3c[3] = piStack_44[3];
          piStack_3c[4] = piStack_44[4];
          piStack_3c[5] = (int)piVar3;
          iStack_60 = 0;
          if (0 < iVar12) {
            do {
              puVar7 = (undefined4 *)piStack_48[3];
              iVar8 = *piStack_48;
              *piVar3 = iVar8;
              piVar3[1] = piStack_48[1];
              piVar3[2] = piStack_48[2];
              piVar3[3] = (int)puStack_5c;
              iVar11 = 0;
              if (0 < iVar8) {
                do {
                  puStack_58 = puVar7;
                  uVar10 = puStack_58[2];
                  if ((*(ushort *)(iVar4 + uVar10 * 2) & uVar1) == 0) {
                    *piVar3 = *piVar3 + -1;
                  }
                  else {
                    if (*(uint *)(DAT_8c10b5ae + a4) <= uVar10) {
                      puStack_58[2] = (uVar10 - *(int *)(DAT_8c10b5ae + a4)) + DAT_8c10b5b0;
                    }
                    *puStack_5c = *puStack_58;
                    puStack_5c[1] = puStack_58[1];
                    puStack_5c[2] = puStack_58[2];
                    puStack_5c = puStack_5c + 3;
                  }
                  iVar11 = iVar11 + 1;
                  puVar7 = puStack_58 + 3;
                } while (iVar11 < iVar8);
              }
              if (*piVar3 == 0) {
                *piStack_3c = *piStack_3c + -1;
              }
              else {
                piVar3 = piVar3 + 4;
              }
              iStack_60 = iStack_60 + 1;
              piStack_48 = piStack_48 + 4;
            } while (iStack_60 < iVar12);
          }
          piStack_4c = (int *)((int)piStack_4c + 1);
          piStack_44 = piStack_44 + 6;
          piVar2 = piStack_3c + 6;
        } while ((int)piStack_4c < iVar6);
      }
      uVar10 = (**(code **)(ar5[1] + 0xc))(piVar5,&uStack_28,puStack_58,piStack_3c);
      (**(code **)(iVar13 + 0xc))(piVar5,&uStack_28,puStack_58,piStack_3c);
      if (piStack_2c != (int *)0x0) {
        (**(code **)(iVar13 + 0xc))(piStack_2c,&uStack_28,puStack_58,piStack_3c);
      }
      if (piStack_30 != (int *)0x0) {
        (**(code **)(iVar13 + 0xc))(piStack_30,&uStack_28,puStack_58,piStack_3c);
      }
      if (puStack_34 == (undefined4 *)0x0) {
        return uVar10 & 0xff;
      }
      (**(code **)(iVar13 + 0xc))(puStack_34,&uStack_28,puStack_58,piStack_3c);
      return uVar10 & 0xff;
    }
    piStack_2c = (int *)(**(code **)(iVar13 + 8))(iVar6 * 0x18,&uStack_28,ar6,piStack_3c);
    if (piStack_2c == (int *)0x0) {
      (**(code **)(iVar13 + 0xc))(piVar5,&uStack_28,ar6,piStack_3c);
    }
    else {
      piStack_30 = (int *)(**(code **)(iVar13 + 8))
                                    (((int)puStack_58 + 1) * 0x10,&uStack_28,ar6,piStack_3c);
      if (piStack_30 == (int *)0x0) {
        (**(code **)(iVar13 + 0xc))(piVar5,&uStack_28,ar6,piStack_3c);
        (**(code **)(iVar13 + 0xc))(piStack_2c,&uStack_28,ar6,piStack_3c);
      }
      else {
        if ((iVar12 == 0) ||
           (puStack_34 = (undefined4 *)
                         (**(code **)(iVar13 + 8))(iVar12 * 0xc,&uStack_28,ar6,piStack_3c),
           puStack_34 != (undefined4 *)0x0)) goto LAB_8c10b3fc;
        (**(code **)(iVar13 + 0xc))(piVar5,&uStack_28,ar6,piStack_3c);
        (**(code **)(iVar13 + 0xc))(piStack_2c,&uStack_28,ar6,piStack_3c);
        (**(code **)(iVar13 + 0xc))(piStack_30,&uStack_28,ar6,piStack_3c);
      }
    }
  }
  return 1;
}



/* FUN_8c10b576 @ 8c10b576 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c10b576(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = *(undefined4 *)(ar5[1] + 8);
  uStack_10 = 0;
  if (*ar5 != 0) {
    uStack_10 = *(undefined4 *)(*ar5 + 4);
  }
  uVar1 = (**(code **)(ar5[1] + 0x10))(ar4,&uStack_10,ar6,ar7);
  return uVar1 & 0xff;
}



/* FUN_8c10b5b8 @ 8c10b5b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c10b5b8(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = *(undefined4 *)(ar5[1] + 8);
  uStack_10 = 0;
  if (*ar5 != 0) {
    uStack_10 = *(undefined4 *)(*ar5 + 4);
  }
  uVar1 = (**(code **)(ar5[1] + 0x14))(ar4,&uStack_10,ar6,ar7);
  return uVar1 & 0xff;
}



/* FUN_8c10b5f0 @ 8c10b5f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c10b5f0(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = *(undefined4 *)(ar5[1] + 8);
  uStack_10 = 0;
  if (*ar5 != 0) {
    uStack_10 = *(undefined4 *)(*ar5 + 4);
  }
  uVar1 = (**(code **)(ar5[1] + 0x18))(ar4,&uStack_10,ar6,ar7);
  return uVar1 & 0xff;
}



/* FUN_8c10b628 @ 8c10b628 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c10b628(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = *(undefined4 *)(ar5[1] + 8);
  uStack_10 = 0;
  if (*ar5 != 0) {
    uStack_10 = *(undefined4 *)(*ar5 + 4);
  }
  uVar1 = (**(code **)(ar5[1] + 0x1c))(ar4,&uStack_10,ar6,ar7);
  return uVar1 & 0xff;
}



/* FUN_8c10b660 @ 8c10b660 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c10b660(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = *(undefined4 *)(ar4[1] + 8);
  uStack_10 = 0;
  if (*ar4 != 0) {
    uStack_10 = *(undefined4 *)(*ar4 + 4);
  }
  uVar1 = (**(code **)(ar4[1] + 0x20))(&uStack_10,ar5,ar6,ar7);
  return uVar1 & 0xff;
}



/* FUN_8c10b698 @ 8c10b698 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10b698(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (*(code *)PTR_FUN_8c10b704)(*ar4);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_FUN_8c10b708)(*(undefined4 *)ar4[1],*ar4);
  }
  return uVar2;
}



/* FUN_8c10b6a0 @ 8c10b6a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10b6a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 unaff_r13;
  undefined4 *unaff_r14;
  
  iVar1 = (*(code *)PTR_FUN_8c10b704)(*unaff_r14,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r13 = (*(code *)PTR_FUN_8c10b708)(*(undefined4 *)unaff_r14[1],*unaff_r14,ar6,ar7);
  }
  return unaff_r13;
}



/* FUN_8c10b6cc @ 8c10b6cc callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c10b6cc(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  int *a5;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint *a5_00;
  int *a5_01;
  uint uVar9;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar8 = 0;
  iVar3 = ar4[1];
  iVar7 = 0;
  a5_00 = (uint *)0x0;
  if (ar5 == (undefined4 *)0x0) {
    a5_01 = (int *)0x0;
  }
  else {
    a5_01 = (int *)*ar5;
  }
  uStack_28 = *(undefined4 *)(iVar3 + 4);
  uStack_24 = ar4[2];
  a5 = a5_01;
  iVar1 = (*(code *)PTR_FUN_8c10b7b8)(*ar4,a5_01,ar6,ar7);
  if (iVar1 != 0) {
    a5 = (int *)*ar4;
    iVar8 = (*(code *)PTR_FUN_8c10b7bc)(*(undefined4 *)ar4[1],a5,ar6,ar7);
  }
  if ((iVar8 == 0) && (a5_01 != (int *)0x0)) {
    iVar1 = *a5_01;
    uVar9 = *(int *)(DAT_8c10b7b0 + -4 + iVar1) + *(int *)(DAT_8c10b7b0 + iVar1);
    puVar2 = (ushort *)FUN_8c10afbe(iVar1,a5,ar6,ar7);
    uVar5 = 0;
    puVar4 = puVar2;
    if (uVar9 != 0) {
      do {
        uVar5 = uVar5 + 1;
        if ((*puVar4 & 0x40) != 0) {
          iVar7 = iVar7 + 1;
        }
        puVar4 = puVar4 + 1;
      } while (uVar5 < uVar9);
    }
    iVar7 = uVar9 - iVar7;
    if (iVar7 != 0) {
      a5_00 = (uint *)(**(code **)(iVar3 + 8))(iVar7 * 4,&uStack_28,ar6,ar7);
      if (a5_00 == (uint *)0x0) {
        return 1;
      }
      uVar5 = 0;
      puVar6 = a5_00;
      if (uVar9 != 0) {
        do {
          if ((puVar2[uVar5] & 0x40) == 0) {
            *puVar6 = uVar5;
            puVar6 = puVar6 + 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar9);
      }
    }
    iVar1 = (*(code *)PTR_FUN_8c10b9e8)(*ar4,a5_00,iVar7,ar7);
    if (iVar1 != 0) {
      iVar8 = (*(code *)PTR_FUN_8c10b9ec)(*(undefined4 *)ar4[1],*ar4,iVar7,ar7);
    }
    if (a5_00 != (uint *)0x0) {
      (**(code **)(iVar3 + 0xc))(a5_00,&uStack_28,iVar7,ar7);
    }
  }
  ar4[0xb] = ar5;
  return iVar8;
}



/* asr_lib_bind_recognizer_model @ 8c10b840 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int asr_lib_bind_recognizer_model(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (ar5 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *ar5;
  }
  iVar1 = (*(code *)PTR_FUN_8c10b9f0)(*ar4,uVar2);
  if (iVar1 != 0) {
    iVar3 = (*(code *)PTR_FUN_8c10b9ec)(*(undefined4 *)ar4[1],*ar4);
  }
  if (iVar3 == 0) {
    if (ar5 == (undefined4 *)0x0) {
      ar4[9] = 0;
      ar4[0xb] = 0;
      ar4[10] = 0;
    }
    else {
      iVar1 = ar5[1];
      if (iVar1 == 4) {
        ar4[10] = ar5;
      }
      else if ((iVar1 == 10) || (iVar1 == 0xb)) {
        ar4[9] = ar5;
        ar4[0xb] = 0;
      }
      else {
        iVar3 = 0xd;
      }
    }
  }
  return iVar3;
}



/* FUN_8c10b852 @ 8c10b852 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c10b852(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  int unaff_r11;
  undefined4 unaff_r12;
  undefined4 *unaff_r13;
  char in_T;
  
  a5 = unaff_r12;
  if (in_T != '\x01') {
    a5 = *unaff_r13;
  }
  iVar1 = (*(code *)PTR_FUN_8c10b9f0)(*ar4,a5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r11 = (*(code *)PTR_FUN_8c10b9ec)(*(undefined4 *)ar4[1],*ar4,ar6,ar7);
  }
  if (unaff_r11 == 0) {
    if (unaff_r13 == (undefined4 *)0x0) {
      ar4[9] = unaff_r12;
      ar4[0xb] = unaff_r12;
      ar4[10] = unaff_r12;
    }
    else {
      iVar1 = unaff_r13[1];
      if (iVar1 == 4) {
        ar4[10] = unaff_r13;
      }
      else if ((iVar1 == 10) || (iVar1 == 0xb)) {
        ar4[9] = unaff_r13;
        ar4[0xb] = unaff_r12;
      }
      else {
        unaff_r11 = 0xd;
      }
    }
  }
  return unaff_r11;
}



/* FUN_8c10b8c6 @ 8c10b8c6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10b8c6(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = ar4[1];
  uVar2 = 0;
  uStack_10 = 0;
  iVar1 = (*(code *)PTR_FUN_8c10b9f4)(*ar4,0,ar6,ar7);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_FUN_8c10b9ec)(*ar4,0,ar6,ar7);
  }
  (*(code *)ar4[3])(ar4,&uStack_14,ar6,ar7);
  return uVar2;
}



/* asr_lib_create_engine @ 8c10b914 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 asr_lib_create_engine(int *ar4,int ar5,int *ar6,undefined4 ar7)

{
  int *a5;
  int iVar1;
  int *a6;
  undefined4 uVar2;
  int aiStack_3c [2];
  undefined *puStack_34;
  undefined *puStack_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined *puStack_24;
  undefined *puStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  
  uVar2 = 0;
  aiStack_3c[1] = 0;
  a6 = ar6;
  aiStack_3c[0] = ar5;
  a5 = (int *)(*(code *)*ar4)(0x2c,aiStack_3c,ar6,ar7);
  if (a5 == (int *)0x0) {
    uVar2 = 1;
  }
  else {
    a5[2] = *ar4;
    a5[3] = ar4[1];
    a5[4] = ar4[2];
    a5[5] = ar4[3];
    a5[6] = ar4[4];
    a5[7] = ar4[5];
    a5[8] = ar4[6];
    a5[9] = ar4[7];
    a5[10] = ar4[8];
    a5[1] = ar5;
    puStack_34 = PTR_FUN_8c10b9f8;
    *ar6 = (int)a5;
    puStack_30 = PTR_FUN_8c10b9fc;
    puStack_2c = PTR_FUN_8c10ba00;
    puStack_28 = PTR_FUN_8c10ba04;
    puStack_24 = PTR_FUN_8c10ba08;
    puStack_20 = PTR_FUN_8c10ba0c;
    puStack_1c = PTR_FUN_8c10ba10;
    puStack_18 = PTR_FUN_8c10ba14;
    puStack_14 = PTR_FUN_8c10ba18;
    iVar1 = (*(code *)PTR_FUN_8c10ba1c)(&puStack_34,a5,a6,ar7);
    if (iVar1 == 0) {
      uVar2 = (*(code *)PTR_FUN_8c10b9ec)(0,0,a6,ar7);
      (*(code *)ar4[1])(a5,aiStack_3c,a6,ar7);
    }
    else {
      *a5 = iVar1;
    }
  }
  return uVar2;
}



/* FUN_8c10ba20 @ 8c10ba20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10ba20(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar3 = ar4[1];
  uVar2 = 0;
  uStack_1c = *(undefined4 *)(iVar3 + 4);
  uStack_18 = ar4[2];
  iVar1 = (*(code *)PTR_FUN_8c10bc64)(*ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_FUN_8c10bc6c)(*(undefined4 *)ar4[1],*ar4,ar6,ar7);
  }
  (**(code **)(iVar3 + 0xc))(ar4,&uStack_1c,ar6,ar7);
  return uVar2;
}



/* FUN_8c10ba7c @ 8c10ba7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c10ba7c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = *(undefined4 *)(ar4[1] + 4);
  iVar2 = 0;
  uStack_10 = 0;
  iVar1 = (*(code *)PTR_FUN_8c10bc70)(*ar4,0,ar6,ar7);
  if (iVar1 != 0) {
    iVar2 = (*(code *)PTR_FUN_8c10bc6c)(*(undefined4 *)ar4[1],0,ar6,ar7);
  }
  if (iVar2 == 0) {
    (**(code **)(ar4[1] + 0xc))(ar4,&uStack_14,ar6,ar7);
  }
  return iVar2;
}



/* FUN_8c10bad4 @ 8c10bad4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c10bad4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar2 = 0;
  uStack_14 = *(undefined4 *)(ar4[2] + 4);
  uStack_10 = 0;
  iVar1 = (*(code *)PTR_FUN_8c10bc74)(*ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    iVar2 = (*(code *)PTR_FUN_8c10bc6c)(*(undefined4 *)ar4[2],0,ar6,ar7);
  }
  if (iVar2 == 0) {
    (**(code **)(ar4[2] + 0xc))(ar4,&uStack_14,ar6,ar7);
  }
  return iVar2;
}



/* FUN_8c10bb3a @ 8c10bb3a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10bb3a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 unaff_r13;
  undefined4 *unaff_r14;
  
  iVar1 = (*(code *)PTR_FUN_8c10bc78)(*unaff_r14,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r13 = (*(code *)PTR_FUN_8c10bc6c)(*(undefined4 *)unaff_r14[1],*unaff_r14,ar6,ar7);
  }
  return unaff_r13;
}



/* FUN_8c10bb6e @ 8c10bb6e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10bb6e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *unaff_r13;
  undefined4 unaff_r14;
  
  iVar1 = (*(code *)PTR_FUN_8c10bc7c)(*unaff_r13,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r14 = (*(code *)PTR_FUN_8c10bc6c)(*(undefined4 *)unaff_r13[1],*unaff_r13,ar6,ar7);
  }
  return unaff_r14;
}



/* FUN_8c10bb9a @ 8c10bb9a callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c10bb9a(undefined4 *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (*(code *)PTR_FUN_8c10bc80)(*ar4);
  if (iVar1 == 0) {
    iVar3 = (*(code *)PTR_FUN_8c10bc6c)(*(undefined4 *)ar4[1],*ar4);
  }
  if (((iVar3 == 0) && (iVar2 = ar4[0xb], *ar5 = iVar2, iVar2 != 0)) && (iVar1 != *(int *)*ar5)) {
    iVar3 = 0xb;
  }
  return iVar3;
}



/* FUN_8c10bba8 @ 8c10bba8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c10bba8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *unaff_r11;
  undefined4 *unaff_r13;
  int unaff_r14;
  
  iVar1 = (*(code *)PTR_FUN_8c10bc80)(*unaff_r13,ar5,ar6,ar7);
  if (iVar1 == 0) {
    unaff_r14 = (*(code *)PTR_FUN_8c10bc6c)(*(undefined4 *)unaff_r13[1],*unaff_r13,ar6,ar7);
  }
  if (((unaff_r14 == 0) && (iVar2 = unaff_r13[0xb], *unaff_r11 = iVar2, iVar2 != 0)) &&
     (iVar1 != *(int *)*unaff_r11)) {
    unaff_r14 = 0xb;
  }
  return unaff_r14;
}



/* FUN_8c10bbf2 @ 8c10bbf2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c10bbf2(undefined4 *ar4,int *ar5,uint *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piStack_28;
  uint *puStack_24;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar4 = 0;
  iVar3 = ar4[1];
  uStack_1c = *(undefined4 *)(iVar3 + 4);
  uStack_18 = ar4[2];
  puStack_24 = ar6;
  puStack_20 = ar4;
  iVar1 = (*(code *)PTR_FUN_8c10bc84)(*ar4,&piStack_28,ar6,ar7);
  if (iVar1 != 0) {
    iVar4 = (*(code *)PTR_FUN_8c10bc6c)(*(undefined4 *)puStack_20[1],*ar4,ar6,ar7);
  }
  if (iVar4 == 0) {
    puVar2 = (undefined4 *)(**(code **)(iVar3 + 8))(8,&uStack_1c,ar6,ar7);
    if (puVar2 == (undefined4 *)0x0) {
      iVar4 = 1;
    }
    else {
      *ar5 = (int)puVar2;
      *puVar2 = ar4[9];
      puVar2[1] = ar4[10];
    }
    if (iVar4 == 0) {
      if (*piStack_28 != **(int **)*ar5) {
        iVar4 = 0xb;
      }
      if ((1 < *puStack_24) && (piStack_28[1] != **(int **)ar5[1])) {
        iVar4 = 0xb;
      }
    }
    (**(code **)(iVar3 + 0xc))(piStack_28,&uStack_1c,ar6,ar7);
  }
  return iVar4;
}



/* FUN_8c10bce4 @ 8c10bce4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10bce4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 unaff_r13;
  undefined4 *unaff_r14;
  
  iVar1 = (*(code *)PTR_FUN_8c10bf1c)(*unaff_r14,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r13 = (*(code *)PTR_FUN_8c10bf20)(*(undefined4 *)unaff_r14[1],*unaff_r14,ar6,ar7);
  }
  return unaff_r13;
}



/* FUN_8c10bd20 @ 8c10bd20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10bd20(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 unaff_r13;
  undefined4 *unaff_r14;
  
  iVar1 = (*(code *)PTR_FUN_8c10bf28)(*unaff_r14,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r13 = (*(code *)PTR_FUN_8c10bf20)(*(undefined4 *)unaff_r14[1],*unaff_r14,ar6,ar7);
  }
  return unaff_r13;
}



/* FUN_8c10bd4c @ 8c10bd4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10bd4c(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *a6;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puStack_24;
  undefined1 auStack_20 [4];
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar2 = (undefined4 *)ar4[1];
  uVar3 = 0;
  a6 = auStack_20;
  uStack_18 = puVar2[1];
  uStack_14 = ar4[2];
  puStack_1c = ar5;
  iVar1 = (*(code *)PTR_FUN_8c10bf2c)(*ar4,&puStack_24,a6,ar7);
  if (iVar1 != 0) {
    uVar3 = (*(code *)PTR_FUN_8c10bf20)(*puVar2,*ar4,a6,ar7);
  }
  *puStack_1c = *puStack_24;
  puStack_1c[1] = puStack_24[1];
  puStack_1c[2] = puStack_24[2];
  puStack_1c[3] = puStack_24[3];
  puStack_1c[4] = puStack_24[4];
  puStack_1c[5] = puStack_24[5];
  puStack_1c[6] = puStack_24[6];
  puStack_1c[7] = puStack_24[7];
  puStack_1c[8] = puStack_24[8];
  puStack_1c[9] = puStack_24[9];
  puStack_1c[10] = puStack_24[10];
  puStack_1c[0xb] = puStack_24[0xb];
  puStack_1c[0xc] = puStack_24[0xc];
  puStack_1c[0xd] = puStack_24[0xd];
  (*(code *)puVar2[3])(puStack_24,&uStack_18,a6,ar7);
  return uVar3;
}



/* FUN_8c10bdee @ 8c10bdee callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10bdee(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *unaff_r13;
  undefined4 unaff_r14;
  
  iVar1 = (*(code *)PTR_FUN_8c10bf30)(*unaff_r13,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r14 = (*(code *)PTR_FUN_8c10bf20)(*(undefined4 *)unaff_r13[1],*unaff_r13,ar6,ar7);
  }
  return unaff_r14;
}



/* FUN_8c10be22 @ 8c10be22 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10be22(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *unaff_r13;
  undefined4 unaff_r14;
  
  iVar1 = (*(code *)PTR_FUN_8c10bf34)(*unaff_r13,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r14 = (*(code *)PTR_FUN_8c10bf20)(*(undefined4 *)unaff_r13[1],*unaff_r13,ar6,ar7);
  }
  return unaff_r14;
}



/* FUN_8c10be4e @ 8c10be4e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10be4e(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c10bf38)(ar4,ar5,ar6,ar7);
  *ar5 = uVar1;
  return 0;
}



/* FUN_8c10be70 @ 8c10be70 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10be70(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *unaff_r13;
  undefined4 unaff_r14;
  
  iVar1 = (*(code *)PTR_FUN_8c10bf3c)(*unaff_r13,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r14 = (*(code *)PTR_FUN_8c10bf20)(*(undefined4 *)unaff_r13[1],*unaff_r13,ar6,ar7);
  }
  return unaff_r14;
}



/* FUN_8c10be9c @ 8c10be9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10be9c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  undefined *puVar1;
  int *a4;
  int iVar2;
  int *a7;
  undefined4 uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar3 = 0;
  uStack_18 = ar4[1];
  uStack_14 = 0;
  a7 = ar7;
  a4 = (int *)(*(code *)ar4[2])(8,&uStack_18,ar6,ar7);
  puVar1 = PTR_FUN_8c10bf40;
  a4[1] = (int)ar4;
  iVar2 = (*(code *)puVar1)(*ar4,ar5,ar6,a7);
  *a4 = iVar2;
  if (iVar2 == 0) {
    uVar3 = (*(code *)PTR_FUN_8c10bf20)(*ar4,0,ar6,a7);
    (*(code *)ar4[3])(a4,&uStack_18,ar6,a7);
  }
  *ar7 = (int)a4;
  return uVar3;
}



/* asr_lib_load_model @ 8c10bf44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 asr_lib_load_model(undefined4 *ar4,int *ar5,undefined4 ar6,int *ar7)

{
  undefined *puVar1;
  int *a4;
  int iVar2;
  int *a7;
  undefined4 uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar3 = 0;
  uStack_18 = ar4[1];
  uStack_14 = 0;
  a7 = ar7;
  a4 = (int *)(*(code *)ar4[2])(0xc,&uStack_18,ar6,ar7);
  a4[2] = (int)ar4;
  puVar1 = PTR_FUN_8c10c090;
  a4[1] = *ar5;
  iVar2 = (*(code *)puVar1)(*ar4,ar5,ar6,a7);
  *a4 = iVar2;
  if (iVar2 == 0) {
    uVar3 = (*(code *)PTR_FUN_8c10c094)(*ar4,0,ar6,a7);
    (*(code *)ar4[3])(a4,&uStack_18,ar6,a7);
  }
  *ar7 = (int)a4;
  return uVar3;
}



/* asr_lib_create_recognizer @ 8c10bfc6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 asr_lib_create_recognizer(undefined4 *ar4,int *ar5,int ar6,int *ar7)

{
  undefined *puVar1;
  int *a6;
  int iVar2;
  int *a6_00;
  int *a7;
  undefined4 uVar3;
  undefined4 uStack_34;
  int iStack_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined *puStack_24;
  undefined *puStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  
  uVar3 = 0;
  puStack_2c = PTR_FUN_8c10c098;
  puStack_28 = PTR_FUN_8c10c09c;
  puStack_24 = PTR_FUN_8c10c0a0;
  puStack_20 = PTR_FUN_8c10c0a4;
  puStack_1c = PTR_FUN_8c10c0a8;
  puStack_18 = PTR_FUN_8c10c0ac;
  uStack_34 = ar4[1];
  a7 = ar7;
  iStack_30 = ar6;
  a6 = (int *)(*(code *)ar4[2])(0x30,&uStack_34,ar6,ar7);
  a6[2] = ar6;
  a6[1] = (int)ar4;
  a6[3] = *ar5;
  a6[4] = ar5[1];
  a6[5] = ar5[2];
  a6[6] = ar5[3];
  a6[7] = ar5[4];
  puVar1 = PTR_FUN_8c10c0b0;
  a6[8] = ar5[5];
  a6[9] = 0;
  a6[10] = 0;
  a6[0xb] = 0;
  a6_00 = a6;
  iVar2 = (*(code *)puVar1)(*ar4,&puStack_2c,a6,a7);
  if (iVar2 == 0) {
    uVar3 = (*(code *)PTR_FUN_8c10c094)(*ar4,0,a6_00,a7);
    (*(code *)ar4[3])(a6,&uStack_34,a6_00,a7);
  }
  else {
    *a6 = iVar2;
    *ar7 = (int)a6;
  }
  return uVar3;
}



/* FUN_8c10c0b4 @ 8c10c0b4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c10c0b4(undefined4 *ar4,uint *ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 **a5;
  uint *puVar5;
  uint *puVar6;
  uint *a7;
  uint *puVar7;
  int a6;
  int a4;
  uint *puStack_38;
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  a5 = &puStack_2c;
  puStack_38 = (uint *)0x0;
  iVar3 = ar4[1];
  uStack_28 = *(undefined4 *)(iVar3 + 4);
  uStack_24 = ar4[2];
  uVar4 = ar6;
  iStack_30 = FUN_8c10bb9a(ar4,a5,ar6,ar7);
  if (iStack_30 == 0) {
    a4 = *(int *)*puStack_2c;
    iVar1 = (*(code *)PTR_FUN_8c10c1a8)(a4,a5,uVar4,ar7);
    iVar2 = DAT_8c10c1ac;
    uVar4 = 0;
    a6 = ar6 + *(int *)(DAT_8c10c19e + a4) + 1;
    puVar5 = ar5;
    puVar6 = ar5;
    a7 = ar5;
    if (ar6 != 0) {
      do {
        if (ar5[uVar4] < *(uint *)(DAT_8c10c1a0 + a4)) {
          if ((*(ushort *)(*a7 * 2 + iVar1) & 0x40) != 0) {
            a6 = a6 + -1;
          }
          if (*puVar6 <= *(uint *)(DAT_8c10c19e + a4)) {
            a6 = a6 + -1;
          }
        }
        else if ((*(ushort *)((*puVar5 + *(int *)(DAT_8c10c1a0 + a4) + DAT_8c10c1ac) * 2 + iVar1) &
                 0x40) != 0) {
          a6 = a6 + -1;
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
        a7 = a7 + 1;
      } while (uVar4 < ar6);
    }
    if (a6 != 0) {
      puStack_38 = (uint *)(**(code **)(iVar3 + 8))(a6 << 2,&uStack_28,puVar6,a7);
      if (puStack_38 == (uint *)0x0) {
        return 1;
      }
      uVar4 = 0;
      puVar5 = puStack_38;
      puVar6 = ar5;
      a7 = ar5;
      puVar7 = ar5;
      if (ar6 != 0) {
        do {
          if (ar5[uVar4] < *(uint *)(DAT_8c10c2d6 + a4)) {
            if (((*(ushort *)(ar5[uVar4] * 2 + iVar1) & 0x40) == 0) &&
               (*(uint *)(DAT_8c10c2d8 + a4) < ar5[uVar4])) {
              *puVar5 = *a7;
              puVar5 = puVar5 + 1;
            }
          }
          else if ((*(ushort *)((*puVar6 + *(int *)(DAT_8c10c2d6 + a4) + iVar2) * 2 + iVar1) & 0x40)
                   == 0) {
            *puVar5 = *puVar7 + *(int *)(DAT_8c10c2d6 + a4) + iVar2;
            puVar5 = puVar5 + 1;
          }
          uVar4 = uVar4 + 1;
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
          a7 = a7 + 1;
        } while (uVar4 < ar6);
      }
      iVar2 = (int)DAT_8c10c2d8;
      uVar4 = 0;
      if (*(int *)(iVar2 + a4) != -1) {
        do {
          *puVar5 = uVar4;
          uVar4 = uVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 < *(int *)(iVar2 + a4) + 1U);
      }
    }
    iVar2 = (*(code *)PTR_FUN_8c10c2e0)(*ar4,puStack_38,a6,a7);
    if (iVar2 != 0) {
      iStack_30 = (*(code *)PTR_FUN_8c10c2e4)(*(undefined4 *)ar4[1],*ar4,a6,a7);
    }
    if (puStack_38 != (uint *)0x0) {
      (**(code **)(iVar3 + 0xc))(puStack_38,&uStack_28,a6,a7);
    }
  }
  return iStack_30;
}



/* FUN_8c10c2a2 @ 8c10c2a2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10c2a2(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (*(code *)PTR_FUN_8c10c2e8)(*ar4);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_FUN_8c10c2e4)(*(undefined4 *)ar4[1],*ar4);
  }
  return uVar2;
}



/* FUN_8c10c2aa @ 8c10c2aa callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10c2aa(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 unaff_r13;
  undefined4 *unaff_r14;
  
  iVar1 = (*(code *)PTR_FUN_8c10c2e8)(*unaff_r14,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r13 = (*(code *)PTR_FUN_8c10c2e4)(*(undefined4 *)unaff_r14[1],*unaff_r14,ar6,ar7);
  }
  return unaff_r13;
}



/* FUN_8c10c2f4 @ 8c10c2f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10c2f4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *unaff_r13;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (*(code *)PTR_FUN_8c10c38c)(*unaff_r13,ar5,ar6,ar7);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_FUN_8c10c394)(*(undefined4 *)unaff_r13[1],*unaff_r13,ar6,ar7);
  }
  return uVar2;
}



/* FUN_8c10c322 @ 8c10c322 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10c322(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (*(code *)PTR_FUN_8c10c398)(*ar4);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_FUN_8c10c394)(*(undefined4 *)ar4[1],*ar4);
  }
  return uVar2;
}



/* FUN_8c10c32a @ 8c10c32a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10c32a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 unaff_r13;
  undefined4 *unaff_r14;
  
  iVar1 = (*(code *)PTR_FUN_8c10c398)(*unaff_r14,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r13 = (*(code *)PTR_FUN_8c10c394)(*(undefined4 *)unaff_r14[1],*unaff_r14,ar6,ar7);
  }
  return unaff_r13;
}



/* FUN_8c10c356 @ 8c10c356 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10c356(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (*(code *)PTR_FUN_8c10c39c)(*ar4);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_FUN_8c10c394)(*(undefined4 *)ar4[1],*ar4);
  }
  return uVar2;
}



/* FUN_8c10c35e @ 8c10c35e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10c35e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 unaff_r13;
  undefined4 *unaff_r14;
  
  iVar1 = (*(code *)PTR_FUN_8c10c39c)(*unaff_r14,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r13 = (*(code *)PTR_FUN_8c10c394)(*(undefined4 *)unaff_r14[1],*unaff_r14,ar6,ar7);
  }
  return unaff_r13;
}



/* FUN_8c10c3a0 @ 8c10c3a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10c3a0(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar1 = *ar4;
  uStack_14 = *(undefined4 *)(iVar1 + 4);
  uStack_10 = 0;
  if (ar4[3] != 0) {
    (**(code **)(iVar1 + 0xc))(ar4[3],&uStack_14,ar6,ar7);
  }
  (**(code **)(iVar1 + 0xc))(ar4,&uStack_14,ar6,ar7);
  return 0;
}



/* FUN_8c10c3de @ 8c10c3de callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10c3de(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  int *a4;
  int iVar1;
  undefined4 uVar2;
  int *a6;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = *(undefined4 *)(ar4 + 4);
  uStack_14 = 0;
  a6 = ar6;
  a4 = (int *)(**(code **)(ar4 + 8))(0x10,&uStack_18,ar6,ar7);
  if (a4 == (int *)0x0) {
LAB_8c10c44a:
    uVar2 = 1;
  }
  else {
    a4[2] = *ar5 + -8;
    a4[1] = ar5[1];
    if (a4[2] == 0) {
      a4[3] = 0;
    }
    else {
      iVar1 = (**(code **)(ar4 + 8))(a4[2],&uStack_18,a6,ar7);
      a4[3] = iVar1;
      if (iVar1 == 0) {
        (**(code **)(ar4 + 0xc))(a4,&uStack_18,a6,ar7);
        goto LAB_8c10c44a;
      }
      (*(code *)PTR_memmove_8c10c480)(a4[3],ar5 + 2,a4[2],ar7);
    }
    uVar2 = 0;
    *a4 = ar4;
    *ar6 = (int)a4;
  }
  return uVar2;
}



/* FUN_8c10c48c @ 8c10c48c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10c48c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *unaff_r14;
  undefined4 extraout_fr1;
  float extraout_fr0;
  undefined2 uVar4;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  
  iVar3 = *unaff_r14;
  (*(code *)PTR_FUN_8c10c730)(ar4,2,ar6,ar7);
  if ((char)((((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13)
              & DAT_8c10c734 & 0x80000) >> 0x13) == '\0') {
    uVar4 = (undefined2)(int)extraout_fr0;
  }
  else {
    uVar4 = (undefined2)(int)(double)CONCAT44(extraout_fr0,extraout_fr1);
  }
  *(undefined2 *)((int)unaff_r14 + 0x2e) = uVar4;
  *(short *)(unaff_r14 + 0xc) = *(short *)((int)unaff_r14 + 0x2e) * 3 + 3;
  *(short *)(*(int *)unaff_r14[4] + 0xc) = ((short)unaff_r14[0xc] + (short)DAT_8c10c738) * 4;
  iVar3 = (**(code **)(iVar3 + 0x14))(iVar3,(uint)*(ushort *)(unaff_r14 + 0xc) << 3,4,ar7);
  unaff_r14[0x15] = iVar3;
  if (unaff_r14[0x15] == 0) {
    uVar1 = 2;
  }
  else {
    iVar2 = unaff_r14[0x15];
    iVar3 = 0;
    do {
      unaff_r14[iVar3 + 0xd] = iVar2;
      iVar2 = iVar2 + (uint)*(ushort *)(unaff_r14 + 0xc) * 4;
      unaff_r14[iVar3 + 0xe] = iVar2;
      iVar3 = iVar3 + 2;
      iVar2 = iVar2 + (uint)*(ushort *)(unaff_r14 + 0xc) * 4;
    } while (iVar3 < 8);
    *(undefined2 *)(unaff_r14 + 0xb) = 0;
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c10c530 @ 8c10c530 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c10c530(int ar4,double *ar5,double *ar6,int ar7)

{
  uint uVar1;
  double *pdVar2;
  double *pdVar3;
  undefined4 uVar4;
  int iVar5;
  double *pdVar6;
  uint uVar7;
  double *pdVar8;
  double *pdVar9;
  int iVar10;
  double *pdVar11;
  double *pdVar12;
  double in_dr0;
  double dVar13;
  float fVar14;
  float fVar15;
  double in_dr2;
  undefined4 uVar16;
  double in_dr4;
  undefined4 in_fr7;
  double in_xd0;
  double in_xd2;
  double dVar17;
  double dVar18;
  double in_xd4;
  byte in_FPSCR_CAUSE;
  byte bVar19;
  byte in_FPSCR_DN;
  byte bVar20;
  byte in_FPSCR_PR;
  byte bVar21;
  byte in_FPSCR_SZ;
  byte bVar22;
  char cVar23;
  int iStack_24;
  
  iVar10 = **(int **)(ar4 + 0x10);
  pdVar12 = (double *)0x0;
  if (*(char *)(iVar10 + 0x30) == '\0') {
    if (*(char *)(ar4 + 0x58) == '\0') {
      ar5 = (double *)0x1;
      uVar1 = (*(code *)PTR_FUN_8c10c73c)(*(undefined4 *)(ar4 + 0xc),1,ar6,ar7);
      uVar4 = SUB84(in_dr4,0);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13
                | (uint)in_FPSCR_SZ << 0x14) & DAT_8c10c734;
        bVar19 = 0;
        bVar20 = 0;
        bVar21 = (byte)((uVar1 & 0x80000) >> 0x13);
        bVar22 = (byte)((uVar1 & 0x100000) >> 0x14);
        pdVar2 = (double *)
                 (*(code *)PTR_FUN_8c10c740)
                           (**(undefined4 **)(ar4 + 0xc),(*(undefined4 **)(ar4 + 0xc))[1],ar6,ar7);
        uVar1 = DAT_8c10c734;
        iVar5 = ar4 + 0x34;
        uVar7 = (uint)*(ushort *)(ar4 + 0x2c);
        pdVar3 = *(double **)((uVar7 & 7) * 4 + iVar5);
        pdVar11 = *(double **)((uVar7 + 7 & 7) * 4 + iVar5);
        pdVar9 = (double *)(*(int *)((uVar7 + 6 & 7) * 4 + iVar5) + 4);
        pdVar6 = *(double **)((uVar7 + 5 & 7) * 4 + iVar5);
        if (bVar22 == 0) {
          uVar4 = *(undefined4 *)pdVar2;
          pdVar2 = (double *)((int)pdVar2 + 4);
        }
        else {
          in_xd4 = *pdVar2;
          pdVar2 = pdVar2 + 1;
        }
        pdVar8 = *(double **)((uVar7 + 4 & 7) * 4 + iVar5);
        *(int *)(ar4 + 0x28) = *(int *)(ar4 + 0x28) + 1;
        if (bVar22 == 0) {
          *(undefined4 *)pdVar3 = uVar4;
          dVar17 = (double)CONCAT44(DAT_8c10c744,uVar4);
        }
        else {
          *pdVar3 = in_xd4;
          dVar17 = (double)CONCAT44(_DAT_8c10c748,DAT_8c10c744);
        }
        pdVar3 = (double *)((int)pdVar3 + 0xc);
        uVar1 = ((uint)bVar19 << 0xc | (uint)bVar20 << 0x12 | (uint)bVar21 << 0x13 |
                (uint)bVar22 << 0x14) & uVar1;
        in_FPSCR_PR = (byte)((uVar1 & 0x80000) >> 0x13);
        in_FPSCR_SZ = (byte)((uVar1 & 0x100000) >> 0x14);
        pdVar2 = (double *)((int)pdVar2 + 4);
        pdVar12 = (double *)((int)pdVar6 + 4);
        if (in_FPSCR_SZ == 0) {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)pdVar8);
          pdVar8 = (double *)((int)pdVar8 + 4);
        }
        else {
          in_xd2 = *pdVar8;
          pdVar8 = pdVar8 + 1;
        }
        if (in_FPSCR_PR == 0) {
          fVar15 = (float)((ulonglong)dVar17 >> 0x20);
          fVar14 = SUB84(in_dr2,0) * fVar15;
          dVar18 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar14);
          dVar17 = (double)CONCAT44(fVar15,SUB84(dVar17,0) * fVar15 - fVar14);
        }
        else {
          dVar18 = in_dr2 * dVar17 * dVar17;
          dVar17 = dVar17 * dVar17 - dVar18;
        }
        if (in_FPSCR_SZ == 0) {
          dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),*(undefined4 *)pdVar11);
        }
        else {
          in_xd2 = *pdVar11;
        }
        pdVar11 = (double *)((int)pdVar11 + 0xc);
        if (in_FPSCR_PR == 0) {
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                    SUB84(dVar17,0) + SUB84(dVar18,0));
        }
        else {
          dVar17 = dVar17 + dVar18;
        }
        if (in_FPSCR_SZ == 0) {
          dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),*(undefined4 *)pdVar6);
        }
        else {
          in_xd2 = *pdVar6;
        }
        if (in_FPSCR_PR == 0) {
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                    SUB84(dVar17,0) - SUB84(dVar18,0));
        }
        else {
          dVar17 = dVar17 - dVar18;
        }
        if (in_FPSCR_SZ == 0) {
          dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),_DAT_8c10c748);
        }
        else {
          in_xd2 = (double)CONCAT44(DAT_8c10c74c,_DAT_8c10c748);
        }
        if (in_FPSCR_PR == 0) {
          in_dr4 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                    SUB84(dVar17,0) * SUB84(dVar18,0));
        }
        else {
          in_dr4 = dVar17 * dVar18;
        }
        if (in_FPSCR_SZ == 0) {
          *(int *)pdVar9 = SUB84(in_dr4,0);
          in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar18,0));
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)pdVar9);
          in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),DAT_8c10c74c);
        }
        else {
          *pdVar9 = in_xd4;
          in_dr2 = *pdVar8;
          in_xd0 = *pdVar9;
        }
        if (in_FPSCR_PR == 0) {
          fVar14 = (SUB84(in_dr0,0) - (float)((ulonglong)in_dr2 >> 0x20)) * SUB84(in_dr4,0);
        }
        else {
          fVar14 = SUB84((in_dr0 - in_dr2) * in_dr4,0);
        }
        if (in_FPSCR_SZ == 0) {
          *(float *)(pdVar6 + 1) = fVar14;
        }
        else {
          pdVar6[1] = in_xd0;
        }
        pdVar6 = (double *)((int)pdVar6 + 0xc);
        iStack_24 = 0;
        if (in_FPSCR_SZ == 0) {
          dVar17 = (double)CONCAT44(DAT_8c10c750,in_fr7);
        }
        else {
          dVar17 = (double)CONCAT44(PTR_FUN_8c10c754,DAT_8c10c750);
        }
        pdVar9 = (double *)((int)pdVar9 + (*(ushort *)(ar4 + 0x2e) + 2) * 4);
        ar5 = pdVar8 + 1;
        if (*(short *)(ar4 + 0x2e) != 0) {
          do {
            uVar1 = DAT_8c10c734;
            if (in_FPSCR_SZ == 0) {
              *(undefined4 *)pdVar3 = *(undefined4 *)pdVar2;
            }
            else {
              in_xd2 = *pdVar2;
              *pdVar3 = in_xd2;
            }
            pdVar3 = (double *)((int)pdVar3 + 4);
            if (in_FPSCR_SZ == 0) {
              uVar4 = *(undefined4 *)pdVar2;
              pdVar2 = (double *)((int)pdVar2 + 4);
              dVar18 = (double)CONCAT44(uVar4,*(undefined4 *)pdVar11);
              pdVar11 = (double *)((int)pdVar11 + 4);
            }
            else {
              dVar18 = *pdVar2;
              pdVar2 = pdVar2 + 1;
              in_xd2 = *pdVar11;
              pdVar11 = pdVar11 + 1;
            }
            uVar1 = ((uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14) & uVar1;
            fVar14 = (float)((ulonglong)in_dr4 >> 0x20);
            dVar13 = in_dr4;
            if (in_FPSCR_SZ == 0) {
              dVar13 = (double)((ulonglong)(uint)fVar14 << 0x20);
            }
            in_FPSCR_PR = (byte)((uVar1 & 0x80000) >> 0x13);
            in_FPSCR_SZ = (byte)(uVar1 >> 0x14);
            if (in_FPSCR_PR == 0) {
              dVar18 = (double)(ulonglong)
                               (uint)((float)((ulonglong)dVar13 >> 0x20) *
                                      (float)((ulonglong)dVar18 >> 0x20) + SUB84(dVar18,0));
            }
            if (in_FPSCR_SZ == 0) {
              dVar18 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar18,0));
              pdVar6 = (double *)((int)pdVar6 + 4);
            }
            else {
              dVar18 = *pdVar6;
              pdVar6 = pdVar6 + 1;
            }
            if (in_FPSCR_PR == 0) {
              fVar15 = SUB84(dVar18,0) - (float)((ulonglong)dVar18 >> 0x20);
            }
            else {
              fVar15 = SUB84(dVar18 - dVar18,0);
            }
            if (in_FPSCR_SZ == 0) {
              dVar18 = (double)CONCAT44(*(undefined4 *)ar5,fVar15);
              ar5 = (double *)((int)ar5 + 4);
            }
            else {
              dVar18 = *ar5;
              ar5 = ar5 + 1;
            }
            if (in_FPSCR_PR == 0) {
              in_dr2 = (double)(ulonglong)
                               (uint)((SUB84(dVar18,0) - (float)((ulonglong)dVar18 >> 0x20) * fVar14
                                      ) * (float)((ulonglong)dVar17 >> 0x20));
            }
            else {
              in_dr2 = (dVar18 * in_dr4 - dVar18 * in_dr4) * dVar17;
            }
            if (in_FPSCR_SZ == 0) {
              *(int *)pdVar9 = SUB84(in_dr2,0);
            }
            else {
              *pdVar9 = in_xd2;
            }
            iStack_24 = iStack_24 + 1;
            pdVar9 = (double *)((int)pdVar9 + 4);
          } while (iStack_24 < (int)(uint)*(ushort *)(ar4 + 0x2e));
        }
        in_FPSCR_DN = 0;
        ar6 = (double *)((int)pdVar9 + (uint)*(ushort *)(ar4 + 0x2e) * -4);
        pdVar6 = (double *)((int)pdVar6 + (uint)*(ushort *)(ar4 + 0x2e) * 4);
        ar7 = 0;
        if (*(short *)(ar4 + 0x2e) != 0) {
          do {
            ar7 = ar7 + 1;
            if (in_FPSCR_SZ == 0) {
              dVar17 = (double)CONCAT44(*(undefined4 *)ar6,SUB84(in_dr2,0));
              ar6 = (double *)((int)ar6 + 4);
            }
            else {
              dVar17 = *ar6;
              ar6 = ar6 + 1;
            }
            uVar1 = ((uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14) & DAT_8c10c734;
            if (in_FPSCR_SZ == 0) {
              dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),*(undefined4 *)ar5);
              ar5 = (double *)((int)ar5 + 4);
            }
            else {
              in_xd2 = *ar5;
              ar5 = ar5 + 1;
            }
            in_FPSCR_DN = 0;
            in_FPSCR_PR = (byte)((uVar1 & 0x80000) >> 0x13);
            in_FPSCR_SZ = (byte)(uVar1 >> 0x14);
            if (in_FPSCR_PR == 0) {
              in_dr2 = (double)CONCAT44(((float)((ulonglong)dVar17 >> 0x20) - SUB84(dVar17,0)) *
                                        SUB84(in_dr4,0),SUB84(dVar17,0));
            }
            else {
              in_dr2 = (dVar17 - dVar17) * in_dr4;
            }
            if (in_FPSCR_SZ == 0) {
              *(int *)pdVar6 = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              *pdVar6 = in_dr2;
            }
            pdVar6 = (double *)((int)pdVar6 + 4);
          } while (ar7 < (int)(uint)*(ushort *)(ar4 + 0x2e));
        }
      }
    }
    uVar4 = SUB84(in_dr2,0);
    uVar16 = SUB84(in_dr4,0);
    if (*(char *)(ar4 + 0x58) != '\0') {
      iVar5 = *(int *)(ar4 + 0x28) + -1;
      *(int *)(ar4 + 0x28) = iVar5;
      if (iVar5 == 4) {
        *(undefined1 *)(ar4 + 0x58) = 0;
      }
      pdVar12 = (double *)(*(int *)((*(ushort *)(ar4 + 0x2c) + 5 & 7) * 4 + ar4 + 0x34) + 4);
    }
    if (pdVar12 != (double *)0x0) {
      if (3 < *(uint *)(ar4 + 0x28)) {
        cVar23 = (char)((((uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
                         (uint)in_FPSCR_SZ << 0x14) & DAT_8c10c734 & 0x100000) >> 0x14);
        pdVar3 = (double *)(*(code *)PTR_FUN_8c10c754)(iVar10,ar5,ar6,ar7);
        if (*(uint *)(ar4 + 0x28) < 7) {
          if (cVar23 == '\0') {
            dVar17 = (double)CONCAT44(DAT_8c10c860,uVar16);
          }
          else {
            dVar17 = (double)CONCAT44(uRam8c10c864,DAT_8c10c860);
          }
          uVar16 = (undefined4)((ulonglong)dVar17 >> 0x20);
          if (*(int *)(ar4 + 0x28) == 6) {
            if (cVar23 == '\0') {
              uVar4 = *(undefined4 *)pdVar12;
              pdVar12 = (double *)((int)pdVar12 + 4);
            }
            else {
              in_xd2 = *pdVar12;
              pdVar12 = pdVar12 + 1;
            }
            iVar10 = 0;
            if (cVar23 == '\0') {
              *(undefined4 *)pdVar3 = uVar4;
              *(undefined4 *)((int)pdVar3 + 4) = uVar16;
            }
            else {
              *pdVar3 = in_xd2;
              *(double *)((int)pdVar3 + 4) = dVar17;
            }
            pdVar12 = (double *)((int)pdVar12 + 4);
            pdVar3 = pdVar3 + 1;
            if (*(short *)(ar4 + 0x2e) != 0) {
              do {
                if (cVar23 == '\0') {
                  uVar4 = *(undefined4 *)pdVar12;
                  pdVar12 = (double *)((int)pdVar12 + 4);
                  *(undefined4 *)pdVar3 = uVar4;
                }
                else {
                  dVar18 = *pdVar12;
                  pdVar12 = pdVar12 + 1;
                  *pdVar3 = dVar18;
                }
                iVar10 = iVar10 + 1;
                pdVar3 = (double *)((int)pdVar3 + 4);
              } while (iVar10 < (int)((uint)*(ushort *)(ar4 + 0x2e) << 1));
            }
            iVar10 = 0;
            if (*(short *)(ar4 + 0x2e) != 0) {
              do {
                iVar10 = iVar10 + 1;
                if (cVar23 == '\0') {
                  *(undefined4 *)pdVar3 = uVar16;
                }
                else {
                  *pdVar3 = dVar17;
                }
                pdVar3 = (double *)((int)pdVar3 + 4);
              } while (iVar10 < (int)(uint)*(ushort *)(ar4 + 0x2e));
            }
          }
          else {
            if (cVar23 == '\0') {
              *(undefined4 *)pdVar3 = uVar16;
            }
            else {
              *pdVar3 = dVar17;
            }
            iVar10 = 0;
            if (cVar23 == '\0') {
              *(undefined4 *)((int)pdVar3 + 4) = uVar16;
            }
            else {
              *(double *)((int)pdVar3 + 4) = dVar17;
            }
            pdVar12 = pdVar12 + 1;
            pdVar3 = pdVar3 + 1;
            if (*(short *)(ar4 + 0x2e) != 0) {
              do {
                if (cVar23 == '\0') {
                  uVar4 = *(undefined4 *)pdVar12;
                  pdVar12 = (double *)((int)pdVar12 + 4);
                  *(undefined4 *)pdVar3 = uVar4;
                }
                else {
                  dVar18 = *pdVar12;
                  pdVar12 = pdVar12 + 1;
                  *pdVar3 = dVar18;
                }
                iVar10 = iVar10 + 1;
                pdVar3 = (double *)((int)pdVar3 + 4);
              } while (iVar10 < (int)(uint)*(ushort *)(ar4 + 0x2e));
            }
            iVar10 = 0;
            if (*(short *)(ar4 + 0x2e) != 0) {
              do {
                iVar10 = iVar10 + 1;
                if (cVar23 == '\0') {
                  *(undefined4 *)pdVar3 = uVar16;
                }
                else {
                  *pdVar3 = dVar17;
                }
                pdVar3 = (double *)((int)pdVar3 + 4);
              } while (iVar10 < (int)((uint)*(ushort *)(ar4 + 0x2e) << 1));
            }
          }
        }
        else {
          iVar10 = 0;
          if (0 < (int)(*(ushort *)(ar4 + 0x30) - 1)) {
            do {
              if (cVar23 == '\0') {
                uVar4 = *(undefined4 *)pdVar12;
                pdVar12 = (double *)((int)pdVar12 + 4);
                *(undefined4 *)pdVar3 = uVar4;
              }
              else {
                dVar17 = *pdVar12;
                pdVar12 = pdVar12 + 1;
                *pdVar3 = dVar17;
              }
              iVar10 = iVar10 + 1;
              pdVar3 = (double *)((int)pdVar3 + 4);
            } while (iVar10 < (int)(*(ushort *)(ar4 + 0x30) - 1));
          }
        }
      }
      if (pdVar12 != (double *)0x0) {
        *(ushort *)(ar4 + 0x2c) = (short)*(char *)(ar4 + 0x2c) + 1U & 7;
      }
    }
  }
  iVar10 = **(int **)(ar4 + 0xc);
  if ((*(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar10 + 0x40)) == *(int *)(iVar10 + 0x3c))
     && (*(char *)(ar4 + 0x58) == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



/* FUN_8c10c838 @ 8c10c838 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10c838(int *ar4,uint ar5,int ar6,int *ar7)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = PTR_memset_8c10c904;
  uVar2 = ar5 & 0xff;
  if (uVar2 == 1) {
    ar4[10] = 0;
    (*(code *)puVar1)(ar4[0x15],0,(uint)*(ushort *)(ar4 + 0xc) << 5,ar7);
  }
  else if (uVar2 == 2) {
    if ((ar4[10] != 0) || (ar6 != 0)) {
      *(undefined1 *)(ar4 + 0x16) = 1;
      if ((uint)ar4[10] < 3) {
        iVar3 = ar4[10] + 4;
      }
      else {
        iVar3 = 7;
      }
      ar4[10] = iVar3;
    }
  }
  else if (uVar2 == (int)DAT_8c10c85a) {
    *ar7 = ar4[10] + -4;
  }
  else {
    if (uVar2 != (int)DAT_8c10c85c) {
      return 0;
    }
    iVar3 = ar4[0x15];
    (**(code **)(*ar4 + 0x18))(*ar4,iVar3,ar6,ar7);
    (*(code *)PTR_FUN_8c10c90c)(ar4,iVar3,ar6,ar7);
  }
  return 1;
}



/* FUN_8c10c8e2 @ 8c10c8e2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10c8e2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c10c91c)(ar4,ar5,1,1);
  return uVar1;
}



/* FUN_8c10c986 @ 8c10c986 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c10c986(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)DAT_8c10ca44 + *ar4);
  return DAT_8c10ca44 + 0x10 + *ar4 + (uVar1 + (uVar1 & 1)) * 2;
}



/* FUN_8c10c99c @ 8c10c99c callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c10c99c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *ar4;
  iVar1 = FUN_8c10c986(ar4,ar5,ar6,ar7);
  return iVar1 + (*(int *)(DAT_8c10ca36 + iVar2) + 1) * 4 + (*(int *)(DAT_8c10ca3a + iVar2) + 1) * 4
  ;
}



/* FUN_8c10c9c8 @ 8c10c9c8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c10c9c8(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)DAT_8c10ca46 + *ar4);
  iVar1 = FUN_8c10c99c(ar4,*ar4,ar6,ar7);
  return iVar1 + (uVar2 + (uVar2 & 1)) * 2;
}



/* FUN_8c10c9cc @ 8c10c9cc callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c10c9cc(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  uint in_r3;
  uint uVar2;
  
  uVar2 = *(uint *)(in_r0 + *ar4);
  iVar1 = FUN_8c10c99c(ar4,*ar4,ar6,ar7);
  return iVar1 + (uVar2 + (in_r3 & uVar2)) * 2;
}



/* FUN_8c10c9e4 @ 8c10c9e4 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c10c9e4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *ar4;
  iVar1 = FUN_8c10c9c8(ar4,ar5,ar6,ar7);
  return iVar1 + (*(int *)(DAT_8c10ca38 + iVar2) + 1) * 4 +
                 (*(int *)(DAT_8c10ca38 + 8 + iVar2) + 1) * 4;
}



/* FUN_8c10ca10 @ 8c10ca10 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c10ca10(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint in_r2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *ar4;
  uVar2 = *(int *)(in_r0 + -4 + iVar1) + *(int *)(in_r0 + iVar1);
  iVar1 = FUN_8c10c9e4(ar4,iVar1,ar6,ar7);
  return iVar1 + (uVar2 + (in_r2 & uVar2)) * 2;
}



/* FUN_8c10ca2e @ 8c10ca2e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10ca2e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_memmove_8c10ca54)(PTR_DAT_8c10ca50,0x4c);
  return uVar1;
}



/* FUN_8c10ca58 @ 8c10ca58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10ca58(int *ar4,undefined4 ar5,int *ar6,int *ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *a6;
  int *a7;
  uint uVar5;
  int iVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = PTR_log_message_8c10cb84;
  iVar4 = *ar4;
  iVar6 = ar4[3];
  uStack_28 = *(undefined4 *)(iVar4 + 4);
  uVar5 = 0;
  uStack_24 = 0;
  *ar7 = 0;
  a6 = ar6;
  a7 = ar7;
  if (ar4[1] != 0) {
    do {
      uVar3 = ar5;
      iVar2 = (*(code *)PTR_FUN_8c10cb8c)(iVar6,ar5,a6,a7);
      if (iVar2 == 0) {
        *ar7 = *ar7 + 1;
      }
      iVar2 = (*(code *)puVar1)(iVar6,uVar3,a6,a7);
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + iVar2 + 1;
    } while (uVar5 < (uint)ar4[1]);
  }
  if (*ar7 == 0) {
    uVar3 = 0x78;
  }
  else {
    iVar4 = (**(code **)(iVar4 + 8))(*ar7 << 2,&uStack_28,a6,a7);
    *ar6 = iVar4;
    if (iVar4 == 0) {
      uVar3 = 1;
    }
    else {
      iVar4 = ar4[3];
      *ar7 = 0;
      uVar5 = 0;
      if (ar4[1] != 0) {
        do {
          uVar3 = ar5;
          iVar6 = (*(code *)PTR_FUN_8c10cb8c)(iVar4,ar5,a6,a7);
          if (iVar6 == 0) {
            iVar6 = *ar7;
            *ar7 = iVar6 + 1;
            *(uint *)(*ar6 + iVar6 * 4) = uVar5;
          }
          iVar6 = (*(code *)puVar1)(iVar4,uVar3,a6,a7);
          uVar5 = uVar5 + 1;
          iVar4 = iVar4 + iVar6 + 1;
        } while (uVar5 < (uint)ar4[1]);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* FUN_8c10cb4c @ 8c10cb4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10cb4c(int *ar4,uint ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = 0;
  if (ar5 != 0) {
    do {
      if (*ar4 == ar6) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      ar4 = ar4 + 1;
    } while (uVar1 < ar5);
  }
  return 0;
}



/* FUN_8c10cb90 @ 8c10cb90 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c10cb90(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  float *pfVar4;
  undefined4 a5;
  float *pfVar5;
  int iVar6;
  double *pdVar7;
  float fVar8;
  double in_dr2;
  double dVar9;
  undefined4 in_fr5;
  double in_xd2;
  byte in_FPSCR_CAUSE;
  byte bVar10;
  byte in_FPSCR_DN;
  byte bVar11;
  byte in_FPSCR_PR;
  byte bVar12;
  byte in_FPSCR_SZ;
  byte bVar13;
  
  if (*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') {
    a5 = *(undefined4 *)(*(int *)(ar4 + 0xc) + 4);
    pdVar1 = (double *)(*(code *)PTR_FUN_8c10ccb4)(**(undefined4 **)(ar4 + 0xc),a5,ar6,ar7);
    if (pdVar1 != (double *)0x0) {
      uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & DAT_8c10ccb8;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = (byte)((uVar3 & 0x80000) >> 0x13);
      bVar13 = (byte)((uVar3 & 0x100000) >> 0x14);
      pdVar2 = (double *)(*(code *)PTR_FUN_8c10ccbc)(**(undefined4 **)(ar4 + 0x10),a5,ar6,ar7);
      pdVar7 = *(double **)(ar4 + 0x34);
      if (bVar13 == 0) {
        in_fr5 = *(undefined4 *)(ar4 + 0x38);
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)pdVar1);
        *(undefined4 *)pdVar2 = *(undefined4 *)pdVar1;
      }
      else {
        in_xd2 = *pdVar1;
        *pdVar2 = in_xd2;
      }
      pdVar2 = (double *)((int)pdVar2 + 4);
      pfVar4 = (float *)((int)pdVar1 + *(int *)(ar4 + 0x30) * 4 + 4);
      pdVar1 = (double *)(*(int *)(ar4 + 0x28) * 4 + (int)pdVar2);
      iVar6 = *(int *)(ar4 + 0x2c);
      if (bVar13 == 0) {
        dVar9 = (double)CONCAT44(DAT_8c10ccc0,in_fr5);
      }
      else {
        dVar9 = (double)CONCAT44(_DAT_8c10ccc4,DAT_8c10ccc0);
      }
      for (; pdVar2 < pdVar1; pdVar2 = (double *)((int)pdVar2 + 4)) {
        pfVar5 = pfVar4;
        if (bVar13 == 0) {
          *(int *)pdVar2 = (int)((ulonglong)dVar9 >> 0x20);
        }
        else {
          *pdVar2 = dVar9;
        }
        while (pfVar5 < pfVar4 + iVar6) {
          if (bVar13 == 0) {
            fVar8 = *pfVar5;
            pfVar5 = pfVar5 + 1;
          }
          else {
            fVar8 = (float)((ulonglong)*(undefined8 *)pfVar5 >> 0x20);
            pfVar5 = pfVar5 + 2;
          }
          uVar3 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 |
                  (uint)bVar13 << 0x14) & DAT_8c10ccb8;
          if (bVar13 == 0) {
            in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar2,*(undefined4 *)pdVar7);
            pdVar7 = (double *)((int)pdVar7 + 4);
          }
          else {
            in_dr2 = *pdVar2;
            in_xd2 = *pdVar7;
            pdVar7 = pdVar7 + 1;
          }
          bVar10 = 0;
          bVar11 = 0;
          bVar12 = (byte)((uVar3 & 0x80000) >> 0x13);
          bVar13 = (byte)((uVar3 & 0x100000) >> 0x14);
          if (bVar12 == 0) {
            in_dr2 = (double)CONCAT44(fVar8 * SUB84(in_dr2,0) + (float)((ulonglong)in_dr2 >> 0x20),
                                      SUB84(in_dr2,0));
          }
          if (bVar13 == 0) {
            *(int *)pdVar2 = (int)((ulonglong)in_dr2 >> 0x20);
          }
          else {
            *pdVar2 = in_dr2;
          }
        }
        if (bVar13 == 0) {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)pdVar2);
        }
        else {
          in_xd2 = *pdVar2;
        }
        uVar3 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 |
                (uint)bVar13 << 0x14) & DAT_8c10ccb8;
        bVar10 = 0;
        bVar11 = 0;
        bVar12 = (byte)((uVar3 & 0x80000) >> 0x13);
        bVar13 = (byte)((uVar3 & 0x100000) >> 0x14);
        if (bVar12 == 0) {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                                    SUB84(in_dr2,0) * SUB84(dVar9,0));
        }
        else {
          in_dr2 = in_dr2 * dVar9;
        }
        if (bVar13 == 0) {
          *(int *)pdVar2 = SUB84(in_dr2,0);
        }
        else {
          *pdVar2 = in_xd2;
        }
      }
      pdVar1 = (double *)((int)pdVar1 + *(int *)(ar4 + 0x28) * -4);
      if (bVar13 == 0) {
        dVar9 = (double)CONCAT44(*(undefined4 *)pdVar1,SUB84(in_dr2,0));
      }
      else {
        dVar9 = *pdVar1;
      }
      uVar3 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 |
              (uint)bVar13 << 0x14) & DAT_8c10ccb8;
      if (bVar13 == 0) {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),_DAT_8c10ccc4);
      }
      if ((char)((uVar3 & 0x80000) >> 0x13) == '\0') {
        dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) * SUB84(dVar9,0),SUB84(dVar9,0));
      }
      else {
        dVar9 = dVar9 * dVar9;
      }
      if ((char)((uVar3 & 0x100000) >> 0x14) == '\0') {
        *(int *)pdVar1 = (int)((ulonglong)dVar9 >> 0x20);
      }
      else {
        *pdVar1 = dVar9;
      }
      iVar6 = **(int **)(ar4 + 0xc);
      return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar6 + 0x40)) ==
             *(int *)(iVar6 + 0x3c) ^ 1;
    }
  }
  return 0;
}



/* FUN_8c10cc6e @ 8c10cc6e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10cc6e(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  
  if ((ar5 & 0xff) == (int)DAT_8c10ccb0) {
    a5 = ar4[0xd];
    (**(code **)(*ar4 + 0x18))(*ar4,a5,ar6,ar7);
    (*(code *)PTR_FUN_8c10ccc8)(ar4,a5,ar6,ar7);
    return 1;
  }
  return 0;
}



/* FUN_8c10cccc @ 8c10cccc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c10ce92) */
/* WARNING: Removing unreachable block (ram,0x8c10cdf6) */
/* WARNING: Removing unreachable block (ram,0x8c10cd68) */
/* WARNING: Removing unreachable block (ram,0x8c10ce3c) */
/* WARNING: Removing unreachable block (ram,0x8c10ce6a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c10cccc(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int a4;
  uint uVar6;
  int a5;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  double in_dr0;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  undefined8 in_dr12;
  double dVar15;
  undefined4 uVar16;
  undefined8 in_dr14;
  undefined4 uVar17;
  double in_xd2;
  double in_xd14;
  undefined4 in_PR;
  short sVar18;
  uint uVar19;
  byte in_FPSCR_CAUSE;
  byte bVar20;
  byte bVar21;
  byte in_FPSCR_DN;
  byte bVar22;
  byte in_FPSCR_PR;
  byte bVar23;
  byte in_FPSCR_SZ;
  undefined1 auStack_3c [16];
  undefined8 uStack_2c;
  undefined8 uStack_24;
  
  puVar2 = PTR_FUN_8c10cf1c;
  if (in_FPSCR_SZ == 0) {
    uStack_24 = (double)CONCAT44((int)in_dr14,(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar9 = &uStack_2c;
    uStack_2c = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar9 = (undefined8 *)auStack_3c;
    uStack_24 = in_xd14;
    uStack_2c = in_dr14;
  }
  *(undefined4 *)((int)puVar9 + -4) = in_PR;
  (*(code *)PTR_FUN_8c10cf1c)(ar4,2,ar6,ar7);
  uVar17 = (undefined4)in_dr12;
  uVar16 = (undefined4)in_dr14;
  uVar7 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & _DAT_8c10cf24;
  bVar20 = 0;
  bVar21 = 0;
  bVar23 = (byte)((uVar7 & 0x80000) >> 0x13);
  bVar22 = (byte)((uVar7 & 0x100000) >> 0x14);
  if (bVar23 == 0) {
    uVar7 = (uint)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar7 = (uint)in_dr0;
  }
  uVar8 = uVar7 & 0xffff;
  ar4[10] = uVar8;
  (*(code *)puVar2)(ar4,3,ar6,ar7);
  uVar4 = ((uint)bVar20 << 0xc | (uint)bVar21 << 0x12 | (uint)bVar23 << 0x13 | (uint)bVar22 << 0x14)
          & _DAT_8c10cf24;
  bVar21 = 0;
  bVar20 = 0;
  bVar22 = (byte)((uVar4 & 0x80000) >> 0x13);
  bVar23 = (byte)((uVar4 & 0x100000) >> 0x14);
  if (bVar22 == 0) {
    sVar18 = (short)(int)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    sVar18 = (short)(int)in_dr0;
  }
  *(int *)((int)puVar9 + -0xc) = (int)sVar18;
  (*(code *)puVar2)(ar4,4,ar6,ar7);
  uVar4 = ((uint)bVar21 << 0xc | (uint)bVar20 << 0x12 | (uint)bVar22 << 0x13 | (uint)bVar23 << 0x14)
          & _DAT_8c10cf24;
  bVar20 = 0;
  bVar22 = 0;
  bVar23 = (byte)((uVar4 & 0x80000) >> 0x13);
  bVar21 = (byte)((uVar4 & 0x100000) >> 0x14);
  if (bVar23 == 0) {
    uVar4 = (uint)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar4 = (uint)in_dr0;
  }
  ar4[0xc] = uVar4 & 0xffff;
  (*(code *)puVar2)(ar4,1,ar6,ar7);
  uVar5 = ((uint)bVar20 << 0xc | (uint)bVar22 << 0x12 | (uint)bVar23 << 0x13 | (uint)bVar21 << 0x14)
          & _DAT_8c10cf24;
  uVar4 = (uVar5 & 0x80000) >> 0x13;
  cVar1 = (char)uVar4;
  if (cVar1 == '\0') {
    uVar19 = (uint)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar19 = (uint)in_dr0;
  }
  uVar19 = (uVar19 & 0xffff) - ar4[0xc];
  ar4[0xb] = uVar19;
  *(short *)(*(int *)ar4[4] + 0xc) = ((short)uVar7 + 1) * 4;
  uVar7 = _DAT_8c10cf24;
  fVar13 = (float)(int)uVar19;
  if ((int)uVar19 < 0) {
    if (cVar1 == '\0') {
      fVar13 = fVar13 + _DAT_8c10cf34;
    }
    else {
      fVar13 = SUB84((double)CONCAT44(_DAT_8c10cf34,fVar13) + (double)CONCAT44(_DAT_8c10cf34,fVar13)
                     ,0);
    }
  }
  uVar5 = uVar4 << 0x13 | uVar5 & 0x100000 | DAT_8c10cf38 & 0x3fffff;
  uVar4 = (uVar5 & 0x80000) >> 0x13;
  uVar5 = (uVar5 & 0x100000) >> 0x14;
  cVar1 = (char)uVar5;
  if (cVar1 == '\0') {
    dVar10 = (double)CONCAT44(DAT_8c10cf3c,_DAT_8c10cf2c);
  }
  else {
    dVar10 = (double)CONCAT44(_DAT_8c10cf40,DAT_8c10cf3c);
  }
  if ((char)uVar4 == '\0') {
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) /
                              (float)((ulonglong)(double)fVar13 >> 0x20),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 / (double)fVar13;
  }
  a5 = uVar19 * uVar8 * 4;
  dVar14 = (double)(ulonglong)(uint)(float)dVar10;
  if (cVar1 == '\0') {
    ar4[0xe] = (int)(float)dVar10;
  }
  else {
    *(double *)(ar4 + 0xe) = in_xd2;
  }
  a4 = *ar4;
  *(int *)((int)puVar9 + -8) = a4;
  uVar7 = (uVar4 << 0x13 | uVar5 << 0x14) & uVar7;
  bVar20 = 0;
  bVar22 = 0;
  bVar21 = (byte)((uVar7 & 0x80000) >> 0x13);
  bVar23 = (byte)(uVar7 >> 0x14);
  iVar3 = (**(code **)(a4 + 0x10))(a4,a5,ar6,ar7);
  ar4[0xd] = iVar3;
  puVar2 = PTR_thunk_FUN_8c013c88_8c10cf4c;
  if (bVar23 == 0) {
    dVar10 = (double)CONCAT44(_DAT_8c10cf40,uVar16);
    dVar15 = (double)CONCAT44(_DAT_8c10cf44,uVar17);
  }
  else {
    dVar10 = (double)CONCAT44(_DAT_8c10cf44,_DAT_8c10cf40);
    dVar15 = (double)CONCAT44(DAT_8c10cf48,_DAT_8c10cf44);
  }
  uVar7 = 0;
  if (bVar23 == 0) {
    dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),DAT_8c10cf48);
  }
  if (uVar8 != 0) {
    do {
      uVar5 = (uint)bVar20 << 0xc | (uint)bVar22 << 0x12 | (uint)bVar21 << 0x13 |
              (uint)bVar23 << 0x14 | DAT_8c10cf38;
      uVar4 = (uVar5 & 0x80000) >> 0x13;
      cVar1 = (char)uVar4;
      if (cVar1 == '\0') {
        dVar14 = (double)CONCAT44((float)(int)uVar7,SUB84(dVar14,0));
      }
      else {
        dVar14 = (double)(int)uVar7;
      }
      if ((int)uVar7 < 0) {
        if (cVar1 == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) +
                                    (float)((ulonglong)(double)_DAT_8c10cf34 >> 0x20),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 + (double)_DAT_8c10cf34;
        }
      }
      if (cVar1 == '\0') {
        dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) *
                                  (float)((ulonglong)dVar15 >> 0x20),SUB84(dVar14,0));
      }
      else {
        dVar14 = dVar14 * dVar15;
      }
      uVar5 = (uVar4 << 0x13 | uVar5 & 0x100000) & _DAT_8c10cf24 | DAT_8c10cf38 & 0x3fffff;
      uVar4 = (uVar5 & 0x80000) >> 0x13;
      dVar11 = (double)*(int *)((int)puVar9 + -0xc);
      uVar5 = (uVar4 << 0x13 | uVar5 & 0x100000) & _DAT_8c10cf24;
      if ((char)uVar4 == '\0') {
        dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) /
                                  (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar14,0));
      }
      else {
        dVar14 = dVar14 / dVar11;
      }
      dVar14 = (double)(ulonglong)(uint)(float)dVar14;
      bVar20 = 0;
      bVar22 = 0;
      bVar23 = (byte)((uVar5 & 0x80000) >> 0x13);
      bVar21 = (byte)(uVar5 >> 0x14);
      (*(code *)PTR_thunk_FUN_8c0142e4_8c10cf50)(a4,a5,ar6,ar7);
      if (bVar21 == 0) {
        dVar14 = (double)((ulonglong)dVar11 >> 0x20);
        dVar11 = in_xd2;
      }
      in_xd2 = dVar11;
      uVar4 = ((uint)bVar20 << 0xc | (uint)bVar22 << 0x12 | (uint)bVar23 << 0x13 |
              (uint)bVar21 << 0x14) & _DAT_8c10cf24;
      dVar11 = dVar10;
      fVar13 = _DAT_8c10cf58;
      if (bVar21 == 0) {
        uVar17 = (undefined4)((ulonglong)dVar10 >> 0x20);
        dVar10 = (double)CONCAT44(uVar17,uVar17);
        dVar11 = in_xd14;
        fVar13 = DAT_8c10cf54;
      }
      in_xd14 = dVar11;
      bVar21 = (byte)((uVar4 & 0x80000) >> 0x13);
      bVar23 = (byte)((uVar4 & 0x100000) >> 0x14);
      if (bVar21 == 0) {
        dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),
                                  fVar13 * SUB84(dVar14,0) + SUB84(dVar10,0));
      }
      uVar4 = 0;
      dVar11 = in_xd2;
      if (uVar19 != 0) {
        do {
          uVar6 = ((uint)bVar21 << 0x13 | (uint)bVar23 << 0x14) & _DAT_8c10cf24;
          *(int *)((int)puVar9 + -0x10) = iVar3;
          uVar5 = (uVar6 & 0x80000) >> 0x13;
          iVar3 = iVar3 + 4;
          fVar13 = (float)(int)uVar4;
          if ((int)uVar4 < 0) {
            if ((char)uVar5 == '\0') {
              fVar13 = fVar13 + _DAT_8c10cf34;
            }
            else {
              fVar13 = SUB84((double)CONCAT44(_DAT_8c10cf34,fVar13) +
                             (double)CONCAT44(_DAT_8c10cf34,fVar13),0);
            }
          }
          uVar5 = uVar5 << 0x13 | uVar6 & 0xfff00000 | DAT_8c10cf38 & 0x3fffff;
          uVar6 = (uVar5 & 0x80000) >> 0x13;
          uVar5 = (uVar5 & 0x100000) >> 0x14;
          dVar14 = (double)fVar13;
          if ((char)uVar5 == '\0') {
            dVar12 = (double)CONCAT44(_DAT_8c10cf58,_DAT_8c10cf2c);
          }
          else {
            dVar12 = (double)CONCAT44(PTR_FUN_8c10cf5c,_DAT_8c10cf58);
          }
          if ((char)uVar6 == '\0') {
            dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) +
                                      (float)((ulonglong)dVar12 >> 0x20),SUB84(dVar14,0));
          }
          else {
            dVar14 = dVar14 + dVar12;
          }
          uVar6 = (uVar6 << 0x13 | uVar5 << 0x14) & _DAT_8c10cf24;
          uVar5 = (uVar6 & 0x80000) >> 0x13;
          fVar13 = (float)(int)uVar7;
          if ((int)uVar7 < 0) {
            if ((char)uVar5 == '\0') {
              fVar13 = fVar13 + _DAT_8c10cf34;
            }
            else {
              fVar13 = SUB84((double)CONCAT44(_DAT_8c10cf34,fVar13) +
                             (double)CONCAT44(_DAT_8c10cf34,fVar13),0);
            }
          }
          uVar6 = uVar5 << 0x13 | uVar6 & 0xfff00000 | DAT_8c10cf38 & 0x3fffff;
          uVar5 = (uVar6 & 0x80000) >> 0x13;
          uVar6 = (uVar5 << 0x13 | uVar6 & 0x100000) & _DAT_8c10cf24;
          if ((char)uVar5 == '\0') {
            dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) *
                                      (float)((ulonglong)(double)fVar13 >> 0x20) *
                                      (float)((ulonglong)dVar15 >> 0x20),SUB84(dVar14,0));
          }
          else {
            dVar14 = dVar14 * (double)fVar13 * dVar15;
          }
          uVar5 = (uVar6 & 0x80000) >> 0x13;
          fVar13 = (float)(int)uVar19;
          if ((int)uVar19 < 0) {
            if ((char)uVar5 == '\0') {
              fVar13 = fVar13 + _DAT_8c10cf34;
            }
            else {
              fVar13 = SUB84((double)CONCAT44(_DAT_8c10cf34,fVar13) +
                             (double)CONCAT44(_DAT_8c10cf34,fVar13),0);
            }
          }
          uVar6 = uVar5 << 0x13 | uVar6 & 0xfff00000 | DAT_8c10cf38 & 0x3fffff;
          uVar5 = (uVar6 & 0x80000) >> 0x13;
          dVar12 = (double)fVar13;
          uVar6 = (uVar5 << 0x13 | uVar6 & 0x100000) & _DAT_8c10cf24;
          if ((char)uVar5 == '\0') {
            dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) /
                                      (float)((ulonglong)dVar12 >> 0x20),SUB84(dVar14,0));
          }
          else {
            dVar14 = dVar14 / dVar12;
          }
          dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),(float)dVar14);
          bVar20 = 0;
          bVar22 = 0;
          bVar23 = (byte)((uVar6 & 0x80000) >> 0x13);
          bVar21 = (byte)(uVar6 >> 0x14);
          (*(code *)puVar2)(a4,a5,ar6,ar7);
          uVar4 = uVar4 + 1;
          in_xd2 = in_xd14;
          if (bVar21 == 0) {
            dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),SUB84(dVar10,0));
            in_xd2 = dVar11;
          }
          uVar5 = ((uint)bVar20 << 0xc | (uint)bVar22 << 0x12 | (uint)bVar23 << 0x13 |
                  (uint)bVar21 << 0x14) & _DAT_8c10cf24;
          bVar21 = (byte)((uVar5 & 0x80000) >> 0x13);
          bVar23 = (byte)((uVar5 & 0x100000) >> 0x14);
          if (bVar21 == 0) {
            dVar14 = (double)(ulonglong)(uint)(SUB84(dVar14,0) * (float)((ulonglong)dVar12 >> 0x20))
            ;
          }
          else {
            dVar14 = dVar14 * dVar12;
          }
          if (bVar23 == 0) {
            *(int *)*(double **)((int)puVar9 + -0x10) = SUB84(dVar14,0);
          }
          else {
            **(double **)((int)puVar9 + -0x10) = in_xd2;
          }
          dVar11 = in_xd2;
        } while (uVar4 < uVar19);
      }
      bVar22 = 0;
      bVar20 = 0;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  return 0;
}



/* FUN_8c10cefa @ 8c10cefa callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10cefa(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c10cf68)(ar4,ar5,1,1);
  return uVar1;
}



/* FUN_8c10cf6c @ 8c10cf6c callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10cf6c(int *ar4,undefined4 *ar5,ushort *ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  piVar2 = (int *)*ar5;
  iVar3 = *ar4;
  iVar1 = 0;
  if (*ar6 != 0) {
    do {
      if (*piVar2 != 0) {
        (**(code **)(iVar3 + 0x18))(iVar3,*piVar2,uVar4);
        (**(code **)(iVar3 + 0x18))(iVar3,piVar2[2]);
        *piVar2 = 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 < (int)(uint)*ar6);
  }
  if (*ar6 != (ushort)ar7) {
    if (*ar6 != 0) {
      (**(code **)(iVar3 + 0x18))(iVar3,*ar5);
    }
    if ((ushort)ar7 != 0) {
      uVar4 = (**(code **)(iVar3 + 0x14))(iVar3,(ushort)ar7,0xc);
      *ar5 = uVar4;
    }
    *ar6 = (ushort)ar7;
  }
  return *ar5;
}



/* FUN_8c10cf82 @ 8c10cf82 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10cf82(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  ushort unaff_r8;
  int iVar2;
  undefined4 *unaff_r10;
  int unaff_r11;
  ushort *unaff_r12;
  int *piVar3;
  int a4;
  
  piVar3 = (int *)*unaff_r10;
  a4 = *ar4;
  iVar2 = unaff_r11;
  if (*unaff_r12 != 0) {
    do {
      if (*piVar3 != 0) {
        (**(code **)(a4 + 0x18))(a4,*piVar3,ar6,ar7);
        (**(code **)(a4 + 0x18))(a4,piVar3[2],ar6,ar7);
        *piVar3 = unaff_r11;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar2 < (int)(uint)*unaff_r12);
  }
  if (*unaff_r12 != unaff_r8) {
    if (*unaff_r12 != 0) {
      (**(code **)(a4 + 0x18))(a4,*unaff_r10,ar6,ar7);
    }
    if (unaff_r8 != 0) {
      uVar1 = (**(code **)(a4 + 0x14))(a4,(uint)unaff_r8,0xc,ar7);
      *unaff_r10 = uVar1;
    }
    *unaff_r12 = unaff_r8;
  }
  return *unaff_r10;
}



/* FUN_8c10d016 @ 8c10d016 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10d016(int *ar4,int *ar5,uint ar6,uint ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint a6;
  uint a7;
  int iVar3;
  int in_stack_00000000;
  
  iVar3 = *ar4;
  a6 = ar6;
  a7 = ar7;
  if (*ar5 != 0) {
    (**(code **)(iVar3 + 0x18))(iVar3,*ar5,ar6,ar7);
    (**(code **)(iVar3 + 0x18))(iVar3,ar5[2],a6,a7);
  }
  *(short *)(ar5 + 1) = (short)ar6;
  *(short *)((int)ar5 + 6) = (short)ar7;
  iVar1 = (**(code **)(iVar3 + 0x10))(iVar3,(ar6 & 0xffff) << 2,a6,a7);
  *ar5 = iVar1;
  iVar3 = (**(code **)(iVar3 + 0x14))(iVar3,ar6 & 0xffff,1,a7);
  ar5[2] = iVar3;
  if ((*ar5 != 0) && (ar5[2] != 0)) {
    iVar3 = 0;
    if ((ar6 & 0xffff) != 0) {
      do {
        iVar1 = iVar3 + 1;
        *(int *)(*ar5 + iVar3 * 4) = in_stack_00000000;
        in_stack_00000000 = in_stack_00000000 + (ar7 & 0xffff);
        iVar3 = iVar1;
      } while (iVar1 < (int)(ar6 & 0xffff));
    }
    return 0;
  }
  uVar2 = (*(code *)PTR_FUN_8c10d1ac)(ar4,2);
  return uVar2;
}



/* FUN_8c10d0da @ 8c10d0da callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10d0da(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint a6;
  uint a6_00;
  int iVar2;
  
  a6_00 = ar5 * 2;
  if (*(ushort *)(*(int *)(ar4 + 100) + 0xc) == a6_00) {
LAB_8c10d11a:
    a6 = ar5 * 3;
    if (*(ushort *)(**(int **)(ar4 + 0x60) + 0xc) != a6) {
      ar7 = 1;
      uVar1 = 1;
      iVar2 = (*(code *)PTR_FUN_8c10d1b0)(**(undefined4 **)(ar4 + 0x60),1,a6,1);
      if (iVar2 == 0) goto LAB_8c10d152;
      iVar2 = (*(code *)PTR_FUN_8c10d1b4)(**(undefined4 **)(ar4 + 0x60),uVar1,a6,ar7);
      *(int *)(ar4 + 0x28) = iVar2;
      *(uint *)(ar4 + 0x2c) = a6_00 + iVar2;
    }
    (*(code *)PTR_FUN_8c10d1b8)
              (**(undefined4 **)(ar4 + 0x60),(*(undefined4 **)(ar4 + 0x60))[1],a6,ar7);
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(ar4 + 100);
    ar7 = *(undefined4 *)(iVar2 + 0x18);
    iVar2 = (*(code *)PTR_FUN_8c10d1b0)(iVar2,*(undefined4 *)(iVar2 + 8),a6_00,ar7);
    if (iVar2 != 0) goto LAB_8c10d11a;
LAB_8c10d152:
    uVar1 = 1;
  }
  return uVar1;
}



/* FUN_8c10d196 @ 8c10d196 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10d196(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined2 *)(ar4 + 1) = (undefined2)ar5;
  *(undefined2 *)((int)ar4 + 6) = (undefined2)ar6;
  *ar4 = ar7;
  return 0;
}



/* FUN_8c10d1bc @ 8c10d1bc callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10d1bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar8 = 0;
  if (*(short *)(ar4 + 0x30) != 0) {
    do {
      iVar11 = 0;
      uVar12 = (uint)DAT_8c10d2e2;
      uVar1 = *(ushort *)
               ((uint)*(ushort *)(DAT_8c10d2e0 + ar4) * (uint)*(ushort *)(ar4 + 0x30) * 2 +
                *(int *)(ar4 + 0x7c) + uVar8 * 2);
      uVar14 = (uint)(short)uVar1;
      iVar9 = *(int *)(uVar8 * 0xc + *(int *)(ar4 + 0x70));
      cVar10 = '\x01';
      if (*(undefined **)(ar4 + 0x68) == PTR_FUN_8c10d2ec) {
        cVar10 = '\x11';
        if ((uVar1 & 1) == 0) {
          iVar11 = 4;
        }
        else {
          uVar12 = 0xf;
        }
        uVar14 = (uint)(uVar1 >> 1);
      }
      uVar7 = 0;
      uVar13 = (uint)*(ushort *)(uVar8 * 0xc + *(int *)(ar4 + 0x70) + 4);
      if (uVar13 != 0) {
        do {
          iVar4 = uVar7 * 4;
          pcVar6 = (char *)(*(int *)(DAT_8c10d2e4 + ar4 + uVar8 * 4) + uVar7);
          uVar7 = uVar7 + 1;
          uVar5 = (uint)*(byte *)(*(int *)(iVar4 + iVar9) + (uVar14 & 0xffff)) & uVar12 & 0xff;
          uVar2 = -iVar11;
          if ((int)uVar2 < 0) {
            cVar3 = (char)((int)uVar5 >> (~uVar2 & 0x1f) + 1);
          }
          else {
            cVar3 = (char)(uVar5 << (uVar2 & 0x1f));
          }
          *pcVar6 = cVar3 * cVar10;
        } while (uVar7 < uVar13);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ushort *)(ar4 + 0x30));
  }
  return 0x30;
}



/* FUN_8c10d29c @ 8c10d29c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c10d29c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)DAT_8c10d2e6;
  *(undefined4 *)(iVar1 + ar4) = 0;
  *(undefined4 *)(iVar1 + 4 + ar4) = 0;
  iVar3 = *(int *)(DAT_8c10d2e8 + ar4);
  iVar1 = DAT_8c10d2e8 + 0xc;
  iVar2 = 0;
  if (*(short *)(iVar1 + ar4) != 0) {
    do {
      iVar1 = 0;
      if (*(short *)(iVar3 + 4) != 0) {
        do {
          *(undefined1 *)(*(int *)(iVar3 + 8) + iVar1) = 0;
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(uint)*(ushort *)(iVar3 + 4));
      }
      iVar1 = (int)DAT_8c10d2ea;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < (int)(uint)*(ushort *)(iVar1 + ar4));
  }
  return iVar1;
}



/* FUN_8c10d2f0 @ 8c10d2f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c10d2f0(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (int)DAT_8c10d3e4;
  *(undefined4 *)(iVar1 + ar4) = *ar5;
  puVar3 = ar5 + 2;
  *(undefined4 *)(iVar1 + 4 + ar4) = ar5[1];
  iVar1 = (int)DAT_8c10d3e6;
  iVar4 = 0;
  if (*(short *)(iVar1 + ar4) != 0) {
    do {
      iVar5 = iVar4 * 0xc;
      iVar1 = 0;
      if (*(short *)(*(int *)(DAT_8c10d3e8 + ar4) + iVar5 + 4) != 0) {
        do {
          puVar2 = (undefined1 *)((int)puVar3 + 1);
          *(undefined1 *)(*(int *)(DAT_8c10d3ea + ar4 + iVar4 * 4) + iVar1) = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 2);
          *(undefined1 *)(*(int *)(*(int *)(DAT_8c10d3e8 + ar4) + iVar5 + 8) + iVar1) = *puVar2;
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(uint)*(ushort *)(*(int *)(DAT_8c10d3e8 + ar4) + iVar5 + 4));
      }
      iVar1 = (int)DAT_8c10d3e6;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)(iVar1 + ar4));
  }
  return iVar1;
}



/* FUN_8c10d366 @ 8c10d366 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c10d366(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar2 = (int)DAT_8c10d3e4;
  *ar5 = *(undefined4 *)(iVar2 + ar4);
  iVar3 = (int)DAT_8c10d3e6;
  ar5[1] = *(undefined4 *)(iVar2 + 4 + ar4);
  puVar5 = ar5 + 2;
  iVar2 = 0;
  if (*(short *)(iVar3 + ar4) != 0) {
    do {
      iVar6 = iVar2 * 0xc;
      iVar3 = 0;
      if (*(short *)(*(int *)(DAT_8c10d3e8 + ar4) + iVar6 + 4) != 0) {
        do {
          iVar4 = (int)DAT_8c10d3e8;
          *(undefined1 *)puVar5 = *(undefined1 *)(*(int *)(DAT_8c10d3ea + ar4 + iVar2 * 4) + iVar3);
          puVar1 = (undefined1 *)(*(int *)(*(int *)(iVar4 + ar4) + iVar6 + 8) + iVar3);
          iVar3 = iVar3 + 1;
          iVar4 = (int)DAT_8c10d3e8;
          *(undefined1 *)((int)puVar5 + 1) = *puVar1;
          puVar5 = (undefined4 *)((int)puVar5 + 2);
        } while (iVar3 < (int)(uint)*(ushort *)(*(int *)(iVar4 + ar4) + iVar6 + 4));
      }
      iVar3 = (int)DAT_8c10d3e6;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(iVar3 + ar4));
  }
  return iVar3;
}



/* FUN_8c10d3ec @ 8c10d3ec callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c10d3ec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  short sVar4;
  ushort *puVar5;
  short *psVar6;
  
  iVar1 = (int)DAT_8c10d450;
  puVar3 = *(ushort **)(iVar1 + ar4);
  puVar5 = *(ushort **)(iVar1 + -0xc + ar4);
  uVar2 = (uint)DAT_8c10d452;
  psVar6 = *(short **)(uVar2 + ar4);
  puVar5 = puVar3 + ((uint)puVar5[*(ushort *)(iVar1 + -0x18 + ar4)] - (uint)*puVar5);
  for (; puVar3 < puVar5; puVar3 = puVar3 + 1) {
    uVar2 = (uint)(short)*puVar3;
    sVar4 = (short)((int)uVar2 >> 2);
    if ((uVar2 & 1) != 0) {
      uVar2 = (uint)DAT_8c10d454;
      sVar4 = sVar4 + *(short *)(uVar2 + ar4);
    }
    if ((*puVar3 & 2) != 0) {
      uVar2 = (uint)DAT_8c10d456;
      sVar4 = sVar4 + *(short *)(uVar2 + ar4);
    }
    *psVar6 = sVar4;
    psVar6 = psVar6 + 1;
  }
  return uVar2;
}



/* FUN_8c10d458 @ 8c10d458 callers=0 callees=6 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10d458(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 a6;
  undefined4 a5;
  uint uVar3;
  uint uVar4;
  int *a5_00;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int a4;
  
  a4 = *ar4;
  iVar7 = ar5;
  iVar1 = (**(code **)(DAT_8c10d5f6 + ar5))(ar5,ar5,ar6,ar7);
  uVar2 = (**(code **)(ar5 + 0x14))(ar5,iVar7,ar6,ar7);
  *(short *)((int)DAT_8c10d5f8 + (int)ar4) = (short)uVar2;
  uVar2 = (**(code **)(ar5 + 0x18))(ar5,iVar7,ar6,ar7);
  *(short *)((int)DAT_8c10d5fa + (int)ar4) = (short)uVar2;
  uVar2 = (**(code **)(ar5 + 0x10))(ar5,iVar7,ar6,ar7);
  *(short *)((int)DAT_8c10d5fc + (int)ar4) = (short)uVar2;
  uVar2 = (**(code **)(ar5 + 0x28))(ar5,iVar7,ar6,ar7);
  *(short *)((int)DAT_8c10d5fe + (int)ar4) = (short)uVar2;
  uVar2 = (**(code **)(ar5 + 0x20))(ar5,iVar7,ar6,ar7);
  *(short *)((int)DAT_8c10d5f6 + (int)ar4) = (short)uVar2;
  *(short *)(DAT_8c10d5f6 + 4 + (int)ar4) = -*(short *)((int)DAT_8c10d5f6 + (int)ar4);
  uVar2 = (**(code **)(ar5 + 0x78))(ar5,iVar7,ar6,ar7);
  *(undefined4 *)((int)DAT_8c10d600 + (int)ar4) = uVar2;
  uVar2 = (**(code **)(ar5 + 0x7c))(ar5,iVar7,ar6,ar7);
  *(undefined4 *)((int)DAT_8c10d602 + (int)ar4) = uVar2;
  uVar2 = (**(code **)(DAT_8c10d604 + ar5))(ar5,iVar7,ar6,ar7);
  *(undefined4 *)((int)DAT_8c10d606 + (int)ar4) = uVar2;
  if (*(int *)((int)DAT_8c10d608 + (int)ar4) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c10d608 + (int)ar4),ar6,ar7);
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c10d60a + (int)ar4),ar6,ar7);
  }
  uVar2 = (**(code **)(a4 + 0x10))(a4,(uint)*(ushort *)((int)DAT_8c10d5fa + (int)ar4) << 1,ar6,ar7);
  iVar7 = (int)DAT_8c10d5f6;
  *(undefined4 *)((int)DAT_8c10d608 + (int)ar4) = uVar2;
  iVar7 = ((uint)(*(ushort **)((int)DAT_8c10d602 + (int)ar4))[*(ushort *)(iVar7 + (int)ar4)] -
          (uint)**(ushort **)((int)DAT_8c10d602 + (int)ar4)) * 2;
  uVar2 = (**(code **)(a4 + 0x10))(a4,iVar7,ar6,ar7);
  *(undefined4 *)((int)DAT_8c10d60a + (int)ar4) = uVar2;
  FUN_8c10d3ec(ar4,iVar7,ar6,ar7);
  uVar2 = (**(code **)(ar5 + 0x38))(ar5,iVar7,ar6,ar7);
  *(short *)((int)DAT_8c10d60c + (int)ar4) = (short)uVar2;
  uVar2 = (**(code **)(ar5 + 0x70))(ar5,iVar7,ar6,ar7);
  a6 = (**(code **)(ar5 + 8))(ar5,iVar7,ar6,ar7);
  a5 = (**(code **)(ar5 + 0xc))(ar5,iVar7,a6,ar7);
  uVar3 = FUN_8c10d196(ar4 + 0x1f,a5,a6,uVar2);
  if ((uVar3 & 0xff) == 0) {
    *(int **)((int)DAT_8c10d6c2 + (int)ar4) = ar4 + 0x1f;
    uVar2 = (**(code **)(ar5 + 8))(ar5,a5,a6,uVar2);
    iVar8 = (int)DAT_8c10d6c4;
    *(short *)(ar4 + 0xc) = (short)uVar2;
    iVar8 = iVar8 + (int)ar4;
    uVar3 = (uint)(short)ar4[0xc];
    a5_00 = ar4 + 0x1c;
    iVar7 = FUN_8c10cf6c(ar4,a5_00,iVar8,uVar3);
    if (iVar7 != 0) {
      uVar10 = 0;
      if ((short)ar4[0xc] != 0) {
        do {
          uVar4 = uVar10;
          uVar2 = (**(code **)(DAT_8c10d6c6 + ar5))(ar5,uVar10,iVar8,uVar3);
          (**(code **)(DAT_8c10d6c8 + ar5))(uVar2,uVar4,iVar8,uVar3);
          if (iVar1 == 0) {
            uVar3 = (**(code **)(ar5 + 0x68))(uVar2,uVar4,iVar8,uVar3);
          }
          else {
            iVar7 = (**(code **)(ar5 + 0x68))(uVar2,uVar4,iVar8,uVar3);
            uVar3 = iVar7 + 1U >> 1;
          }
          iVar8 = (**(code **)(ar5 + 0x60))(uVar2,uVar4,iVar8,uVar3);
          iVar7 = uVar10 * 0xc + ar4[0x1c];
          uVar4 = FUN_8c10d016(ar4,iVar7,iVar8,uVar3);
          if ((uVar4 & 0xff) != 0) {
            return 1;
          }
          iVar9 = uVar10 * 4;
          if (*(int *)((int)ar4 + iVar9 + DAT_8c10d7e4) != 0) {
            iVar7 = *(int *)((int)ar4 + iVar9 + DAT_8c10d7e4);
            (**(code **)(a4 + 0x18))(a4,iVar7,iVar8,uVar3);
          }
          pcVar5 = *(code **)(a4 + 0x10);
          iVar6 = (int)DAT_8c10d7e4;
          a5_00 = (int *)(**(code **)(ar5 + 0x60))(uVar2,iVar7,iVar8,uVar3);
          uVar2 = (*pcVar5)(a4,a5_00,iVar8,uVar3);
          *(undefined4 *)((int)ar4 + iVar9 + iVar6) = uVar2;
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(ar4 + 0xc));
      }
      ar4[0x21] = ar4[0x1c];
      *(undefined2 *)(ar4 + 0x24) = *(undefined2 *)((int)ar4 + 0x8e);
      uVar2 = (**(code **)(ar5 + 0x10))(ar5,a5_00,iVar8,uVar3);
      uVar10 = FUN_8c10d0da(ar4,uVar2,iVar8,uVar3);
      if ((uVar10 & 0xff) == 0) {
        if (iVar1 == 0) {
          ar4[0x1a] = (int)PTR_FUN_8c10d7f0;
        }
        else {
          ar4[0x1a] = (int)PTR_FUN_8c10d7ec;
        }
        FUN_8c10d1bc(ar4,uVar2,iVar8,uVar3);
        return 0;
      }
    }
  }
  return 1;
}



/* FUN_8c10d7f4 @ 8c10d7f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c10d7f4(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  ushort *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *a7;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iStack_3c;
  ushort *puStack_38;
  short *psStack_30;
  
  iVar9 = *(int *)(DAT_8c10d8da + ar4);
  piVar11 = (int *)(ar4 + 0x34);
  iVar1 = (int)DAT_8c10d8dc;
  piVar12 = piVar11 + ar6 + -1;
  uVar3 = (uint)**(ushort **)(ar4 + 0x28);
  psStack_30 = *(short **)(iVar1 + 0x14 + ar4);
  iVar13 = ar6 * *(short *)(iVar1 + 4 + ar4);
  iVar10 = **(int **)(DAT_8c10d8da + -0x24 + ar4) + iVar13 * 2;
  if (uVar3 == *(ushort *)(DAT_8c10d8de + ar4)) {
    puVar4 = (ushort *)(uVar3 * 2 + ar5);
    a7 = (ushort *)((uint)*(ushort *)(iVar1 + ar4) * 2 + ar5);
    puVar8 = (ushort *)(ar6 * uVar3 * 2 + iVar10 + -2);
    while (puVar4 = puVar4 + -1, a7 <= puVar4) {
      *puVar4 = (ushort)*(byte *)(*piVar12 + (uint)*puVar8);
      for (piVar5 = piVar11 + ar6 + -2; puVar8 = puVar8 + -1, piVar11 <= piVar5;
          piVar5 = piVar5 + -1) {
        *puVar4 = (ushort)*(byte *)(*piVar5 + (uint)*puVar8) + *puVar4;
      }
    }
    (*(code *)PTR_memset_8c10d8e4)
              (*(int *)(ar4 + 0x2c) + (uint)*(ushort *)(DAT_8c10d8dc + ar4),0,
               uVar3 - *(ushort *)(DAT_8c10d8dc + ar4),a7);
  }
  else {
    uVar7 = *(ushort *)(iVar1 + ar4) + 1;
    puVar4 = (ushort *)(uVar7 * 2 + *(int *)(ar4 + 0x28));
    if (uVar7 <= uVar3) {
      do {
        uVar6 = (uint)*puVar4;
        puStack_38 = (ushort *)(ar6 * uVar6 * 2 + iVar10);
        puVar8 = (ushort *)(uVar6 * 2 + ar5);
        *puVar8 = (ushort)*(byte *)(*piVar11 + (uint)*puStack_38);
        for (piVar5 = (int *)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
          puStack_38 = puStack_38 + 1;
          *puVar8 = (ushort)*(byte *)(*piVar5 + (uint)*puStack_38) + *puVar8;
        }
        uVar7 = uVar7 + 1;
        *(undefined1 *)(*(int *)(ar4 + 0x2c) + uVar6) = 0;
        puVar4 = puVar4 + 1;
      } while ((int)uVar7 <= (int)uVar3);
    }
  }
  iStack_3c = 0;
  puVar4 = *(ushort **)(DAT_8c10d9c8 + ar4) + **(ushort **)(DAT_8c10d9c8 + ar4);
  if (*(short *)(DAT_8c10d9ca + ar4) != 0) {
    do {
      uVar3 = ar6 * 0xff;
      while (puVar4 < (ushort *)
                      ((uint)*(ushort *)(iStack_3c * 2 + *(int *)(DAT_8c10d9c8 + ar4) + 2) * 2 +
                      *(int *)(DAT_8c10d9c8 + ar4))) {
        if (*puVar4 == *(ushort *)(DAT_8c10d9cc + ar4)) {
          uVar7 = (uint)(ushort)ar7;
        }
        else {
          puVar8 = (ushort *)((uint)*puVar4 * ar6 * 2 + iVar10 + iVar13 * -2);
          uVar7 = (uint)*(byte *)(*piVar11 + (uint)*puVar8);
          for (piVar5 = (int *)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
            puVar8 = puVar8 + 1;
            uVar7 = uVar7 + *(byte *)(*piVar5 + (uint)*puVar8);
          }
        }
        puVar4 = puVar4 + 1;
        if (uVar7 < uVar3) {
          uVar3 = uVar7;
        }
      }
      *(short *)(iStack_3c * 2 + iVar9) = (short)uVar3;
      iStack_3c = iStack_3c + 1;
    } while (iStack_3c < (int)(uint)*(ushort *)(DAT_8c10da90 + ar4));
  }
  puVar4 = *(ushort **)(DAT_8c10da92 + ar4);
  iVar1 = DAT_8c10da92 + -0xc;
  puVar4 = puVar4 + *puVar4;
  iVar10 = 0;
  if (*(short *)(iVar1 + ar4) != 0) {
    do {
      iVar1 = (uint)*(ushort *)((uint)*puVar4 * 2 + iVar9) + (int)*psStack_30;
      while( true ) {
        puVar4 = puVar4 + 1;
        psStack_30 = psStack_30 + 1;
        if ((ushort *)
            ((uint)*(ushort *)(iVar10 * 2 + *(int *)(DAT_8c10da92 + ar4) + 2) * 2 +
            *(int *)(DAT_8c10da92 + ar4)) <= puVar4) break;
        iVar13 = (uint)*(ushort *)((uint)*puVar4 * 2 + iVar9) + (int)*psStack_30;
        if (iVar13 < iVar1) {
          iVar1 = iVar13;
        }
      }
      if (iVar1 < 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = (undefined2)iVar1;
      }
      *(undefined2 *)(ar5 + iVar10 * 2) = uVar2;
      iVar10 = iVar10 + 1;
      iVar1 = (int)DAT_8c10da94;
    } while (iVar10 < (int)(uint)*(ushort *)(iVar1 + ar4));
  }
  return iVar1;
}



/* FUN_8c10da96 @ 8c10da96 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c10dc14) */
/* WARNING: Removing unreachable block (ram,0x8c10db64) */
/* WARNING: Removing unreachable block (ram,0x8c10db3e) */
/* WARNING: Removing unreachable block (ram,0x8c10dbf2) */
/* WARNING: Removing unreachable block (ram,0x8c10dca4) */
/* WARNING: Removing unreachable block (ram,0x8c10dcc0) */
/* WARNING: Unknown calling convention */

int FUN_8c10da96(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  ushort *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  uint uStack_44;
  ushort *puStack_40;
  short *psStack_2c;
  
  piVar11 = (int *)(ar4 + 0x34);
  iVar3 = *(int *)(DAT_8c10db9a + ar4);
  iVar1 = (int)DAT_8c10db9c;
  psStack_2c = *(short **)(iVar1 + 0x28 + ar4);
  uStack_44 = (uint)*(ushort *)(iVar1 + 0x14 + ar4);
  uVar10 = (uint)**(ushort **)(ar4 + 0x28);
  iVar13 = *(short *)(iVar1 + 0x18 + ar4) * ar6;
  piVar12 = piVar11 + ar6 + -1;
  iVar1 = **(int **)(iVar1 + ar4) + iVar13 * 2;
  if (uVar10 == *(ushort *)(DAT_8c10db9e + ar4)) {
    puVar4 = (ushort *)(uVar10 * 2 + ar5);
    puVar8 = (ushort *)(ar6 * uVar10 * 2 + iVar1 + -2);
    while (puVar4 = puVar4 + -1, (ushort *)(uStack_44 * 2 + ar5) <= puVar4) {
      *puVar4 = (ushort)*(byte *)(*piVar12 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2) & 0xf0;
      for (piVar5 = piVar11 + ar6 + -2; puVar8 = puVar8 + -1, piVar11 <= piVar5;
          piVar5 = piVar5 + -1) {
        *puVar4 = ((ushort)*(byte *)(*piVar5 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2) & 0xf0)
                  + *puVar4;
      }
    }
    (*(code *)PTR_memset_8c10dba8)
              (*(int *)(ar4 + 0x2c) + (uint)*(ushort *)(DAT_8c10dba0 + ar4),0,
               uVar10 - *(ushort *)(DAT_8c10dba0 + ar4),puVar8);
  }
  else {
    uStack_44 = uStack_44 + 1;
    puStack_40 = (ushort *)(uStack_44 * 2 + *(int *)(ar4 + 0x28));
    if (uStack_44 <= uVar10) {
      do {
        uVar6 = (uint)*puStack_40;
        puVar4 = (ushort *)(ar6 * uVar6 * 2 + iVar1);
        puVar8 = (ushort *)(uVar6 * 2 + ar5);
        *puVar8 = (ushort)*(byte *)((uint)(*puVar4 >> 1) + *piVar11) << ((*puVar4 & 1) << 2) & 0xf0;
        for (piVar5 = (int *)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
          puVar4 = puVar4 + 1;
          *puVar8 = ((ushort)*(byte *)((uint)(*puVar4 >> 1) + *piVar5) << ((*puVar4 & 1) << 2) &
                    0xf0) + *puVar8;
        }
        *(undefined1 *)(*(int *)(ar4 + 0x2c) + uVar6) = 0;
        uStack_44 = uStack_44 + 1;
        puStack_40 = puStack_40 + 1;
      } while ((int)uStack_44 <= (int)uVar10);
    }
  }
  uVar10 = (uint)DAT_8c10dcce;
  uStack_44 = 0;
  puVar4 = *(ushort **)(DAT_8c10dccc + ar4) + **(ushort **)(DAT_8c10dccc + ar4);
  if (*(short *)((uVar10 - 0x58) + ar4) != 0) {
    do {
      uVar6 = ar6 * 0xff;
      while (puVar4 < (ushort *)
                      ((uint)*(ushort *)(uStack_44 * 2 + *(int *)(DAT_8c10dccc + ar4) + 2) * 2 +
                      *(int *)(DAT_8c10dccc + ar4))) {
        if (*puVar4 == *(ushort *)(DAT_8c10dcd0 + ar4)) {
          uVar7 = (uint)(ushort)ar7;
        }
        else {
          puVar8 = (ushort *)((uint)*puVar4 * ar6 * 2 + iVar1 + iVar13 * -2);
          uVar7 = (uint)*(byte *)(*piVar11 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2) & uVar10;
          for (piVar5 = (int *)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
            puVar8 = puVar8 + 1;
            uVar7 = uVar7 + ((uint)*(byte *)(*piVar5 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2)
                            & uVar10);
          }
        }
        puVar4 = puVar4 + 1;
        if (uVar7 < uVar6) {
          uVar6 = uVar7;
        }
      }
      *(short *)(iVar3 + uStack_44 * 2) = (short)uVar6;
      uStack_44 = uStack_44 + 1;
    } while ((int)uStack_44 < (int)(uint)*(ushort *)(DAT_8c10dda4 + ar4));
  }
  puVar4 = *(ushort **)(DAT_8c10dda6 + ar4);
  iVar1 = DAT_8c10dda6 + -0xc;
  puVar4 = puVar4 + *puVar4;
  iVar13 = 0;
  if (*(short *)(iVar1 + ar4) != 0) {
    do {
      iVar1 = (uint)*(ushort *)(iVar3 + (uint)*puVar4 * 2) + (int)*psStack_2c;
      while( true ) {
        puVar4 = puVar4 + 1;
        psStack_2c = psStack_2c + 1;
        if ((ushort *)
            ((uint)*(ushort *)(iVar13 * 2 + *(int *)(DAT_8c10dda6 + ar4) + 2) * 2 +
            *(int *)(DAT_8c10dda6 + ar4)) <= puVar4) break;
        iVar9 = (uint)*(ushort *)(iVar3 + (uint)*puVar4 * 2) + (int)*psStack_2c;
        if (iVar9 < iVar1) {
          iVar1 = iVar9;
        }
      }
      if (iVar1 < 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = (undefined2)iVar1;
      }
      *(undefined2 *)(ar5 + iVar13 * 2) = uVar2;
      iVar13 = iVar13 + 1;
      iVar1 = (int)DAT_8c10dda8;
    } while (iVar13 < (int)(uint)*(ushort *)(iVar1 + ar4));
  }
  return iVar1;
}



/* FUN_8c10ddaa @ 8c10ddaa callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10ddaa(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *ar4;
  (**(code **)(iVar4 + 0x18))(iVar4,**(undefined4 **)((int)DAT_8c10defc + (int)ar4),1);
  (**(code **)(iVar4 + 0x18))(iVar4,*(undefined4 *)((int)DAT_8c10defc + (int)ar4));
  (**(code **)(iVar4 + 0x18))(iVar4,*(undefined4 *)((int)DAT_8c10defe + (int)ar4));
  FUN_8c10cf6c(ar4,ar4 + 0x1b,(int)DAT_8c10df00 + (int)ar4,0);
  FUN_8c10cf6c(ar4,ar4 + 0x1c,(int)DAT_8c10df02 + (int)ar4,0);
  iVar2 = 0;
  piVar1 = (int *)((int)DAT_8c10df04 + (int)ar4);
  piVar3 = piVar1;
  do {
    if (*piVar3 != 0) {
      (**(code **)(iVar4 + 0x18))(iVar4,*piVar1);
    }
    if (piVar3[1] != 0) {
      (**(code **)(iVar4 + 0x18))(iVar4,piVar1[1]);
    }
    if (piVar3[2] != 0) {
      (**(code **)(iVar4 + 0x18))(iVar4,piVar1[2]);
    }
    if (piVar3[3] != 0) {
      (**(code **)(iVar4 + 0x18))(iVar4,piVar1[3]);
    }
    iVar2 = iVar2 + 4;
    piVar1 = piVar1 + 4;
    piVar3 = piVar3 + 4;
  } while (iVar2 < 6);
  for (; iVar2 < 10; iVar2 = iVar2 + 1) {
    if (*piVar3 != 0) {
      (**(code **)(iVar4 + 0x18))(iVar4,*piVar1);
    }
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  if (*(int *)((int)DAT_8c10df06 + (int)ar4) != 0) {
    (**(code **)(iVar4 + 0x18))(iVar4,*(undefined4 *)((int)DAT_8c10df06 + (int)ar4));
    (**(code **)(iVar4 + 0x18))(iVar4,*(undefined4 *)((int)DAT_8c10df08 + (int)ar4));
  }
  (**(code **)(iVar4 + 0x18))(iVar4,ar4[3]);
  (**(code **)(iVar4 + 0x18))(iVar4,ar4[4]);
  (**(code **)(iVar4 + 0x18))(iVar4,ar4);
  return 0;
}



/* FUN_8c10ddb6 @ 8c10ddb6 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10ddb6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int *piVar1;
  int a6;
  undefined4 a7;
  int iVar2;
  int *unaff_r11;
  int *piVar3;
  int a4;
  
  a4 = *unaff_r11;
  (**(code **)(a4 + 0x18))(a4,**(undefined4 **)(in_r0 + (int)unaff_r11),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c10defc + (int)unaff_r11),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c10defe + (int)unaff_r11),ar6,ar7);
  FUN_8c10cf6c(unaff_r11,unaff_r11 + 0x1b,(int)DAT_8c10df00 + (int)unaff_r11,0);
  a7 = 0;
  a6 = (int)DAT_8c10df02 + (int)unaff_r11;
  FUN_8c10cf6c(unaff_r11,unaff_r11 + 0x1c,a6,0);
  iVar2 = 0;
  piVar1 = (int *)((int)DAT_8c10df04 + (int)unaff_r11);
  piVar3 = piVar1;
  do {
    if (*piVar3 != 0) {
      (**(code **)(a4 + 0x18))(a4,*piVar1,a6,a7);
    }
    if (piVar3[1] != 0) {
      (**(code **)(a4 + 0x18))(a4,piVar1[1],a6,a7);
    }
    if (piVar3[2] != 0) {
      (**(code **)(a4 + 0x18))(a4,piVar1[2],a6,a7);
    }
    if (piVar3[3] != 0) {
      (**(code **)(a4 + 0x18))(a4,piVar1[3],a6,a7);
    }
    iVar2 = iVar2 + 4;
    piVar1 = piVar1 + 4;
    piVar3 = piVar3 + 4;
  } while (iVar2 < 6);
  for (; iVar2 < 10; iVar2 = iVar2 + 1) {
    if (*piVar3 != 0) {
      (**(code **)(a4 + 0x18))(a4,*piVar1,a6,a7);
    }
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  if (*(int *)((int)DAT_8c10df06 + (int)unaff_r11) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c10df06 + (int)unaff_r11),a6,a7);
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c10df08 + (int)unaff_r11),a6,a7);
  }
  (**(code **)(a4 + 0x18))(a4,unaff_r11[3],a6,a7);
  (**(code **)(a4 + 0x18))(a4,unaff_r11[4],a6,a7);
  (**(code **)(a4 + 0x18))(a4,unaff_r11,a6,a7);
  return 0;
}



/* FUN_8c10df48 @ 8c10df48 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c10e57c) */
/* WARNING: Removing unreachable block (ram,0x8c10e374) */
/* WARNING: Removing unreachable block (ram,0x8c10e1a4) */
/* WARNING: Removing unreachable block (ram,0x8c10e09c) */
/* WARNING: Removing unreachable block (ram,0x8c10e030) */
/* WARNING: Removing unreachable block (ram,0x8c10e244) */
/* WARNING: Removing unreachable block (ram,0x8c10e478) */
/* WARNING: Removing unreachable block (ram,0x8c10e1ee) */
/* WARNING: Removing unreachable block (ram,0x8c10e200) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c10df48(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  double *pdVar17;
  double *pdVar18;
  int *piVar19;
  double *pdVar20;
  double *pdVar21;
  undefined4 *puVar22;
  double *pdVar23;
  double *pdVar24;
  double *pdVar25;
  double *pdVar26;
  double *pdVar27;
  double *pdVar28;
  double *pdVar29;
  double *pdVar30;
  double *pdVar31;
  float fVar32;
  double in_dr0;
  double dVar33;
  float fVar34;
  float fVar35;
  undefined4 in_fr3;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  uint in_fr5;
  undefined8 in_dr12;
  double dVar40;
  undefined8 in_dr14;
  double dVar41;
  undefined8 in_xd0;
  double in_xd2;
  double in_xd4;
  double in_xd14;
  bool bVar42;
  undefined4 in_PR;
  uint uVar43;
  uint uVar44;
  undefined1 uVar45;
  undefined2 uVar46;
  byte in_FPSCR_CAUSE;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  undefined1 auStack_3c [16];
  undefined8 uStack_2c;
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == 0) {
    uStack_24 = (double)CONCAT44((int)in_dr14,(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar15 = &uStack_2c;
    uStack_2c = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar15 = (undefined8 *)auStack_3c;
    uStack_24 = in_xd14;
    uStack_2c = in_dr14;
  }
  *(undefined4 *)((int)puVar15 + -4) = in_PR;
  puVar16 = (undefined4 *)((int)puVar15 + -0x10);
  iVar12 = *ar4;
  *(short *)((int)DAT_8c10e0c4 + (int)ar4) = (short)DAT_8c10e0d8;
  if (in_FPSCR_SZ == 0) {
    dVar37 = (double)(ulonglong)in_fr5;
    dVar41 = (double)CONCAT44(DAT_8c10e0dc,(int)in_dr14);
  }
  else {
    dVar37 = (double)CONCAT44(PTR_FUN_8c10e0e0,DAT_8c10e0dc);
    dVar41 = dVar37;
  }
  uVar13 = SUB84(dVar37,0);
  (*(code *)PTR_FUN_8c10e0e0)(ar4,0x1e,ar6,ar7);
  puVar3 = PTR_FUN_8c10e0e0;
  uVar8 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c10e0e4;
  bVar47 = 0;
  bVar50 = 0;
  bVar48 = (byte)((uVar8 & 0x80000) >> 0x13);
  bVar49 = (byte)((uVar8 & 0x100000) >> 0x14);
  if (bVar48 == 0) {
    uVar46 = (undefined2)(int)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar46 = (undefined2)(int)in_dr0;
  }
  dVar37 = dVar41;
  if (bVar49 == 0) {
    dVar37 = (double)(ulonglong)uVar13;
  }
  uVar13 = SUB84(dVar37,0);
  *(undefined2 *)((int)DAT_8c10e0c6 + (int)ar4) = uVar46;
  (*(code *)puVar3)(ar4,0x1f,ar6,ar7);
  uVar8 = ((uint)bVar47 << 0xc | (uint)bVar50 << 0x12 | (uint)bVar48 << 0x13 | (uint)bVar49 << 0x14)
          & DAT_8c10e0e4;
  bVar47 = 0;
  bVar50 = 0;
  bVar49 = (byte)((uVar8 & 0x80000) >> 0x13);
  bVar48 = (byte)((uVar8 & 0x100000) >> 0x14);
  if (bVar49 == 0) {
    uVar46 = (undefined2)(int)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar46 = (undefined2)(int)in_dr0;
  }
  *(undefined2 *)((int)DAT_8c10e0c8 + (int)ar4) = uVar46;
  ar4[0x17] = ar4[3] + 8;
  ar4[0x18] = ar4[3] + 0x10;
  puVar3 = PTR_FUN_8c10e0e0;
  ar4[0x19] = *(int *)ar4[4];
  if (bVar48 == 0) {
    dVar37 = (double)(ulonglong)uVar13;
  }
  else {
    dVar37 = (double)CONCAT44(DAT_8c10e0e8._4_4_,(undefined4)DAT_8c10e0e8);
  }
  (*(code *)puVar3)(ar4,0x13,ar6,ar7);
  iVar5 = (int)DAT_8c10e0ca;
  uVar8 = ((uint)bVar47 << 0xc | (uint)bVar50 << 0x12 | (uint)bVar49 << 0x13 | (uint)bVar48 << 0x14)
          & DAT_8c10e0e4;
  iVar11 = (int)DAT_8c10e0ce;
  bVar47 = 0;
  bVar48 = 0;
  bVar50 = (byte)((uVar8 & 0x80000) >> 0x13);
  bVar49 = (byte)((uVar8 & 0x100000) >> 0x14);
  if (bVar50 == 0) {
    uVar8 = (uint)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar8 = (uint)in_dr0;
  }
  *(uint *)(iVar5 + (int)ar4) = uVar8 & 0xffff;
  iVar5 = iVar5 + -0xc;
  if (bVar49 == 0) {
    *(int *)(iVar5 + (int)ar4) = (int)((ulonglong)dVar41 >> 0x20);
    in_fr3 = DAT_8c10e0e8._4_4_;
  }
  else {
    *(double *)(iVar5 + (int)ar4) = dVar41;
    in_xd2 = (double)CONCAT44(PTR_thunk_FUN_8c013cd8_8c10e0f0,DAT_8c10e0e8._4_4_);
  }
  if (bVar49 == 0) {
    *(undefined4 *)((int)DAT_8c10e0cc + (int)ar4) = in_fr3;
  }
  else {
    *(double *)((int)DAT_8c10e0cc + (int)ar4) = in_xd2;
  }
  iVar5 = iVar12;
  uVar6 = (**(code **)(iVar12 + 0x10))(iVar12,iVar11,ar6,ar7);
  puVar3 = PTR_thunk_FUN_8c013cd8_8c10e0f0;
  uVar8 = (uint)DAT_8c10e0d2;
  uVar13 = 0;
  *(undefined4 *)((int)DAT_8c10e0d0 + (int)ar4) = uVar6;
  if (bVar49 == 0) {
    dVar40 = (double)CONCAT44((undefined4)DAT_8c10e0f4,DAT_8c10e0dc);
    puVar16 = (undefined4 *)((int)puVar15 + -0x10);
  }
  else {
    dVar40 = (double)CONCAT44(DAT_8c10e0f4._4_4_,(undefined4)DAT_8c10e0f4);
  }
  do {
    *(uint *)((int)puVar16 + -4) = *(int *)((int)DAT_8c10e0d0 + (int)ar4) + uVar13 * 4;
    if (bVar49 == 0) {
      dVar41 = (double)CONCAT44((int)((ulonglong)dVar41 >> 0x20),
                                *(undefined4 *)((int)DAT_8c10e0d4 + (int)ar4));
    }
    else {
      in_xd14 = *(double *)((int)DAT_8c10e0d4 + (int)ar4);
    }
    uVar9 = (uint)bVar47 << 0xc | (uint)bVar48 << 0x12 | (uint)bVar50 << 0x13 | (uint)bVar49 << 0x14
            | DAT_8c10e0f4._4_4_;
    uVar10 = (uVar9 & 0x100000) >> 0x14;
    dVar36 = (double)SUB84(dVar41,0);
    uVar9 = (uVar9 & 0x80000 | uVar10 << 0x14) & DAT_8c10e0e4;
    if ((char)uVar10 == '\0') {
      pdVar17 = (double *)((int)puVar16 + -0xc);
      *(double *)((int)puVar16 + -0xc) = dVar36;
    }
    else {
      *(double *)((int)puVar16 + -0xc) = dVar36;
      pdVar17 = (double *)((int)puVar16 + -0x14);
      *(double *)((int)puVar16 + -0x14) = in_xd2;
    }
    uVar10 = (uVar9 & 0x80000) >> 0x13;
    cVar1 = (char)uVar10;
    uVar9 = uVar9 >> 0x14;
    fVar32 = (float)(int)uVar13;
    if ((int)uVar13 < 0) {
      if (cVar1 == '\0') {
        fVar32 = fVar32 + DAT_8c10e0fc;
      }
      else {
        fVar32 = SUB84((double)CONCAT44(DAT_8c10e0fc,fVar32) + (double)CONCAT44(DAT_8c10e0fc,fVar32)
                       ,0);
      }
    }
    if ((char)uVar9 == '\0') {
      dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),SUB84(dVar41,0));
      dVar33 = (double)CONCAT44(*(undefined4 *)((int)DAT_8c10e0cc + (int)ar4),fVar32);
    }
    else {
      dVar33 = *(double *)((int)DAT_8c10e0cc + (int)ar4);
      in_xd2 = in_xd14;
    }
    if (cVar1 == '\0') {
      fVar32 = SUB84(dVar33,0) * (SUB84(dVar36,0) - (float)((ulonglong)dVar33 >> 0x20));
    }
    else {
      fVar32 = SUB84(dVar33 * (dVar36 - dVar33),0);
    }
    uVar9 = uVar10 << 0x13 | uVar9 << 0x14 | DAT_8c10e0f4._4_4_ & 0x3fffff;
    uVar10 = (uVar9 & 0x80000) >> 0x13;
    uVar9 = (uVar9 & 0x100000) >> 0x14;
    cVar1 = (char)uVar9;
    dVar36 = (double)fVar32;
    if (cVar1 == '\0') {
      pdVar18 = (double *)((int)pdVar17 + 4);
    }
    else {
      in_xd2 = *pdVar17;
      pdVar18 = pdVar17 + 1;
    }
    if (cVar1 == '\0') {
      piVar19 = (int *)((int)pdVar18 + 4);
    }
    else {
      piVar19 = (int *)((int)pdVar18 + 8);
    }
    uVar9 = (uVar10 << 0x13 | uVar9 << 0x14) & DAT_8c10e0e4;
    if ((char)uVar10 == '\0') {
      dVar36 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) /
                                (float)((ulonglong)dVar40 >> 0x20),SUB84(dVar36,0));
    }
    else {
      dVar36 = dVar36 / dVar40;
    }
    dVar33 = in_xd2;
    if (cVar1 == '\0') {
      dVar33 = (double)((ulonglong)dVar37 & 0xffffffff);
    }
    uVar43 = SUB84(dVar33,0);
    bVar47 = 0;
    bVar50 = 0;
    bVar49 = (byte)((uVar9 & 0x80000) >> 0x13);
    bVar48 = (byte)(uVar9 >> 0x14);
    (*(code *)puVar3)(iVar5,iVar11,ar6,ar7);
    uVar10 = DAT_8c10e0f4._4_4_;
    iVar7 = (int)DAT_8c10e0d0;
    iVar14 = uVar13 + 1;
    if (bVar48 == 0) {
      *(int *)*piVar19 = (int)((ulonglong)dVar36 >> 0x20);
    }
    else {
      *(double *)*piVar19 = dVar36;
    }
    *piVar19 = *(int *)(iVar7 + (int)ar4) + iVar14 * 4;
    if (bVar48 == 0) {
      dVar41 = (double)CONCAT44((int)((ulonglong)dVar41 >> 0x20),
                                *(undefined4 *)((int)DAT_8c10e0d4 + (int)ar4));
    }
    else {
      in_xd14 = *(double *)((int)DAT_8c10e0d4 + (int)ar4);
    }
    uVar10 = (uint)bVar47 << 0xc | (uint)bVar50 << 0x12 | (uint)bVar49 << 0x13 |
             (uint)bVar48 << 0x14 | uVar10;
    uVar9 = (uVar10 & 0x100000) >> 0x14;
    dVar37 = (double)SUB84(dVar41,0);
    uVar10 = (uVar10 & 0x80000 | uVar9 << 0x14) & DAT_8c10e0e4;
    if ((char)uVar9 == '\0') {
      pdVar20 = (double *)(piVar19 + -2);
      *(double *)(piVar19 + -2) = dVar37;
    }
    else {
      *(double *)(piVar19 + -2) = dVar37;
      pdVar20 = (double *)(piVar19 + -4);
      *(double *)(piVar19 + -4) = in_xd2;
    }
    uVar9 = (uVar10 & 0x80000) >> 0x13;
    cVar1 = (char)uVar9;
    uVar10 = uVar10 >> 0x14;
    fVar32 = (float)iVar14;
    if (iVar14 < 0) {
      if (cVar1 == '\0') {
        fVar32 = fVar32 + DAT_8c10e0fc;
      }
      else {
        fVar32 = SUB84((double)CONCAT44(DAT_8c10e0fc,fVar32) + (double)CONCAT44(DAT_8c10e0fc,fVar32)
                       ,0);
      }
    }
    if ((char)uVar10 == '\0') {
      dVar37 = (double)CONCAT44((int)((ulonglong)dVar37 >> 0x20),SUB84(dVar41,0));
      dVar36 = (double)CONCAT44(*(undefined4 *)((int)DAT_8c10e0cc + (int)ar4),fVar32);
    }
    else {
      dVar36 = *(double *)((int)DAT_8c10e0cc + (int)ar4);
      in_xd2 = in_xd14;
    }
    if (cVar1 == '\0') {
      fVar32 = SUB84(dVar36,0) * (SUB84(dVar37,0) - (float)((ulonglong)dVar36 >> 0x20));
    }
    else {
      fVar32 = SUB84(dVar36 * (dVar37 - dVar36),0);
    }
    uVar10 = uVar9 << 0x13 | uVar10 << 0x14 | DAT_8c10e0f4._4_4_ & 0x3fffff;
    uVar9 = (uVar10 & 0x80000) >> 0x13;
    uVar10 = (uVar10 & 0x100000) >> 0x14;
    cVar1 = (char)uVar10;
    dVar36 = (double)fVar32;
    if ((char)uVar9 == '\0') {
      dVar36 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) /
                                (float)((ulonglong)dVar40 >> 0x20),SUB84(dVar36,0));
    }
    else {
      dVar36 = dVar36 / dVar40;
    }
    if (cVar1 == '\0') {
      pdVar21 = (double *)((int)pdVar20 + 4);
    }
    else {
      in_xd2 = *pdVar20;
      pdVar21 = pdVar20 + 1;
    }
    if (cVar1 == '\0') {
      puVar22 = (undefined4 *)((int)pdVar21 + 4);
    }
    else {
      puVar22 = (undefined4 *)((int)pdVar21 + 8);
    }
    uVar10 = (uVar9 << 0x13 | uVar10 << 0x14) & DAT_8c10e260;
    dVar37 = in_xd2;
    if (cVar1 == '\0') {
      dVar37 = (double)(ulonglong)uVar43;
    }
    bVar47 = 0;
    bVar48 = 0;
    bVar50 = (byte)((uVar10 & 0x80000) >> 0x13);
    bVar49 = (byte)(uVar10 >> 0x14);
    (*(code *)puVar3)(iVar5,iVar11,ar6,ar7);
    uVar13 = uVar13 + 2;
    pdVar31 = (double *)(puVar22 + 1);
    puVar16 = puVar22 + 1;
    if (bVar49 == 0) {
      *(int *)*puVar22 = (int)((ulonglong)dVar36 >> 0x20);
    }
    else {
      *(double *)*puVar22 = dVar36;
    }
  } while (uVar13 < uVar8);
  uVar13 = DAT_8c10e264;
  if (bVar49 == 0) {
    uVar13 = SUB84(dVar37,0);
  }
  uVar10 = ((uint)bVar47 << 0xc | (uint)bVar48 << 0x12 | (uint)bVar50 << 0x13 | (uint)bVar49 << 0x14
           ) & DAT_8c10e260;
  bVar47 = 0;
  bVar50 = 0;
  bVar49 = (byte)((uVar10 & 0x80000) >> 0x13);
  bVar48 = (byte)((uVar10 & 0x100000) >> 0x14);
  (*(code *)PTR_FUN_8c10e268)(ar4,0x12,ar6,ar7);
  iVar5 = (int)DAT_8c10e258;
  if (bVar48 == 0) {
    *(int *)(iVar5 + (int)ar4) = (int)((ulonglong)dVar36 >> 0x20);
  }
  else {
    *(double *)(iVar5 + (int)ar4) = dVar36;
  }
  uVar10 = ((uint)bVar47 << 0xc | (uint)bVar50 << 0x12 | (uint)bVar49 << 0x13 | (uint)bVar48 << 0x14
           ) & DAT_8c10e260;
  bVar48 = 0;
  bVar49 = 0;
  bVar47 = (byte)((uVar10 & 0x80000) >> 0x13);
  bVar50 = (byte)((uVar10 & 0x100000) >> 0x14);
  uVar6 = (**(code **)(iVar12 + 0x10))(iVar12,(*(int *)(iVar5 + 4 + (int)ar4) + 1) * 4,ar6,ar7);
  *(undefined4 *)((int)DAT_8c10e25a + (int)ar4) = uVar6;
  uVar10 = ((uint)bVar48 << 0xc | (uint)bVar49 << 0x12 | (uint)bVar47 << 0x13 | (uint)bVar50 << 0x14
           ) & DAT_8c10e260;
  bVar48 = 0;
  bVar47 = 0;
  bVar50 = (byte)((uVar10 & 0x80000) >> 0x13);
  bVar49 = (byte)((uVar10 & 0x100000) >> 0x14);
  iVar12 = (**(code **)(iVar12 + 0x10))
                     (iVar12,(*(int *)((int)DAT_8c10e25c + (int)ar4) + 1) * 0x100,ar6,ar7);
  uVar10 = 0;
  do {
    iVar5 = uVar10 * 4;
    uVar10 = uVar10 + 1;
    *(int *)(*(int *)((int)DAT_8c10e25a + (int)ar4) + iVar5) = iVar12;
    puVar4 = PTR_thunk_FUN_8c013dfc_8c10e26c;
    iVar12 = iVar12 + uVar8;
  } while (uVar10 <= *(uint *)((int)DAT_8c10e25c + (int)ar4));
  uVar43 = ((uint)bVar48 << 0xc | (uint)bVar47 << 0x12 | (uint)bVar50 << 0x13 | (uint)bVar49 << 0x14
           ) & DAT_8c10e260 & 0x180000 | DAT_8c10e274 & 0x3fffff;
  uVar9 = (uVar43 & 0x100000) >> 0x14;
  cVar1 = (char)uVar9;
  if (cVar1 == '\0') {
    dVar37 = (double)CONCAT44(DAT_8c10e278,DAT_8c10e27c);
  }
  else {
    dVar37 = (double)CONCAT44(DAT_8c10e27c,DAT_8c10e278);
    in_xd0 = CONCAT44(_DAT_8c10e280,DAT_8c10e27c);
  }
  uVar9 = (uVar43 & 0x80000 | uVar9 << 0x14) & DAT_8c10e260;
  dVar36 = in_xd2;
  if (cVar1 == '\0') {
    dVar36 = (double)(ulonglong)uVar13;
  }
  bVar47 = 0;
  bVar50 = 0;
  bVar49 = (byte)((uVar9 & 0x80000) >> 0x13);
  bVar48 = (byte)(uVar9 >> 0x14);
  (*(code *)PTR_thunk_FUN_8c013dfc_8c10e26c)(uVar10,iVar12,ar6,ar7);
  if (bVar48 == 0) {
    puVar22[1] = (int)((ulonglong)dVar37 >> 0x20);
  }
  else {
    *(double *)(puVar22 + 1) = dVar37;
  }
  puVar22[3] = 0;
  if (bVar48 == 0) {
    dVar41 = (double)CONCAT44((int)((ulonglong)dVar41 >> 0x20),_DAT_8c10e280);
    pdVar31 = (double *)(puVar22 + 1);
  }
  else {
    in_xd14 = (double)CONCAT44(uRam8c10e284,_DAT_8c10e280);
  }
  do {
    uVar13 = ((uint)bVar47 << 0xc | (uint)bVar50 << 0x12 | (uint)bVar49 << 0x13 |
             (uint)bVar48 << 0x14) & DAT_8c10e260;
    bVar49 = (byte)((uVar13 & 0x80000) >> 0x13);
    bVar48 = (byte)((uVar13 & 0x100000) >> 0x14);
    fVar32 = (float)*(int *)((int)pdVar31 + 8);
    if (*(int *)((int)pdVar31 + 8) < 0) {
      if (bVar49 == 0) {
        fVar32 = fVar32 + DAT_8c10e270;
      }
      else {
        fVar32 = SUB84((double)CONCAT44(DAT_8c10e270,fVar32) + (double)CONCAT44(DAT_8c10e270,fVar32)
                       ,0);
      }
    }
    uVar13 = 0;
    if (bVar48 == 0) {
      dVar33 = (double)CONCAT44(*(undefined4 *)((int)DAT_8c10e258 + (int)ar4),fVar32);
    }
    else {
      dVar33 = *(double *)((int)DAT_8c10e258 + (int)ar4);
    }
    if (bVar49 == 0) {
      fVar32 = SUB84(dVar33,0) * (float)((ulonglong)dVar33 >> 0x20);
    }
    else {
      fVar32 = SUB84(dVar33 * dVar33,0);
    }
    if (bVar48 == 0) {
      *(float *)((int)pdVar31 + 4) = fVar32;
    }
    else {
      *(double *)((int)pdVar31 + 4) = in_xd2;
    }
    iVar5 = *(int *)((int)pdVar31 + 8) * 4;
    do {
      iVar11 = (int)DAT_8c10e25e;
      if (bVar48 == 0) {
        dVar36 = (double)CONCAT44(*(undefined4 *)(iVar11 + (int)ar4),SUB84(dVar36,0));
      }
      else {
        dVar36 = *(double *)(iVar11 + (int)ar4);
      }
      fVar32 = (float)((ulonglong)dVar36 >> 0x20);
      uVar43 = (uint)bVar49 << 0x13 | (uint)bVar48 << 0x14 | DAT_8c10e274 & 0x3fffff;
      uVar9 = (uVar43 & 0x100000) >> 0x14;
      cVar1 = (char)uVar9;
      dVar38 = (double)fVar32;
      dVar33 = dVar36;
      if (cVar1 == '\0') {
        dVar33 = (double)CONCAT44(fVar32,SUB84(dVar37,0));
      }
      uVar9 = (uVar43 & 0x80000 | uVar9 << 0x14) & DAT_8c10e260;
      if (cVar1 == '\0') {
        pdVar23 = (double *)((int)pdVar31 + -8);
        *(double *)((int)pdVar31 + -8) = dVar38;
        dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                  *(undefined4 *)(iVar11 + 4 + (int)ar4));
      }
      else {
        *(double *)((int)pdVar31 + -8) = dVar38;
        pdVar23 = (double *)((int)pdVar31 + -0x10);
        *(double *)((int)pdVar31 + -0x10) = in_xd2;
        in_xd0 = *(undefined8 *)(iVar11 + 4 + (int)ar4);
      }
      uVar43 = (uVar9 & 0x80000) >> 0x13;
      cVar1 = (char)uVar43;
      if (cVar1 == '\0') {
        fVar32 = (float)((ulonglong)dVar33 >> 0x20) - SUB84(dVar33,0);
      }
      else {
        fVar32 = (float)((ulonglong)(dVar33 - dVar33) >> 0x20);
      }
      dVar37 = (double)CONCAT44(fVar32,(float)(int)uVar13);
      if ((int)uVar13 < 0) {
        dVar38 = (double)CONCAT44((int)((ulonglong)dVar38 >> 0x20),DAT_8c10e270);
        if (cVar1 == '\0') {
          dVar37 = (double)CONCAT44(fVar32,(float)(int)uVar13 + DAT_8c10e270);
        }
        else {
          dVar37 = dVar37 + dVar38;
        }
      }
      uVar6 = SUB84(dVar38,0);
      if (cVar1 == '\0') {
        fVar32 = (float)((ulonglong)dVar37 >> 0x20) * SUB84(dVar37,0);
      }
      else {
        fVar32 = (float)((ulonglong)(dVar37 * dVar37) >> 0x20);
      }
      uVar43 = uVar43 << 0x13 | uVar9 & 0xfff00000 | DAT_8c10e320 & 0x3fffff;
      uVar9 = (uVar43 & 0x80000) >> 0x13;
      uVar43 = (uVar43 & 0x100000) >> 0x14;
      cVar1 = (char)uVar43;
      dVar37 = (double)fVar32;
      if (cVar1 == '\0') {
        uVar6 = *(undefined4 *)pdVar23;
        pdVar24 = (double *)((int)pdVar23 + 4);
      }
      else {
        in_xd2 = *pdVar23;
        pdVar24 = pdVar23 + 1;
      }
      if (cVar1 == '\0') {
        dVar33 = (double)CONCAT44(*(undefined4 *)pdVar24,uVar6);
        pdVar25 = (double *)((int)pdVar24 + 4);
      }
      else {
        dVar33 = *pdVar24;
        pdVar25 = pdVar24 + 1;
      }
      uVar43 = (uVar9 << 0x13 | uVar43 << 0x14) & DAT_8c10e324;
      if ((char)uVar9 == '\0') {
        fVar32 = (float)((ulonglong)dVar37 >> 0x20) / (float)((ulonglong)dVar40 >> 0x20);
        dVar37 = (double)CONCAT44(fVar32,SUB84(dVar37,0));
        dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) - fVar32,SUB84(dVar33,0));
      }
      else {
        dVar37 = dVar37 / dVar40;
        dVar33 = dVar33 - dVar37;
      }
      dVar38 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),(float)dVar33);
      dVar33 = in_xd2;
      if (cVar1 == '\0') {
        dVar33 = (double)((ulonglong)dVar36 & 0xffffffff);
      }
      uVar6 = SUB84(dVar33,0);
      bVar49 = 0;
      bVar48 = 0;
      bVar50 = (byte)((uVar43 & 0x80000) >> 0x13);
      bVar47 = (byte)(uVar43 >> 0x14);
      (*(code *)puVar3)(uVar10,iVar12,ar6,ar7);
      if (bVar47 == 0) {
        dVar38 = (double)CONCAT44((int)((ulonglong)dVar38 >> 0x20),*(undefined4 *)((int)pdVar25 + 4)
                                 );
      }
      else {
        in_xd2 = *(double *)((int)pdVar25 + 4);
      }
      uVar9 = ((uint)bVar49 << 0xc | (uint)bVar48 << 0x12 | (uint)bVar50 << 0x13 |
              (uint)bVar47 << 0x14) & DAT_8c10e324;
      dVar36 = dVar37;
      if (bVar47 == 0) {
        dVar36 = (double)CONCAT44((int)((ulonglong)dVar37 >> 0x20),uVar6);
      }
      bVar50 = 0;
      bVar48 = 0;
      bVar47 = (byte)((uVar9 & 0x80000) >> 0x13);
      bVar49 = (byte)((uVar9 & 0x100000) >> 0x14);
      if (bVar47 == 0) {
        uVar6 = SUB84(dVar36,0);
      }
      else {
        uVar6 = SUB84(dVar36 + dVar38,0);
      }
      (*(code *)puVar4)(uVar10,iVar12,ar6,ar7);
      uVar9 = DAT_8c10e424;
      if (bVar49 == 0) {
        dVar38 = (double)CONCAT44((int)((ulonglong)dVar38 >> 0x20),*(undefined4 *)pdVar25);
      }
      else {
        in_xd2 = *pdVar25;
      }
      uVar43 = ((uint)bVar50 << 0xc | (uint)bVar48 << 0x12 | (uint)bVar47 << 0x13 |
               (uint)bVar49 << 0x14) & DAT_8c10e324;
      dVar36 = dVar37;
      if (bVar49 == 0) {
        dVar36 = (double)CONCAT44((int)((ulonglong)dVar37 >> 0x20),uVar6);
      }
      uVar44 = (uVar43 & 0x80000) >> 0x13;
      cVar1 = (char)uVar44;
      uVar43 = (uVar43 & 0x100000) >> 0x14;
      iVar11 = (int)DAT_8c10e31c;
      if (cVar1 == '\0') {
        dVar36 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) - SUB84(dVar38,0),
                                  SUB84(dVar36,0));
      }
      else {
        dVar36 = dVar36 - dVar38;
      }
      if ((char)uVar43 == '\0') {
        dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),
                                  *(undefined4 *)(iVar11 + (int)ar4));
        dVar33 = in_xd4;
      }
      else {
        dVar33 = *(double *)(iVar11 + (int)ar4);
      }
      if (cVar1 == '\0') {
        dVar36 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) - SUB84(dVar36,0),
                                  SUB84(dVar36,0));
      }
      else {
        dVar36 = dVar36 - dVar36;
      }
      uVar44 = uVar44 << 0x13 | uVar43 << 0x14 | DAT_8c10e320 & 0x3fffff;
      uVar43 = (uVar44 & 0x80000) >> 0x13;
      uVar44 = (uVar44 & 0x100000) >> 0x14;
      cVar1 = (char)uVar44;
      dVar38 = (double)(float)((ulonglong)dVar36 >> 0x20);
      if (cVar1 == '\0') {
        dVar37 = (double)(ulonglong)*(uint *)(iVar11 + 4 + (int)ar4);
      }
      else {
        in_xd0 = *(undefined8 *)(iVar11 + 4 + (int)ar4);
      }
      dVar39 = dVar33;
      if (cVar1 == '\0') {
        dVar39 = (double)CONCAT44(SUB84(dVar36,0),SUB84(dVar37,0));
      }
      uVar44 = (uVar43 << 0x13 | uVar44 << 0x14) & DAT_8c10e324;
      fVar32 = (float)((ulonglong)dVar40 >> 0x20);
      if ((char)uVar43 == '\0') {
        dVar37 = (double)CONCAT44(-((float)((ulonglong)dVar38 >> 0x20) * fVar32),SUB84(dVar38,0));
      }
      else {
        dVar37 = -(dVar38 * dVar40);
      }
      uVar43 = (uVar44 & 0x80000) >> 0x13;
      if ((char)uVar43 == '\0') {
        fVar34 = (float)((ulonglong)dVar39 >> 0x20) - SUB84(dVar39,0);
      }
      else {
        fVar34 = (float)((ulonglong)(dVar39 - dVar39) >> 0x20);
      }
      uVar44 = uVar43 << 0x13 | uVar44 & 0xfff00000 | DAT_8c10e320 & 0x3fffff;
      uVar43 = (uVar44 & 0x80000) >> 0x13;
      cVar1 = (char)uVar43;
      uVar44 = (uVar44 & 0x100000) >> 0x14;
      cVar2 = (char)uVar44;
      if (cVar1 == '\0') {
        dVar37 = (double)CONCAT44((float)((ulonglong)dVar37 >> 0x20) /
                                  (float)((ulonglong)(double)fVar34 >> 0x20),SUB84(dVar37,0));
      }
      else {
        dVar37 = dVar37 / (double)fVar34;
      }
      if (cVar2 == '\0') {
        dVar38 = (double)CONCAT44(DAT_8c10e328,DAT_8c10e32c);
      }
      else {
        dVar38 = (double)CONCAT44(DAT_8c10e32c,DAT_8c10e328);
        in_xd0 = CONCAT44(uRam8c10e330,DAT_8c10e32c);
      }
      uVar43 = (uVar43 << 0x13 | uVar44 << 0x14) & DAT_8c10e324;
      if (cVar1 == '\0') {
        dVar37 = (double)CONCAT44((float)((ulonglong)dVar37 >> 0x20) +
                                  (float)((ulonglong)dVar38 >> 0x20),SUB84(dVar37,0));
      }
      else {
        dVar37 = dVar37 + dVar38;
      }
      fVar34 = SUB84(dVar38,0);
      if (cVar2 != '\0') {
        fVar34 = (float)((ulonglong)in_xd0 >> 0x20);
      }
      dVar39 = in_xd2;
      if (cVar2 == '\0') {
        dVar39 = (double)CONCAT44((float)dVar37,SUB84(dVar36,0));
      }
      uVar44 = (uVar43 & 0x80000) >> 0x13;
      cVar1 = (char)uVar44;
      uVar43 = uVar43 >> 0x14;
      cVar2 = (char)uVar43;
      fVar35 = (float)((ulonglong)dVar39 >> 0x20);
      if (cVar1 == '\0') {
        bVar42 = fVar35 < fVar34;
      }
      else {
        bVar42 = dVar39 < (double)CONCAT44(fVar34,(float)dVar37);
      }
      if (bVar42) {
        dVar37 = dVar41;
        if (cVar2 == '\0') {
          dVar37 = (double)CONCAT44((int)((ulonglong)dVar41 >> 0x20),SUB84(dVar39,0));
        }
      }
      else {
        if (cVar1 == '\0') {
          bVar42 = SUB84(dVar41,0) < fVar35;
        }
        else {
          bVar42 = dVar41 < dVar39;
        }
        dVar37 = dVar39;
        if ((bVar42) && (dVar37 = in_xd14, cVar2 == '\0')) {
          dVar37 = (double)CONCAT44(SUB84(dVar41,0),SUB84(dVar39,0));
        }
      }
      uVar43 = (uVar44 << 0x13 | uVar43 << 0x14) & DAT_8c10e420;
      uVar44 = (uVar43 & 0x80000) >> 0x13;
      uVar43 = uVar43 >> 0x14;
      if ((char)uVar44 == '\0') {
        uVar45 = (undefined1)(int)(float)((ulonglong)dVar37 >> 0x20);
      }
      else {
        uVar45 = (undefined1)(int)dVar37;
      }
      *(undefined1 *)(*(int *)(*(int *)((int)DAT_8c10e41c + (int)ar4) + iVar5) + uVar13) = uVar45;
      iVar7 = uVar13 + 1;
      iVar11 = (int)DAT_8c10e41e;
      if ((char)uVar43 == '\0') {
        dVar37 = (double)CONCAT44(*(undefined4 *)(iVar11 + (int)ar4),SUB84(dVar37,0));
      }
      else {
        dVar37 = *(double *)(iVar11 + (int)ar4);
      }
      fVar34 = (float)((ulonglong)dVar37 >> 0x20);
      uVar43 = uVar44 << 0x13 | uVar43 << 0x14 | uVar9 & 0x3fffff;
      uVar9 = (uVar43 & 0x100000) >> 0x14;
      cVar1 = (char)uVar9;
      dVar39 = (double)fVar34;
      dVar36 = dVar37;
      if (cVar1 == '\0') {
        dVar36 = (double)CONCAT44(fVar34,SUB84(dVar38,0));
      }
      uVar9 = (uVar43 & 0x80000 | uVar9 << 0x14) & DAT_8c10e420;
      if (cVar1 == '\0') {
        pdVar31 = pdVar25 + -1;
        pdVar25[-1] = dVar39;
        dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),
                                  *(undefined4 *)(iVar11 + 4 + (int)ar4));
      }
      else {
        pdVar25[-1] = dVar39;
        pdVar31 = pdVar25 + -2;
        pdVar25[-2] = in_xd2;
        in_xd0 = *(undefined8 *)(iVar11 + 4 + (int)ar4);
      }
      uVar43 = (uVar9 & 0x80000) >> 0x13;
      cVar1 = (char)uVar43;
      if (cVar1 == '\0') {
        fVar34 = (float)((ulonglong)dVar36 >> 0x20) - SUB84(dVar36,0);
      }
      else {
        fVar34 = (float)((ulonglong)(dVar36 - dVar36) >> 0x20);
      }
      dVar36 = (double)CONCAT44(fVar34,(float)iVar7);
      if (iVar7 < 0) {
        dVar39 = (double)CONCAT44((int)((ulonglong)dVar39 >> 0x20),DAT_8c10e428);
        if (cVar1 == '\0') {
          dVar36 = (double)CONCAT44(fVar34,(float)iVar7 + DAT_8c10e428);
        }
        else {
          dVar36 = dVar36 + dVar39;
        }
      }
      uVar6 = SUB84(dVar39,0);
      if (cVar1 == '\0') {
        fVar34 = (float)((ulonglong)dVar36 >> 0x20) * SUB84(dVar36,0);
      }
      else {
        fVar34 = (float)((ulonglong)(dVar36 * dVar36) >> 0x20);
      }
      uVar9 = uVar43 << 0x13 | uVar9 & 0xfff00000 | DAT_8c10e424 & 0x3fffff;
      uVar43 = (uVar9 & 0x80000) >> 0x13;
      uVar9 = (uVar9 & 0x100000) >> 0x14;
      cVar1 = (char)uVar9;
      dVar36 = (double)fVar34;
      if (cVar1 == '\0') {
        uVar6 = *(undefined4 *)pdVar31;
        pdVar26 = (double *)((int)pdVar31 + 4);
      }
      else {
        in_xd2 = *pdVar31;
        pdVar26 = pdVar31 + 1;
      }
      if (cVar1 == '\0') {
        dVar38 = (double)CONCAT44(*(undefined4 *)pdVar26,uVar6);
        pdVar27 = (double *)((int)pdVar26 + 4);
      }
      else {
        dVar38 = *pdVar26;
        pdVar27 = pdVar26 + 1;
      }
      uVar9 = (uVar43 << 0x13 | uVar9 << 0x14) & DAT_8c10e420;
      if ((char)uVar43 == '\0') {
        fVar32 = (float)((ulonglong)dVar36 >> 0x20) / fVar32;
        dVar36 = (double)CONCAT44(fVar32,SUB84(dVar36,0));
        dVar38 = (double)CONCAT44((float)((ulonglong)dVar38 >> 0x20) - fVar32,SUB84(dVar38,0));
      }
      else {
        dVar36 = dVar36 / dVar40;
        dVar38 = dVar38 - dVar36;
      }
      dVar39 = (double)CONCAT44((int)((ulonglong)dVar38 >> 0x20),(float)dVar38);
      dVar38 = in_xd2;
      if (cVar1 == '\0') {
        dVar38 = (double)((ulonglong)dVar37 & 0xffffffff);
      }
      uVar6 = SUB84(dVar38,0);
      bVar48 = 0;
      bVar47 = 0;
      bVar50 = (byte)((uVar9 & 0x80000) >> 0x13);
      bVar49 = (byte)(uVar9 >> 0x14);
      (*(code *)puVar3)(uVar10,iVar12,ar6,ar7);
      if (bVar49 == 0) {
        dVar39 = (double)CONCAT44((int)((ulonglong)dVar39 >> 0x20),*(undefined4 *)((int)pdVar27 + 4)
                                 );
      }
      else {
        in_xd2 = *(double *)((int)pdVar27 + 4);
      }
      uVar9 = ((uint)bVar48 << 0xc | (uint)bVar47 << 0x12 | (uint)bVar50 << 0x13 |
              (uint)bVar49 << 0x14) & DAT_8c10e420;
      dVar37 = dVar36;
      if (bVar49 == 0) {
        dVar37 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),uVar6);
      }
      bVar47 = 0;
      bVar50 = 0;
      bVar49 = (byte)((uVar9 & 0x80000) >> 0x13);
      bVar48 = (byte)((uVar9 & 0x100000) >> 0x14);
      if (bVar49 == 0) {
        dVar37 = (double)CONCAT44((float)((ulonglong)dVar37 >> 0x20) + SUB84(dVar39,0),
                                  SUB84(dVar37,0));
      }
      else {
        dVar37 = dVar37 + dVar39;
      }
      (*(code *)puVar4)(uVar10,iVar12,ar6,ar7);
      uVar9 = DAT_8c10e528;
      if (bVar48 == 0) {
        dVar39 = (double)CONCAT44((int)((ulonglong)dVar39 >> 0x20),*(undefined4 *)pdVar27);
      }
      else {
        in_xd2 = *pdVar27;
      }
      uVar43 = ((uint)bVar47 << 0xc | (uint)bVar50 << 0x12 | (uint)bVar49 << 0x13 |
               (uint)bVar48 << 0x14) & DAT_8c10e420;
      in_xd4 = dVar36;
      if (bVar48 == 0) {
        dVar37 = (double)CONCAT44((int)((ulonglong)dVar37 >> 0x20),(int)((ulonglong)dVar36 >> 0x20))
        ;
        in_xd4 = dVar33;
      }
      uVar44 = (uVar43 & 0x80000) >> 0x13;
      cVar1 = (char)uVar44;
      uVar43 = (uVar43 & 0x100000) >> 0x14;
      iVar11 = (int)DAT_8c10e41e;
      if (cVar1 == '\0') {
        fVar32 = SUB84(dVar37,0) - SUB84(dVar39,0);
      }
      else {
        fVar32 = SUB84(dVar37 - dVar39,0);
      }
      if ((char)uVar43 == '\0') {
        dVar37 = (double)CONCAT44(*(undefined4 *)(iVar11 + (int)ar4),fVar32);
      }
      else {
        dVar37 = *(double *)(iVar11 + (int)ar4);
      }
      if (cVar1 == '\0') {
        fVar32 = (float)((ulonglong)dVar37 >> 0x20);
        dVar37 = (double)CONCAT44(fVar32,SUB84(dVar37,0) - fVar32);
      }
      else {
        dVar37 = dVar37 - dVar37;
      }
      fVar32 = SUB84(dVar37,0);
      uVar44 = uVar44 << 0x13 | uVar43 << 0x14 | DAT_8c10e424 & 0x3fffff;
      uVar43 = (uVar44 & 0x80000) >> 0x13;
      uVar44 = (uVar44 & 0x100000) >> 0x14;
      cVar1 = (char)uVar44;
      dVar33 = (double)fVar32;
      if (cVar1 == '\0') {
        dVar36 = (double)(ulonglong)*(uint *)(iVar11 + 4 + (int)ar4);
      }
      else {
        in_xd0 = *(undefined8 *)(iVar11 + 4 + (int)ar4);
      }
      if (cVar1 == '\0') {
        dVar37 = (double)CONCAT44((int)((ulonglong)dVar37 >> 0x20),SUB84(dVar36,0));
      }
      uVar44 = (uVar43 << 0x13 | uVar44 << 0x14) & DAT_8c10e420;
      fVar34 = (float)((ulonglong)dVar40 >> 0x20);
      if ((char)uVar43 == '\0') {
        dVar36 = (double)CONCAT44(-((float)((ulonglong)dVar33 >> 0x20) * fVar34),SUB84(dVar33,0));
      }
      else {
        dVar36 = -(dVar33 * dVar40);
      }
      uVar43 = (uVar44 & 0x80000) >> 0x13;
      if ((char)uVar43 == '\0') {
        fVar35 = (float)((ulonglong)dVar37 >> 0x20) - SUB84(dVar37,0);
      }
      else {
        fVar35 = (float)((ulonglong)(dVar37 - dVar37) >> 0x20);
      }
      uVar43 = uVar43 << 0x13 | uVar44 & 0xfff00000 | DAT_8c10e424 & 0x3fffff;
      uVar44 = (uVar43 & 0x80000) >> 0x13;
      cVar2 = (char)uVar44;
      uVar43 = (uVar43 & 0x100000) >> 0x14;
      cVar1 = (char)uVar43;
      if (cVar2 == '\0') {
        dVar36 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) /
                                  (float)((ulonglong)(double)fVar35 >> 0x20),SUB84(dVar36,0));
      }
      else {
        dVar36 = dVar36 / (double)fVar35;
      }
      if (cVar1 == '\0') {
        dVar37 = (double)CONCAT44(DAT_8c10e42c,DAT_8c10e430);
      }
      else {
        dVar37 = (double)CONCAT44(DAT_8c10e430,DAT_8c10e42c);
        in_xd0 = CONCAT44(uRam8c10e434,DAT_8c10e430);
      }
      uVar43 = (uVar44 << 0x13 | uVar43 << 0x14) & DAT_8c10e420;
      if (cVar2 == '\0') {
        dVar36 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) +
                                  (float)((ulonglong)dVar37 >> 0x20),SUB84(dVar36,0));
      }
      else {
        dVar36 = dVar36 + dVar37;
      }
      fVar35 = SUB84(dVar37,0);
      if (cVar1 != '\0') {
        fVar35 = (float)((ulonglong)in_xd0 >> 0x20);
      }
      dVar33 = in_xd2;
      if (cVar1 == '\0') {
        dVar33 = (double)CONCAT44((float)dVar36,fVar32);
      }
      uVar44 = (uVar43 & 0x80000) >> 0x13;
      cVar1 = (char)uVar44;
      uVar43 = uVar43 >> 0x14;
      cVar2 = (char)uVar43;
      fVar32 = (float)((ulonglong)dVar33 >> 0x20);
      if (cVar1 == '\0') {
        bVar42 = fVar32 < fVar35;
      }
      else {
        bVar42 = dVar33 < (double)CONCAT44(fVar35,(float)dVar36);
      }
      if (bVar42) {
        dVar36 = dVar41;
        if (cVar2 == '\0') {
          dVar36 = (double)CONCAT44((int)((ulonglong)dVar41 >> 0x20),SUB84(dVar33,0));
        }
      }
      else {
        if (cVar1 == '\0') {
          bVar42 = SUB84(dVar41,0) < fVar32;
        }
        else {
          bVar42 = dVar41 < dVar33;
        }
        dVar36 = dVar33;
        if ((bVar42) && (dVar36 = in_xd14, cVar2 == '\0')) {
          dVar36 = (double)CONCAT44(SUB84(dVar41,0),SUB84(dVar33,0));
        }
      }
      uVar43 = (uVar44 << 0x13 | uVar43 << 0x14) & DAT_8c10e524;
      uVar44 = (uVar43 & 0x80000) >> 0x13;
      uVar43 = uVar43 >> 0x14;
      if ((char)uVar44 == '\0') {
        uVar45 = (undefined1)(int)(float)((ulonglong)dVar36 >> 0x20);
      }
      else {
        uVar45 = (undefined1)(int)dVar36;
      }
      *(undefined1 *)(*(int *)(*(int *)((int)DAT_8c10e520 + (int)ar4) + iVar5) + iVar7) = uVar45;
      iVar7 = uVar13 + 2;
      iVar11 = (int)DAT_8c10e522;
      if ((char)uVar43 == '\0') {
        dVar36 = (double)CONCAT44(*(undefined4 *)(iVar11 + (int)ar4),SUB84(dVar36,0));
      }
      else {
        dVar36 = *(double *)(iVar11 + (int)ar4);
      }
      fVar32 = (float)((ulonglong)dVar36 >> 0x20);
      uVar43 = uVar44 << 0x13 | uVar43 << 0x14 | uVar9 & 0x3fffff;
      uVar9 = (uVar43 & 0x100000) >> 0x14;
      cVar1 = (char)uVar9;
      dVar38 = (double)fVar32;
      dVar33 = dVar36;
      if (cVar1 == '\0') {
        dVar33 = (double)CONCAT44(fVar32,SUB84(dVar37,0));
      }
      uVar9 = (uVar43 & 0x80000 | uVar9 << 0x14) & DAT_8c10e524;
      if (cVar1 == '\0') {
        pdVar31 = pdVar27 + -1;
        pdVar27[-1] = dVar38;
        dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                  *(undefined4 *)(iVar11 + 4 + (int)ar4));
      }
      else {
        pdVar27[-1] = dVar38;
        pdVar31 = pdVar27 + -2;
        pdVar27[-2] = in_xd2;
        in_xd0 = *(undefined8 *)(iVar11 + 4 + (int)ar4);
      }
      uVar43 = (uVar9 & 0x80000) >> 0x13;
      cVar1 = (char)uVar43;
      if (cVar1 == '\0') {
        fVar32 = (float)((ulonglong)dVar33 >> 0x20) - SUB84(dVar33,0);
      }
      else {
        fVar32 = (float)((ulonglong)(dVar33 - dVar33) >> 0x20);
      }
      dVar37 = (double)CONCAT44(fVar32,(float)iVar7);
      if (iVar7 < 0) {
        dVar38 = (double)CONCAT44((int)((ulonglong)dVar38 >> 0x20),DAT_8c10e52c);
        if (cVar1 == '\0') {
          dVar37 = (double)CONCAT44(fVar32,(float)iVar7 + DAT_8c10e52c);
        }
        else {
          dVar37 = dVar37 + dVar38;
        }
      }
      uVar6 = SUB84(dVar38,0);
      if (cVar1 == '\0') {
        fVar32 = (float)((ulonglong)dVar37 >> 0x20) * SUB84(dVar37,0);
      }
      else {
        fVar32 = (float)((ulonglong)(dVar37 * dVar37) >> 0x20);
      }
      uVar43 = uVar43 << 0x13 | uVar9 & 0xfff00000 | DAT_8c10e528 & 0x3fffff;
      uVar9 = (uVar43 & 0x80000) >> 0x13;
      uVar43 = (uVar43 & 0x100000) >> 0x14;
      cVar1 = (char)uVar43;
      dVar37 = (double)fVar32;
      if (cVar1 == '\0') {
        uVar6 = *(undefined4 *)pdVar31;
        pdVar28 = (double *)((int)pdVar31 + 4);
      }
      else {
        in_xd2 = *pdVar31;
        pdVar28 = pdVar31 + 1;
      }
      if (cVar1 == '\0') {
        dVar33 = (double)CONCAT44(*(undefined4 *)pdVar28,uVar6);
        pdVar29 = (double *)((int)pdVar28 + 4);
      }
      else {
        dVar33 = *pdVar28;
        pdVar29 = pdVar28 + 1;
      }
      uVar43 = (uVar9 << 0x13 | uVar43 << 0x14) & DAT_8c10e524;
      if ((char)uVar9 == '\0') {
        fVar34 = (float)((ulonglong)dVar37 >> 0x20) / fVar34;
        dVar37 = (double)CONCAT44(fVar34,SUB84(dVar37,0));
        dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) - fVar34,SUB84(dVar33,0));
      }
      else {
        dVar37 = dVar37 / dVar40;
        dVar33 = dVar33 - dVar37;
      }
      dVar38 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),(float)dVar33);
      dVar33 = in_xd2;
      if (cVar1 == '\0') {
        dVar33 = (double)((ulonglong)dVar36 & 0xffffffff);
      }
      uVar6 = SUB84(dVar33,0);
      bVar47 = 0;
      bVar50 = 0;
      bVar49 = (byte)((uVar43 & 0x80000) >> 0x13);
      bVar48 = (byte)(uVar43 >> 0x14);
      (*(code *)puVar3)(uVar10,iVar12,ar6,ar7);
      if (bVar48 == 0) {
        dVar38 = (double)CONCAT44((int)((ulonglong)dVar38 >> 0x20),*(undefined4 *)((int)pdVar29 + 4)
                                 );
      }
      else {
        in_xd2 = *(double *)((int)pdVar29 + 4);
      }
      uVar9 = ((uint)bVar47 << 0xc | (uint)bVar50 << 0x12 | (uint)bVar49 << 0x13 |
              (uint)bVar48 << 0x14) & DAT_8c10e524;
      dVar36 = dVar37;
      if (bVar48 == 0) {
        dVar36 = (double)CONCAT44((int)((ulonglong)dVar37 >> 0x20),uVar6);
      }
      bVar48 = 0;
      bVar49 = 0;
      bVar47 = (byte)((uVar9 & 0x80000) >> 0x13);
      bVar50 = (byte)((uVar9 & 0x100000) >> 0x14);
      if (bVar47 == 0) {
        uVar6 = SUB84(dVar36,0);
      }
      else {
        uVar6 = SUB84(dVar36 + dVar38,0);
      }
      (*(code *)puVar4)(uVar10,iVar12,ar6,ar7);
      uVar9 = DAT_8c10e62c;
      if (bVar50 == 0) {
        dVar38 = (double)CONCAT44((int)((ulonglong)dVar38 >> 0x20),*(undefined4 *)pdVar29);
      }
      else {
        in_xd2 = *pdVar29;
      }
      uVar43 = ((uint)bVar48 << 0xc | (uint)bVar49 << 0x12 | (uint)bVar47 << 0x13 |
               (uint)bVar50 << 0x14) & DAT_8c10e524;
      dVar36 = dVar37;
      if (bVar50 == 0) {
        dVar36 = (double)CONCAT44((int)((ulonglong)dVar37 >> 0x20),uVar6);
      }
      uVar44 = (uVar43 & 0x80000) >> 0x13;
      cVar1 = (char)uVar44;
      uVar43 = (uVar43 & 0x100000) >> 0x14;
      iVar11 = (int)DAT_8c10e522;
      if (cVar1 == '\0') {
        dVar36 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) - SUB84(dVar38,0),
                                  SUB84(dVar36,0));
      }
      else {
        dVar36 = dVar36 - dVar38;
      }
      if ((char)uVar43 == '\0') {
        dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),
                                  *(undefined4 *)(iVar11 + (int)ar4));
      }
      else {
        in_xd4 = *(double *)(iVar11 + (int)ar4);
      }
      if (cVar1 == '\0') {
        dVar36 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) - SUB84(dVar36,0),
                                  SUB84(dVar36,0));
      }
      else {
        dVar36 = dVar36 - dVar36;
      }
      uVar44 = uVar44 << 0x13 | uVar43 << 0x14 | DAT_8c10e528 & 0x3fffff;
      uVar43 = (uVar44 & 0x80000) >> 0x13;
      uVar44 = (uVar44 & 0x100000) >> 0x14;
      cVar1 = (char)uVar44;
      dVar33 = (double)(float)((ulonglong)dVar36 >> 0x20);
      if (cVar1 == '\0') {
        dVar37 = (double)(ulonglong)*(uint *)(iVar11 + 4 + (int)ar4);
      }
      else {
        in_xd0 = *(undefined8 *)(iVar11 + 4 + (int)ar4);
      }
      dVar38 = in_xd4;
      if (cVar1 == '\0') {
        dVar38 = (double)CONCAT44(SUB84(dVar36,0),SUB84(dVar37,0));
      }
      uVar44 = (uVar43 << 0x13 | uVar44 << 0x14) & DAT_8c10e524;
      fVar32 = (float)((ulonglong)dVar40 >> 0x20);
      if ((char)uVar43 == '\0') {
        dVar37 = (double)CONCAT44(-((float)((ulonglong)dVar33 >> 0x20) * fVar32),SUB84(dVar33,0));
      }
      else {
        dVar37 = -(dVar33 * dVar40);
      }
      uVar43 = (uVar44 & 0x80000) >> 0x13;
      if ((char)uVar43 == '\0') {
        fVar34 = (float)((ulonglong)dVar38 >> 0x20) - SUB84(dVar38,0);
      }
      else {
        fVar34 = (float)((ulonglong)(dVar38 - dVar38) >> 0x20);
      }
      uVar44 = uVar43 << 0x13 | uVar44 & 0xfff00000 | DAT_8c10e528 & 0x3fffff;
      uVar43 = (uVar44 & 0x80000) >> 0x13;
      cVar1 = (char)uVar43;
      uVar44 = (uVar44 & 0x100000) >> 0x14;
      cVar2 = (char)uVar44;
      if (cVar1 == '\0') {
        dVar37 = (double)CONCAT44((float)((ulonglong)dVar37 >> 0x20) /
                                  (float)((ulonglong)(double)fVar34 >> 0x20),SUB84(dVar37,0));
      }
      else {
        dVar37 = dVar37 / (double)fVar34;
      }
      if (cVar2 == '\0') {
        dVar33 = (double)CONCAT44(DAT_8c10e530,DAT_8c10e534);
      }
      else {
        dVar33 = (double)CONCAT44(DAT_8c10e534,DAT_8c10e530);
        in_xd0 = CONCAT44(uRam8c10e538,DAT_8c10e534);
      }
      uVar43 = (uVar43 << 0x13 | uVar44 << 0x14) & DAT_8c10e524;
      if (cVar1 == '\0') {
        dVar37 = (double)CONCAT44((float)((ulonglong)dVar37 >> 0x20) +
                                  (float)((ulonglong)dVar33 >> 0x20),SUB84(dVar37,0));
      }
      else {
        dVar37 = dVar37 + dVar33;
      }
      fVar34 = SUB84(dVar33,0);
      if (cVar2 != '\0') {
        fVar34 = (float)((ulonglong)in_xd0 >> 0x20);
      }
      dVar38 = in_xd2;
      if (cVar2 == '\0') {
        dVar38 = (double)CONCAT44((float)dVar37,SUB84(dVar36,0));
      }
      uVar44 = (uVar43 & 0x80000) >> 0x13;
      cVar1 = (char)uVar44;
      uVar43 = uVar43 >> 0x14;
      cVar2 = (char)uVar43;
      fVar35 = (float)((ulonglong)dVar38 >> 0x20);
      if (cVar1 == '\0') {
        bVar42 = fVar35 < fVar34;
      }
      else {
        bVar42 = dVar38 < (double)CONCAT44(fVar34,(float)dVar37);
      }
      if (bVar42) {
        dVar37 = dVar41;
        if (cVar2 == '\0') {
          dVar37 = (double)CONCAT44((int)((ulonglong)dVar41 >> 0x20),SUB84(dVar38,0));
        }
      }
      else {
        if (cVar1 == '\0') {
          bVar42 = SUB84(dVar41,0) < fVar35;
        }
        else {
          bVar42 = dVar41 < dVar38;
        }
        dVar37 = dVar38;
        if ((bVar42) && (dVar37 = in_xd14, cVar2 == '\0')) {
          dVar37 = (double)CONCAT44(SUB84(dVar41,0),SUB84(dVar38,0));
        }
      }
      uVar44 = (uVar44 << 0x13 | uVar43 << 0x14) & DAT_8c10e628;
      uVar43 = (uVar44 & 0x80000) >> 0x13;
      uVar44 = uVar44 >> 0x14;
      if ((char)uVar43 == '\0') {
        uVar45 = (undefined1)(int)(float)((ulonglong)dVar37 >> 0x20);
      }
      else {
        uVar45 = (undefined1)(int)dVar37;
      }
      *(undefined1 *)(*(int *)(*(int *)((int)DAT_8c10e624 + (int)ar4) + iVar5) + iVar7) = uVar45;
      iVar7 = uVar13 + 3;
      iVar11 = (int)DAT_8c10e626;
      if ((char)uVar44 == '\0') {
        dVar37 = (double)CONCAT44(*(undefined4 *)(iVar11 + (int)ar4),SUB84(dVar37,0));
      }
      else {
        dVar37 = *(double *)(iVar11 + (int)ar4);
      }
      fVar34 = (float)((ulonglong)dVar37 >> 0x20);
      uVar43 = uVar43 << 0x13 | uVar44 << 0x14 | uVar9 & 0x3fffff;
      uVar9 = (uVar43 & 0x100000) >> 0x14;
      cVar1 = (char)uVar9;
      dVar38 = (double)fVar34;
      dVar36 = dVar37;
      if (cVar1 == '\0') {
        dVar36 = (double)CONCAT44(fVar34,SUB84(dVar33,0));
      }
      uVar9 = (uVar43 & 0x80000 | uVar9 << 0x14) & DAT_8c10e628;
      if (cVar1 == '\0') {
        pdVar31 = pdVar29 + -1;
        pdVar29[-1] = dVar38;
        dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),
                                  *(undefined4 *)(iVar11 + 4 + (int)ar4));
      }
      else {
        pdVar29[-1] = dVar38;
        pdVar31 = pdVar29 + -2;
        pdVar29[-2] = in_xd2;
        in_xd0 = *(undefined8 *)(iVar11 + 4 + (int)ar4);
      }
      uVar43 = (uVar9 & 0x80000) >> 0x13;
      cVar1 = (char)uVar43;
      if (cVar1 == '\0') {
        fVar34 = (float)((ulonglong)dVar36 >> 0x20) - SUB84(dVar36,0);
      }
      else {
        fVar34 = (float)((ulonglong)(dVar36 - dVar36) >> 0x20);
      }
      dVar36 = (double)CONCAT44(fVar34,(float)iVar7);
      if (iVar7 < 0) {
        dVar38 = (double)CONCAT44((int)((ulonglong)dVar38 >> 0x20),DAT_8c10e630);
        if (cVar1 == '\0') {
          dVar36 = (double)CONCAT44(fVar34,(float)iVar7 + DAT_8c10e630);
        }
        else {
          dVar36 = dVar36 + dVar38;
        }
      }
      uVar6 = SUB84(dVar38,0);
      if (cVar1 == '\0') {
        fVar34 = (float)((ulonglong)dVar36 >> 0x20) * SUB84(dVar36,0);
      }
      else {
        fVar34 = (float)((ulonglong)(dVar36 * dVar36) >> 0x20);
      }
      uVar43 = uVar43 << 0x13 | uVar9 & 0xfff00000 | DAT_8c10e62c & 0x3fffff;
      uVar9 = (uVar43 & 0x80000) >> 0x13;
      uVar43 = (uVar43 & 0x100000) >> 0x14;
      cVar1 = (char)uVar43;
      dVar36 = (double)fVar34;
      if (cVar1 == '\0') {
        uVar6 = *(undefined4 *)pdVar31;
        pdVar30 = (double *)((int)pdVar31 + 4);
      }
      else {
        in_xd2 = *pdVar31;
        pdVar30 = pdVar31 + 1;
      }
      if (cVar1 == '\0') {
        dVar33 = (double)CONCAT44(*(undefined4 *)pdVar30,uVar6);
        pdVar31 = (double *)((int)pdVar30 + 4);
      }
      else {
        dVar33 = *pdVar30;
        pdVar31 = pdVar30 + 1;
      }
      uVar43 = (uVar9 << 0x13 | uVar43 << 0x14) & DAT_8c10e628;
      if ((char)uVar9 == '\0') {
        fVar32 = (float)((ulonglong)dVar36 >> 0x20) / fVar32;
        dVar36 = (double)CONCAT44(fVar32,SUB84(dVar36,0));
        dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) - fVar32,SUB84(dVar33,0));
      }
      else {
        dVar36 = dVar36 / dVar40;
        dVar33 = dVar33 - dVar36;
      }
      dVar38 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),(float)dVar33);
      dVar33 = in_xd2;
      if (cVar1 == '\0') {
        dVar33 = (double)((ulonglong)dVar37 & 0xffffffff);
      }
      uVar6 = SUB84(dVar33,0);
      bVar48 = 0;
      bVar47 = 0;
      bVar50 = (byte)((uVar43 & 0x80000) >> 0x13);
      bVar49 = (byte)(uVar43 >> 0x14);
      (*(code *)puVar3)(uVar10,iVar12,ar6,ar7);
      if (bVar49 == 0) {
        dVar38 = (double)CONCAT44((int)((ulonglong)dVar38 >> 0x20),*(undefined4 *)((int)pdVar31 + 4)
                                 );
      }
      else {
        in_xd2 = *(double *)((int)pdVar31 + 4);
      }
      uVar9 = ((uint)bVar48 << 0xc | (uint)bVar47 << 0x12 | (uint)bVar50 << 0x13 |
              (uint)bVar49 << 0x14) & DAT_8c10e628;
      dVar37 = dVar36;
      if (bVar49 == 0) {
        dVar37 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),uVar6);
      }
      bVar47 = 0;
      bVar50 = 0;
      bVar49 = (byte)((uVar9 & 0x80000) >> 0x13);
      bVar48 = (byte)((uVar9 & 0x100000) >> 0x14);
      if (bVar49 == 0) {
        uVar6 = SUB84(dVar37,0);
      }
      else {
        uVar6 = SUB84(dVar37 + dVar38,0);
      }
      (*(code *)puVar4)(uVar10,iVar12,ar6,ar7);
      if (bVar48 == 0) {
        dVar38 = (double)CONCAT44((int)((ulonglong)dVar38 >> 0x20),*(undefined4 *)pdVar31);
      }
      else {
        in_xd2 = *pdVar31;
      }
      uVar9 = ((uint)bVar47 << 0xc | (uint)bVar50 << 0x12 | (uint)bVar49 << 0x13 |
              (uint)bVar48 << 0x14) & DAT_8c10e628;
      dVar33 = dVar36;
      if (bVar48 == 0) {
        dVar33 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),uVar6);
      }
      uVar43 = (uVar9 & 0x80000) >> 0x13;
      cVar1 = (char)uVar43;
      uVar9 = (uVar9 & 0x100000) >> 0x14;
      iVar11 = (int)DAT_8c10e626;
      if (cVar1 == '\0') {
        dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) - SUB84(dVar38,0),
                                  SUB84(dVar33,0));
      }
      else {
        dVar33 = dVar33 - dVar38;
      }
      if ((char)uVar9 == '\0') {
        dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                  *(undefined4 *)(iVar11 + (int)ar4));
      }
      else {
        in_xd4 = *(double *)(iVar11 + (int)ar4);
      }
      if (cVar1 == '\0') {
        dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) - SUB84(dVar33,0),
                                  SUB84(dVar33,0));
      }
      else {
        dVar33 = dVar33 - dVar33;
      }
      uVar9 = uVar43 << 0x13 | uVar9 << 0x14 | DAT_8c10e62c & 0x3fffff;
      uVar43 = (uVar9 & 0x80000) >> 0x13;
      uVar9 = (uVar9 & 0x100000) >> 0x14;
      cVar1 = (char)uVar9;
      dVar37 = (double)(float)((ulonglong)dVar33 >> 0x20);
      if (cVar1 == '\0') {
        dVar36 = (double)(ulonglong)*(uint *)(iVar11 + 4 + (int)ar4);
      }
      else {
        in_xd0 = *(undefined8 *)(iVar11 + 4 + (int)ar4);
      }
      dVar38 = in_xd4;
      if (cVar1 == '\0') {
        dVar38 = (double)CONCAT44(SUB84(dVar33,0),SUB84(dVar36,0));
      }
      uVar9 = (uVar43 << 0x13 | uVar9 << 0x14) & DAT_8c10e628;
      if ((char)uVar43 == '\0') {
        dVar36 = (double)CONCAT44(-((float)((ulonglong)dVar37 >> 0x20) *
                                   (float)((ulonglong)dVar40 >> 0x20)),SUB84(dVar37,0));
      }
      else {
        dVar36 = -(dVar37 * dVar40);
      }
      uVar43 = (uVar9 & 0x80000) >> 0x13;
      if ((char)uVar43 == '\0') {
        fVar32 = (float)((ulonglong)dVar38 >> 0x20) - SUB84(dVar38,0);
      }
      else {
        fVar32 = (float)((ulonglong)(dVar38 - dVar38) >> 0x20);
      }
      uVar43 = uVar43 << 0x13 | uVar9 & 0xfff00000 | DAT_8c10e62c & 0x3fffff;
      uVar9 = (uVar43 & 0x80000) >> 0x13;
      cVar1 = (char)uVar9;
      uVar43 = (uVar43 & 0x100000) >> 0x14;
      cVar2 = (char)uVar43;
      if (cVar1 == '\0') {
        dVar36 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) /
                                  (float)((ulonglong)(double)fVar32 >> 0x20),SUB84(dVar36,0));
      }
      else {
        dVar36 = dVar36 / (double)fVar32;
      }
      if (cVar2 == '\0') {
        dVar37 = (double)CONCAT44(DAT_8c10e634,DAT_8c10e638);
      }
      else {
        dVar37 = (double)CONCAT44(DAT_8c10e638,DAT_8c10e634);
        in_xd0 = CONCAT44(uRam8c10e63c,DAT_8c10e638);
      }
      uVar9 = (uVar9 << 0x13 | uVar43 << 0x14) & DAT_8c10e628;
      if (cVar1 == '\0') {
        dVar36 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) +
                                  (float)((ulonglong)dVar37 >> 0x20),SUB84(dVar36,0));
      }
      else {
        dVar36 = dVar36 + dVar37;
      }
      if (cVar2 == '\0') {
        fVar32 = SUB84(dVar37,0);
      }
      else {
        fVar32 = (float)((ulonglong)in_xd0 >> 0x20);
      }
      dVar38 = in_xd2;
      if (cVar2 == '\0') {
        dVar38 = (double)CONCAT44((float)dVar36,SUB84(dVar33,0));
      }
      uVar43 = (uVar9 & 0x80000) >> 0x13;
      cVar1 = (char)uVar43;
      uVar9 = uVar9 >> 0x14;
      cVar2 = (char)uVar9;
      fVar34 = (float)((ulonglong)dVar38 >> 0x20);
      if (cVar1 == '\0') {
        bVar42 = fVar34 < fVar32;
      }
      else {
        bVar42 = dVar38 < (double)CONCAT44(fVar32,(float)dVar36);
      }
      if (bVar42) {
        dVar36 = dVar41;
        if (cVar2 == '\0') {
          dVar36 = (double)CONCAT44((int)((ulonglong)dVar41 >> 0x20),SUB84(dVar38,0));
        }
      }
      else {
        if (cVar1 == '\0') {
          bVar42 = SUB84(dVar41,0) < fVar34;
        }
        else {
          bVar42 = dVar41 < dVar38;
        }
        dVar36 = dVar38;
        if ((bVar42) && (dVar36 = in_xd14, cVar2 == '\0')) {
          dVar36 = (double)CONCAT44(SUB84(dVar41,0),SUB84(dVar38,0));
        }
      }
      uVar43 = (uVar43 << 0x13 | uVar9 << 0x14) & DAT_8c10e774;
      bVar47 = 0;
      bVar50 = 0;
      uVar9 = (uVar43 & 0x80000) >> 0x13;
      bVar49 = (byte)uVar9;
      bVar48 = (byte)(uVar43 >> 0x14);
      if (bVar49 == 0) {
        uVar45 = (undefined1)(int)(float)((ulonglong)dVar36 >> 0x20);
      }
      else {
        uVar45 = (undefined1)(int)dVar36;
      }
      *(undefined1 *)(*(int *)(*(int *)((int)DAT_8c10e766 + (int)ar4) + iVar5) + iVar7) = uVar45;
      uVar43 = DAT_8c10e774;
      uVar13 = uVar13 + 4;
    } while (uVar13 < uVar8);
    iVar5 = *(int *)(pdVar31 + 1);
    *(uint *)(pdVar31 + 1) = iVar5 + 1U;
  } while (iVar5 + 1U <= *(uint *)((int)DAT_8c10e768 + (int)ar4));
  iVar12 = (int)DAT_8c10e76a;
  *(undefined4 *)(iVar12 + (int)ar4) = 0;
  puVar3 = PTR_FUN_8c10e778;
  *(undefined4 *)(iVar12 + 4 + (int)ar4) = 0;
  bVar47 = 0;
  bVar50 = 0;
  bVar49 = (byte)((uVar9 << 0x13 & uVar43) >> 0x13);
  (*(code *)puVar3)(ar4,0x14,ar6,ar7);
  iVar12 = (int)DAT_8c10e76c;
  if ((char)((((uint)bVar47 << 0xc | (uint)bVar50 << 0x12 | (uint)bVar49 << 0x13) & DAT_8c10e774 &
             0x80000) >> 0x13) == '\0') {
    uVar45 = (undefined1)(int)(float)((ulonglong)dVar37 >> 0x20);
  }
  else {
    uVar45 = (undefined1)(int)dVar37;
  }
  *(undefined1 *)(iVar12 + (int)ar4) = uVar45;
  *(undefined1 *)(iVar12 + 1 + (int)ar4) = 1;
  return 0;
}



/* FUN_8c10e6c0 @ 8c10e6c0 callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint FUN_8c10e6c0(int ar4,int ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar12;
  double dVar11;
  double dVar13;
  float fVar14;
  undefined8 in_xd2;
  bool bVar15;
  byte in_FPSCR_CAUSE;
  byte bVar16;
  byte in_FPSCR_DN;
  byte bVar17;
  byte in_FPSCR_PR;
  byte bVar18;
  byte in_FPSCR_SZ;
  byte bVar19;
  
  fVar14 = (float)((ulonglong)in_xd2 >> 0x20);
  iVar4 = 0;
  if (*(short *)(ar5 + 4) != 0) {
    do {
      iVar7 = iVar4 + 1;
      if (in_FPSCR_SZ != 0) {
        in_xd2 = *(undefined8 *)(*(int *)(DAT_8c10e76e + ar4) + (uint)*(byte *)(iVar4 + ar6) * 4);
      }
      fVar14 = (float)((ulonglong)in_xd2 >> 0x20);
      uVar5 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & DAT_8c10e774;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar5 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar5 & 0x100000) >> 0x14);
      iVar4 = iVar7;
    } while (iVar7 < (int)(uint)*(ushort *)(ar5 + 4));
  }
  uVar5 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c10e774;
  bVar16 = 0;
  bVar17 = 0;
  bVar18 = (byte)((uVar5 & 0x80000) >> 0x13);
  bVar19 = (byte)((uVar5 & 0x100000) >> 0x14);
  fVar12 = (float)(*(code *)PTR_thunk_FUN_8c013dfc_8c10e780)();
  uVar6 = (uint)bVar16 << 0xc | (uint)bVar17 << 0x12 | (uint)bVar18 << 0x13 | (uint)bVar19 << 0x14 |
          DAT_8c10e784;
  uVar5 = (uVar6 & 0x80000) >> 0x13;
  uVar6 = (uVar6 & 0x100000) >> 0x14;
  cVar1 = (char)uVar6;
  dVar13 = (double)fVar12;
  if (cVar1 == '\0') {
    dVar11 = (double)CONCAT44((undefined4)DAT_8c10e788,_DAT_8c10e77c);
  }
  else {
    dVar11 = (double)CONCAT44(DAT_8c10e788._4_4_,(undefined4)DAT_8c10e788);
  }
  if ((char)uVar5 == '\0') {
    dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) *
                              (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar13,0));
  }
  else {
    dVar13 = dVar13 * dVar11;
  }
  if (cVar1 == '\0') {
    dVar11 = (double)(ulonglong)*(uint *)(DAT_8c10e770 + ar4);
  }
  iVar4 = DAT_8c10e770 + -4;
  uVar5 = (uVar5 << 0x13 | uVar6 << 0x14) & DAT_8c10e774;
  if (cVar1 == '\0') {
    dVar11 = (double)CONCAT44(*(undefined4 *)(iVar4 + ar4),SUB84(dVar11,0));
  }
  else {
    dVar11 = *(double *)(iVar4 + ar4);
  }
  uVar6 = (uVar5 & 0x80000) >> 0x13;
  if ((char)uVar6 == '\0') {
    fVar12 = (float)((ulonglong)dVar11 >> 0x20) - SUB84(dVar11,0);
  }
  else {
    fVar12 = (float)((ulonglong)(dVar11 - dVar11) >> 0x20);
  }
  uVar5 = uVar6 << 0x13 | uVar5 & 0xfff00000 | DAT_8c10e784 & 0x3fffff;
  cVar1 = (char)((uVar5 & 0x80000) >> 0x13);
  cVar2 = (char)((uVar5 & 0x100000) >> 0x14);
  if (cVar1 == '\0') {
    dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) /
                              (float)((ulonglong)(double)fVar12 >> 0x20),SUB84(dVar13,0));
  }
  else {
    dVar13 = dVar13 / (double)fVar12;
  }
  if (cVar2 == '\0') {
    fVar14 = (float)dVar13;
  }
  puVar3 = PTR_thunk_FUN_8c013dfc_8c10e780;
  if (cVar2 == '\0') {
    puVar3 = _DAT_8c10e77c;
  }
  if (cVar1 == '\0') {
    bVar15 = (float)((ulonglong)(double)fVar14 >> 0x20) < (float)puVar3;
  }
  else {
    bVar15 = (double)fVar14 < (double)CONCAT44(puVar3,_DAT_8c10e77c);
  }
  if (bVar15) {
    if (cVar2 == '\0') {
      dVar13 = (double)CONCAT44(DAT_8c10e788._4_4_,_DAT_8c10e77c);
    }
    else {
      dVar13 = (double)CONCAT44(uRam8c10e790,DAT_8c10e788._4_4_);
    }
  }
  else if (cVar2 == '\0') {
    dVar13 = (double)CONCAT44((undefined4)DAT_8c10e850,_DAT_8c10e77c);
  }
  else {
    dVar13 = (double)CONCAT44(DAT_8c10e850._4_4_,(undefined4)DAT_8c10e850);
  }
  dVar11 = (double)fVar14;
  iVar4 = (int)DAT_8c10e84e;
  if (cVar2 == '\0') {
    dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),DAT_8c10e850._4_4_);
  }
  if (cVar1 == '\0') {
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) +
                              (float)((ulonglong)dVar13 >> 0x20),SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 + dVar13;
  }
  if (cVar1 == '\0') {
    iVar7 = (int)(float)((ulonglong)dVar11 >> 0x20);
  }
  else {
    iVar7 = (int)dVar11;
  }
  iVar10 = 0;
  uVar5 = 0;
  if (*(short *)(ar5 + 4) != 0) {
    do {
      iVar8 = (uint)*(byte *)(iVar10 + ar6) + iVar7;
      iVar9 = iVar4;
      if ((iVar8 <= iVar4) && (iVar9 = iVar8, iVar8 < 0)) {
        iVar9 = 0;
      }
      *(char *)(iVar10 + ar6) = (char)iVar9;
      iVar10 = iVar10 + 1;
      uVar5 = (uint)*(ushort *)(ar5 + 4);
    } while (iVar10 < (int)uVar5);
  }
  return uVar5;
}



/* FUN_8c10e6d0 @ 8c10e6d0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint FUN_8c10e6d0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int unaff_r11;
  int unaff_r12;
  int unaff_r14;
  undefined8 in_dr0;
  double dVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  undefined8 in_xd2;
  bool bVar15;
  byte in_FPSCR_CAUSE;
  byte bVar16;
  byte in_FPSCR_DN;
  byte bVar17;
  byte in_FPSCR_PR;
  byte bVar18;
  byte in_FPSCR_SZ;
  byte bVar19;
  
  fVar12 = (float)((ulonglong)in_dr0 >> 0x20);
  fVar14 = (float)((ulonglong)in_xd2 >> 0x20);
  iVar7 = 0;
  iVar4 = iVar7;
  if (*(short *)(unaff_r14 + 4) != 0) {
    do {
      iVar7 = iVar4 + 1;
      if (in_FPSCR_SZ != 0) {
        in_xd2 = *(undefined8 *)
                  (*(int *)(DAT_8c10e76e + unaff_r11) + (uint)*(byte *)(iVar4 + unaff_r12) * 4);
      }
      fVar14 = (float)((ulonglong)in_xd2 >> 0x20);
      uVar5 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & DAT_8c10e774;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar5 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar5 & 0x100000) >> 0x14);
      iVar4 = iVar7;
    } while (iVar7 < (int)(uint)*(ushort *)(unaff_r14 + 4));
  }
  uVar5 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c10e774;
  bVar16 = 0;
  bVar17 = 0;
  bVar18 = (byte)((uVar5 & 0x80000) >> 0x13);
  bVar19 = (byte)((uVar5 & 0x100000) >> 0x14);
  (*(code *)PTR_thunk_FUN_8c013dfc_8c10e780)(iVar7,ar5,ar6,ar7);
  uVar6 = (uint)bVar16 << 0xc | (uint)bVar17 << 0x12 | (uint)bVar18 << 0x13 | (uint)bVar19 << 0x14 |
          DAT_8c10e784;
  uVar5 = (uVar6 & 0x80000) >> 0x13;
  uVar6 = (uVar6 & 0x100000) >> 0x14;
  cVar1 = (char)uVar6;
  dVar13 = (double)fVar12;
  if (cVar1 == '\0') {
    dVar11 = (double)CONCAT44((undefined4)DAT_8c10e788,_DAT_8c10e77c);
  }
  else {
    dVar11 = (double)CONCAT44(DAT_8c10e788._4_4_,(undefined4)DAT_8c10e788);
  }
  if ((char)uVar5 == '\0') {
    dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) *
                              (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar13,0));
  }
  else {
    dVar13 = dVar13 * dVar11;
  }
  if (cVar1 == '\0') {
    dVar11 = (double)(ulonglong)*(uint *)(DAT_8c10e770 + unaff_r11);
  }
  iVar4 = DAT_8c10e770 + -4;
  uVar5 = (uVar5 << 0x13 | uVar6 << 0x14) & DAT_8c10e774;
  if (cVar1 == '\0') {
    dVar11 = (double)CONCAT44(*(undefined4 *)(iVar4 + unaff_r11),SUB84(dVar11,0));
  }
  else {
    dVar11 = *(double *)(iVar4 + unaff_r11);
  }
  uVar6 = (uVar5 & 0x80000) >> 0x13;
  if ((char)uVar6 == '\0') {
    fVar12 = (float)((ulonglong)dVar11 >> 0x20) - SUB84(dVar11,0);
  }
  else {
    fVar12 = (float)((ulonglong)(dVar11 - dVar11) >> 0x20);
  }
  uVar5 = uVar6 << 0x13 | uVar5 & 0xfff00000 | DAT_8c10e784 & 0x3fffff;
  cVar1 = (char)((uVar5 & 0x80000) >> 0x13);
  cVar2 = (char)((uVar5 & 0x100000) >> 0x14);
  if (cVar1 == '\0') {
    dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) /
                              (float)((ulonglong)(double)fVar12 >> 0x20),SUB84(dVar13,0));
  }
  else {
    dVar13 = dVar13 / (double)fVar12;
  }
  if (cVar2 == '\0') {
    fVar14 = (float)dVar13;
  }
  puVar3 = PTR_thunk_FUN_8c013dfc_8c10e780;
  if (cVar2 == '\0') {
    puVar3 = _DAT_8c10e77c;
  }
  if (cVar1 == '\0') {
    bVar15 = (float)((ulonglong)(double)fVar14 >> 0x20) < (float)puVar3;
  }
  else {
    bVar15 = (double)fVar14 < (double)CONCAT44(puVar3,_DAT_8c10e77c);
  }
  if (bVar15) {
    if (cVar2 == '\0') {
      dVar13 = (double)CONCAT44(DAT_8c10e788._4_4_,_DAT_8c10e77c);
    }
    else {
      dVar13 = (double)CONCAT44(uRam8c10e790,DAT_8c10e788._4_4_);
    }
  }
  else if (cVar2 == '\0') {
    dVar13 = (double)CONCAT44((undefined4)DAT_8c10e850,_DAT_8c10e77c);
  }
  else {
    dVar13 = (double)CONCAT44(DAT_8c10e850._4_4_,(undefined4)DAT_8c10e850);
  }
  dVar11 = (double)fVar14;
  iVar4 = (int)DAT_8c10e84e;
  if (cVar2 == '\0') {
    dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),DAT_8c10e850._4_4_);
  }
  if (cVar1 == '\0') {
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) +
                              (float)((ulonglong)dVar13 >> 0x20),SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 + dVar13;
  }
  if (cVar1 == '\0') {
    iVar7 = (int)(float)((ulonglong)dVar11 >> 0x20);
  }
  else {
    iVar7 = (int)dVar11;
  }
  iVar10 = 0;
  uVar5 = 0;
  if (*(short *)(unaff_r14 + 4) != 0) {
    do {
      iVar8 = (uint)*(byte *)(iVar10 + unaff_r12) + iVar7;
      iVar9 = iVar4;
      if ((iVar8 <= iVar4) && (iVar9 = iVar8, iVar8 < 0)) {
        iVar9 = 0;
      }
      *(char *)(iVar10 + unaff_r12) = (char)iVar9;
      iVar10 = iVar10 + 1;
      uVar5 = (uint)*(ushort *)(unaff_r14 + 4);
    } while (iVar10 < (int)uVar5);
  }
  return uVar5;
}



/* FUN_8c10e7de @ 8c10e7de callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c10e7de(int ar4,int ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  if (*(short *)(ar4 + 4) != 0) {
    do {
      *(byte *)(iVar2 + ar5) =
           *(byte *)(*(int *)((uint)*(byte *)(*(int *)(ar4 + 8) + iVar2) * 4 + ar6) +
                    (uint)*(byte *)(iVar2 + ar5));
      *(undefined1 *)(*(int *)(ar4 + 8) + iVar2) = 0;
      iVar2 = iVar2 + 1;
      uVar1 = (uint)*(ushort *)(ar4 + 4);
    } while (iVar2 < (int)uVar1);
  }
  return uVar1;
}



/* FUN_8c10e818 @ 8c10e818 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

uint FUN_8c10e818(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 a4;
  int iVar8;
  int *a5;
  int *a5_00;
  int *a4_00;
  char cVar9;
  int iStack_28;
  
  if (*(char *)(*(int *)(ar4 + 100) + 0x30) == '\0') {
    uVar4 = (*(code *)PTR_FUN_8c10e858)(*(undefined4 *)(ar4 + 0xc),2,ar6,ar7);
    puVar3 = PTR_FUN_8c10e9b0;
    if ((uVar4 & 0xff) == 0) {
      return 0;
    }
    pbVar5 = (byte *)(*(code *)PTR_FUN_8c10e9b0)
                               (**(undefined4 **)(ar4 + 0x5c),(*(undefined4 **)(ar4 + 0x5c))[1],ar6,
                                ar7);
    if (pbVar5 != (byte *)0x0) {
      cVar9 = '\0';
      a5 = (int *)(*(undefined4 **)(ar4 + 0x60))[1];
      a4 = **(undefined4 **)(ar4 + 0x60);
      uVar6 = (*(code *)puVar3)(a4,a5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x28) = uVar6;
      iVar8 = (int)DAT_8c10e9a0;
      *(uint *)(ar4 + 0x2c) = (uint)*(ushort *)(DAT_8c10e99e + ar4) * 2 + *(int *)(ar4 + 0x28);
      if (*(char *)(iVar8 + ar4) != '\0') {
        a5 = (int *)(*(undefined4 **)(ar4 + 0xc))[1];
        a4 = **(undefined4 **)(ar4 + 0xc);
        pcVar7 = (char *)(*(code *)puVar3)(a4,a5,ar6,ar7);
        cVar9 = '\x01' - *pcVar7;
      }
      puVar3 = PTR_libgcc_divide_helper_0106dc_8c10e9b8;
      if (*(char *)(DAT_8c10e9a2 + ar4) != '\0') {
        cVar9 = '\0';
      }
      bVar2 = false;
      if (cVar9 != '\0') {
        *(int *)(DAT_8c10e9a4 + ar4) = *(int *)(DAT_8c10e9a4 + ar4) + 1;
        iVar8 = (*(code *)puVar3)(a4,a5,ar6,ar7);
        if (iVar8 == 0) {
          iVar8 = (int)DAT_8c10e9a4;
          *(undefined4 *)(iVar8 + ar4) = 0;
          iVar8 = iVar8 + 4;
          *(int *)(iVar8 + ar4) = *(int *)(iVar8 + ar4) + 1;
          bVar2 = true;
        }
      }
      iVar8 = 0;
      iStack_28 = 0;
      a4_00 = *(int **)(DAT_8c10e9a6 + ar4);
      if (*(short *)(DAT_8c10e9a6 + 0xc + ar4) != 0) {
        do {
          a5_00 = *(int **)(iVar8 * 4 + DAT_8c10e9a8 + ar4);
          if (cVar9 != '\0') {
            *(char *)(a4_00[2] + (uint)*pbVar5) = *(char *)(a4_00[2] + (uint)*pbVar5) + '\x01';
          }
          *(undefined4 *)(iVar8 * 4 + ar4 + 0x34) = *(undefined4 *)(*a4_00 + (uint)*pbVar5 * 4);
          if (bVar2) {
            ar6 = *(int **)(DAT_8c10e9aa + ar4);
            a5 = a5_00;
            FUN_8c10e7de(a4_00,a5_00,ar6,ar7);
            if (0x13 < *(uint *)(DAT_8c10e9ac + ar4)) {
              a5 = a4_00;
              ar6 = a5_00;
              FUN_8c10e6c0(ar4,a4_00,a5_00,ar7);
            }
          }
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          iVar8 = iVar8 + 1;
          iStack_28 = iStack_28 + (uint)*(byte *)((uint)bVar1 + (int)a5_00);
          a4_00 = a4_00 + 3;
        } while (iVar8 < (int)(uint)*(ushort *)(DAT_8c10e9ae + ar4));
      }
      if (*(int *)(ar4 + 0x28) != 0) {
        uVar6 = (*(code *)PTR_FUN_8c10ead0)(*(undefined4 *)(ar4 + 100),a5,ar6,ar7);
        (**(code **)(ar4 + 0x68))(ar4,uVar6,iVar8,iStack_28);
      }
      if (0x13 < *(uint *)(DAT_8c10eac4 + ar4)) {
        *(undefined4 *)(DAT_8c10eac4 + ar4) = 0;
      }
    }
  }
  iVar8 = **(int **)(ar4 + 0x5c);
  return *(int *)((*(int **)(ar4 + 0x5c))[1] * 4 + *(int *)(iVar8 + 0x40)) == *(int *)(iVar8 + 0x3c)
         ^ 1;
}



/* FUN_8c10ea24 @ 8c10ea24 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c10ea24(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 a5;
  undefined4 a6;
  undefined4 *puStack_c;
  
  *(char *)(DAT_8c10eac6 + ar4) = (char)ar5;
  if ((char)ar5 == '\0') {
    puStack_c = *(undefined4 **)(ar4 + 0xc);
    a5 = 6;
    a6 = puStack_c[1];
  }
  else {
    puStack_c = *(undefined4 **)(ar4 + 0xc);
    a6 = puStack_c[1];
    a5 = 5;
  }
  uVar1 = (*(code *)PTR_FUN_8c10ead4)(*puStack_c,a5,a6,0);
  return (uint)((uVar1 & 0xff) == 0);
}



/* FUN_8c10ea62 @ 8c10ea62 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

uint FUN_8c10ea62(int ar4,uint ar5,undefined2 *ar6,int *ar7)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 a6;
  undefined2 *a6_00;
  undefined4 *puStack_1c;
  
  uVar1 = ar5 & 0xff;
  if (uVar1 == 2) {
    uVar5 = 1;
  }
  else {
    if (uVar1 != 3) {
      if (uVar1 == 10) {
        if (ar6 == (undefined2 *)0x0) {
          (*(code *)PTR_FUN_8c10ebf0)(ar4,ar5,0,ar7);
          (*(code *)PTR_FUN_8c10ebfc)(ar4,ar5,ar6,ar7);
          return 1;
        }
        (*(code *)PTR_FUN_8c10ebf8)(ar4,*ar7 + (int)ar6,ar6,ar7);
        iVar2 = (int)DAT_8c10ebda;
        *ar7 = *ar7 + 8;
        iVar4 = 0;
        if (*(short *)(iVar2 + ar4) == 0) {
          return 1;
        }
        do {
          iVar2 = iVar4 * 0xc;
          iVar4 = iVar4 + 1;
          *ar7 = (uint)*(ushort *)(iVar2 + *(int *)(DAT_8c10ebdc + ar4) + 4) * 2 + *ar7;
        } while (iVar4 < (int)(uint)*(ushort *)(DAT_8c10ebda + ar4));
        return 1;
      }
      if (uVar1 == 0xb) {
        if (ar6 != (undefined2 *)0x0) {
          (*(code *)PTR_FUN_8c10ec00)(ar4,*ar7 + (int)ar6,ar6,ar7);
        }
        iVar2 = (int)DAT_8c10ebda;
        *ar7 = *ar7 + 8;
        iVar4 = 0;
        if (*(short *)(iVar2 + ar4) == 0) {
          return 1;
        }
        do {
          iVar2 = iVar4 * 0xc;
          iVar4 = iVar4 + 1;
          *ar7 = (uint)*(ushort *)(iVar2 + *(int *)(DAT_8c10ebdc + ar4) + 4) * 2 + *ar7;
        } while (iVar4 < (int)(uint)*(ushort *)(DAT_8c10ebda + ar4));
        return 1;
      }
      if (uVar1 == 0xd) {
        ar6[1] = *(undefined2 *)(DAT_8c10ecb4 + ar4);
        *ar6 = *(undefined2 *)(DAT_8c10ecb6 + ar4);
        return 1;
      }
      if (uVar1 == 0xf) {
        *(undefined2 *)(DAT_8c10ecb4 + ar4) = ar6[1];
        iVar2 = (int)DAT_8c10ecb6;
        *(undefined2 *)(iVar2 + ar4) = *ar6;
        if (*(int *)(iVar2 + 0x20 + ar4) == 0) {
          return 1;
        }
        (*(code *)PTR_FUN_8c10ecc0)(ar4,ar5,ar6,ar7);
        return 1;
      }
      if (uVar1 == 0x10) {
        a6_00 = ar6;
        uVar1 = (*(code *)PTR_FUN_8c10ebe4)(ar4,ar6,ar6,ar7);
        puVar3 = PTR_LAB_8c10ebe8;
        if ((uVar1 & 0xff) == 0) {
          (*(code *)PTR_FUN_8c10ebf0)(ar4,ar6,a6_00,ar7);
          puVar3 = PTR_FUN_8c10ebf4;
        }
        *(undefined **)(ar4 + 0x18) = puVar3;
        return 1;
      }
      if (uVar1 == 0x16) {
        (*(code *)PTR_FUN_8c10ecc4)(ar4,ar5,ar6,ar7);
        return 1;
      }
      if (uVar1 == 0x17) {
        puStack_1c = *(undefined4 **)(ar4 + 0xc);
        a6 = puStack_1c[1];
        uVar5 = 7;
LAB_8c10eaee:
        uVar5 = (*(code *)PTR_FUN_8c10ebe0)(*puStack_1c,uVar5,a6,ar6);
        return uVar5;
      }
      if (uVar1 == 0x18) {
        puStack_1c = *(undefined4 **)(ar4 + 0xc);
        uVar5 = 6;
        ar6 = (undefined2 *)0x0;
        a6 = puStack_1c[1];
        goto LAB_8c10eaee;
      }
      if (uVar1 != (int)DAT_8c10eac8) {
        return 0;
      }
      uVar1 = FUN_8c10ddaa(ar4,ar5,ar6,ar7);
      goto LAB_8c10ec56;
    }
    uVar5 = 0;
  }
  uVar1 = FUN_8c10ea24(ar4,uVar5,ar6,ar7);
LAB_8c10ec56:
  return (uint)((uVar1 & 0xff) == 0);
}



/* FUN_8c10ec78 @ 8c10ec78 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c10ec78(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c10ecd4)(ar4,ar5,3,ar7);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x70) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x88) = 0;
  }
  return iVar1;
}



/* FUN_8c10ecd8 @ 8c10ecd8 callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c10ecd8(double *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  double *pdVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  uint uVar6;
  uint uVar7;
  double *pdVar8;
  double *pdVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double *pdVar13;
  double *pdVar14;
  int iVar15;
  uint uVar16;
  undefined8 *puVar17;
  double in_dr0;
  float fVar18;
  double in_dr2;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  double in_dr4;
  undefined4 uVar24;
  double dVar23;
  undefined4 in_fr7;
  float fVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  double in_dr8;
  double dVar29;
  double dVar30;
  double dVar31;
  double in_dr10;
  double dVar32;
  double dVar33;
  double in_dr12;
  double in_dr14;
  double dVar35;
  double in_xd0;
  double in_xd2;
  double dVar36;
  double in_xd4;
  double in_xd6;
  double dVar37;
  double in_xd8;
  double in_xd10;
  double in_xd12;
  double in_xd14;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  undefined1 auStack_3c [16];
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fVar34;
  
  if (in_FPSCR_SZ == 0) {
    _uStack_24 = CONCAT44(SUB84(in_dr14,0),uStack_24);
    puVar17 = &uStack_2c;
    uStack_2c = CONCAT44(SUB84(in_dr12,0),(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar17 = (undefined8 *)auStack_3c;
  }
  uVar6 = 1;
  uVar16 = 0;
  uVar7 = ar5;
  if (1 < ar5) {
    do {
      do {
        uVar7 = uVar7 >> 1;
        uVar16 = uVar16 ^ uVar7;
      } while ((uVar16 & uVar7) == 0);
      if (uVar16 < uVar6) {
        pdVar8 = (double *)(uVar16 * 4 + (int)ar4);
        pdVar13 = (double *)(uVar6 * 4 + (int)ar4);
        if (in_FPSCR_SZ == 0) {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)pdVar8);
          uVar24 = *(undefined4 *)pdVar13;
          in_dr4 = (double)CONCAT44(uVar24,SUB84(in_dr4,0));
          *(undefined4 *)pdVar13 = *(undefined4 *)pdVar8;
          *(undefined4 *)pdVar8 = uVar24;
        }
        else {
          in_xd2 = *pdVar8;
          in_dr4 = *pdVar13;
          *pdVar13 = in_xd2;
          *pdVar8 = in_dr4;
        }
      }
      uVar6 = uVar6 + 1;
      uVar7 = ar5;
    } while (uVar6 < ar5);
  }
  uVar7 = 0;
  if (1 < ar5) {
    do {
      uVar7 = uVar7 + 1;
      if ((int)uVar7 < 0) {
        uVar6 = 1 >> (~uVar7 & 0x1f) + 1;
      }
      else {
        uVar6 = 1 << (uVar7 & 0x1f);
      }
    } while (uVar6 < ar5);
  }
  puVar1 = &DAT_8c10eda0;
  if (in_FPSCR_SZ == 0) {
    dVar27 = (double)CONCAT44(DAT_8c10eda0,in_fr7);
  }
  else {
    dVar27 = (double)CONCAT44(_DAT_8c10eda4,DAT_8c10eda0);
  }
  uVar7 = uVar7 & 1;
  pdVar13 = (double *)(ar5 * 4 + (int)ar4);
  pdVar8 = ar4;
  if (uVar7 == 0) {
    while (pdVar8 < pdVar13) {
      uVar24 = SUB84(in_dr8,0);
      if (in_FPSCR_SZ == 0) {
        dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),*(undefined4 *)pdVar8);
      }
      else {
        in_xd6 = *pdVar8;
      }
      pdVar9 = (double *)((int)pdVar8 + 4);
      uVar6 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & _DAT_8c10eda4;
      if (in_FPSCR_SZ == 0) {
        dVar37 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar27,0));
      }
      else {
        dVar37 = *pdVar9;
        in_xd4 = in_xd6;
      }
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar6 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar6 & 0x100000) >> 0x14);
      pdVar5 = pdVar8 + 1;
      pdVar2 = (double *)((int)pdVar8 + 0xc);
      if (in_FPSCR_SZ == 0) {
        uVar24 = *(undefined4 *)pdVar5;
      }
      else {
        in_xd8 = *pdVar5;
      }
      if (in_FPSCR_PR == 0) {
        fVar22 = (float)((ulonglong)dVar37 >> 0x20);
        dVar37 = (double)CONCAT44(fVar22,SUB84(dVar37,0) - fVar22);
      }
      else {
        dVar37 = dVar37 - dVar37;
      }
      if (in_FPSCR_SZ == 0) {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(dVar27,0));
        dVar20 = (double)CONCAT44(*(undefined4 *)pdVar2,uVar24);
        dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),(int)((ulonglong)dVar37 >> 0x20))
        ;
        dVar23 = in_xd6;
        in_xd6 = in_xd2;
      }
      else {
        dVar20 = *pdVar2;
        dVar23 = dVar37;
      }
      if (in_FPSCR_PR == 0) {
        dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) + SUB84(in_dr2,0)
                                 );
      }
      else {
        dVar27 = dVar27 + in_dr2;
      }
      fVar22 = SUB84(dVar20,0);
      dVar30 = in_xd8;
      if (in_FPSCR_SZ == 0) {
        dVar30 = (double)CONCAT44(fVar22,SUB84(dVar37,0));
      }
      fVar25 = (float)((ulonglong)dVar20 >> 0x20);
      if (in_FPSCR_PR == 0) {
        dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) - fVar25,SUB84(dVar30,0));
        in_dr8 = (double)CONCAT44(fVar25 + fVar22,fVar22);
      }
      else {
        dVar30 = dVar30 - dVar20;
        in_dr8 = dVar20 + dVar20;
      }
      dVar37 = dVar23;
      in_xd2 = in_xd4;
      if (in_FPSCR_SZ == 0) {
        dVar37 = (double)CONCAT44(SUB84(dVar27,0),SUB84(dVar30,0));
        in_xd2 = in_xd6;
      }
      fVar22 = (float)((ulonglong)dVar30 >> 0x20);
      fVar25 = (float)((ulonglong)in_dr8 >> 0x20);
      if (in_FPSCR_PR == 0) {
        dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) + fVar25);
        in_dr2 = (double)CONCAT44((float)((ulonglong)dVar37 >> 0x20) - fVar25,
                                  SUB84(dVar37,0) - fVar22);
        in_dr4 = (double)(ulonglong)(uint)(SUB84(dVar30,0) + fVar22);
      }
      else {
        dVar27 = dVar27 + in_dr8;
        in_dr2 = (dVar37 - dVar30) - in_dr8;
        in_dr4 = dVar30 + dVar30;
      }
      if (in_FPSCR_SZ == 0) {
        *(int *)pdVar5 = (int)((ulonglong)in_dr2 >> 0x20);
        *(int *)pdVar8 = SUB84(dVar27,0);
        *(int *)pdVar2 = SUB84(in_dr2,0);
      }
      else {
        *pdVar5 = in_dr2;
        *pdVar8 = dVar23;
        *pdVar2 = in_xd2;
      }
      pdVar8 = pdVar8 + 2;
      in_xd6 = dVar23;
      if (in_FPSCR_SZ == 0) {
        *(int *)pdVar9 = SUB84(in_dr4,0);
      }
      else {
        *pdVar9 = in_xd4;
      }
    }
  }
  else {
    pdVar8 = (double *)((int)ar4 + 4);
    pdVar9 = ar4;
    while (pdVar9 < pdVar13) {
      if (in_FPSCR_SZ == 0) {
        dVar37 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr4,0));
      }
      else {
        dVar37 = *pdVar9;
      }
      pdVar5 = pdVar9 + 2;
      uVar6 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & DAT_8c10f0f0;
      uVar24 = (undefined4)((ulonglong)dVar37 >> 0x20);
      if (in_FPSCR_SZ == 0) {
        dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),uVar24);
        dVar37 = in_xd6;
        dVar20 = (double)CONCAT44(uVar24,*(undefined4 *)pdVar8);
      }
      else {
        in_xd4 = *pdVar8;
        dVar20 = dVar37;
      }
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar6 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar6 & 0x100000) >> 0x14);
      pdVar4 = pdVar9 + 1;
      pdVar2 = pdVar8 + 1;
      dVar23 = dVar20;
      if (in_FPSCR_SZ == 0) {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar24);
        dVar23 = in_xd2;
      }
      fVar22 = SUB84(dVar20,0);
      if (in_FPSCR_PR == 0) {
        dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) - fVar22);
      }
      else {
        dVar27 = dVar27 - dVar20;
      }
      dVar20 = in_xd4;
      if (in_FPSCR_SZ == 0) {
        dVar20 = (double)CONCAT44(fVar22,fVar22);
      }
      if (in_FPSCR_PR == 0) {
        dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(in_dr2,0),
                                  SUB84(dVar20,0));
      }
      else {
        dVar20 = dVar20 + in_dr2;
      }
      pdVar14 = pdVar8 + 2;
      *(double **)((int)puVar17 + -0x38) = pdVar4;
      if (in_FPSCR_SZ == 0) {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)pdVar4);
      }
      else {
        in_xd4 = *pdVar4;
      }
      *(double **)((int)puVar17 + -0x34) = pdVar2;
      if (in_FPSCR_SZ == 0) {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(dVar20,0));
        dVar30 = (double)CONCAT44(SUB84(dVar20,0),*(undefined4 *)pdVar2);
      }
      else {
        in_xd8 = *pdVar2;
        dVar30 = in_xd4;
        dVar23 = in_xd4;
      }
      if (in_FPSCR_PR == 0) {
        dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) - SUB84(dVar30,0),
                                  SUB84(dVar30,0));
      }
      else {
        dVar30 = dVar30 - dVar30;
      }
      uVar24 = SUB84(dVar30,0);
      dVar19 = in_xd8;
      if (in_FPSCR_SZ == 0) {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),uVar24);
        dVar19 = in_xd4;
      }
      if (in_FPSCR_PR == 0) {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0) + SUB84(in_dr2,0)
                                 );
      }
      else {
        dVar20 = dVar20 + in_dr2;
      }
      if (in_FPSCR_SZ == 0) {
        uVar24 = *(undefined4 *)pdVar5;
        dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),uVar24);
        dVar32 = (double)CONCAT44(*(undefined4 *)pdVar14,SUB84(in_dr10,0));
        dVar35 = (double)CONCAT44(uVar24,SUB84(in_dr14,0));
      }
      else {
        dVar35 = *pdVar5;
        dVar32 = *pdVar14;
        in_xd8 = dVar35;
      }
      fVar22 = (float)((ulonglong)dVar32 >> 0x20);
      if (in_FPSCR_PR == 0) {
        dVar35 = (double)CONCAT44((float)((ulonglong)dVar35 >> 0x20) - fVar22,SUB84(dVar35,0));
      }
      else {
        dVar35 = dVar35 - dVar32;
      }
      if (in_FPSCR_SZ == 0) {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar24);
        dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),fVar22);
        dVar33 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 3),SUB84(dVar32,0));
        dVar32 = in_xd8;
        in_xd8 = dVar23;
      }
      else {
        dVar33 = pdVar8[3];
      }
      pdVar2 = pdVar9 + 3;
      if (in_FPSCR_PR == 0) {
        dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) + SUB84(in_dr2,0)
                                 );
      }
      else {
        dVar30 = dVar30 + in_dr2;
      }
      uVar24 = (undefined4)((ulonglong)dVar33 >> 0x20);
      if (in_FPSCR_SZ == 0) {
        dVar35 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),uVar24);
        dVar33 = in_xd14;
        dVar23 = (double)CONCAT44(uVar24,*(undefined4 *)pdVar2);
      }
      else {
        in_xd10 = *pdVar2;
        dVar23 = dVar33;
      }
      if (in_FPSCR_PR == 0) {
        dVar35 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),SUB84(dVar35,0) + SUB84(dVar23,0)
                                 );
      }
      else {
        dVar35 = dVar35 + dVar23;
      }
      dVar31 = dVar37;
      if (in_FPSCR_SZ == 0) {
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),SUB84(dVar23,0));
        dVar23 = (double)CONCAT44(uVar24,SUB84(dVar27,0));
        dVar31 = in_xd10;
        in_xd10 = in_xd12;
      }
      fVar22 = (float)((ulonglong)dVar30 >> 0x20);
      if (in_FPSCR_PR == 0) {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),SUB84(dVar23,0) - fVar22);
      }
      else {
        dVar23 = dVar23 - dVar30;
      }
      dVar36 = dVar30;
      if (in_FPSCR_SZ == 0) {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar22);
        dVar36 = in_xd8;
      }
      if (in_FPSCR_PR == 0) {
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),
                                   SUB84(in_dr12,0) - (float)((ulonglong)dVar23 >> 0x20));
      }
      else {
        in_dr12 = in_dr12 - dVar23;
      }
      dVar29 = dVar37;
      if (in_FPSCR_SZ == 0) {
        dVar29 = (double)CONCAT44(SUB84(dVar27,0),SUB84(dVar30,0));
      }
      if (in_FPSCR_PR == 0) {
        dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) + SUB84(in_dr2,0),
                                  SUB84(dVar29,0));
      }
      else {
        dVar29 = dVar29 + in_dr2;
      }
      in_xd6 = dVar32;
      if (in_FPSCR_SZ == 0) {
        dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar29,0));
        in_xd6 = dVar37;
      }
      if (in_FPSCR_PR == 0) {
        dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) - SUB84(dVar35,0)
                                 );
      }
      else {
        dVar27 = dVar27 - dVar35;
      }
      fVar22 = (float)((ulonglong)dVar20 >> 0x20);
      dVar37 = dVar20;
      if (in_FPSCR_SZ == 0) {
        dVar37 = (double)CONCAT44(fVar22,SUB84(dVar23,0));
      }
      if (in_FPSCR_PR == 0) {
        dVar20 = (double)CONCAT44(fVar22 + SUB84(dVar20,0),SUB84(dVar20,0));
      }
      else {
        dVar20 = dVar20 + dVar20;
      }
      dVar23 = dVar33;
      if (in_FPSCR_SZ == 0) {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(dVar35,0));
        dVar23 = dVar36;
      }
      if (in_FPSCR_PR == 0) {
        dVar37 = (double)CONCAT44((float)((ulonglong)dVar37 >> 0x20) - SUB84(dVar20,0),
                                  SUB84(dVar37,0));
      }
      else {
        dVar37 = dVar37 - dVar20;
      }
      in_xd14 = dVar32;
      if (in_FPSCR_SZ == 0) {
        dVar35 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),SUB84(dVar29,0));
        in_xd14 = dVar33;
      }
      if (in_FPSCR_PR == 0) {
        in_dr14 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),
                                   SUB84(dVar35,0) + SUB84(in_dr2,0));
      }
      else {
        in_dr14 = dVar35 + in_dr2;
      }
      in_xd8 = in_dr14;
      if (in_FPSCR_SZ == 0) {
        dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),(int)((ulonglong)in_dr14 >> 0x20)
                                 );
        in_xd8 = dVar32;
      }
      fVar22 = (float)((ulonglong)dVar27 >> 0x20);
      if (in_FPSCR_PR == 0) {
        dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0) * fVar22);
      }
      else {
        dVar29 = dVar29 * dVar27;
      }
      uVar24 = (undefined4)((ulonglong)dVar20 >> 0x20);
      in_xd4 = in_xd10;
      dVar30 = dVar20;
      if (in_FPSCR_SZ == 0) {
        dVar20 = (double)CONCAT44(uVar24,SUB84(in_dr12,0));
        in_xd4 = dVar19;
        dVar30 = (double)CONCAT44(uVar24,SUB84(in_dr2,0));
      }
      if (in_FPSCR_PR == 0) {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0) * fVar22);
        dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) - SUB84(in_dr14,0),
                                  SUB84(dVar30,0));
      }
      else {
        dVar20 = dVar20 * dVar27;
        dVar30 = dVar30 - in_dr14;
      }
      fVar22 = (float)((ulonglong)dVar37 >> 0x20);
      in_xd2 = dVar37;
      if (in_FPSCR_SZ == 0) {
        dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),fVar22);
        in_xd2 = dVar23;
      }
      if (in_FPSCR_PR == 0) {
        dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) - SUB84(dVar27,0)
                                 );
        dVar37 = (double)CONCAT44(fVar22 + SUB84(dVar27,0),SUB84(dVar37,0));
      }
      else {
        dVar30 = dVar30 - dVar27;
        dVar37 = dVar37 + dVar27;
      }
      if (in_FPSCR_SZ == 0) {
        *(int *)pdVar5 = (int)((ulonglong)dVar30 >> 0x20);
      }
      else {
        *pdVar5 = dVar30;
      }
      if (in_FPSCR_PR == 0) {
        in_dr4 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(in_dr14,0),
                                  SUB84(dVar20,0));
      }
      else {
        in_dr4 = dVar20 + in_dr14;
      }
      dVar20 = dVar31;
      if (in_FPSCR_SZ == 0) {
        dVar20 = (double)CONCAT44(SUB84(dVar37,0),SUB84(dVar30,0));
      }
      if (in_FPSCR_PR == 0) {
        in_dr10 = (double)CONCAT44((int)((ulonglong)dVar37 >> 0x20),
                                   SUB84(dVar37,0) + SUB84(in_dr4,0));
        dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) - SUB84(in_dr4,0),
                                  SUB84(dVar20,0));
      }
      else {
        in_dr10 = dVar37 + in_dr4;
        dVar20 = dVar20 - in_dr4;
      }
      fVar22 = (float)((ulonglong)dVar29 >> 0x20);
      if (in_FPSCR_SZ == 0) {
        *(int *)pdVar9 = (int)((ulonglong)in_dr4 >> 0x20);
        *(int *)pdVar2 = SUB84(dVar20,0);
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fVar22);
      }
      else {
        *pdVar9 = in_dr4;
        *pdVar2 = in_xd2;
        in_xd2 = dVar29;
      }
      pdVar9 = pdVar9 + 4;
      if (in_FPSCR_PR == 0) {
        in_dr8 = (double)CONCAT44(fVar22 + SUB84(dVar29,0),SUB84(dVar29,0));
      }
      else {
        in_dr8 = dVar29 + dVar29;
      }
      if (in_FPSCR_PR == 0) {
        in_dr2 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0) - SUB84(in_dr8,0)
                                 );
      }
      else {
        in_dr2 = dVar20 - in_dr8;
      }
      if (in_FPSCR_SZ == 0) {
        *(int *)*(double **)((int)puVar17 + -0x38) = (int)((ulonglong)in_dr10 >> 0x20);
        *(int *)pdVar14 = SUB84(in_dr2,0);
        *(int *)pdVar8 = (int)((ulonglong)in_dr8 >> 0x20);
        *(int *)(pdVar8 + 3) = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        **(double **)((int)puVar17 + -0x38) = in_dr10;
        *pdVar14 = in_xd2;
        *pdVar8 = in_dr8;
        pdVar8[3] = in_dr2;
      }
      if (in_FPSCR_SZ == 0) {
        *(int *)*(double **)((int)puVar17 + -0x34) = SUB84(in_dr10,0);
      }
      else {
        **(double **)((int)puVar17 + -0x34) = dVar31;
      }
      pdVar8 = pdVar8 + 4;
      in_xd12 = in_xd10;
      in_xd10 = dVar31;
    }
  }
  if (0xf < ar5) {
    do {
      uVar7 = uVar7 + 2;
      if ((int)uVar7 < 0) {
        uVar6 = 1 >> (~uVar7 & 0x1f) + 1;
      }
      else {
        uVar6 = 1 << (uVar7 & 0x1f);
      }
      *(uint *)((int)puVar17 + -0x34) = uVar6 << 1;
      *(uint *)((int)puVar17 + -0xc) = uVar6 << 2;
      *(uint *)((int)puVar17 + -0x24) = *(int *)((int)puVar17 + -0x34) + uVar6;
      *(uint *)((int)puVar17 + -0x18) = uVar6 >> 1;
      pdVar9 = (double *)((uVar6 >> 1) * 4 + (int)ar4);
      *(int *)((int)puVar17 + -0x38) = *(int *)((int)puVar17 + -0x34) << 2;
      iVar10 = *(int *)((int)puVar17 + -0x24);
      iVar12 = *(int *)((int)puVar17 + -0xc);
      pdVar8 = ar4;
      do {
        uVar24 = SUB84(in_dr4,0);
        if (in_FPSCR_SZ == 0) {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),*(undefined4 *)pdVar8);
          dVar37 = in_xd6;
        }
        else {
          dVar37 = *pdVar8;
        }
        pdVar5 = (double *)(uVar6 * 4 + (int)pdVar8);
        uVar16 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                  (uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14) & DAT_8c10f0f0;
        dVar20 = dVar37;
        if (in_FPSCR_SZ == 0) {
          dVar20 = in_xd4;
          uVar24 = SUB84(dVar27,0);
        }
        pdVar2 = (double *)(iVar10 * 4 + (int)pdVar8);
        *(double **)((int)puVar17 + -0x30) = pdVar5;
        if (in_FPSCR_SZ == 0) {
          dVar23 = (double)CONCAT44(*(undefined4 *)pdVar5,uVar24);
        }
        else {
          dVar23 = *pdVar5;
        }
        in_FPSCR_CAUSE = 0;
        in_FPSCR_DN = 0;
        in_FPSCR_PR = (byte)((uVar16 & 0x80000) >> 0x13);
        in_FPSCR_SZ = (byte)((uVar16 & 0x100000) >> 0x14);
        pdVar5 = (double *)(*(int *)((int)puVar17 + -0x38) + (int)pdVar8);
        fVar22 = (float)((ulonglong)dVar23 >> 0x20);
        in_xd6 = dVar23;
        if (in_FPSCR_SZ == 0) {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(dVar27,0));
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),fVar22);
          in_xd6 = dVar37;
          dVar37 = in_xd2;
        }
        if (in_FPSCR_PR == 0) {
          fVar22 = SUB84(dVar23,0) - fVar22;
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),
                                    SUB84(dVar27,0) + SUB84(in_dr2,0));
        }
        else {
          fVar22 = SUB84(dVar23 - dVar23,0);
          dVar27 = dVar27 + in_dr2;
        }
        *(double **)((int)puVar17 + -0x2c) = pdVar5;
        if (in_FPSCR_SZ == 0) {
          dVar23 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(in_dr8,0));
        }
        else {
          dVar23 = *pdVar5;
        }
        *(double **)((int)puVar17 + -0x28) = pdVar2;
        if (in_FPSCR_SZ == 0) {
          uVar24 = (undefined4)((ulonglong)dVar23 >> 0x20);
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar24);
          dVar23 = (double)CONCAT44(uVar24,fVar22);
          dVar30 = (double)CONCAT44(uVar24,*(undefined4 *)pdVar2);
        }
        else {
          in_xd8 = *pdVar2;
          dVar37 = dVar23;
          dVar30 = dVar23;
        }
        fVar22 = SUB84(dVar30,0);
        if (in_FPSCR_PR == 0) {
          dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) - fVar22,SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 - dVar30;
        }
        dVar30 = in_xd8;
        if (in_FPSCR_SZ == 0) {
          dVar30 = (double)CONCAT44(fVar22,fVar22);
        }
        if (in_FPSCR_PR == 0) {
          dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + SUB84(in_dr2,0),
                                    SUB84(dVar30,0));
        }
        else {
          dVar30 = dVar30 + in_dr2;
        }
        dVar19 = in_xd6;
        if (in_FPSCR_SZ == 0) {
          dVar19 = (double)CONCAT44(SUB84(dVar27,0),SUB84(in_dr2,0));
        }
        fVar22 = (float)((ulonglong)dVar30 >> 0x20);
        if (in_FPSCR_PR == 0) {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - fVar22,SUB84(dVar19,0));
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) + fVar22);
        }
        else {
          dVar19 = dVar19 - dVar30;
          dVar27 = dVar27 + dVar30;
        }
        uVar24 = (undefined4)((ulonglong)dVar19 >> 0x20);
        if (in_FPSCR_SZ == 0) {
          *(undefined4 *)pdVar5 = uVar24;
          *(int *)pdVar8 = SUB84(dVar27,0);
          dVar19 = (double)CONCAT44(uVar24,SUB84(dVar23,0));
        }
        else {
          *pdVar5 = dVar19;
          *pdVar8 = in_xd6;
          dVar37 = dVar20;
        }
        fVar22 = (float)((ulonglong)dVar23 >> 0x20);
        if (in_FPSCR_PR == 0) {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) - fVar22);
        }
        else {
          dVar19 = dVar19 - dVar23;
        }
        if (in_FPSCR_PR == 0) {
          fVar22 = SUB84(dVar23,0) + fVar22;
        }
        else {
          fVar22 = SUB84(dVar23 + dVar23,0);
        }
        pdVar5 = (double *)(iVar10 * 4 + (int)pdVar9);
        if (in_FPSCR_SZ == 0) {
          *(int *)*(double **)((int)puVar17 + -0x28) = SUB84(dVar19,0);
        }
        else {
          **(double **)((int)puVar17 + -0x28) = dVar37;
        }
        if (in_FPSCR_SZ == 0) {
          *(float *)*(double **)((int)puVar17 + -0x30) = fVar22;
        }
        else {
          **(double **)((int)puVar17 + -0x30) = dVar20;
        }
        pdVar2 = (double *)(uVar6 * 4 + (int)pdVar9);
        if (in_FPSCR_SZ == 0) {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),*(undefined4 *)pdVar9);
        }
        else {
          in_xd6 = *pdVar9;
        }
        *(double **)((int)puVar17 + -0x30) = pdVar2;
        if (in_FPSCR_SZ == 0) {
          fVar22 = *(float *)pdVar2;
          dVar30 = (double)CONCAT44(fVar22,SUB84(dVar30,0));
          dVar23 = (double)CONCAT44(SUB84(dVar27,0),fVar22);
          in_xd4 = dVar20;
        }
        else {
          dVar30 = *pdVar2;
          fVar22 = SUB84(in_xd6,0);
          dVar23 = in_xd6;
          in_xd4 = dVar30;
        }
        if (in_FPSCR_PR == 0) {
          dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar27,0),
                                    SUB84(dVar30,0));
          dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) - fVar22,fVar22);
        }
        else {
          dVar30 = dVar30 + dVar27;
          dVar23 = dVar23 - dVar23;
        }
        *(double **)((int)puVar17 + -0x2c) = pdVar5;
        if (in_FPSCR_SZ == 0) {
          dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),*(undefined4 *)pdVar5);
        }
        else {
          in_xd4 = *pdVar5;
        }
        pdVar5 = (double *)(*(int *)((int)puVar17 + -0x38) + (int)pdVar9);
        fVar22 = (float)((ulonglong)dVar30 >> 0x20);
        dVar20 = dVar30;
        if (in_FPSCR_SZ == 0) {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),fVar22);
          dVar20 = dVar37;
        }
        fVar25 = (float)((ulonglong)dVar27 >> 0x20);
        if (in_FPSCR_PR == 0) {
          dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),SUB84(dVar23,0) * fVar25);
        }
        else {
          dVar23 = dVar23 * dVar27;
        }
        *(double **)((int)puVar17 + -0x28) = pdVar5;
        if (in_FPSCR_SZ == 0) {
          dVar27 = (double)CONCAT44(fVar25,*(undefined4 *)pdVar5);
        }
        else {
          in_xd6 = *pdVar5;
        }
        if (in_FPSCR_PR == 0) {
          fVar28 = (float)((ulonglong)dVar27 >> 0x20);
          fVar25 = SUB84(dVar27,0) * fVar28;
          dVar27 = (double)CONCAT44(fVar28,fVar25);
          in_dr8 = (double)CONCAT44(fVar22 + fVar25,SUB84(dVar30,0));
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) - fVar25);
        }
        else {
          dVar27 = dVar27 * dVar27;
          in_dr8 = dVar30 + dVar27;
          dVar19 = dVar19 - dVar27;
        }
        if (in_FPSCR_SZ == 0) {
          *(int *)pdVar5 = SUB84(dVar19,0);
          *(int *)pdVar9 = (int)((ulonglong)in_dr8 >> 0x20);
        }
        else {
          *pdVar5 = dVar20;
          *pdVar9 = in_dr8;
        }
        fVar22 = (float)((ulonglong)dVar23 >> 0x20);
        in_xd2 = dVar23;
        if (in_FPSCR_SZ == 0) {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),fVar22);
          in_xd2 = dVar20;
        }
        fVar25 = SUB84(dVar23,0);
        if (in_FPSCR_PR == 0) {
          in_dr2 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) - fVar25);
          in_dr4 = (double)CONCAT44(fVar22 + fVar25,fVar25);
        }
        else {
          in_dr2 = dVar19 - dVar23;
          in_dr4 = dVar23 + dVar23;
        }
        pdVar8 = (double *)((int)pdVar8 + iVar12 * 4);
        if (in_FPSCR_SZ == 0) {
          *(int *)*(double **)((int)puVar17 + -0x2c) = SUB84(in_dr2,0);
        }
        else {
          **(double **)((int)puVar17 + -0x2c) = in_xd2;
        }
        if (in_FPSCR_SZ == 0) {
          *(int *)*(double **)((int)puVar17 + -0x30) = (int)((ulonglong)in_dr4 >> 0x20);
        }
        else {
          **(double **)((int)puVar17 + -0x30) = in_dr4;
        }
        pdVar9 = (double *)((int)pdVar9 + iVar12 * 4);
      } while (pdVar8 < pdVar13);
      iVar10 = uVar7 * 4;
      if (in_FPSCR_SZ == 0) {
        uVar24 = *(undefined4 *)(PTR_DAT_8c10f0f4 + iVar10);
        *(undefined4 *)((int)puVar17 + -0x10) = uVar24;
        in_dr2 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c10f0f8 + iVar10),uVar24);
        *(undefined4 *)((int)puVar17 + -0x14) = *(undefined4 *)(PTR_DAT_8c10f0f8 + iVar10);
      }
      else {
        in_xd2 = *(double *)(PTR_DAT_8c10f0f4 + iVar10);
        *(double *)((int)puVar17 + -0x10) = in_xd2;
        in_dr2 = *(double *)(PTR_DAT_8c10f0f8 + iVar10);
        *(double *)((int)puVar17 + -0x14) = in_dr2;
      }
      iVar10 = 4;
      if (in_FPSCR_SZ == 0) {
        in_dr4 = (double)(ulonglong)DAT_8c10f0fc;
      }
      else {
        in_xd4 = (double)CONCAT44(DAT_8c10f100,DAT_8c10f0fc);
      }
      puVar1 = &DAT_8c10f100;
      if (in_FPSCR_SZ == 0) {
        in_dr4 = (double)CONCAT44(DAT_8c10f100,SUB84(in_dr4,0));
      }
      else {
        in_dr4 = (double)CONCAT44(_DAT_8c10f104,DAT_8c10f100);
      }
      iVar15 = uVar6 * 4;
      *(undefined4 *)((int)puVar17 + -0x30) = 1;
      *(int *)((int)puVar17 + -0x38) = *(int *)((int)puVar17 + -0x24) << 2;
      iVar12 = *(int *)((int)puVar17 + -0x34);
      iVar11 = *(int *)((int)puVar17 + -0xc);
      if (*(uint *)((int)puVar17 + -0x30) < *(uint *)((int)puVar17 + -0x18)) {
        do {
          if (in_FPSCR_SZ == 0) {
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                                      *(undefined4 *)((int)puVar17 + -0x10));
          }
          else {
            in_xd2 = *(double *)((int)puVar17 + -0x10);
          }
          uVar6 = ((uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14) & DAT_8c10f0f0;
          dVar37 = in_xd4;
          if (in_FPSCR_SZ == 0) {
            dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(in_dr4,0));
            dVar37 = in_xd6;
          }
          in_FPSCR_PR = (byte)((uVar6 & 0x80000) >> 0x13);
          in_FPSCR_SZ = (byte)(uVar6 >> 0x14);
          if (in_FPSCR_PR == 0) {
            fVar22 = SUB84(in_dr2,0) * SUB84(dVar27,0);
          }
          else {
            fVar22 = SUB84(in_dr2 * dVar27,0);
          }
          if (in_FPSCR_SZ == 0) {
            dVar20 = (double)CONCAT44(*(undefined4 *)((int)puVar17 + -0x14),fVar22);
            in_dr0 = (double)CONCAT44(SUB84(dVar27,0),SUB84(in_dr0,0));
          }
          else {
            dVar20 = *(double *)((int)puVar17 + -0x14);
            in_dr0 = dVar37;
          }
          fVar22 = (float)((ulonglong)in_dr4 >> 0x20);
          if (in_FPSCR_PR == 0) {
            dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * fVar22,SUB84(dVar20,0));
          }
          else {
            dVar20 = dVar20 * in_dr4;
          }
          if (in_FPSCR_SZ == 0) {
            in_dr4 = (double)CONCAT44(fVar22,SUB84(dVar20,0));
            dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                      *(undefined4 *)((int)puVar17 + -0x10));
            dVar23 = in_xd2;
          }
          else {
            dVar23 = *(double *)((int)puVar17 + -0x10);
            in_xd4 = in_xd2;
          }
          if (in_FPSCR_PR == 0) {
            dVar30 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),
                                      SUB84(in_dr4,0) - (float)((ulonglong)dVar20 >> 0x20));
          }
          else {
            dVar30 = in_dr4 - dVar20;
          }
          if (in_FPSCR_SZ == 0) {
            dVar20 = (double)CONCAT44(*(undefined4 *)((int)puVar17 + -0x14),SUB84(dVar20,0));
          }
          else {
            dVar20 = *(double *)((int)puVar17 + -0x14);
          }
          if (in_FPSCR_PR == 0) {
            fVar22 = (float)((ulonglong)dVar20 >> 0x20);
            dVar20 = (double)CONCAT44(fVar22,(float)((ulonglong)in_dr0 >> 0x20) * fVar22 +
                                             SUB84(dVar20,0) * (float)((ulonglong)dVar30 >> 0x20));
          }
          else {
            dVar20 = dVar20 * dVar30;
          }
          if (in_FPSCR_SZ == 0) {
            uVar24 = SUB84(dVar20,0);
            fVar22 = SUB84(dVar30,0);
            dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fVar22);
            in_xd6 = dVar23;
            in_dr4 = (double)CONCAT44(uVar24,fVar22);
          }
          else {
            fVar22 = SUB84(dVar23,0);
            in_xd6 = in_xd4;
            in_dr4 = dVar23;
          }
          if (in_FPSCR_PR == 0) {
            fVar25 = SUB84(dVar20,0) * fVar22;
          }
          else {
            fVar25 = SUB84(dVar20 * in_dr4,0);
          }
          fVar28 = (float)((ulonglong)in_dr4 >> 0x20);
          dVar20 = in_dr4;
          if (in_FPSCR_SZ == 0) {
            dVar20 = (double)CONCAT44(fVar28,fVar25);
          }
          if (in_FPSCR_PR == 0) {
            dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * fVar28,SUB84(dVar20,0));
          }
          else {
            dVar20 = dVar20 * in_dr4;
          }
          in_xd2 = in_dr4;
          if (in_FPSCR_SZ == 0) {
            dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar20,0));
            dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fVar28);
            in_xd2 = in_xd6;
            in_xd6 = dVar37;
          }
          if (in_FPSCR_PR == 0) {
            fVar25 = (float)((ulonglong)dVar20 >> 0x20);
            dVar20 = (double)CONCAT44(fVar25,SUB84(dVar20,0) * fVar22);
            dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) - fVar25);
          }
          else {
            dVar20 = dVar20 * in_dr4;
            dVar27 = dVar27 - dVar20;
          }
          if (in_FPSCR_SZ == 0) {
            in_dr2 = (double)CONCAT44(_DAT_8c10f104,SUB84(dVar20,0));
            dVar37 = (double)CONCAT44(SUB84(dVar20,0),SUB84(in_dr8,0));
          }
          else {
            in_dr2 = (double)CONCAT44(_FUN_8c10f108,_DAT_8c10f104);
            dVar37 = in_xd2;
          }
          if (in_FPSCR_PR == 0) {
            in_dr8 = (double)CONCAT44((float)((ulonglong)dVar37 >> 0x20) *
                                      (float)((ulonglong)in_dr2 >> 0x20),SUB84(dVar37,0));
          }
          else {
            in_dr8 = dVar37 * in_dr2;
          }
          pdVar9 = (double *)((iVar15 - iVar10) + (int)ar4);
          pdVar8 = (double *)(iVar10 + (int)ar4);
          dVar37 = in_xd10;
          do {
            pdVar5 = (double *)(iVar15 + (int)pdVar8);
            *(double **)((int)puVar17 + -0x28) = pdVar5;
            if (in_FPSCR_SZ == 0) {
              in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),*(undefined4 *)pdVar5);
            }
            else {
              in_xd8 = *pdVar5;
            }
            uVar6 = ((uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14) & DAT_8c10f0f0;
            dVar20 = in_xd8;
            if (in_FPSCR_SZ == 0) {
              in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr8,0));
              dVar20 = in_xd2;
            }
            in_FPSCR_PR = (byte)((uVar6 & 0x80000) >> 0x13);
            in_FPSCR_SZ = (byte)(uVar6 >> 0x14);
            fVar25 = (float)((ulonglong)in_dr8 >> 0x20);
            if (in_FPSCR_PR == 0) {
              fVar18 = SUB84(in_dr2,0) * fVar25;
            }
            else {
              fVar18 = SUB84(in_dr2 * in_dr8,0);
            }
            pdVar5 = (double *)(iVar15 + (int)pdVar9);
            fVar26 = SUB84(dVar27,0);
            dVar30 = dVar20;
            dVar23 = in_xd6;
            if (in_FPSCR_SZ == 0) {
              in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fVar18);
              dVar30 = in_xd14;
              dVar23 = (double)CONCAT44(fVar26,SUB84(in_dr0,0));
            }
            *(double **)((int)puVar17 + -4) = pdVar5;
            if (in_FPSCR_SZ == 0) {
              fVar34 = *(float *)pdVar5;
              dVar32 = (double)CONCAT44(fVar34,fVar18);
              dVar19 = (double)CONCAT44(fVar34,SUB84(in_dr10,0));
            }
            else {
              dVar32 = *pdVar5;
              fVar34 = (float)((ulonglong)dVar32 >> 0x20);
              dVar19 = dVar32;
            }
            fVar18 = (float)((ulonglong)dVar23 >> 0x20);
            if (in_FPSCR_PR == 0) {
              fVar21 = (float)((ulonglong)dVar32 >> 0x20) * fVar26;
              dVar32 = (double)CONCAT44(fVar21,SUB84(dVar32,0));
              dVar19 = (double)CONCAT44(fVar18 * SUB84(in_dr8,0) + fVar34 * fVar25,SUB84(dVar19,0));
              dVar35 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr14,0) - fVar21)
              ;
            }
            else {
              dVar19 = dVar19 * in_dr8;
              dVar32 = dVar32 * dVar27;
              fVar21 = (float)((ulonglong)dVar32 >> 0x20);
              dVar35 = in_dr14 - dVar32;
            }
            if (in_FPSCR_SZ == 0) {
              in_dr8 = (double)CONCAT44(fVar25,(int)((ulonglong)dVar19 >> 0x20));
              fVar25 = *(float *)pdVar8;
              dVar32 = (double)CONCAT44(fVar21,fVar25);
              dVar33 = (double)CONCAT44(fVar25,SUB84(dVar19,0));
              dVar19 = in_xd8;
            }
            else {
              dVar20 = *pdVar8;
              fVar25 = (float)((ulonglong)dVar20 >> 0x20);
              dVar33 = dVar20;
            }
            if (in_FPSCR_PR == 0) {
              dVar33 = (double)CONCAT44(fVar25 + SUB84(in_dr8,0),SUB84(dVar33,0));
              fVar25 = SUB84(dVar32,0) - SUB84(in_dr8,0);
            }
            else {
              dVar33 = dVar33 + in_dr8;
              fVar25 = SUB84(dVar32 - in_dr8,0);
            }
            if (in_FPSCR_SZ == 0) {
              *(float *)((int)puVar17 + -0x1c) = fVar25;
            }
            else {
              *(double *)((int)puVar17 + -0x1c) = dVar20;
            }
            if (in_FPSCR_SZ == 0) {
              in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),*(undefined4 *)pdVar9);
            }
            else {
              dVar19 = *pdVar9;
            }
            pdVar5 = (double *)(*(int *)((int)puVar17 + -0x38) + (int)pdVar8);
            fVar34 = SUB84(in_dr8,0);
            dVar32 = dVar19;
            if (in_FPSCR_SZ == 0) {
              dVar32 = (double)CONCAT44(fVar34,SUB84(in_dr12,0));
            }
            fVar21 = SUB84(dVar35,0);
            if (in_FPSCR_PR == 0) {
              dVar32 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) + fVar21,SUB84(dVar32,0))
              ;
            }
            else {
              dVar32 = dVar32 + dVar35;
            }
            in_xd10 = dVar19;
            if (in_FPSCR_SZ == 0) {
              dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),fVar34);
              in_xd10 = dVar37;
            }
            if (in_FPSCR_PR == 0) {
              dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),SUB84(dVar33,0) - fVar21);
            }
            else {
              dVar33 = dVar33 - dVar35;
            }
            *(double **)((int)puVar17 + -0x2c) = pdVar5;
            if (in_FPSCR_SZ == 0) {
              dVar37 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar21);
            }
            else {
              dVar37 = *pdVar5;
            }
            uVar24 = (undefined4)((ulonglong)dVar37 >> 0x20);
            dVar35 = dVar37;
            if (in_FPSCR_SZ == 0) {
              dVar35 = (double)CONCAT44(uVar24,fVar25);
            }
            fVar25 = (float)((ulonglong)in_dr8 >> 0x20);
            if (in_FPSCR_PR == 0) {
              dVar35 = (double)CONCAT44((float)((ulonglong)dVar35 >> 0x20) * fVar25,SUB84(dVar35,0))
              ;
            }
            else {
              dVar35 = dVar35 * in_dr8;
            }
            pdVar5 = (double *)(*(int *)((int)puVar17 + -0x38) + (int)pdVar9);
            *(double **)((int)puVar17 + -8) = pdVar5;
            if (in_FPSCR_SZ == 0) {
              fVar34 = *(float *)pdVar5;
              in_dr8 = (double)CONCAT44(fVar25,fVar34);
              dVar23 = (double)CONCAT44(fVar18,fVar34);
            }
            else {
              in_xd0 = *pdVar5;
              dVar19 = in_xd0;
            }
            if (in_FPSCR_PR == 0) {
              fVar25 = (float)((ulonglong)in_dr8 >> 0x20);
              dVar31 = (double)CONCAT44(fVar25,fVar34 * fVar25);
            }
            else {
              dVar31 = in_dr8 * in_dr8;
            }
            pdVar5 = (double *)(iVar12 * 4 + (int)pdVar8);
            if (in_FPSCR_PR == 0) {
              dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),SUB84(dVar23,0) * fVar26);
            }
            else {
              dVar23 = dVar23 * dVar27;
            }
            dVar36 = dVar35;
            if (in_FPSCR_SZ == 0) {
              dVar37 = (double)CONCAT44(uVar24,(int)((ulonglong)dVar35 >> 0x20));
              dVar36 = dVar30;
            }
            if (in_FPSCR_PR == 0) {
              dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),
                                        (float)((ulonglong)dVar23 >> 0x20) *
                                        (float)((ulonglong)dVar37 >> 0x20) + SUB84(dVar31,0));
            }
            pdVar2 = (double *)(iVar12 * 4 + (int)pdVar9);
            dVar30 = in_xd4;
            if (in_FPSCR_SZ == 0) {
              dVar30 = (double)CONCAT44(fVar22,SUB84(dVar23,0));
            }
            if (in_FPSCR_PR == 0) {
              fVar25 = SUB84(dVar37,0) - SUB84(dVar30,0);
            }
            else {
              fVar25 = SUB84(dVar37 - dVar30,0);
            }
            in_xd14 = in_dr4;
            if (in_FPSCR_SZ == 0) {
              dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),fVar28);
              in_xd14 = in_xd0;
            }
            *(double **)((int)puVar17 + -0x34) = pdVar5;
            if (in_FPSCR_SZ == 0) {
              fVar18 = *(float *)pdVar5;
              dVar37 = (double)CONCAT44(fVar18,fVar25);
              dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),fVar18);
            }
            else {
              dVar37 = *pdVar5;
              fVar18 = (float)((ulonglong)dVar37 >> 0x20);
            }
            if (in_FPSCR_PR == 0) {
              dVar37 = (double)CONCAT44(fVar18 + SUB84(dVar31,0),SUB84(dVar37,0));
              in_dr12 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),
                                         SUB84(dVar32,0) - SUB84(dVar31,0));
            }
            else {
              dVar37 = dVar37 + dVar31;
              in_dr12 = dVar32 - dVar31;
            }
            if (in_FPSCR_SZ == 0) {
              *(int *)((int)puVar17 + -0x20) = (int)((ulonglong)dVar37 >> 0x20);
            }
            else {
              *(double *)((int)puVar17 + -0x20) = dVar37;
            }
            *(double **)((int)puVar17 + -0x24) = pdVar2;
            if (in_FPSCR_SZ == 0) {
              fVar25 = *(float *)pdVar2;
              dVar23 = (double)CONCAT44(*(undefined4 *)((int)puVar17 + -0x20),SUB84(dVar35,0));
              dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),fVar25);
              dVar37 = (double)CONCAT44(fVar25,SUB84(dVar37,0));
            }
            else {
              dVar19 = *pdVar2;
              dVar23 = *(double *)((int)puVar17 + -0x20);
              fVar25 = (float)((ulonglong)dVar19 >> 0x20);
              dVar37 = dVar19;
            }
            fVar26 = SUB84(dVar37,0);
            fVar18 = (float)((ulonglong)dVar23 >> 0x20);
            if (in_FPSCR_PR == 0) {
              fVar34 = SUB84(dVar31,0) - fVar26;
              dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),fVar34);
              dVar37 = (double)CONCAT44(fVar25 + fVar26,fVar26);
              dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * fVar34,
                                        SUB84(dVar30,0) * fVar18);
            }
            else {
              dVar31 = dVar31 - dVar37;
              dVar37 = dVar37 + dVar37;
              fVar34 = SUB84(dVar31,0);
              dVar30 = dVar30 * dVar23 * dVar31;
            }
            in_xd0 = in_dr4;
            if (in_FPSCR_SZ == 0) {
              dVar37 = (double)CONCAT44((int)((ulonglong)dVar37 >> 0x20),SUB84(dVar30,0));
              dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),fVar28);
              in_xd0 = in_xd14;
              in_xd14 = dVar36;
            }
            if (in_FPSCR_PR == 0) {
              fVar25 = (float)((ulonglong)dVar30 >> 0x20);
              dVar30 = (double)CONCAT44(fVar25,SUB84(dVar30,0) * fVar34);
              dVar37 = (double)CONCAT44((int)((ulonglong)dVar37 >> 0x20),SUB84(dVar37,0) - fVar25);
            }
            else {
              dVar30 = dVar30 * dVar31;
              dVar37 = dVar37 - dVar30;
            }
            dVar32 = dVar23;
            if (in_FPSCR_SZ == 0) {
              dVar32 = (double)CONCAT44(fVar18,SUB84(dVar30,0));
            }
            if (in_FPSCR_PR == 0) {
              dVar32 = (double)(ulonglong)
                               (uint)((float)((ulonglong)dVar32 >> 0x20) * fVar22 + SUB84(dVar32,0))
              ;
            }
            fVar26 = (float)((ulonglong)dVar33 >> 0x20);
            fVar25 = SUB84(dVar33,0);
            dVar35 = in_xd10;
            dVar30 = dVar33;
            if (in_FPSCR_SZ == 0) {
              dVar23 = (double)CONCAT44(fVar18,fVar25);
              dVar35 = dVar20;
              dVar30 = (double)CONCAT44(fVar26,SUB84(dVar32,0));
            }
            if (in_FPSCR_PR == 0) {
              fVar18 = SUB84(dVar23,0) - SUB84(dVar37,0);
            }
            else {
              fVar18 = SUB84(dVar23 - dVar37,0);
            }
            dVar20 = in_dr4;
            if (in_FPSCR_SZ == 0) {
              dVar20 = (double)CONCAT44(fVar28,fVar18);
            }
            if (in_FPSCR_PR == 0) {
              dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * SUB84(in_dr12,0),
                                        SUB84(dVar20,0));
            }
            else {
              dVar20 = dVar20 * in_dr12;
            }
            dVar23 = in_xd0;
            if (in_FPSCR_SZ == 0) {
              dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar30,0));
              dVar23 = dVar19;
            }
            if (in_FPSCR_PR == 0) {
              dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) - SUB84(dVar31,0),
                                        SUB84(dVar30,0));
              dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0) + fVar26);
              in_dr14 = (double)CONCAT44((int)((ulonglong)dVar37 >> 0x20),SUB84(dVar37,0) + fVar25);
            }
            else {
              dVar30 = dVar30 - dVar31;
              dVar31 = dVar31 + dVar33;
              in_dr14 = dVar37 + dVar33;
            }
            if (in_FPSCR_SZ == 0) {
              *(float *)pdVar5 = (float)((ulonglong)dVar30 >> 0x20);
              *(int *)pdVar8 = SUB84(dVar31,0);
              in_dr0 = (double)CONCAT44(fVar28,SUB84(dVar30,0));
            }
            else {
              *pdVar5 = dVar30;
              *pdVar8 = dVar23;
              in_dr0 = in_dr4;
            }
            if (in_FPSCR_SZ == 0) {
              *(int *)*(double **)((int)puVar17 + -8) = SUB84(dVar20,0);
              dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fVar22);
            }
            else {
              **(double **)((int)puVar17 + -8) = dVar35;
              dVar35 = in_xd4;
            }
            fVar18 = (float)((ulonglong)in_dr14 >> 0x20);
            if (in_FPSCR_PR == 0) {
              dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0) * fVar18);
            }
            else {
              dVar20 = dVar20 * in_dr14;
            }
            if (in_FPSCR_SZ == 0) {
              *(int *)*(double **)((int)puVar17 + -4) = SUB84(in_dr14,0);
              dVar37 = (double)CONCAT44(SUB84(dVar20,0),fVar25);
            }
            else {
              **(double **)((int)puVar17 + -4) = in_xd14;
              dVar37 = dVar35;
            }
            fVar25 = (float)((ulonglong)dVar20 >> 0x20);
            if (in_FPSCR_PR == 0) {
              dVar37 = (double)CONCAT44((float)((ulonglong)dVar37 >> 0x20) - fVar25,SUB84(dVar37,0))
              ;
            }
            else {
              dVar37 = dVar37 - dVar20;
            }
            in_xd8 = in_xd4;
            if (in_FPSCR_SZ == 0) {
              dVar20 = (double)CONCAT44(fVar25,fVar22);
              in_xd8 = dVar35;
            }
            if (in_FPSCR_PR == 0) {
              dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                        SUB84(dVar20,0) * SUB84(in_dr12,0));
            }
            else {
              dVar20 = dVar20 * in_dr12;
            }
            if (in_FPSCR_PR == 0) {
              dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                        (float)((ulonglong)in_dr0 >> 0x20) * fVar18 +
                                        SUB84(dVar20,0));
            }
            fVar25 = (float)((ulonglong)in_dr12 >> 0x20);
            in_xd2 = in_dr12;
            if (in_FPSCR_SZ == 0) {
              dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar20,0));
              dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fVar25);
              in_xd2 = in_xd8;
              in_xd8 = dVar23;
            }
            if (in_FPSCR_PR == 0) {
              dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                        SUB84(dVar20,0) - SUB84(dVar31,0));
              in_dr8 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0) + fVar25);
            }
            else {
              dVar20 = dVar20 - dVar31;
              in_dr8 = dVar31 + in_dr12;
            }
            if (in_FPSCR_SZ == 0) {
              *(int *)*(double **)((int)puVar17 + -0x24) = SUB84(dVar20,0);
              *(int *)pdVar9 = SUB84(in_dr8,0);
            }
            else {
              **(double **)((int)puVar17 + -0x24) = in_xd2;
              *pdVar9 = in_xd8;
            }
            if (in_FPSCR_SZ == 0) {
              dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                        *(undefined4 *)((int)puVar17 + -0x1c));
            }
            else {
              in_xd2 = *(double *)((int)puVar17 + -0x1c);
            }
            puVar1 = (undefined4 *)0x1c;
            pdVar8 = (double *)((int)pdVar8 + iVar11 * 4);
            fVar25 = (float)((ulonglong)dVar37 >> 0x20);
            if (in_FPSCR_PR == 0) {
              in_dr2 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0) - fVar25);
            }
            else {
              in_dr2 = dVar20 - dVar37;
            }
            if (in_FPSCR_SZ == 0) {
              *(int *)*(double **)((int)puVar17 + -0x2c) = SUB84(in_dr2,0);
              in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                                        *(undefined4 *)((int)puVar17 + -0x1c));
            }
            else {
              **(double **)((int)puVar17 + -0x2c) = in_xd2;
              in_xd2 = *(double *)((int)puVar17 + -0x1c);
            }
            if (in_FPSCR_PR == 0) {
              in_dr10 = (double)CONCAT44(fVar25 + SUB84(in_dr2,0),SUB84(dVar37,0));
            }
            else {
              in_dr10 = dVar37 + in_dr2;
            }
            if (in_FPSCR_SZ == 0) {
              *(int *)*(double **)((int)puVar17 + -0x28) = (int)((ulonglong)in_dr10 >> 0x20);
            }
            else {
              **(double **)((int)puVar17 + -0x28) = in_dr10;
            }
            pdVar9 = (double *)((int)pdVar9 + iVar11 * 4);
            dVar37 = in_xd10;
          } while (pdVar8 < pdVar13);
          iVar3 = *(int *)((int)puVar17 + -0x30);
          *(uint *)((int)puVar17 + -0x30) = iVar3 + 1U;
          iVar10 = iVar10 + 4;
        } while (iVar3 + 1U < *(uint *)((int)puVar17 + -0x18));
      }
      in_FPSCR_DN = 0;
      in_FPSCR_CAUSE = 0;
    } while (*(uint *)((int)puVar17 + -0xc) < ar5);
  }
  return puVar1;
}



/* FUN_8c10f108 @ 8c10f108 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c10f108(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  uint uVar4;
  double *pdVar5;
  double in_dr2;
  undefined4 in_fr5;
  float fVar7;
  double dVar6;
  double in_dr6;
  float fVar8;
  double in_xd2;
  double in_xd4;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  FUN_8c10ecd8(ar5,ar4,ar6,ar7);
  uVar2 = 1;
  uVar4 = ar4 >> 1;
  if (in_FPSCR_SZ == 0) {
    dVar6 = (double)CONCAT44((undefined4)DAT_8c10f160,in_fr5);
  }
  else {
    dVar6 = (double)CONCAT44(DAT_8c10f160._4_4_,(undefined4)DAT_8c10f160);
  }
  if (1 < uVar4) {
    do {
      ar4 = ar4 - 1;
      pdVar5 = (double *)(uVar2 * 4 + ar5);
      if (in_FPSCR_SZ == 0) {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)pdVar5);
      }
      else {
        in_xd4 = *pdVar5;
      }
      pdVar3 = (double *)(ar4 * 4 + ar5);
      uVar1 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & DAT_8c10f160._4_4_;
      if (in_FPSCR_SZ == 0) {
        in_dr6 = (double)CONCAT44(*(undefined4 *)pdVar3,SUB84(in_dr6,0));
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(dVar6,0));
      }
      else {
        in_dr6 = *pdVar3;
        in_xd2 = in_xd4;
      }
      uVar2 = uVar2 + 1;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar1 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar1 & 0x100000) >> 0x14);
      fVar8 = (float)((ulonglong)in_dr6 >> 0x20);
      if (in_FPSCR_PR == 0) {
        fVar7 = (float)((ulonglong)dVar6 >> 0x20);
        dVar6 = (double)CONCAT44(fVar7,(SUB84(dVar6,0) + fVar8) * fVar7);
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),(SUB84(in_dr2,0) - fVar8) * fVar7
                                 );
      }
      else {
        dVar6 = (dVar6 + in_dr6) * (dVar6 + in_dr6);
        in_dr2 = (in_dr2 - in_dr6) * dVar6;
      }
      if (in_FPSCR_SZ == 0) {
        *(int *)pdVar3 = SUB84(in_dr2,0);
        *(int *)pdVar5 = SUB84(dVar6,0);
      }
      else {
        *pdVar3 = in_xd2;
        *pdVar5 = in_xd4;
      }
    } while (uVar2 < uVar4);
  }
  return &DAT_8c10f160;
}



/* FUN_8c10f110 @ 8c10f110 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c10f110(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  uint uVar4;
  double *pdVar5;
  int unaff_r14;
  double in_dr2;
  undefined4 in_fr5;
  float fVar7;
  double dVar6;
  double in_dr6;
  float fVar8;
  double in_xd2;
  double in_xd4;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  FUN_8c10ecd8(unaff_r14,ar5,ar6,ar7);
  uVar2 = 1;
  uVar4 = ar4 >> 1;
  if (in_FPSCR_SZ == 0) {
    dVar6 = (double)CONCAT44((undefined4)DAT_8c10f160,in_fr5);
  }
  else {
    dVar6 = (double)CONCAT44(DAT_8c10f160._4_4_,(undefined4)DAT_8c10f160);
  }
  if (1 < uVar4) {
    do {
      ar4 = ar4 - 1;
      pdVar5 = (double *)(uVar2 * 4 + unaff_r14);
      if (in_FPSCR_SZ == 0) {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)pdVar5);
      }
      else {
        in_xd4 = *pdVar5;
      }
      pdVar3 = (double *)(ar4 * 4 + unaff_r14);
      uVar1 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & DAT_8c10f160._4_4_;
      if (in_FPSCR_SZ == 0) {
        in_dr6 = (double)CONCAT44(*(undefined4 *)pdVar3,SUB84(in_dr6,0));
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(dVar6,0));
      }
      else {
        in_dr6 = *pdVar3;
        in_xd2 = in_xd4;
      }
      uVar2 = uVar2 + 1;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar1 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar1 & 0x100000) >> 0x14);
      fVar8 = (float)((ulonglong)in_dr6 >> 0x20);
      if (in_FPSCR_PR == 0) {
        fVar7 = (float)((ulonglong)dVar6 >> 0x20);
        dVar6 = (double)CONCAT44(fVar7,(SUB84(dVar6,0) + fVar8) * fVar7);
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),(SUB84(in_dr2,0) - fVar8) * fVar7
                                 );
      }
      else {
        dVar6 = (dVar6 + in_dr6) * (dVar6 + in_dr6);
        in_dr2 = (in_dr2 - in_dr6) * dVar6;
      }
      if (in_FPSCR_SZ == 0) {
        *(int *)pdVar3 = SUB84(in_dr2,0);
        *(int *)pdVar5 = SUB84(dVar6,0);
      }
      else {
        *pdVar3 = in_xd2;
        *pdVar5 = in_xd4;
      }
    } while (uVar2 < uVar4);
  }
  return &DAT_8c10f160;
}



/* FUN_8c10f168 @ 8c10f168 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10f168(int ar4,double *ar5,double *ar6,undefined4 ar7)

{
  uint uVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double in_dr2;
  double dVar8;
  undefined4 uVar9;
  float fVar10;
  double in_dr4;
  double dVar11;
  undefined4 uVar12;
  double in_dr6;
  float fVar13;
  double in_xd2;
  double dVar14;
  double in_xd4;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  uVar1 = *(uint *)(ar4 + 0x2c);
  if (in_FPSCR_SZ == 0) {
    in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)ar5);
    pdVar3 = (double *)((int)ar5 + 4);
  }
  else {
    in_xd4 = *ar5;
    pdVar3 = ar5 + 1;
  }
  pdVar2 = (double *)((int)ar5 + uVar1 * 4);
  fVar13 = SUB84(in_dr4,0);
  dVar14 = in_xd4;
  if (in_FPSCR_SZ == 0) {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar13);
    dVar14 = in_xd2;
  }
  if (in_FPSCR_PR == 0) {
    dVar8 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * fVar13);
  }
  else {
    dVar8 = in_dr2 * in_dr4;
  }
  iVar4 = *(int *)(ar4 + 0x34);
  pdVar7 = (double *)(*(int *)(ar4 + 0x30) * 4 + (int)ar6);
  if (in_FPSCR_SZ == 0) {
    dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),fVar13);
  }
  else {
    dVar11 = *(double *)(ar4 + 0x38);
  }
  if (in_FPSCR_SZ == 0) {
    *(float *)ar6 = SUB84(dVar8,0);
  }
  else {
    *ar6 = dVar14;
  }
  pdVar5 = (double *)(iVar4 * 4 + (int)ar6);
  pdVar6 = (double *)((uVar1 >> 1) * 4 + (int)ar6);
  if (ar6 == pdVar7) {
    if (in_FPSCR_SZ == 0) {
      dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),*(float *)pdVar7);
      pdVar7 = (double *)((int)pdVar7 + 4);
    }
    else {
      dVar14 = *pdVar7;
      pdVar7 = pdVar7 + 1;
    }
    if (in_FPSCR_PR == 0) {
      dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) + SUB84(dVar8,0),SUB84(dVar11,0))
      ;
    }
    else {
      dVar11 = dVar11 + dVar8;
    }
  }
  while( true ) {
    ar6 = (double *)((int)ar6 + 4);
    pdVar2 = (double *)((int)pdVar2 + -4);
    if (pdVar7 <= ar6) break;
    if (in_FPSCR_SZ == 0) {
      in_dr6 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(in_dr6,0));
    }
    else {
      in_dr6 = *pdVar2;
    }
    uVar1 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & DAT_8c10f29c;
    fVar13 = (float)((ulonglong)in_dr6 >> 0x20);
    if (in_FPSCR_SZ == 0) {
      dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),*(float *)pdVar3);
      pdVar3 = (double *)((int)pdVar3 + 4);
      dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar13);
    }
    else {
      in_xd4 = *pdVar3;
      pdVar3 = pdVar3 + 1;
      dVar14 = in_dr6;
    }
    in_FPSCR_CAUSE = 0;
    in_FPSCR_DN = 0;
    in_FPSCR_PR = (byte)((uVar1 & 0x80000) >> 0x13);
    in_FPSCR_SZ = (byte)((uVar1 & 0x100000) >> 0x14);
    if (in_FPSCR_PR == 0) {
      dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),SUB84(dVar8,0) * fVar13);
    }
    else {
      dVar8 = dVar8 * in_dr6;
    }
    fVar13 = SUB84(dVar11,0);
    if (in_FPSCR_SZ != 0) {
      fVar13 = (float)((ulonglong)in_xd4 >> 0x20);
    }
    if (in_FPSCR_PR == 0) {
      dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),
                               fVar13 * SUB84(dVar11,0) + SUB84(dVar8,0));
    }
    if (in_FPSCR_SZ == 0) {
      *(float *)ar6 = SUB84(dVar8,0);
    }
    else {
      *ar6 = dVar14;
    }
  }
  while (ar6 <= pdVar5) {
    if (in_FPSCR_SZ == 0) {
      in_dr6 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(in_dr6,0));
    }
    else {
      in_dr6 = *pdVar2;
    }
    pdVar2 = (double *)((int)pdVar2 + -4);
    uVar1 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & DAT_8c10f29c;
    fVar13 = (float)((ulonglong)in_dr6 >> 0x20);
    if (in_FPSCR_SZ == 0) {
      dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),*(float *)pdVar3);
      pdVar3 = (double *)((int)pdVar3 + 4);
      dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar13);
    }
    else {
      in_xd4 = *pdVar3;
      pdVar3 = pdVar3 + 1;
      dVar14 = in_dr6;
    }
    in_FPSCR_CAUSE = 0;
    in_FPSCR_DN = 0;
    in_FPSCR_PR = (byte)((uVar1 & 0x80000) >> 0x13);
    in_FPSCR_SZ = (byte)((uVar1 & 0x100000) >> 0x14);
    if (in_FPSCR_PR == 0) {
      dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),SUB84(dVar8,0) * fVar13);
    }
    else {
      dVar8 = dVar8 * in_dr6;
    }
    fVar10 = SUB84(dVar11,0);
    fVar13 = fVar10;
    if (in_FPSCR_SZ != 0) {
      fVar13 = (float)((ulonglong)in_xd4 >> 0x20);
    }
    if (in_FPSCR_PR == 0) {
      dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar13 * fVar10 + SUB84(dVar8,0));
    }
    if (in_FPSCR_SZ == 0) {
      *(float *)ar6 = SUB84(dVar8,0);
      dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),*(float *)ar6);
      ar6 = (double *)((int)ar6 + 4);
    }
    else {
      *ar6 = dVar14;
      dVar14 = *ar6;
      ar6 = ar6 + 1;
    }
    if (in_FPSCR_PR == 0) {
      dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) + SUB84(dVar8,0),fVar10);
    }
    else {
      dVar11 = dVar11 + dVar8;
    }
  }
  while( true ) {
    uVar12 = (undefined4)((ulonglong)dVar11 >> 0x20);
    uVar9 = (undefined4)((ulonglong)dVar8 >> 0x20);
    if (pdVar6 <= ar6) break;
    if (in_FPSCR_SZ == 0) {
      dVar11 = (double)CONCAT44(uVar12,*(undefined4 *)pdVar2);
    }
    else {
      in_xd4 = *pdVar2;
    }
    uVar1 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & DAT_8c10f29c;
    if (in_FPSCR_SZ == 0) {
      fVar13 = *(float *)pdVar3;
      pdVar3 = (double *)((int)pdVar3 + 4);
      dVar8 = (double)CONCAT44(uVar9,SUB84(dVar11,0));
    }
    else {
      fVar13 = (float)((ulonglong)*pdVar3 >> 0x20);
      pdVar3 = pdVar3 + 1;
      dVar14 = in_xd4;
    }
    in_FPSCR_CAUSE = 0;
    in_FPSCR_DN = 0;
    in_FPSCR_PR = (byte)((uVar1 & 0x80000) >> 0x13);
    in_FPSCR_SZ = (byte)((uVar1 & 0x100000) >> 0x14);
    if (in_FPSCR_PR == 0) {
      dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),
                               fVar13 * fVar13 + SUB84(dVar8,0) * SUB84(dVar11,0));
    }
    else {
      dVar8 = dVar8 * dVar11;
    }
    if (in_FPSCR_SZ == 0) {
      *(float *)ar6 = SUB84(dVar8,0);
    }
    else {
      *ar6 = dVar14;
    }
    ar6 = (double *)((int)ar6 + 4);
    pdVar2 = (double *)((int)pdVar2 + -4);
  }
  if (in_FPSCR_SZ == 0) {
    dVar11 = (double)CONCAT44(uVar12,*(float *)pdVar3);
  }
  else {
    in_xd4 = *pdVar3;
  }
  uVar1 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c10f29c;
  if (in_FPSCR_SZ == 0) {
    dVar8 = (double)CONCAT44(uVar9,SUB84(dVar11,0));
    in_xd4 = dVar14;
  }
  if ((char)((uVar1 & 0x80000) >> 0x13) == '\0') {
    fVar13 = SUB84(dVar8,0) * SUB84(dVar11,0);
  }
  else {
    fVar13 = SUB84(dVar8 * dVar11,0);
  }
  if ((char)((uVar1 & 0x100000) >> 0x14) == '\0') {
    *(float *)ar6 = fVar13;
  }
  else {
    *ar6 = in_xd4;
  }
  return 0x38;
}



/* FUN_8c10f22a @ 8c10f22a callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint FUN_8c10f22a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  uint uVar3;
  short sVar4;
  int a4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  double in_dr0;
  double dVar8;
  undefined4 in_fr3;
  float fVar9;
  byte in_FPSCR_CAUSE;
  byte bVar10;
  byte in_FPSCR_DN;
  byte bVar11;
  byte in_FPSCR_PR;
  byte bVar12;
  byte in_FPSCR_SZ;
  byte bVar13;
  undefined8 uStack_14;
  uint uVar2;
  
  if ((*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') &&
     (*(char *)((*(int **)(ar4 + 0x10))[1] + 0x30) != '\x01')) {
    if (*(char *)(ar4 + 0x3c) == '\0') {
      puVar6 = *(undefined4 **)(ar4 + 0xc);
      uStack_14 = (double)CONCAT44(puVar6,(undefined4)uStack_14);
      uVar7 = puVar6[1];
      iVar5 = (*(code *)PTR_FUN_8c10f3bc)(*puVar6,uVar7,ar6,ar7);
    }
    else {
      puVar6 = *(undefined4 **)(ar4 + 0xc);
      ar7 = 1;
      ar6 = *(undefined4 *)(ar4 + 0x44);
      uStack_14 = (double)CONCAT44(puVar6,(undefined4)uStack_14);
      uVar7 = puVar6[1];
      uVar3 = (*(code *)PTR_FUN_8c10f2a0)(*puVar6,uVar7,ar6,1);
      if ((uVar3 & 0xff) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(ar4 + 0x44);
        ar6 = *(undefined4 *)(ar4 + 0x40);
        uVar7 = 0;
        uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13
                | (uint)in_FPSCR_SZ << 0x14) & DAT_8c10f29c;
        in_FPSCR_CAUSE = 0;
        in_FPSCR_DN = 0;
        in_FPSCR_PR = (byte)((uVar3 & 0x80000) >> 0x13);
        in_FPSCR_SZ = (byte)((uVar3 & 0x100000) >> 0x14);
        (*(code *)PTR_memset_8c10f2a4)(*(int *)(ar4 + 0x2c) * 4 + iVar5,0,ar6,ar7);
      }
    }
    if (iVar5 != 0) {
      uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & DAT_8c10f3c0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = (byte)((uVar3 & 0x80000) >> 0x13);
      bVar13 = (byte)((uVar3 & 0x100000) >> 0x14);
      uVar7 = (*(code *)PTR_FUN_8c10f3c4)(*(undefined4 *)(*(int *)(ar4 + 0x10) + 4),uVar7,ar6,ar7);
      uVar3 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 |
              (uint)bVar13 << 0x14) & DAT_8c10f3c0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = (byte)((uVar3 & 0x80000) >> 0x13);
      bVar13 = (byte)((uVar3 & 0x100000) >> 0x14);
      uStack_14._4_4_ = uVar7;
      (*(code *)PTR_FUN_8c10f3c8)(*(undefined4 *)(ar4 + 0x2c),iVar5,ar6,ar7);
      uVar3 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 |
              (uint)bVar13 << 0x14) & DAT_8c10f3c0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = (byte)((uVar3 & 0x80000) >> 0x13);
      bVar13 = (byte)((uVar3 & 0x100000) >> 0x14);
      a4 = ar4;
      uVar7 = uStack_14._4_4_;
      FUN_8c10f168(ar4,iVar5,uStack_14._4_4_,ar7);
      uVar3 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 |
              (uint)bVar13 << 0x14) & DAT_8c10f3c0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = (byte)((uVar3 & 0x80000) >> 0x13);
      bVar13 = (byte)((uVar3 & 0x100000) >> 0x14);
      (*(code *)PTR_thunk_FUN_8c013dfc_8c10f3cc)(a4,iVar5,uVar7,ar7);
      uVar3 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 |
              (uint)bVar13 << 0x14) & DAT_8c10f3c0;
      dVar8 = in_dr0;
      if (bVar13 == 0) {
        uStack_14 = (double)CONCAT44(uStack_14._4_4_,(int)((ulonglong)in_dr0 >> 0x20));
        dVar8 = uStack_14;
      }
      uStack_14 = dVar8;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = (byte)((uVar3 & 0x80000) >> 0x13);
      bVar13 = (byte)((uVar3 & 0x100000) >> 0x14);
      (*(code *)PTR_FUN_8c10f3d0)(**(undefined4 **)(ar4 + 0x10),&uStack_14,1,ar7);
      if (bVar13 == 0) {
        in_fr3 = (undefined4)DAT_8c10f3d4;
      }
      uVar3 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 |
              (uint)bVar13 << 0x14) & DAT_8c10f3c0;
      if (bVar13 == 0) {
        uStack_14 = (double)CONCAT44((undefined4)uStack_14,in_fr3);
      }
      uVar2 = (uVar3 & 0x80000) >> 0x13;
      cVar1 = (char)uVar2;
      uVar3 = (uVar3 & 0x100000) >> 0x14;
      if (cVar1 == '\0') {
        uStack_14 = (double)CONCAT44((float)((ulonglong)uStack_14 >> 0x20) + SUB84(uStack_14,0),
                                     SUB84(uStack_14,0));
      }
      else {
        uStack_14 = uStack_14 + uStack_14;
      }
      if ((char)uVar3 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),DAT_8c10f3d4._4_4_);
      }
      if (cVar1 == '\0') {
        fVar9 = (float)((ulonglong)uStack_14 >> 0x20) * SUB84(in_dr0,0);
      }
      else {
        fVar9 = (float)((ulonglong)(uStack_14 * in_dr0) >> 0x20);
      }
      uVar3 = uVar2 << 0x13 | uVar3 << 0x14 | DAT_8c10f3dc & 0x3fffff;
      if ((char)((uVar3 & 0x100000) >> 0x14) == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c10f3e0,DAT_8c10f3e4);
      }
      else {
        dVar8 = (double)CONCAT44(DAT_8c10f3e4,DAT_8c10f3e0);
      }
      if ((char)((uVar3 & 0x80000) >> 0x13) == '\0') {
        sVar4 = (short)(int)((float)((ulonglong)(double)fVar9 >> 0x20) *
                            (float)((ulonglong)dVar8 >> 0x20));
      }
      else {
        sVar4 = (short)(int)((double)fVar9 * dVar8);
      }
      if (DAT_8c10f3b4 < sVar4) {
        sVar4 = DAT_8c10f3b4;
      }
      if ((int)*(short *)(ar4 + 0x48) < (int)sVar4) {
        *(short *)(ar4 + 0x48) = sVar4;
      }
      else {
        *(short *)(ar4 + 0x48) =
             (short)((uint)(((int)*(short *)(ar4 + 0x48) + (int)DAT_8c10f3b6) * _DAT_8c10f3e8) >>
                    0x10) + DAT_8c10f3b8;
      }
    }
  }
  iVar5 = **(int **)(ar4 + 0xc);
  return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar5 + 0x40)) == *(int *)(iVar5 + 0x3c)
         ^ 1;
}



/* FUN_8c10f39a @ 8c10f39a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10f39a(int *ar4,int ar5,int *ar6,undefined4 ar7)

{
  int in_r0;
  char in_T;
  
  if (in_T == '\x01') {
    *ar6 = (int)(ar4 + 0x12);
  }
  else {
    if (in_r0 != DAT_8c10f3ba) {
      return 0;
    }
    if ((char)ar4[0xf] != '\0') {
      ar5 = ar4[0x11];
      (**(code **)(*ar4 + 0x18))(*ar4,ar5,ar6,ar7);
    }
    (*(code *)PTR_FUN_8c10f658)(ar4,ar5,ar6,ar7);
  }
  return 1;
}



/* FUN_8c10f41e @ 8c10f41e callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c10f504) */
/* WARNING: Removing unreachable block (ram,0x8c10f4e6) */
/* WARNING: Removing unreachable block (ram,0x8c10f586) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c10f41e(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  double in_dr0;
  undefined *puVar10;
  double dVar9;
  float fVar11;
  double dVar12;
  double dVar13;
  ulonglong in_xd0;
  bool bVar14;
  short sVar15;
  uint uVar16;
  byte in_FPSCR_CAUSE;
  byte bVar17;
  byte bVar18;
  byte in_FPSCR_DN;
  byte bVar19;
  byte bVar20;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  char cVar21;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  ulonglong uStack_18;
  
  puVar2 = PTR_FUN_8c10f65c;
  iVar8 = *ar4;
  (*(code *)PTR_FUN_8c10f65c)(ar4,3,ar6,ar7);
  uVar6 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c10f654;
  bVar17 = 0;
  bVar19 = 0;
  bVar20 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar18 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar20 == 0) {
    sVar15 = (short)(int)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    sVar15 = (short)(int)in_dr0;
  }
  iStack_1c = (int)sVar15;
  (*(code *)puVar2)(ar4,4,ar6,ar7);
  uVar6 = ((uint)bVar17 << 0xc | (uint)bVar19 << 0x12 | (uint)bVar20 << 0x13 | (uint)bVar18 << 0x14)
          & DAT_8c10f654;
  bVar18 = 0;
  bVar20 = 0;
  uVar5 = (uVar6 & 0x80000) >> 0x13;
  bVar19 = (byte)uVar5;
  uVar6 = (uVar6 & 0x100000) >> 0x14;
  bVar17 = (byte)uVar6;
  if (bVar19 == 0) {
    uVar16 = (uint)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar16 = (uint)in_dr0;
  }
  uVar16 = uVar16 & 0xffff;
  ar4[0xb] = uVar16;
  uVar3 = (uint)(*(ushort *)(*(int *)ar4[3] + 0xc) >> 2);
  ar4[10] = uVar3;
  if (uVar16 < uVar3) {
    uVar4 = 1;
  }
  else {
    if ((uint)ar4[10] < uVar16) {
      *(undefined1 *)(ar4 + 0xf) = 1;
      uVar3 = DAT_8c10f654;
      ar4[0x10] = (uVar16 - ar4[10]) * 4;
      uVar3 = (uVar5 << 0x13 | uVar6 << 0x14) & uVar3;
      bVar18 = 0;
      bVar20 = 0;
      bVar19 = (byte)((uVar3 & 0x80000) >> 0x13);
      bVar17 = (byte)(uVar3 >> 0x14);
      iVar8 = (**(code **)(iVar8 + 0x10))(iVar8,uVar16 << 2,ar6,ar7);
      ar4[0x11] = iVar8;
    }
    *(undefined2 *)(*(int *)ar4[4] + 0xc) = 4;
    *(short *)(*(int *)(ar4[4] + 4) + 0xc) = ((short)(uVar16 >> 1) + 1) * 4;
    uVar4 = 1;
    uVar6 = ((uint)bVar18 << 0xc | (uint)bVar20 << 0x12 | (uint)bVar19 << 0x13 |
            (uint)bVar17 << 0x14) & DAT_8c10f654;
    bVar17 = 0;
    bVar19 = 0;
    bVar20 = (byte)((uVar6 & 0x80000) >> 0x13);
    bVar18 = (byte)((uVar6 & 0x100000) >> 0x14);
    piVar7 = ar4;
    (*(code *)puVar2)(ar4,1,ar6,ar7);
    iVar8 = (int)((ulonglong)in_dr0 >> 0x20);
    iStack_20 = iVar8;
    if (bVar18 != 0) {
      iStack_20 = SUB84(in_dr0,0);
      iStack_1c = iVar8;
    }
    uVar6 = ((uint)bVar17 << 0xc | (uint)bVar19 << 0x12 | (uint)bVar20 << 0x13 |
            (uint)bVar18 << 0x14) & DAT_8c10f654;
    bVar17 = 0;
    bVar19 = 0;
    bVar18 = (byte)((uVar6 & 0x80000) >> 0x13);
    bVar20 = (byte)((uVar6 & 0x100000) >> 0x14);
    fVar11 = (float)ar4[0xb];
    if (ar4[0xb] < 0) {
      if (bVar18 == 0) {
        fVar11 = fVar11 + _DAT_8c10f66c;
      }
      else {
        fVar11 = SUB84((double)CONCAT44(_DAT_8c10f66c,fVar11) +
                       (double)CONCAT44(_DAT_8c10f66c,fVar11),0);
      }
    }
    if (bVar20 == 0) {
      dVar12 = (double)CONCAT44(iStack_20,fVar11);
      puVar10 = DAT_8c10f670;
    }
    else {
      dVar12 = (double)CONCAT44(iStack_1c,iStack_20);
      puVar10 = PTR_thunk_FUN_8c013d28_8c10f674;
    }
    if (bVar18 == 0) {
      fVar11 = (float)((ulonglong)dVar12 >> 0x20);
      dVar12 = (double)CONCAT44(fVar11,SUB84(dVar12,0) * fVar11);
    }
    else {
      dVar12 = dVar12 * dVar12;
    }
    dVar9 = (double)CONCAT44(puVar10,(float)iStack_1c);
    if (bVar18 == 0) {
      dVar9 = (double)CONCAT44(puVar10,(float)iStack_1c * (float)puVar10);
    }
    else {
      dVar9 = dVar9 * dVar9;
    }
    uStack_18 = in_xd0;
    if (bVar20 == 0) {
      uStack_18 = (ulonglong)dVar9 & 0xffffffff;
    }
    (*(code *)PTR_thunk_FUN_8c013d28_8c10f674)(piVar7,uVar4,ar6,ar7);
    if (bVar20 == 0) {
      dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),DAT_8c10f678);
    }
    uVar6 = ((uint)bVar17 << 0xc | (uint)bVar19 << 0x12 | (uint)bVar18 << 0x13 |
            (uint)bVar20 << 0x14) & DAT_8c10f654;
    fVar11 = (float)((ulonglong)dVar9 >> 0x20);
    dVar13 = dVar9;
    if (bVar20 == 0) {
      dVar13 = (double)((ulonglong)(uint)fVar11 << 0x20);
    }
    uVar5 = (uVar6 & 0x80000) >> 0x13;
    cVar21 = (char)uVar5;
    uVar6 = (uVar6 & 0x100000) >> 0x14;
    cVar1 = (char)uVar6;
    if (cVar21 == '\0') {
      bVar14 = SUB84(dVar12,0) < fVar11;
    }
    else {
      bVar14 = dVar12 < dVar9;
    }
    uVar4 = (undefined4)((ulonglong)dVar13 >> 0x20);
    if (bVar14) {
      if (cVar1 == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c10f67c,uVar4);
      }
      else {
        dVar12 = (double)CONCAT44(_DAT_8c10f680,DAT_8c10f67c);
      }
      if (cVar21 == '\0') {
        fVar11 = (float)((ulonglong)dVar12 >> 0x20);
        dVar12 = (double)CONCAT44(fVar11,SUB84(dVar12,0) + fVar11);
      }
      else {
        dVar12 = dVar12 + dVar12;
      }
    }
    else if (cVar1 == '\0') {
      dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),uVar4);
    }
    uVar5 = (uVar5 << 0x13 | uVar6 << 0x14) & DAT_8c10f654;
    uVar6 = (uVar5 & 0x80000) >> 0x13;
    if ((char)uVar6 == '\0') {
      uVar16 = (uint)SUB84(dVar12,0);
    }
    else {
      uVar16 = (uint)dVar12;
    }
    ar4[0xc] = uVar16;
    if (uVar16 == 0) {
      uVar16 = 0;
    }
    ar4[0xc] = uVar16;
    if (((uint)ar4[0xb] >> 1) - 1 <= uVar16) {
      uVar16 = ((uint)ar4[0xb] >> 1) - 2;
    }
    ar4[0xc] = uVar16;
    uVar4 = 2;
    uVar6 = (uVar6 << 0x13 | uVar5 & 0xfff00000) & DAT_8c10f654;
    bVar17 = 0;
    bVar19 = 0;
    bVar20 = (byte)((uVar6 & 0x80000) >> 0x13);
    bVar18 = (byte)(uVar6 >> 0x14);
    piVar7 = ar4;
    (*(code *)puVar2)(ar4,2,ar6,ar7);
    iVar8 = (int)((ulonglong)dVar9 >> 0x20);
    iStack_24 = iVar8;
    if (bVar18 != 0) {
      iStack_24 = SUB84(dVar9,0);
      iStack_20 = iVar8;
    }
    uVar6 = ((uint)bVar17 << 0xc | (uint)bVar19 << 0x12 | (uint)bVar20 << 0x13 |
            (uint)bVar18 << 0x14) & DAT_8c10f654;
    bVar17 = 0;
    bVar19 = 0;
    bVar20 = (byte)((uVar6 & 0x80000) >> 0x13);
    bVar18 = (byte)((uVar6 & 0x100000) >> 0x14);
    fVar11 = (float)ar4[0xb];
    if (ar4[0xb] < 0) {
      if (bVar20 == 0) {
        fVar11 = fVar11 + _DAT_8c10f66c;
      }
      else {
        fVar11 = SUB84((double)CONCAT44(_DAT_8c10f66c,fVar11) +
                       (double)CONCAT44(_DAT_8c10f66c,fVar11),0);
      }
    }
    if (bVar18 == 0) {
      dVar12 = (double)CONCAT44(iStack_24,fVar11);
      dVar9 = (double)(uStack_18 & 0xffffffff);
    }
    else {
      dVar12 = (double)CONCAT44(iStack_20,iStack_24);
    }
    if (bVar20 == 0) {
      fVar11 = (float)((ulonglong)dVar12 >> 0x20);
      dVar12 = (double)CONCAT44(fVar11,SUB84(dVar12,0) * fVar11);
    }
    else {
      dVar12 = dVar12 * dVar12;
    }
    if (bVar18 == 0) {
      dVar9 = (double)CONCAT44(_DAT_8c10f684,SUB84(dVar9,0));
    }
    else {
      dVar9 = (double)CONCAT44(_DAT_8c10f688,_DAT_8c10f684);
    }
    if (bVar20 == 0) {
      dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),SUB84(dVar12,0) / SUB84(dVar9,0));
    }
    else {
      dVar12 = dVar12 / dVar9;
    }
    (*(code *)PTR_thunk_FUN_8c013d28_8c10f674)(piVar7,uVar4,ar6,ar7);
    if (bVar18 == 0) {
      dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),DAT_8c10f678);
    }
    uVar6 = ((uint)bVar17 << 0xc | (uint)bVar19 << 0x12 | (uint)bVar20 << 0x13 |
            (uint)bVar18 << 0x14) & DAT_8c10f654;
    fVar11 = (float)((ulonglong)dVar9 >> 0x20);
    dVar13 = dVar9;
    if (bVar18 == 0) {
      dVar13 = (double)((ulonglong)(uint)fVar11 << 0x20);
    }
    uVar5 = (uVar6 & 0x80000) >> 0x13;
    cVar21 = (char)uVar5;
    uVar6 = (uVar6 & 0x100000) >> 0x14;
    cVar1 = (char)uVar6;
    if (cVar21 == '\0') {
      bVar14 = SUB84(dVar12,0) < fVar11;
    }
    else {
      bVar14 = dVar12 < dVar9;
    }
    uVar4 = (undefined4)((ulonglong)dVar13 >> 0x20);
    if (bVar14) {
      if (cVar1 == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c10f67c,uVar4);
      }
      else {
        dVar12 = (double)CONCAT44(_DAT_8c10f680,DAT_8c10f67c);
      }
      if (cVar21 == '\0') {
        fVar11 = (float)((ulonglong)dVar12 >> 0x20);
        dVar12 = (double)CONCAT44(fVar11,SUB84(dVar12,0) + fVar11);
      }
      else {
        dVar12 = dVar12 + dVar12;
      }
    }
    else if (cVar1 == '\0') {
      dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),uVar4);
    }
    uVar6 = (uVar5 << 0x13 | uVar6 << 0x14) & DAT_8c10f654;
    if ((char)((uVar6 & 0x80000) >> 0x13) == '\0') {
      uVar5 = (uint)SUB84(dVar12,0);
    }
    else {
      uVar5 = (uint)dVar12;
    }
    ar4[0xd] = uVar5;
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    ar4[0xd] = uVar5;
    if (((uint)ar4[0xb] >> 1) - 1 <= uVar5) {
      uVar5 = ((uint)ar4[0xb] >> 1) - 2;
    }
    ar4[0xd] = uVar5;
    uVar16 = DAT_8c10f654;
    uVar3 = ar4[0xc];
    if (uVar3 < uVar5) {
      uVar3 = uVar5;
    }
    ar4[0xd] = uVar3;
    cVar21 = (char)((uVar6 & 0xfff00000 & uVar16) >> 0x14);
    (*(code *)puVar2)(ar4,5,ar6,ar7);
    if (cVar21 == '\0') {
      ar4[0xe] = (int)((ulonglong)dVar9 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0xe) = dVar9;
    }
    uVar4 = 0;
  }
  return uVar4;
}



/* FUN_8c10f632 @ 8c10f632 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10f632(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c10f698)(ar4,ar5,1,2);
  return uVar1;
}



/* FUN_8c10f69c @ 8c10f69c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10f69c(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  char in_FPSCR_SZ;
  
  uVar3 = 0;
  *ar5 = *(undefined4 *)(ar4 + 0x28);
  ar5[1] = (uint)*(ushort *)(ar4 + 0x30);
  puVar2 = (undefined8 *)(ar5 + 2);
  if (*(int *)(ar4 + 0x78) != 0) {
    do {
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)puVar2 = *(undefined4 *)(*(int *)(ar4 + 0x44) + iVar1);
      }
      else {
        *puVar2 = *(undefined8 *)(*(int *)(ar4 + 0x44) + iVar1);
      }
      puVar2 = (undefined8 *)((int)puVar2 + 4);
    } while (uVar3 < *(uint *)(ar4 + 0x78));
  }
  *(undefined4 *)puVar2 = *(undefined4 *)(ar4 + 0x48);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar2 + 4) = *(undefined4 *)(ar4 + 0x4c);
  }
  else {
    *(undefined8 *)((int)puVar2 + 4) = *(undefined8 *)(ar4 + 0x4c);
  }
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(ar4 + 0x50);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar2 + 0xc) = *(undefined4 *)(ar4 + 0x54);
  }
  else {
    *(undefined8 *)((int)puVar2 + 0xc) = *(undefined8 *)(ar4 + 0x54);
  }
  return 0x54;
}



/* FUN_8c10f6f0 @ 8c10f6f0 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10f6f0(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 in_fr3;
  undefined8 in_xd2;
  char in_FPSCR_SZ;
  
  uVar3 = 0;
  *(undefined4 *)(ar4 + 0x28) = *ar5;
  puVar1 = (undefined8 *)(ar5 + 2);
  *(short *)(ar4 + 0x30) = (short)ar5[1];
  if (*(int *)(ar4 + 0x78) != 0) {
    do {
      if (in_FPSCR_SZ == '\0') {
        in_fr3 = *(undefined4 *)puVar1;
        puVar1 = (undefined8 *)((int)puVar1 + 4);
      }
      else {
        in_xd2 = *puVar1;
        puVar1 = puVar1 + 1;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(*(int *)(ar4 + 0x44) + uVar3 * 4) = in_fr3;
      }
      else {
        *(undefined8 *)(*(int *)(ar4 + 0x44) + uVar3 * 4) = in_xd2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(ar4 + 0x78));
  }
  *(undefined4 *)(ar4 + 0x48) = *(undefined4 *)puVar1;
  if (in_FPSCR_SZ == '\0') {
    puVar2 = puVar1 + 1;
    *(undefined4 *)(ar4 + 0x4c) = *(undefined4 *)((int)puVar1 + 4);
  }
  else {
    puVar2 = (undefined8 *)((int)puVar1 + 0xc);
    *(undefined8 *)(ar4 + 0x4c) = *(undefined8 *)((int)puVar1 + 4);
  }
  *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)puVar2;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x54) = *(undefined4 *)((int)puVar2 + 4);
  }
  else {
    *(undefined8 *)(ar4 + 0x54) = *(undefined8 *)((int)puVar2 + 4);
  }
  return 0x54;
}



/* FUN_8c10f736 @ 8c10f736 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10f736(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = (**(code **)(DAT_8c10f83c + ar5))(ar5,1,1);
  uVar1 = (**(code **)(ar5 + 0x54))(uVar3);
  *(undefined1 *)(ar4 + 0x58) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x58))(uVar3);
  *(undefined1 *)(ar4 + 0x59) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x5c))(uVar3);
  *(undefined1 *)(ar4 + 0x5a) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x60))(uVar3);
  *(undefined1 *)(ar4 + 0x5b) = uVar1;
  uVar2 = (**(code **)(ar5 + 100))(uVar3);
  *(ushort *)(ar4 + 0x5c) = uVar2 & 0xff;
  uVar4 = (**(code **)(DAT_8c10f83e + ar5))(uVar3);
  *(undefined4 *)(ar4 + 0x60) = uVar4;
  uVar4 = (**(code **)(DAT_8c10f840 + ar5))(uVar3);
  *(undefined4 *)(ar4 + 100) = uVar4;
  uVar3 = (**(code **)(DAT_8c10f842 + ar5))(uVar3);
  *(undefined4 *)(ar4 + 0x68) = uVar3;
  if ((uint)*(byte *)(ar4 + 0x58) != *(int *)(ar4 + 0x70) - *(int *)(ar4 + 0x74)) {
    uVar3 = (*(code *)PTR_FUN_8c10f84c)(ar4,0x66);
    return uVar3;
  }
  *(int *)(DAT_8c10f844 + ar4) = ar5;
  return 0;
}



/* FUN_8c10f742 @ 8c10f742 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10f742(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r13;
  int unaff_r14;
  
  uVar1 = (**(code **)(in_r0 + unaff_r13))(unaff_r13,ar5,ar6,ar7);
  uVar2 = (**(code **)(unaff_r13 + 0x54))(uVar1,ar5,ar6,ar7);
  *(char *)(unaff_r14 + 0x58) = (char)uVar2;
  uVar2 = (**(code **)(unaff_r13 + 0x58))(uVar1,ar5,ar6,ar7);
  *(char *)(unaff_r14 + 0x59) = (char)uVar2;
  uVar2 = (**(code **)(unaff_r13 + 0x5c))(uVar1,ar5,ar6,ar7);
  *(char *)(unaff_r14 + 0x5a) = (char)uVar2;
  uVar2 = (**(code **)(unaff_r13 + 0x60))(uVar1,ar5,ar6,ar7);
  *(char *)(unaff_r14 + 0x5b) = (char)uVar2;
  uVar2 = (**(code **)(unaff_r13 + 100))(uVar1,ar5,ar6,ar7);
  *(ushort *)(unaff_r14 + 0x5c) = (ushort)uVar2 & 0xff;
  uVar2 = (**(code **)(DAT_8c10f83e + unaff_r13))(uVar1,ar5,ar6,ar7);
  *(undefined4 *)(unaff_r14 + 0x60) = uVar2;
  uVar2 = (**(code **)(DAT_8c10f840 + unaff_r13))(uVar1,ar5,ar6,ar7);
  *(undefined4 *)(unaff_r14 + 100) = uVar2;
  uVar1 = (**(code **)(DAT_8c10f842 + unaff_r13))(uVar1,ar5,ar6,ar7);
  *(undefined4 *)(unaff_r14 + 0x68) = uVar1;
  if ((uint)*(byte *)(unaff_r14 + 0x58) != *(int *)(unaff_r14 + 0x70) - *(int *)(unaff_r14 + 0x74))
  {
    uVar1 = (*(code *)PTR_FUN_8c10f84c)(0x66);
    return uVar1;
  }
  *(int *)(DAT_8c10f844 + unaff_r14) = unaff_r13;
  return 0;
}



/* FUN_8c10f850 @ 8c10f850 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10f850(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int a7;
  uint uVar1;
  int a5;
  short sVar2;
  bool bVar4;
  uint uVar3;
  
  a7 = (**(code **)(*(int *)(DAT_8c10f93e + ar4) + 0x6c))(*(int *)(DAT_8c10f93e + ar4),ar5,ar6,ar7);
  a5 = 0;
  uVar3 = 0;
  sVar2 = 0;
  uVar1 = 0;
  if (*(int *)(ar4 + 0x78) != 0) {
    do {
      if ((*(uint *)(uVar1 * 8 + a7) & ar5) != 0) {
        a5 = a5 + 1;
        uVar3 = uVar1;
      }
      sVar2 = (short)uVar3;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(ar4 + 0x78));
  }
  bVar4 = a5 == 1;
  if (bVar4 != (bool)*(char *)(ar4 + 0x32)) {
    FUN_8c10fa6c(ar4,a5,0,a7);
  }
  if ((bVar4) && (*(short *)(ar4 + 0x30) = sVar2 + 1, *(int *)(ar4 + 0x28) == 0)) {
    *(undefined4 *)(ar4 + 0x28) = 1;
  }
  *(bool *)(ar4 + 0x32) = bVar4;
  *(uint *)(ar4 + 0x2c) = ar5;
  return 0x32;
}



/* FUN_8c10f8e6 @ 8c10f8e6 callers=0 callees=5 */

/* WARNING: Removing unreachable block (ram,0x8c10f968) */
/* WARNING: Unknown calling convention */

uint FUN_8c10f8e6(int *ar4,uint ar5,int *ar6,int *ar7)

{
  uint uVar1;
  undefined4 a5;
  int a5_00;
  undefined4 a6;
  int iVar2;
  uint uVar3;
  float fVar4;
  undefined *puVar6;
  double dVar5;
  undefined8 in_xd2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 *puStack_1c;
  
  iVar2 = *ar4;
  uVar1 = ar5 & 0xff;
  uVar3 = 1;
  if (uVar1 == 1) {
    uVar1 = FUN_8c10f736(ar4,ar6,ar6,ar7);
    uVar3 = (uint)((uVar1 & 0xff) == 0);
  }
  else if (uVar1 == 2) {
    *(char *)((int)ar6 + ar4[0x1b] + 1) = (char)ar7;
  }
  else if (uVar1 == 3) {
    if ((ar4[0x12] != 0) || (ar6 != (int *)0x0)) {
      if ((short)ar4[0xc] == 0) {
        puVar6 = PTR_FUN_8c10fa60;
        if (in_FPSCR_SZ == '\0') {
          puVar6 = DAT_8c10fa5c;
        }
        dVar5 = (double)CONCAT44(puVar6,(float)*(int *)((int)DAT_8c10fa5a + (int)ar4));
        if (in_FPSCR_PR == '\0') {
          fVar4 = (float)*(int *)((int)DAT_8c10fa5a + (int)ar4) + (float)puVar6;
        }
        else {
          fVar4 = SUB84(dVar5 + dVar5,0);
        }
        if (in_FPSCR_SZ == '\0') {
          ar4[0x15] = (int)fVar4;
        }
        else {
          *(undefined8 *)(ar4 + 0x15) = in_xd2;
        }
      }
      ar4[10] = 1;
    }
  }
  else {
    if (uVar1 == 4) {
      puStack_1c = (undefined4 *)ar4[3];
      a6 = puStack_1c[1];
      a5 = 7;
    }
    else {
      if (uVar1 != 5) {
        if (uVar1 == 6) {
          if (ar6 != (int *)0x0) {
            FUN_8c10f6f0(ar4,*ar7 + (int)ar6,ar6,ar7);
            *ar7 = *ar7 + (ar4[0x1e] + 6) * 4;
            return 1;
          }
          FUN_8c10fa6c(ar4,ar5,0,ar7);
          return 1;
        }
        if (uVar1 == 7) {
          if (ar6 != (int *)0x0) {
            FUN_8c10f69c(ar4,*ar7 + (int)ar6,ar6,ar7);
          }
          iVar2 = *ar7 + (ar4[0x1e] + 6) * 4;
        }
        else {
          if (uVar1 == 8) {
            FUN_8c10f850(ar4,*ar6,ar6,ar7);
            return 1;
          }
          if (uVar1 == 9) {
            *ar6 = ar4[0xb];
            return 1;
          }
          if (uVar1 != (int)DAT_8c10f940) {
            if (uVar1 != (int)DAT_8c10f942) {
              return 0;
            }
            (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x11],ar6,ar7);
            (**(code **)(iVar2 + 0x18))(iVar2,ar4[0xd],ar6,ar7);
            a5_00 = ar4[0x1b];
            (**(code **)(iVar2 + 0x18))(iVar2,a5_00,ar6,ar7);
            (*(code *)PTR_FUN_8c10fa68)(ar4,a5_00,ar6,ar7);
            return 1;
          }
          iVar2 = ar4[0x12];
        }
        *ar7 = iVar2;
        return 1;
      }
      puStack_1c = (undefined4 *)ar4[3];
      a5 = 6;
      a6 = puStack_1c[1];
    }
    uVar3 = (*(code *)PTR_FUN_8c10fa60)(*puStack_1c,a5,a6,ar6);
  }
  return uVar3;
}



/* FUN_8c10fa6c @ 8c10fa6c callers=3 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10fa6c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 in_fr5;
  undefined8 uVar3;
  undefined4 uVar4;
  char in_FPSCR_SZ;
  
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined2 *)(ar4 + 0x30) = 0;
  *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)(ar4 + 0x34);
  *(undefined4 *)(ar4 + 0x3c) = *(undefined4 *)(ar4 + 0x34);
  if (in_FPSCR_SZ == '\0') {
    uVar3 = CONCAT44(DAT_8c10fbac,in_fr5);
  }
  else {
    uVar3 = CONCAT44(DAT_8c10fbb0,DAT_8c10fbac);
  }
  uVar2 = 0;
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (*(int *)(ar4 + 0x78) != 0) {
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(*(int *)(ar4 + 0x44) + iVar1) = uVar4;
      }
      else {
        *(undefined8 *)(*(int *)(ar4 + 0x44) + iVar1) = uVar3;
      }
    } while (uVar2 < *(uint *)(ar4 + 0x78));
  }
  *(undefined4 *)(ar4 + 0x48) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x4c) = uVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x4c) = uVar3;
  }
  *(undefined4 *)(ar4 + 0x50) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x54) = uVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x54) = uVar3;
  }
  return 0x54;
}



/* FUN_8c10fab2 @ 8c10fab2 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c10fad6) */
/* WARNING: Removing unreachable block (ram,0x8c10fb20) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c10fab2(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  double *pdVar6;
  double *pdVar7;
  undefined8 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  double *pdVar13;
  undefined1 *puVar14;
  double dVar15;
  float fVar17;
  double dVar16;
  undefined4 uVar18;
  double in_dr4;
  undefined4 uVar19;
  double in_dr6;
  double dVar20;
  double in_dr12;
  double dVar21;
  undefined8 in_dr14;
  float fVar23;
  double dVar22;
  undefined8 in_xd2;
  double in_xd4;
  double in_xd6;
  double in_xd14;
  bool bVar24;
  undefined4 in_PR;
  byte in_FPSCR_CAUSE;
  byte bVar25;
  byte bVar26;
  byte in_FPSCR_DN;
  byte bVar27;
  byte bVar28;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  undefined1 auStack_34 [8];
  undefined8 uStack_2c;
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == 0) {
    uStack_24 = (double)CONCAT44((int)in_dr14,(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar14 = (undefined1 *)((int)&uStack_2c + 4);
    uStack_2c = CONCAT44(SUB84(in_dr12,0),(undefined4)uStack_2c);
  }
  else {
    puVar14 = auStack_34;
    uStack_24 = in_xd14;
    uStack_2c = in_dr14;
  }
  *(undefined4 *)(puVar14 + -4) = in_PR;
  if (in_FPSCR_SZ == 0) {
    fVar17 = *(float *)(ar4 + 0x4c);
  }
  else {
    fVar17 = (float)((ulonglong)*(undefined8 *)(ar4 + 0x4c) >> 0x20);
  }
  dVar16 = (double)CONCAT44(fVar17,(float)*(int *)(DAT_8c10fba8 + ar4));
  dVar22 = in_dr4;
  if (in_FPSCR_SZ == 0) {
    dVar22 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)in_dr14);
  }
  fVar23 = (float)((ulonglong)dVar22 >> 0x20);
  if (in_FPSCR_PR != 0 || fVar17 <= (float)*(int *)(DAT_8c10fba8 + ar4)) {
    if (in_FPSCR_SZ == 0) {
      dVar16 = (double)CONCAT44(fVar17,*(undefined4 *)(ar4 + 0x4c));
    }
    else {
      in_xd2 = *(undefined8 *)(ar4 + 0x4c);
    }
    if (in_FPSCR_PR == 0) {
      dVar16 = (double)(ulonglong)(uint)(SUB84(dVar16,0) + fVar23);
    }
    else {
      dVar16 = dVar16 + dVar22;
    }
    if (in_FPSCR_SZ == 0) {
      *(int *)(ar4 + 0x4c) = SUB84(dVar16,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x4c) = in_xd2;
    }
  }
  if (in_FPSCR_SZ == 0) {
    dVar16 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x54),SUB84(dVar16,0));
  }
  else {
    dVar16 = *(double *)(ar4 + 0x54);
  }
  uVar5 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c10fbb0;
  uVar4 = (uVar5 & 0x80000) >> 0x13;
  uVar5 = (uVar5 & 0x100000) >> 0x14;
  if ((char)uVar4 == '\0') {
    dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + fVar23,SUB84(dVar16,0));
  }
  else {
    dVar16 = dVar16 + dVar22;
  }
  uVar18 = (undefined4)((ulonglong)dVar16 >> 0x20);
  if ((char)uVar5 == '\0') {
    *(undefined4 *)(ar4 + 0x54) = uVar18;
  }
  else {
    *(double *)(ar4 + 0x54) = dVar16;
  }
  if (*(int *)(ar4 + 0x50) < *(int *)(ar4 + 0x84)) {
    *(int *)(ar4 + 0x50) = *(int *)(ar4 + 0x50) + 1;
  }
  uVar12 = 0;
  uVar4 = (uVar4 << 0x13 | uVar5 << 0x14) & DAT_8c10fbb0;
  bVar26 = (byte)((uVar4 & 0x80000) >> 0x13);
  bVar28 = (byte)(uVar4 >> 0x14);
  dVar16 = (double)CONCAT44(uVar18,(float)*(int *)(ar4 + 0x50));
  if (bVar28 == 0) {
    in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),DAT_8c10fbb4);
  }
  if (bVar28 == 0) {
    dVar22 = (double)CONCAT44(fVar23,DAT_8c10fbac);
  }
  else {
    in_xd14 = (double)CONCAT44(DAT_8c10fbb0,DAT_8c10fbac);
  }
  if (bVar26 == 0) {
    dVar21 = (double)(ulonglong)(uint)(SUB84(in_dr12,0) / (float)*(int *)(ar4 + 0x50));
  }
  else {
    dVar21 = in_dr12 / dVar16;
  }
  pdVar13 = (double *)(ar5 + *(int *)(ar4 + 0x74) * 4);
  if (*(int *)(ar4 + 0x78) != 0) {
    do {
      bVar27 = 0;
      bVar25 = 0;
      uVar18 = SUB84(in_dr4,0);
      uVar19 = SUB84(in_dr6,0);
      if (*(char *)(*(int *)(ar4 + 0x6c) + uVar12 + 1) != '\0') {
        iVar11 = -1;
        puVar8 = *(undefined8 **)(ar4 + 0x60);
        pdVar6 = (double *)((int)pdVar13 + *(int *)(ar4 + 0x74) * -4 + *(int *)(ar4 + 0x70) * 4);
        if (bVar28 == 0) {
          uVar19 = *(undefined4 *)PTR_DAT_8c10fbb8;
        }
        else {
          in_xd6 = *(double *)PTR_DAT_8c10fbb8;
        }
        in_dr6 = in_xd6;
        if (bVar28 == 0) {
          in_dr6 = (double)CONCAT44(uVar19,uVar19);
        }
        iVar10 = 0;
        dVar15 = in_dr6;
        if (*(char *)(ar4 + 0x59) != '\0') {
          do {
            pdVar7 = pdVar13;
            dVar20 = in_xd14;
            if (bVar28 == 0) {
              dVar20 = (double)CONCAT44(SUB84(dVar22,0),SUB84(in_dr4,0));
            }
            for (; in_dr4 = dVar20, pdVar7 < pdVar6; pdVar7 = (double *)((int)pdVar7 + 4)) {
              if (bVar28 == 0) {
                dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)puVar8);
              }
              else {
                in_xd2 = *puVar8;
              }
              uVar4 = ((uint)bVar25 << 0xc | (uint)bVar27 << 0x12 | (uint)bVar26 << 0x13 |
                      (uint)bVar28 << 0x14) & DAT_8c10fbb0;
              if (bVar28 == 0) {
                in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)pdVar7);
              }
              else {
                in_xd4 = *pdVar7;
              }
              bVar25 = 0;
              bVar27 = 0;
              bVar26 = (byte)((uVar4 & 0x80000) >> 0x13);
              bVar28 = (byte)((uVar4 & 0x100000) >> 0x14);
              if (bVar26 == 0) {
                in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),
                                          SUB84(in_dr4,0) - SUB84(dVar16,0));
              }
              else {
                in_dr4 = in_dr4 - dVar16;
              }
              fVar23 = SUB84(in_dr4,0);
              fVar17 = fVar23;
              if (bVar28 != 0) {
                fVar17 = (float)((ulonglong)in_xd4 >> 0x20);
              }
              if (bVar26 == 0) {
                fVar17 = fVar17 * fVar23 + (float)((ulonglong)in_dr4 >> 0x20);
                in_dr4 = (double)CONCAT44(fVar17,fVar23);
                bVar24 = (float)((ulonglong)dVar15 >> 0x20) < fVar17;
              }
              else {
                bVar24 = dVar15 < in_dr4;
              }
              if (bVar24) break;
              puVar8 = (undefined8 *)((int)puVar8 + 4);
              dVar20 = in_dr4;
              bVar25 = 0;
              bVar27 = 0;
            }
            if (pdVar7 == pdVar6) {
              iVar11 = iVar10;
              in_dr6 = in_dr4;
              if (bVar28 == 0) {
                in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),SUB84(dVar15,0));
              }
            }
            else {
              iVar3 = (*(code *)PTR_libgcc_divide_helper_010468_8c10fde0)();
              puVar8 = (undefined8 *)((int)puVar8 + iVar3 * 4);
              in_dr6 = dVar15;
            }
            uVar18 = SUB84(in_dr4,0);
            iVar10 = iVar10 + 1;
            dVar15 = in_dr6;
          } while (iVar10 < (int)(uint)*(byte *)(ar4 + 0x59));
        }
        in_dr4 = in_xd6;
        if (bVar28 == 0) {
          in_dr4 = (double)CONCAT44(SUB84(in_dr6,0),uVar18);
        }
        piVar9 = (int *)((uint)*(byte *)(ar4 + 0x5a) * iVar11 * 4 + *(int *)(ar4 + 100));
        iVar11 = 0;
        if (*(char *)(ar4 + 0x5a) != '\0') {
          do {
            puVar8 = (undefined8 *)(*piVar9 * 4 + *(int *)(ar4 + 0x68));
            pdVar7 = pdVar13;
            dVar15 = in_dr4;
            bVar1 = bVar25;
            bVar2 = bVar27;
            dVar20 = in_xd14;
            if (bVar28 == 0) {
              dVar15 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),SUB84(dVar22,0));
              dVar20 = in_xd4;
            }
            do {
              in_xd4 = dVar20;
              bVar27 = bVar2;
              bVar25 = bVar1;
              if (pdVar6 <= pdVar7) break;
              if (bVar28 == 0) {
                dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)puVar8);
                puVar8 = (undefined8 *)((int)puVar8 + 4);
              }
              else {
                in_xd2 = *puVar8;
                puVar8 = puVar8 + 1;
              }
              uVar4 = ((uint)bVar25 << 0xc | (uint)bVar27 << 0x12 | (uint)bVar26 << 0x13 |
                      (uint)bVar28 << 0x14) & DAT_8c10fde4;
              if (bVar28 == 0) {
                dVar20 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(in_dr6,0));
                pdVar7 = (double *)((int)pdVar7 + 4);
              }
              else {
                dVar20 = *pdVar7;
                pdVar7 = pdVar7 + 1;
              }
              bVar25 = 0;
              bVar27 = 0;
              bVar26 = (byte)((uVar4 & 0x80000) >> 0x13);
              bVar28 = (byte)((uVar4 & 0x100000) >> 0x14);
              if (bVar26 == 0) {
                fVar17 = (float)((ulonglong)dVar20 >> 0x20) - SUB84(dVar16,0);
                in_dr6 = (double)CONCAT44(fVar17,SUB84(dVar20,0));
                dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                          fVar17 * fVar17 + SUB84(dVar15,0));
              }
              else {
                in_dr6 = dVar20 - dVar16;
              }
              bVar1 = 0;
              bVar2 = 0;
              dVar20 = in_xd4;
            } while (bVar26 != 0 || SUB84(dVar15,0) <= (float)((ulonglong)dVar15 >> 0x20));
            piVar9 = piVar9 + 1;
            in_dr4 = dVar15;
            if ((pdVar7 == pdVar6) && (in_dr4 = in_xd4, bVar28 == 0)) {
              in_dr4 = (double)CONCAT44(SUB84(dVar15,0),SUB84(dVar15,0));
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)(uint)*(byte *)(ar4 + 0x5a));
        }
        iVar11 = uVar12 * 4;
        uVar4 = ((uint)bVar25 << 0xc | (uint)bVar27 << 0x12 | (uint)bVar26 << 0x13 |
                (uint)bVar28 << 0x14) & DAT_8c10fde4;
        *(int *)(puVar14 + -8) = *(int *)(ar4 + 0x44) + iVar11;
        bVar26 = 0;
        bVar28 = 0;
        bVar25 = (byte)((uVar4 & 0x80000) >> 0x13);
        bVar27 = (byte)((uVar4 & 0x100000) >> 0x14);
        dVar15 = (double)(*(code *)PTR_FUN_8c10fde8)();
        uVar4 = ((uint)bVar26 << 0xc | (uint)bVar28 << 0x12 | (uint)bVar25 << 0x13 |
                (uint)bVar27 << 0x14) & DAT_8c10fde4;
        bVar26 = (byte)((uVar4 & 0x80000) >> 0x13);
        bVar28 = (byte)((uVar4 & 0x100000) >> 0x14);
        puVar8 = *(undefined8 **)(puVar14 + -8);
        if (bVar26 == 0) {
          dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) *
                                    (float)((ulonglong)dVar22 >> 0x20),SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 * dVar22;
        }
        if (bVar28 == 0) {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                    *(undefined4 *)(*(int *)(ar4 + 0x44) + iVar11));
        }
        else {
          in_xd2 = *(undefined8 *)(*(int *)(ar4 + 0x44) + iVar11);
        }
        if (bVar26 == 0) {
          fVar17 = (float)((ulonglong)dVar15 >> 0x20) - SUB84(dVar16,0);
        }
        else {
          fVar17 = (float)((ulonglong)(dVar15 - dVar16) >> 0x20);
        }
        if (bVar28 == 0) {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)puVar8);
        }
        else {
          in_xd2 = *puVar8;
        }
        if (bVar26 == 0) {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                    fVar17 * SUB84(dVar21,0) + SUB84(dVar16,0));
        }
        if (bVar28 == 0) {
          *(int *)puVar8 = SUB84(dVar16,0);
        }
        else {
          *puVar8 = in_xd2;
        }
      }
      uVar12 = uVar12 + 1;
      pdVar13 = (double *)((int)pdVar13 + *(int *)(ar4 + 0x70) * 4);
    } while (uVar12 < *(uint *)(ar4 + 0x78));
  }
  return 0x78;
}



/* FUN_8c10fabc @ 8c10fabc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c10fad6) */
/* WARNING: Removing unreachable block (ram,0x8c10fb20) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c10fabc(undefined4 ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  byte bVar2;
  int in_r0;
  int iVar3;
  uint uVar4;
  uint uVar5;
  double *a4;
  undefined8 *puVar6;
  int *a6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int unaff_r13;
  double *pdVar10;
  int unaff_r14;
  undefined1 *puVar11;
  double in_dr0;
  double dVar12;
  float fVar14;
  double dVar13;
  undefined4 uVar15;
  double in_dr4;
  float fVar17;
  double dVar16;
  undefined4 uVar18;
  double in_dr6;
  double dVar19;
  double in_dr12;
  double dVar20;
  undefined8 in_dr14;
  double dVar21;
  undefined8 in_xd2;
  double in_xd4;
  double in_xd6;
  double in_xd14;
  bool bVar22;
  undefined4 in_PR;
  byte in_FPSCR_CAUSE;
  byte bVar23;
  byte bVar24;
  byte in_FPSCR_DN;
  byte bVar25;
  byte bVar26;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  undefined1 auStack_2c [8];
  undefined8 uStack_24;
  undefined8 uStack_1c;
  
  if (in_FPSCR_SZ == 0) {
    uStack_1c = (double)CONCAT44((int)in_dr14,(undefined4)uStack_1c);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_1c._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar11 = (undefined1 *)((int)&uStack_24 + 4);
    uStack_24 = CONCAT44(SUB84(in_dr12,0),(undefined4)uStack_24);
  }
  else {
    puVar11 = auStack_2c;
    uStack_1c = in_xd14;
    uStack_24 = in_dr14;
  }
  *(undefined4 *)(puVar11 + -4) = in_PR;
  if (in_FPSCR_SZ == 0) {
    fVar14 = *(float *)(unaff_r14 + 0x4c);
  }
  else {
    fVar14 = (float)((ulonglong)*(undefined8 *)(unaff_r14 + 0x4c) >> 0x20);
  }
  dVar13 = (double)CONCAT44(fVar14,(float)*(int *)(in_r0 + unaff_r14));
  dVar21 = in_dr4;
  if (in_FPSCR_SZ == 0) {
    dVar21 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)in_dr14);
  }
  fVar17 = (float)((ulonglong)dVar21 >> 0x20);
  if (in_FPSCR_PR != 0 || fVar14 <= (float)*(int *)(in_r0 + unaff_r14)) {
    if (in_FPSCR_SZ == 0) {
      dVar13 = (double)CONCAT44(fVar14,*(undefined4 *)(unaff_r14 + 0x4c));
    }
    else {
      in_xd2 = *(undefined8 *)(unaff_r14 + 0x4c);
    }
    if (in_FPSCR_PR == 0) {
      dVar13 = (double)(ulonglong)(uint)(SUB84(dVar13,0) + fVar17);
    }
    else {
      dVar13 = dVar13 + dVar21;
    }
    if (in_FPSCR_SZ == 0) {
      *(int *)(unaff_r14 + 0x4c) = SUB84(dVar13,0);
    }
    else {
      *(undefined8 *)(unaff_r14 + 0x4c) = in_xd2;
    }
  }
  if (in_FPSCR_SZ == 0) {
    dVar13 = (double)CONCAT44(*(undefined4 *)(unaff_r14 + 0x54),SUB84(dVar13,0));
  }
  else {
    dVar13 = *(double *)(unaff_r14 + 0x54);
  }
  uVar5 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c10fbb0;
  uVar4 = (uVar5 & 0x80000) >> 0x13;
  uVar5 = (uVar5 & 0x100000) >> 0x14;
  if ((char)uVar4 == '\0') {
    dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) + fVar17,SUB84(dVar13,0));
  }
  else {
    dVar13 = dVar13 + dVar21;
  }
  uVar15 = (undefined4)((ulonglong)dVar13 >> 0x20);
  if ((char)uVar5 == '\0') {
    *(undefined4 *)(unaff_r14 + 0x54) = uVar15;
  }
  else {
    *(double *)(unaff_r14 + 0x54) = dVar13;
  }
  if (*(int *)(unaff_r14 + 0x50) < *(int *)(unaff_r14 + 0x84)) {
    *(int *)(unaff_r14 + 0x50) = *(int *)(unaff_r14 + 0x50) + 1;
  }
  uVar9 = 0;
  uVar4 = (uVar4 << 0x13 | uVar5 << 0x14) & DAT_8c10fbb0;
  bVar24 = (byte)((uVar4 & 0x80000) >> 0x13);
  bVar26 = (byte)(uVar4 >> 0x14);
  dVar13 = (double)CONCAT44(uVar15,(float)*(int *)(unaff_r14 + 0x50));
  if (bVar26 == 0) {
    in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),DAT_8c10fbb4);
  }
  if (bVar26 == 0) {
    dVar21 = (double)CONCAT44(fVar17,DAT_8c10fbac);
  }
  else {
    in_xd14 = (double)CONCAT44(DAT_8c10fbb0,DAT_8c10fbac);
  }
  if (bVar24 == 0) {
    dVar20 = (double)(ulonglong)(uint)(SUB84(in_dr12,0) / (float)*(int *)(unaff_r14 + 0x50));
  }
  else {
    dVar20 = in_dr12 / dVar13;
  }
  pdVar10 = (double *)(unaff_r13 + *(int *)(unaff_r14 + 0x74) * 4);
  if (*(int *)(unaff_r14 + 0x78) != 0) {
    do {
      bVar25 = 0;
      bVar23 = 0;
      uVar15 = SUB84(in_dr4,0);
      uVar18 = SUB84(in_dr6,0);
      if (*(char *)(*(int *)(unaff_r14 + 0x6c) + uVar9 + 1) != '\0') {
        iVar8 = -1;
        puVar6 = *(undefined8 **)(unaff_r14 + 0x60);
        a4 = (double *)
             ((int)pdVar10 + *(int *)(unaff_r14 + 0x74) * -4 + *(int *)(unaff_r14 + 0x70) * 4);
        if (bVar26 == 0) {
          uVar18 = *(undefined4 *)PTR_DAT_8c10fbb8;
        }
        else {
          in_xd6 = *(double *)PTR_DAT_8c10fbb8;
        }
        in_dr6 = in_xd6;
        if (bVar26 == 0) {
          in_dr6 = (double)CONCAT44(uVar18,uVar18);
        }
        iVar7 = 0;
        dVar12 = in_dr6;
        if (*(char *)(unaff_r14 + 0x59) != '\0') {
          do {
            ar5 = pdVar10;
            dVar16 = in_dr0;
            dVar19 = in_xd14;
            if (bVar26 == 0) {
              dVar19 = (double)CONCAT44(SUB84(dVar21,0),SUB84(in_dr4,0));
            }
            for (; in_dr4 = dVar19, in_dr0 = dVar16, ar5 < a4; ar5 = (double *)((int)ar5 + 4)) {
              if (bVar26 == 0) {
                dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)puVar6);
              }
              else {
                in_xd2 = *puVar6;
              }
              uVar4 = ((uint)bVar23 << 0xc | (uint)bVar25 << 0x12 | (uint)bVar24 << 0x13 |
                      (uint)bVar26 << 0x14) & DAT_8c10fbb0;
              if (bVar26 == 0) {
                in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)ar5);
              }
              else {
                in_xd4 = *ar5;
              }
              bVar23 = 0;
              bVar25 = 0;
              bVar24 = (byte)((uVar4 & 0x80000) >> 0x13);
              bVar26 = (byte)((uVar4 & 0x100000) >> 0x14);
              if (bVar24 == 0) {
                in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),
                                          SUB84(in_dr4,0) - SUB84(dVar13,0));
              }
              else {
                in_dr4 = in_dr4 - dVar13;
              }
              fVar14 = SUB84(in_dr4,0);
              in_dr0 = in_xd4;
              if (bVar26 == 0) {
                in_dr0 = (double)CONCAT44(fVar14,SUB84(dVar16,0));
              }
              if (bVar24 == 0) {
                fVar17 = (float)((ulonglong)in_dr0 >> 0x20) * fVar14 +
                         (float)((ulonglong)in_dr4 >> 0x20);
                in_dr4 = (double)CONCAT44(fVar17,fVar14);
                bVar22 = (float)((ulonglong)dVar12 >> 0x20) < fVar17;
              }
              else {
                bVar22 = dVar12 < in_dr4;
              }
              if (bVar22) break;
              puVar6 = (undefined8 *)((int)puVar6 + 4);
              dVar16 = in_dr0;
              dVar19 = in_dr4;
              bVar23 = 0;
              bVar25 = 0;
            }
            if (ar5 == a4) {
              iVar8 = iVar7;
              in_dr6 = in_dr4;
              if (bVar26 == 0) {
                in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),SUB84(dVar12,0));
              }
            }
            else {
              iVar3 = (*(code *)PTR_libgcc_divide_helper_010468_8c10fde0)(a4,ar5,puVar6,iVar7);
              puVar6 = (undefined8 *)((int)puVar6 + iVar3 * 4);
              in_dr6 = dVar12;
            }
            uVar15 = SUB84(in_dr4,0);
            iVar7 = iVar7 + 1;
            dVar12 = in_dr6;
          } while (iVar7 < (int)(uint)*(byte *)(unaff_r14 + 0x59));
        }
        in_dr4 = in_xd6;
        if (bVar26 == 0) {
          in_dr4 = (double)CONCAT44(SUB84(in_dr6,0),uVar15);
        }
        a6 = (int *)((uint)*(byte *)(unaff_r14 + 0x5a) * iVar8 * 4 + *(int *)(unaff_r14 + 100));
        iVar8 = 0;
        if (*(char *)(unaff_r14 + 0x5a) != '\0') {
          do {
            puVar6 = (undefined8 *)(*a6 * 4 + *(int *)(unaff_r14 + 0x68));
            ar5 = pdVar10;
            dVar12 = in_dr0;
            dVar16 = in_dr4;
            bVar1 = bVar23;
            bVar2 = bVar25;
            dVar19 = in_xd14;
            if (bVar26 == 0) {
              dVar16 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),SUB84(dVar21,0));
              dVar19 = in_xd4;
            }
            do {
              in_xd4 = dVar19;
              bVar25 = bVar2;
              bVar23 = bVar1;
              in_dr0 = dVar12;
              if (a4 <= ar5) break;
              if (bVar26 == 0) {
                dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)puVar6);
                puVar6 = (undefined8 *)((int)puVar6 + 4);
              }
              else {
                in_xd2 = *puVar6;
                puVar6 = puVar6 + 1;
              }
              uVar4 = ((uint)bVar23 << 0xc | (uint)bVar25 << 0x12 | (uint)bVar24 << 0x13 |
                      (uint)bVar26 << 0x14) & DAT_8c10fde4;
              if (bVar26 == 0) {
                dVar19 = (double)CONCAT44(*(undefined4 *)ar5,SUB84(in_dr6,0));
                ar5 = (double *)((int)ar5 + 4);
              }
              else {
                dVar19 = *ar5;
                ar5 = ar5 + 1;
              }
              bVar23 = 0;
              bVar25 = 0;
              bVar24 = (byte)((uVar4 & 0x80000) >> 0x13);
              bVar26 = (byte)((uVar4 & 0x100000) >> 0x14);
              if (bVar24 == 0) {
                in_dr6 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar13,0),
                                          SUB84(dVar19,0));
              }
              else {
                in_dr6 = dVar19 - dVar13;
              }
              fVar14 = (float)((ulonglong)in_dr6 >> 0x20);
              in_dr0 = in_dr6;
              if (bVar26 == 0) {
                in_dr0 = (double)CONCAT44(fVar14,SUB84(dVar12,0));
              }
              if (bVar24 == 0) {
                dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                          (float)((ulonglong)in_dr0 >> 0x20) * fVar14 +
                                          SUB84(dVar16,0));
              }
              dVar12 = in_dr0;
              bVar1 = 0;
              bVar2 = 0;
              dVar19 = in_xd4;
            } while (bVar24 != 0 || SUB84(dVar16,0) <= (float)((ulonglong)dVar16 >> 0x20));
            a6 = a6 + 1;
            in_dr4 = dVar16;
            if ((ar5 == a4) && (in_dr4 = in_xd4, bVar26 == 0)) {
              in_dr4 = (double)CONCAT44(SUB84(dVar16,0),SUB84(dVar16,0));
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)(uint)*(byte *)(unaff_r14 + 0x5a));
        }
        iVar7 = uVar9 * 4;
        uVar4 = ((uint)bVar23 << 0xc | (uint)bVar25 << 0x12 | (uint)bVar24 << 0x13 |
                (uint)bVar26 << 0x14) & DAT_8c10fde4;
        *(int *)(puVar11 + -8) = *(int *)(unaff_r14 + 0x44) + iVar7;
        bVar24 = 0;
        bVar26 = 0;
        bVar23 = (byte)((uVar4 & 0x80000) >> 0x13);
        bVar25 = (byte)((uVar4 & 0x100000) >> 0x14);
        (*(code *)PTR_FUN_8c10fde8)(a4,ar5,a6,iVar8);
        uVar4 = ((uint)bVar24 << 0xc | (uint)bVar26 << 0x12 | (uint)bVar23 << 0x13 |
                (uint)bVar25 << 0x14) & DAT_8c10fde4;
        bVar24 = (byte)((uVar4 & 0x80000) >> 0x13);
        bVar26 = (byte)((uVar4 & 0x100000) >> 0x14);
        puVar6 = *(undefined8 **)(puVar11 + -8);
        if (bVar24 == 0) {
          dVar12 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) *
                                    (float)((ulonglong)dVar21 >> 0x20),SUB84(in_dr0,0));
        }
        else {
          dVar12 = in_dr0 * dVar21;
        }
        if (bVar26 == 0) {
          dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),
                                    *(undefined4 *)(*(int *)(unaff_r14 + 0x44) + iVar7));
        }
        else {
          in_xd2 = *(undefined8 *)(*(int *)(unaff_r14 + 0x44) + iVar7);
        }
        if (bVar24 == 0) {
          in_dr0 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) - SUB84(dVar13,0),
                                    SUB84(dVar12,0));
        }
        else {
          in_dr0 = dVar12 - dVar13;
        }
        if (bVar26 == 0) {
          dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)puVar6);
        }
        else {
          in_xd2 = *puVar6;
        }
        if (bVar24 == 0) {
          dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),
                                    (float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar20,0) +
                                    SUB84(dVar13,0));
        }
        if (bVar26 == 0) {
          *(int *)puVar6 = SUB84(dVar13,0);
        }
        else {
          *puVar6 = in_xd2;
        }
      }
      uVar9 = uVar9 + 1;
      pdVar10 = (double *)((int)pdVar10 + *(int *)(unaff_r14 + 0x70) * 4);
    } while (uVar9 < *(uint *)(unaff_r14 + 0x78));
  }
  return 0x78;
}



/* FUN_8c10fc96 @ 8c10fc96 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10fc96(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  double *pdVar5;
  uint uVar6;
  int a4;
  undefined4 *puVar7;
  int a4_00;
  float extraout_fr3;
  float fVar8;
  undefined4 extraout_fr2;
  undefined4 uVar9;
  undefined8 in_dr4;
  double dVar10;
  bool bVar11;
  byte in_FPSCR_CAUSE;
  byte bVar12;
  byte in_FPSCR_DN;
  byte bVar13;
  byte in_FPSCR_PR;
  byte bVar14;
  byte in_FPSCR_SZ;
  byte bVar15;
  char cVar16;
  
  a4_00 = *(int *)(ar4 + 0x40);
  a4 = *(int *)(ar4 + 0xc);
  uVar3 = (*(code *)PTR_FUN_8c10fdec)(a4,*(int *)(ar4 + 0x78) + 1,ar6,ar7);
  puVar2 = PTR_FUN_8c10fdf4;
  puVar1 = PTR_memmove_8c10fdf0;
  uVar9 = (undefined4)in_dr4;
  uVar4 = 0;
  if ((uVar3 & 0xff) != 0) {
    uVar3 = 1;
    if (*(int *)(ar4 + 0x78) != 0) {
      do {
        if (*(char *)(*(int *)(ar4 + 0x6c) + uVar3) != '\0') {
          puVar7 = (undefined4 *)(uVar3 * 8 + a4);
          uVar6 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                   (uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14) & DAT_8c10fde4;
          bVar12 = 0;
          bVar13 = 0;
          bVar14 = (byte)((uVar6 & 0x80000) >> 0x13);
          bVar15 = (byte)((uVar6 & 0x100000) >> 0x14);
          uVar4 = (*(code *)puVar2)(*puVar7,puVar7[1],ar6,ar7);
          uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar14 << 0x13 |
                  (uint)bVar15 << 0x14) & DAT_8c10fde4;
          ar6 = *(int *)(ar4 + 0x70) << 2;
          in_FPSCR_CAUSE = 0;
          in_FPSCR_DN = 0;
          in_FPSCR_PR = (byte)((uVar6 & 0x80000) >> 0x13);
          in_FPSCR_SZ = (byte)((uVar6 & 0x100000) >> 0x14);
          (*(code *)puVar1)(a4_00,uVar4,ar6,ar7);
        }
        uVar9 = (undefined4)in_dr4;
        uVar3 = uVar3 + 1;
        a4_00 = a4_00 + *(int *)(ar4 + 0x70) * 4;
      } while (uVar3 <= *(uint *)(ar4 + 0x78));
    }
    uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & DAT_8c10fde4;
    bVar12 = 0;
    bVar13 = 0;
    bVar14 = (byte)((uVar3 & 0x80000) >> 0x13);
    cVar16 = (char)((uVar3 & 0x100000) >> 0x14);
    pdVar5 = (double *)
             (*(code *)puVar2)(**(undefined4 **)(ar4 + 0xc),(*(undefined4 **)(ar4 + 0xc))[1],ar6,ar7
                              );
    if (cVar16 == '\0') {
      dVar10 = (double)CONCAT44(*(undefined4 *)pdVar5,uVar9);
    }
    else {
      dVar10 = *pdVar5;
    }
    if (*(char *)(ar4 + 0x32) == '\0') {
      fVar8 = extraout_fr3;
      if (cVar16 == '\0') {
        fVar8 = DAT_8c10fdf8;
      }
      if ((char)((((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar14 << 0x13) & DAT_8c10fde4
                 & 0x80000) >> 0x13) == '\0') {
        bVar11 = fVar8 < (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        bVar11 = (double)CONCAT44(extraout_fr2,fVar8) < dVar10;
      }
      if (bVar11) {
        FUN_8c10fab2(ar4,*(undefined4 *)(ar4 + 0x40),ar6,ar7);
      }
    }
    *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + 1;
    uVar4 = 0x40;
    if (a4_00 == *(int *)(ar4 + 0x38)) {
      a4_00 = *(int *)(ar4 + 0x34);
    }
    *(int *)(ar4 + 0x40) = a4_00;
  }
  return uVar4;
}



/* FUN_8c10fd82 @ 8c10fd82 callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c10fd82(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float in_fr3;
  undefined4 in_fr2;
  undefined4 in_fr5;
  double dVar4;
  bool bVar5;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == 0) {
    dVar4 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c10fdfc,in_fr5);
  }
  else {
    dVar4 = *(double *)PTR_DAT_8c10fdfc;
  }
  uVar3 = 0;
  uVar2 = 0;
  if (*(int *)(ar4 + 0x78) != 0) {
    do {
      if (*(char *)(*(int *)(ar4 + 0x6c) + uVar2 + 1) != '\0') {
        uVar1 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13
                | (uint)in_FPSCR_SZ << 0x14) & DAT_8c10fde4;
        if (in_FPSCR_SZ == 0) {
          in_fr3 = *(float *)(*(int *)(ar4 + 0x44) + uVar2 * 4);
        }
        in_FPSCR_PR = (byte)((uVar1 & 0x80000) >> 0x13);
        in_FPSCR_SZ = (byte)((uVar1 & 0x100000) >> 0x14);
        if (in_FPSCR_PR == 0) {
          bVar5 = in_fr3 < (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          bVar5 = (double)CONCAT44(in_fr2,in_fr3) < dVar4;
        }
        in_FPSCR_CAUSE = 0;
        in_FPSCR_DN = 0;
        if (bVar5) {
          uVar3 = uVar2;
          in_FPSCR_CAUSE = 0;
          in_FPSCR_DN = 0;
          if (in_FPSCR_SZ == 0) {
            dVar4 = (double)CONCAT44(*(undefined4 *)(uVar2 * 4 + *(int *)(ar4 + 0x44)),
                                     SUB84(dVar4,0));
          }
          else {
            dVar4 = *(double *)(uVar2 * 4 + *(int *)(ar4 + 0x44));
          }
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(ar4 + 0x78));
  }
  if (in_FPSCR_SZ == 0) {
    *(undefined4 *)(ar4 + 0x54) = DAT_8c10fe00;
  }
  else {
    *(ulonglong *)(ar4 + 0x54) = CONCAT44(_FUN_8c10fe04,DAT_8c10fe00);
  }
  return uVar3 + 1;
}



/* FUN_8c10fe04 @ 8c10fe04 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c10fe4a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c10fe04(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  byte in_FPSCR_CAUSE;
  byte bVar5;
  byte in_FPSCR_DN;
  byte bVar6;
  byte in_FPSCR_PR;
  byte bVar7;
  byte in_FPSCR_SZ;
  byte bVar8;
  
  if (*(int *)(ar4 + 0x48) == 0) {
    return 0x48;
  }
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c10feb8;
  bVar5 = 0;
  bVar6 = 0;
  bVar7 = (byte)((uVar3 & 0x80000) >> 0x13);
  bVar8 = (byte)((uVar3 & 0x100000) >> 0x14);
  iVar1 = (*(code *)PTR_FUN_8c10febc)(**(undefined4 **)(ar4 + 0x10));
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)(ar4 + 0x32) == '\0') {
    if (*(int *)(ar4 + 0x28) != 0) {
      uVar3 = ((uint)bVar5 << 0xc | (uint)bVar6 << 0x12 | (uint)bVar7 << 0x13 | (uint)bVar8 << 0x14)
              & DAT_8c10feb8;
      if ((char)((uVar3 & 0x100000) >> 0x14) == '\0') {
        fVar4 = *(float *)(ar4 + 0x54);
      }
      else {
        fVar4 = (float)((ulonglong)*(undefined8 *)(ar4 + 0x54) >> 0x20);
      }
      if ((char)((uVar3 & 0x80000) >> 0x13) != '\0' || fVar4 <= (float)*(int *)(DAT_8c10feb4 + ar4))
      goto LAB_8c10fe62;
    }
    uVar2 = FUN_8c10fd82(ar4,ar5,ar6,ar7);
    *(short *)(ar4 + 0x30) = (short)uVar2;
  }
LAB_8c10fe62:
  (*(code *)PTR_memmove_8c10fec0)
            (iVar1,(*(ushort *)(ar4 + 0x30) - 1) * *(int *)(ar4 + 0x70) * 4 + *(int *)(ar4 + 0x3c),
             *(int *)(ar4 + 0x70) << 2);
  iVar1 = *(int *)(ar4 + 0x3c) + *(int *)(DAT_8c10feb6 + ar4) * 4;
  *(int *)(ar4 + 0x3c) = iVar1;
  if (iVar1 == *(int *)(ar4 + 0x38)) {
    *(undefined4 *)(ar4 + 0x3c) = *(undefined4 *)(ar4 + 0x34);
  }
  *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + -1;
  return 0x48;
}



/* FUN_8c10fe0a @ 8c10fe0a callers=0 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c10fe4a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c10fe0a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_r14;
  float fVar4;
  byte in_FPSCR_CAUSE;
  byte bVar5;
  byte in_FPSCR_DN;
  byte bVar6;
  byte in_FPSCR_PR;
  byte bVar7;
  byte in_FPSCR_SZ;
  byte bVar8;
  
  if (*(int *)(in_r0 + unaff_r14) == 0) {
    return in_r0;
  }
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c10feb8;
  bVar5 = 0;
  bVar6 = 0;
  bVar7 = (byte)((uVar3 & 0x80000) >> 0x13);
  bVar8 = (byte)((uVar3 & 0x100000) >> 0x14);
  iVar1 = (*(code *)PTR_FUN_8c10febc)(**(undefined4 **)(unaff_r14 + 0x10),ar5,ar6,ar7);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)(unaff_r14 + 0x32) == '\0') {
    if (*(int *)(unaff_r14 + 0x28) != 0) {
      uVar3 = ((uint)bVar5 << 0xc | (uint)bVar6 << 0x12 | (uint)bVar7 << 0x13 | (uint)bVar8 << 0x14)
              & DAT_8c10feb8;
      if ((char)((uVar3 & 0x100000) >> 0x14) == '\0') {
        fVar4 = *(float *)(unaff_r14 + 0x54);
      }
      else {
        fVar4 = (float)((ulonglong)*(undefined8 *)(unaff_r14 + 0x54) >> 0x20);
      }
      if ((char)((uVar3 & 0x80000) >> 0x13) != '\0' ||
          fVar4 <= (float)*(int *)(DAT_8c10feb4 + unaff_r14)) goto LAB_8c10fe62;
    }
    uVar2 = FUN_8c10fd82(unaff_r14,ar5,ar6,ar7);
    *(short *)(unaff_r14 + 0x30) = (short)uVar2;
  }
LAB_8c10fe62:
  (*(code *)PTR_memmove_8c10fec0)
            (iVar1,(*(ushort *)(unaff_r14 + 0x30) - 1) * *(int *)(unaff_r14 + 0x70) * 4 +
                   *(int *)(unaff_r14 + 0x3c),*(int *)(unaff_r14 + 0x70) << 2,ar7);
  iVar1 = *(int *)(unaff_r14 + 0x3c) + *(int *)(DAT_8c10feb6 + unaff_r14) * 4;
  *(int *)(unaff_r14 + 0x3c) = iVar1;
  if (iVar1 == *(int *)(unaff_r14 + 0x38)) {
    *(undefined4 *)(unaff_r14 + 0x3c) = *(undefined4 *)(unaff_r14 + 0x34);
  }
  *(int *)(unaff_r14 + 0x48) = *(int *)(unaff_r14 + 0x48) + -1;
  return 0x48;
}



/* FUN_8c10fece @ 8c10fece callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c10fece(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int *in_r1;
  undefined4 uVar3;
  int iVar4;
  int *unaff_r14;
  undefined4 extraout_fr1;
  undefined4 extraout_fr1_00;
  undefined4 extraout_fr1_01;
  undefined4 extraout_fr1_02;
  undefined4 extraout_fr1_03;
  undefined4 extraout_fr1_04;
  float extraout_fr0;
  float extraout_fr0_00;
  float extraout_fr0_01;
  float extraout_fr0_02;
  float extraout_fr0_03;
  float extraout_fr0_04;
  short sVar5;
  uint uVar6;
  byte in_FPSCR_CAUSE;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte in_FPSCR_DN;
  byte bVar10;
  byte bVar11;
  byte in_FPSCR_PR;
  
  puVar1 = PTR_FUN_8c11003c;
  iVar4 = *unaff_r14;
  *in_r1 = *(byte *)(unaff_r14 + 2) - 1;
  (*(code *)puVar1)(unaff_r14,5,ar6,ar7);
  bVar7 = 0;
  bVar9 = 0;
  bVar11 = (byte)((((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                   (uint)in_FPSCR_PR << 0x13) & DAT_8c110040._4_4_ & 0x80000) >> 0x13);
  if (bVar11 == 0) {
    uVar6 = (uint)extraout_fr0;
  }
  else {
    uVar6 = (uint)(double)CONCAT44(extraout_fr0,extraout_fr1);
  }
  unaff_r14[0x1d] = uVar6 & 0xffff;
  (*(code *)puVar1)(unaff_r14,6,ar6,ar7);
  bVar8 = 0;
  bVar10 = 0;
  bVar7 = (byte)((((uint)bVar7 << 0xc | (uint)bVar9 << 0x12 | (uint)bVar11 << 0x13) &
                  DAT_8c110040._4_4_ & 0x80000) >> 0x13);
  if (bVar7 == 0) {
    uVar6 = (uint)extraout_fr0_00;
  }
  else {
    uVar6 = (uint)(double)CONCAT44(extraout_fr0_00,extraout_fr1_00);
  }
  unaff_r14[0x1c] = uVar6 & 0xffff;
  (*(code *)puVar1)(unaff_r14,1,ar6,ar7);
  bVar9 = 0;
  bVar11 = 0;
  bVar7 = (byte)((((uint)bVar8 << 0xc | (uint)bVar10 << 0x12 | (uint)bVar7 << 0x13) &
                  DAT_8c110040._4_4_ & 0x80000) >> 0x13);
  if (bVar7 == 0) {
    uVar6 = (uint)extraout_fr0_01;
  }
  else {
    uVar6 = (uint)(double)CONCAT44(extraout_fr0_01,extraout_fr1_01);
  }
  unaff_r14[0x1f] = uVar6 & 0xffff;
  (*(code *)puVar1)(unaff_r14,2,ar6,ar7);
  bVar8 = 0;
  bVar10 = 0;
  bVar7 = (byte)((((uint)bVar9 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar7 << 0x13) &
                  DAT_8c110040._4_4_ & 0x80000) >> 0x13);
  if (bVar7 == 0) {
    sVar5 = (short)(int)extraout_fr0_02;
  }
  else {
    sVar5 = (short)(int)(double)CONCAT44(extraout_fr0_02,extraout_fr1_02);
  }
  *(int *)((int)DAT_8c110032 + (int)unaff_r14) = (int)sVar5;
  (*(code *)puVar1)(unaff_r14,3,ar6,ar7);
  bVar9 = 0;
  bVar11 = 0;
  bVar7 = (byte)((((uint)bVar8 << 0xc | (uint)bVar10 << 0x12 | (uint)bVar7 << 0x13) &
                  DAT_8c110040._4_4_ & 0x80000) >> 0x13);
  if (bVar7 == 0) {
    sVar5 = (short)(int)extraout_fr0_03;
  }
  else {
    sVar5 = (short)(int)(double)CONCAT44(extraout_fr0_03,extraout_fr1_03);
  }
  *(int *)((int)DAT_8c110034 + (int)unaff_r14) = (int)sVar5;
  (*(code *)puVar1)(unaff_r14,4,ar6,ar7);
  uVar3 = 4;
  if ((char)((((uint)bVar9 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar7 << 0x13) & DAT_8c110040._4_4_
             & 0x80000) >> 0x13) == '\0') {
    sVar5 = (short)(int)extraout_fr0_04;
  }
  else {
    sVar5 = (short)(int)(double)CONCAT44(extraout_fr0_04,extraout_fr1_04);
  }
  *(int *)((int)DAT_8c110036 + (int)unaff_r14) = (int)sVar5;
  unaff_r14[0x20] = unaff_r14[0x1e] * unaff_r14[0x1c];
  iVar2 = (**(code **)(iVar4 + 0x14))(iVar4,unaff_r14[0x1f] * unaff_r14[0x20],4,ar7);
  unaff_r14[0xd] = iVar2;
  unaff_r14[0xe] =
       unaff_r14[0x1f] * *(int *)((int)DAT_8c110038 + (int)unaff_r14) * 4 + unaff_r14[0xd];
  iVar2 = (**(code **)(iVar4 + 0x10))(iVar4,unaff_r14[0x1e] << 2,uVar3,ar7);
  unaff_r14[0x11] = iVar2;
  iVar4 = (**(code **)(iVar4 + 0x10))(iVar4,unaff_r14[0x1e] + 1,uVar3,ar7);
  puVar1 = PTR_memset_8c110058;
  unaff_r14[0x1b] = iVar4;
  uVar3 = 1;
  iVar4 = unaff_r14[0x1e] + 1;
  (*(code *)puVar1)(unaff_r14[0x1b],1,iVar4,ar7);
  *(short *)(*(int *)unaff_r14[4] + 0xc) = (short)unaff_r14[0x1c] << 2;
  unaff_r14[0xb] = -1;
  FUN_8c10fa6c(unaff_r14,uVar3,iVar4,ar7);
  return 0;
}


