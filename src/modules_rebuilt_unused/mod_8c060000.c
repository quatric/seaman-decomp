/* Seaman (USA) region 0x8c060000-0x8c070000 (Ghidra decompiler) */

/* FUN_8c060044 @ 8c060044 callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c060096 */
/* WARNING: Switch with 1 destination removed at 0x8c0600a8 */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c060044(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(int *)(ar4 + 0x38) == 2) && (*(int *)(ar4 + 0x6c) != 0)) {
    iVar2 = *(int *)(*(int *)(ar4 + 0x6c) + 8);
    (**(code **)(iVar2 + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,iVar2);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  iVar2 = *(int *)(ar4 + 0x40);
  uVar1 = 0x10;
  if ((iVar2 < 0x11) && (uVar1 = 1, 0 < iVar2)) {
                    /* WARNING: Could not recover jumptable at 0x8c0600b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_8c0600bc)[iVar2 + -1])();
    return uVar1;
  }
  return uVar1;
}



/* FUN_8c06115c @ 8c06115c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06115c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + (short)ar5 * 2 + (int)(short)ar6 + 0x51) = (undefined1)ar7;
  return 0x51;
}



/* get_field_c8_061174 @ 8c061174 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_c8_061174(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c06117c + ar4);
}



/* FUN_8c061180 @ 8c061180 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c061180(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = (undefined1)ar5;
  return in_r0;
}



/* FUN_8c061188 @ 8c061188 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c061188(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 0x38);
}



/* ret_const_0_061190 @ 8c061190 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_061190(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* get_field_2c_061198 @ 8c061198 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_2c_061198(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x2c);
}



/* get_field_34_0611a0 @ 8c0611a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_34_0611a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x34);
}



/* FUN_8c0611a8 @ 8c0611a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0611a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0611c8)(ar4 + DAT_8c0611c4,0x5f,ar6,ar7);
  return uVar1;
}



/* s_GRATIFIC_EAT_0611d6 @ 8c0611cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined ** s_GRATIFIC_EAT_0611d6(undefined **ar4,int *ar5,int *ar6,undefined *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  uint uVar5;
  int a5;
  undefined4 uVar6;
  undefined *puVar7;
  int *a6;
  undefined4 uVar8;
  undefined *a7;
  int iVar9;
  int *piVar10;
  char in_FPSCR_SZ;
  undefined4 uStack_10c;
  short sStack_108;
  short sStack_106;
  short sStack_104;
  short sStack_102;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined **ppuStack_ec;
  undefined **ppuStack_e8;
  undefined **ppuStack_e4;
  undefined **ppuStack_e0;
  undefined **ppuStack_dc;
  undefined **ppuStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  
  iVar9 = 0;
  iVar1 = ar6[2];
  a6 = ar6;
  uVar2 = (*(code *)PTR_get_field_124_027930_8c061218)(iVar1,ar5,ar6,ar7);
  *(undefined4 *)((int)&uStack_10c + DAT_8c06121c) = uVar2;
  ppuVar3 = *(undefined ***)((int)&uStack_10c + DAT_8c06121c);
  a5 = 0x35;
  ppuVar4 = ppuVar3;
  if ((int)ppuVar3 < 0x36) {
    ppuVar4 = &switchD_8c061214::switchdataD_8c061220;
    switch(ppuVar3) {
    case (undefined **)0x0:
      if (((*(char *)(DAT_8c062030 + (int)ar4) == '\x02') &&
          (a5 = *(int *)(DAT_8c062034 + (int)ar4), a5 == 1)) &&
         (*(int *)((int)DAT_8c062038 + (int)ar4) == 0)) {
        uVar2 = (*(code *)PTR_get_field_a0_035724_8c06203c)(ar6[6],1,a6,ar7);
        piVar10 = DAT_8c062038;
        uStack_10c._1_1_ = (char)uVar2;
        if (uStack_10c._1_1_ == '\x02') {
          *(undefined4 *)((int)DAT_8c062038 + (int)ar4) = 1;
          (*(code *)PTR_FUN_8c062044)(DAT_8c062040,a5,piVar10,ar7);
          a6 = piVar10;
        }
      }
      uVar5 = (*(code *)PTR_get_field_a0_035724_8c06203c)(ar6[6],a5,a6,ar7);
      ppuVar4 = (undefined **)(uVar5 & 0xff);
      if ((undefined **)(uVar5 & 0xff) == (undefined **)0x3) {
        ar4[3] = ar4[3] + -1;
        ppuVar4 = ar4;
      }
      break;
    case (undefined **)0x3:
      ar4[3] = ar4[3] + -1;
      ar4[2] = (undefined *)0x32;
      ppuVar4 = ar4;
      break;
    case (undefined **)0x5:
      ppuVar4 = (undefined **)(*(code *)PTR_FUN_8c061ccc)(ar6[1] + DAT_8c061cc8,0,a6,ar7);
      break;
    case (undefined **)0x6:
      uVar2 = (*(code *)PTR_FUN_8c0613b8)(ar4,0x35,a6,ar7);
      *(undefined4 *)((int)&uStack_10c + DAT_8c0613bc) = uVar2;
      ppuVar4 = *(undefined ***)((int)&uStack_10c + DAT_8c0613bc);
      if (ppuVar4 == (undefined **)0x1) {
        uVar2 = (*(code *)PTR_get_field_6c_02f46c_8c0613c0)(ar4[0x1b],a5,a6,ar7);
        *(undefined4 *)((int)&uStack_10c + DAT_8c0613c4) = uVar2;
        uVar2 = (*(code *)PTR_FUN_8c0613c8)
                          (ar4[0x1b],*(undefined4 *)((int)&uStack_10c + DAT_8c0613c4),a6,ar7);
        *(undefined4 *)((int)&uStack_10c + DAT_8c0613cc) = uVar2;
        a6 = (int *)PTR_FUN_8c0613d0;
        (*(code *)PTR_FUN_8c0613d0)
                  (ar6[1],*(undefined4 *)((int)&uStack_10c + DAT_8c0613cc),PTR_FUN_8c0613d0,ar7);
        uVar2 = (*(code *)PTR_FUN_8c0613d8)((int)ar4 + DAT_8c0613d4,DAT_8c0613d4,a6,ar7);
        ppuVar4 = DAT_8c0613e0;
        *(undefined4 *)((int)&uStack_10c + DAT_8c0613dc) = uVar2;
        *(undefined4 *)((int)DAT_8c0613e0 + (int)ar4) =
             *(undefined4 *)((int)&uStack_10c + DAT_8c0613dc);
      }
      if (ar4[0x1b] != (undefined *)0x0) {
        uVar2 = (**(code **)(DAT_8c0613e4 + *(int *)(ar4[0x1b] + 8)))(ar4[0x1b],ar4 + 0x1b,a6,ar7);
        *(undefined4 *)((int)&uStack_10c + DAT_8c0613e8) = uVar2;
        if (*(int *)((int)&uStack_10c + DAT_8c0613e8) == 0x18) {
          (*(code *)PTR_FUN_8c06144c)(ar6[1] + 0x78,1,a6,ar7);
          puVar7 = PTR_s_GRAPHICS_COMMON_8c061450 + DAT_8c061454;
          uVar6 = 0;
          uVar2 = 2;
          (*(code *)PTR_FUN_8c06145c)((int)ar4 + DAT_8c061458,2,0,puVar7);
        }
        else {
          puVar7 = PTR_s_GRAPHICS_COMMON_8c0613ec + DAT_8c0613f0;
          uVar6 = 0;
          uVar2 = 2;
          (*(code *)PTR_FUN_8c0613f8)((int)ar4 + DAT_8c0613f4,2,0,puVar7);
        }
        (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],uVar2,uVar6,puVar7);
        ar4[0x1b] = (undefined *)0x0;
        ppuVar4 = (undefined **)0x6c;
      }
      break;
    case (undefined **)0x8:
      (**(code **)(DAT_8c06180c + *(int *)(*ar6 + 8)))(*ar6,0x35,a6,ar7);
      uVar2 = (**(code **)(DAT_8c061810 + *ar5))(ar5,a5,a6,ar7);
      *(undefined4 *)((int)&uStack_10c + DAT_8c061814) = uVar2;
      uVar2 = (*(code *)PTR_FUN_8c061818)(ar6[1],a5,a6,ar7);
      sStack_102 = (short)uVar2;
      uVar2 = (*(code *)PTR_get_field_140_025f70_8c06181c)(ar6[1],a5,a6,ar7);
      *(undefined4 *)((int)&uStack_10c + DAT_8c061820) = uVar2;
      uVar8 = 1;
      uVar6 = *(undefined4 *)((int)&uStack_10c + DAT_8c061820);
      iVar1 = (int)sStack_102;
      (*(code *)PTR_FUN_8c061824)(*(undefined4 *)((int)&uStack_10c + DAT_8c061814),iVar1,uVar6,1);
      uVar2 = (**(code **)(DAT_8c061810 + *ar5))(ar5,iVar1,uVar6,uVar8);
      *(undefined4 *)((int)&uStack_10c + DAT_8c061828) = uVar2;
      uVar2 = (*(code *)PTR_FUN_8c061818)(ar6[1],PTR_FUN_8c061818,uVar6,uVar8);
      sStack_104 = (short)uVar2;
      uVar2 = (*(code *)PTR_get_field_140_025f70_8c06181c)
                        (ar6[1],PTR_get_field_140_025f70_8c06181c,uVar6,uVar8);
      *(undefined4 *)((int)&uStack_10c + DAT_8c06182c) = uVar2;
      uVar2 = (*(code *)PTR_FUN_8c061830)
                        (*(undefined4 *)((int)&uStack_10c + DAT_8c061828),(int)sStack_104,
                         1 - *(int *)((int)&uStack_10c + DAT_8c06182c),uVar8);
      uStack_10c._3_1_ = (char)uVar2;
      if (uStack_10c._3_1_ == '\x01') {
        ppuVar4 = (undefined **)0x1;
      }
      else {
        ar4[3] = ar4[3] + -1;
        *(int *)(DAT_8c061834 + (int)ar4) = *(int *)(DAT_8c061834 + (int)ar4) + 1;
        iVar1 = *ar5;
        ppuVar4 = ar4;
        ppuStack_dc = ar4;
        ppuStack_d8 = ar4;
        uVar2 = (**(code **)(DAT_8c061810 + iVar1))(ar5,iVar1,ar4,uVar8);
        *(undefined4 *)((int)&uStack_10c + DAT_8c061838) = uVar2;
        uVar2 = (*(code *)PTR_FUN_8c061818)(ar6[1],iVar1,ppuVar4,uVar8);
        sStack_106 = (short)uVar2;
        uVar2 = (*(code *)PTR_get_field_140_025f70_8c06181c)(ar6[1],iVar1,ppuVar4,uVar8);
        *(undefined4 *)((int)&uStack_10c + DAT_8c06183c) = uVar2;
        uVar2 = (*(code *)PTR_FUN_8c061840)
                          (*(undefined4 *)((int)&uStack_10c + DAT_8c061838),(int)sStack_106,
                           1 - *(int *)((int)&uStack_10c + DAT_8c06183c),uVar8);
        uStack_10c._2_1_ = (char)uVar2;
        if (uStack_10c._2_1_ == '\x01') {
          *(undefined4 *)(DAT_8c061834 + (int)ar4) = 0;
        }
        ppuVar4 = *(undefined ***)(DAT_8c061834 + (int)ar4);
        if (DAT_8c061844 < (int)*(undefined ***)(DAT_8c061834 + (int)ar4)) {
          uVar6 = 0;
          *(undefined4 *)(DAT_8c061834 + (int)ar4) = 0;
          uVar2 = (**(code **)(DAT_8c061810 + *ar5))(ar5,*ar5,0,uVar8);
          *(undefined4 *)((int)&uStack_10c + DAT_8c061848) = uVar2;
          puVar7 = PTR_FUN_8c061818;
          uVar2 = (*(code *)PTR_FUN_8c061818)(ar6[1],PTR_FUN_8c061818,uVar6,uVar8);
          sStack_108 = (short)uVar2;
          uVar2 = (*(code *)PTR_get_field_140_025f70_8c06181c)(ar6[1],puVar7,uVar6,uVar8);
          *(undefined4 *)((int)&uStack_10c + DAT_8c06184c) = uVar2;
          uVar6 = 0;
          uVar2 = *(undefined4 *)((int)&uStack_10c + DAT_8c06184c);
          (*(code *)PTR_FUN_8c061824)
                    (*(undefined4 *)((int)&uStack_10c + DAT_8c061848),(int)sStack_108,uVar2,0);
          ar4[0x10] = (undefined *)0x0;
          ar4[1] = (undefined *)0x0;
          ar4[2] = (undefined *)0x5;
          ar4[3] = (undefined *)0x0;
          ar4[0x10] = (undefined *)0x0;
          *(undefined1 *)(DAT_8c061828 + (int)ar4) = 4;
          ppuVar4 = (undefined **)(*(code *)PTR_FUN_8c061854)(ar6[1] + DAT_8c061850,1,uVar2,uVar6);
        }
      }
      break;
    case (undefined **)0x9:
      uVar2 = (*(code *)PTR_get_field_140_025f70_8c0618f4)(ar6[1],0x35,a6,ar7);
      *(undefined4 *)((int)&uStack_10c + DAT_8c0618f8) = uVar2;
      if (*(int *)((int)&uStack_10c + DAT_8c0618f8) == 1) {
        *(undefined1 *)(DAT_8c0618fc + (int)ar4) = 4;
        a5 = 1;
        (*(code *)PTR_FUN_8c061904)(ar6[1] + DAT_8c061900,1,a6,ar7);
        (**(code **)(DAT_8c061908 + *(int *)(*ar6 + 8)))(*ar6,a5,a6,ar7);
      }
      iStack_90 = (*(code *)PTR_get_field_140_025f70_8c0618f4)(ar6[1],a5,a6,ar7);
      if (iStack_90 == 0) {
        ar7 = PTR_s_GRAPHICS_COMMON_8c06190c + DAT_8c061910;
        a6 = (int *)0x0;
        (*(code *)PTR_FUN_8c061918)((int)ar4 + DAT_8c061914,9,0,ar7);
        *(undefined1 *)(DAT_8c0618fc + (int)ar4) = 4;
      }
      uVar2 = 1;
      iVar1 = ar6[1] + DAT_8c061900;
      (*(code *)PTR_FUN_8c06191c)(iVar1,1,a6,ar7);
      ppuVar4 = (undefined **)(*(code *)PTR_FUN_8c061920)(iVar1,uVar2,a6,ar7);
      break;
    case (undefined **)0xb:
      if (*(int *)(DAT_8c061c58 + (int)ar4) == -1) {
        ppuVar4 = (undefined **)0xffffffff;
      }
      else {
        ppuVar4 = (undefined **)
                  (*(code *)PTR_FUN_8c061c60)
                            ((int)ar4 + DAT_8c061c5c,2,*(int *)(DAT_8c061c58 + (int)ar4),ar7);
      }
      break;
    case (undefined **)0xf:
      uVar2 = (*(code *)PTR_FUN_8c06150c)(ar4,0x35,a6,ar7);
      *(undefined4 *)((int)&uStack_10c + DAT_8c061510) = uVar2;
      if (*(int *)((int)&uStack_10c + DAT_8c061510) == 1) {
        uVar2 = (*(code *)PTR_get_field_6c_02f46c_8c061514)(ar4[0x1b],a5,a6,ar7);
        *(undefined4 *)((int)&uStack_10c + DAT_8c061518) = uVar2;
        uVar2 = (*(code *)PTR_FUN_8c06151c)
                          (ar4[0x1b],*(undefined4 *)((int)&uStack_10c + DAT_8c061518),a6,ar7);
        *(undefined4 *)((int)&uStack_10c + DAT_8c061520) = uVar2;
        uVar2 = *(undefined4 *)((int)&uStack_10c + DAT_8c061520);
        (*(code *)PTR_FUN_8c061524)(ar6[1],uVar2,a6,ar7);
        (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],uVar2,a6,ar7);
        a6 = (int *)0x0;
        ar4[0x1b] = (undefined *)0x0;
      }
      piVar10 = (int *)0x0;
      while( true ) {
        uVar2 = (**(code **)(DAT_8c06163c + *ar5))(ar5,5,a6,ar7);
        *(undefined4 *)((int)&uStack_10c + DAT_8c061640) = uVar2;
        if (*(int *)((int)&uStack_10c + DAT_8c061640) <= (int)piVar10) break;
        uVar6 = 5;
        uVar2 = (**(code **)(DAT_8c06161c + *ar5))(ar5,5,piVar10,ar7);
        *(undefined4 *)((int)&uStack_10c + DAT_8c061620) = uVar2;
        a6 = *(int **)(*(int *)((int)&uStack_10c + DAT_8c061620) + 8);
        uVar2 = (**(code **)(DAT_8c061624 + (int)a6))
                          (*(int *)((int)&uStack_10c + DAT_8c061620),uVar6,a6,ar7);
        *(undefined4 *)((int)&uStack_10c + DAT_8c061628) = uVar2;
        if (*(int *)((int)&uStack_10c + DAT_8c061628) == 6) {
          uVar6 = 5;
          a6 = piVar10;
          uVar2 = (**(code **)(DAT_8c06161c + *ar5))(ar5,5,piVar10,ar7);
          *(undefined4 *)((int)&uStack_10c + DAT_8c06162c) = uVar2;
          uVar2 = (**(code **)(DAT_8c06162c +
                              *(int *)(*(int *)((int)&uStack_10c + DAT_8c06162c) + 8)))
                            (*(int *)((int)&uStack_10c + DAT_8c06162c),uVar6,a6,ar7);
          *(undefined4 *)((int)&uStack_10c + DAT_8c061630) = uVar2;
          if (*(int *)((int)&uStack_10c + DAT_8c061630) == 1) {
            uVar6 = 5;
            a6 = piVar10;
            uVar2 = (**(code **)(DAT_8c06161c + *ar5))(ar5,5,piVar10,ar7);
            *(undefined4 *)((int)&uStack_10c + DAT_8c061634) = uVar2;
            uVar2 = (**(code **)(DAT_8c061628 +
                                *(int *)(*(int *)((int)&uStack_10c + DAT_8c061634) + 8)))
                              (*(int *)((int)&uStack_10c + DAT_8c061634),uVar6,a6,ar7);
            *(undefined4 *)((int)&uStack_10c + DAT_8c061638) = uVar2;
            if (*(int *)((int)&uStack_10c + DAT_8c061638) == 0) {
              iVar9 = iVar9 + 1;
            }
          }
        }
        piVar10 = (int *)((int)piVar10 + 1);
      }
      if (iVar9 == 2) {
        (*(code *)PTR_FUN_8c061644)(ar6[3],3,a6,ar7);
      }
      ppuVar4 = (undefined **)(*(code *)PTR_FUN_8c061648)(ar6[3],0,a6,ar7);
      break;
    case (undefined **)0x13:
      *(undefined1 *)(DAT_8c061ca8 + (int)ar4) = 7;
      uStack_cc = (*(code *)PTR_get_field_13c_028d9c_8c061cac)(ar6[1],0x35,a6,ar7);
      ppuVar4 = (undefined **)(*(code *)PTR_FUN_8c061cb0)(ar6[6],0x22,uStack_cc,ar7);
      break;
    case (undefined **)0x14:
      ppuVar4 = (undefined **)
                (*(code *)PTR_FUN_8c061498)
                          ((int)ar4 + DAT_8c061494,0x1f,*(undefined4 *)(DAT_8c061490 + (int)ar4),
                           PTR_s_GRAPHICS_COMMON_8c061488 + DAT_8c06148c);
      break;
    case (undefined **)0x17:
      (*(code *)PTR_FUN_8c061f24)(ar6[1] + DAT_8c061f20,1,a6,ar7);
      (*(code *)PTR_FUN_8c061f28)(ar6[1] + DAT_8c061f20,1,a6,ar7);
      (*(code *)PTR_FUN_8c061f2c)(ar6[1] + 0x60,0,a6,ar7);
      if (*(int *)(DAT_8c061f30 + (int)ar4) == 1) {
        *(undefined1 *)((int)DAT_8c061f34 + (int)ar4) = 9;
      }
      if (((*(int *)(DAT_8c061f38 + (int)ar4) == -1) && (*(int *)(DAT_8c061f30 + (int)ar4) != 1)) &&
         (*(char *)(DAT_8c061f3c + (int)ar4) == '\x02')) {
        (*(code *)PTR_FUN_8c061f44)((int)ar4 + DAT_8c061f40,0,a6,ar7);
        puVar7 = PTR_s_GRAPHICS_COMMON_8c061f48 + DAT_8c061f50;
        (*(code *)PTR_FUN_8c061f54)((int)ar4 + DAT_8c061f40,0x2a,0,puVar7);
        *(undefined4 *)(DAT_8c061f58 + (int)ar4) = 0;
        uStack_d0 = (*(code *)PTR_FUN_8c061f64)
                              (DAT_8c061f60,*(undefined4 *)(DAT_8c061f5c + (int)ar4),
                               (int)ar4 + DAT_8c061f40,puVar7);
        *(undefined4 *)(DAT_8c061f38 + (int)ar4) = uStack_d0;
        *(undefined4 *)(DAT_8c061f68 + (int)ar4) = 1;
      }
      if ((*(char *)(DAT_8c061f3c + (int)ar4) == '\x02') &&
         (*(int *)(DAT_8c061f38 + (int)ar4) != -1)) {
        ar4[1] = (undefined *)0xd;
        ar4[2] = (undefined *)0x5f;
        ar4[3] = (undefined *)0x0;
        uStack_f0 = 0x30;
        *(undefined4 *)(DAT_8c061f6c + (int)ar4) = 0x30;
        *(undefined4 *)(PTR_DAT_8c061f70 + DAT_8c061f40) = 0x30;
        uStack_f4 = 0x36;
        *(undefined4 *)(DAT_8c061f74 + (int)ar4) = 0x36;
        *(undefined4 *)(PTR_DAT_8c061f70 + DAT_8c061f78) = 0x36;
        uStack_f8 = 0x36;
        *(undefined4 *)(DAT_8c061f7c + (int)ar4) = 0x36;
        *(undefined4 *)(PTR_DAT_8c061f70 + DAT_8c061f80) = 0x36;
        a7 = PTR_Vec3_ctor_copy_8c061f88;
        (*(code *)PTR_Vec3_ctor_copy_8c061f88)
                  ((int)&uStack_10c + DAT_8c061f84,ar6[5] + 0x10,ar6[5],PTR_Vec3_ctor_copy_8c061f88)
        ;
        puVar7 = PTR_Vec3_assign_wrap_05f640_8c061f8c;
        (*(code *)PTR_Vec3_assign_wrap_05f640_8c061f8c)
                  (ar4,(int)&uStack_10c + DAT_8c061f84,PTR_Vec3_assign_wrap_05f640_8c061f8c,a7);
        (*(code *)PTR_Vec3_dtor_8c061f90)((int)&uStack_10c + DAT_8c061f84,0xffffffff,puVar7,a7);
        if (in_FPSCR_SZ == '\0') {
          ar4[0x1e] = (undefined *)DAT_8c061f94;
        }
        else {
          *(ulonglong *)(ar4 + 0x1e) = CONCAT44(DAT_8c061f94._4_4_,(undefined *)DAT_8c061f94);
        }
        *(undefined1 *)(DAT_8c061f94._4_4_ + (int)ar4) = 0;
      }
      ppuVar4 = DAT_8c061f34;
      *(undefined1 *)((int)DAT_8c061f34 + (int)ar4) = 8;
      break;
    case (undefined **)0x18:
      *(undefined1 *)(DAT_8c061c74 + (int)ar4) = 2;
      ppuVar4 = (undefined **)(*(code *)PTR_FUN_8c061c78)(iVar1,0x35,a6,ar7);
      break;
    case (undefined **)0x1b:
      ppuVar4 = (undefined **)(*(code *)PTR_FUN_8c061d04)(ar6[3],3,ar6[3],ar7);
      break;
    case (undefined **)0x1c:
      (*(code *)PTR_FUN_8c061d54)(ar6[3],8,a6,ar7);
      ppuVar4 = (undefined **)
                (*(code *)PTR_FUN_8c061d64)
                          ((int)ar4 + DAT_8c061d60,0x1f,0,
                           PTR_s_GRAPHICS_COMMON_8c061d58 + DAT_8c061d5c);
      break;
    case (undefined **)0x1d:
      ppuVar4 = (undefined **)(*(code *)PTR_FUN_8c061d1c)(ar6[3],5,a6,ar7);
      break;
    case (undefined **)0x21:
    case (undefined **)0x25:
    case (undefined **)0x34:
      *(undefined4 *)(DAT_8c061a98 + (int)ar4) = 0;
      uStack_a8 = (**(code **)(DAT_8c061a9c + *ar5))(ar5,0x35,a6,ar7);
      uVar6 = 0;
      uVar2 = 0;
      (*(code *)PTR_FUN_8c061aa0)(uStack_a8,0,0,ar7);
      uStack_ac = (**(code **)(DAT_8c061a9c + *ar5))(ar5,uVar2,uVar6,ar7);
      ppuVar4 = (undefined **)(*(code *)PTR_FUN_8c061aa4)(uStack_ac,0,0,ar7);
      break;
    case (undefined **)0x22:
    case (undefined **)0x26:
    case (undefined **)0x35:
      *(undefined4 *)(DAT_8c061c1c + (int)ar4) = 0;
      uVar2 = (**(code **)(DAT_8c061c20 + *ar5))(ar5,0x35,a6,ar7);
      uVar8 = 0;
      uVar6 = 1;
      uStack_c4 = uVar2;
      (*(code *)PTR_FUN_8c061c24)(uVar2,1,0,uVar2);
      uStack_c8 = (**(code **)(DAT_8c061c20 + *ar5))(ar5,uVar6,uVar8,uVar2);
      uVar6 = 0;
      (*(code *)PTR_FUN_8c061c28)(uStack_c8,1,0,uVar2);
      ppuVar4 = (undefined **)(*(code *)PTR_FUN_8c061c2c)(ar6[3],4,uVar6,uVar2);
      break;
    case (undefined **)0x23:
    case (undefined **)0x27:
    case (undefined **)0x32:
      uStack_94 = (**(code **)(DAT_8c061a2c + *ar5))(ar5,0x35,a6,ar7);
      puVar7 = PTR_FUN_8c061a30;
      (*(code *)PTR_FUN_8c061a30)(uStack_94,0,1,PTR_FUN_8c061a30);
      iVar1 = *ar5;
      uStack_98 = (**(code **)(DAT_8c061a2c + iVar1))
                            (ar5,*(code **)(DAT_8c061a2c + iVar1),iVar1,puVar7);
      iStack_9c = (*(code *)PTR_FUN_8c061a34)(uStack_98,1,iVar1,puVar7);
      if (iStack_9c == 1) {
        ppuVar4 = (undefined **)0x1;
      }
      else {
        ar4[3] = ar4[3] + -1;
        ppuVar3 = DAT_8c061a38;
        *(int *)((int)DAT_8c061a38 + (int)ar4) = *(int *)((int)DAT_8c061a38 + (int)ar4) + 1;
        ppuVar4 = DAT_8c061a38;
        if (DAT_8c061a3c < *(int *)((int)DAT_8c061a38 + (int)ar4)) {
          *(undefined4 *)((int)DAT_8c061a38 + (int)ar4) = 0;
          ppuStack_e4 = ar4;
          ppuStack_e0 = ar4;
          uStack_a0 = (**(code **)(DAT_8c061a2c + *ar5))(ar5,ppuVar3,ar4,ppuVar3);
          uVar2 = 0;
          puVar7 = PTR_FUN_8c061a30;
          (*(code *)PTR_FUN_8c061a30)(uStack_a0,0,0,PTR_FUN_8c061a30);
          uStack_a4 = (**(code **)(DAT_8c061a2c + *ar5))
                                (ar5,uVar2,*(code **)(DAT_8c061a2c + *ar5),puVar7);
          (*(code *)PTR_FUN_8c061a40)(uStack_a4,0,0,puVar7);
          ar4[0x10] = (undefined *)0x0;
          ar4[1] = (undefined *)0x0;
          ar4[2] = (undefined *)0x5;
          ar4[3] = (undefined *)0x0;
          ar4[0x10] = (undefined *)0x0;
          ppuVar4 = (undefined **)0x40;
        }
      }
      break;
    case (undefined **)0x24:
    case (undefined **)0x28:
    case (undefined **)0x33:
      uStack_b0 = (**(code **)(DAT_8c061ba4 + *ar5))(ar5,0x35,a6,ar7);
      uVar2 = 1;
      (*(code *)PTR_FUN_8c061ba8)(uStack_b0,1,1,ar7);
      uStack_b4 = (**(code **)(DAT_8c061ba4 + *ar5))(ar5,*ar5,uVar2,ar7);
      iStack_b8 = (*(code *)PTR_FUN_8c061bac)(uStack_b4,0,uVar2,ar7);
      if (iStack_b8 == 1) {
        ppuVar4 = (undefined **)0x1;
      }
      else {
        ar4[3] = ar4[3] + -1;
        *(int *)((int)DAT_8c061bb0 + (int)ar4) = *(int *)((int)DAT_8c061bb0 + (int)ar4) + 1;
        iVar1 = DAT_8c061bb4;
        ppuVar4 = DAT_8c061bb0;
        if (DAT_8c061bb4 < *(int *)((int)DAT_8c061bb0 + (int)ar4)) {
          *(undefined4 *)((int)DAT_8c061bb0 + (int)ar4) = 0;
          ppuStack_ec = ar4;
          ppuStack_e8 = ar4;
          uStack_bc = (**(code **)(DAT_8c061ba4 + *ar5))(ar5,iVar1,uVar2,ar7);
          uVar6 = 0;
          uVar2 = 1;
          (*(code *)PTR_FUN_8c061ba8)(uStack_bc,1,0,ar7);
          uStack_c0 = (**(code **)(DAT_8c061ba4 + *ar5))(ar5,uVar2,uVar6,ar7);
          (*(code *)PTR_FUN_8c061bb8)(uStack_c0,1,0,ar7);
          ar4[0x10] = (undefined *)0x0;
          ar4[1] = (undefined *)0x0;
          ar4[2] = (undefined *)0x5;
          ar4[3] = (undefined *)0x0;
          ar4[0x10] = (undefined *)0x0;
          ppuVar4 = (undefined **)0x40;
        }
      }
      break;
    case (undefined **)0x29:
      ppuVar4 = (undefined **)
                (*(code *)PTR_FUN_8c061cec)(*(undefined4 *)(DAT_8c061ce8 + ar6[6]),1,a6,ar7);
      break;
    case (undefined **)0x30:
      ppuVar4 = (undefined **)ar4[3];
      ar4[3] = (undefined *)((int)ppuVar4 + -1);
      break;
    case (undefined **)0x31:
      (*(code *)PTR_FUN_8c061da0)(ar6[3],8,a6,ar7);
      ppuVar4 = (undefined **)
                (*(code *)PTR_FUN_8c061db0)
                          ((int)ar4 + DAT_8c061dac,0x1f,0,
                           PTR_s_GRAPHICS_COMMON_8c061da4 + DAT_8c061da8);
    }
  }
  return ppuVar4;
}



/* FUN_8c062048 @ 8c062048 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c062048(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c062050;
  *(undefined4 *)(DAT_8c062050 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c062054 @ 8c062054 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c062054(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c062068;
  *(undefined4 *)(DAT_8c062068 + ar4 + ar5 * 4) = ar6;
  return iVar1;
}



/* FUN_8c06206c @ 8c06206c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06206c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c062080 + ar4 + ar5 * 4);
}



/* FUN_8c062084 @ 8c062084 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c062084(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c062098;
  *(undefined4 *)(DAT_8c062098 + ar4 + ar5 * 4) = ar6;
  return iVar1;
}



/* FUN_8c06209c @ 8c06209c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06209c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 4) = (char)ar5;
  return ar5;
}



/* FUN_8c0620a4 @ 8c0620a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0620a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + (short)ar5 * 2 + (int)(short)ar6 + 0x75);
}



/* FUN_8c0620bc @ 8c0620bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0620bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + (short)ar5 * 2 + (int)(short)ar6 + 0x75) = (undefined1)ar7;
  return 0x75;
}



/* FUN_8c0620d4 @ 8c0620d4 callers=0 callees=0 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0620d4(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int a6;
  char cVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 in_dr0;
  undefined8 uVar8;
  undefined *puVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  char cStack_e8;
  char cStack_e7;
  short sStack_e6;
  short sStack_e4;
  undefined2 uStack_e2;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  uint uStack_90;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  
  iVar6 = 0;
  *(undefined4 *)((int)&cStack_e8 + DAT_8c0621e0) = 0;
  *(undefined4 *)((int)&cStack_e8 + DAT_8c0621e4) = 0;
  *(undefined4 *)((int)&cStack_e8 + DAT_8c0621e8) = 0;
  cVar5 = '\0';
  a6 = ar6;
  uVar1 = (*(code *)PTR_FUN_8c0621ec)(*(undefined4 *)(ar6 + 0x18),ar5,ar6,ar7);
  uStack_e2 = (undefined2)uVar1;
  uVar4 = 0x3c;
  uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c0621f0)(uVar1 & 0xffff,0x3c,a6,ar7);
  uStack_90 = uVar1;
  uVar2 = (*(code *)PTR_get_field_a0_035724_8c0621f4)(*(undefined4 *)(ar6 + 0x18),uVar4,a6,ar7);
  cStack_e7 = (char)uVar2;
  if (cStack_e7 == '\x02') {
    uVar2 = (*(code *)PTR_FUN_8c0621fc)(*(int *)(ar6 + 4) + DAT_8c0621f8,uVar4,a6,ar7);
    *(undefined4 *)((int)&cStack_e8 + DAT_8c062200) = uVar2;
    if (*(int *)((int)&cStack_e8 + DAT_8c062200) < 0x28) {
      (**(code **)(DAT_8c062204 + *ar5))(ar5,uVar4,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)&cStack_e8 + DAT_8c062208) = (int)((ulonglong)in_dr0 >> 0x20);
        uVar8 = CONCAT44(DAT_8c06220c,*(undefined4 *)((int)&cStack_e8 + DAT_8c062208));
      }
      else {
        *(undefined8 *)((int)&cStack_e8 + DAT_8c062208) = in_dr0;
        uVar8 = CONCAT44(_DAT_8c062210,DAT_8c06220c);
      }
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar8 >> 0x20) < (float)uVar8) {
        (**(code **)(DAT_8c062204 + *ar5))(ar5,uVar4,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)&cStack_e8 + _DAT_8c062210) = (int)((ulonglong)uVar8 >> 0x20);
          uVar8 = CONCAT44(DAT_8c062214,*(undefined4 *)((int)&cStack_e8 + _DAT_8c062210));
        }
        else {
          *(undefined8 *)((int)&cStack_e8 + _DAT_8c062210) = uVar8;
          uVar8 = CONCAT44(DAT_8c062218,DAT_8c062214);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar8 < (float)((ulonglong)uVar8 >> 0x20)) {
          (**(code **)(DAT_8c062218 + *ar5))(ar5,uVar4,a6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)&cStack_e8 + DAT_8c06221c) = (int)((ulonglong)uVar8 >> 0x20);
            puVar7 = *(undefined **)((int)&cStack_e8 + DAT_8c06221c);
            puVar9 = DAT_8c062220;
          }
          else {
            *(undefined8 *)((int)&cStack_e8 + DAT_8c06221c) = uVar8;
            puVar7 = DAT_8c062220;
            puVar9 = PTR_get_field_40_03598c_8c062224;
          }
          if (in_FPSCR_PR == '\0' && (float)puVar9 < (float)puVar7) {
            uVar2 = (*(code *)PTR_get_field_40_03598c_8c062224)
                              (*(undefined4 *)(ar6 + 0xc),uVar4,a6,ar7);
            *(undefined4 *)((int)&cStack_e8 + DAT_8c062228) = uVar2;
            if (*(int *)((int)&cStack_e8 + DAT_8c062228) == 0) {
              cVar5 = '\x01';
            }
          }
        }
      }
    }
  }
  else {
    uVar2 = (*(code *)PTR_get_field_a0_035724_8c062298)(*(undefined4 *)(ar6 + 0x18),uVar4,a6,ar7);
    cStack_e8 = (char)uVar2;
    if (cStack_e8 == '\x03') {
      cVar5 = '\x01';
    }
  }
  uVar2 = (*(code *)PTR_FUN_8c06229c)(*(undefined4 *)(ar6 + 4),uVar4,a6,ar7);
  sStack_e4 = (short)uVar2;
  iVar3 = 3;
  if ((3 < sStack_e4) && (iVar3 = (int)cVar5, iVar3 == 1)) {
    uVar2 = (*(code *)PTR_FUN_8c0622a0)(*(undefined4 *)(ar6 + 4),uVar4,a6,ar7);
    *(undefined4 *)((int)&cStack_e8 + DAT_8c0622a4) = uVar2;
    iVar3 = *(int *)((int)&cStack_e8 + DAT_8c0622a4);
    if ((iVar3 == -1) && (iVar3 = 0xf, 0xf < uVar1)) {
      iVar3 = 0;
      while( true ) {
        uVar2 = (**(code **)(DAT_8c0624f0 + *ar5))(ar5,5,a6,ar7);
        *(undefined4 *)((int)&cStack_e8 + DAT_8c0624f4) = uVar2;
        if (*(int *)((int)&cStack_e8 + DAT_8c0624f4) <= iVar3) break;
        uVar4 = 5;
        a6 = iVar3;
        uVar2 = (**(code **)(DAT_8c0624d0 + *ar5))(ar5,5,iVar3,ar7);
        *(undefined4 *)((int)&cStack_e8 + DAT_8c0624d4) = uVar2;
        uVar2 = (**(code **)(DAT_8c0624d8 + *(int *)(*(int *)((int)&cStack_e8 + DAT_8c0624d4) + 8)))
                          (*(int *)((int)&cStack_e8 + DAT_8c0624d4),uVar4,a6,ar7);
        *(undefined4 *)((int)&cStack_e8 + DAT_8c0624dc) = uVar2;
        if (*(int *)((int)&cStack_e8 + DAT_8c0624dc) == 1) {
          uVar4 = 5;
          a6 = iVar3;
          uVar2 = (**(code **)(DAT_8c0624d0 + *ar5))(ar5,5,iVar3,ar7);
          *(undefined4 *)((int)&cStack_e8 + DAT_8c0624e0) = uVar2;
          uVar2 = (**(code **)(DAT_8c0624e4 + *(int *)(*(int *)((int)&cStack_e8 + DAT_8c0624e0) + 8)
                              ))(*(int *)((int)&cStack_e8 + DAT_8c0624e0),uVar4,a6,ar7);
          *(undefined4 *)((int)&cStack_e8 + DAT_8c0624e8) = uVar2;
          if (*(int *)((int)&cStack_e8 + DAT_8c0624e8) == 7) {
            uVar2 = (*(code *)PTR_FUN_8c0624ec)(*(undefined4 *)(ar6 + 4),uVar4,a6,ar7);
            sStack_e6 = (short)uVar2;
            if (3 < sStack_e6) {
              iVar6 = iVar6 + 1;
            }
          }
        }
        iVar3 = iVar3 + 1;
      }
      iVar3 = 1;
      if (1 < iVar6) {
        uVar2 = (*(code *)PTR_FUN_8c0624f8)(*(undefined4 *)(ar6 + 0xc),0,a6,ar7);
        *(undefined4 *)((int)&cStack_e8 + DAT_8c0624fc) = uVar2;
        *(undefined4 *)((int)&cStack_e8 + DAT_8c062500) =
             *(undefined4 *)((int)&cStack_e8 + DAT_8c0624fc);
        *(undefined4 *)((int)&cStack_e8 + DAT_8c062504) = 0;
        *(undefined4 *)((int)&cStack_e8 + DAT_8c062508) = *(undefined4 *)(ar4 + 0x40);
        uVar4 = 0;
        uVar2 = (*(code *)PTR_FUN_8c0624f8)(*(undefined4 *)(ar6 + 0xc),0,a6,ar7);
        *(undefined4 *)((int)&cStack_e8 + DAT_8c06250c) = uVar2;
        if ((*(int *)((int)&cStack_e8 + DAT_8c06250c) == 0) && (*(int *)(ar4 + 0x40) == 0)) {
          uVar2 = (**(code **)(DAT_8c062510 + *ar5))(ar5,uVar4,a6,ar7);
          *(undefined4 *)((int)&cStack_e8 + DAT_8c062514) = uVar2;
          uVar2 = (*(code *)PTR_get_field_ac_062880_8c062518)
                            (*(undefined4 *)((int)&cStack_e8 + DAT_8c062514),uVar4,a6,ar7);
          *(undefined4 *)((int)&cStack_e8 + DAT_8c06251c) = uVar2;
          if (*(int *)((int)&cStack_e8 + DAT_8c06251c) == 4) {
            uVar2 = *(undefined4 *)(ar6 + 8);
            iStack_6c = (*(code *)PTR_get_field_178_035734_8c062520)(uVar2,uVar4,a6,ar7);
            if (iStack_6c == 0) {
              uStack_70 = (*(code *)PTR_rand_8c062524)(uVar2,uVar4,a6,ar7);
              uVar2 = 0x1e;
              iStack_94 = (*(code *)PTR_libgcc_divide_helper_01031c_8c062528)(uStack_70,0x1e,a6,ar7)
              ;
              if ((iStack_94 == 1) &&
                 (iStack_74 = (*(code *)PTR_get_field_4_062878_8c06252c)
                                        (*(undefined4 *)(ar6 + 0xc),uVar2,a6,ar7), iStack_74 == 1))
              {
                *(undefined4 *)(ar4 + 0x38) = 1;
                (*(code *)PTR_FUN_8c062530)(*(undefined4 *)(ar6 + 0xc),0,1,ar7);
                a6 = 0;
                (*(code *)PTR_FUN_8c062530)(*(undefined4 *)(ar6 + 0xc),1,0,ar7);
                *(undefined4 *)(ar4 + 4) = 0xd;
                *(undefined4 *)(ar4 + 8) = 0x5f;
                *(undefined4 *)(ar4 + 0xc) = 0;
                uVar2 = 0;
                iVar6 = *(int *)(ar6 + 4) + DAT_8c0624f4;
                (*(code *)PTR_FUN_8c062534)(iVar6,0,a6,ar7);
                uStack_78 = (*(code *)PTR_rand_8c062524)(iVar6,uVar2,a6,ar7);
                uVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c062528)(uStack_78,3,a6,ar7);
                uStack_98 = uVar2;
                (*(code *)PTR_FUN_8c062538)(*(undefined4 *)(ar6 + 0xc),uVar2,a6,ar7);
                iStack_7c = (*(code *)PTR_get_field_ac_062880_8c062518)
                                      (*(undefined4 *)(ar6 + 0xc),uVar2,a6,ar7);
                if (iStack_7c == 0) {
                  *(undefined4 *)(ar4 + 0x40) = 0x23;
                  uStack_9c = 0x23;
                  *(undefined4 *)(DAT_8c0625a0 + ar4) = 0x23;
                  *(undefined4 *)(PTR_DAT_8c0625a4 + DAT_8c0625a8) = 0x23;
                  uStack_a0 = 0x21;
                  *(undefined4 *)(DAT_8c0625ac + ar4) = 0x21;
                  *(undefined4 *)(PTR_DAT_8c0625a4 + DAT_8c0625b0) = 0x21;
                  uStack_a4 = 0x36;
                  *(undefined4 *)(DAT_8c0625b4 + ar4) = 0x36;
                  *(undefined4 *)(PTR_DAT_8c0625a4 + DAT_8c0625b8) = 0x36;
                }
                else if (iStack_7c == 1) {
                  *(undefined4 *)(ar4 + 0x40) = 0x27;
                  uStack_a8 = 0x27;
                  *(undefined4 *)(DAT_8c062608 + ar4) = 0x27;
                  *(undefined4 *)(PTR_DAT_8c06260c + DAT_8c062610) = 0x27;
                  uStack_ac = 0x25;
                  *(undefined4 *)(DAT_8c062614 + ar4) = 0x25;
                  *(undefined4 *)(PTR_DAT_8c06260c + DAT_8c062618) = 0x25;
                  uStack_b0 = 0x36;
                  *(undefined4 *)(DAT_8c06261c + ar4) = 0x36;
                  *(undefined4 *)(PTR_DAT_8c06260c + DAT_8c062620) = 0x36;
                }
                else if (iStack_7c == 2) {
                  *(undefined4 *)(ar4 + 0x40) = 0x32;
                  uStack_b4 = 0x32;
                  *(undefined4 *)(DAT_8c062710 + ar4) = 0x32;
                  *(undefined4 *)(PTR_DAT_8c062714 + DAT_8c062718) = 0x32;
                  uStack_b8 = 0x34;
                  *(undefined4 *)(DAT_8c06271c + ar4) = 0x34;
                  *(undefined4 *)(PTR_DAT_8c062714 + DAT_8c062720) = 0x34;
                  uStack_bc = 0x36;
                  *(undefined4 *)(DAT_8c062724 + ar4) = 0x36;
                  *(undefined4 *)(PTR_DAT_8c062714 + DAT_8c062728) = 0x36;
                }
              }
            }
          }
        }
        uVar2 = 0;
        iVar3 = (*(code *)PTR_FUN_8c06272c)(*(undefined4 *)(ar6 + 0xc),0,a6,ar7);
        if ((((iVar3 == 1) &&
             (iStack_80 = iVar3,
             iVar3 = (*(code *)PTR_get_field_178_035734_8c062730)
                               (*(undefined4 *)(ar6 + 8),uVar2,a6,ar7), iVar3 == 0)) &&
            (iStack_84 = iVar3,
            iStack_88 = (*(code *)PTR_FUN_8c06272c)(*(undefined4 *)(ar6 + 0xc),1,a6,ar7),
            iVar3 = iStack_88, iStack_88 == 0)) &&
           (iVar3 = *(int *)(ar4 + 0x40), *(int *)(ar4 + 0x40) == 0)) {
          (*(code *)PTR_FUN_8c062738)(*(int *)(ar6 + 4) + DAT_8c062734,0,a6,ar7);
          *(undefined4 *)(ar4 + 0x38) = 1;
          uVar4 = 1;
          uVar2 = 1;
          (*(code *)PTR_FUN_8c06273c)(*(undefined4 *)(ar6 + 0xc),1,1,ar7);
          *(undefined4 *)(ar4 + 4) = 0xd;
          *(undefined4 *)(ar4 + 8) = 0x5f;
          *(undefined4 *)(ar4 + 0xc) = 0;
          iVar3 = (*(code *)PTR_get_field_ac_062880_8c062740)
                            (*(undefined4 *)(ar6 + 0xc),uVar2,uVar4,ar7);
          if (iVar3 == 0) {
            *(undefined4 *)(ar4 + 0x40) = 0x24;
            *(undefined4 *)(DAT_8c062788 + ar4) = 0x24;
            *(undefined4 *)(PTR_DAT_8c06278c + DAT_8c062790) = 0x24;
            *(undefined4 *)(DAT_8c062794 + ar4) = 0x22;
            *(undefined4 *)(PTR_DAT_8c06278c + DAT_8c062798) = 0x22;
            *(undefined4 *)(DAT_8c06279c + ar4) = 0x36;
            iVar3 = DAT_8c0627a0;
            *(undefined4 *)(PTR_DAT_8c06278c + DAT_8c0627a0) = 0x36;
          }
          else if (iVar3 == 1) {
            *(undefined4 *)(ar4 + 0x40) = 0x28;
            *(undefined4 *)(DAT_8c0627e8 + ar4) = 0x28;
            *(undefined4 *)(PTR_DAT_8c0627ec + DAT_8c0627f0) = 0x28;
            *(undefined4 *)(DAT_8c0627f4 + ar4) = 0x26;
            *(undefined4 *)(PTR_DAT_8c0627ec + DAT_8c0627f8) = 0x26;
            *(undefined4 *)(DAT_8c0627fc + ar4) = 0x36;
            iVar3 = DAT_8c062800;
            *(undefined4 *)(PTR_DAT_8c0627ec + DAT_8c062800) = 0x36;
          }
          else if (iVar3 == 2) {
            *(undefined4 *)(ar4 + 0x40) = 0x33;
            *(undefined4 *)(DAT_8c06285c + ar4) = 0x33;
            *(undefined4 *)(PTR_DAT_8c062860 + DAT_8c062864) = 0x33;
            *(undefined4 *)(DAT_8c062868 + ar4) = 0x35;
            *(undefined4 *)(PTR_DAT_8c062860 + DAT_8c06286c) = 0x35;
            *(undefined4 *)(DAT_8c062870 + ar4) = 0x36;
            iVar3 = DAT_8c062874;
            *(undefined4 *)(PTR_DAT_8c062860 + DAT_8c062874) = 0x36;
          }
        }
      }
    }
  }
  return iVar3;
}



/* get_field_4_062878 @ 8c062878 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_4_062878(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}



/* get_field_ac_062880 @ 8c062880 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_ac_062880(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c062888 + ar4);
}



/* FUN_8c06288c @ 8c06288c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06288c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0628a0 + ar4 + ar5 * 4);
}



/* s_REACTION_TEMP_LACK_0628aa @ 8c0628a4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * s_REACTION_TEMP_LACK_0628aa(int ar4,int *ar5,int ar6,undefined *ar7)

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
  if ((*(int *)(DAT_8c062ab0 + ar4) == 0) &&
     (iVar1 = (**(code **)(DAT_8c062ab4 + *ar5))(ar5,0,ar6,ar7),
     *(int *)(DAT_8c062ab8 + ar4) != iVar1)) {
    uVar4 = 0;
    uVar2 = (**(code **)(DAT_8c062ab4 + *ar5))(ar5,0,a6,ar7);
    *(undefined4 *)(DAT_8c062ab8 + ar4) = uVar2;
    if (*(int *)(DAT_8c062ab8 + ar4) == 0) {
      (**(code **)(DAT_8c062abc + *ar5))(ar5,uVar4,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44(DAT_8c062ac0,(int)(in_dr0 >> 0x20));
      }
      else {
        in_dr0 = CONCAT44(_DAT_8c062ac4,DAT_8c062ac0);
      }
      if (in_FPSCR_PR != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) {
        (**(code **)(DAT_8c062abc + *ar5))(ar5,uVar4,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = CONCAT44(_DAT_8c062ac4,(int)(in_dr0 >> 0x20));
        }
        else {
          in_dr0 = CONCAT44(PTR_FUN_8c062ac8,_DAT_8c062ac4);
        }
        if ((in_FPSCR_PR != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) &&
           (uVar2 = (*(code *)PTR_FUN_8c062ac8)(*(undefined4 *)(ar6 + 0x18),uVar4,a6,ar7),
           2 < (ushort)uVar2)) {
          ar7 = PTR_s_GRAPHICS_COMMON_8c062acc + DAT_8c062ad0;
          a6 = 0;
          (*(code *)PTR_FUN_8c062ad8)(ar4 + DAT_8c062ad4,0x2c,0,ar7);
          *(undefined4 *)(DAT_8c062ab0 + ar4) = 1;
        }
      }
    }
  }
  if (*(int *)(DAT_8c062adc + ar4) == 0) {
    uVar2 = 0;
    iVar1 = (**(code **)(DAT_8c062ae0 + *ar5))(ar5,0,a6,ar7);
    if (iVar1 == 2) {
      (**(code **)(DAT_8c062abc + *ar5))(ar5,uVar2,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44(DAT_8c062ae4,(int)(in_dr0 >> 0x20));
      }
      else {
        in_dr0 = CONCAT44(_DAT_8c062ae8,DAT_8c062ae4);
      }
      if ((in_FPSCR_PR != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) &&
         (uVar2 = (*(code *)PTR_FUN_8c062ac8)(*(undefined4 *)(ar6 + 0x18),uVar2,a6,ar7),
         2 < (ushort)uVar2)) {
        ar7 = PTR_s_GRAPHICS_COMMON_8c062acc + _DAT_8c062ae8;
        a6 = 0;
        (*(code *)PTR_FUN_8c062ad8)(ar4 + DAT_8c062ad4,0x2c,0,ar7);
        *(undefined4 *)(DAT_8c062adc + ar4) = 1;
      }
    }
  }
  puVar3 = *(undefined4 **)((int)DAT_8c062aec + ar4);
  if ((puVar3 == (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)(**(code **)(DAT_8c062ab4 + *ar5))(ar5,1,a6,ar7),
     *(undefined4 **)(DAT_8c062af0 + ar4) != puVar3)) {
    uVar4 = 1;
    uVar2 = (**(code **)(DAT_8c062ab4 + *ar5))(ar5,1,a6,ar7);
    *(undefined4 *)(DAT_8c062af0 + ar4) = uVar2;
    puVar3 = *(undefined4 **)(DAT_8c062af0 + ar4);
    if (puVar3 == (undefined4 *)0x0) {
      (**(code **)(DAT_8c062af4 + *ar5))(ar5,uVar4,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = in_dr0 >> 0x20;
      }
      puVar3 = &DAT_8c062af8;
      fVar5 = DAT_8c062af8;
      fVar6 = _DAT_8c062afc;
      if (in_FPSCR_SZ == '\0') {
        fVar5 = (float)in_dr0;
        fVar6 = DAT_8c062af8;
      }
      if (in_FPSCR_PR != '\0' || fVar6 <= fVar5) {
        (**(code **)(DAT_8c062af4 + *ar5))(ar5,uVar4,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          fVar5 = fVar6;
        }
        puVar3 = (undefined4 *)&DAT_8c062afc;
        fVar6 = _DAT_8c062afc;
        fVar7 = _DAT_8c062b00;
        if (in_FPSCR_SZ == '\0') {
          fVar6 = fVar5;
          fVar7 = _DAT_8c062afc;
        }
        if (in_FPSCR_PR != '\0' || fVar6 <= fVar7) {
          uVar2 = (*(code *)PTR_FUN_8c062ac8)(*(undefined4 *)(ar6 + 0x18),uVar4,a6,ar7);
          puVar3 = (undefined4 *)0x3;
          if (2 < (ushort)uVar2) {
            (*(code *)PTR_FUN_8c062ad8)
                      (ar4 + DAT_8c062ad4,0x2c,0,PTR_s_GRAPHICS_COMMON_8c062acc + (int)_DAT_8c062b00
                      );
            puVar3 = DAT_8c062aec;
            *(undefined4 *)((int)DAT_8c062aec + ar4) = 1;
          }
        }
      }
    }
  }
  return puVar3;
}



/* ret_const_0_062b04 @ 8c062b04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_062b04(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* s_REACTION_WAKED_TAP_062b14 @ 8c062b0c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int s_REACTION_WAKED_TAP_062b14(int ar4,int *ar5,undefined *ar6,undefined *ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int a5;
  undefined *puVar5;
  undefined *puVar6;
  float fVar7;
  undefined8 in_dr0;
  undefined8 uVar8;
  float fVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_150;
  char cStack_14c;
  char cStack_14b;
  short sStack_14a;
  short sStack_148;
  undefined2 uStack_146;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  int iStack_d4;
  
  piVar3 = ar5;
  puVar6 = ar6;
  if (((*(char *)(DAT_8c062b8c + ar4) == '\x01') && (1 < *(int *)(DAT_8c062b90 + ar4))) &&
     (*(int *)(ar4 + 4) != 0xd)) {
    uVar2 = (*(code *)PTR_get_field_124_027930_8c062b94)(*(undefined4 *)(ar6 + 8),ar5,ar6,ar7);
    *(undefined4 *)((int)&uStack_150 + DAT_8c062b98) = uVar2;
    if (*(int *)((int)&uStack_150 + DAT_8c062b98) == 0) {
      uVar2 = (*(code *)PTR_get_field_13c_028d9c_8c062b9c)
                        (*(undefined4 *)(ar6 + 4),piVar3,puVar6,ar7);
      *(undefined4 *)((int)&uStack_150 + DAT_8c062ba0) = uVar2;
      if (*(int *)((int)&uStack_150 + DAT_8c062ba0) == 6) {
        uVar1 = (*(code *)PTR_FUN_8c062d00)(*(undefined4 *)(ar6 + 0x18),piVar3,puVar6,ar7);
        uStack_146 = (undefined2)uVar1;
        puVar6 = (undefined *)0xd;
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        piVar3 = (int *)0x3c;
        iStack_f8 = (*(code *)PTR_libgcc_divide_helper_010284_8c062d04)(uVar1 & 0xffff,0x3c,0xd,ar7)
        ;
        if (iStack_f8 == 0) {
          *(undefined4 *)(ar4 + 0x40) = 0x11;
          uStack_fc = 0x11;
          *(undefined4 *)(DAT_8c062d6c + ar4) = 0x11;
          *(undefined4 *)(PTR_DAT_8c062d70 + DAT_8c062d74) = 0x11;
          uStack_100 = 0x36;
          *(undefined4 *)(DAT_8c062d78 + ar4) = 0x36;
          *(undefined4 *)(PTR_DAT_8c062d70 + DAT_8c062d7c) = 0x36;
          uStack_104 = 0x36;
          *(undefined4 *)(DAT_8c062d80 + ar4) = 0x36;
          *(undefined4 *)(PTR_DAT_8c062d70 + DAT_8c062d84) = 0x36;
        }
        else if (iStack_f8 == 1) {
          *(undefined4 *)(ar4 + 0x40) = 0xb;
          uStack_108 = 0xb;
          *(undefined4 *)(DAT_8c062dec + ar4) = 0xb;
          *(undefined4 *)(PTR_DAT_8c062df0 + DAT_8c062df4) = 0xb;
          uStack_10c = 0x2c;
          *(undefined4 *)(DAT_8c062df8 + ar4) = 0x2c;
          *(undefined4 *)(PTR_DAT_8c062df0 + DAT_8c062dfc) = 0x2c;
          uStack_110 = 0x36;
          *(undefined4 *)(DAT_8c062e00 + ar4) = 0x36;
          *(undefined4 *)(PTR_DAT_8c062df0 + DAT_8c062e04) = 0x36;
          piVar3 = (int *)0x36;
        }
        else {
          (*(code *)PTR_Vec3_ctor_copy_8c062eb8)
                    ((int)&uStack_150 + DAT_8c062eb4,*(int *)(ar6 + 0x14) + 0x10,puVar6,ar7);
          uVar2 = (undefined4)in_dr0;
          (*(code *)PTR_Vec3_assign_wrap_063818_8c062ebc)
                    (ar4,(int)&uStack_150 + DAT_8c062eb4,puVar6,ar7);
          (*(code *)PTR_Vec3_dtor_8c062ec0)((int)&uStack_150 + DAT_8c062eb4,0xffffffff,puVar6,ar7);
          (*(code *)PTR_Vec3_ctor_copy_8c062eb8)
                    ((int)&uStack_150 + DAT_8c062ec4,*(int *)(ar6 + 0x14) + 0x10,puVar6,ar7);
          (*(code *)PTR_Vec3_assign_wrap_05f640_8c062ec8)
                    (ar4,(int)&uStack_150 + DAT_8c062ec4,puVar6,ar7);
          piVar3 = (int *)0xffffffff;
          (*(code *)PTR_Vec3_dtor_8c062ec0)((int)&uStack_150 + DAT_8c062ec4,0xffffffff,puVar6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x30) = (undefined4)DAT_8c062ecc;
            in_dr0 = CONCAT44(DAT_8c062ecc._4_4_,uVar2);
            *(undefined4 *)(ar4 + 0x78) = DAT_8c062ecc._4_4_;
          }
          else {
            *(undefined8 *)(ar4 + 0x30) = CONCAT44(DAT_8c062ecc._4_4_,(undefined4)DAT_8c062ecc);
            in_dr0 = CONCAT44(DAT_8c062ed4,DAT_8c062ecc._4_4_);
            *(undefined8 *)(ar4 + 0x78) = in_dr0;
          }
          *(undefined4 *)(ar4 + 0x40) = 0x12;
          uStack_114 = 0x12;
          *(undefined4 *)(DAT_8c062ed4 + ar4) = 0x12;
          *(undefined4 *)(PTR_DAT_8c062ed8 + DAT_8c062edc) = 0x12;
          uStack_118 = 0x36;
          *(undefined4 *)(DAT_8c062ee0 + ar4) = 0x36;
          *(undefined4 *)(PTR_DAT_8c062ed8 + DAT_8c062ee4) = 0x36;
          uStack_11c = 0x36;
          *(undefined4 *)(DAT_8c062ee8 + ar4) = 0x36;
          *(undefined4 *)(PTR_DAT_8c062ed8 + DAT_8c062eec) = 0x36;
        }
      }
      else if (*(int *)((int)&uStack_150 + DAT_8c062ba0) == 7) {
        puVar5 = PTR_Vec3_ctor_copy_8c062c84;
        (*(code *)PTR_Vec3_ctor_copy_8c062c84)
                  ((int)&uStack_150 + DAT_8c062c80,*(int *)(ar6 + 0x14) + 0x10,puVar6,
                   PTR_Vec3_ctor_copy_8c062c84);
        uVar2 = (undefined4)in_dr0;
        puVar6 = (undefined *)((int)&uStack_150 + DAT_8c062c80);
        (*(code *)PTR_Vec3_assign_wrap_063818_8c062c88)(ar4,puVar6,puVar6,puVar5);
        (*(code *)PTR_Vec3_dtor_8c062c8c)((int)&uStack_150 + DAT_8c062c80,0xffffffff,puVar6,puVar5);
        (*(code *)PTR_Vec3_ctor_copy_8c062c84)
                  ((int)&uStack_150 + DAT_8c062c90,*(int *)(ar6 + 0x14) + 0x10,puVar6,puVar5);
        (*(code *)PTR_Vec3_assign_wrap_05f640_8c062c94)
                  (ar4,(int)&uStack_150 + DAT_8c062c90,puVar6,puVar5);
        (*(code *)PTR_Vec3_dtor_8c062c8c)((int)&uStack_150 + DAT_8c062c90,0xffffffff,puVar6,puVar5);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x30) = (undefined4)DAT_8c062c98;
          in_dr0 = CONCAT44(DAT_8c062c98._4_4_,uVar2);
          *(undefined4 *)(ar4 + 0x78) = DAT_8c062c98._4_4_;
        }
        else {
          *(undefined8 *)(ar4 + 0x30) = CONCAT44(DAT_8c062c98._4_4_,(undefined4)DAT_8c062c98);
          in_dr0 = CONCAT44(_DAT_8c062ca0,DAT_8c062c98._4_4_);
          *(undefined8 *)(ar4 + 0x78) = in_dr0;
        }
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x4b;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0x12;
        ar7 = (undefined *)0x12;
        uStack_ec = 0x12;
        *(undefined4 *)(_DAT_8c062ca0 + ar4) = 0x12;
        *(undefined4 *)(PTR_DAT_8c062ca4 + DAT_8c062ca8) = 0x12;
        uStack_f0 = 0x36;
        *(undefined4 *)(DAT_8c062cac + ar4) = 0x36;
        *(undefined4 *)(PTR_DAT_8c062ca4 + DAT_8c062cb0) = 0x36;
        uStack_f4 = 0x36;
        *(undefined4 *)(DAT_8c062cb4 + ar4) = 0x36;
        *(undefined4 *)(PTR_DAT_8c062ca4 + DAT_8c062cb8) = 0x36;
        piVar3 = (int *)0x12;
      }
    }
    else {
      uVar2 = (*(code *)PTR_get_field_124_027930_8c062f40)
                        (*(undefined4 *)(ar6 + 8),piVar3,puVar6,ar7);
      *(undefined4 *)((int)&uStack_150 + DAT_8c062f44) = uVar2;
      if (*(int *)((int)&uStack_150 + DAT_8c062f44) == 3) {
        (*(code *)PTR_FUN_8c062f4c)(*(int *)(ar6 + 4) + DAT_8c062f48,1,puVar6,DAT_8c062f48);
        ar7 = PTR_s_GRAPHICS_COMMON_8c062f50 + DAT_8c062f54;
        puVar6 = (undefined *)0x0;
        piVar3 = (int *)0x0;
        (*(code *)PTR_FUN_8c062f5c)(ar4 + DAT_8c062f58,0,0,ar7);
      }
    }
  }
  else if (*(char *)(DAT_8c062fb0 + ar4) == '\x02') {
    uVar2 = (*(code *)PTR_get_field_124_027930_8c062fb4)(*(undefined4 *)(ar6 + 8),ar5,ar6,ar7);
    *(undefined4 *)((int)&uStack_150 + DAT_8c062fb8) = uVar2;
    piVar3 = *(int **)((int)&uStack_150 + DAT_8c062fb8);
    if (piVar3 == (int *)0x0) {
      uVar2 = (*(code *)PTR_get_field_13c_028d9c_8c062fbc)(*(undefined4 *)(ar6 + 4),0,puVar6,ar7);
      *(undefined4 *)((int)&uStack_150 + DAT_8c062fc0) = uVar2;
      if (*(int *)((int)&uStack_150 + DAT_8c062fc0) == 6) {
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0x11;
        uStack_12c = 0x11;
        *(undefined4 *)(DAT_8c063104 + ar4) = 0x11;
        *(undefined4 *)(PTR_DAT_8c063108 + DAT_8c06310c) = 0x11;
        uStack_130 = 0x36;
        *(undefined4 *)(DAT_8c063110 + ar4) = 0x36;
        *(undefined4 *)(PTR_DAT_8c063108 + DAT_8c063114) = 0x36;
        uStack_134 = 0x36;
        *(undefined4 *)(DAT_8c063118 + ar4) = 0x36;
        *(undefined4 *)(PTR_DAT_8c063108 + DAT_8c06311c) = 0x36;
        piVar3 = (int *)0x0;
        puVar6 = (undefined *)0xd;
      }
      else if (*(int *)((int)&uStack_150 + DAT_8c062fc0) == 7) {
        (*(code *)PTR_Vec3_ctor_copy_8c06307c)
                  ((int)&uStack_150 + DAT_8c063078,*(int *)(ar6 + 0x14) + 0x10,puVar6,ar7);
        uVar2 = (undefined4)in_dr0;
        (*(code *)PTR_Vec3_assign_wrap_063818_8c063080)
                  (ar4,(int)&uStack_150 + DAT_8c063078,puVar6,ar7);
        (*(code *)PTR_Vec3_dtor_8c063084)((int)&uStack_150 + DAT_8c063078,0xffffffff,puVar6,ar7);
        (*(code *)PTR_Vec3_ctor_copy_8c06307c)
                  ((int)&uStack_150 + DAT_8c063088,*(int *)(ar6 + 0x14) + 0x10,puVar6,ar7);
        (*(code *)PTR_Vec3_assign_wrap_05f640_8c06308c)
                  (ar4,(int)&uStack_150 + DAT_8c063088,puVar6,ar7);
        (*(code *)PTR_Vec3_dtor_8c063084)((int)&uStack_150 + DAT_8c063088,0xffffffff,puVar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x30) = (undefined4)DAT_8c063090;
          in_dr0 = CONCAT44(DAT_8c063090._4_4_,uVar2);
          *(undefined4 *)(ar4 + 0x78) = DAT_8c063090._4_4_;
        }
        else {
          *(undefined8 *)(ar4 + 0x30) = CONCAT44(DAT_8c063090._4_4_,(undefined4)DAT_8c063090);
          in_dr0 = CONCAT44(_DAT_8c063098,DAT_8c063090._4_4_);
          *(undefined8 *)(ar4 + 0x78) = in_dr0;
        }
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x4b;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0xb;
        uStack_120 = 0xb;
        *(undefined4 *)(_DAT_8c063098 + ar4) = 0xb;
        *(undefined4 *)(PTR_DAT_8c06309c + DAT_8c0630a0) = 0xb;
        uStack_124 = 0x2c;
        *(undefined4 *)(DAT_8c0630a4 + ar4) = 0x2c;
        ar7 = PTR_DAT_8c06309c;
        *(undefined4 *)(PTR_DAT_8c06309c + DAT_8c0630a8) = 0x2c;
        uStack_128 = 0x36;
        *(undefined4 *)(DAT_8c0630ac + ar4) = 0x36;
        *(undefined4 *)(PTR_DAT_8c06309c + DAT_8c0630b0) = 0x36;
        piVar3 = (int *)0x2c;
      }
    }
    else {
      uVar2 = (*(code *)PTR_get_field_124_027930_8c06337c)
                        (*(undefined4 *)(ar6 + 8),piVar3,puVar6,ar7);
      *(undefined4 *)((int)&uStack_150 + DAT_8c063380) = uVar2;
      if (*(int *)((int)&uStack_150 + DAT_8c063380) == 3) {
        (*(code *)PTR_FUN_8c063388)(*(int *)(ar6 + 4) + DAT_8c063384,2,puVar6,ar7);
        ar7 = PTR_s_GRAPHICS_COMMON_8c06338c + DAT_8c063390;
        puVar6 = (undefined *)0x0;
        piVar3 = (int *)0x0;
        (*(code *)PTR_FUN_8c063398)(ar4 + DAT_8c063394,0,0,ar7);
      }
    }
  }
  if (*(char *)(DAT_8c06339c + ar4) == '\x01') {
    piVar3 = (int *)PTR_get_field_124_027930_8c06337c;
    uVar2 = (*(code *)PTR_get_field_124_027930_8c06337c)
                      (*(undefined4 *)(ar6 + 8),PTR_get_field_124_027930_8c06337c,puVar6,ar7);
    *(undefined4 *)((int)&uStack_150 + DAT_8c0633a0) = uVar2;
    if (*(int *)((int)&uStack_150 + DAT_8c0633a0) == 3) {
      (*(code *)PTR_FUN_8c063388)(*(int *)(ar6 + 4) + DAT_8c063384,1,puVar6,ar7);
      ar7 = PTR_s_GRAPHICS_COMMON_8c06338c + DAT_8c063390;
      puVar6 = (undefined *)0x0;
      piVar3 = (int *)0x0;
      (*(code *)PTR_FUN_8c063398)(ar4 + DAT_8c063394,0,0,ar7);
    }
  }
  if (*(char *)(DAT_8c0633a4 + ar4) == '\x02') {
    uVar2 = (*(code *)PTR_get_field_124_027930_8c06337c)(*(undefined4 *)(ar6 + 8),piVar3,puVar6,ar7)
    ;
    *(undefined4 *)((int)&uStack_150 + DAT_8c063394) = uVar2;
    if (*(int *)((int)&uStack_150 + DAT_8c063394) == 3) {
      (*(code *)PTR_FUN_8c063388)(*(int *)(ar6 + 4) + DAT_8c063384,2,puVar6,ar7);
      ar7 = PTR_s_GRAPHICS_COMMON_8c06338c + DAT_8c063390;
      puVar6 = (undefined *)0x0;
      piVar3 = (int *)0x0;
      (*(code *)PTR_FUN_8c063398)(ar4 + DAT_8c063394,0,0,ar7);
    }
  }
  *(undefined1 *)(DAT_8c06339c + ar4) = 0;
  uVar2 = (*(code *)PTR_FUN_8c0633a8)(*(undefined4 *)(ar6 + 4),piVar3,puVar6,ar7);
  sStack_148 = (short)uVar2;
  if (sStack_148 == 3) {
    uVar2 = (*(code *)PTR_FUN_8c0633b0)(*(int *)(ar6 + 4) + DAT_8c0633ac,piVar3,puVar6,ar7);
    *(undefined4 *)((int)&uStack_150 + DAT_8c0633b4) = uVar2;
    if (*(int *)((int)&uStack_150 + DAT_8c0633b4) < 0x31) {
      (**(code **)(DAT_8c0633b8 + *ar5))(ar5,piVar3,puVar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)&uStack_150 + DAT_8c0633bc) = (int)((ulonglong)in_dr0 >> 0x20);
        uVar8 = CONCAT44(DAT_8c0633c0,*(undefined4 *)((int)&uStack_150 + DAT_8c0633bc));
      }
      else {
        *(undefined8 *)((int)&uStack_150 + DAT_8c0633bc) = in_dr0;
        uVar8 = CONCAT44(_DAT_8c0633c4,DAT_8c0633c0);
      }
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar8 >> 0x20) < (float)uVar8) {
        (**(code **)(DAT_8c0633b8 + *ar5))(ar5,piVar3,puVar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)&uStack_150 + DAT_8c0633ac) = (int)((ulonglong)uVar8 >> 0x20);
          fVar7 = *(float *)((int)&uStack_150 + DAT_8c0633ac);
          fVar9 = _DAT_8c0633c4;
        }
        else {
          *(undefined8 *)((int)&uStack_150 + DAT_8c0633ac) = uVar8;
          fVar7 = _DAT_8c0633c4;
          fVar9 = DAT_8c0633c8;
        }
        if (in_FPSCR_PR == '\0' && fVar7 < fVar9) {
          uVar2 = (**(code **)((int)DAT_8c0633c8 + *ar5))(ar5,piVar3,puVar6,ar7);
          *(undefined4 *)((int)&uStack_150 + DAT_8c0633cc) = uVar2;
          if (*(int *)((int)&uStack_150 + DAT_8c0633cc) == 0) {
            uVar2 = (*(code *)PTR_FUN_8c0633d0)(*(undefined4 *)(ar6 + 0xc),piVar3,puVar6,ar7);
            cStack_14b = (char)uVar2;
            if (cStack_14b == '\x02') {
              uVar2 = (*(code *)PTR_FUN_8c0633d4)(*(undefined4 *)(ar6 + 4),piVar3,puVar6,ar7);
              *(undefined4 *)((int)&uStack_150 + DAT_8c0633d8) = uVar2;
              if (*(int *)((int)&uStack_150 + DAT_8c0633d8) == -1) {
                uVar2 = (*(code *)PTR_FUN_8c0633dc)(*(int *)(ar6 + 4) + 0x78,piVar3,puVar6,ar7);
                cStack_14c = (char)uVar2;
                if (cStack_14c != '\x01') {
                  uVar2 = (*(code *)PTR_get_field_4_062878_8c0633e0)
                                    (*(undefined4 *)(ar6 + 0xc),piVar3,puVar6,ar7);
                  *(undefined4 *)((int)&uStack_150 + DAT_8c0633e4) = uVar2;
                  if (*(int *)((int)&uStack_150 + DAT_8c0633e4) == 1) {
                    (*(code *)PTR_FUN_8c0633e8)(*(int *)(ar6 + 4) + DAT_8c0633ac,0,puVar6,ar7);
                    (*(code *)PTR_FUN_8c0633ec)(*(undefined4 *)(ar6 + 0xc),0,puVar6,ar7);
                    *(undefined4 *)(DAT_8c0633f0 + ar4) = 0xfffffff6;
                    piVar3 = (int *)0x0;
                    *(undefined4 *)(DAT_8c0633f4 + ar4) = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = (*(code *)PTR_FUN_8c0633a8)(*(undefined4 *)(ar6 + 4),piVar3,puVar6,ar7);
  sStack_14a = (short)uVar2;
  iVar4 = (int)sStack_14a;
  if (iVar4 == 3) {
    a5 = iVar4;
    uVar2 = (**(code **)((int)DAT_8c0633c8 + *ar5))(ar5,3,puVar6,ar7);
    *(undefined4 *)((int)&uStack_150 + DAT_8c0633f8) = uVar2;
    iVar4 = DAT_8c0633f8;
    if (*(int *)((int)&uStack_150 + DAT_8c0633f8) == 0) {
      iStack_d4 = (*(code *)PTR_FUN_8c063500)
                            (*(undefined4 *)(DAT_8c0634fc + *(int *)(ar6 + 0x18)),a5,puVar6,ar7);
      iVar4 = 0x7c;
      if ((iStack_d4 == 0) && (iVar4 = *(int *)(DAT_8c063504 + ar4), iVar4 == -10)) {
        uVar2 = (*(code *)PTR_FUN_8c063508)(*(undefined4 *)(ar6 + 0xc),a5,puVar6,ar7);
        uStack_150._3_1_ = (char)uVar2;
        if ((uStack_150._3_1_ == '\0') &&
           (iStack_d8 = (*(code *)PTR_FUN_8c06350c)(ar4,ar6,puVar6,ar7), iStack_d8 != 1)) {
          if (*(int *)(DAT_8c063510 + ar4) == -1) {
            (*(code *)PTR_FUN_8c063518)(ar4 + DAT_8c063514,0,puVar6,ar7);
            ar7 = PTR_s_GRAPHICS_COMMON_8c06351c + DAT_8c063520;
            (*(code *)PTR_FUN_8c063524)(ar4 + DAT_8c063514,10,0,ar7);
            *(undefined4 *)(DAT_8c063528 + ar4) = 0;
            puVar6 = (undefined *)(ar4 + DAT_8c063514);
            uStack_dc = (*(code *)PTR_FUN_8c063534)
                                  (DAT_8c063530,*(undefined4 *)(DAT_8c06352c + ar4),puVar6,ar7);
            *(undefined4 *)(DAT_8c063510 + ar4) = uStack_dc;
            *(undefined4 *)(DAT_8c063538 + ar4) = 0;
            (*(code *)PTR_FUN_8c063518)(ar4 + DAT_8c063514,2,puVar6,ar7);
          }
          puVar5 = (undefined *)(*(int *)(DAT_8c06353c + ar4) + 1);
          *(undefined **)(DAT_8c06353c + ar4) = puVar5;
          iStack_138 = ar4;
        }
        else {
          puVar5 = PTR_FUN_8c063740;
          uVar2 = (*(code *)PTR_FUN_8c063740)
                            (*(undefined4 *)(ar6 + 0xc),PTR_FUN_8c063740,puVar6,ar7);
          uStack_150._2_1_ = (char)uVar2;
          if ((uStack_150._2_1_ == '\0') &&
             (puVar5 = ar6, iStack_e0 = (*(code *)PTR_FUN_8c063744)(ar4,ar6,puVar6,ar7),
             iStack_e0 == 1)) {
            puVar5 = (undefined *)0x1;
            (*(code *)PTR_FUN_8c063748)(*(undefined4 *)(ar6 + 0xc),1,puVar6,ar7);
          }
        }
        uVar2 = (*(code *)PTR_FUN_8c063740)(*(undefined4 *)(ar6 + 0xc),puVar5,puVar6,ar7);
        uStack_150._1_1_ = (char)uVar2;
        if ((uStack_150._1_1_ == '\x01') &&
           (iStack_e4 = (*(code *)PTR_FUN_8c063744)(ar4,ar6,puVar6,ar7), iStack_e4 == 1)) {
          if (*(int *)(DAT_8c06374c + ar4) == -1) {
            (*(code *)PTR_FUN_8c063754)(ar4 + DAT_8c063750,0,puVar6,ar7);
            puVar5 = PTR_s_GRAPHICS_COMMON_8c063758 + DAT_8c06375c;
            (*(code *)PTR_FUN_8c063760)(ar4 + DAT_8c063750,0x2a,0,puVar5);
            *(undefined4 *)(DAT_8c063764 + ar4) = 0;
            puVar6 = (undefined *)(ar4 + DAT_8c063750);
            uStack_e8 = (*(code *)PTR_FUN_8c063770)
                                  (DAT_8c06376c,*(undefined4 *)(DAT_8c063768 + ar4),puVar6,puVar5);
            *(undefined4 *)(DAT_8c06374c + ar4) = uStack_e8;
            *(undefined4 *)(DAT_8c063774 + ar4) = 1;
          }
          if ((*(int *)(DAT_8c063774 + ar4) != 0) && (*(int *)(DAT_8c06374c + ar4) != -1)) {
            *(undefined4 *)(ar4 + 4) = 0xd;
            *(undefined4 *)(ar4 + 8) = 0x5f;
            *(undefined4 *)(ar4 + 0xc) = 0;
            uStack_13c = 0x12;
            *(undefined4 *)(DAT_8c063778 + ar4) = 0x12;
            *(undefined4 *)(PTR_DAT_8c06377c + DAT_8c063750) = 0x12;
            uStack_140 = 0xb;
            *(undefined4 *)(DAT_8c063780 + ar4) = 0xb;
            *(undefined4 *)(PTR_DAT_8c06377c + DAT_8c063784) = 0xb;
            uStack_144 = 0xc;
            *(undefined4 *)(DAT_8c063788 + ar4) = 0xc;
            *(undefined4 *)(PTR_DAT_8c06377c + DAT_8c06378c) = 0xc;
            iVar4 = *(int *)(ar6 + 0x14) + 0x10;
            puVar6 = (undefined *)((int)&uStack_150 + DAT_8c063790);
            (*(code *)PTR_Vec3_ctor_copy_8c063794)(puVar6,iVar4,puVar6,iVar4);
            (*(code *)PTR_Vec3_assign_wrap_063818_8c063798)
                      (ar4,(int)&uStack_150 + DAT_8c063790,puVar6,iVar4);
            (*(code *)PTR_Vec3_dtor_8c06379c)
                      ((int)&uStack_150 + DAT_8c063790,0xffffffff,puVar6,iVar4);
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x30) = (undefined4)DAT_8c0637a0;
            }
            else {
              *(undefined8 *)(ar4 + 0x30) = CONCAT44(DAT_8c0637a0._4_4_,(undefined4)DAT_8c0637a0);
            }
            (*(code *)PTR_Vec3_ctor_copy_8c063794)
                      ((int)&uStack_150 + DAT_8c0637a0._4_4_,*(int *)(ar6 + 0x14) + 0x10,puVar6,
                       iVar4);
            (*(code *)PTR_Vec3_assign_wrap_05f640_8c0637a8)
                      (ar4,(int)&uStack_150 + DAT_8c0637a0._4_4_,puVar6,iVar4);
            (*(code *)PTR_Vec3_dtor_8c06379c)
                      ((int)&uStack_150 + DAT_8c0637a0._4_4_,0xffffffff,puVar6,iVar4);
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x78) = (undefined4)DAT_8c0637ac;
            }
            else {
              *(undefined8 *)(ar4 + 0x78) = CONCAT44(DAT_8c0637ac._4_4_,(undefined4)DAT_8c0637ac);
            }
            *(undefined1 *)(DAT_8c0637ac._4_4_ + ar4) = 0;
          }
        }
        iVar4 = DAT_8c0637b8;
        if (DAT_8c0637b8 < *(int *)(DAT_8c0637b4 + ar4)) {
          uVar2 = (*(code *)PTR_FUN_8c063740)
                            (*(undefined4 *)(ar6 + 0xc),*(undefined4 *)(ar6 + 0xc),puVar6,
                             *(int *)(DAT_8c0637b4 + ar4));
          iVar4 = (int)(char)uVar2;
          if (iVar4 == 0) {
            *(undefined4 *)(DAT_8c0637bc + ar4) = 0;
            iVar4 = DAT_8c0637b4;
            *(undefined4 *)(DAT_8c0637b4 + ar4) = 0;
          }
        }
      }
    }
  }
  return iVar4;
}



/* FUN_8c0637c0 @ 8c0637c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0637c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x44) = (undefined1)ar5;
  return 0x44;
}



/* FUN_8c0637c8 @ 8c0637c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0637c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 0x44);
}



/* FUN_8c0637d0 @ 8c0637d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0637d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_get_field_4_0637f8_8c0637f4)(ar4 + DAT_8c0637f0,ar5,ar6,ar7);
  return uVar1;
}



/* get_field_4_0637f8 @ 8c0637f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_4_0637f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}



/* FUN_8c063800 @ 8c063800 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c063800(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 4) = ar5;
  return in_r0;
}



/* ret_const_0_063808 @ 8c063808 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_063808(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c063810 @ 8c063810 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c063810(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x2c) = ar5;
  return in_r0;
}



/* Vec3_assign_wrap_063818 @ 8c063818 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Vec3_assign_wrap_063818(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_Vec3_assign_8c063834)(ar4 + 0x28,ar5,ar6,ar7);
  return uVar1;
}



/* s_REQUEST_ATTENTION_063846 @ 8c063838 callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c0638d6 */
/* WARNING: Switch with 1 destination removed at 0x8c0638fe */
/* WARNING: Switch with 1 destination removed at 0x8c063920 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined ** s_REQUEST_ATTENTION_063846(undefined *ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *a7;
  undefined **ppuVar2;
  int *a5;
  int iVar3;
  undefined4 *a5_00;
  undefined4 a4;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 in_dr0;
  undefined8 uVar6;
  undefined *puVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_17c;
  char cStack_178;
  char cStack_177;
  char cStack_176;
  char cStack_175;
  char cStack_174;
  char cStack_173;
  char cStack_172;
  char cStack_171;
  char cStack_170;
  char cStack_16f;
  char cStack_16e;
  undefined1 uStack_16d;
  undefined1 uStack_16c;
  undefined1 uStack_16b;
  short sStack_16a;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined *puStack_104;
  undefined4 uStack_100;
  
  a4 = ar6[3];
  a5 = ar5;
  uVar1 = (*(code *)PTR_FUN_8c063ae4)(a4,ar5,a4,ar7);
  uStack_16b = (undefined1)uVar1;
  uVar1 = (*(code *)PTR_FUN_8c063ae8)(ar6[1],a5,a4,ar7);
  *(undefined4 *)((int)&uStack_17c + DAT_8c063aec) = uVar1;
  uVar1 = (*(code *)PTR_FUN_8c063af4)(*(undefined4 *)(DAT_8c063af0 + ar6[6]),a5,a4,ar7);
  *(undefined4 *)((int)&uStack_17c + DAT_8c063af8) = uVar1;
  uVar1 = (*(code *)PTR_get_field_a0_035724_8c063afc)(ar6[6],a5,a4,ar7);
  uStack_16c = (undefined1)uVar1;
  uVar1 = (*(code *)PTR_FUN_8c063b00)(ar6[1],a5,a4,ar7);
  sStack_16a = (short)uVar1;
  iVar3 = (int)sStack_16a;
  if (iVar3 < 4) {
    return (undefined **)(int)sStack_16a;
  }
  a7 = (undefined *)(*(code *)PTR_get_field_a0_035724_8c063afc)(ar6[6],iVar3,a4,ar6[6]);
  uStack_16d = SUB41(a7,0);
  puVar4 = (undefined *)((uint)a7 & 0xff);
  if (puVar4 != (undefined *)0x2) {
    return (undefined **)puVar4;
  }
  uVar1 = (*(code *)PTR_get_field_178_035734_8c063b04)(ar6[2],iVar3,2,a7);
  *(undefined4 *)((int)&uStack_17c + DAT_8c063b08) = uVar1;
  if (*(int *)((int)&uStack_17c + DAT_8c063b08) != 0) {
    return (undefined **)*(int *)((int)&uStack_17c + DAT_8c063b08);
  }
  uVar1 = (*(code *)PTR_FUN_8c063ae4)(ar6[3],iVar3,puVar4,a7);
  cStack_16e = (char)uVar1;
  a5_00 = (undefined4 *)(int)cStack_16e;
  if (a5_00 == (undefined4 *)0x0) {
    uVar1 = (**(code **)(DAT_8c063b0c + *ar5))(ar5,0,puVar4,a7);
    *(undefined4 *)((int)&uStack_17c + DAT_8c063b10) = uVar1;
    uVar1 = (*(code *)PTR_get_field_ac_062880_8c063b14)
                      (*(undefined4 *)((int)&uStack_17c + DAT_8c063b10),a5_00,puVar4,a7);
    *(undefined4 *)((int)&uStack_17c + DAT_8c063b18) = uVar1;
    if (*(int *)((int)&uStack_17c + DAT_8c063b18) == 4) {
      a5_00 = (undefined4 *)ar6[6];
      puVar4 = (undefined *)
               (*(code *)PTR_FUN_8c063af4)
                         (*(undefined4 *)(DAT_8c063af0 + (int)a5_00),a5_00,puVar4,a7);
      *(undefined **)((int)&uStack_17c + DAT_8c063b1c) = puVar4;
      if (*(int *)((int)&uStack_17c + DAT_8c063b1c) == 0) {
        uVar1 = (*(code *)PTR_FUN_8c063ae8)(ar6[1],a5_00,puVar4,a7);
        *(undefined4 *)((int)&uStack_17c + DAT_8c063b20) = uVar1;
        a5_00 = *(undefined4 **)((int)&uStack_17c + DAT_8c063b20);
        if (a5_00 == (undefined4 *)0xffffffff) {
          uVar1 = (*(code *)PTR_get_field_124_027930_8c063b24)(ar6[2],0xffffffff,puVar4,a7);
          *(undefined4 *)((int)&uStack_17c + DAT_8c063b28) = uVar1;
          if (*(int *)((int)&uStack_17c + DAT_8c063b28) == 0) {
            a5_00 = (undefined4 *)ar6[6];
            uVar1 = (*(code *)PTR_get_field_a0_035724_8c063afc)(a5_00,a5_00,puVar4,a7);
            cStack_16f = (char)uVar1;
            if (cStack_16f == '\x02') {
              uVar1 = (*(code *)PTR_FUN_8c063b2c)(ar6[3],a5_00,puVar4,a7);
              cStack_170 = (char)uVar1;
              if ((cStack_170 == '\x01') && (ar4[DAT_8c063b30] == '\0')) {
                uVar1 = (*(code *)PTR_get_field_40_03598c_8c063b34)(ar6[3],a5_00,puVar4,a7);
                *(undefined4 *)((int)&uStack_17c + DAT_8c063b38) = uVar1;
                if (*(int *)((int)&uStack_17c + DAT_8c063b38) == 0) {
                  uVar1 = (*(code *)PTR_FUN_8c063b3c)(ar6[3],a5_00,puVar4,a7);
                  cStack_171 = (char)uVar1;
                  if (cStack_171 == '\x02') {
                    uVar1 = (*(code *)PTR_FUN_8c063b44)(ar6[1] + DAT_8c063b40,a5_00,puVar4,a7);
                    *(undefined4 *)((int)&uStack_17c + DAT_8c063b48) = uVar1;
                    if (*(int *)((int)&uStack_17c + DAT_8c063b48) < 0x2d) {
                      (**(code **)(DAT_8c063b4c + *ar5))(ar5,a5_00,puVar4,a7);
                      if (in_FPSCR_SZ == '\0') {
                        *(int *)((int)&uStack_17c + DAT_8c063b50) = (int)((ulonglong)in_dr0 >> 0x20)
                        ;
                        in_dr0 = CONCAT44(DAT_8c063b54,
                                          *(undefined4 *)((int)&uStack_17c + DAT_8c063b50));
                      }
                      else {
                        *(undefined8 *)((int)&uStack_17c + DAT_8c063b50) = in_dr0;
                        in_dr0 = CONCAT44(_DAT_8c063b58,DAT_8c063b54);
                      }
                      if (in_FPSCR_PR != '\0' || (float)((ulonglong)in_dr0 >> 0x20) <= (float)in_dr0
                         ) {
                        (**(code **)(DAT_8c063b4c + *ar5))(ar5,a5_00,puVar4,a7);
                        if (in_FPSCR_SZ == '\0') {
                          *(int *)((int)&uStack_17c + _DAT_8c063b58) =
                               (int)((ulonglong)in_dr0 >> 0x20);
                          in_dr0 = CONCAT44(DAT_8c063b5c,
                                            *(undefined4 *)((int)&uStack_17c + _DAT_8c063b58));
                        }
                        else {
                          *(undefined8 *)((int)&uStack_17c + _DAT_8c063b58) = in_dr0;
                          in_dr0 = CONCAT44(_DAT_8c063b60,DAT_8c063b5c);
                        }
                        if (in_FPSCR_PR == '\0' &&
                            (float)in_dr0 < (float)((ulonglong)in_dr0 >> 0x20)) {
                          (**(code **)(_DAT_8c063b60 + *ar5))(ar5,a5_00,puVar4,a7);
                          if (in_FPSCR_SZ == '\0') {
                            *(int *)((int)&uStack_17c + DAT_8c063b64) =
                                 (int)((ulonglong)in_dr0 >> 0x20);
                            in_dr0 = CONCAT44(DAT_8c063b68,
                                              *(undefined4 *)((int)&uStack_17c + DAT_8c063b64));
                          }
                          else {
                            *(undefined8 *)((int)&uStack_17c + DAT_8c063b64) = in_dr0;
                            in_dr0 = CONCAT44(PTR_FUN_8c063b6c,DAT_8c063b68);
                          }
                          if (in_FPSCR_PR == '\0' &&
                              (float)((ulonglong)in_dr0 >> 0x20) < (float)in_dr0) {
                            uVar1 = (*(code *)PTR_FUN_8c063b6c)(ar6[1] + 0x78,a5_00,puVar4,a7);
                            cStack_172 = (char)uVar1;
                            if (cStack_172 != '\x01') {
                              uVar1 = (*(code *)PTR_get_field_40_03598c_8c063de8)
                                                (ar6[3],a5_00,puVar4,a7);
                              *(undefined4 *)((int)&uStack_17c + DAT_8c063dec) = uVar1;
                              if (*(int *)((int)&uStack_17c + DAT_8c063dec) == 0) {
                                (*(code *)PTR_FUN_8c063df0)(ar6[3],0,puVar4,a7);
                                ar4[DAT_8c063df4] = 1;
                                *(undefined4 *)(ar4 + DAT_8c063df8) = 0;
                                a5_00 = (undefined4 *)0x0;
                                (*(code *)PTR_FUN_8c063e00)(ar6[1] + DAT_8c063dfc,0,puVar4,a7);
                                *(undefined4 *)(ar4 + 4) = 0xd;
                                *(undefined4 *)(ar4 + 8) = 0x5f;
                                *(undefined4 *)(ar4 + 0xc) = 0;
                                *(undefined4 *)((int)&uStack_17c + DAT_8c063dfc) = 0x12;
                                *(undefined4 *)(ar4 + DAT_8c063e04) =
                                     *(undefined4 *)((int)&uStack_17c + DAT_8c063dfc);
                                a7 = *(undefined **)((int)&uStack_17c + DAT_8c063dfc);
                                *(undefined **)(PTR_DAT_8c063e08 + DAT_8c063e0c) = a7;
                                *(undefined4 *)((int)&uStack_17c + DAT_8c063e10) = 0xb;
                                *(undefined4 *)(ar4 + DAT_8c063e14) =
                                     *(undefined4 *)((int)&uStack_17c + DAT_8c063e10);
                                *(undefined4 *)(PTR_DAT_8c063e08 + DAT_8c063e18) =
                                     *(undefined4 *)((int)&uStack_17c + DAT_8c063e10);
                                *(undefined4 *)((int)&uStack_17c + DAT_8c063e1c) = 0xc;
                                puVar4 = *(undefined **)((int)&uStack_17c + DAT_8c063e1c);
                                *(undefined **)(ar4 + DAT_8c063e20) = puVar4;
                                *(undefined4 *)(PTR_DAT_8c063e08 + DAT_8c063e24) =
                                     *(undefined4 *)((int)&uStack_17c + DAT_8c063e1c);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar1 = (*(code *)PTR_FUN_8c063e2c)(*(undefined4 *)(DAT_8c063e28 + ar6[6]),a5_00,puVar4,a7);
  *(undefined4 *)((int)&uStack_17c + DAT_8c063e30) = uVar1;
  if (*(int *)((int)&uStack_17c + DAT_8c063e30) == 0) {
    iVar3 = *ar5;
    uVar1 = (**(code **)(DAT_8c063e34 + iVar3))(ar5,iVar3,puVar4,a7);
    *(undefined4 *)((int)&uStack_17c + DAT_8c063e38) = uVar1;
    a7 = PTR_get_field_ac_062880_8c063e3c;
    puVar4 = (undefined *)
             (*(code *)PTR_get_field_ac_062880_8c063e3c)
                       (*(undefined4 *)((int)&uStack_17c + DAT_8c063e38),iVar3,puVar4,
                        PTR_get_field_ac_062880_8c063e3c);
    *(undefined **)((int)&uStack_17c + DAT_8c063e40) = puVar4;
    a5_00 = *(undefined4 **)((int)&uStack_17c + DAT_8c063e40);
    if (a5_00 == (undefined4 *)0x4) {
      uVar1 = (*(code *)PTR_FUN_8c063e44)(ar6[3],4,puVar4,a7);
      cStack_173 = (char)uVar1;
      if (cStack_173 == '\0') {
        puVar4 = PTR_FUN_8c063e48;
        uVar1 = (*(code *)PTR_FUN_8c063e48)(ar6[3],a5_00,PTR_FUN_8c063e48,a7);
        cStack_174 = (char)uVar1;
        if (cStack_174 == '\x02') {
          uVar1 = (*(code *)PTR_FUN_8c063e4c)(ar6[1],a5_00,puVar4,a7);
          *(undefined4 *)((int)&uStack_17c + DAT_8c063e50) = uVar1;
          if (*(int *)((int)&uStack_17c + DAT_8c063e50) == -1) {
            a5_00 = (undefined4 *)PTR_get_field_124_027930_8c063e54;
            uVar1 = (*(code *)PTR_get_field_124_027930_8c063e54)
                              (ar6[2],PTR_get_field_124_027930_8c063e54,puVar4,a7);
            *(undefined4 *)((int)&uStack_17c + DAT_8c063e58) = uVar1;
            if (*(int *)((int)&uStack_17c + DAT_8c063e58) == 0) {
              uVar1 = (*(code *)PTR_get_field_a0_035724_8c063e5c)(ar6[6],a5_00,puVar4,a7);
              cStack_175 = (char)uVar1;
              if ((cStack_175 == '\x02') && (ar4[DAT_8c063df4] == '\0')) {
                a5_00 = (undefined4 *)
                        (*(code *)PTR_get_field_4_062878_8c063e60)(ar6[3],a5_00,puVar4,a7);
                *(undefined4 **)((int)&uStack_17c + DAT_8c063e64) = a5_00;
                if (*(int *)((int)&uStack_17c + DAT_8c063e64) == 1) {
                  uVar1 = (*(code *)PTR_get_field_40_03598c_8c063de8)(ar6[3],a5_00,puVar4,a7);
                  *(undefined4 *)((int)&uStack_17c + DAT_8c063e68) = uVar1;
                  if (*(int *)((int)&uStack_17c + DAT_8c063e68) == 0) {
                    uVar1 = (*(code *)PTR_FUN_8c063e48)(ar6[3],a5_00,puVar4,a7);
                    cStack_176 = (char)uVar1;
                    if (cStack_176 == '\x02') {
                      uVar1 = (*(code *)PTR_FUN_8c063e6c)
                                        (ar6[1] + DAT_8c063dfc,PTR_FUN_8c063e6c,puVar4,a7);
                      *(undefined4 *)((int)&uStack_17c + DAT_8c063e70) = uVar1;
                      a5_00 = (undefined4 *)0x2d;
                      if (*(int *)((int)&uStack_17c + DAT_8c063e70) < 0x2d) {
                        (**(code **)(DAT_8c063e74 + *ar5))(ar5,0x2d,puVar4,a7);
                        if (in_FPSCR_SZ == '\0') {
                          *(int *)((int)&uStack_17c + DAT_8c063e78) =
                               (int)((ulonglong)in_dr0 >> 0x20);
                          uVar6 = CONCAT44(DAT_8c063e7c,
                                           *(undefined4 *)((int)&uStack_17c + DAT_8c063e78));
                        }
                        else {
                          *(undefined8 *)((int)&uStack_17c + DAT_8c063e78) = in_dr0;
                          uVar6 = CONCAT44(_DAT_8c063e80,DAT_8c063e7c);
                        }
                        if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar6 >> 0x20) <= (float)uVar6
                           ) {
                          (**(code **)(DAT_8c063e74 + *ar5))(ar5,a5_00,puVar4,a7);
                          if (in_FPSCR_SZ == '\0') {
                            *(int *)((int)&uStack_17c + _DAT_8c063e80) =
                                 (int)((ulonglong)uVar6 >> 0x20);
                            uVar6 = CONCAT44(DAT_8c063e84,
                                             *(undefined4 *)((int)&uStack_17c + _DAT_8c063e80));
                          }
                          else {
                            *(undefined8 *)((int)&uStack_17c + _DAT_8c063e80) = uVar6;
                            uVar6 = CONCAT44(_DAT_8c063e88,DAT_8c063e84);
                          }
                          if (in_FPSCR_PR == '\0' &&
                              (float)uVar6 < (float)((ulonglong)uVar6 >> 0x20)) {
                            (**(code **)(_DAT_8c063e88 + *ar5))(ar5,a5_00,puVar4,a7);
                            if (in_FPSCR_SZ == '\0') {
                              *(int *)((int)&uStack_17c + DAT_8c063e8c) =
                                   (int)((ulonglong)uVar6 >> 0x20);
                              puVar5 = *(undefined **)((int)&uStack_17c + DAT_8c063e8c);
                              puVar7 = DAT_8c063e90;
                            }
                            else {
                              *(undefined8 *)((int)&uStack_17c + DAT_8c063e8c) = uVar6;
                              puVar5 = DAT_8c063e90;
                              puVar7 = PTR_FUN_8c063e94;
                            }
                            if (in_FPSCR_PR == '\0' && (float)puVar7 < (float)puVar5) {
                              a5_00 = (undefined4 *)ar6[1];
                              uVar1 = (*(code *)PTR_FUN_8c063e94)(a5_00 + 0x1e,a5_00,puVar4,a7);
                              cStack_177 = (char)uVar1;
                              if (cStack_177 != '\x01') {
                                if ((char)ar4[DAT_8c06410c] < '\x04') {
                                  a5_00 = (undefined4 *)0x5;
                                  uVar1 = (**(code **)(DAT_8c064110 + *ar5))(ar5,5,puVar4,a7);
                                  *(undefined4 *)((int)&uStack_17c + DAT_8c064114) = uVar1;
                                  if (*(int *)((int)&uStack_17c + DAT_8c064114) != 1)
                                  goto LAB_8c063f66;
                                }
                                uVar1 = (*(code *)PTR_get_field_40_03598c_8c064118)
                                                  (ar6[3],a5_00,puVar4,a7);
                                *(undefined4 *)((int)&uStack_17c + DAT_8c06411c) = uVar1;
                                if (*(int *)((int)&uStack_17c + DAT_8c06411c) == 0) {
                                  (*(code *)PTR_FUN_8c064124)(ar6[1] + DAT_8c064120,0,puVar4,a7);
                                  a5_00 = (undefined4 *)0x0;
                                  (*(code *)PTR_FUN_8c064128)(ar6[3],0,puVar4,a7);
                                  ar4[DAT_8c06412c] = 1;
                                  *(undefined4 *)(ar4 + DAT_8c064130) = 0;
                                  *(undefined4 *)(ar4 + 4) = 0xd;
                                  *(undefined4 *)(ar4 + 8) = 0x5f;
                                  *(undefined4 *)(ar4 + 0xc) = 0;
                                  *(undefined4 *)((int)&uStack_17c + DAT_8c064134) = 0x12;
                                  *(undefined4 *)(ar4 + DAT_8c064138) =
                                       *(undefined4 *)((int)&uStack_17c + DAT_8c064134);
                                  puVar4 = PTR_DAT_8c06413c;
                                  *(undefined4 *)(PTR_DAT_8c06413c + DAT_8c064140) =
                                       *(undefined4 *)((int)&uStack_17c + DAT_8c064134);
                                  *(undefined4 *)((int)&uStack_17c + DAT_8c064144) = 0xb;
                                  *(undefined4 *)(ar4 + DAT_8c064148) =
                                       *(undefined4 *)((int)&uStack_17c + DAT_8c064144);
                                  *(undefined4 *)(PTR_DAT_8c06413c + DAT_8c06414c) =
                                       *(undefined4 *)((int)&uStack_17c + DAT_8c064144);
                                  uStack_100 = 0xc;
                                  *(undefined4 *)(ar4 + DAT_8c064150) = 0xc;
                                  *(undefined4 *)(PTR_DAT_8c06413c + DAT_8c064154) = 0xc;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_8c063f66:
  if (ar4[DAT_8c06412c] == '\x01') {
    if (*(int *)(ar4 + DAT_8c064158) == -1) {
      (*(code *)PTR_FUN_8c06415c)(ar4 + DAT_8c064140,0,puVar4,a7);
      a7 = PTR_s_GRAPHICS_COMMON_8c064160 + DAT_8c064164;
      (*(code *)PTR_FUN_8c064168)(ar4 + DAT_8c064140,10,0,a7);
      *(undefined4 *)(ar4 + DAT_8c06416c) = 0;
      puVar4 = ar4 + DAT_8c064140;
      uVar1 = (*(code *)PTR_FUN_8c064178)
                        (DAT_8c064174,*(undefined4 *)(ar4 + DAT_8c064170),puVar4,a7);
      *(undefined4 *)((int)&uStack_17c + DAT_8c06417c) = uVar1;
      *(undefined4 *)(ar4 + DAT_8c064158) = *(undefined4 *)((int)&uStack_17c + DAT_8c06417c);
      *(undefined4 *)(ar4 + DAT_8c064180) = 0;
      (*(code *)PTR_FUN_8c06415c)(ar4 + DAT_8c064140,2,puVar4,a7);
    }
    *(int *)(ar4 + DAT_8c064130) = *(int *)(ar4 + DAT_8c064130) + 1;
    puVar4 = ar4;
    puStack_104 = ar4;
    if (DAT_8c064184 < *(int *)(ar4 + DAT_8c064130)) {
LAB_8c064038:
      ar4[DAT_8c06412c] = 0;
      *(undefined4 *)(ar4 + DAT_8c064130) = 0;
    }
    else {
      uVar1 = (*(code *)PTR_get_field_40_03598c_8c064118)
                        (ar6[3],PTR_get_field_40_03598c_8c064118,ar4,a7);
      *(undefined4 *)((int)&uStack_17c + DAT_8c064188) = uVar1;
      if (*(int *)((int)&uStack_17c + DAT_8c064188) != 0) goto LAB_8c064038;
    }
    a5_00 = ar6;
    uVar1 = (*(code *)PTR_FUN_8c06418c)(ar4,ar6,puVar4,a7);
    *(undefined4 *)((int)&uStack_17c + DAT_8c064190) = uVar1;
    if (*(int *)((int)&uStack_17c + DAT_8c064190) == 1) {
      uVar1 = (*(code *)PTR_FUN_8c064194)(ar6[3],a5_00,puVar4,a7);
      cStack_178 = (char)uVar1;
      if (cStack_178 == '\0') {
        uVar1 = (*(code *)PTR_get_field_40_03598c_8c064118)(ar6[3],a5_00,puVar4,a7);
        *(undefined4 *)((int)&uStack_17c + DAT_8c064198) = uVar1;
        if (*(int *)((int)&uStack_17c + DAT_8c064198) == 0) {
          (*(code *)PTR_FUN_8c06419c)(ar6[3],1,puVar4,a7);
          ar4[DAT_8c06412c] = 2;
          a5_00 = (undefined4 *)0x2;
          (*(code *)PTR_FUN_8c0641a0)(ar6[3],2,puVar4,a7);
        }
      }
    }
  }
  uVar1 = (*(code *)PTR_FUN_8c064194)(ar6[3],a5_00,puVar4,a7);
  uStack_17c._3_1_ = (char)uVar1;
  if (uStack_17c._3_1_ != 1) {
    return (undefined **)(int)uStack_17c._3_1_;
  }
  if ((char)ar4[DAT_8c06412c] != 2) {
    return (undefined **)(int)(char)ar4[DAT_8c06412c];
  }
  uVar1 = (*(code *)PTR_get_field_40_03598c_8c064118)(ar6[3],a5_00,puVar4,a7);
  *(undefined4 *)((int)&uStack_17c + DAT_8c0641a4) = uVar1;
  if (8 < *(int *)((int)&uStack_17c + DAT_8c0641a4)) {
    return (undefined **)8;
  }
  ppuVar2 = &switchD_8c0641a8::switchdataD_8c0641ac;
  switch(*(int *)((int)&uStack_17c + DAT_8c0641a4)) {
  case 1:
    if (*(int *)(ar4 + 0x40) == 0x1b) {
      ppuVar2 = (undefined **)0x1b;
    }
    else {
      (*(code *)PTR_FUN_8c064518)(ar6[3],1,puVar4,a7);
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x1b;
      *(undefined4 *)(ar4 + DAT_8c06451c) = 0x1b;
      *(undefined4 *)(PTR_DAT_8c064520 + DAT_8c064524) = 0x1b;
      *(undefined4 *)(ar4 + DAT_8c064528) = 0x36;
      *(undefined4 *)(PTR_DAT_8c064520 + DAT_8c06452c) = 0x36;
      *(undefined4 *)(ar4 + DAT_8c064530) = 0x36;
      ppuVar2 = DAT_8c064534;
      *(undefined4 *)((int)DAT_8c064534 + (int)PTR_DAT_8c064520) = 0x36;
    }
    break;
  case 2:
    ppuVar2 = *(undefined ***)(ar4 + DAT_8c064298);
    if (ppuVar2 == (undefined **)0xffffffff) {
      if (*(int *)(ar4 + 4) == 0xd) {
        ppuVar2 = (undefined **)0xd;
      }
      else {
        uVar1 = (*(code *)PTR_FUN_8c06429c)(ar4,ar6,puVar4,a7);
        *(undefined4 *)((int)&uStack_17c + DAT_8c0642a0) = uVar1;
        if (*(int *)((int)&uStack_17c + DAT_8c0642a0) == 1) {
          ppuVar2 = (undefined **)0x1;
        }
        else {
          if (*(int *)(ar4 + DAT_8c064298) == -1) {
            uVar1 = 0;
            (*(code *)PTR_FUN_8c0642a8)(ar4 + DAT_8c0642a4,0,puVar4,a7);
            uVar1 = (*(code *)PTR_FUN_8c0642ac)(ar6[3],uVar1,puVar4,a7);
            uStack_17c._2_1_ = (char)uVar1;
            if (uStack_17c._2_1_ == '\0') {
              a7 = PTR_s_GRAPHICS_COMMON_8c0642b0 + DAT_8c0642b8;
              (*(code *)PTR_FUN_8c0642bc)(ar4 + DAT_8c0642a4,0x2a,0,a7);
              *(undefined4 *)(ar4 + DAT_8c0642c0) = 0;
              puVar4 = ar4 + DAT_8c0642a4;
              uVar1 = (*(code *)PTR_FUN_8c0642cc)
                                (DAT_8c0642c8,*(undefined4 *)(ar4 + DAT_8c0642c4),puVar4,a7);
              *(undefined4 *)((int)&uStack_17c + DAT_8c0642d0) = uVar1;
              *(undefined4 *)(ar4 + DAT_8c064298) = *(undefined4 *)((int)&uStack_17c + DAT_8c0642d0)
              ;
              *(undefined4 *)(ar4 + DAT_8c0642d4) = 1;
            }
            else {
              a7 = PTR_s_GRAPHICS_COMMON_8c06442c + DAT_8c064430;
              (*(code *)PTR_FUN_8c064438)(ar4 + DAT_8c064434,0x2a,0,a7);
              *(undefined4 *)(ar4 + DAT_8c06443c) = 0;
              puVar4 = ar4 + DAT_8c064434;
              uVar1 = (*(code *)PTR_FUN_8c064448)
                                (DAT_8c064444,*(undefined4 *)(ar4 + DAT_8c064440),puVar4,a7);
              *(undefined4 *)((int)&uStack_17c + DAT_8c06444c) = uVar1;
              *(undefined4 *)(ar4 + DAT_8c064450) = *(undefined4 *)((int)&uStack_17c + DAT_8c06444c)
              ;
              *(undefined4 *)(ar4 + DAT_8c064454) = 1;
            }
          }
          if (*(int *)(ar4 + DAT_8c064454) == 0) {
            ppuVar2 = (undefined **)0x0;
          }
          else if (*(int *)(ar4 + DAT_8c064450) == -1) {
            ppuVar2 = (undefined **)0xffffffff;
          }
          else {
            *(undefined4 *)(ar4 + 4) = 0xd;
            *(undefined4 *)(ar4 + 8) = 0x5f;
            *(undefined4 *)(ar4 + 0xc) = 0;
            uStack_108 = 0x12;
            *(undefined4 *)(ar4 + DAT_8c064458) = 0x12;
            *(undefined4 *)(PTR_DAT_8c06445c + DAT_8c064434) = 0x12;
            uStack_10c = 0xb;
            *(undefined4 *)(ar4 + DAT_8c064460) = 0xb;
            *(undefined4 *)(PTR_DAT_8c06445c + DAT_8c06444c) = 0xb;
            uStack_110 = 0xc;
            *(undefined4 *)(ar4 + DAT_8c064464) = 0xc;
            *(undefined4 *)(PTR_DAT_8c06445c + DAT_8c064468) = 0xc;
            (*(code *)PTR_Vec3_ctor_copy_8c06446c)
                      ((int)&uStack_17c + DAT_8c064454,ar6[5] + 0x10,puVar4,a7);
            (*(code *)PTR_Vec3_assign_wrap_063818_8c064470)
                      (ar4,(int)&uStack_17c + DAT_8c064454,puVar4,a7);
            (*(code *)PTR_Vec3_dtor_8c064474)((int)&uStack_17c + DAT_8c064454,0xffffffff,puVar4,a7);
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x30) = (undefined4)DAT_8c064478;
            }
            else {
              *(ulonglong *)(ar4 + 0x30) = CONCAT44(DAT_8c064478._4_4_,(undefined4)DAT_8c064478);
            }
            (*(code *)PTR_Vec3_ctor_copy_8c06446c)
                      ((int)&uStack_17c + DAT_8c064478._4_4_,ar6[5] + 0x10,puVar4,a7);
            (*(code *)PTR_Vec3_assign_wrap_05f640_8c064480)
                      (ar4,(int)&uStack_17c + DAT_8c064478._4_4_,puVar4,a7);
            (*(code *)PTR_Vec3_dtor_8c064474)
                      ((int)&uStack_17c + DAT_8c064478._4_4_,0xffffffff,puVar4,a7);
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x78) = (undefined4)DAT_8c064484;
            }
            else {
              *(ulonglong *)(ar4 + 0x78) = CONCAT44(DAT_8c064484._4_4_,(undefined4)DAT_8c064484);
            }
            ppuVar2 = DAT_8c064484._4_4_;
            *(undefined1 *)((int)DAT_8c064484._4_4_ + (int)ar4) = 0;
          }
        }
      }
    }
    break;
  case 3:
    ppuVar2 = *(undefined ***)(ar4 + DAT_8c064664);
    if (ppuVar2 == (undefined **)0xffffffff) {
      (*(code *)PTR_FUN_8c06466c)(ar4 + DAT_8c064668,0,puVar4,a7);
      (*(code *)PTR_FUN_8c06467c)
                (ar4 + DAT_8c064668,3,0,PTR_s_GRAPHICS_COMMON_8c064670 + DAT_8c064678);
      *(undefined4 *)(ar4 + DAT_8c064680) = 0;
      uVar1 = (*(code *)PTR_FUN_8c06468c)
                        (DAT_8c064688,*(undefined4 *)(ar4 + DAT_8c064684),ar4 + DAT_8c064668,
                         PTR_FUN_8c06468c);
      iVar3 = DAT_8c064664;
      *(undefined4 *)((int)&uStack_17c + DAT_8c064668) = uVar1;
      *(undefined4 *)(ar4 + DAT_8c064664) = *(undefined4 *)((int)&uStack_17c + DAT_8c064668);
      *(undefined4 *)(ar4 + DAT_8c064690) = 0;
      if (*(int *)(ar4 + DAT_8c064664) == -1) {
        ppuVar2 = (undefined **)0xffffffff;
      }
      else {
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        uStack_120 = 0xb;
        *(undefined4 *)(ar4 + DAT_8c064694) = 0xb;
        *(undefined4 *)(PTR_DAT_8c064698 + DAT_8c064668) = 0xb;
        uStack_124 = 0xc;
        *(undefined4 *)(ar4 + DAT_8c06469c) = 0xc;
        *(undefined4 *)(PTR_DAT_8c064698 + DAT_8c0646a0) = 0xc;
        uStack_128 = 0x36;
        uVar1 = 0x36;
        *(undefined4 *)(ar4 + DAT_8c0646a4) = 0x36;
        *(undefined4 *)(PTR_DAT_8c064698 + DAT_8c0646a8) = 0x36;
        (*(code *)PTR_Vec3_ctor_copy_8c0646b0)
                  ((int)&uStack_17c + DAT_8c0646ac,ar6[5] + 0x10,0x36,iVar3);
        (*(code *)PTR_Vec3_assign_wrap_05f640_8c0646b4)
                  (ar4,(int)&uStack_17c + DAT_8c0646ac,uVar1,iVar3);
        (*(code *)PTR_Vec3_dtor_8c0646b8)((int)&uStack_17c + DAT_8c0646ac,0xffffffff,uVar1,iVar3);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x78) = (undefined4)DAT_8c0646bc;
        }
        else {
          *(ulonglong *)(ar4 + 0x78) = CONCAT44(DAT_8c0646bc._4_4_,(undefined4)DAT_8c0646bc);
        }
        ppuVar2 = DAT_8c0646bc._4_4_;
        *(undefined1 *)((int)DAT_8c0646bc._4_4_ + (int)ar4) = 0;
      }
    }
    break;
  case 4:
    if (*(int *)(ar4 + 0x40) == 0x1d) {
      return (undefined **)0x1d;
    }
    if (*(int *)(ar4 + 0x40) == 0x1c) {
      return (undefined **)0x1c;
    }
    if (*(int *)(ar4 + DAT_8c0647e8) == 0) {
      return (undefined **)0;
    }
    uVar1 = (*(code *)PTR_FUN_8c0647ec)(ar6[3],a5_00,puVar4,a7);
    uStack_17c._1_1_ = (char)uVar1;
    if (uStack_17c._1_1_ < '\x02') {
LAB_8c06482c:
      if ((*(int *)(DAT_8c06489c + (int)ar4) == 4) ||
         (puVar4 = *(undefined **)(DAT_8c06489c + (int)ar4), a7 = DAT_8c06489c,
         puVar4 == (undefined *)0x6)) {
        (*(code *)PTR_FUN_8c0648a0)(ar6[3],a5_00,puVar4,a7);
      }
      (*(code *)PTR_FUN_8c0648a4)(ar6[3],1,puVar4,a7);
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      if (*(int *)(DAT_8c06489c + (int)ar4) == 4) {
        *(undefined4 *)(ar4 + 0x40) = 0x31;
        uStack_138 = 0x31;
        *(undefined4 *)(ar4 + DAT_8c0648a8) = 0x31;
        *(undefined4 *)(PTR_DAT_8c0648ac + DAT_8c0648b0) = 0x31;
      }
      else {
        *(undefined4 *)(ar4 + 0x40) = 0x1c;
        a7 = DAT_8c064918;
        uStack_13c = 0x1c;
        *(undefined4 *)(DAT_8c064918 + (int)ar4) = 0x1c;
        *(undefined4 *)(PTR_DAT_8c06491c + DAT_8c064920) = 0x1c;
      }
      uStack_140 = 0x36;
      *(undefined4 *)(ar4 + DAT_8c064924) = 0x36;
      *(undefined4 *)(PTR_DAT_8c06491c + DAT_8c064928) = 0x36;
      uStack_144 = 0x36;
      *(undefined4 *)(ar4 + DAT_8c06492c) = 0x36;
      *(undefined4 *)(PTR_DAT_8c06491c + DAT_8c064930) = 0x36;
      (*(code *)PTR_FUN_8c064934)(ar6[6],0x24,0x1b,a7);
    }
    else {
      uVar1 = (*(code *)PTR_FUN_8c0647f0)(ar6[1],a5_00,puVar4,a7);
      *(undefined4 *)((int)&uStack_17c + DAT_8c0647f4) = uVar1;
      if (*(int *)((int)&uStack_17c + DAT_8c0647f4) != -1) goto LAB_8c06482c;
      uVar1 = (*(code *)PTR_FUN_8c0647f8)(ar6[3],a5_00,puVar4,a7);
      uStack_17c._0_1_ = (char)uVar1;
      if (((char)uStack_17c != '\x02') || (*(int *)(ar4 + DAT_8c0647e8) != 4)) goto LAB_8c06482c;
      (*(code *)PTR_FUN_8c0647fc)(ar6[6],3,puVar4,a7);
      (**(code **)(DAT_8c064800 + *ar5))(ar5,*ar6,puVar4,a7);
      (*(code *)PTR_FUN_8c064804)(ar6[3],1,puVar4,a7);
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x1d;
      uStack_12c = 0x1d;
      *(undefined4 *)(ar4 + DAT_8c064808) = 0x1d;
      *(undefined4 *)(PTR_DAT_8c06480c + DAT_8c064810) = 0x1d;
      uStack_130 = 0x2c;
      *(undefined4 *)(ar4 + DAT_8c064814) = 0x2c;
      *(undefined4 *)(PTR_DAT_8c06480c + DAT_8c064818) = 0x2c;
      uStack_134 = 0x36;
      *(undefined4 *)(ar4 + DAT_8c06481c) = 0x36;
      *(undefined4 *)(PTR_DAT_8c06480c + DAT_8c064820) = 0x36;
      (*(code *)PTR_FUN_8c064828)(DAT_8c064824,0x2c,puVar4,a7);
    }
    ppuVar2 = DAT_8c064938;
    *(undefined4 *)((int)DAT_8c064938 + (int)ar4) = 0;
    break;
  case 5:
    uVar1 = (**(code **)(DAT_8c064978 + *ar5))(ar5,a5_00,puVar4,a7);
    *(undefined4 *)((int)&uStack_17c + DAT_8c06497c) = uVar1;
    if (*(int *)((int)&uStack_17c + DAT_8c06497c) == 1) {
      (*(code *)PTR_FUN_8c064980)(ar6[3],6,puVar4,a7);
      ppuVar2 = (undefined **)(*(code *)PTR_FUN_8c064984)(ar6[6],0x25,0x1b,a7);
    }
    else {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x2c;
      *(undefined4 *)(ar4 + DAT_8c0649dc) = 0x2c;
      *(undefined4 *)(PTR_DAT_8c0649e0 + DAT_8c0649e4) = 0x2c;
      *(undefined4 *)(ar4 + DAT_8c0649e8) = 0x36;
      *(undefined4 *)(PTR_DAT_8c0649e0 + DAT_8c0649ec) = 0x36;
      *(undefined4 *)(ar4 + DAT_8c0649f0) = 0x36;
      ppuVar2 = DAT_8c0649f4;
      *(undefined4 *)((int)DAT_8c0649f4 + (int)PTR_DAT_8c0649e0) = 0x36;
    }
    break;
  case 6:
    ppuVar2 = (undefined **)(*(code *)PTR_FUN_8c064a0c)(ar6[3],7,puVar4,a7);
    break;
  case 7:
    if (*(int *)(ar4 + 0x40) == 0x17) {
      ppuVar2 = (undefined **)0x17;
    }
    else {
      (*(code *)PTR_FUN_8c064a80)(ar6[3],1,puVar4,a7);
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 99;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x17;
      *(undefined4 *)(ar4 + DAT_8c064a84) = 0x17;
      *(undefined4 *)(PTR_DAT_8c064a88 + DAT_8c064a8c) = 0x17;
      *(undefined4 *)(ar4 + DAT_8c064a90) = 0x36;
      *(undefined4 *)(PTR_DAT_8c064a88 + DAT_8c064a94) = 0x36;
      *(undefined4 *)(ar4 + DAT_8c064a98) = 0x36;
      ppuVar2 = DAT_8c064a9c;
      *(undefined4 *)((int)DAT_8c064a9c + (int)PTR_DAT_8c064a88) = 0x36;
    }
    break;
  case 8:
    ar4[DAT_8c064b48] = 0;
    puVar4 = PTR_FUN_8c064b4c;
    (*(code *)PTR_FUN_8c064b4c)(ar6[3],0,PTR_FUN_8c064b4c,a7);
    ar4[DAT_8c064b50] = 0;
    (*(code *)PTR_FUN_8c064b54)(ar6[3],0,puVar4,a7);
    (*(code *)PTR_FUN_8c064b58)(ar6[3],0,puVar4,a7);
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 8) = 0x14;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    uStack_160 = 0;
    *(undefined4 *)(ar4 + DAT_8c064b5c) = 0;
    *(undefined4 *)(PTR_DAT_8c064b60 + DAT_8c064b64) = 0;
    uStack_164 = 0x36;
    *(undefined4 *)(ar4 + DAT_8c064b68) = 0x36;
    iVar3 = DAT_8c064b6c;
    *(undefined4 *)(PTR_DAT_8c064b60 + DAT_8c064b6c) = 0x36;
    uStack_168 = 0x36;
    *(undefined4 *)(ar4 + DAT_8c064b70) = 0x36;
    puVar4 = PTR_DAT_8c064b60;
    *(undefined4 *)(PTR_DAT_8c064b60 + DAT_8c064b74) = 0x36;
    ppuVar2 = (undefined **)(*(code *)PTR_FUN_8c064b78)(0x36,iVar3,puVar4,0x36);
  }
  return ppuVar2;
}



/* ret_const_0_064b7c @ 8c064b7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_064b7c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c064b84 @ 8c064b84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c064b84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x3b) = *(char *)(ar4 + 0x3b) + '\x01';
  return 0x3b;
}



/* noop_064b9c @ 8c064b9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_064b9c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c064ba0 @ 8c064ba0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c064ba0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c064ba8;
  *(undefined1 *)(DAT_8c064ba8 + ar4) = (undefined1)ar5;
  return iVar1;
}



/* FUN_8c064bac @ 8c064bac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c064bac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 0x3b);
}



/* s_REACTION_TITILLATE_064bb8 @ 8c064bb4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_REACTION_TITILLATE_064bb8(int ar4,undefined4 ar5,int ar6,undefined *ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *a5;
  char in_FPSCR_SZ;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [36];
  
  a5 = auStack_2c;
  iVar2 = 0x10;
  puVar4 = PTR_DAT_8c064c7c;
  do {
    puVar3 = puVar4 + 1;
    *a5 = *puVar4;
    puVar4 = puVar4 + 2;
    a5[1] = *puVar3;
    a5 = a5 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = ar6;
  if (*(char *)(DAT_8c064c80 + ar4) == '\x01') {
    if (((*(int *)(ar4 + 0x40) == 0x15) || (*(int *)(ar4 + 0x40) != 0)) ||
       (*(int *)(ar4 + 4) == 0xd)) {
      if (((*(int *)(ar4 + 0x40) == 0x15) &&
          ((*(undefined4 *)(ar4 + 0x40) = 0x15, *(int *)(DAT_8c064d44 + ar4) == 6 ||
           (*(int *)(DAT_8c064d44 + ar4) == 7)))) && (*(int *)(DAT_8c064d48 + ar4) == -1)) {
        (*(code *)PTR_FUN_8c064d50)(ar4 + DAT_8c064d4c,0,ar6,ar7);
        ar7 = PTR_s_GRAPHICS_COMMON_8c064d54 + DAT_8c064d58;
        (*(code *)PTR_FUN_8c064d5c)(ar4 + DAT_8c064d4c,0x28,0,ar7);
        *(undefined4 *)(DAT_8c064d60 + ar4) = 0;
        iVar2 = ar4 + DAT_8c064d4c;
        uVar1 = (*(code *)PTR_FUN_8c064d6c)
                          (DAT_8c064d68,*(undefined4 *)(DAT_8c064d64 + ar4),iVar2,ar7);
        *(undefined4 *)(DAT_8c064d48 + ar4) = uVar1;
        *(undefined4 *)(DAT_8c064d70 + ar4) = 0;
        a5 = (undefined1 *)0x2;
        (*(code *)PTR_FUN_8c064d50)(ar4 + DAT_8c064d4c,2,iVar2,ar7);
      }
    }
    else {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x15;
      *(undefined4 *)(DAT_8c064c84 + ar4) = 0x15;
      *(undefined4 *)(PTR_DAT_8c064c88 + DAT_8c064c8c) = 0x15;
      *(undefined4 *)(DAT_8c064c90 + ar4) = 0x36;
      *(undefined4 *)(PTR_DAT_8c064c88 + DAT_8c064c94) = 0x36;
      *(undefined4 *)(DAT_8c064c98 + ar4) = 0x36;
      *(undefined4 *)(PTR_DAT_8c064c88 + DAT_8c064c9c) = 0x36;
      a5 = (undefined1 *)0x1;
      (*(code *)PTR_FUN_8c064ca0)(ar4 + DAT_8c064c8c,1,ar6,ar7);
    }
  }
  else if (*(int *)(ar4 + 0x40) == 0x15) {
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 8) = 0x14;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(DAT_8c064e2c + ar4) = 0;
    *(undefined4 *)(PTR_DAT_8c064e30 + DAT_8c064e34) = 0;
  }
  if (*(char *)(DAT_8c064e38 + ar4) == '\x01') {
    if (((*(int *)(ar4 + 0x40) == 0x16) || (*(int *)(ar4 + 0x40) != 0)) ||
       (*(int *)(ar4 + 4) == 0xd)) {
      if (*(int *)(ar4 + 0x40) == 0x16) {
        *(undefined4 *)(ar4 + 0x40) = 0x16;
      }
    }
    else {
      a5 = (undefined1 *)0x1;
      (*(code *)PTR_FUN_8c064e3c)(ar4 + DAT_8c064e34,1,iVar2,ar7);
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x16;
      *(undefined4 *)(DAT_8c064e2c + ar4) = 0x16;
      *(undefined4 *)(PTR_DAT_8c064e30 + DAT_8c064e34) = 0x16;
      *(undefined4 *)(DAT_8c064e40 + ar4) = 0x36;
      *(undefined4 *)(PTR_DAT_8c064e30 + DAT_8c064e44) = 0x36;
      *(undefined4 *)(DAT_8c064e48 + ar4) = 0x36;
      *(undefined4 *)(PTR_DAT_8c064e30 + DAT_8c064e4c) = 0x36;
    }
  }
  if (*(char *)(DAT_8c064f0c + ar4) == '\x01') {
    if (*(int *)(ar4 + 0x40) == 0x14) {
      if (*(int *)(ar4 + 0x40) == 0x14) {
        *(undefined4 *)(ar4 + 0x40) = 0x14;
      }
    }
    else if (((*(int *)(ar4 + 0x40) == 0) || (*(int *)(ar4 + 0x40) == 0x12)) ||
            (*(int *)(ar4 + 0x40) == 0x10)) {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x14;
      *(undefined4 *)(DAT_8c064f10 + ar4) = 0x14;
      *(undefined4 *)(PTR_DAT_8c064f14 + DAT_8c064f18) = 0x14;
      *(undefined4 *)(DAT_8c064f1c + ar4) = 0x36;
      *(undefined4 *)(PTR_DAT_8c064f14 + DAT_8c064f20) = 0x36;
      *(undefined4 *)(DAT_8c064f24 + ar4) = 0x36;
      *(undefined4 *)(PTR_DAT_8c064f14 + DAT_8c064f28) = 0x36;
      (*(code *)PTR_FUN_8c064f2c)(ar4 + DAT_8c064f18,0xffffffff,iVar2,ar7);
      ar7 = PTR_s_GRAPHICS_COMMON_8c064f30 + DAT_8c064f34;
      iVar2 = 0;
      a5 = (undefined1 *)0x27;
      (*(code *)PTR_FUN_8c064f38)(ar4 + DAT_8c064f18,0x27,0,ar7);
    }
  }
  if (((*(char *)(DAT_8c065040 + ar4) == '\x01') &&
      (uVar1 = (*(code *)PTR_FUN_8c065044)(*(int *)(ar6 + 4) + 0x78,a5,iVar2,ar7),
      (char)uVar1 != '\x01')) &&
     (uVar1 = (*(code *)PTR_FUN_8c065048)(*(undefined4 *)(ar6 + 4),a5,iVar2,ar7), 2 < (short)uVar1))
  {
    if ((*(int *)(ar4 + 4) == 0xd) || (*(int *)(ar4 + 0x40) != 0)) {
      if ((*(int *)(ar4 + 0x40) == 0x2a) || (*(int *)(ar4 + 0x40) == 0x2b)) {
        uVar1 = (*(code *)PTR_get_field_b8_101178_8c065140)
                          (*(undefined4 *)(DAT_8c06513c + *(int *)(ar6 + 0x18)),a5,iVar2,ar7);
        if ((char)uVar1 == '\x01') {
          *(undefined4 *)(DAT_8c065144 + ar4) = 0x2a;
          *(undefined4 *)(PTR_DAT_8c065148 + DAT_8c06514c) = 0x2a;
          *(undefined1 *)(DAT_8c065150 + ar4) = 1;
          (*(code *)PTR_FUN_8c065158)(ar4 + DAT_8c065154,1,iVar2,ar7);
          *(int *)(DAT_8c06515c + ar4) = *(int *)(DAT_8c06515c + ar4) + 1;
        }
        uVar1 = (*(code *)PTR_get_field_b8_101178_8c065140)
                          (*(undefined4 *)(DAT_8c06513c + *(int *)(ar6 + 0x18)),
                           PTR_get_field_b8_101178_8c065140,iVar2,ar7);
        if ((char)uVar1 == '\x02') {
          *(undefined4 *)(ar4 + 0x40) = 0x2b;
          *(undefined4 *)(DAT_8c065144 + ar4) = 0x2b;
          *(undefined4 *)(PTR_DAT_8c065148 + DAT_8c06514c) = 0x2b;
          *(undefined1 *)(DAT_8c065150 + ar4) = 1;
          *(int *)(DAT_8c06515c + ar4) = *(int *)(DAT_8c06515c + ar4) + 1;
        }
      }
    }
    else {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x29;
      *(undefined4 *)(DAT_8c06504c + ar4) = 0x29;
      *(undefined4 *)(PTR_DAT_8c065050 + DAT_8c065054) = 0x29;
      *(undefined4 *)(DAT_8c065058 + ar4) = 0x2a;
      *(undefined4 *)(PTR_DAT_8c065050 + DAT_8c06505c) = 0x2a;
      *(undefined4 *)(DAT_8c065060 + ar4) = 0x36;
      *(undefined4 *)(PTR_DAT_8c065050 + DAT_8c065064) = 0x36;
      (*(code *)PTR_Vec3_ctor_copy_8c065068)(auStack_3c,*(int *)(ar6 + 0x14) + 0x10,iVar2,ar7);
      (*(code *)PTR_Vec3_assign_wrap_063818_8c06506c)(ar4,auStack_3c,iVar2,ar7);
      (*(code *)PTR_Vec3_dtor_8c065070)(auStack_3c,0xffffffff,iVar2,ar7);
      (*(code *)PTR_Vec3_ctor_copy_8c065068)(auStack_4c,*(int *)(ar6 + 0x14) + 0x10,iVar2,ar7);
      (*(code *)PTR_Vec3_assign_wrap_05f640_8c065074)(ar4,auStack_4c,iVar2,ar7);
      (*(code *)PTR_Vec3_dtor_8c065070)(auStack_4c,0xffffffff,iVar2,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x30) = DAT_8c065078;
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = CONCAT44(uRam8c06507c,DAT_8c065078);
      }
    }
  }
  else if ((*(int *)(ar4 + 0x40) == 0x29) || (*(int *)(ar4 + 0x40) == 0x2a)) {
    if ((*(int *)(ar4 + 0x40) == 0x2a) && (0x1e < *(int *)(DAT_8c065200 + ar4))) {
      (*(code *)PTR_FUN_8c065210)
                (ar4 + DAT_8c06520c,0x15,0,PTR_s_GRAPHICS_COMMON_8c065204 + DAT_8c065208);
      *(undefined4 *)(DAT_8c065200 + ar4) = 0;
    }
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 8) = 0x14;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(DAT_8c065214 + ar4) = 0;
    *(undefined4 *)(PTR_DAT_8c065218 + DAT_8c06520c) = 0;
  }
  *(undefined1 *)(DAT_8c06521c + ar4) = 0;
  *(undefined1 *)(DAT_8c065220 + ar4) = 0;
  iVar2 = DAT_8c065224;
  *(undefined1 *)(DAT_8c065224 + ar4) = 0;
  return iVar2;
}



/* s_GRATIFIC_RID_HOT_06522a @ 8c065228 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRATIFIC_RID_HOT_06522a(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c0652d4)(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      (*(code *)PTR_FUN_8c0652e4)
                (ar4 + DAT_8c0652e0,7,0,PTR_s_GRAPHICS_COMMON_8c0652d8 + DAT_8c0652dc);
      iVar1 = DAT_8c0652e8;
      *(undefined4 *)(DAT_8c0652e8 + ar4) = 7;
    }
    else if (iVar1 == 1) {
      (*(code *)PTR_FUN_8c0652e4)
                (ar4 + DAT_8c0652e0,8,0,PTR_s_GRAPHICS_COMMON_8c0652d8 + DAT_8c0652ec);
      iVar1 = DAT_8c0652e8;
      *(undefined4 *)(DAT_8c0652e8 + ar4) = 7;
    }
    else if (iVar1 == 3) {
      (*(code *)PTR_FUN_8c0652e4)
                (ar4 + DAT_8c0652e0,0x1c,0,PTR_s_GRAPHICS_COMMON_8c0652d8 + DAT_8c0652f0);
      iVar1 = DAT_8c0652e8;
      *(undefined4 *)(DAT_8c0652e8 + ar4) = 7;
    }
  }
  return iVar1;
}



/* FUN_8c0652f4 @ 8c0652f4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0652f4(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint a5;
  int a6;
  char in_FPSCR_SZ;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  a6 = ar6;
  iVar1 = (*(code *)PTR_FUN_8c065328)(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
  if (iVar1 == 0) {
    *(undefined4 *)(DAT_8c06534c + ar4) = 0;
    uVar2 = (*(code *)PTR_FUN_8c065350)(*(undefined4 *)(ar6 + 4),ar5,a6,ar7);
    *(int *)(DAT_8c065354 + ar4) = (int)(char)uVar2;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(DAT_8c065378 + ar4) = 1;
    uVar2 = (*(code *)PTR_FUN_8c06537c)(*(int *)(ar6 + 4) + 0x18,ar5,a6,ar7);
    *(int *)(DAT_8c065380 + ar4) = (int)(char)uVar2;
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(DAT_8c0653d0 + ar4) = 3;
    uVar2 = (*(code *)PTR_FUN_8c0653d4)(*(int *)(ar6 + 4) + 0x48,ar5,a6,ar7);
    *(int *)(DAT_8c0653d8 + ar4) = (int)(char)uVar2;
  }
  else if (iVar1 == 4) {
    *(undefined4 *)(DAT_8c0653a4 + ar4) = 4;
    uVar2 = (*(code *)PTR_FUN_8c0653a8)(*(int *)(ar6 + 4) + 0x60,ar5,a6,ar7);
    *(int *)(DAT_8c0653ac + ar4) = (int)(char)uVar2;
  }
  else {
    *(undefined4 *)(DAT_8c0654f0 + ar4) = 7;
    *(undefined4 *)(DAT_8c0654f4 + ar4) = 0;
    iVar1 = (*(code *)PTR_get_field_24_05eed0_8c0654fc)(*(int *)(ar6 + 4) + DAT_8c0654f8,ar5,a6,ar7)
    ;
    if (iVar1 == 1) {
      *(undefined4 *)(DAT_8c0654f0 + ar4) = 8;
    }
    if (*(int *)(ar4 + 0x40) == 3) {
      *(undefined4 *)(DAT_8c0654f0 + ar4) = 9;
    }
  }
  if ((*(int *)(ar4 + 0x40) == 0) &&
     (uVar2 = (*(code *)PTR_FUN_8c065500)(*(int *)(ar6 + 4) + 0x78,ar5,a6,ar7),
     (char)uVar2 == '\x01')) {
    *(undefined4 *)(DAT_8c0654f0 + ar4) = 5;
    uVar2 = (*(code *)PTR_FUN_8c065504)(*(int *)(ar6 + 4) + 0x78,ar5,a6,ar7);
    *(int *)(DAT_8c0654f4 + ar4) = (int)(char)uVar2;
  }
  if ((*(int *)(ar4 + 0x40) == 0) || (iVar1 = *(int *)(ar4 + 0x40), iVar1 == 3)) {
    iVar1 = (*(code *)PTR_get_field_40_03598c_8c065508)(*(undefined4 *)(ar6 + 0xc),ar5,a6,ar7);
    if ((iVar1 == 0) &&
       ((((iVar1 = (**(code **)(**(int **)(ar6 + 8) + 0x34))(*(int **)(ar6 + 8),ar5,a6,ar7),
          iVar1 != 1 &&
          (iVar1 = (*(code *)PTR_get_field_178_035734_8c06550c)(*(undefined4 *)(ar6 + 8),ar5,a6,ar7)
          , iVar1 == 0)) &&
         (iVar1 = (*(code *)PTR_get_field_770_05eeb8_8c065514)(ar4 + DAT_8c065510,ar5,a6,ar7),
         iVar1 == 0)) && (*(int *)(DAT_8c065518 + ar4) == -1)))) {
      uVar2 = (*(code *)PTR_get_field_a0_035724_8c06551c)(*(undefined4 *)(ar6 + 0x18),ar5,a6,ar7);
      a5 = (uint)((char)uVar2 == '\x03');
      iVar1 = (*(code *)PTR_s_JUNGLE_0309ca_8c065520)(ar4 + DAT_8c065510,a5,a6,ar7);
      if (iVar1 != 0) {
        for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
          uVar2 = (*(code *)PTR_FUN_8c06555c)(iVar1 * 0x18 + *(int *)(ar6 + 4),a5,a6,ar7);
          if ((char)uVar2 == '\x01') {
            *(undefined4 *)(DAT_8c065560 + ar4 + iVar1 * 4) = 1;
          }
          else {
            *(undefined4 *)(DAT_8c065684 + ar4 + iVar1 * 4) = 0;
          }
        }
        a6 = ar4 + DAT_8c065688;
        uVar2 = (*(code *)PTR_FUN_8c065690)(DAT_8c06568c,1,a6,ar7);
        *(undefined4 *)(DAT_8c065694 + ar4) = uVar2;
      }
      if ((*(int *)(ar4 + 0x40) == 3) && (*(int *)(DAT_8c065694 + ar4) != -1)) {
        (*(code *)PTR_FUN_8c065698)(ar4 + DAT_8c065688,1,a6,ar7);
      }
    }
    iVar1 = *(int *)(ar4 + 4);
    if (((iVar1 == 0) && (iVar1 = 0, *(int *)(DAT_8c06569c + ar4) != 0)) &&
       (iVar1 = *(int *)(DAT_8c065694 + ar4), iVar1 != -1)) {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(DAT_8c0656a0 + ar4) = 0x12;
      *(undefined4 *)(PTR_DAT_8c0656a4 + DAT_8c065688) = 0x12;
      *(undefined4 *)(DAT_8c0656a8 + ar4) = 0xb;
      *(undefined4 *)(PTR_DAT_8c0656a4 + DAT_8c0656ac) = 0xb;
      *(undefined4 *)(DAT_8c0656b0 + ar4) = 0xc;
      *(undefined4 *)(PTR_DAT_8c0656a4 + DAT_8c0656b4) = 0xc;
      (*(code *)PTR_Vec3_ctor_copy_8c0656b8)(auStack_24,*(int *)(ar6 + 0x14) + 0x10,a6,ar7);
      (*(code *)PTR_Vec3_assign_wrap_063818_8c0656bc)(ar4,auStack_24,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0656c0)(auStack_24,0xffffffff,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x30) = _DAT_8c0656c4;
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = CONCAT44(PTR_Vec3_assign_wrap_05f640_8c0656c8,_DAT_8c0656c4);
      }
      (*(code *)PTR_Vec3_ctor_copy_8c0656b8)(auStack_34,*(int *)(ar6 + 0x14) + 0x10,a6,ar7);
      (*(code *)PTR_Vec3_assign_wrap_05f640_8c0656c8)(ar4,auStack_34,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0656c0)(auStack_34,0xffffffff,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x78) = (undefined4)DAT_8c0656cc;
      }
      else {
        *(undefined8 *)(ar4 + 0x78) = CONCAT44(DAT_8c0656cc._4_4_,(undefined4)DAT_8c0656cc);
      }
      iVar1 = DAT_8c0656cc._4_4_;
      *(undefined1 *)(DAT_8c0656cc._4_4_ + ar4) = 0;
    }
  }
  return iVar1;
}



/* s_EVENT_ENDING_0656da @ 8c0656d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_EVENT_ENDING_0656da(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 *a6;
  undefined4 in_fr1;
  undefined8 uVar3;
  double dVar4;
  int iVar5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_a4;
  short sStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [36];
  
  puVar2 = PTR_Vec3_ctor_zero_8c065854;
  a6 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c065854)
            ((int)&uStack_a4 + DAT_8c065850,PTR_Vec3_ctor_zero_8c065854,ar6,ar7);
  if (*(int *)(DAT_8c065858 + ar4) == -1) goto LAB_8c065be6;
  if ((*(int *)(ar4 + 4) == 0) && (*(int *)(DAT_8c06585c + ar4) != 0)) {
    *(undefined4 *)(ar4 + 4) = 0xd;
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    uStack_84 = 0x12;
    *(undefined4 *)(DAT_8c065860 + ar4) = 0x12;
    *(undefined4 *)(PTR_DAT_8c065864 + DAT_8c065868) = 0x12;
    uStack_88 = 0xb;
    *(undefined4 *)(DAT_8c06586c + ar4) = 0xb;
    *(undefined4 *)(PTR_DAT_8c065864 + DAT_8c065870) = 0xb;
    uStack_8c = 0xc;
    *(undefined4 *)(DAT_8c065874 + ar4) = 0xc;
    *(undefined4 *)(PTR_DAT_8c065864 + DAT_8c065878) = 0xc;
    (*(code *)PTR_Vec3_ctor_copy_8c06587c)(auStack_30,ar6[5] + 0x10,a6,ar7);
    (*(code *)PTR_Vec3_assign_wrap_063818_8c065880)(ar4,auStack_30,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c065884)(auStack_30,0xffffffff,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44((undefined4)DAT_8c065888,in_fr1);
      *(undefined4 *)(ar4 + 0x30) = (undefined4)DAT_8c065888;
    }
    else {
      uVar3 = CONCAT44(DAT_8c065888._4_4_,(undefined4)DAT_8c065888);
      *(undefined8 *)(ar4 + 0x30) = uVar3;
    }
    in_fr1 = (undefined4)uVar3;
    *(undefined1 *)(DAT_8c065888._4_4_ + ar4) = 0;
  }
  (*(code *)PTR_Vec3_ctor_copy_8c06587c)(auStack_40,ar6[5] + 0x10,a6,ar7);
  (*(code *)PTR_Vec3_assign_wrap_05f640_8c065890)(ar4,auStack_40,a6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c065884)(auStack_40,0xffffffff,a6,ar7);
  (*(code *)PTR_FUN_8c065894)(*ar6,uVar1,a6,ar7);
  (*(code *)PTR_Vec3_sub_8c065898)(auStack_50,ar6[5] + 0x10,a6,ar7);
  (*(code *)PTR_Vec3_assign_8c06589c)((int)&uStack_a4 + DAT_8c065850,auStack_60,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c065884)(auStack_60,0xffffffff,a6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c065884)(auStack_50,0xffffffff,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)((int)&uStack_a4 + DAT_8c0658a4),in_fr1);
  }
  else {
    dVar4 = *(double *)((int)&uStack_a4 + DAT_8c0658a4);
  }
  if (in_FPSCR_PR == '\0') {
    iVar5 = (int)(float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    iVar5 = (int)dVar4;
  }
  *(int *)(DAT_8c0658a0 + ar4) = iVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)((int)&uStack_a4 + DAT_8c065850),SUB84(dVar4,0));
  }
  else {
    dVar4 = *(double *)((int)&uStack_a4 + DAT_8c065850);
  }
  if (in_FPSCR_PR == '\0') {
    iVar5 = (int)(float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    iVar5 = (int)dVar4;
  }
  *(int *)(DAT_8c0658a8 + ar4) = iVar5;
  iStack_64 = (*(code *)PTR_get_field_89130_0fa740_8c0658b0)(DAT_8c0658ac,uVar1,a6,ar7);
  if ((iStack_64 == 3) ||
     (iStack_68 = (*(code *)PTR_get_field_89130_0fa740_8c0658b0)(DAT_8c0658ac,uVar1,a6,ar7),
     iStack_68 == 5)) {
    puVar2 = (undefined *)0x1;
    (*(code *)PTR_FUN_8c0658b4)(ar6[3],1,a6,ar7);
  }
  else {
    puVar2 = (undefined *)0x0;
    (*(code *)PTR_FUN_8c065ac0)(ar6[3],0,a6,ar7);
  }
  iStack_6c = (*(code *)PTR_get_field_770_05eeb8_8c065ac8)(ar4 + DAT_8c065ac4,puVar2,a6,ar7);
  if (iStack_6c == 2) {
    *(undefined4 *)(DAT_8c065acc + ar4) = 0;
  }
  iStack_70 = (*(code *)PTR_FUN_8c065ad4)(DAT_8c065ad0,puVar2,a6,ar7);
  if (iStack_70 != 0) goto LAB_8c065be6;
  *(undefined4 *)(DAT_8c065ad8 + ar4) = 0;
  puVar2 = (undefined *)0x3;
  (*(code *)PTR_FUN_8c065adc)(ar4 + DAT_8c065ac4,3,a6,ar7);
  if (*(int *)(ar4 + 0x40) == 0xc) {
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 8) = 0;
    *(undefined4 *)(ar4 + 0xc) = 0;
  }
  uVar1 = (*(code *)PTR_FUN_8c065ae0)(ar6[1],puVar2,a6,ar7);
  sStack_9c = (short)uVar1;
  if (((sStack_9c == 3) &&
      (iStack_74 = (**(code **)(DAT_8c065ae4 + *ar5))(ar5,puVar2,a6,ar7), iStack_74 == 0)) &&
     (*(int *)(DAT_8c065ae8 + ar4) == 2)) {
    (*(code *)PTR_FUN_8c065aec)(ar6[3],1,a6,ar7);
    a6 = (undefined4 *)0x1b;
    (*(code *)PTR_FUN_8c065af0)(ar6[6],0x20,0x1b,ar7);
    (*(code *)PTR_FUN_8c065af4)(ar6[3],1,a6,ar7);
    (**(code **)(DAT_8c065af8 + *ar5))(ar5,1,a6,ar7);
    *(undefined4 *)(DAT_8c065ae8 + ar4) = 0;
    puVar2 = (undefined *)0x4;
    uVar1 = ar6[3];
    (*(code *)PTR_FUN_8c065afc)(uVar1,4,a6,ar7);
    *(undefined4 *)(DAT_8c065b00 + ar4) = 0;
    (*(code *)PTR_FUN_8c065b04)(uVar1,puVar2,a6,ar7);
  }
  uVar1 = (*(code *)PTR_FUN_8c065ae0)(ar6[1],puVar2,a6,ar7);
  uStack_a4._6_2_ = (short)uVar1;
  if (3 < uStack_a4._6_2_) {
    uVar1 = (*(code *)PTR_FUN_8c065b08)(ar6[3],puVar2,a6,ar7);
    uStack_a4._2_1_ = (char)uVar1;
    if ((uStack_a4._2_1_ == '\x01') && (*(int *)(DAT_8c065ae8 + ar4) == 7)) {
      *(undefined4 *)(DAT_8c065ae8 + ar4) = 0;
      puVar2 = (undefined *)0x1;
      (*(code *)PTR_FUN_8c065b0c)(ar6[3],1,a6,ar7);
    }
  }
  if ((*(int *)(DAT_8c065ae8 + ar4) == 6) || (*(int *)(DAT_8c065ae8 + ar4) == 4)) {
    uVar1 = (*(code *)PTR_FUN_8c065ae0)(ar6[1],puVar2,a6,ar7);
    uStack_a4._4_2_ = (short)uVar1;
    if (3 < uStack_a4._4_2_) {
      uVar1 = (*(code *)PTR_FUN_8c065b08)(ar6[3],puVar2,a6,ar7);
      uStack_a4._1_1_ = (char)uVar1;
      if (uStack_a4._1_1_ == '\x01') {
        if (*(int *)(DAT_8c065ae8 + ar4) == 4) {
          *(undefined1 *)(DAT_8c065b10 + ar4) = 1;
        }
        puVar2 = (undefined *)0x4;
        (*(code *)PTR_FUN_8c065b0c)(ar6[3],4,a6,ar7);
      }
    }
  }
  if (*(int *)(DAT_8c065ae8 + ar4) == 5) {
LAB_8c065a4a:
    *(undefined4 *)(DAT_8c065b24 + ar4) = 1;
    *(undefined4 *)(DAT_8c065ae8 + ar4) = 0;
  }
  else {
    puVar2 = PTR_s_GRAPHICS_COMMON_8c065b14 + DAT_8c065b18;
    iStack_78 = (*(code *)PTR_FUN_8c065b20)(ar4 + DAT_8c065b1c,puVar2,a6,ar7);
    if (iStack_78 == 0) goto LAB_8c065a4a;
  }
  uVar1 = (*(code *)PTR_FUN_8c065b28)(ar6[1] + 0x78,puVar2,a6,ar7);
  uStack_a4._0_1_ = (char)uVar1;
  if (((char)uStack_a4 == '\x01') && (*(int *)(DAT_8c065ae8 + ar4) == 3)) {
    (*(code *)PTR_FUN_8c065b2c)(ar6[1] + 0x78,puVar2,a6,ar7);
    *(undefined4 *)(DAT_8c065ae8 + ar4) = 0;
  }
  if (*(int *)(DAT_8c065ae8 + ar4) == 0xf) {
    *(undefined4 *)(ar4 + 4) = 5;
    *(undefined4 *)(ar4 + 8) = 0x55;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) = 5;
    uStack_90 = 5;
    *(undefined4 *)(DAT_8c065b30 + ar4) = 5;
    *(undefined4 *)(PTR_DAT_8c065b34 + DAT_8c065ac4) = 5;
    uStack_94 = 0x36;
    *(undefined4 *)(DAT_8c065b38 + ar4) = 0x36;
    *(undefined4 *)(PTR_DAT_8c065b34 + DAT_8c065b3c) = 0x36;
    uStack_98 = 0x36;
    *(undefined4 *)(DAT_8c065b98 + ar4) = 0x36;
    *(undefined4 *)(PTR_DAT_8c065b9c + DAT_8c065ba0) = 0x36;
    *(undefined4 *)(DAT_8c065ba4 + ar4) = 0;
  }
  if ((*(int *)(DAT_8c065ba8 + ar4) < 1) ||
     (iStack_7c = (*(code *)PTR_get_field_b0_065c8c_8c065bac)(ar6[3],puVar2,a6,ar7),
     *(int *)(DAT_8c065ba8 + ar4) < iStack_7c)) {
    puVar2 = (undefined *)0x0;
    (*(code *)PTR_FUN_8c065c54)(*ar6,0,a6,ar7);
  }
  else {
    (*(code *)PTR_FUN_8c065bb0)(ar6[3],*(undefined4 *)(DAT_8c065ba8 + ar4),a6,ar7);
    puVar2 = (undefined *)0x1;
    (*(code *)PTR_FUN_8c065bb4)(*ar6,1,a6,ar7);
  }
  (*(code *)PTR_s_STATUS_FORMAT_030306_8c065c5c)(ar4 + DAT_8c065c58,puVar2,a6,ar7);
  *(undefined1 *)(DAT_8c065c60 + ar4) = 1;
  *(undefined4 *)(DAT_8c065c64 + ar4) = 0xffffffff;
  *(undefined4 *)(DAT_8c065c68 + ar4) = 0;
LAB_8c065be6:
  iStack_80 = (*(code *)PTR_FUN_8c065c70)(DAT_8c065c6c,puVar2,a6,ar7);
  if ((iStack_80 == 0) && ((*(int *)(ar4 + 0x40) == 0xc || (*(int *)(ar4 + 0x40) == 0xb)))) {
    (*(code *)PTR_FUN_8c065c74)(ar4 + DAT_8c065c58,3,a6,ar7);
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 8) = 0;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined1 *)(DAT_8c065c60 + ar4) = 1;
  }
  uVar1 = (*(code *)PTR_Vec3_dtor_8c065c7c)((int)&uStack_a4 + DAT_8c065c78,0xffffffff,a6,ar7);
  return uVar1;
}



/* FUN_8c065c80 @ 8c065c80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c065c80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c065c88;
  *(undefined4 *)(DAT_8c065c88 + ar4) = ar5;
  return iVar1;
}



/* get_field_b0_065c8c @ 8c065c8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_b0_065c8c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c065c94 + ar4);
}



/* noop_065c98 @ 8c065c98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_065c98(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c065c9c @ 8c065c9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c065c9c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x3d) = (undefined1)ar5;
  return 0x3d;
}



/* FUN_8c065ca4 @ 8c065ca4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c065ca4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c065cac;
  *(undefined4 *)(DAT_8c065cac + ar4) = ar5;
  return iVar1;
}



/* FUN_8c065cb0 @ 8c065cb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c065cb0(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(DAT_8c065e4c + ar4) = *(undefined4 *)(DAT_8c065e50 + ar4);
  if (*(int *)(DAT_8c065e54 + ar4) != -1) goto LAB_8c065e2a;
  *(undefined4 *)(DAT_8c065e4c + ar4) = 0;
  switch(*(undefined4 *)(DAT_8c065e58 + ar4)) {
  case 0:
    *(undefined4 *)(DAT_8c065e4c + ar4) = 0x14;
    break;
  case 1:
    *(undefined4 *)(DAT_8c065e4c + ar4) = 0x2d;
    break;
  case 4:
    *(undefined4 *)(DAT_8c065e4c + ar4) = 0x1e;
  }
  iVar3 = ar6;
  uVar1 = (*(code *)PTR_FUN_8c065e5c)(*(int *)(ar6 + 4) + 0x78,ar5,ar6,ar7);
  if ((char)uVar1 == '\x01') {
    *(undefined4 *)(DAT_8c065e4c + ar4) = 0x14;
  }
  iVar2 = *(int *)(ar4 + 0x40);
  if (iVar2 < 0xf) {
    if (0xd < iVar2) {
      *(undefined4 *)(DAT_8c065e4c + ar4) = 0xf;
      goto LAB_8c065e2a;
    }
    if (5 < iVar2) {
      if (iVar2 == 9) {
        iVar3 = (*(code *)PTR_get_field_140_025f70_8c065e60)(*(undefined4 *)(ar6 + 4),ar5,iVar3,ar7)
        ;
        if (iVar3 == 0) {
          *(undefined4 *)(DAT_8c065e4c + ar4) = 0x19;
        }
        else {
          *(undefined4 *)(DAT_8c065e4c + ar4) = 0x1e;
        }
      }
      goto LAB_8c065e2a;
    }
    if (iVar2 < 0) goto LAB_8c065e2a;
    if (iVar2 != 0) {
      if (iVar2 == 3) {
        *(undefined4 *)(DAT_8c065e4c + ar4) = 0x37;
      }
      else if (iVar2 == 5) {
        *(undefined4 *)(DAT_8c065e4c + ar4) = 0x14;
      }
      goto LAB_8c065e2a;
    }
  }
  else {
    if (0x13 < iVar2) {
      if (iVar2 == 0x2f) {
        *(undefined4 *)(DAT_8c065e4c + ar4) = 0x14;
      }
      goto LAB_8c065e2a;
    }
    if (0x12 < iVar2) {
      *(undefined4 *)(DAT_8c065e4c + ar4) = 0x23;
      goto LAB_8c065e2a;
    }
    if (iVar2 != 0x10) goto LAB_8c065e2a;
  }
  iVar3 = (*(code *)PTR_FUN_8c065e64)(*(undefined4 *)(ar6 + 4),ar5,iVar3,ar7);
  if (iVar3 == 0) {
    *(undefined4 *)(DAT_8c065e4c + ar4) = 0x14;
  }
  else if (iVar3 == 1) {
    *(undefined4 *)(DAT_8c065e4c + ar4) = 0x14;
  }
  else if (iVar3 == 3) {
    *(undefined4 *)(DAT_8c065e4c + ar4) = 0x14;
  }
  else if (iVar3 == 4) {
    *(undefined4 *)(DAT_8c065e4c + ar4) = 0x14;
  }
LAB_8c065e2a:
  iVar3 = *(int *)(DAT_8c065e68 + ar4);
  if (iVar3 == 1) {
    *(undefined4 *)(DAT_8c065e4c + ar4) = 0x47;
    iVar3 = DAT_8c065e68;
    *(undefined4 *)(DAT_8c065e68 + ar4) = 0;
  }
  return iVar3;
}



/* s_IDLEACTION_SNEEZE_065e70 @ 8c065e6c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined * s_IDLEACTION_SNEEZE_065e70(int ar4,undefined4 ar5,int ar6,undefined *ar7)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = ar6;
  if ((((*(int *)(DAT_8c066098 + ar4) == -1) &&
       (iVar1 = (*(code *)PTR_get_field_40_03598c_8c06609c)(*(undefined4 *)(ar6 + 0xc),ar5,ar6,ar7),
       iVar1 == 0)) && (*(int *)(ar4 + 0x40) == 0x10)) &&
     (iVar1 = (**(code **)(**(int **)(ar6 + 8) + 0x30))(*(int **)(ar6 + 8),ar5,iVar3,ar7),
     iVar1 == 5)) {
    ar7 = PTR_s_GRAPHICS_COMMON_8c0660a0 + DAT_8c0660a4;
    iVar3 = 0;
    ar5 = 0x19;
    (*(code *)PTR_FUN_8c0660ac)(ar4 + DAT_8c0660a8,0x19,0,ar7);
  }
  puVar2 = *(undefined **)(DAT_8c066098 + ar4);
  if (((puVar2 == (undefined *)0xffffffff) &&
      (puVar2 = (undefined *)
                (*(code *)PTR_get_field_40_03598c_8c06609c)
                          (*(undefined4 *)(ar6 + 0xc),ar5,iVar3,ar7), puVar2 == (undefined *)0x0))
     && (puVar2 = *(undefined **)(ar4 + 4), puVar2 == (undefined *)0x0)) {
    iVar3 = (**(code **)(**(int **)(ar6 + 8) + 0x30))(*(int **)(ar6 + 8),ar5,iVar3,ar7);
    puVar2 = (undefined *)0xe;
    if ((iVar3 < 0xf) && (puVar2 = (undefined *)0x2, 1 < iVar3)) {
      puVar2 = (&switchD_8c065f22::switchdataD_8c065f28)[iVar3 + -2];
      switch(iVar3) {
      case 2:
        puVar2 = (undefined *)
                 (*(code *)PTR_FUN_8c0660b4)
                           (ar4 + DAT_8c0660a8,0x19,0,PTR_s_GRAPHICS_COMMON_8c0660a0 + DAT_8c0660b0)
        ;
        break;
      case 3:
        puVar2 = (undefined *)
                 (*(code *)PTR_FUN_8c0660b4)
                           (ar4 + DAT_8c0660a8,0x19,0,PTR_s_GRAPHICS_COMMON_8c0660a0 + DAT_8c0660b8)
        ;
        break;
      case 4:
        puVar2 = (undefined *)
                 (*(code *)PTR_FUN_8c0660b4)
                           (ar4 + DAT_8c0660a8,0x19,0,PTR_s_GRAPHICS_COMMON_8c0660a0 + DAT_8c0660bc)
        ;
        break;
      case 5:
        puVar2 = (undefined *)
                 (*(code *)PTR_FUN_8c0660b4)
                           (ar4 + DAT_8c0660a8,0x19,0,PTR_s_GRAPHICS_COMMON_8c0660a0 + DAT_8c0660a4)
        ;
        break;
      case 6:
        puVar2 = (undefined *)
                 (*(code *)PTR_FUN_8c0660b4)
                           (ar4 + DAT_8c0660a8,0x19,0,PTR_s_GRAPHICS_COMMON_8c0660a0 + DAT_8c0660c0)
        ;
        break;
      case 9:
        puVar2 = (undefined *)
                 (*(code *)PTR_FUN_8c0660b4)
                           (ar4 + DAT_8c0660a8,0x19,0,PTR_s_GRAPHICS_COMMON_8c0660a0 + DAT_8c0660c4)
        ;
        break;
      case 0xb:
        puVar2 = (undefined *)
                 (*(code *)PTR_FUN_8c0660b4)
                           (ar4 + DAT_8c0660a8,0x19,0,PTR_s_GRAPHICS_COMMON_8c0660a0 + DAT_8c0660cc)
        ;
        break;
      case 0xd:
        puVar2 = (undefined *)
                 (*(code *)PTR_FUN_8c0660b4)
                           (ar4 + DAT_8c0660a8,0x19,0,PTR_s_GRAPHICS_COMMON_8c0660a0 + DAT_8c0660c8)
        ;
        break;
      case 0xe:
        puVar2 = (undefined *)
                 (*(code *)PTR_FUN_8c0660b4)
                           (ar4 + DAT_8c0660a8,0x19,0,PTR_s_GRAPHICS_COMMON_8c0660a0 + DAT_8c0660d0)
        ;
      }
    }
  }
  return puVar2;
}



/* s_STATUS_SUCKED_0660da @ 8c0660d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_STATUS_SUCKED_0660da(int ar4,int *ar5,int *ar6,undefined *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *a5;
  int *a6;
  undefined *a7;
  
  a5 = ar5;
  a6 = ar6;
  if (((*(int *)(ar4 + 0x6c) == 0) && (*(int *)(ar4 + 0x40) == 0)) &&
     (*(int *)(DAT_8c066154 + ar4) == 7)) {
    uVar1 = (*(code *)PTR_FUN_8c066158)(ar4,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = uVar1;
    if ((*(int *)(ar4 + 0x6c) == 0) || (*(int *)(ar4 + 4) != 0)) {
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
    else {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x74))(*(int *)(ar4 + 0x6c),a5,a6,ar7);
      *(undefined4 *)(ar4 + 0x40) = 6;
      *(undefined4 *)(ar4 + 4) = 6;
      *(undefined4 *)(ar4 + 0xc) = 0;
      a5 = DAT_8c06615c;
      (*(code *)PTR_FUN_8c066160)(ar4,DAT_8c06615c,a6,ar7);
    }
  }
  iVar2 = (**(code **)(DAT_8c0661d0 + *(int *)(*ar6 + 8)))(*ar6,a5,a6,ar7);
  if ((iVar2 == 1) && (*(int *)(ar4 + 4) != 1)) {
    iVar2 = (*(code *)PTR_get_field_6c_02f46c_8c0661d4)(*ar6,a5,a6,ar7);
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_get_field_70_05f490_8c0661d8)(*ar6,a5,a6,ar7);
      if (iVar2 != 0) goto LAB_8c0661e8;
      a6 = (int *)0x1b;
      (*(code *)PTR_FUN_8c0661dc)(ar6[6],0x1b,0x1b,ar7);
      *(undefined4 *)(ar4 + 0x38) = 2;
      *(undefined4 *)(ar4 + 4) = 1;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 8) = 99;
      a5 = DAT_8c0661e0;
      (*(code *)PTR_FUN_8c0661e4)(ar4,DAT_8c0661e0,a6,ar7);
    }
    else {
LAB_8c0661e8:
      if (*(int *)(ar4 + 4) != 0xb) {
        *(undefined4 *)(ar4 + 0x38) = 2;
        *(undefined4 *)(ar4 + 4) = 0xb;
        *(undefined4 *)(ar4 + 8) = 99;
        *(undefined4 *)(ar4 + 0x40) = 0xe;
        a5 = DAT_8c0663ac;
        (*(code *)PTR_FUN_8c0663b0)(ar4,DAT_8c0663ac,a6,ar7);
        iVar2 = (*(code *)PTR_get_field_c8_061174_8c0663b4)(ar6[3],a5,a6,ar7);
        if ((iVar2 == 0) || (*(int *)(DAT_8c0663b8 + ar4) != -1)) {
          ar7 = PTR_s_GRAPHICS_COMMON_8c0663bc + DAT_8c0663c0;
          a6 = (int *)0x0;
          a5 = (int *)0x19;
          (*(code *)PTR_FUN_8c0663c8)(ar4 + DAT_8c0663c4,0x19,0,ar7);
        }
        if (*(int *)(ar4 + 0x6c) != 0) {
          (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),a5,a6,ar7);
          *(undefined4 *)(ar4 + 0x6c) = 0;
        }
      }
    }
    if ((*(char *)(DAT_8c0663cc + ar4) == '\x01') && (*(int *)(ar4 + 4) == 0)) {
      *(undefined1 *)(DAT_8c0663cc + ar4) = 0;
    }
  }
  uVar1 = (*(code *)PTR_FUN_8c0663d0)(ar6[1],a5,a6,ar7);
  if ((short)uVar1 != 1) {
    uVar1 = (*(code *)PTR_FUN_8c0663d0)(ar6[1],a5,a6,ar7);
    if ((short)uVar1 != 2) goto LAB_8c0662e6;
  }
  iVar2 = (*(code *)PTR_get_field_c_06645c_8c0663d4)(ar6[3],a5,a6,ar7);
  if (((iVar2 == 1) && (*(char *)(DAT_8c0663cc + ar4) != '\x01')) && (*(int *)(ar4 + 4) != 0xd)) {
    *(undefined1 *)(DAT_8c0663cc + ar4) = 1;
    (*(code *)PTR_FUN_8c0663b0)(ar4,DAT_8c0663d8,a6,ar7);
    a5 = (int *)0x0;
    (*(code *)PTR_FUN_8c0663dc)(ar6[3],0,a6,ar7);
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 4) = 6;
    *(undefined4 *)(ar4 + 0x38) = 2;
  }
LAB_8c0662e6:
  if (*(int *)(ar4 + 0x6c) == 0) {
    iVar2 = (*(code *)PTR_get_field_13c_028d9c_8c0663e0)(ar6[1],a5,a6,ar7);
    if ((iVar2 == 6) && (*(int *)(ar4 + 0x40) == 0)) {
      a5 = (int *)0xf;
      iVar2 = (**(code **)(DAT_8c0663e4 + *ar5))(ar5,0xf,a6,ar7);
      if ((0 < iVar2) && ((*(int *)(ar4 + 4) != 0xd && (*(int *)(ar4 + 4) != 6)))) {
        a5 = DAT_8c0663d8;
        (*(code *)PTR_FUN_8c0663b0)(ar4,DAT_8c0663d8,a6,ar7);
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 4) = 6;
        *(undefined4 *)(ar4 + 0x38) = 2;
      }
    }
  }
  iVar2 = (*(code *)PTR_get_field_c4_066448_8c0663e8)(ar6[3],a5,a6,ar7);
  if (((iVar2 == 0) && (iVar2 = *(int *)(ar4 + 0x40), iVar2 == 0)) &&
     (iVar2 = *(int *)(DAT_8c0663b8 + ar4), iVar2 == -1)) {
    iVar2 = (*(code *)PTR_get_field_13c_028d9c_8c0663e0)(ar6[1],a5,a6,ar7);
    if (iVar2 == 7) {
      uVar1 = 10;
      iVar3 = (**(code **)(DAT_8c0663e4 + *ar5))(ar5,10,a6,ar7);
      iVar2 = 1;
      if (0 < iVar3) {
        uVar1 = (*(code *)PTR_FUN_8c0663ec)(ar6[3],uVar1,a6,ar7);
        iVar2 = (int)(char)uVar1;
        if (iVar2 == 2) {
          a7 = PTR_s_GRAPHICS_COMMON_8c066428 + DAT_8c06642c;
          uVar1 = 0;
          (*(code *)PTR_FUN_8c066434)(ar4 + DAT_8c066430,0x2c,0,a7);
          iVar2 = (*(code *)PTR_FUN_8c066438)(ar6[3],1,uVar1,a7);
        }
      }
    }
  }
  return iVar2;
}



/* FUN_8c06643c @ 8c06643c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c06643c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c066444;
  *(undefined4 *)(DAT_8c066444 + ar4) = ar5;
  return iVar1;
}



/* get_field_c4_066448 @ 8c066448 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_c4_066448(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c066450 + ar4);
}



/* FUN_8c066454 @ 8c066454 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c066454(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0xc) = ar5;
  return in_r0;
}



/* get_field_c_06645c @ 8c06645c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_c_06645c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0xc);
}



/* s_STATUS_LASTONE_066468 @ 8c066464 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_STATUS_LASTONE_066468(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int a5;
  undefined4 a5_00;
  
  iVar3 = ar6;
  iVar1 = (*(code *)PTR_get_field_13c_028d9c_8c066560)(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
  if (iVar1 == 7) {
    iVar1 = (**(code **)(DAT_8c066564 + *ar5))(ar5,5,iVar3,ar7);
    if (iVar1 == 1) {
      a5 = ar6;
      iVar1 = (*(code *)PTR_FUN_8c066568)(ar4,ar6,iVar3,ar7);
      if (iVar1 == 1) {
        iVar1 = (*(code *)PTR_get_field_40_03598c_8c06656c)(*(undefined4 *)(ar6 + 0xc),a5,iVar3,ar7)
        ;
        if (iVar1 == 0) {
          iVar1 = (*(code *)PTR_FUN_8c066574)
                            (*(undefined4 *)(DAT_8c066570 + *(int *)(ar6 + 0x18)),a5,iVar3,ar7);
          if (((iVar1 == 0) && (iVar1 = *(int *)(DAT_8c066578 + ar4), iVar1 == -1)) &&
             (iVar1 = 3, *(char *)(DAT_8c06657c + ar4) < '\x04')) {
            uVar2 = (*(code *)PTR_FUN_8c066580)(*(undefined4 *)(ar6 + 0x18),a5,iVar3,ar7);
            a5_00 = 0x43;
            iVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c066584)
                              (uVar2 & 0xffff,0x43,iVar3,ar7);
            if (iVar1 == 2) {
              uVar2 = (*(code *)PTR_FUN_8c066580)(*(undefined4 *)(ar6 + 0x18),a5_00,iVar3,ar7);
              iVar3 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c066588)
                                (uVar2 & 0xffff,0x3c,iVar3,ar7);
              iVar1 = 2;
              if ((2 < iVar3) && (iVar1 = *(int *)(DAT_8c06658c + ar4), iVar1 == 0)) {
                *(undefined4 *)(DAT_8c06658c + ar4) = 1;
                iVar1 = (*(code *)PTR_FUN_8c06659c)
                                  (ar4 + DAT_8c066598,0x16,0,
                                   PTR_s_GRAPHICS_COMMON_8c066590 + DAT_8c066594);
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}



/* FUN_8c0665a0 @ 8c0665a0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0665a0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c066610)(*(undefined4 *)(ar5 + 4),ar5,ar6,ar7);
  if ((iVar1 == 0) || (iVar1 != 1)) {
    if (*(int *)(ar4 + 4) == 2) {
      puVar2 = (undefined4 *)(*(code *)PTR_get_field_8_066620_8c066618)(ar4,ar5,ar6,ar7);
    }
    else {
      (*(code *)PTR_get_field_8_066620_8c066618)(ar4,ar5,ar6,ar7);
      puVar2 = &DAT_8c06661c;
    }
  }
  else {
    puVar2 = (undefined4 *)&DAT_8c066614;
  }
  return puVar2;
}



/* get_field_8_066620 @ 8c066620 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_8_066620(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 8);
}



/* FUN_8c066628 @ 8c066628 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c066628(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

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
  
  (*(code *)PTR_Vec3_ctor_zero_8c06681c)(&uStack_18,ar5,ar6,ar7);
  a7 = auStack_44;
  a6 = auStack_40;
  a5 = auStack_3c;
  (**(code **)(DAT_8c066820 + *ar5))(ar5,a5,a6,a7);
  uVar1 = (*(code *)PTR_get_field_4_05eed8_8c066824)(ar4,a5,a6,a7);
  switch(uVar1) {
  case 6:
    if (*(int *)(ar4 + 0x6c) != 0) {
      (*(code *)PTR_FUN_8c066828)(*(undefined4 *)(ar4 + 0x6c),a5,a6,a7);
      uVar1 = (*(code *)PTR_Vec3_assign_8c06682c)(&uStack_18,auStack_38,a6,a7);
      uVar1 = (*(code *)PTR_Vec3_assign_8c06682c)(ar4 + 0x70,uVar1,a6,a7);
      (*(code *)PTR_Vec3_assign_8c06682c)(ar4 + 0x28,uVar1,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c066830)(auStack_38,0xffffffff,a6,a7);
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
    break;
  case 0xd:
    if (*(int *)(ar4 + 0x6c) != 0) {
      (*(code *)PTR_FUN_8c066828)(*(undefined4 *)(ar4 + 0x6c),a5,a6,a7);
      (*(code *)PTR_Vec3_assign_8c06682c)(&uStack_18,auStack_28,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c066830)(auStack_28,0xffffffff,a6,a7);
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
  uVar1 = (*(code *)PTR_Vec3_dtor_8c066830)(&uStack_18,0xffffffff,a6,a7);
  return uVar1;
}



/* FUN_8c066834 @ 8c066834 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c066834(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 *a6;
  undefined1 *a6_00;
  undefined1 *a7;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *a6_01;
  undefined1 *puVar5;
  uint in_fr1;
  double dVar6;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar7;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar5 = auStack_4;
  }
  else {
    puVar5 = auStack_8;
  }
  *(undefined4 *)(puVar5 + -4) = unaff_r14;
  *(undefined4 *)(puVar5 + -8) = unaff_r13;
  *(undefined4 *)(puVar5 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar5 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar5 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar5 + -0x18) = in_PR;
  uVar2 = 0;
  a6 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c066960)(puVar5 + DAT_8c06695c + -0x1dc,0,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = (float)DAT_8c066964;
  }
  (*(code *)PTR_Vec3_ctor_xyz_8c066974)(puVar5 + DAT_8c066970 + -0x1dc,uVar2,a6,ar7);
  puVar3 = PTR_Vec3_ctor_xyz_8c066974;
  (*(code *)PTR_Vec3_ctor_xyz_8c066974)
            (puVar5 + DAT_8c066978._4_4_ + -0x1dc,PTR_Vec3_ctor_xyz_8c066974,a6,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c066974)(puVar5 + DAT_8c066988 + -0x1dc,puVar3,a6,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c066974)(puVar5 + DAT_8c066994 + -0x1dc,puVar3,a6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c066960)
            (puVar5 + DAT_8c066998 + -0x1dc,PTR_Vec3_ctor_zero_8c066960,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar5 + -0x1d0) = 0;
    *(undefined4 *)(puVar5 + DAT_8c06699c + -0x1dc) = *(undefined4 *)(puVar5 + -0x1d0);
    *(undefined4 *)(puVar5 + -0x1d4) = *(undefined4 *)(puVar5 + -0x1d0);
    *(undefined4 *)(puVar5 + DAT_8c0669a0 + -0x1dc) = *(undefined4 *)(puVar5 + -0x1d4);
    dVar6 = (double)CONCAT44(*(undefined4 *)(puVar5 + -0x1d4),in_fr1);
    *(undefined4 *)(puVar5 + DAT_8c06695c + -0x1dc) = *(undefined4 *)(puVar5 + -0x1d4);
  }
  else {
    *(ulonglong *)(puVar5 + -0x1d0) = (ulonglong)in_fr1;
    *(undefined8 *)(puVar5 + DAT_8c06699c + -0x1dc) = *(undefined8 *)(puVar5 + -0x1d0);
    *(undefined8 *)(puVar5 + -0x1d4) = *(undefined8 *)(puVar5 + -0x1d0);
    *(undefined8 *)(puVar5 + DAT_8c0669a0 + -0x1dc) = *(undefined8 *)(puVar5 + -0x1d4);
    dVar6 = *(double *)(puVar5 + -0x1d4);
    *(double *)(puVar5 + DAT_8c06695c + -0x1dc) = dVar6;
  }
  if (*(int *)(ar4 + 0x6c) == 0) {
    a7 = puVar5 + -0x180;
    a6_00 = puVar5 + -0x17c;
    puVar1 = puVar5 + -0x178;
    (*(code *)PTR_FUN_8c066a64)(*ar6,puVar1,a6_00,a7);
    (*(code *)PTR_Vec3_set_xyz_8c066a6c)(puVar5 + DAT_8c066a68 + -0x1dc,puVar1,a6_00,a7);
    uVar2 = (*(code *)PTR_FUN_8c066a70)(ar6[1],puVar1,a6_00,a7);
    *(undefined4 *)(puVar5 + -0x194) = uVar2;
    if (*(int *)(puVar5 + -0x194) == 4) {
      uVar2 = (*(code *)PTR_FUN_8c066a74)(ar6[1],puVar1,a6_00,a7);
      *(short *)(puVar5 + -0x1d8) = (short)uVar2;
      if (*(short *)(puVar5 + -0x1d8) < 3) {
        (*(code *)PTR_vec3_copy_8c02b5fc_8c066afc)
                  (puVar5 + DAT_8c066af8 + -0x1dc,puVar5 + DAT_8c066af4 + -0x1dc,a6_00,a7);
        *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + DAT_8c066b00 + -0x1dc;
        (*(code *)PTR_FUN_8c066b0c)
                  (puVar5 + DAT_8c066b08 + -0x1e0,puVar5 + DAT_8c066b04 + -0x1e0,a6_00,a7);
        (*(code *)PTR_Vec3_assign_8c066b14)
                  (puVar5 + DAT_8c066b10 + -0x1dc,puVar5 + DAT_8c066b00 + -0x1dc,a6_00,a7);
        (*(code *)PTR_Vec3_dtor_8c066b18)(puVar5 + DAT_8c066b00 + -0x1dc,0xffffffff,a6_00,a7);
        (*(code *)PTR_object_dtor_delete_8c066b1c)
                  (puVar5 + DAT_8c066af8 + -0x1dc,0xffffffff,a6_00,a7);
      }
      else {
        (*(code *)PTR_vec3_copy_8c02b5fc_8c066a7c)
                  (puVar5 + DAT_8c066a78 + -0x1dc,puVar5 + DAT_8c066a68 + -0x1dc,a6_00,a7);
        *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + DAT_8c066a80 + -0x1dc;
        (*(code *)PTR_FUN_8c066a8c)
                  (puVar5 + DAT_8c066a88 + -0x1e0,puVar5 + DAT_8c066a84 + -0x1e0,a6_00,a7);
        (*(code *)PTR_Vec3_assign_8c066a94)
                  (puVar5 + DAT_8c066a90 + -0x1dc,puVar5 + DAT_8c066a80 + -0x1dc,a6_00,a7);
        (*(code *)PTR_Vec3_dtor_8c066a98)(puVar5 + DAT_8c066a80 + -0x1dc,0xffffffff,a6_00,a7);
        (*(code *)PTR_object_dtor_delete_8c066a9c)
                  (puVar5 + DAT_8c066a78 + -0x1dc,0xffffffff,a6_00,a7);
      }
      a6_01 = (undefined1 *)0x0;
      while( true ) {
        puVar1 = (undefined1 *)0xa;
        uVar2 = (**(code **)(DAT_8c066da8 + *ar5))(ar5,10,a6_00,a7);
        *(undefined4 *)(puVar5 + -0x1b4) = uVar2;
        if (*(int *)(puVar5 + -0x1b4) <= (int)a6_01) break;
        uVar4 = 10;
        a6_00 = a6_01;
        uVar2 = (**(code **)(DAT_8c066cb4 + *ar5))(ar5,10,a6_01,a7);
        *(undefined4 *)(puVar5 + -0x198) = uVar2;
        uVar2 = (*(code *)PTR_get_field_6c_02f46c_8c066cb8)
                          (*(undefined4 *)(puVar5 + -0x198),uVar4,a6_00,a7);
        *(undefined4 *)(puVar5 + -0x19c) = uVar2;
        if (*(int *)(puVar5 + -0x19c) != 0) {
          uVar4 = 10;
          a6_00 = a6_01;
          uVar2 = (**(code **)(DAT_8c066cb4 + *ar5))(ar5,10,a6_01,a7);
          *(undefined4 *)(puVar5 + -0x1a0) = uVar2;
          uVar2 = (**(code **)(DAT_8c066cbc + *(int *)(*(int *)(puVar5 + -0x1a0) + 8)))
                            (*(int *)(puVar5 + -0x1a0),uVar4,a6_00,a7);
          *(undefined4 *)(puVar5 + -0x1a4) = uVar2;
          if (*(int *)(puVar5 + -0x1a4) == 0x13) {
            *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + DAT_8c066cc0 + -0x1dc;
            (*(code *)PTR_FUN_8c066cc4)(*ar6,uVar4,a6_00,a7);
            *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + DAT_8c066cb4 + -0x1dc;
            (*(code *)PTR_Vec3_add_8c066ccc)
                      (puVar5 + DAT_8c066cbc + -0x1e0,puVar5 + DAT_8c066cc8 + -0x1e0,a6_00,a7);
            uVar4 = 10;
            a6_00 = a6_01;
            uVar2 = (**(code **)(DAT_8c066cb4 + *ar5))(ar5,10,a6_01,a7);
            *(undefined4 *)(puVar5 + -0x1a8) = uVar2;
            *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + DAT_8c066cd0 + -0x1dc;
            (*(code *)PTR_FUN_8c066cc4)(*(undefined4 *)(puVar5 + -0x1a8),uVar4,a6_00,a7);
            *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + DAT_8c066cd4 + -0x1dc;
            (*(code *)PTR_Vec3_sub_8c066ce0)
                      (puVar5 + DAT_8c066cdc + -0x1e0,puVar5 + DAT_8c066cd8 + -0x1e0,a6_00,a7);
            (*(code *)PTR_Vec3_assign_8c066ce8)
                      (puVar5 + DAT_8c066ce4 + -0x1dc,puVar5 + DAT_8c066cd4 + -0x1dc,a6_00,a7);
            (*(code *)PTR_Vec3_dtor_8c066cec)(puVar5 + DAT_8c066cd4 + -0x1dc,0xffffffff,a6_00,a7);
            (*(code *)PTR_Vec3_dtor_8c066cec)(puVar5 + DAT_8c066cd0 + -0x1dc,0xffffffff,a6_00,a7);
            (*(code *)PTR_Vec3_dtor_8c066cec)(puVar5 + DAT_8c066cb4 + -0x1dc,0xffffffff,a6_00,a7);
            uVar2 = 0xffffffff;
            (*(code *)PTR_Vec3_dtor_8c066cec)(puVar5 + DAT_8c066cc0 + -0x1dc,0xffffffff,a6_00,a7);
            (*(code *)PTR_Vec3_length_sq_8c066cf0)(puVar5 + DAT_8c066ce4 + -0x1dc,uVar2,a6_00,a7);
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar5 + -0x1ac) = (int)((ulonglong)dVar6 >> 0x20);
              dVar6 = (double)CONCAT44(*(undefined4 *)(puVar5 + -0x1ac),SUB84(dVar6,0));
            }
            else {
              *(double *)(puVar5 + -0x1ac) = dVar6;
              dVar6 = *(double *)(puVar5 + -0x1ac);
            }
            if (in_FPSCR_PR == '\0') {
              bVar7 = (float)((ulonglong)dVar6 >> 0x20) < in_fr15;
            }
            else {
              bVar7 = dVar6 < (double)CONCAT44(in_fr14,in_fr15);
            }
            if (bVar7) {
              uVar2 = (**(code **)(DAT_8c066cb4 + *ar5))(ar5,10,a6_01,a7);
              *(undefined4 *)(puVar5 + -0x1b0) = uVar2;
              *(undefined4 *)(puVar5 + -0x188) = *(undefined4 *)(puVar5 + -0x1b0);
              (*(code *)PTR_object_dtor_delete_8c066cf8)
                        (puVar5 + DAT_8c066cf4 + -0x1dc,0xffffffff,a6_01,a7);
              (*(code *)PTR_Vec3_dtor_8c066cec)(puVar5 + DAT_8c066cfc + -0x1dc,0xffffffff,a6_01,a7);
              (*(code *)PTR_Vec3_dtor_8c066cec)(puVar5 + DAT_8c066d00 + -0x1dc,0xffffffff,a6_01,a7);
              (*(code *)PTR_Vec3_dtor_8c066cec)(puVar5 + DAT_8c066d04 + -0x1dc,0xffffffff,a6_01,a7);
              (*(code *)PTR_Vec3_dtor_8c066cec)(puVar5 + DAT_8c066d08 + -0x1dc,0xffffffff,a6_01,a7);
              (*(code *)PTR_Vec3_dtor_8c066cec)(puVar5 + DAT_8c066d0c + -0x1dc,0xffffffff,a6_01,a7);
              (*(code *)PTR_Vec3_dtor_8c066cec)(puVar5 + DAT_8c066ce4 + -0x1dc,0xffffffff,a6_01,a7);
              return *(undefined4 *)(puVar5 + -0x188);
            }
          }
        }
        a6_01 = a6_01 + 1;
      }
    }
    uVar2 = (*(code *)PTR_get_field_a0_035724_8c066dac)(ar6[6],puVar1,a6_00,a7);
    puVar5[-0x1dc] = (char)uVar2;
    if (puVar5[-0x1dc] == '\x02') {
      uVar2 = (*(code *)PTR_FUN_8c066db0)(ar6[1],puVar1,a6_00,a7);
      *(short *)(puVar5 + -0x1da) = (short)uVar2;
      if (*(short *)(puVar5 + -0x1da) < 3) {
        (*(code *)PTR_vec3_copy_8c02b5fc_8c066e38)
                  (puVar5 + DAT_8c066e34 + -0x1dc,puVar5 + DAT_8c066e30 + -0x1dc,a6_00,a7);
        *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + DAT_8c066e3c + -0x1dc;
        (*(code *)PTR_FUN_8c066e48)
                  (puVar5 + DAT_8c066e44 + -0x1e0,puVar5 + DAT_8c066e40 + -0x1e0,a6_00,a7);
        (*(code *)PTR_Vec3_assign_8c066e50)
                  (puVar5 + DAT_8c066e4c + -0x1dc,puVar5 + DAT_8c066e3c + -0x1dc,a6_00,a7);
        (*(code *)PTR_Vec3_dtor_8c066e54)(puVar5 + DAT_8c066e3c + -0x1dc,0xffffffff,a6_00,a7);
        (*(code *)PTR_object_dtor_delete_8c066e58)
                  (puVar5 + DAT_8c066e34 + -0x1dc,0xffffffff,a6_00,a7);
      }
      else {
        (*(code *)PTR_vec3_copy_8c02b5fc_8c066dbc)
                  (puVar5 + DAT_8c066db8 + -0x1dc,puVar5 + DAT_8c066db4 + -0x1dc,a6_00,a7);
        *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + DAT_8c066dc0 + -0x1dc;
        (*(code *)PTR_FUN_8c066dcc)
                  (puVar5 + DAT_8c066dc8 + -0x1e0,puVar5 + DAT_8c066dc4 + -0x1e0,a6_00,a7);
        (*(code *)PTR_Vec3_assign_8c066dd4)
                  (puVar5 + DAT_8c066dd0 + -0x1dc,puVar5 + DAT_8c066dc0 + -0x1dc,a6_00,a7);
        (*(code *)PTR_Vec3_dtor_8c066dd8)(puVar5 + DAT_8c066dc0 + -0x1dc,0xffffffff,a6_00,a7);
        (*(code *)PTR_object_dtor_delete_8c066ddc)
                  (puVar5 + DAT_8c066db8 + -0x1dc,0xffffffff,a6_00,a7);
      }
      puVar1 = (undefined1 *)0x0;
      while( true ) {
        uVar2 = (**(code **)(DAT_8c0670c8 + *ar5))(ar5,0xd,a6_00,a7);
        *(undefined4 *)(puVar5 + -0x1cc) = uVar2;
        if (*(int *)(puVar5 + -0x1cc) <= (int)puVar1) break;
        uVar4 = 0xd;
        a6_00 = puVar1;
        uVar2 = (**(code **)(DAT_8c066fd0 + *ar5))(ar5,0xd,puVar1,a7);
        *(undefined4 *)(puVar5 + -0x1b8) = uVar2;
        uVar2 = (*(code *)PTR_get_field_6c_02f46c_8c066fd4)
                          (*(undefined4 *)(puVar5 + -0x1b8),uVar4,a6_00,a7);
        *(undefined4 *)(puVar5 + -0x1bc) = uVar2;
        if (*(int *)(puVar5 + -0x1bc) != 0) {
          *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + DAT_8c066fd8 + -0x1dc;
          (*(code *)PTR_FUN_8c066fdc)(*ar6,uVar4,a6_00,a7);
          *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + DAT_8c066fe0 + -0x1dc;
          (*(code *)PTR_Vec3_add_8c066fec)
                    (puVar5 + DAT_8c066fe8 + -0x1e0,puVar5 + DAT_8c066fe4 + -0x1e0,a6_00,a7);
          uVar4 = 0xd;
          a6_00 = puVar1;
          uVar2 = (**(code **)(DAT_8c066fd0 + *ar5))(ar5,0xd,puVar1,a7);
          *(undefined4 *)(puVar5 + -0x1c0) = uVar2;
          *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + -0x164;
          (*(code *)PTR_FUN_8c066fdc)(*(undefined4 *)(puVar5 + -0x1c0),uVar4,a6_00,a7);
          *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + -0x174;
          (*(code *)PTR_Vec3_sub_8c066ff4)(puVar5 + DAT_8c066ff0 + -0x1e0,puVar5 + -0x164,a6_00,a7);
          (*(code *)PTR_Vec3_assign_8c066ffc)
                    (puVar5 + DAT_8c066ff8 + -0x1dc,puVar5 + -0x174,a6_00,a7);
          (*(code *)PTR_Vec3_dtor_8c067000)(puVar5 + -0x174,0xffffffff,a6_00,a7);
          (*(code *)PTR_Vec3_dtor_8c067000)(puVar5 + -0x164,0xffffffff,a6_00,a7);
          (*(code *)PTR_Vec3_dtor_8c067000)(puVar5 + DAT_8c066fe0 + -0x1dc,0xffffffff,a6_00,a7);
          uVar2 = 0xffffffff;
          (*(code *)PTR_Vec3_dtor_8c067000)(puVar5 + DAT_8c066fd8 + -0x1dc,0xffffffff,a6_00,a7);
          (*(code *)PTR_Vec3_length_sq_8c067004)(puVar5 + DAT_8c066ff8 + -0x1dc,uVar2,a6_00,a7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar5 + -0x1c4) = (int)((ulonglong)dVar6 >> 0x20);
            dVar6 = (double)CONCAT44(*(undefined4 *)(puVar5 + -0x1c4),SUB84(dVar6,0));
          }
          else {
            *(double *)(puVar5 + -0x1c4) = dVar6;
            dVar6 = *(double *)(puVar5 + -0x1c4);
          }
          if (in_FPSCR_PR == '\0') {
            bVar7 = (float)((ulonglong)dVar6 >> 0x20) < in_fr15;
          }
          else {
            bVar7 = dVar6 < (double)CONCAT44(in_fr14,in_fr15);
          }
          if (bVar7) {
            uVar2 = (**(code **)(DAT_8c066fd0 + *ar5))(ar5,0xd,puVar1,a7);
            *(undefined4 *)(puVar5 + -0x1c8) = uVar2;
            *(undefined4 *)(puVar5 + -0x18c) = *(undefined4 *)(puVar5 + -0x1c8);
            (*(code *)PTR_object_dtor_delete_8c06700c)
                      (puVar5 + DAT_8c067008 + -0x1dc,0xffffffff,puVar1,a7);
            (*(code *)PTR_Vec3_dtor_8c067000)(puVar5 + DAT_8c067010 + -0x1dc,0xffffffff,puVar1,a7);
            (*(code *)PTR_Vec3_dtor_8c067000)(puVar5 + DAT_8c067014 + -0x1dc,0xffffffff,puVar1,a7);
            (*(code *)PTR_Vec3_dtor_8c067000)(puVar5 + DAT_8c067018 + -0x1dc,0xffffffff,puVar1,a7);
            puVar3 = PTR_Vec3_dtor_8c067000;
            (*(code *)PTR_Vec3_dtor_8c067000)
                      (puVar5 + DAT_8c06701c + -0x1dc,0xffffffff,puVar1,PTR_Vec3_dtor_8c067000);
            uVar2 = 0xffffffff;
            (*(code *)PTR_Vec3_dtor_8c067000)
                      (puVar5 + DAT_8c067020 + -0x1dc,0xffffffff,0xffffffff,puVar3);
            (*(code *)PTR_Vec3_dtor_8c067000)
                      (puVar5 + DAT_8c066ff8 + -0x1dc,0xffffffff,uVar2,puVar3);
            return *(undefined4 *)(puVar5 + -0x18c);
          }
        }
        puVar1 = puVar1 + 1;
      }
    }
    (*(code *)PTR_object_dtor_delete_8c0670d0)(puVar5 + DAT_8c0670cc + -0x1dc,0xffffffff,a6_00,a7);
    *(undefined4 *)(puVar5 + -400) = 0;
    (*(code *)PTR_Vec3_dtor_8c0670d8)(puVar5 + DAT_8c0670d4 + -0x1dc,0xffffffff,a6_00,a7);
    (*(code *)PTR_Vec3_dtor_8c0670d8)(puVar5 + DAT_8c0670dc + -0x1dc,0xffffffff,a6_00,a7);
    (*(code *)PTR_Vec3_dtor_8c0670d8)(puVar5 + DAT_8c0670e0 + -0x1dc,0xffffffff,a6_00,a7);
    (*(code *)PTR_Vec3_dtor_8c0670d8)(puVar5 + DAT_8c0670e4 + -0x1dc,0xffffffff,a6_00,a7);
    (*(code *)PTR_Vec3_dtor_8c0670d8)(puVar5 + DAT_8c0670e8 + -0x1dc,0xffffffff,a6_00,a7);
    (*(code *)PTR_Vec3_dtor_8c0670d8)(puVar5 + DAT_8c0670ec + -0x1dc,0xffffffff,a6_00,a7);
    uVar2 = *(undefined4 *)(puVar5 + -400);
  }
  else {
    *(undefined4 *)(puVar5 + -0x184) = *(undefined4 *)(ar4 + 0x6c);
    (*(code *)PTR_Vec3_dtor_8c0669a4)(puVar5 + DAT_8c066998 + -0x1dc,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0669a4)(puVar5 + DAT_8c066994 + -0x1dc,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0669a4)(puVar5 + DAT_8c066988 + -0x1dc,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0669a4)(puVar5 + DAT_8c066978._4_4_ + -0x1dc,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0669a4)(puVar5 + DAT_8c066970 + -0x1dc,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0669a4)(puVar5 + DAT_8c06695c + -0x1dc,0xffffffff,a6,ar7);
    uVar2 = *(undefined4 *)(puVar5 + -0x184);
  }
  return uVar2;
}



/* Class_12a078_m6_0670f0 @ 8c0670f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint Class_12a078_m6_0670f0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c067118)(DAT_8c067114,ar5,ar6,ar7);
  return (uint)(iVar1 == 0);
}



/* FUN_8c06711c @ 8c06711c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06711c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(int *)(DAT_8c067138 + ar4) == 1) && (*(int *)(DAT_8c06713c + ar4) == 1)) {
    return 1;
  }
  return 0;
}



/* get_field_150_067140 @ 8c067140 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_150_067140(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c067148 + ar4);
}



/* FUN_8c06714c @ 8c06714c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c06714c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c067154;
  *(undefined4 *)(DAT_8c067154 + ar4) = ar5;
  return iVar1;
}



/* Class_12a078_m7_067158 @ 8c067158 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12a078_m7_067158(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(DAT_8c067194 + ar4) = *(undefined4 *)(ar5 + 4);
  *(undefined1 *)(DAT_8c067198 + ar4) = *ar5;
  (*(code *)PTR_FUN_8c0671a0)(ar4 + DAT_8c06719c,ar5 + 8,ar6,ar7);
  iVar1 = DAT_8c0671a4;
  *(undefined1 *)(DAT_8c0671a4 + ar4) = ar5[1];
  return iVar1;
}



/* Class_12a078_m8_0671a8 @ 8c0671a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a078_m8_0671a8(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(ar5 + 4) = *(undefined4 *)(DAT_8c0671e0 + ar4);
  *ar5 = *(undefined1 *)(DAT_8c0671e4 + ar4);
  ar5[1] = *(undefined1 *)(DAT_8c0671e8 + ar4);
  uVar1 = (*(code *)PTR_FUN_8c0671f0)(ar4 + DAT_8c0671ec,ar5 + 8,ar6,ar7);
  return uVar1;
}



/* Class_12a078_m5_0671f4 @ 8c0671f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12a078_m5_0671f4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  
  iVar1 = *(int *)(DAT_8c067264 + ar4);
  if (iVar1 != -1) {
    (*(code *)PTR_FUN_8c06726c)(DAT_8c067268,ar5,ar6,ar7);
    a5 = 3;
    (*(code *)PTR_FUN_8c067274)(ar4 + DAT_8c067270,3,ar6,ar7);
    *(undefined1 *)(DAT_8c067278 + ar4) = 1;
    *(undefined4 *)(DAT_8c067264 + ar4) = 0xffffffff;
    *(undefined4 *)(DAT_8c06727c + ar4) = 0;
    (*(code *)PTR_s_STATUS_FORMAT_030306_8c067280)(ar4 + DAT_8c067270,a5,ar6,ar7);
    if ((*(int *)(ar4 + 0x40) == 0xb) || (iVar1 = *(int *)(ar4 + 0x40), iVar1 == 0xc)) {
      *(undefined4 *)(ar4 + 4) = 0;
      *(undefined4 *)(ar4 + 8) = 0x14;
      *(undefined4 *)(ar4 + 0xc) = 0;
      iVar1 = 0x40;
      *(undefined4 *)(ar4 + 0x40) = 0;
    }
  }
  return iVar1;
}



/* Class_12a078_m4_067284 @ 8c067284 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined * Class_12a078_m4_067284(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (int)(char)ar6;
  puVar1 = (undefined *)0x4;
  if ((iVar2 < 5) && (-1 < iVar2)) {
    puVar1 = (&switchD_8c0672a4::switchdataD_8c0672a8)[iVar2];
    switch((char)ar6) {
    case '\x01':
      puVar1 = (undefined *)(*(code *)PTR_FUN_8c067304)(ar5,0x1d,0x1b,ar7);
      break;
    case '\x02':
      puVar1 = (undefined *)(*(code *)PTR_FUN_8c067304)(ar5,0x1c,0x1b,ar7);
      break;
    case '\x03':
      puVar1 = (undefined *)(*(code *)PTR_FUN_8c067304)(ar5,0x1e,0x1b,ar7);
      break;
    case '\x04':
      puVar1 = (undefined *)(*(code *)PTR_FUN_8c067304)(ar5,0x1f,0x1b,ar7);
    }
  }
  return puVar1;
}



/* get_field_100_067308 @ 8c067308 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_100_067308(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c067310 + ar4);
}



/* FUN_8c067314 @ 8c067314 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c067314(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c06739c)(PTR_DAT_8c067398,ar5,ar6,ar7);
  puVar4 = PTR_Vec3_dtor_8c0673a4;
  uVar2 = DAT_8c0673a0;
  (*(code *)PTR_global_list_push_8c0673a8)(uVar1,PTR_Vec3_dtor_8c0673a4,DAT_8c0673a0,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c06739c)(PTR_DAT_8c0673ac,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0673a4;
  uVar2 = DAT_8c0673b0;
  (*(code *)PTR_global_list_push_8c0673a8)(uVar1,PTR_Vec3_dtor_8c0673a4,DAT_8c0673b0,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c06739c)(PTR_DAT_8c0673b4,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0673a4;
  uVar2 = DAT_8c0673b8;
  (*(code *)PTR_global_list_push_8c0673a8)(uVar1,PTR_Vec3_dtor_8c0673a4,DAT_8c0673b8,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c06739c)(PTR_DAT_8c0673bc,puVar4,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c0673a8)(uVar2,PTR_Vec3_dtor_8c0673a4,DAT_8c0673c0,ar7);
  puVar3 = DAT_8c0673c8;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c0673c4 = *(undefined4 *)DAT_8c0673c8;
  }
  else {
    *(undefined8 *)PTR_DAT_8c0673c4 = *DAT_8c0673c8;
  }
  return puVar3;
}



/* free_if_nonnull_wrap_0673dc @ 8c0673dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0673dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c067408)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c06740c @ 8c06740c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c06740c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  a7 = 0;
  a6 = 0;
  a5 = 0xe;
  (*(code *)PTR_FUN_8c06748c)(ar4,0xe,0,0);
  *(undefined **)(ar4 + 8) = PTR_DAT_8c067490;
  (*(code *)PTR_FUN_8c067498)(ar4 + DAT_8c067494,a5,a6,a7);
  (*(code *)PTR_FUN_8c0674a0)(ar4 + DAT_8c06749c,a5,a6,a7);
  (*(code *)PTR_FUN_8c0674a8)(ar4 + DAT_8c0674a4,a5,a6,a7);
  (*(code *)PTR_Vec3_ctor_zero_8c0674b0)(ar4 + DAT_8c0674ac,a5,a6,a7);
  (*(code *)PTR_Vec3_set_zero_8c0674b8)(ar4 + DAT_8c0674b4,a5,a6,a7);
  (*(code *)PTR_FUN_8c0674c0)(ar4 + DAT_8c0674bc,a5,a6,a7);
  (*(code *)PTR_s_herb3_pvm_067598_8c0674c4)(ar4,a5,a6,a7);
  return ar4;
}



/* Class_12a0c4_m0_0674c8 @ 8c0674c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12a0c4_m0_0674c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = PTR_DAT_8c067558;
    (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c067560)(ar4 + DAT_8c06755c,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c067568)(ar4 + DAT_8c067564,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c067570)(ar4 + DAT_8c06756c,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c067578)(ar4 + DAT_8c067574,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c067580)(ar4 + DAT_8c06757c,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_129938_m0_017084_8c067588)(ar4 + DAT_8c067584,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_Class_12c1f0_m0_0f4108_8c06758c)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c067590)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* s_herb3_pvm_067598 @ 8c067594 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_herb3_pvm_067598(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fr1;
  undefined8 uVar3;
  ulonglong uVar4;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_rand_8c06772c)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c067730)(uVar1,4,ar6,ar7);
  *(undefined4 *)(DAT_8c067734 + ar4) = uVar1;
  *(undefined4 *)(DAT_8c067738 + ar4) = DAT_8c06773c;
  *(undefined4 *)(DAT_8c067740 + ar4) = 0xffffffff;
  *(undefined4 *)(DAT_8c067744 + ar4) = 0xffffffff;
  *(undefined4 *)(DAT_8c067748 + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c06774c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c06774c) = (ulonglong)in_fr1;
  }
  for (iVar2 = 0; iVar2 < 9; iVar2 = iVar2 + 1) {
    *(undefined1 *)(DAT_8c067750 + ar4 + iVar2) = 0;
  }
  *(undefined4 *)(DAT_8c067754 + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c067758) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c067758) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c06775c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c06775c) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c067760) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c067760) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(DAT_8c067764 + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    uVar3 = CONCAT44(*(undefined4 *)PTR_DAT_8c06776c,in_fr1);
    *(undefined4 *)(ar4 + DAT_8c067768) = *(undefined4 *)PTR_DAT_8c06776c;
  }
  else {
    uVar3 = *(undefined8 *)PTR_DAT_8c06776c;
    *(undefined8 *)(ar4 + DAT_8c067768) = uVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar1 = *(undefined4 *)(PTR_DAT_8c06776c + 4);
    uVar3 = CONCAT44(uVar1,(int)uVar3);
    *(undefined4 *)(ar4 + DAT_8c067770) = uVar1;
  }
  else {
    uVar3 = *(undefined8 *)(PTR_DAT_8c06776c + 4);
    *(undefined8 *)(ar4 + DAT_8c067770) = uVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar1 = *(undefined4 *)(PTR_DAT_8c06776c + 8);
    uVar3 = CONCAT44(uVar1,(int)uVar3);
    *(undefined4 *)(ar4 + DAT_8c067774) = uVar1;
  }
  else {
    uVar3 = *(undefined8 *)(PTR_DAT_8c06776c + 8);
    *(undefined8 *)(ar4 + DAT_8c067774) = uVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar1 = (undefined4)*(ulonglong *)(PTR_DAT_8c06776c + 0xc);
    uVar4 = CONCAT44(uVar1,(int)uVar3);
    *(undefined4 *)(ar4 + DAT_8c067778) = uVar1;
  }
  else {
    uVar4 = *(ulonglong *)(PTR_DAT_8c06776c + 0xc);
    *(ulonglong *)(ar4 + DAT_8c067778) = uVar4;
  }
  iVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c067730)
                    (*(undefined4 *)(DAT_8c067734 + ar4),4,ar6,ar7);
  *(int *)(DAT_8c06777c + ar4) = iVar2 * 3 + 2;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c067780) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c067780) = uVar4 & 0xffffffff;
  }
  *(int *)(DAT_8c067784 + ar4) = DAT_8c067788;
  iVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c067730)
                    (*(undefined4 *)(DAT_8c067734 + ar4),4,ar6,ar7);
  *(undefined4 *)(DAT_8c06778c + DAT_8c067788) = *(undefined4 *)(PTR_PTR_8c067790 + iVar2 * 4);
  iVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c067730)
                    (*(undefined4 *)(DAT_8c067734 + ar4),4,ar6,ar7);
  *(undefined4 *)(DAT_8c067794 + DAT_8c067788) = *(undefined4 *)(PTR_PTR_8c067798 + iVar2 * 4);
  *(undefined **)(DAT_8c06779c + DAT_8c067788) = PTR_PTR_8c0677a0;
  *(undefined **)(DAT_8c0677a4 + DAT_8c067788) = PTR_PTR_8c0677a8;
  *(undefined4 *)(DAT_8c0677ac + DAT_8c067788) = *(undefined4 *)PTR_PTR_8c0677b0;
  *(undefined4 *)(DAT_8c0677b4 + DAT_8c067788) = *(undefined4 *)(PTR_PTR_8c0677b0 + 4);
  *(undefined4 *)(DAT_8c0677b8 + DAT_8c067788) = 0x12;
  *(undefined4 *)(DAT_8c0677bc + DAT_8c067788) = 0x16;
  *(undefined4 *)(DAT_8c0677c0 + DAT_8c067788) = DAT_8c0677c4;
  *(undefined4 *)(DAT_8c0677c8 + DAT_8c067788) = DAT_8c0677cc;
  uVar1 = (*(code *)PTR_FUN_8c0677d8)
                    (ar4,*(undefined4 *)(DAT_8c0677d4 + *(int *)(DAT_8c067784 + ar4)),
                     ar4 + DAT_8c0677d0,ar7);
  return uVar1;
}



/* Class_12a0c4_m2_0677dc @ 8c0677dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a0c4_m2_0677dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  float fVar1;
  double dVar2;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (*(int *)(DAT_8c0678f4 + ar4) == 0) {
    (*(code *)PTR_FUN_8c0678f8)(ar4,ar5,ar7,ar7);
    if (in_FPSCR_SZ == '\0') {
      in_fr1 = *(undefined4 *)PTR_DAT_8c067900;
    }
    else {
      in_xd0 = *(undefined8 *)PTR_DAT_8c067900;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c067904),in_fr1);
    }
    else {
      dVar2 = *(double *)(ar4 + DAT_8c067904);
    }
    if (in_FPSCR_PR == '\0') {
      fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c0678fc) = fVar1;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c0678fc) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar1 = *(float *)(PTR_DAT_8c067900 + 4);
    }
    else {
      in_xd0 = *(undefined8 *)(PTR_DAT_8c067900 + 4);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c067904),fVar1);
    }
    else {
      dVar2 = *(double *)(ar4 + DAT_8c067904);
    }
    if (in_FPSCR_PR == '\0') {
      fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c067908) = fVar1;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c067908) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar1 = *(float *)(PTR_DAT_8c067900 + 8);
    }
    else {
      in_xd0 = *(undefined8 *)(PTR_DAT_8c067900 + 8);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c067904),fVar1);
    }
    else {
      dVar2 = *(double *)(ar4 + DAT_8c067904);
    }
    if (in_FPSCR_PR == '\0') {
      fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c06790c) = fVar1;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c06790c) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar1 = *(float *)(PTR_DAT_8c067900 + 0xc);
    }
    else {
      in_xd0 = *(undefined8 *)(PTR_DAT_8c067900 + 0xc);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c067904),fVar1);
    }
    else {
      dVar2 = *(double *)(ar4 + DAT_8c067904);
    }
    if (in_FPSCR_PR == '\0') {
      fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c067910) = fVar1;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c067910) = in_xd0;
    }
  }
  else if (*(int *)(DAT_8c0678f4 + ar4) == 1) {
    if (*(int *)(DAT_8c067914 + ar4) < 4) {
      (*(code *)PTR_FUN_8c067918)(ar4,ar5,ar7,ar7);
    }
    else {
      (*(code *)PTR_FUN_8c06791c)(ar4,ar5,ar7,ar7);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar2 = (double)CONCAT44(DAT_8c067920,*(undefined4 *)(ar4 + DAT_8c067904));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c067904);
      dVar2 = (double)CONCAT44(DAT_8c067924,DAT_8c067920);
    }
    if (in_FPSCR_PR == '\0') {
      fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar2 = (double)CONCAT44(DAT_8c067924,fVar1);
    }
    else {
      dVar2 = (double)CONCAT44(DAT_8c067928,DAT_8c067924);
    }
    if (in_FPSCR_PR == '\0') {
      fVar1 = SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 / dVar2,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c067908) = fVar1;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c067908) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar2 = (double)CONCAT44(DAT_8c067928,*(undefined4 *)(ar4 + DAT_8c067904));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c067904);
      dVar2 = (double)CONCAT44(DAT_8c06792c,DAT_8c067928);
    }
    if (in_FPSCR_PR == '\0') {
      fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar2 = (double)CONCAT44(DAT_8c067924,fVar1);
    }
    else {
      dVar2 = (double)CONCAT44(DAT_8c067928,DAT_8c067924);
    }
    if (in_FPSCR_PR == '\0') {
      fVar1 = SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 / dVar2,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c06790c) = fVar1;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c06790c) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar2 = (double)CONCAT44(DAT_8c06792c,*(undefined4 *)(ar4 + DAT_8c067904));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c067904);
      dVar2 = (double)CONCAT44(DAT_8c067930,DAT_8c06792c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar2 = (double)CONCAT44(DAT_8c067924,fVar1);
    }
    else {
      dVar2 = (double)CONCAT44(DAT_8c067928,DAT_8c067924);
    }
    if (in_FPSCR_PR == '\0') {
      fVar1 = SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 / dVar2,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c067910) = fVar1;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c067910) = in_xd0;
    }
  }
  *DAT_8c067930 = 1;
  return 1;
}



/* Class_12a0c4_m3_067934 @ 8c067934 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a0c4_m3_067934(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (**(code **)(*(int *)(ar4 + 8) + 0x10))(ar4,ar5,ar6,ar7);
  *DAT_8c067960 = 0;
  return 1;
}



/* FUN_8c067964 @ 8c067964 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c067964(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x1c))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c06797c @ 8c06797c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06797c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  return 0x74;
}



/* FUN_8c0679cc @ 8c0679cc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0684bc) */
/* WARNING: Removing unreachable block (ram,0x8c068318) */
/* WARNING: Removing unreachable block (ram,0x8c06846e) */
/* WARNING: Removing unreachable block (ram,0x8c068418) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0679cc(int ar4,undefined **ar5,undefined **ar6,int ar7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  ulonglong *a4;
  int *a5;
  int iVar5;
  int iVar6;
  undefined **a6;
  int iVar7;
  uint in_fr1;
  undefined4 uVar8;
  undefined **ppuVar9;
  float fVar10;
  ulonglong uVar11;
  double dVar12;
  float fVar13;
  undefined **ppuVar14;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int iStack_20;
  undefined4 uStack_1c;
  
  iVar1 = -DAT_8c067a34;
  ppuVar4 = ar5;
  a6 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c067a3c)((int)&uStack_1c + DAT_8c067a38 + iVar1,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c067a44)((int)&uStack_1c + DAT_8c067a40 + iVar1,ppuVar4,a6,ar7);
  if (0 < *(int *)(DAT_8c067a48 + ar4)) {
    ppuVar4 = ar6;
    a6 = (undefined **)PTR_FUN_8c067a4c;
    (*(code *)PTR_FUN_8c067a4c)(ar4,ar6,PTR_FUN_8c067a4c,ar7);
  }
  a5 = DAT_8c067aa4;
  if (*(int *)(DAT_8c067a48 + ar4) < 8) {
    a6 = &switchD_8c067a30::switchdataD_8c067a50;
    switch(*(int *)(DAT_8c067a48 + ar4)) {
    case 0:
      *DAT_8c067aa4 = *DAT_8c067aa4 + 1;
      ppuVar4 = ar6;
      uVar3 = (*(code *)PTR_get_field_24_026024_8c067aa8)
                        (ar6,a5,&switchD_8c067a30::switchdataD_8c067a50,ar7);
      *(undefined4 *)((int)&uStack_1c + DAT_8c067aac + iVar1) = uVar3;
      iVar6 = *(int *)((int)&uStack_1c + DAT_8c067aac + iVar1);
      if (iVar6 == 0) {
        *(undefined4 *)(DAT_8c067ae4 + ar4) = 0;
        uVar3 = (*(code *)PTR_rand_8c067ae8)(PTR_rand_8c067ae8,a5,a6,ar7);
        *(undefined4 *)((int)&uStack_1c + DAT_8c067aec + iVar1) = uVar3;
        uVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c067af0)
                          (*(undefined4 *)((int)&uStack_1c + DAT_8c067aec + iVar1),7,a6,ar7);
        a6 = DAT_8c067b5c;
        *(undefined4 *)((int)&uStack_1c + DAT_8c067af4 + iVar1) = uVar3;
        iVar5 = *(int *)((int)&uStack_1c + DAT_8c067af4 + iVar1);
        iVar6 = 7;
        while( true ) {
          *(int *)((int)&uStack_1c + DAT_8c067b58 + iVar1) = iVar5;
          iVar7 = *(int *)((int)&uStack_1c + DAT_8c067b58 + iVar1);
          ar7 = iVar7 * 8;
          if ((DAT_8c067b5c[iVar7 * 2] != (undefined *)0x1) || (iVar6 < 1)) break;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
          if (6 < iVar5) {
            iVar5 = 0;
          }
        }
        if (0 < iVar6) {
          *(int *)((int)&uStack_1c + DAT_8c067b60 + iVar1) = iVar5;
          DAT_8c067b5c[*(int *)((int)&uStack_1c + DAT_8c067b60 + iVar1) * 2] = (undefined *)0x1;
          *(int *)(DAT_8c067b64 + ar4) = iVar5;
        }
        *(int *)((int)&uStack_1c + DAT_8c067b68 + iVar1) = iVar5;
        a5 = (int *)(*(int *)((int)&uStack_1c + DAT_8c067b68 + iVar1) * 0x10 + DAT_8c067b6c);
        (*(code *)PTR_Vec3_assign_8c067b70)(ar4 + 0x30,a5,a6,ar7);
      }
      else if (iVar6 == 1) {
        *(undefined4 *)(DAT_8c067ba4 + ar4) = 1;
        uVar3 = (*(code *)PTR_rand_8c067ba8)(ppuVar4,a5,a6,ar7);
        *(undefined4 *)((int)&uStack_1c + DAT_8c067bac + iVar1) = uVar3;
        uVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c067bb0)
                          (*(undefined4 *)((int)&uStack_1c + DAT_8c067bac + iVar1),6,a6,ar7);
        *(undefined4 *)((int)&uStack_1c + DAT_8c067bb4 + iVar1) = uVar3;
        iVar5 = *(int *)((int)&uStack_1c + DAT_8c067bb4 + iVar1);
        iVar6 = 6;
        while ((*(int *)((int)&uStack_1c + DAT_8c067c20 + iVar1) = iVar5,
               *(int *)(DAT_8c067c24 + *(int *)((int)&uStack_1c + DAT_8c067c20 + iVar1) * 8) == 1 &&
               (0 < iVar6))) {
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
          if (5 < iVar5) {
            iVar5 = 0;
          }
        }
        if (0 < iVar6) {
          *(int *)((int)&uStack_1c + DAT_8c067c28 + iVar1) = iVar5;
          *(undefined4 *)(DAT_8c067c24 + *(int *)((int)&uStack_1c + DAT_8c067c28 + iVar1) * 8) = 1;
          *(int *)(DAT_8c067c2c + ar4) = iVar5;
        }
        *(int *)((int)&uStack_1c + DAT_8c067c30 + iVar1) = iVar5;
        a5 = (int *)(*(int *)((int)&uStack_1c + DAT_8c067c30 + iVar1) * 0x10 + DAT_8c067c34);
        (*(code *)PTR_Vec3_assign_8c067c38)(ar4 + 0x30,a5,a6,ar7);
      }
      else if (iVar6 == 2) {
        *(undefined4 *)(DAT_8c067c6c + ar4) = 2;
        uVar3 = (*(code *)PTR_rand_8c067c70)(ppuVar4,a5,a6,ar7);
        *(undefined4 *)((int)&uStack_1c + DAT_8c067c74 + iVar1) = uVar3;
        uVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c067c78)
                          (*(undefined4 *)((int)&uStack_1c + DAT_8c067c74 + iVar1),6,a6,ar7);
        *(undefined4 *)((int)&uStack_1c + DAT_8c067c7c + iVar1) = uVar3;
        iVar6 = *(int *)((int)&uStack_1c + DAT_8c067c7c + iVar1);
        iVar5 = 6;
        while ((*(int *)((int)&uStack_1c + DAT_8c067dc8 + iVar1) = iVar6,
               *(int *)(DAT_8c067dcc + *(int *)((int)&uStack_1c + DAT_8c067dc8 + iVar1) * 8) == 1 &&
               (0 < iVar5))) {
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + -1;
          if (5 < iVar6) {
            iVar6 = 0;
          }
        }
        if (0 < iVar5) {
          *(int *)(&stack0x00000060 + iVar1) = iVar6;
          *(undefined4 *)(DAT_8c067dcc + *(int *)(&stack0x00000060 + iVar1) * 8) = 1;
          *(int *)(DAT_8c067dd0 + ar4) = iVar6;
        }
        *(int *)(&stack0x0000005c + iVar1) = iVar6;
        a5 = (int *)(*(int *)(&stack0x0000005c + iVar1) * 0x10 + DAT_8c067dd4);
        (*(code *)PTR_Vec3_assign_8c067dd8)(ar4 + 0x30,a5,a6,ar7);
      }
      a4 = (ulonglong *)(ar4 + 0x50);
      uVar11 = (ulonglong)in_fr1;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)a4 = 0;
      }
      else {
        *a4 = uVar11;
      }
      uVar3 = (*(code *)PTR_rand_8c067ddc)(a4,a5,a6,ar7);
      uVar8 = (undefined4)uVar11;
      *(undefined4 *)((int)&uStack_1c + DAT_8c067de0 + iVar1) = uVar3;
      uVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c067de8)
                        (*(undefined4 *)((int)&uStack_1c + DAT_8c067de0 + iVar1),DAT_8c067de4,a6,ar7
                        );
      *(undefined4 *)(&stack0x00000058 + iVar1) = uVar3;
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44((float)*(int *)(&stack0x00000058 + iVar1),uVar8);
      }
      else {
        dVar12 = (double)*(int *)(&stack0x00000058 + iVar1);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x54) = (int)((ulonglong)dVar12 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x54) = dVar12;
      }
      uVar3 = SUB84(dVar12,0);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x58) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x58) = (ulonglong)dVar12 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x5c) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + 0x5c) = CONCAT44(0x3f800000,uVar3);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x60) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + 0x60) = CONCAT44(0x3f800000,uVar3);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 100) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + 100) = CONCAT44(0x3f800000,uVar3);
      }
      *(int *)(&stack0x00000054 + iVar1) = ar4;
      *(int *)(DAT_8c067dec + *(int *)(&stack0x00000054 + iVar1)) =
           *(int *)(DAT_8c067dec + *(int *)(&stack0x00000054 + iVar1)) + 1;
    case 1:
      if ((*(uint *)(ar4 + 0x74) & 0x20) == 0x20) {
        *(int *)(&stack0x00000050 + iVar1) = ar4;
        *(int *)(DAT_8c067dec + *(int *)(&stack0x00000050 + iVar1)) =
             *(int *)(DAT_8c067dec + *(int *)(&stack0x00000050 + iVar1)) + 1;
        (*(code *)PTR_FUN_8c067df4)((int)&uStack_1c + DAT_8c067df0 + iVar1,ar5,a6,ar7);
        (*(code *)PTR_FUN_8c067df8)(ar4,(int)&uStack_1c + DAT_8c067df0 + iVar1,a6,ar7);
        (*(code *)PTR_FUN_8c067dfc)((int)&uStack_1c + DAT_8c067df0 + iVar1,0xffffffff,a6,ar7);
        if (*DAT_8c067e00 == 1) {
          ar7 = 0xe;
          a6 = (undefined **)0x1;
          (**(code **)(*ar6 + DAT_8c067e04))(ar6,ar4 + 0x30,1,0xe);
        }
      }
      else if ((*(uint *)(ar4 + 0x74) & 0x40) == 0x40) {
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c067e30,*(undefined4 *)(ar4 + 0x34));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x34);
          dVar12 = (double)CONCAT44(uRam8c067e34,DAT_8c067e30);
        }
        if (in_FPSCR_PR == '\0') {
          fVar10 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar10 = SUB84(dVar12 - dVar12,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x34) = fVar10;
        }
        else {
          *(undefined8 *)(ar4 + 0x34) = in_xd0;
        }
      }
      else if ((*(uint *)(ar4 + 0x74) & 0x10) == 0x10) {
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c067e5c,*(undefined4 *)(ar4 + 0x34));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x34);
          dVar12 = (double)CONCAT44(uRam8c067e60,DAT_8c067e5c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar10 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar10 = SUB84(dVar12 - dVar12,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x34) = fVar10;
        }
        else {
          *(undefined8 *)(ar4 + 0x34) = in_xd0;
        }
      }
      break;
    case 2:
      uVar3 = (*(code *)PTR_get_field_24_026024_8c067f24)
                        (ar6,ppuVar4,&switchD_8c067a30::switchdataD_8c067a50,ar7);
      *(undefined4 *)((int)&uStack_1c + DAT_8c067f28 + iVar1) = uVar3;
      iVar6 = *(int *)((int)&uStack_1c + DAT_8c067f28 + iVar1);
      if (iVar6 != 0) {
        uVar3 = (*(code *)PTR_get_field_24_026024_8c067f24)(ar6,iVar6,a6,ar7);
        *(undefined4 *)((int)&uStack_1c + DAT_8c067f2c + iVar1) = uVar3;
        if (*(int *)((int)&uStack_1c + DAT_8c067f2c + iVar1) != 2) {
          if ((*DAT_8c0681c8 + *DAT_8c0681cc < 2) && (-1 < *(int *)(DAT_8c0681d0 + ar4))) {
            uVar3 = (*(code *)PTR_rand_8c0681d4)(DAT_8c0681d0,2,a6,ar7);
            *(undefined4 *)((int)&uStack_1c + DAT_8c0681d8 + iVar1) = uVar3;
            uVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0681dc)
                              (*(undefined4 *)((int)&uStack_1c + DAT_8c0681d8 + iVar1),100,a6,ar7);
            *(undefined4 *)(&stack0x00000024 + iVar1) = uVar3;
            if ((*(int *)(&stack0x00000024 + iVar1) < 0x32) && (1 < *DAT_8c0681cc)) {
              *(int *)(&stack0x00000020 + iVar1) = ar4;
              *(int *)(DAT_8c0681e0 + *(int *)(&stack0x00000020 + iVar1)) =
                   *(int *)(DAT_8c0681e0 + *(int *)(&stack0x00000020 + iVar1)) + 4;
              *DAT_8c0681c8 = *DAT_8c0681c8 + 1;
            }
            else {
              *DAT_8c06822c = *DAT_8c06822c + 1;
            }
            *DAT_8c068230 = *DAT_8c068230 + -1;
            *(int *)(&stack0x0000001c + iVar1) = ar4;
            *(int *)(DAT_8c068234 + *(int *)(&stack0x0000001c + iVar1)) =
                 *(int *)(DAT_8c068234 + *(int *)(&stack0x0000001c + iVar1)) + 1;
            *(undefined4 *)(&stack0x00000018 + iVar1) = *(undefined4 *)(DAT_8c068238 + ar4);
            *(int *)(*(int *)(&stack0x00000018 + iVar1) * 8 + DAT_8c06823c + 4) = ar4;
          }
          else {
            (*(code *)PTR_FUN_8c0682d0)((int)&uStack_1c + DAT_8c0682cc + iVar1,ar5,a6,ar7);
            uVar3 = (*(code *)PTR_FUN_8c0682d4)(ar4,(int)&uStack_1c + DAT_8c0682cc + iVar1,a6,ar7);
            *(short *)((int)&uStack_1c + iVar1 + 2) = (short)uVar3;
            *(uint *)((int)&uStack_1c + DAT_8c0682dc + iVar1) =
                 (uint)(DAT_8c0682d8 <= *(ushort *)((int)&uStack_1c + iVar1 + 2));
            (*(code *)PTR_FUN_8c0682e0)((int)&uStack_1c + DAT_8c0682cc + iVar1,0xffffffff,a6,ar7);
            if (*(int *)((int)&uStack_1c + DAT_8c0682dc + iVar1) != 0) {
              if (-1 < *(int *)(DAT_8c0682e4 + ar4)) {
                *(undefined4 *)(&stack0x00000014 + iVar1) = *(undefined4 *)(DAT_8c0682e4 + ar4);
                *(undefined4 *)(DAT_8c0682e8 + *(int *)(&stack0x00000014 + iVar1) * 8) = 0;
                *(undefined4 *)(&stack0x00000010 + iVar1) = *(undefined4 *)(DAT_8c0682e4 + ar4);
                *(undefined4 *)(*(int *)(&stack0x00000010 + iVar1) * 8 + DAT_8c0682e8 + 4) = 0;
              }
              *(undefined4 *)(DAT_8c0682ec + ar4) = 7;
            }
          }
          break;
        }
      }
      uVar3 = (*(code *)PTR_get_field_24_026024_8c067f24)(ar6,iVar6,a6,ar7);
      *(undefined4 *)((int)&uStack_1c + DAT_8c067f30 + iVar1) = uVar3;
      if (*(int *)((int)&uStack_1c + DAT_8c067f30 + iVar1) == 0) {
        if ((*DAT_8c067f34 < 4) && (-1 < *(int *)(DAT_8c067f38 + ar4))) {
          *DAT_8c067f34 = *DAT_8c067f34 + 1;
          *DAT_8c067f3c = *DAT_8c067f3c + -1;
          *(undefined4 *)(&stack0x0000004c + iVar1) = *(undefined4 *)(DAT_8c067f38 + ar4);
          *(int *)(*(int *)(&stack0x0000004c + iVar1) * 8 + DAT_8c067f40 + 4) = ar4;
          *(int *)(&stack0x00000048 + iVar1) = ar4;
          *(int *)(DAT_8c067f44 + *(int *)(&stack0x00000048 + iVar1)) =
               *(int *)(DAT_8c067f44 + *(int *)(&stack0x00000048 + iVar1)) + 4;
          *(int *)(&stack0x00000044 + iVar1) = ar4;
          a6 = *(undefined ***)(&stack0x00000044 + iVar1);
          *(int *)(DAT_8c067f48 + (int)a6) =
               *(int *)(DAT_8c067f48 + *(int *)(&stack0x00000044 + iVar1)) + 1;
        }
        else {
          (*(code *)PTR_FUN_8c067fd8)((int)&uStack_1c + DAT_8c067fd4 + iVar1,ar5,a6,ar7);
          uVar3 = (*(code *)PTR_FUN_8c067fdc)(ar4,(int)&uStack_1c + DAT_8c067fd4 + iVar1,a6,ar7);
          *(short *)(&stack0xffffffea + iVar1) = (short)uVar3;
          *(uint *)((int)&uStack_1c + DAT_8c067fe4 + iVar1) =
               (uint)(DAT_8c067fe0 <= *(ushort *)(&stack0xffffffea + iVar1));
          (*(code *)PTR_FUN_8c067fe8)((int)&uStack_1c + DAT_8c067fd4 + iVar1,0xffffffff,a6,ar7);
          if (*(int *)((int)&uStack_1c + DAT_8c067fe4 + iVar1) != 0) {
            if (-1 < *(int *)(DAT_8c067fec + ar4)) {
              *(undefined4 *)(&stack0x00000040 + iVar1) = *(undefined4 *)(DAT_8c067fec + ar4);
              *(undefined4 *)(DAT_8c067ff0 + *(int *)(&stack0x00000040 + iVar1) * 8) = 0;
              *(undefined4 *)(&stack0x0000003c + iVar1) = *(undefined4 *)(DAT_8c067fec + ar4);
              *(undefined4 *)(*(int *)(&stack0x0000003c + iVar1) * 8 + DAT_8c067ff0 + 4) = 0;
            }
            *(undefined4 *)(DAT_8c067ff4 + ar4) = 7;
          }
        }
      }
      else if ((*DAT_8c068070 < 3) && (-1 < *(int *)(DAT_8c068074 + ar4))) {
        *DAT_8c068070 = *DAT_8c068070 + 1;
        *DAT_8c068078 = *DAT_8c068078 + -1;
        *(undefined4 *)(&stack0x00000038 + iVar1) = *(undefined4 *)(DAT_8c068074 + ar4);
        *(int *)(*(int *)(&stack0x00000038 + iVar1) * 8 + DAT_8c06807c + 4) = ar4;
        *(int *)(&stack0x00000034 + iVar1) = ar4;
        *(int *)(DAT_8c068080 + *(int *)(&stack0x00000034 + iVar1)) =
             *(int *)(DAT_8c068080 + *(int *)(&stack0x00000034 + iVar1)) + 4;
        *(int *)(&stack0x00000030 + iVar1) = ar4;
        a6 = *(undefined ***)(&stack0x00000030 + iVar1);
        *(int *)(DAT_8c068084 + (int)a6) =
             *(int *)(DAT_8c068084 + *(int *)(&stack0x00000030 + iVar1)) + 1;
      }
      else {
        (*(code *)PTR_FUN_8c06812c)((int)&uStack_1c + DAT_8c068128 + iVar1,ar5,a6,ar7);
        uVar3 = (*(code *)PTR_FUN_8c068130)(ar4,(int)&uStack_1c + DAT_8c068128 + iVar1,a6,ar7);
        *(short *)(&stack0xffffffe8 + iVar1) = (short)uVar3;
        *(uint *)((int)&uStack_1c + DAT_8c068138 + iVar1) =
             (uint)(DAT_8c068134 <= *(ushort *)(&stack0xffffffe8 + iVar1));
        (*(code *)PTR_FUN_8c06813c)((int)&uStack_1c + DAT_8c068128 + iVar1,0xffffffff,a6,ar7);
        if (*(int *)((int)&uStack_1c + DAT_8c068138 + iVar1) != 0) {
          if (-1 < *(int *)(DAT_8c068140 + ar4)) {
            *(undefined4 *)(&stack0x0000002c + iVar1) = *(undefined4 *)(DAT_8c068140 + ar4);
            ar7 = *(int *)(&stack0x0000002c + iVar1);
            a6 = (undefined **)(ar7 * 8);
            *(undefined4 *)(DAT_8c068144 + (int)a6) = 0;
            *(undefined4 *)(&stack0x00000028 + iVar1) = *(undefined4 *)(DAT_8c068140 + ar4);
            *(undefined4 *)(*(int *)(&stack0x00000028 + iVar1) * 8 + DAT_8c068144 + 4) = 0;
          }
          *(undefined4 *)(DAT_8c068148 + ar4) = 7;
        }
      }
      break;
    case 3:
      (*(code *)PTR_FUN_8c0683b4)
                ((int)&uStack_1c + DAT_8c0683b0 + iVar1,ar5,&switchD_8c067a30::switchdataD_8c067a50,
                 ar7);
      uVar3 = (*(code *)PTR_FUN_8c0683b8)(ar4,(int)&uStack_1c + DAT_8c0683b0 + iVar1,a6,ar7);
      *(short *)((int)&uStack_1c + iVar1) = (short)uVar3;
      fVar10 = DAT_8c0683bc;
      fVar13 = DAT_8c0683c0;
      if (in_FPSCR_SZ == '\0') {
        fVar10 = (float)*(ushort *)((int)&uStack_1c + iVar1);
        fVar13 = DAT_8c0683bc;
      }
      *(uint *)((int)&uStack_1c + (int)DAT_8c0683c0 + iVar1) =
           (uint)(in_FPSCR_PR != '\0' || fVar13 <= fVar10);
      (*(code *)PTR_FUN_8c0683c4)((int)&uStack_1c + DAT_8c0683b0 + iVar1,0xffffffff,a6,ar7);
      if (*(int *)((int)&uStack_1c + (int)DAT_8c0683c0 + iVar1) != 0) {
        (*(code *)PTR_FUN_8c0683b4)((int)&uStack_1c + DAT_8c0683c8 + iVar1,ar5,a6,ar7);
        (*(code *)PTR_FUN_8c0683cc)(ar4,(int)&uStack_1c + DAT_8c0683c8 + iVar1,a6,ar7);
        ar7 = (int)&uStack_1c + DAT_8c0683c8 + iVar1;
        a6 = (undefined **)PTR_FUN_8c0683c4;
        (*(code *)PTR_FUN_8c0683c4)(ar7,0xffffffff,PTR_FUN_8c0683c4,ar7);
        *(int *)(&stack0x0000000c + iVar1) = ar4;
        iVar5 = *(int *)(&stack0x0000000c + iVar1);
        *(int *)(DAT_8c0683d0 + iVar5) =
             *(int *)(DAT_8c0683d0 + *(int *)(&stack0x0000000c + iVar1)) + 1;
        *(undefined4 *)(DAT_8c0683d4 + ar4) = 0;
        uVar3 = (*(code *)PTR_get_field_24_026024_8c0683d8)(ar6,iVar5,a6,ar7);
        *(undefined4 *)((int)&uStack_1c + DAT_8c0683dc + iVar1) = uVar3;
        iVar6 = *(int *)((int)&uStack_1c + DAT_8c0683dc + iVar1);
        if (iVar6 == 0) {
          uVar3 = (*(code *)PTR_rand_8c068428)(ar6,iVar5,a6,ar7);
          *(undefined4 *)((int)&uStack_1c + DAT_8c06842c + iVar1) = uVar3;
          *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(DAT_8c068430 + ar4);
          uVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c068434)
                            (*(undefined4 *)((int)&uStack_1c + DAT_8c06842c + iVar1),3,a6,ar7);
          *(undefined4 *)(&stack0x00000004 + iVar1) = uVar3;
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(DAT_8c068440,
                                      (float)(*(int *)(PTR_DAT_8c06843c +
                                                      *(int *)(&stack0x00000008 + iVar1) * 4) +
                                             *(int *)(&stack0x00000004 + iVar1)));
          }
          else {
            dVar12 = (double)CONCAT44(uRam8c068444,DAT_8c068440);
          }
          if (in_FPSCR_PR == '\0') {
            fVar10 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
          }
          else {
            fVar10 = SUB84(dVar12 / dVar12,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(ar4 + DAT_8c068438) = fVar10;
          }
          else {
            *(undefined8 *)(ar4 + DAT_8c068438) = in_xd0;
          }
        }
        else if (iVar6 == 1) {
          uVar3 = (*(code *)PTR_rand_8c06847c)(ar6,iVar5,a6,ar7);
          *(undefined4 *)((int)&uStack_1c + DAT_8c068480 + iVar1) = uVar3;
          uVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c068484)
                            (*(undefined4 *)((int)&uStack_1c + DAT_8c068480 + iVar1),3,a6,ar7);
          *(undefined4 *)(&stack0x00000000 + iVar1) = uVar3;
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(DAT_8c06848c,(float)(*(int *)(&stack0x00000000 + iVar1) + 6));
          }
          else {
            dVar12 = (double)CONCAT44(uRam8c068490,DAT_8c06848c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar10 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
          }
          else {
            fVar10 = SUB84(dVar12 / dVar12,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(ar4 + DAT_8c068488) = fVar10;
          }
          else {
            *(undefined8 *)(ar4 + DAT_8c068488) = in_xd0;
          }
        }
        else if (iVar6 == 2) {
          uVar3 = (*(code *)PTR_rand_8c0684cc)(ar6,iVar5,a6,ar7);
          *(undefined4 *)((int)&uStack_1c + DAT_8c0684d0 + iVar1) = uVar3;
          uVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0684d4)
                            (*(undefined4 *)((int)&uStack_1c + DAT_8c0684d0 + iVar1),3,a6,ar7);
          *(undefined4 *)(&stack0xfffffffc + iVar1) = uVar3;
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(DAT_8c0684dc,(float)(*(int *)(&stack0xfffffffc + iVar1) + 10))
            ;
          }
          else {
            dVar12 = (double)CONCAT44(uRam8c0684e0,DAT_8c0684dc);
          }
          if (in_FPSCR_PR == '\0') {
            fVar10 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
          }
          else {
            fVar10 = SUB84(dVar12 / dVar12,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(ar4 + DAT_8c0684d8) = fVar10;
          }
          else {
            *(undefined8 *)(ar4 + DAT_8c0684d8) = in_xd0;
          }
        }
      }
      break;
    case 4:
      *(int *)(&stack0xfffffff8 + iVar1) = ar4;
      iVar6 = *(int *)(&stack0xfffffff8 + iVar1);
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c068640,
                                  *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar1) + DAT_8c06863c)
                                 );
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)(&stack0xfffffff8 + iVar1) + DAT_8c06863c);
        dVar12 = (double)CONCAT44(DAT_8c068644,DAT_8c068640);
      }
      if (in_FPSCR_PR == '\0') {
        fVar10 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar12 + dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(iVar6 + DAT_8c06863c) = fVar10;
      }
      else {
        *(undefined8 *)(iVar6 + DAT_8c06863c) = in_xd0;
      }
      *(int *)((int)&iStack_20 + iVar1) = (int)&uStack_1c + DAT_8c068644 + iVar1;
      (*(code *)PTR_FUN_8c068648)(ar4,ar4 + DAT_8c06863c,iVar6,ar7);
      (*(code *)PTR_vec3_copy_8c023d8c_8c06864c)
                (ar4 + 0x50,(int)&uStack_1c + DAT_8c068644 + iVar1,iVar6,ar7);
      uVar3 = 0xffffffff;
      (*(code *)PTR_object_dtor_delete_8c068650)
                ((int)&uStack_1c + DAT_8c068644 + iVar1,0xffffffff,iVar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x54) = *(undefined4 *)(ar4 + DAT_8c068654);
      }
      else {
        *(undefined8 *)(ar4 + 0x54) = *(undefined8 *)(ar4 + DAT_8c068654);
      }
      *(int *)((int)&iStack_20 + iVar1) = (int)&uStack_1c + DAT_8c068658 + iVar1;
      (*(code *)PTR_FUN_8c06865c)(ar4,uVar3,iVar6,ar7);
      *(int *)((int)&iStack_20 + iVar1) = (int)&uStack_1c + DAT_8c068660 + iVar1;
      (*(code *)PTR_Vec3_scale_8c068668)
                ((int)&iStack_20 + DAT_8c068664 + iVar1,ar4 + 0x60,iVar6,ar7);
      (*(code *)PTR_Vec3_set_xyz_8c068670)
                ((int)&uStack_1c + DAT_8c06866c + iVar1,PTR_Vec3_set_xyz_8c068670,iVar6,ar7);
      *(int *)((int)&iStack_20 + iVar1) = (int)&uStack_1c + DAT_8c068674 + iVar1;
      (*(code *)PTR_FUN_8c068680)
                ((int)&iStack_20 + DAT_8c06867c + iVar1,(int)&iStack_20 + DAT_8c068678 + iVar1,iVar6
                 ,ar7);
      *(int *)((int)&iStack_20 + iVar1) = (int)&uStack_1c + DAT_8c068684 + iVar1;
      (*(code *)PTR_Vec3_add_8c068690)
                (ar4 + DAT_8c06868c,(int)&iStack_20 + DAT_8c068688 + iVar1,iVar6,ar7);
      (*(code *)PTR_Vec3_assign_8c068694)
                (ar4 + 0x30,(int)&uStack_1c + DAT_8c068684 + iVar1,iVar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c068698)((int)&uStack_1c + DAT_8c068684 + iVar1,0xffffffff,iVar6,ar7)
      ;
      (*(code *)PTR_Vec3_dtor_8c068698)((int)&uStack_1c + DAT_8c068674 + iVar1,0xffffffff,iVar6,ar7)
      ;
      (*(code *)PTR_object_dtor_delete_8c068650)
                ((int)&uStack_1c + DAT_8c06866c + iVar1,0xffffffff,iVar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c068698)((int)&uStack_1c + DAT_8c068660 + iVar1,0xffffffff,iVar6,ar7)
      ;
      a6 = (undefined **)0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c068698)
                ((int)&uStack_1c + DAT_8c068658 + iVar1,0xffffffff,0xffffffff,ar7);
      ppuVar4 = _DAT_8c0686a0;
      ppuVar9 = DAT_8c06869c;
      ppuVar14 = _DAT_8c0686a0;
      if (in_FPSCR_SZ == '\0') {
        ppuVar9 = *(undefined ***)(ar4 + DAT_8c06863c);
        ppuVar14 = DAT_8c06869c;
      }
      if (in_FPSCR_PR != '\0' || (float)ppuVar14 <= (float)ppuVar9) {
        *(int *)(&stack0xfffffff4 + iVar1) = ar4;
        *(int *)((int)_DAT_8c0686a0 + *(int *)(&stack0xfffffff4 + iVar1)) =
             *(int *)((int)_DAT_8c0686a0 + *(int *)(&stack0xfffffff4 + iVar1)) + 1;
        a6 = ppuVar4;
      }
      break;
    case 5:
      if ((*(uint *)(ar4 + 0x74) & 0x20) == 0x20) {
        *(int *)(&stack0xfffffff0 + iVar1) = ar4;
        *(int *)(DAT_8c068718 + *(int *)(&stack0xfffffff0 + iVar1)) =
             *(int *)(DAT_8c068718 + *(int *)(&stack0xfffffff0 + iVar1)) + 1;
        (*(code *)PTR_FUN_8c068720)
                  ((int)&uStack_1c + DAT_8c06871c + iVar1,ar5,
                   &switchD_8c067a30::switchdataD_8c067a50,ar7);
        (*(code *)PTR_FUN_8c068724)(ar4,(int)&uStack_1c + DAT_8c06871c + iVar1,a6,ar7);
        (*(code *)PTR_FUN_8c068728)((int)&uStack_1c + DAT_8c06871c + iVar1,0xffffffff,a6,ar7);
        ar7 = *DAT_8c06872c;
        if (ar7 == 1) {
          ar7 = 0xe;
          a6 = (undefined **)0x1;
          (**(code **)(*ar6 + DAT_8c068730))(ar6,ar4 + 0x30,1,0xe);
        }
      }
      else if ((*(uint *)(ar4 + 0x74) & 0x40) == 0x40) {
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c068758,*(undefined4 *)(ar4 + 0x34));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x34);
          dVar12 = (double)CONCAT44(uRam8c06875c,DAT_8c068758);
        }
        if (in_FPSCR_PR == '\0') {
          fVar10 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar10 = SUB84(dVar12 - dVar12,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x34) = fVar10;
        }
        else {
          *(undefined8 *)(ar4 + 0x34) = in_xd0;
        }
      }
      else if ((*(uint *)(ar4 + 0x74) & 0x10) == 0x10) {
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c068784,*(undefined4 *)(ar4 + 0x34));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x34);
          dVar12 = (double)CONCAT44(uRam8c068788,DAT_8c068784);
        }
        if (in_FPSCR_PR == '\0') {
          fVar10 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar10 = SUB84(dVar12 - dVar12,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x34) = fVar10;
        }
        else {
          *(undefined8 *)(ar4 + 0x34) = in_xd0;
        }
      }
      break;
    case 7:
      *(int *)(&stack0xffffffec + iVar1) = ar4;
      iVar6 = *(int *)(&stack0xffffffec + iVar1);
      puVar2 = (undefined8 *)(iVar6 + DAT_8c0687f4);
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c0687f8,*(undefined4 *)puVar2);
      }
      else {
        in_xd0 = *puVar2;
        dVar12 = (double)CONCAT44(DAT_8c0687fc,DAT_8c0687f8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar10 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar12 + dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)(&stack0xffffffec + iVar1) + DAT_8c0687f4) = fVar10;
      }
      else {
        *(undefined8 *)(*(int *)(&stack0xffffffec + iVar1) + DAT_8c0687f4) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        fVar10 = *(float *)(ar4 + DAT_8c0687f4);
      }
      if (in_FPSCR_PR == '\0' && 1.0 < fVar10) {
        *DAT_8c0687fc = *DAT_8c0687fc + -1;
        (*(code *)PTR_FUN_8c068800)(ar4,iVar6,&switchD_8c067a30::switchdataD_8c067a50,ar7);
      }
    }
  }
  (*(code *)PTR_object_dtor_delete_8c068808)
            ((int)&uStack_1c + DAT_8c068804 + iVar1,0xffffffff,a6,ar7);
  uVar3 = (*(code *)PTR_Vec3_dtor_8c068810)
                    ((int)&uStack_1c + DAT_8c06880c + iVar1,0xffffffff,a6,ar7);
  return uVar3;
}



/* FUN_8c068818 @ 8c068818 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c068818(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    a5 = 0xffffffff;
    (*(code *)PTR_free_if_nonnull_wrap_068860_8c068858)(ar4 + DAT_8c068854,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c06885c)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* free_if_nonnull_wrap_068860 @ 8c068860 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_068860(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c06888c)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c068890 @ 8c068890 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c068890(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar5;
  
  *ar4 = *ar5;
  uVar1 = ar5[2];
  ar4[1] = ar5[1];
  ar4[2] = uVar1;
  uVar1 = ar5[4];
  ar4[3] = ar5[3];
  ar4[4] = uVar1;
  uVar1 = ar5[6];
  ar4[5] = ar5[5];
  ar4[6] = uVar1;
  uVar1 = ar5[8];
  ar4[7] = ar5[7];
  ar4[8] = uVar1;
  ar4[9] = ar5[9];
  *(undefined2 *)(ar4 + 10) = *(undefined2 *)(ar5 + 10);
  puVar8 = ar4 + 0xb;
  puVar4 = ar5 + 0xb;
  iVar2 = 0xb;
  do {
    puVar5 = puVar4 + 1;
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 2;
    puVar8[1] = *puVar5;
    puVar8 = puVar8 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(DAT_8c0689e4 + (int)ar4) = *(undefined4 *)(DAT_8c0689e4 + (int)ar5);
  *(undefined4 *)(DAT_8c0689e8 + (int)ar4) = *(undefined4 *)(DAT_8c0689e8 + (int)ar5);
  puVar6 = (undefined2 *)((int)ar4 + DAT_8c0689ec);
  puVar3 = (undefined2 *)((int)ar5 + DAT_8c0689ec);
  *puVar6 = *puVar3;
  puVar6[1] = puVar3[1];
  puVar6[2] = puVar3[2];
  puVar6[3] = puVar3[3];
  puVar6[4] = puVar3[4];
  puVar6 = (undefined2 *)((int)ar4 + DAT_8c0689f0);
  puVar3 = (undefined2 *)((int)ar5 + DAT_8c0689f0);
  *puVar6 = *puVar3;
  puVar6[1] = puVar3[1];
  puVar6[2] = puVar3[2];
  puVar6[3] = puVar3[3];
  puVar6[4] = puVar3[4];
  *(undefined1 *)(DAT_8c0689f4 + (int)ar4) = *(undefined1 *)(DAT_8c0689f4 + (int)ar5);
  *(undefined1 *)(DAT_8c0689f8 + (int)ar4) = *(undefined1 *)(DAT_8c0689f8 + (int)ar5);
  *(undefined2 *)(DAT_8c0689fc + (int)ar4) = *(undefined2 *)(DAT_8c0689fc + (int)ar5);
  *(undefined2 *)(DAT_8c068a00 + (int)ar4) = *(undefined2 *)(DAT_8c068a00 + (int)ar5);
  *(undefined4 *)(DAT_8c068a04 + (int)ar4) = *(undefined4 *)(DAT_8c068a04 + (int)ar5);
  (*(code *)PTR_FUN_8c068a0c)((int)ar4 + DAT_8c068a08,(int)ar5 + DAT_8c068a08,ar6,ar7);
  *(undefined4 *)(DAT_8c068a10 + (int)ar4) = *(undefined4 *)(DAT_8c068a10 + (int)ar5);
  *(undefined4 *)(DAT_8c068a14 + (int)ar4) = *(undefined4 *)(DAT_8c068a14 + (int)ar5);
  *(undefined4 *)(DAT_8c068a18 + (int)ar4) = *(undefined4 *)(DAT_8c068a18 + (int)ar5);
  *(undefined4 *)(DAT_8c068a1c + (int)ar4) = *(undefined4 *)(DAT_8c068a1c + (int)ar5);
  *(undefined4 *)(DAT_8c068a20 + (int)ar4) = *(undefined4 *)(DAT_8c068a20 + (int)ar5);
  puVar7 = (undefined1 *)((int)ar4 + DAT_8c068a24);
  puVar9 = (undefined1 *)((int)ar5 + DAT_8c068a24);
  iVar2 = DAT_8c068a28;
  do {
    puVar10 = puVar9 + 1;
    *puVar7 = *puVar9;
    puVar9 = puVar9 + 2;
    puVar7[1] = *puVar10;
    puVar7 = puVar7 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return ar4;
}



/* FUN_8c068a2c @ 8c068a2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined2 * FUN_8c068a2c(undefined2 *ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  ar4[3] = ar5[3];
  *(undefined1 *)(ar4 + 4) = *(undefined1 *)(ar5 + 4);
  *(undefined1 *)((int)ar4 + 9) = *(undefined1 *)((int)ar5 + 9);
  return ar4;
}



/* FUN_8c068a4c @ 8c068a4c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c068d18) */
/* WARNING: Removing unreachable block (ram,0x8c068df2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c068a4c(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *a6;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar6;
  double in_dr0;
  double dVar7;
  float fVar9;
  undefined4 in_fr3;
  double in_dr14;
  double dVar10;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar11;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  float fVar8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar6 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar6 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar6 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar6 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar6 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar6 + -0x10) = in_PR;
  iVar2 = -DAT_8c068aa8;
  puVar3 = (undefined4 *)((int)puVar6 + DAT_8c068aac + iVar2 + -0x10);
  uVar4 = *(undefined4 *)(PTR_DAT_8c068ab0 + 4);
  *puVar3 = *(undefined4 *)PTR_DAT_8c068ab0;
  puVar3[1] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c068ab0 + 0xc);
  puVar3[2] = *(undefined4 *)(PTR_DAT_8c068ab0 + 8);
  puVar3[3] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c068ab0 + 0x14);
  puVar3[4] = *(undefined4 *)(PTR_DAT_8c068ab0 + 0x10);
  puVar3[5] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c068ab0 + 0x1c);
  puVar3[6] = *(undefined4 *)(PTR_DAT_8c068ab0 + 0x18);
  puVar3[7] = uVar4;
  iVar1 = *(int *)(DAT_8c068ab4 + ar4);
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c068c70)
              ((undefined1 *)((int)puVar6 + DAT_8c068c6c + iVar2 + -0x10),ar5,ar6,ar7);
    uVar5 = SUB84(in_dr0,0);
    uVar4 = (*(code *)PTR_FUN_8c068c74)
                      (ar4,(undefined1 *)((int)puVar6 + DAT_8c068c6c + iVar2 + -0x10),ar6,ar7);
    *(short *)((int)puVar6 + iVar2 + -0xc) = (short)uVar4;
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(ar4 + DAT_8c068c78));
      dVar7 = (double)CONCAT44(DAT_8c068c7c,uVar5);
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + DAT_8c068c78);
      dVar7 = (double)CONCAT44(PTR_FUN_8c068c80,DAT_8c068c7c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar10 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                SUB84(in_dr14,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      dVar10 = in_dr14 / dVar7;
    }
    if (in_FPSCR_PR == '\0') {
      fVar8 = (float)*(ushort *)((int)puVar6 + iVar2 + -0xc);
      dVar7 = (double)CONCAT44(fVar8,SUB84(dVar7,0));
      in_dr14 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),SUB84(dVar10,0) * fVar8);
    }
    else {
      dVar7 = (double)*(ushort *)((int)puVar6 + iVar2 + -0xc);
      in_dr14 = dVar10 * dVar7;
    }
    uVar4 = SUB84(dVar7,0);
    (*(code *)PTR_FUN_8c068c80)
              ((undefined1 *)((int)puVar6 + DAT_8c068c6c + iVar2 + -0x10),0xffffffff,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c068c78),uVar4);
    }
    else {
      in_dr0 = *(double *)(ar4 + DAT_8c068c78);
    }
    if (in_FPSCR_PR == '\0') {
      bVar11 = (float)((ulonglong)in_dr0 >> 0x20) < SUB84(in_dr14,0);
    }
    else {
      bVar11 = in_dr0 < in_dr14;
    }
    if (bVar11) {
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   *(undefined4 *)(ar4 + DAT_8c068c78));
      }
      else {
        in_xd14 = *(undefined8 *)(ar4 + DAT_8c068c78);
      }
      *(int *)((int)puVar6 + iVar2 + 0x30) = ar4;
      *(int *)(DAT_8c068c84 + *(int *)((int)puVar6 + iVar2 + 0x30)) =
           *(int *)(DAT_8c068c84 + *(int *)((int)puVar6 + iVar2 + 0x30)) + 1;
      *(int *)((int)puVar6 + iVar2 + 0x2c) = ar4;
      uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c068c8c)
                        (*(undefined4 *)(DAT_8c068c88 + ar4),4,ar6,ar7);
      *(undefined4 *)((int)puVar6 + iVar2 + 0x24) = uVar4;
      *(undefined4 *)((int)puVar6 + iVar2 + 0x28) = *(undefined4 *)((int)puVar6 + iVar2 + 0x24);
      *(uint *)(DAT_8c068c90 + *(int *)((int)puVar6 + iVar2 + 0x2c)) =
           *(uint *)(DAT_8c068c90 + *(int *)((int)puVar6 + iVar2 + 0x2c)) &
           ~*(uint *)((int)puVar6 +
                     *(int *)((int)puVar6 + iVar2 + 0x28) * 4 + DAT_8c068c94 + iVar2 + -0x10);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c068c98) = SUB84(in_dr14,0);
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c068c98) = in_xd14;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return iVar1;
      }
      a6 = ar6;
      uVar4 = (*(code *)PTR_get_field_24_026024_8c068d8c)(ar6,ar5,ar6,ar7);
      *(undefined4 *)((int)puVar6 + iVar2 + 0x40) = uVar4;
      if (*(int *)((int)puVar6 + iVar2 + 0x40) != 1) {
        return *(int *)((int)puVar6 + iVar2 + 0x40);
      }
      (**(code **)(DAT_8c068d90 + *ar6))(ar6,ar5,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar6 + iVar2 + 0x3c) = (int)((ulonglong)in_dr0 >> 0x20);
        in_dr0 = (double)(ulonglong)*(uint *)((int)puVar6 + iVar2 + 0x3c);
      }
      else {
        *(double *)((int)puVar6 + iVar2 + 0x3c) = in_dr0;
        in_xd0 = *(undefined8 *)((int)puVar6 + iVar2 + 0x3c);
      }
      if (in_FPSCR_PR == '\0' && 0.0 < SUB84(in_dr0,0)) {
        uVar4 = (*(code *)PTR_rand_8c068e44)(ar6,ar5,a6,ar7);
        *(undefined4 *)((int)puVar6 + iVar2 + 0x34) = uVar4;
        *(int *)((int)puVar6 + iVar2 + -4) = ar4;
        uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c068e48)
                          (*(undefined4 *)((int)puVar6 + iVar2 + 0x34),5,a6,ar7);
        *(undefined4 *)((int)puVar6 + iVar2 + -8) = uVar4;
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(*(undefined4 *)
                                    (*(int *)((int)puVar6 + iVar2 + -4) + DAT_8c068e4c),in_fr3);
        }
        else {
          dVar7 = *(double *)(*(int *)((int)puVar6 + iVar2 + -4) + DAT_8c068e4c);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(DAT_8c068e50,(float)(*(int *)((int)puVar6 + iVar2 + -8) + 8));
        }
        else {
          dVar10 = (double)CONCAT44(DAT_8c068e54,DAT_8c068e50);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar10 / dVar10,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(DAT_8c068e54,fVar8);
        }
        else {
          dVar10 = (double)CONCAT44(_DAT_8c068e58,DAT_8c068e54);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = (float)((ulonglong)dVar10 >> 0x20);
          fVar8 = SUB84(dVar10,0) * fVar9;
          dVar10 = (double)CONCAT44(fVar9,fVar8);
          dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - fVar8,SUB84(dVar7,0));
        }
        else {
          dVar10 = dVar10 * dVar10;
          dVar7 = dVar7 - dVar10;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(*(int *)((int)puVar6 + iVar2 + -4) + DAT_8c068e4c) =
               (int)((ulonglong)dVar7 >> 0x20);
        }
        else {
          *(double *)(*(int *)((int)puVar6 + iVar2 + -4) + DAT_8c068e4c) = dVar7;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)(ulonglong)*(uint *)(ar4 + DAT_8c068e4c);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + DAT_8c068e4c);
        }
        fVar8 = SUB84(dVar10,0);
        if (in_FPSCR_PR == '\0' && fVar8 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + DAT_8c068e4c) = 0;
          }
          else {
            *(ulonglong *)(ar4 + DAT_8c068e4c) = (ulonglong)dVar10 & 0xffffffff;
          }
        }
        if (in_FPSCR_SZ == '\0') {
          fVar8 = *(float *)(ar4 + DAT_8c068e4c);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + DAT_8c068e4c);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(DAT_8c068e5c,fVar8);
        }
        else {
          dVar7 = (double)CONCAT44(DAT_8c068e60,DAT_8c068e5c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar7 * dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + _DAT_8c068e58) = fVar8;
          return &DAT_8c068e5c;
        }
        *(undefined8 *)(ar4 + _DAT_8c068e58) = in_xd0;
        return &DAT_8c068e5c;
      }
      uVar4 = (*(code *)PTR_rand_8c068d94)(ar6,ar5,a6,ar7);
      *(undefined4 *)((int)puVar6 + iVar2 + 0x38) = uVar4;
      *(int *)((int)puVar6 + iVar2 + 0xc) = ar4;
      uVar5 = 5;
      uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c068d98)
                        (*(undefined4 *)((int)puVar6 + iVar2 + 0x38),5,a6,ar7);
      *(undefined4 *)((int)puVar6 + iVar2 + 8) = uVar4;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar6 + iVar2 + 0xc) + DAT_8c068d9c)
                                 ,in_fr3);
      }
      else {
        dVar7 = *(double *)(*(int *)((int)puVar6 + iVar2 + 0xc) + DAT_8c068d9c);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c068da0,(float)(*(int *)((int)puVar6 + iVar2 + 8) + 8));
      }
      else {
        dVar10 = (double)CONCAT44(DAT_8c068da4,DAT_8c068da0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar8 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar10 / dVar10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c068da4,fVar8);
      }
      else {
        dVar10 = (double)CONCAT44(DAT_8c068da8,DAT_8c068da4);
      }
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) +
                                 SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar7,0)
                                );
      }
      else {
        dVar7 = dVar7 + dVar10 * dVar10;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)((int)puVar6 + iVar2 + 0xc) + DAT_8c068d9c) =
             (int)((ulonglong)dVar7 >> 0x20);
      }
      else {
        *(double *)(*(int *)((int)puVar6 + iVar2 + 0xc) + DAT_8c068d9c) = dVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c068dac,*(undefined4 *)(ar4 + DAT_8c068d9c));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + DAT_8c068d9c);
        dVar7 = (double)CONCAT44(DAT_8c068db0,DAT_8c068dac);
      }
      if (in_FPSCR_PR == '\0') {
        fVar8 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar7 * dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c068da8) = fVar8;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c068da8) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        fVar8 = *(float *)(ar4 + DAT_8c068d9c);
      }
      if (in_FPSCR_PR == '\0' && fVar8 < 1.0) {
        return (float *)(ar4 + DAT_8c068d9c);
      }
      *(undefined4 *)((int)puVar6 + iVar2 + 4) = *(undefined4 *)(DAT_8c068db0 + ar4);
      *(undefined4 *)(DAT_8c068db4 + *(int *)((int)puVar6 + iVar2 + 4) * 8) = 0;
      *(undefined4 *)((int)puVar6 + iVar2) = *(undefined4 *)(DAT_8c068db0 + ar4);
      *(undefined4 *)(*(int *)((int)puVar6 + iVar2) * 8 + DAT_8c068db4 + 4) = 0;
      (*(code *)PTR_FUN_8c068db8)(ar4,uVar5,a6,ar7);
      iVar2 = *DAT_8c068dbc;
      *DAT_8c068dbc = iVar2 + -1;
      return iVar2 + -1;
    }
    goto LAB_8c068bfc;
  }
  uVar5 = SUB84(in_dr0,0);
  (*(code *)PTR_FUN_8c068c70)
            ((undefined1 *)((int)puVar6 + DAT_8c068c9c + iVar2 + -0x10),ar5,ar6,ar7);
  uVar4 = (*(code *)PTR_FUN_8c068c74)
                    (ar4,(undefined1 *)((int)puVar6 + DAT_8c068c9c + iVar2 + -0x10),ar6,ar7);
  *(short *)((int)puVar6 + iVar2 + -0xe) = (short)uVar4;
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + DAT_8c068c78)
                              );
    dVar7 = (double)CONCAT44(DAT_8c068ca0,uVar5);
  }
  else {
    in_xd14 = *(undefined8 *)(ar4 + DAT_8c068c78);
    dVar7 = (double)CONCAT44(_DAT_8c068ca4,DAT_8c068ca0);
  }
  if (in_FPSCR_PR == '\0') {
    dVar10 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                              SUB84(in_dr14,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    dVar10 = in_dr14 / dVar7;
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = (float)*(ushort *)((int)puVar6 + iVar2 + -0xe);
    dVar7 = (double)CONCAT44(fVar8,SUB84(dVar7,0));
    in_dr14 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),SUB84(dVar10,0) * fVar8);
  }
  else {
    dVar7 = (double)*(ushort *)((int)puVar6 + iVar2 + -0xe);
    in_dr14 = dVar10 * dVar7;
  }
  uVar4 = SUB84(dVar7,0);
  (*(code *)PTR_FUN_8c068c80)
            ((undefined1 *)((int)puVar6 + DAT_8c068c9c + iVar2 + -0x10),0xffffffff,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c068c78),uVar4);
  }
  else {
    in_dr0 = *(double *)(ar4 + DAT_8c068c78);
  }
  if (in_FPSCR_PR == '\0') {
    bVar11 = (float)((ulonglong)in_dr0 >> 0x20) < SUB84(in_dr14,0);
  }
  else {
    bVar11 = in_dr0 < in_dr14;
  }
  if (bVar11) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(ar4 + DAT_8c068c78));
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + DAT_8c068c78);
    }
    *(int *)((int)puVar6 + iVar2 + 0x20) = ar4;
    *(int *)(DAT_8c068c84 + *(int *)((int)puVar6 + iVar2 + 0x20)) =
         *(int *)(DAT_8c068c84 + *(int *)((int)puVar6 + iVar2 + 0x20)) + 1;
    *(int *)((int)puVar6 + iVar2 + 0x1c) = ar4;
    uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c068c8c)
                      (*(undefined4 *)(DAT_8c068c88 + ar4),4,ar6,ar7);
    *(undefined4 *)((int)puVar6 + iVar2 + 0x14) = uVar4;
    *(undefined4 *)((int)puVar6 + iVar2 + 0x18) = *(undefined4 *)((int)puVar6 + iVar2 + 0x14);
    *(uint *)(DAT_8c068c90 + *(int *)((int)puVar6 + iVar2 + 0x1c)) =
         *(uint *)(DAT_8c068c90 + *(int *)((int)puVar6 + iVar2 + 0x1c)) &
         ~*(uint *)((int)puVar6 + *(int *)((int)puVar6 + iVar2 + 0x18) * 4 + DAT_8c068c94 + iVar2);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + _DAT_8c068ca4) = SUB84(in_dr14,0);
  }
  else {
    *(undefined8 *)(ar4 + _DAT_8c068ca4) = in_xd14;
  }
LAB_8c068bfc:
  uVar5 = SUB84(in_dr0,0);
  (*(code *)PTR_FUN_8c068c70)((undefined1 *)((int)puVar6 + iVar2 + 0x44),ar5,ar6,ar7);
  uVar4 = (*(code *)PTR_FUN_8c068c74)(ar4,(undefined1 *)((int)puVar6 + iVar2 + 0x44),ar6,ar7);
  *(short *)((int)puVar6 + iVar2 + -0x10) = (short)uVar4;
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + DAT_8c068c78)
                              );
    dVar7 = (double)CONCAT44(DAT_8c068ca8,uVar5);
  }
  else {
    in_xd14 = *(undefined8 *)(ar4 + DAT_8c068c78);
    dVar7 = (double)CONCAT44(_DAT_8c068cac,DAT_8c068ca8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar10 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                              SUB84(in_dr14,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    dVar10 = in_dr14 / dVar7;
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = (float)*(ushort *)((int)puVar6 + iVar2 + -0x10);
    dVar7 = (double)CONCAT44(fVar8,SUB84(dVar7,0));
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),SUB84(dVar10,0) * fVar8);
  }
  else {
    dVar7 = (double)*(ushort *)((int)puVar6 + iVar2 + -0x10);
    dVar10 = dVar10 * dVar7;
  }
  uVar4 = SUB84(dVar7,0);
  (*(code *)PTR_FUN_8c068c80)((undefined1 *)((int)puVar6 + iVar2 + 0x44),0xffffffff,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c068c78),uVar4);
  }
  else {
    dVar7 = *(double *)(ar4 + DAT_8c068c78);
  }
  if (in_FPSCR_PR == '\0') {
    bVar11 = (float)((ulonglong)dVar7 >> 0x20) < SUB84(dVar10,0);
  }
  else {
    bVar11 = dVar7 < dVar10;
  }
  if (bVar11) {
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)(ulonglong)*(uint *)(ar4 + DAT_8c068c78);
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + DAT_8c068c78);
    }
    *(int *)((int)puVar6 + iVar2 + 0x10) = ar4;
    *(int *)(DAT_8c068c84 + *(int *)((int)puVar6 + iVar2 + 0x10)) =
         *(int *)(DAT_8c068c84 + *(int *)((int)puVar6 + iVar2 + 0x10)) + 1;
  }
  iVar2 = _DAT_8c068cac;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + _DAT_8c068cac) = SUB84(dVar10,0);
  }
  else {
    *(undefined8 *)(ar4 + _DAT_8c068cac) = in_xd14;
  }
  return iVar2;
}



/* FUN_8c068e64 @ 8c068e64 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c069228) */
/* WARNING: Removing unreachable block (ram,0x8c0693ce) */
/* WARNING: Removing unreachable block (ram,0x8c0692ae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c068e64(int *ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  int iVar6;
  float *pfVar7;
  undefined8 *puVar8;
  int *a4;
  int *piVar9;
  undefined4 uVar10;
  undefined *a6;
  int *a6_00;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  double in_dr0;
  double dVar15;
  ulonglong uVar16;
  undefined4 in_fr3;
  double dVar17;
  double in_dr14;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar18;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar11 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar11 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar11 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar11 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar11 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar11 + -0x10) = in_PR;
  iVar1 = -DAT_8c068ecc;
  a6_00 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c068ed4)
            ((undefined1 *)((int)puVar11 + DAT_8c068ed0 + iVar1 + -0x10),ar5,ar6,ar7);
  puVar2 = (undefined4 *)((int)puVar11 + DAT_8c068ed8 + iVar1 + -0x10);
  uVar4 = *(undefined4 *)(PTR_DAT_8c068edc + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c068edc;
  puVar2[1] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c068edc + 0xc);
  puVar2[2] = *(undefined4 *)(PTR_DAT_8c068edc + 8);
  puVar2[3] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c068edc + 0x14);
  puVar2[4] = *(undefined4 *)(PTR_DAT_8c068edc + 0x10);
  puVar2[5] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c068edc + 0x1c);
  puVar2[6] = *(undefined4 *)(PTR_DAT_8c068edc + 0x18);
  puVar2[7] = uVar4;
  switch(*(undefined4 *)(DAT_8c068ee0 + (int)ar4)) {
  case 0:
    (*(code *)PTR_FUN_8c06911c)
              ((undefined1 *)((int)puVar11 + DAT_8c069118 + iVar1 + -0x10),ar5,a6_00,ar7);
    uVar10 = SUB84(in_dr0,0);
    uVar4 = (*(code *)PTR_FUN_8c069120)
                      (ar4,(undefined1 *)((int)puVar11 + DAT_8c069118 + iVar1 + -0x10),a6_00,ar7);
    *(short *)((int)puVar11 + iVar1 + -10) = (short)uVar4;
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)ar4 + DAT_8c069124));
      dVar17 = (double)CONCAT44(DAT_8c069128,uVar10);
    }
    else {
      in_xd14 = *(undefined8 *)((int)ar4 + DAT_8c069124);
      dVar17 = (double)CONCAT44(PTR_FUN_8c06912c,DAT_8c069128);
    }
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                SUB84(in_dr14,0) / (float)((ulonglong)dVar17 >> 0x20));
    }
    else {
      dVar15 = in_dr14 / dVar17;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = (float)*(ushort *)((int)puVar11 + iVar1 + -10);
      dVar17 = (double)CONCAT44(fVar14,SUB84(dVar17,0));
      in_dr14 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) * fVar14);
    }
    else {
      dVar17 = (double)*(ushort *)((int)puVar11 + iVar1 + -10);
      in_dr14 = dVar15 * dVar17;
    }
    uVar4 = SUB84(dVar17,0);
    (*(code *)PTR_FUN_8c06912c)
              ((undefined1 *)((int)puVar11 + DAT_8c069118 + iVar1 + -0x10),0xffffffff,a6_00,ar7);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(*(undefined4 *)((int)ar4 + DAT_8c069124),uVar4);
    }
    else {
      in_dr0 = *(double *)((int)ar4 + DAT_8c069124);
    }
    if (in_FPSCR_PR == '\0') {
      bVar18 = (float)((ulonglong)in_dr0 >> 0x20) < SUB84(in_dr14,0);
    }
    else {
      bVar18 = in_dr0 < in_dr14;
    }
    if (bVar18) {
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   *(undefined4 *)((int)ar4 + DAT_8c069124));
      }
      else {
        in_xd14 = *(undefined8 *)((int)ar4 + DAT_8c069124);
      }
      *(int **)((int)puVar11 + iVar1 + 0x54) = ar4;
      *(int *)(DAT_8c069130 + *(int *)((int)puVar11 + iVar1 + 0x54)) =
           *(int *)(DAT_8c069130 + *(int *)((int)puVar11 + iVar1 + 0x54)) + 1;
      *(int **)((int)puVar11 + iVar1 + 0x50) = ar4;
      uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c069138)
                        (*(undefined4 *)(DAT_8c069134 + (int)ar4),4,a6_00,ar7);
      *(undefined4 *)((int)puVar11 + iVar1 + 0x48) = uVar4;
      *(undefined4 *)((int)puVar11 + iVar1 + 0x4c) = *(undefined4 *)((int)puVar11 + iVar1 + 0x48);
      a6_00 = *(int **)((int)puVar11 + iVar1 + 0x50);
      *(uint *)(DAT_8c06913c + (int)a6_00) =
           *(uint *)(DAT_8c06913c + *(int *)((int)puVar11 + iVar1 + 0x50)) &
           ~*(uint *)((int)puVar11 +
                     *(int *)((int)puVar11 + iVar1 + 0x4c) * 4 + DAT_8c069140 + iVar1 + -0x10);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)ar4 + DAT_8c069144) = SUB84(in_dr14,0);
    }
    else {
      *(undefined8 *)((int)ar4 + DAT_8c069144) = in_xd14;
    }
  case 1:
    uVar10 = SUB84(in_dr0,0);
    (*(code *)PTR_FUN_8c06911c)
              ((undefined1 *)((int)puVar11 + DAT_8c069148 + iVar1 + -0x10),ar5,a6_00,ar7);
    uVar4 = (*(code *)PTR_FUN_8c069120)
                      (ar4,(undefined1 *)((int)puVar11 + DAT_8c069148 + iVar1 + -0x10),a6_00,ar7);
    *(short *)((int)puVar11 + iVar1 + -0xc) = (short)uVar4;
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)ar4 + DAT_8c069124));
      dVar17 = (double)CONCAT44(DAT_8c06914c,uVar10);
    }
    else {
      in_xd14 = *(undefined8 *)((int)ar4 + DAT_8c069124);
      dVar17 = (double)CONCAT44(_DAT_8c069150,DAT_8c06914c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                SUB84(in_dr14,0) / (float)((ulonglong)dVar17 >> 0x20));
    }
    else {
      dVar15 = in_dr14 / dVar17;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = (float)*(ushort *)((int)puVar11 + iVar1 + -0xc);
      dVar17 = (double)CONCAT44(fVar14,SUB84(dVar17,0));
      in_dr14 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) * fVar14);
    }
    else {
      dVar17 = (double)*(ushort *)((int)puVar11 + iVar1 + -0xc);
      in_dr14 = dVar15 * dVar17;
    }
    uVar4 = SUB84(dVar17,0);
    (*(code *)PTR_FUN_8c06912c)
              ((undefined1 *)((int)puVar11 + DAT_8c069148 + iVar1 + -0x10),0xffffffff,a6_00,ar7);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(*(undefined4 *)((int)ar4 + DAT_8c069124),uVar4);
    }
    else {
      in_dr0 = *(double *)((int)ar4 + DAT_8c069124);
    }
    if (in_FPSCR_PR == '\0') {
      bVar18 = (float)((ulonglong)in_dr0 >> 0x20) < SUB84(in_dr14,0);
    }
    else {
      bVar18 = in_dr0 < in_dr14;
    }
    if (bVar18) {
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   *(undefined4 *)((int)ar4 + DAT_8c069124));
      }
      else {
        in_xd14 = *(undefined8 *)((int)ar4 + DAT_8c069124);
      }
      *(int **)((int)puVar11 + iVar1 + 0x44) = ar4;
      *(int *)(DAT_8c069130 + *(int *)((int)puVar11 + iVar1 + 0x44)) =
           *(int *)(DAT_8c069130 + *(int *)((int)puVar11 + iVar1 + 0x44)) + 1;
      *(int **)((int)puVar11 + iVar1 + 0x40) = ar4;
      uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c069138)
                        (*(undefined4 *)(DAT_8c069134 + (int)ar4),4,a6_00,ar7);
      *(undefined4 *)((int)puVar11 + iVar1 + 0x38) = uVar4;
      *(undefined4 *)((int)puVar11 + iVar1 + 0x3c) = *(undefined4 *)((int)puVar11 + iVar1 + 0x38);
      *(uint *)(DAT_8c06913c + *(int *)((int)puVar11 + iVar1 + 0x40)) =
           *(uint *)(DAT_8c06913c + *(int *)((int)puVar11 + iVar1 + 0x40)) &
           ~*(uint *)((int)puVar11 +
                     *(int *)((int)puVar11 + iVar1 + 0x3c) * 4 + DAT_8c069140 + iVar1);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)ar4 + _DAT_8c069150) = SUB84(in_dr14,0);
    }
    else {
      *(undefined8 *)((int)ar4 + _DAT_8c069150) = in_xd14;
    }
  case 2:
    uVar10 = SUB84(in_dr0,0);
    (*(code *)PTR_FUN_8c06911c)
              ((undefined1 *)((int)puVar11 + DAT_8c069154 + iVar1 + -0x10),ar5,a6_00,ar7);
    uVar4 = (*(code *)PTR_FUN_8c069120)
                      (ar4,(undefined1 *)((int)puVar11 + DAT_8c069154 + iVar1 + -0x10),a6_00,ar7);
    *(short *)((int)puVar11 + iVar1 + -0xe) = (short)uVar4;
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)ar4 + DAT_8c069124));
      dVar17 = (double)CONCAT44(DAT_8c069158,uVar10);
    }
    else {
      in_xd14 = *(undefined8 *)((int)ar4 + DAT_8c069124);
      dVar17 = (double)CONCAT44(_DAT_8c06915c,DAT_8c069158);
    }
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                SUB84(in_dr14,0) / (float)((ulonglong)dVar17 >> 0x20));
    }
    else {
      dVar15 = in_dr14 / dVar17;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = (float)*(ushort *)((int)puVar11 + iVar1 + -0xe);
      dVar17 = (double)CONCAT44(fVar14,SUB84(dVar17,0));
      dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) * fVar14);
    }
    else {
      dVar17 = (double)*(ushort *)((int)puVar11 + iVar1 + -0xe);
      dVar15 = dVar15 * dVar17;
    }
    uVar4 = SUB84(dVar17,0);
    (*(code *)PTR_FUN_8c06912c)
              ((undefined1 *)((int)puVar11 + DAT_8c069154 + iVar1 + -0x10),0xffffffff,a6_00,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(*(undefined4 *)((int)ar4 + DAT_8c069124),uVar4);
    }
    else {
      dVar17 = *(double *)((int)ar4 + DAT_8c069124);
    }
    if (in_FPSCR_PR == '\0') {
      bVar18 = (float)((ulonglong)dVar17 >> 0x20) < SUB84(dVar15,0);
    }
    else {
      bVar18 = dVar17 < dVar15;
    }
    if (bVar18) {
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)(ulonglong)*(uint *)((int)ar4 + DAT_8c069124);
      }
      else {
        in_xd14 = *(undefined8 *)((int)ar4 + DAT_8c069124);
      }
      *(int **)((int)puVar11 + iVar1 + 0x34) = ar4;
      *(int *)(DAT_8c069130 + *(int *)((int)puVar11 + iVar1 + 0x34)) =
           *(int *)(DAT_8c069130 + *(int *)((int)puVar11 + iVar1 + 0x34)) + 1;
      (*(code *)PTR_FUN_8c06911c)
                ((undefined1 *)((int)puVar11 + _DAT_8c06915c + iVar1 + -0x10),ar5,a6_00,ar7);
      (*(code *)PTR_FUN_8c069160)
                (ar4,(undefined1 *)((int)puVar11 + _DAT_8c06915c + iVar1 + -0x10),a6_00,ar7);
      (*(code *)PTR_FUN_8c06912c)
                ((undefined1 *)((int)puVar11 + _DAT_8c06915c + iVar1 + -0x10),0xffffffff,a6_00,ar7);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)ar4 + DAT_8c069164) = SUB84(dVar15,0);
    }
    else {
      *(undefined8 *)((int)ar4 + DAT_8c069164) = in_xd14;
    }
    break;
  case 3:
    (*(code *)PTR_FUN_8c069250)
              ((undefined1 *)((int)puVar11 + DAT_8c06924c + iVar1 + -0x10),ar5,a6_00,ar7);
    uVar4 = (*(code *)PTR_FUN_8c069254)
                      (ar4,(undefined1 *)((int)puVar11 + DAT_8c06924c + iVar1 + -0x10),a6_00,ar7);
    *(short *)((int)puVar11 + iVar1 + -0x10) = (short)uVar4;
    *(uint *)((int)puVar11 + DAT_8c06925c + iVar1 + -0x10) =
         (uint)(DAT_8c069258 <= *(ushort *)((int)puVar11 + iVar1 + -0x10));
    (*(code *)PTR_FUN_8c069260)
              ((undefined1 *)((int)puVar11 + DAT_8c06924c + iVar1 + -0x10),0xffffffff,a6_00,ar7);
    piVar9 = (int *)0x0;
    if ((*(int *)((int)puVar11 + DAT_8c06925c + iVar1 + -0x10) != 0) &&
       (piVar9 = (int *)0x2, *DAT_8c069264 < 2)) {
      *DAT_8c069264 = *DAT_8c069264 + 1;
      *(int **)((int)puVar11 + iVar1 + 0x30) = ar4;
      piVar9 = *(int **)((int)puVar11 + iVar1 + 0x30);
      *(int *)(DAT_8c069268 + (int)piVar9) =
           *(int *)(DAT_8c069268 + *(int *)((int)puVar11 + iVar1 + 0x30)) + 1;
    }
    a4 = ar6;
    (**(code **)(DAT_8c06926c + *ar6))(ar6,piVar9,a6_00,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar11 + iVar1 + 0x6c) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)(ulonglong)*(uint *)((int)puVar11 + iVar1 + 0x6c);
    }
    else {
      *(double *)((int)puVar11 + iVar1 + 0x6c) = in_dr0;
      in_xd0 = *(undefined8 *)((int)puVar11 + iVar1 + 0x6c);
    }
    fVar14 = SUB84(in_dr0,0);
    if (in_FPSCR_PR != '\0' || fVar14 <= 0.0) {
      a4 = ar4;
      piVar9 = ar6;
      uVar4 = (*(code *)PTR_FUN_8c069270)(ar4,ar6,a6_00,ar7);
      *(undefined4 *)((int)puVar11 + iVar1 + 0x68) = uVar4;
      if (*(int *)((int)puVar11 + iVar1 + 0x68) != 0) goto LAB_8c069398;
      pfVar7 = (float *)*DAT_8c069264;
      if ((int)pfVar7 < 2) {
        pfVar7 = (float *)((int)ar4 + DAT_8c069274);
        if (in_FPSCR_SZ == '\0') {
          fVar14 = *pfVar7;
        }
        else {
          in_xd0 = *(undefined8 *)pfVar7;
        }
        in_dr0 = (double)(ulonglong)(uint)fVar14;
        if (fVar14 != 0.0) goto LAB_8c069278;
        *DAT_8c069264 = *DAT_8c069264 + 1;
        *(int **)((int)puVar11 + iVar1 + 0x2c) = ar4;
        a6_00 = *(int **)((int)puVar11 + iVar1 + 0x2c);
        *(int *)(DAT_8c069268 + (int)a6_00) =
             *(int *)(DAT_8c069268 + *(int *)((int)puVar11 + iVar1 + 0x2c)) + 1;
      }
      else {
LAB_8c069278:
        uVar4 = (*(code *)PTR_rand_8c069348)(pfVar7,DAT_8c069264,a6_00,ar7);
        *(undefined4 *)((int)puVar11 + iVar1 + 100) = uVar4;
        *(int **)((int)puVar11 + iVar1 + 0x28) = ar4;
        uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c06934c)
                          (*(undefined4 *)((int)puVar11 + iVar1 + 100),5,a6_00,ar7);
        *(undefined4 *)((int)puVar11 + iVar1 + 0x24) = uVar4;
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44(*(undefined4 *)
                                     (*(int *)((int)puVar11 + iVar1 + 0x28) + DAT_8c069350),in_fr3);
        }
        else {
          dVar17 = *(double *)(*(int *)((int)puVar11 + iVar1 + 0x28) + DAT_8c069350);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(DAT_8c069354,(float)(*(int *)((int)puVar11 + iVar1 + 0x24) + 8))
          ;
        }
        else {
          dVar15 = (double)CONCAT44(DAT_8c069358,DAT_8c069354);
        }
        if (in_FPSCR_PR == '\0') {
          fVar14 = SUB84(dVar15,0) / (float)((ulonglong)dVar15 >> 0x20);
        }
        else {
          fVar14 = SUB84(dVar15 / dVar15,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(DAT_8c069358,fVar14);
        }
        else {
          dVar15 = (double)CONCAT44(DAT_8c06935c,DAT_8c069358);
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) +
                                    SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20),
                                    SUB84(dVar17,0));
        }
        else {
          dVar17 = dVar17 + dVar15 * dVar15;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(*(int *)((int)puVar11 + iVar1 + 0x28) + DAT_8c069350) =
               (int)((ulonglong)dVar17 >> 0x20);
        }
        else {
          *(double *)(*(int *)((int)puVar11 + iVar1 + 0x28) + DAT_8c069350) = dVar17;
        }
        uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c06934c)
                          (*(undefined4 *)(DAT_8c06935c + (int)ar4),4,a6_00,ar7);
        *(undefined4 *)((int)puVar11 + iVar1 + 0x1c) = uVar4;
        *(undefined4 *)((int)puVar11 + iVar1 + 0x20) = *(undefined4 *)((int)puVar11 + iVar1 + 0x1c);
        *(int *)(DAT_8c069360 + (int)ar4) =
             *(int *)((int)puVar11 + iVar1 + 0x20) * 2 + *(int *)((int)puVar11 + iVar1 + 0x20);
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44(DAT_8c069368,*(undefined4 *)((int)ar4 + DAT_8c069350));
        }
        else {
          in_xd0 = *(undefined8 *)((int)ar4 + DAT_8c069350);
          dVar17 = (double)CONCAT44(_DAT_8c06936c,DAT_8c069368);
        }
        if (in_FPSCR_PR == '\0') {
          fVar14 = SUB84(dVar17,0) * (float)((ulonglong)dVar17 >> 0x20);
        }
        else {
          fVar14 = SUB84(dVar17 * dVar17,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)ar4 + DAT_8c069364) = fVar14;
        }
        else {
          *(undefined8 *)((int)ar4 + DAT_8c069364) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar14 = *(float *)((int)ar4 + DAT_8c069350);
        }
        else {
          in_xd0 = *(undefined8 *)((int)ar4 + DAT_8c069350);
        }
        in_dr0 = (double)CONCAT44(0x3f800000,fVar14);
        if (in_FPSCR_PR != '\0' || 1.0 <= fVar14) {
          *(undefined4 *)((int)puVar11 + iVar1 + 0x18) = *(undefined4 *)(_DAT_8c06936c + (int)ar4);
          *(undefined4 *)(DAT_8c069370 + *(int *)((int)puVar11 + iVar1 + 0x18) * 8) = 0;
          *(undefined4 *)((int)puVar11 + iVar1 + 0x14) = *(undefined4 *)(_DAT_8c06936c + (int)ar4);
          *(undefined4 *)(*(int *)((int)puVar11 + iVar1 + 0x14) * 8 + DAT_8c069370 + 4) = 0;
          piVar9 = DAT_8c069390;
          if (*(int *)(DAT_8c06935c + (int)ar4) < 4) {
            *DAT_8c069374 = *DAT_8c069374 + -1;
            piVar9 = (int *)0x4;
          }
          else {
            *DAT_8c069390 = *DAT_8c069390 + -1;
          }
          (*(code *)PTR_FUN_8c069394)(ar4,piVar9,a6_00,ar7);
        }
      }
    }
    else {
LAB_8c069398:
      uVar4 = (*(code *)PTR_rand_8c069510)(a4,piVar9,a6_00,ar7);
      *(undefined4 *)((int)puVar11 + iVar1 + 0x60) = uVar4;
      *(int **)((int)puVar11 + iVar1 + 0x10) = ar4;
      uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c069514)
                        (*(undefined4 *)((int)puVar11 + iVar1 + 0x60),5,a6_00,ar7);
      *(undefined4 *)((int)puVar11 + iVar1 + 0xc) = uVar4;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(*(undefined4 *)
                                   (*(int *)((int)puVar11 + iVar1 + 0x10) + DAT_8c069518),in_fr3);
      }
      else {
        dVar17 = *(double *)(*(int *)((int)puVar11 + iVar1 + 0x10) + DAT_8c069518);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(DAT_8c06951c,(float)(*(int *)((int)puVar11 + iVar1 + 0xc) + 8));
      }
      else {
        dVar15 = (double)CONCAT44(DAT_8c069520,DAT_8c06951c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar14 = SUB84(dVar15,0) / (float)((ulonglong)dVar15 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar15 / dVar15,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(DAT_8c069520,fVar14);
      }
      else {
        dVar15 = (double)CONCAT44(_DAT_8c069524,DAT_8c069520);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = (float)((ulonglong)dVar15 >> 0x20);
        fVar14 = SUB84(dVar15,0) * fVar13;
        dVar15 = (double)CONCAT44(fVar13,fVar14);
        dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) - fVar14,SUB84(dVar17,0));
      }
      else {
        dVar15 = dVar15 * dVar15;
        dVar17 = dVar17 - dVar15;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)((int)puVar11 + iVar1 + 0x10) + DAT_8c069518) =
             (int)((ulonglong)dVar17 >> 0x20);
      }
      else {
        *(double *)(*(int *)((int)puVar11 + iVar1 + 0x10) + DAT_8c069518) = dVar17;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)(ulonglong)*(uint *)((int)ar4 + DAT_8c069518);
      }
      else {
        in_xd0 = *(undefined8 *)((int)ar4 + DAT_8c069518);
      }
      if (in_FPSCR_PR == '\0' && SUB84(dVar15,0) < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)ar4 + DAT_8c069518) = 0;
        }
        else {
          *(ulonglong *)((int)ar4 + DAT_8c069518) = (ulonglong)dVar15 & 0xffffffff;
        }
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(DAT_8c069528,*(undefined4 *)((int)ar4 + DAT_8c069518));
      }
      else {
        in_xd0 = *(undefined8 *)((int)ar4 + DAT_8c069518);
        in_dr0 = (double)CONCAT44(DAT_8c06952c,DAT_8c069528);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr0 = (double)(ulonglong)(uint)(SUB84(in_dr0,0) * (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr0 = in_dr0 * in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)ar4 + _DAT_8c069524) = SUB84(in_dr0,0);
      }
      else {
        *(undefined8 *)((int)ar4 + _DAT_8c069524) = in_xd0;
      }
    }
    if (*(int *)(DAT_8c06952c + (int)ar4) == 3) break;
    in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)ar4 + _DAT_8c069524) = 0;
    }
    else {
      *(double *)((int)ar4 + _DAT_8c069524) = in_dr0;
    }
  case 4:
    uVar12 = SUB84(in_dr0,0);
    uVar4 = (*(code *)PTR_FUN_8c069530)(0xe,0x1b,a6_00,ar7);
    *(undefined4 *)((int)puVar11 + iVar1 + 0x5c) = uVar4;
    *(undefined4 *)(DAT_8c069534 + (int)ar4) = *(undefined4 *)((int)puVar11 + iVar1 + 0x5c);
    iVar6 = DAT_8c06952c;
    *(undefined4 *)(DAT_8c06952c + *(int *)(DAT_8c069534 + (int)ar4)) = 4;
    uVar4 = (*(code *)PTR_get_field_24_026024_8c069538)(ar6,iVar6,a6_00,ar7);
    *(undefined4 *)((int)puVar11 + iVar1 + 0x58) = uVar4;
    *(undefined4 *)(DAT_8c06953c + *(int *)(DAT_8c069534 + (int)ar4)) =
         *(undefined4 *)((int)puVar11 + iVar1 + 0x58);
    *(undefined4 *)(DAT_8c069540 + *(int *)(DAT_8c069534 + (int)ar4)) = 0xffffffff;
    puVar5 = (ulonglong *)(*(int *)(DAT_8c069534 + (int)ar4) + _DAT_8c069524);
    uVar16 = (ulonglong)uVar12;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar5 = 0;
    }
    else {
      *puVar5 = uVar16;
    }
    uVar4 = *(undefined4 *)(DAT_8c069534 + (int)ar4);
    (**(code **)(*ar6 + 0x4c))(ar6,uVar4,a6_00,ar7);
    fVar14 = (float)uVar16;
    *(undefined1 **)((int)puVar11 + iVar1 + -0x14) =
         (undefined1 *)((int)puVar11 + DAT_8c069544 + iVar1 + -0x10);
    (*(code *)PTR_FUN_8c069548)(ar4,uVar4,a6_00,ar7);
    a6 = PTR_vec3_copy_8c023d8c_8c06954c;
    (*(code *)PTR_vec3_copy_8c023d8c_8c06954c)
              (*(int *)(DAT_8c069534 + (int)ar4) + 0x50,
               (undefined1 *)((int)puVar11 + DAT_8c069544 + iVar1 + -0x10),
               PTR_vec3_copy_8c023d8c_8c06954c,ar7);
    (*(code *)PTR_object_dtor_delete_8c069550)
              ((undefined1 *)((int)puVar11 + DAT_8c069544 + iVar1 + -0x10),0xffffffff,a6,ar7);
    uVar10 = 4;
    uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c069514)
                      (*(undefined4 *)(DAT_8c069554 + (int)ar4),4,a6,ar7);
    *(undefined4 *)((int)puVar11 + iVar1 + 8) = uVar4;
    iVar6 = *(int *)((int)puVar11 + iVar1 + 8);
    if (iVar6 == 0) {
      pfVar7 = (float *)(*(int *)(DAT_8c069660 + (int)ar4) + 0x54);
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(DAT_8c069664,ar4[0x15]);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x15);
        dVar17 = (double)CONCAT44(DAT_8c069668,DAT_8c069664);
      }
      if (in_FPSCR_PR == '\0') {
        fVar14 = SUB84(dVar17,0) - (float)((ulonglong)dVar17 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar17 - dVar17,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar7 = fVar14;
      }
      else {
        *(undefined8 *)pfVar7 = in_xd0;
      }
      iVar6 = *(int *)(DAT_8c069660 + (int)ar4);
      pfVar7 = (float *)(iVar6 + DAT_8c069668);
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(DAT_8c069664,ar4[0x15]);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x15);
        dVar17 = (double)CONCAT44(DAT_8c069668,DAT_8c069664);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar17,0) - (float)((ulonglong)dVar17 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar17 - dVar17,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar7 = fVar13;
      }
      else {
        *(undefined8 *)pfVar7 = in_xd0;
      }
      *(undefined1 **)((int)puVar11 + iVar1 + -0x14) =
           (undefined1 *)((int)puVar11 + DAT_8c06966c + iVar1 + -0x10);
      (*(code *)PTR_FUN_8c069670)(ar4,iVar6,a6,ar7);
      *(undefined1 **)((int)puVar11 + iVar1 + -0x14) =
           (undefined1 *)((int)puVar11 + DAT_8c069674 + iVar1 + -0x10);
      iVar6 = (int)ar4 + DAT_8c069678;
      (*(code *)PTR_Vec3_scale_8c069680)
                ((undefined1 *)((int)puVar11 + DAT_8c06967c + iVar1 + -0x14),iVar6,a6,ar7);
      fVar14 = DAT_8c069664;
      if (in_FPSCR_SZ == '\0') {
        fVar14 = fVar13;
      }
      (*(code *)PTR_Vec3_set_xyz_8c069688)
                ((undefined1 *)((int)puVar11 + DAT_8c069684 + iVar1 + -0x10),iVar6,a6,ar7);
      *(undefined1 **)((int)puVar11 + iVar1 + -0x14) =
           (undefined1 *)((int)puVar11 + DAT_8c06968c + iVar1 + -0x10);
      (*(code *)PTR_FUN_8c069698)
                ((undefined1 *)((int)puVar11 + DAT_8c069694 + iVar1 + -0x14),
                 (undefined1 *)((int)puVar11 + DAT_8c069690 + iVar1 + -0x14),a6,ar7);
      *(undefined1 **)((int)puVar11 + iVar1 + -0x14) =
           (undefined1 *)((int)puVar11 + DAT_8c06969c + iVar1 + -0x10);
      (*(code *)PTR_Vec3_add_8c0696a4)
                (ar4 + 0xc,(undefined1 *)((int)puVar11 + DAT_8c0696a0 + iVar1 + -0x14),a6,ar7);
      (*(code *)PTR_Vec3_assign_8c0696a8)
                (*(int *)(DAT_8c069660 + (int)ar4) + 0x30,
                 (undefined1 *)((int)puVar11 + DAT_8c06969c + iVar1 + -0x10),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0696ac)
                ((undefined1 *)((int)puVar11 + DAT_8c06969c + iVar1 + -0x10),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0696ac)
                ((undefined1 *)((int)puVar11 + DAT_8c06968c + iVar1 + -0x10),0xffffffff,a6,ar7);
      (*(code *)PTR_object_dtor_delete_8c0696b0)
                ((undefined1 *)((int)puVar11 + DAT_8c069684 + iVar1 + -0x10),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0696ac)
                ((undefined1 *)((int)puVar11 + DAT_8c069674 + iVar1 + -0x10),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0696ac)
                ((undefined1 *)((int)puVar11 + DAT_8c06966c + iVar1 + -0x10),0xffffffff,a6,ar7);
    }
    else if (iVar6 == 1) {
      pfVar7 = (float *)(*(int *)(DAT_8c0697b0 + (int)ar4) + 0x54);
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(DAT_8c0697b4,ar4[0x15]);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x15);
        dVar17 = (double)CONCAT44(DAT_8c0697b8,DAT_8c0697b4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar14 = SUB84(dVar17,0) + (float)((ulonglong)dVar17 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar17 + dVar17,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar7 = fVar14;
      }
      else {
        *(undefined8 *)pfVar7 = in_xd0;
      }
      pfVar7 = (float *)(*(int *)(DAT_8c0697b0 + (int)ar4) + DAT_8c0697b8);
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(DAT_8c0697b4,ar4[0x15]);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x15);
        dVar17 = (double)CONCAT44(DAT_8c0697b8,DAT_8c0697b4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar17,0) + (float)((ulonglong)dVar17 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar17 + dVar17,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar7 = fVar13;
      }
      else {
        *(undefined8 *)pfVar7 = in_xd0;
      }
      *(undefined1 **)((int)puVar11 + iVar1 + -0x14) =
           (undefined1 *)((int)puVar11 + DAT_8c0697bc + iVar1 + -0x10);
      (*(code *)PTR_FUN_8c0697c0)(ar4,pfVar7,a6,ar7);
      *(undefined1 **)((int)puVar11 + iVar1 + -0x14) =
           (undefined1 *)((int)puVar11 + DAT_8c0697c4 + iVar1 + -0x10);
      iVar6 = (int)ar4 + DAT_8c0697c8;
      (*(code *)PTR_Vec3_scale_8c0697d0)
                ((undefined1 *)((int)puVar11 + DAT_8c0697cc + iVar1 + -0x14),iVar6,a6,ar7);
      fVar14 = DAT_8c0697b4;
      if (in_FPSCR_SZ == '\0') {
        fVar14 = fVar13;
      }
      (*(code *)PTR_Vec3_set_xyz_8c0697d8)
                ((undefined1 *)((int)puVar11 + DAT_8c0697d4 + iVar1 + -0x10),iVar6,a6,ar7);
      *(undefined1 **)((int)puVar11 + iVar1 + -0x14) =
           (undefined1 *)((int)puVar11 + DAT_8c0697dc + iVar1 + -0x10);
      (*(code *)PTR_FUN_8c0697e8)
                ((undefined1 *)((int)puVar11 + DAT_8c0697e4 + iVar1 + -0x14),
                 (undefined1 *)((int)puVar11 + DAT_8c0697e0 + iVar1 + -0x14),a6,ar7);
      *(undefined1 **)((int)puVar11 + iVar1 + -0x14) =
           (undefined1 *)((int)puVar11 + DAT_8c0697ec + iVar1 + -0x10);
      (*(code *)PTR_Vec3_add_8c0697f4)
                (ar4 + 0xc,(undefined1 *)((int)puVar11 + DAT_8c0697f0 + iVar1 + -0x14),a6,ar7);
      (*(code *)PTR_Vec3_assign_8c0697f8)
                (*(int *)(DAT_8c0697b0 + (int)ar4) + 0x30,
                 (undefined1 *)((int)puVar11 + DAT_8c0697ec + iVar1 + -0x10),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0697fc)
                ((undefined1 *)((int)puVar11 + DAT_8c0697ec + iVar1 + -0x10),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0697fc)
                ((undefined1 *)((int)puVar11 + DAT_8c0697dc + iVar1 + -0x10),0xffffffff,a6,ar7);
      (*(code *)PTR_object_dtor_delete_8c069800)
                ((undefined1 *)((int)puVar11 + DAT_8c0697d4 + iVar1 + -0x10),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0697fc)
                ((undefined1 *)((int)puVar11 + DAT_8c0697c4 + iVar1 + -0x10),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0697fc)
                ((undefined1 *)((int)puVar11 + DAT_8c0697bc + iVar1 + -0x10),0xffffffff,a6,ar7);
    }
    else if (iVar6 == 2) {
      pfVar7 = (float *)(*(int *)(DAT_8c06990c + (int)ar4) + 0x54);
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(DAT_8c069910,ar4[0x15]);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x15);
        dVar17 = (double)CONCAT44(DAT_8c069914,DAT_8c069910);
      }
      if (in_FPSCR_PR == '\0') {
        fVar14 = SUB84(dVar17,0) + (float)((ulonglong)dVar17 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar17 + dVar17,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar7 = fVar14;
      }
      else {
        *(undefined8 *)pfVar7 = in_xd0;
      }
      pfVar3 = (float *)(*(int *)(DAT_8c06990c + (int)ar4) + DAT_8c069914);
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(DAT_8c069910,ar4[0x15]);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x15);
        dVar17 = (double)CONCAT44(DAT_8c069914,DAT_8c069910);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar17,0) + (float)((ulonglong)dVar17 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar17 + dVar17,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar3 = fVar13;
      }
      else {
        *(undefined8 *)pfVar3 = in_xd0;
      }
      *(undefined1 **)((int)puVar11 + iVar1 + -0x14) =
           (undefined1 *)((int)puVar11 + DAT_8c069918 + iVar1 + -0x10);
      (*(code *)PTR_FUN_8c06991c)(ar4,pfVar7,a6,ar7);
      *(undefined1 **)((int)puVar11 + iVar1 + -0x14) =
           (undefined1 *)((int)puVar11 + DAT_8c069920 + iVar1 + -0x10);
      iVar6 = (int)ar4 + DAT_8c069924;
      (*(code *)PTR_Vec3_scale_8c06992c)
                ((undefined1 *)((int)puVar11 + DAT_8c069928 + iVar1 + -0x14),iVar6,a6,ar7);
      fVar14 = DAT_8c069910;
      if (in_FPSCR_SZ == '\0') {
        fVar14 = fVar13;
      }
      (*(code *)PTR_Vec3_set_xyz_8c069934)
                ((undefined1 *)((int)puVar11 + DAT_8c069930 + iVar1 + -0x10),iVar6,a6,ar7);
      *(undefined1 **)((int)puVar11 + iVar1 + -0x14) =
           (undefined1 *)((int)puVar11 + DAT_8c069938 + iVar1 + -0x10);
      a6 = PTR_FUN_8c069944;
      (*(code *)PTR_FUN_8c069944)
                ((undefined1 *)((int)puVar11 + DAT_8c069940 + iVar1 + -0x14),
                 (undefined1 *)((int)puVar11 + DAT_8c06993c + iVar1 + -0x14),PTR_FUN_8c069944,ar7);
      *(undefined1 **)((int)puVar11 + iVar1 + -0x14) =
           (undefined1 *)((int)puVar11 + DAT_8c069948 + iVar1 + -0x10);
      (*(code *)PTR_Vec3_add_8c069950)
                (ar4 + 0xc,(undefined1 *)((int)puVar11 + DAT_8c06994c + iVar1 + -0x14),a6,ar7);
      (*(code *)PTR_Vec3_assign_8c069954)
                (*(int *)(DAT_8c06990c + (int)ar4) + 0x30,
                 (undefined1 *)((int)puVar11 + DAT_8c069948 + iVar1 + -0x10),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c069958)
                ((undefined1 *)((int)puVar11 + DAT_8c069948 + iVar1 + -0x10),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c069958)
                ((undefined1 *)((int)puVar11 + DAT_8c069938 + iVar1 + -0x10),0xffffffff,a6,ar7);
      (*(code *)PTR_object_dtor_delete_8c06995c)
                ((undefined1 *)((int)puVar11 + DAT_8c069930 + iVar1 + -0x10),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c069958)
                ((undefined1 *)((int)puVar11 + DAT_8c069920 + iVar1 + -0x10),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c069958)
                ((undefined1 *)((int)puVar11 + DAT_8c069918 + iVar1 + -0x10),0xffffffff,a6,ar7);
    }
    else if (iVar6 == 3) {
      pfVar7 = (float *)(*(int *)(DAT_8c069b90 + (int)ar4) + 0x54);
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(DAT_8c069b94,ar4[0x15]);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x15);
        dVar17 = (double)CONCAT44(DAT_8c069b98,DAT_8c069b94);
      }
      if (in_FPSCR_PR == '\0') {
        fVar14 = SUB84(dVar17,0) - (float)((ulonglong)dVar17 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar17 - dVar17,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar7 = fVar14;
      }
      else {
        *(undefined8 *)pfVar7 = in_xd0;
      }
      pfVar7 = (float *)(*(int *)(DAT_8c069b90 + (int)ar4) + DAT_8c069b98);
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(DAT_8c069b94,ar4[0x15]);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x15);
        dVar17 = (double)CONCAT44(DAT_8c069b98,DAT_8c069b94);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar17,0) - (float)((ulonglong)dVar17 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar17 - dVar17,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar7 = fVar13;
      }
      else {
        *(undefined8 *)pfVar7 = in_xd0;
      }
      *(undefined1 **)((int)puVar11 + iVar1 + -0x14) =
           (undefined1 *)((int)puVar11 + DAT_8c069b9c + iVar1 + -0x10);
      (*(code *)PTR_FUN_8c069ba0)(ar4,uVar10,a6,ar7);
      *(undefined1 **)((int)puVar11 + iVar1 + -0x14) =
           (undefined1 *)((int)puVar11 + DAT_8c069ba4 + iVar1 + -0x10);
      iVar6 = (int)ar4 + DAT_8c069ba8;
      (*(code *)PTR_Vec3_scale_8c069bb0)
                ((undefined1 *)((int)puVar11 + DAT_8c069bac + iVar1 + -0x14),iVar6,a6,ar7);
      fVar14 = DAT_8c069b94;
      if (in_FPSCR_SZ == '\0') {
        fVar14 = fVar13;
      }
      (*(code *)PTR_Vec3_set_xyz_8c069bb8)
                ((undefined1 *)((int)puVar11 + DAT_8c069bb4 + iVar1 + -0x10),iVar6,a6,ar7);
      *(undefined1 **)((int)puVar11 + iVar1 + -0x14) =
           (undefined1 *)((int)puVar11 + DAT_8c069bbc + iVar1 + -0x10);
      (*(code *)PTR_FUN_8c069bc8)
                ((undefined1 *)((int)puVar11 + DAT_8c069bc4 + iVar1 + -0x14),
                 (undefined1 *)((int)puVar11 + DAT_8c069bc0 + iVar1 + -0x14),a6,ar7);
      *(undefined1 **)((int)puVar11 + iVar1 + -0x14) =
           (undefined1 *)((int)puVar11 + DAT_8c069bcc + iVar1 + -0x10);
      (*(code *)PTR_Vec3_add_8c069bd4)
                (ar4 + 0xc,(undefined1 *)((int)puVar11 + DAT_8c069bd0 + iVar1 + -0x14),a6,ar7);
      (*(code *)PTR_Vec3_assign_8c069bd8)
                (*(int *)(DAT_8c069b90 + (int)ar4) + 0x30,
                 (undefined1 *)((int)puVar11 + DAT_8c069bcc + iVar1 + -0x10),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c069bdc)
                ((undefined1 *)((int)puVar11 + DAT_8c069bcc + iVar1 + -0x10),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c069bdc)
                ((undefined1 *)((int)puVar11 + DAT_8c069bbc + iVar1 + -0x10),0xffffffff,a6,ar7);
      (*(code *)PTR_object_dtor_delete_8c069be0)
                ((undefined1 *)((int)puVar11 + DAT_8c069bb4 + iVar1 + -0x10),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c069bdc)
                ((undefined1 *)((int)puVar11 + DAT_8c069ba4 + iVar1 + -0x10),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c069bdc)
                ((undefined1 *)((int)puVar11 + DAT_8c069b9c + iVar1 + -0x10),0xffffffff,a6,ar7);
    }
    (*(code *)PTR_Vec3_assign_8c069bd8)
              (*(int *)(DAT_8c069b90 + (int)ar4) + DAT_8c069be4,ar4 + 0xc,a6,ar7);
    puVar5 = (ulonglong *)(*(int *)(DAT_8c069b90 + (int)ar4) + DAT_8c069be8);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar5 = 0;
    }
    else {
      *puVar5 = (ulonglong)(uint)fVar14;
    }
    puVar5 = (ulonglong *)(*(int *)(DAT_8c069b90 + (int)ar4) + DAT_8c069bec);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar5 = 0;
    }
    else {
      *puVar5 = (ulonglong)(uint)fVar14;
    }
    puVar8 = (undefined8 *)(*(int *)(DAT_8c069b90 + (int)ar4) + 0x5c);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar8 = *(undefined4 *)((int)ar4 + DAT_8c069ba8);
    }
    else {
      *puVar8 = *(undefined8 *)((int)ar4 + DAT_8c069ba8);
    }
    puVar8 = (undefined8 *)(*(int *)(DAT_8c069b90 + (int)ar4) + 0x60);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar8 = *(undefined4 *)((int)ar4 + DAT_8c069ba8);
    }
    else {
      *puVar8 = *(undefined8 *)((int)ar4 + DAT_8c069ba8);
    }
    puVar8 = (undefined8 *)(*(int *)(DAT_8c069b90 + (int)ar4) + 100);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar8 = *(undefined4 *)((int)ar4 + DAT_8c069ba8);
    }
    else {
      *puVar8 = *(undefined8 *)((int)ar4 + DAT_8c069ba8);
    }
    *(undefined4 *)(DAT_8c069b90 + (int)ar4) = 0;
    (*(code *)PTR_FUN_8c069bf4)
              ((undefined1 *)((int)puVar11 + DAT_8c069bf0 + iVar1 + -0x10),ar5,a6,ar7);
    (*(code *)PTR_FUN_8c069bf8)
              (ar4,(undefined1 *)((int)puVar11 + DAT_8c069bf0 + iVar1 + -0x10),a6,ar7);
    (*(code *)PTR_FUN_8c069bfc)
              ((undefined1 *)((int)puVar11 + DAT_8c069bf0 + iVar1 + -0x10),0xffffffff,a6,ar7);
    *(int **)((int)puVar11 + iVar1 + 4) = ar4;
    a6_00 = (int *)(*(int *)(DAT_8c069c00 + *(int *)((int)puVar11 + iVar1 + 4)) + 1);
    *(int **)(DAT_8c069c00 + *(int *)((int)puVar11 + iVar1 + 4)) = a6_00;
  case 5:
    uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c069c08)
                      (*(undefined4 *)(DAT_8c069c04 + (int)ar4),4,a6_00,ar7);
    *(undefined4 *)((int)puVar11 + iVar1 + -4) = uVar4;
    *(undefined4 *)((int)puVar11 + iVar1) = *(undefined4 *)((int)puVar11 + iVar1 + -4);
    *(int *)(DAT_8c069c0c + (int)ar4) =
         *(int *)((int)puVar11 + iVar1) * 2 + *(int *)((int)puVar11 + iVar1) + 1;
    *(int **)((int)puVar11 + iVar1 + -8) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(DAT_8c069c14,
                                *(undefined4 *)(*(int *)((int)puVar11 + iVar1 + -8) + DAT_8c069c10))
      ;
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)puVar11 + iVar1 + -8) + DAT_8c069c10);
      dVar17 = (double)CONCAT44(DAT_8c069c18,DAT_8c069c14);
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = SUB84(dVar17,0) + (float)((ulonglong)dVar17 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar17 + dVar17,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar11 + iVar1 + -8) + DAT_8c069c10) = fVar14;
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar11 + iVar1 + -8) + DAT_8c069c10) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar16 = CONCAT44(DAT_8c069c18,*(undefined4 *)((int)ar4 + DAT_8c069c10));
    }
    else {
      uVar16 = CONCAT44(DAT_8c069c1c,DAT_8c069c18);
    }
    if (in_FPSCR_PR != '\0' || (float)(uVar16 >> 0x20) <= (float)uVar16) {
      *(undefined4 *)(DAT_8c069c00 + (int)ar4) = 3;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)ar4 + DAT_8c069c10) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + DAT_8c069c10) = uVar16 & 0xffffffff;
      }
    }
    break;
  default:
    break;
  }
  uVar4 = (*(code *)PTR_Vec3_dtor_8c069bdc)
                    ((undefined1 *)((int)puVar11 + DAT_8c069c1c + iVar1 + -0x10),0xffffffff,a6_00,
                     ar7);
  return uVar4;
}



/* FUN_8c069c24 @ 8c069c24 callers=0 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c06a4b0) */
/* WARNING: Removing unreachable block (ram,0x8c069ce4) */
/* WARNING: Removing unreachable block (ram,0x8c069f18) */
/* WARNING: Removing unreachable block (ram,0x8c06a114) */
/* WARNING: Removing unreachable block (ram,0x8c06a498) */
/* WARNING: Removing unreachable block (ram,0x8c06a4c8) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c069c24(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar5;
  int iVar6;
  int *a5;
  int *a6;
  int *a7;
  undefined4 unaff_r8;
  int iVar7;
  int iVar8;
  int unaff_r14;
  float fVar9;
  ulonglong in_dr0;
  ulonglong uVar10;
  double dVar11;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_1d8;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined4 *puVar4;
  
  iVar8 = -1;
  puVar1 = (undefined4 *)((int)&uStack_1d8 + DAT_8c069c74);
  iVar5 = 0x12;
  puVar3 = (undefined4 *)PTR_DAT_8c069c78;
  uStack_1d8._0_4_ = ar5;
  do {
    puVar4 = puVar3 + 1;
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar1[1] = *puVar4;
    puVar1 = puVar1 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = ar6;
  if ((int)uStack_1d8 == 0) {
    uVar2 = (*(code *)PTR_rand_8c069da0)(0,ar5,ar6,ar7);
    *(undefined4 *)((int)&uStack_1d8 + DAT_8c069da4) = uVar2;
    ar5 = 7;
    uVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c069da8)
                      (*(undefined4 *)((int)&uStack_1d8 + DAT_8c069da4),7,iVar5,ar7);
    *(undefined4 *)((int)&uStack_1d8 + DAT_8c069dac) = uVar2;
    unaff_r14 = *(int *)((int)&uStack_1d8 + DAT_8c069dac);
    iVar7 = 7;
    do {
      *(int *)((int)&uStack_1d8 + DAT_8c069db0) = unaff_r14;
      if (*(int *)(*(int *)((int)&uStack_1d8 + DAT_8c069db0) * 8 + DAT_8c069db4 + 4) == 0) {
        iVar7 = iVar7 + -1;
        unaff_r14 = unaff_r14 + 1;
      }
      else {
        *(int *)((int)&uStack_1d8 + DAT_8c069db8) = unaff_r14;
        (*(code *)PTR_FUN_8c069dbc)
                  (*(undefined4 *)(*(int *)((int)&uStack_1d8 + DAT_8c069db8) * 8 + DAT_8c069db4 + 4)
                   ,ar5,iVar5,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)&uStack_1d8 + DAT_8c069dc0) = (int)(in_dr0 >> 0x20);
          uVar10 = (ulonglong)*(uint *)((int)&uStack_1d8 + DAT_8c069dc0);
        }
        else {
          *(ulonglong *)((int)&uStack_1d8 + DAT_8c069dc0) = in_dr0;
          in_xd0 = *(undefined8 *)((int)&uStack_1d8 + DAT_8c069dc0);
          uVar10 = in_dr0;
        }
        in_dr0 = uVar10 & 0xffffffff;
        if ((float)uVar10 == 0.0) {
          if (ar6 == 0) {
            *(int *)((int)&uStack_1d8 + DAT_8c069dc4) = unaff_r14;
            uVar2 = (*(code *)PTR_get_field_210_06b3f4_8c069dc8)
                              (*(undefined4 *)
                                (*(int *)((int)&uStack_1d8 + DAT_8c069dc4) * 8 + DAT_8c069db4 + 4),
                               ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c069dcc) = uVar2;
            *(int *)((int)&uStack_1d8 + DAT_8c069dd0) = unaff_r14;
            iVar8 = *(int *)((int)&uStack_1d8 + DAT_8c069dd0) * 8 + DAT_8c069db4;
            uVar2 = (*(code *)PTR_get_field_210_06b3f4_8c069dc8)
                              (*(undefined4 *)(iVar8 + 4),iVar8,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c069dd4) = uVar2;
            *(int *)((int)&uStack_1d8 + DAT_8c069dd8) = unaff_r14;
            uVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c069da8)
                              (*(undefined4 *)((int)&uStack_1d8 + DAT_8c069dcc),4,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c069ddc) = uVar2;
            uVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c069da8)
                              (*(undefined4 *)((int)&uStack_1d8 + DAT_8c069dd4),4,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c069de0) = uVar2;
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c069de4) =
                 *(undefined4 *)((int)&uStack_1d8 + DAT_8c069de0);
            iVar5 = *(int *)((int)&uStack_1d8 + DAT_8c069de4) * 2 + 3;
            ar5 = *(int *)((int)&uStack_1d8 + DAT_8c069ddc);
            uVar2 = (*(code *)PTR_FUN_8c069de8)
                              (*(undefined4 *)
                                (*(int *)((int)&uStack_1d8 + DAT_8c069dd8) * 8 + DAT_8c069db4 + 4),
                               ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c069dec) = uVar2;
            iVar8 = *(int *)((int)&uStack_1d8 + DAT_8c069dec);
          }
          else {
            *(int *)((int)&uStack_1d8 + DAT_8c069e6c) = unaff_r14;
            uVar2 = (*(code *)PTR_get_field_210_06b3f4_8c069e74)
                              (*(undefined4 *)
                                (*(int *)((int)&uStack_1d8 + DAT_8c069e6c) * 8 + DAT_8c069e70 + 4),
                               ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c069e78) = uVar2;
            *(int *)((int)&uStack_1d8 + DAT_8c069e7c) = unaff_r14;
            uVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c069e80)
                              (*(undefined4 *)((int)&uStack_1d8 + DAT_8c069e78),4,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c069e84) = uVar2;
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c069e88) =
                 *(undefined4 *)((int)&uStack_1d8 + DAT_8c069e84);
            ar5 = *(int *)((int)&uStack_1d8 + DAT_8c069e88) * 2 + 3;
            uVar2 = (*(code *)PTR_FUN_8c069e8c)
                              (*(undefined4 *)
                                (*(int *)((int)&uStack_1d8 + DAT_8c069e7c) * 8 + DAT_8c069e70 + 4),
                               ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c069e90) = uVar2;
            iVar8 = *(int *)((int)&uStack_1d8 + DAT_8c069e90);
          }
        }
        if (iVar8 == -1) {
          iVar7 = iVar7 + -1;
          unaff_r14 = unaff_r14 + 1;
        }
      }
      if (5 < unaff_r14) {
        unaff_r14 = 0;
      }
    } while ((-1 < iVar7) && (iVar8 == -1));
  }
  else if ((int)uStack_1d8 == 1) {
    uVar2 = (*(code *)PTR_rand_8c069fd0)(0,ar5,ar6,ar7);
    *(undefined4 *)((int)&uStack_1d8 + DAT_8c069fd4) = uVar2;
    ar5 = 6;
    iStack_15c = (*(code *)PTR_libgcc_divide_helper_01031c_8c069fd8)
                           (*(undefined4 *)((int)&uStack_1d8 + DAT_8c069fd4),6,iVar5,ar7);
    iVar7 = 6;
    unaff_r14 = iStack_15c;
    do {
      iStack_160 = unaff_r14;
      if (*(int *)(unaff_r14 * 8 + DAT_8c069fdc + 4) == 0) {
        iVar7 = iVar7 + -1;
        unaff_r14 = unaff_r14 + 1;
      }
      else {
        iStack_164 = unaff_r14;
        (*(code *)PTR_FUN_8c069fe0)(*(undefined4 *)(unaff_r14 * 8 + DAT_8c069fdc + 4),ar5,iVar5,ar7)
        ;
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)&uStack_1d8 + DAT_8c069fe4) = (int)(in_dr0 >> 0x20);
          uVar10 = (ulonglong)*(uint *)((int)&uStack_1d8 + DAT_8c069fe4);
        }
        else {
          *(ulonglong *)((int)&uStack_1d8 + DAT_8c069fe4) = in_dr0;
          in_xd0 = *(undefined8 *)((int)&uStack_1d8 + DAT_8c069fe4);
          uVar10 = in_dr0;
        }
        in_dr0 = uVar10 & 0xffffffff;
        if ((float)uVar10 == 0.0) {
          if (ar6 == 0) {
            iStack_168 = unaff_r14;
            uVar2 = (*(code *)PTR_get_field_210_06b3f4_8c069fe8)
                              (*(undefined4 *)(unaff_r14 * 8 + DAT_8c069fdc + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c069fec) = uVar2;
            iStack_16c = unaff_r14;
            uVar2 = (*(code *)PTR_get_field_210_06b3f4_8c069fe8)
                              (*(undefined4 *)(unaff_r14 * 8 + DAT_8c069fdc + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c069ff0) = uVar2;
            iStack_170 = unaff_r14;
            iStack_174 = (*(code *)PTR_libgcc_divide_helper_01031c_8c069fd8)
                                   (*(undefined4 *)((int)&uStack_1d8 + DAT_8c069fec),4,iVar5,ar7);
            iStack_17c = (*(code *)PTR_libgcc_divide_helper_01031c_8c069fd8)
                                   (*(undefined4 *)((int)&uStack_1d8 + DAT_8c069ff0),4,iVar5,ar7);
            iVar5 = iStack_17c * 2 + 3;
            ar5 = iStack_174;
            iStack_178 = iStack_17c;
            uVar2 = (*(code *)PTR_FUN_8c069ff4)
                              (*(undefined4 *)(iStack_170 * 8 + DAT_8c069fdc + 4),iStack_174,iVar5,
                               ar7);
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c069ff8) = uVar2;
            iVar8 = *(int *)((int)&uStack_1d8 + DAT_8c069ff8);
          }
          else {
            iStack_180 = unaff_r14;
            uVar2 = (*(code *)PTR_get_field_210_06b3f4_8c06a07c)
                              (*(undefined4 *)(unaff_r14 * 8 + DAT_8c06a078 + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c06a080) = uVar2;
            iStack_184 = unaff_r14;
            iStack_18c = (*(code *)PTR_libgcc_divide_helper_01031c_8c06a084)
                                   (*(undefined4 *)((int)&uStack_1d8 + DAT_8c06a080),4,iVar5,ar7);
            ar5 = iStack_18c * 2 + 3;
            iStack_188 = iStack_18c;
            uVar2 = (*(code *)PTR_FUN_8c06a088)
                              (*(undefined4 *)(iStack_184 * 8 + DAT_8c06a078 + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c06a08c) = uVar2;
            iVar8 = *(int *)((int)&uStack_1d8 + DAT_8c06a08c);
          }
        }
        if (iVar8 == -1) {
          iVar7 = iVar7 + -1;
          unaff_r14 = unaff_r14 + 1;
        }
      }
      if (5 < unaff_r14) {
        unaff_r14 = 0;
      }
    } while ((-1 < iVar7) && (iVar8 == -1));
  }
  else if ((int)uStack_1d8 == 2) {
    uVar2 = (*(code *)PTR_rand_8c06a1a4)(0,ar5,ar6,ar7);
    *(undefined4 *)((int)&uStack_1d8 + DAT_8c06a1a8) = uVar2;
    ar5 = 6;
    iStack_190 = (*(code *)PTR_libgcc_divide_helper_01031c_8c06a1ac)
                           (*(undefined4 *)((int)&uStack_1d8 + DAT_8c06a1a8),6,iVar5,ar7);
    iVar7 = 6;
    unaff_r14 = iStack_190;
    do {
      iStack_194 = unaff_r14;
      if (*(int *)(unaff_r14 * 8 + DAT_8c06a1b0 + 4) == 0) {
        iVar7 = iVar7 + -1;
        unaff_r14 = unaff_r14 + 1;
      }
      else {
        iStack_198 = unaff_r14;
        (*(code *)PTR_FUN_8c06a1b4)(*(undefined4 *)(unaff_r14 * 8 + DAT_8c06a1b0 + 4),ar5,iVar5,ar7)
        ;
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)&uStack_1d8 + DAT_8c06a1b8) = (int)(in_dr0 >> 0x20);
          uVar10 = (ulonglong)*(uint *)((int)&uStack_1d8 + DAT_8c06a1b8);
        }
        else {
          *(ulonglong *)((int)&uStack_1d8 + DAT_8c06a1b8) = in_dr0;
          in_xd0 = *(undefined8 *)((int)&uStack_1d8 + DAT_8c06a1b8);
          uVar10 = in_dr0;
        }
        in_dr0 = uVar10 & 0xffffffff;
        if ((float)uVar10 == 0.0) {
          if (ar6 == 0) {
            iStack_19c = unaff_r14;
            uVar2 = (*(code *)PTR_get_field_210_06b3f4_8c06a1bc)
                              (*(undefined4 *)(unaff_r14 * 8 + DAT_8c06a1b0 + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c06a1c0) = uVar2;
            iStack_1a0 = unaff_r14;
            uVar2 = (*(code *)PTR_get_field_210_06b3f4_8c06a1bc)
                              (*(undefined4 *)(unaff_r14 * 8 + DAT_8c06a1b0 + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c06a1c4) = uVar2;
            iStack_1a4 = unaff_r14;
            iStack_1a8 = (*(code *)PTR_libgcc_divide_helper_01031c_8c06a1ac)
                                   (*(undefined4 *)((int)&uStack_1d8 + DAT_8c06a1c0),4,iVar5,ar7);
            iStack_1b0 = (*(code *)PTR_libgcc_divide_helper_01031c_8c06a1ac)
                                   (*(undefined4 *)((int)&uStack_1d8 + DAT_8c06a1c4),4,iVar5,ar7);
            iVar5 = iStack_1b0 * 2 + 3;
            ar5 = iStack_1a8;
            iStack_1ac = iStack_1b0;
            uVar2 = (*(code *)PTR_FUN_8c06a1c8)
                              (*(undefined4 *)(iStack_1a4 * 8 + DAT_8c06a1b0 + 4),iStack_1a8,iVar5,
                               ar7);
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c06a1cc) = uVar2;
            iVar8 = *(int *)((int)&uStack_1d8 + DAT_8c06a1cc);
          }
          else {
            iStack_1b4 = unaff_r14;
            uVar2 = (*(code *)PTR_get_field_210_06b3f4_8c06a23c)
                              (*(undefined4 *)(unaff_r14 * 8 + DAT_8c06a238 + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c06a240) = uVar2;
            iStack_1b8 = unaff_r14;
            iStack_1c0 = (*(code *)PTR_libgcc_divide_helper_01031c_8c06a244)
                                   (*(undefined4 *)((int)&uStack_1d8 + DAT_8c06a240),4,iVar5,ar7);
            ar5 = iStack_1c0 * 2 + 3;
            iStack_1bc = iStack_1c0;
            uVar2 = (*(code *)PTR_FUN_8c06a248)
                              (*(undefined4 *)(iStack_1b8 * 8 + DAT_8c06a238 + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + DAT_8c06a24c) = uVar2;
            iVar8 = *(int *)((int)&uStack_1d8 + DAT_8c06a24c);
          }
        }
        if (iVar8 == -1) {
          iVar7 = iVar7 + -1;
          unaff_r14 = unaff_r14 + 1;
        }
      }
      if (5 < unaff_r14) {
        unaff_r14 = 0;
      }
    } while ((-1 < iVar7) && (iVar8 == -1));
  }
  if (iVar8 == -1) {
    uVar2 = 0;
  }
  else {
    iVar7 = unaff_r14;
    if ((int)uStack_1d8 == 0) {
      unaff_r8 = *(undefined4 *)(unaff_r14 * 8 + DAT_8c06a2a8 + 4);
      ar5 = DAT_8c06a2a8;
      iStack_1c4 = unaff_r14;
    }
    else if ((int)uStack_1d8 == 1) {
      unaff_r8 = *(undefined4 *)(unaff_r14 * 8 + DAT_8c06a2c8 + 4);
      iVar7 = unaff_r14 + 7;
      iStack_1c8 = unaff_r14;
    }
    else if ((int)uStack_1d8 == 2) {
      unaff_r8 = *(undefined4 *)(unaff_r14 * 8 + DAT_8c06a3ac + 4);
      iVar7 = unaff_r14 + 0xd;
      iStack_1cc = unaff_r14;
    }
    uVar2 = (*(code *)PTR_FUN_8c06a3b0)(unaff_r8,ar5,iVar5,ar7);
    *(undefined4 *)((int)&uStack_1d8 + DAT_8c06a3b4) = uVar2;
    uVar2 = (*(code *)PTR_FUN_8c06a3b8)
                      (*(undefined4 *)((int)&uStack_1d8 + DAT_8c06a3b4),ar5,iVar5,ar7);
    *(undefined4 *)((int)&uStack_1d8 + DAT_8c06a3bc) = uVar2;
    iVar6 = *(int *)(*(int *)((int)&uStack_1d8 + DAT_8c06a3bc) + 0x2c);
    uVar2 = (*(code *)PTR_get_field_210_06b3f4_8c06a3c0)(unaff_r8,ar5,iVar5,ar7);
    *(undefined4 *)((int)&uStack_1d8 + DAT_8c06a3c4) = uVar2;
    *ar4 = *(int *)((int)&uStack_1d8 + DAT_8c06a3c4);
    (*(code *)PTR_FUN_8c06a3cc)(unaff_r8,(int)&uStack_1d8 + DAT_8c06a3c8,iVar5,ar7);
    (*(code *)PTR_Vec3_assign_8c06a3d0)(ar4 + 4,(int)&uStack_1d8 + DAT_8c06a3c8,iVar5,ar7);
    (*(code *)PTR_Vec3_dtor_8c06a3d4)((int)&uStack_1d8 + DAT_8c06a3c8,0xffffffff,iVar5,ar7);
    iStack_1d0 = *ar4;
    uStack_1d8._4_4_ = iVar8;
    ar4[1] = *(int *)((int)&uStack_1d8 + iVar8 * 4 + *ar4 * 0x24 + DAT_8c06a3d8);
    ar4[2] = iVar7;
    ar4[3] = iVar8;
    a7 = ar4 + 0xe;
    a6 = ar4 + 0xd;
    (*(code *)PTR_FUN_8c06a3dc)(unaff_r8,ar4 + 0xc,a6,a7);
    if ((iVar8 < 9) && (-1 < iVar8)) {
      uVar2 = (*(code *)(&PTR_LAB_8c06a3e0)[iVar8])();
      return uVar2;
    }
    a5 = (int *)(iVar6 + 8);
    if (in_FPSCR_SZ == '\0') {
      ar4[8] = *a5;
      ar4[9] = *(int *)(iVar6 + 0xc);
      ar4[10] = *(int *)(iVar6 + 0x10);
    }
    else {
      *(undefined8 *)(ar4 + 8) = *(undefined8 *)a5;
      *(undefined8 *)(ar4 + 9) = *(undefined8 *)(iVar6 + 0xc);
      *(undefined8 *)(ar4 + 10) = *(undefined8 *)(iVar6 + 0x10);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c06a4f4,(float)*(int *)(iVar6 + 0x14));
    }
    else {
      dVar11 = (double)CONCAT44(DAT_8c06a4f8,DAT_8c06a4f4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar11 * dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c06a4f8,fVar9);
    }
    else {
      dVar11 = (double)CONCAT44(PTR_FUN_8c06a4fc,DAT_8c06a4f8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar11 / dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      ar4[0xf] = (int)fVar9;
    }
    else {
      *(undefined8 *)(ar4 + 0xf) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c06a4f4,(float)*(int *)(iVar6 + 0x18));
    }
    else {
      dVar11 = (double)CONCAT44(DAT_8c06a4f8,DAT_8c06a4f4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar11 * dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c06a4f8,fVar9);
    }
    else {
      dVar11 = (double)CONCAT44(PTR_FUN_8c06a4fc,DAT_8c06a4f8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar11 / dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      ar4[0x10] = (int)fVar9;
    }
    else {
      *(undefined8 *)(ar4 + 0x10) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c06a4f4,(float)*(int *)(iVar6 + 0x1c));
    }
    else {
      dVar11 = (double)CONCAT44(DAT_8c06a4f8,DAT_8c06a4f4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar11 * dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c06a4f8,fVar9);
    }
    else {
      dVar11 = (double)CONCAT44(PTR_FUN_8c06a4fc,DAT_8c06a4f8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = (float)((ulonglong)dVar11 >> 0x20);
      dVar11 = (double)CONCAT44(fVar9,SUB84(dVar11,0) / fVar9);
    }
    else {
      dVar11 = dVar11 / dVar11;
    }
    if (in_FPSCR_SZ == '\0') {
      ar4[0x11] = SUB84(dVar11,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x11) = in_xd0;
    }
    (*(code *)PTR_FUN_8c06a4fc)(unaff_r8,a5,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)&uStack_1d8 + DAT_8c06a500) = (int)((ulonglong)dVar11 >> 0x20);
      ar4[0x12] = *(int *)((int)&uStack_1d8 + DAT_8c06a500);
    }
    else {
      *(double *)((int)&uStack_1d8 + DAT_8c06a500) = dVar11;
      *(undefined8 *)(ar4 + 0x12) = *(undefined8 *)((int)&uStack_1d8 + DAT_8c06a500);
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c06a524 @ 8c06a524 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06a524(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *DAT_8c06a5d0 = 0;
  *DAT_8c06a5d4 = 0;
  *DAT_8c06a5d8 = 0;
  *DAT_8c06a5dc = 0;
  *DAT_8c06a5e0 = 0;
  for (iVar1 = 0; iVar1 < 7; iVar1 = iVar1 + 1) {
    *(undefined4 *)(DAT_8c06a5e4 + iVar1 * 8) = 0;
    *(undefined4 *)(iVar1 * 8 + DAT_8c06a5e4 + 4) = 0;
  }
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(undefined4 *)(DAT_8c06a5e8 + iVar1 * 8) = 0;
    *(undefined4 *)(iVar1 * 8 + DAT_8c06a5e8 + 4) = 0;
  }
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(undefined4 *)(DAT_8c06a5ec + iVar1 * 8) = 0;
    *(undefined4 *)(iVar1 * 8 + DAT_8c06a5ec + 4) = 0;
  }
  return 6;
}



/* FUN_8c06a5f0 @ 8c06a5f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

ulonglong * FUN_8c06a5f0(int ar4,ulonglong *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulonglong *puVar4;
  int iVar5;
  uint in_fr1;
  undefined4 uVar6;
  ulonglong uVar7;
  double dVar8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (*(int *)(DAT_8c06a63c + ar4) == -1) {
    *DAT_8c06a640 = *DAT_8c06a640 + 1;
  }
  if (-1 < *(int *)(DAT_8c06a644 + ar4)) {
    iVar3 = *(int *)(DAT_8c06a63c + ar4);
    if (iVar3 == 0) {
      *(undefined4 *)(DAT_8c06a680 + *(int *)(DAT_8c06a67c + ar4) * 8) = 0;
      if (*(int *)(DAT_8c06a684 + ar4) == 3) {
        *DAT_8c06a688 = *DAT_8c06a688 + -1;
        *DAT_8c06a68c = *DAT_8c06a68c + 1;
      }
    }
    else if (iVar3 == 1) {
      *(undefined4 *)(DAT_8c06a6c8 + *(int *)(DAT_8c06a6c4 + ar4) * 8) = 0;
      if (*(int *)(DAT_8c06a6cc + ar4) == 3) {
        if (*(int *)(DAT_8c06a6d0 + ar4) < 4) {
          *DAT_8c06a6d4 = *DAT_8c06a6d4 + -1;
        }
        else {
          *DAT_8c06a6f0 = *DAT_8c06a6f0 + -1;
        }
        *DAT_8c06a6f4 = *DAT_8c06a6f4 + 1;
      }
    }
    else if ((iVar3 == 2) &&
            (*(undefined4 *)(DAT_8c06a754 + *(int *)(DAT_8c06a750 + ar4) * 8) = 0,
            *(int *)(DAT_8c06a758 + ar4) == 3)) {
      *DAT_8c06a75c = *DAT_8c06a75c + -1;
      *DAT_8c06a760 = *DAT_8c06a760 + 1;
    }
    *(undefined4 *)(DAT_8c06a750 + ar4) = 0xffffffff;
  }
  iVar3 = ar6;
  if (ar6 == 0) {
    *(undefined4 *)(DAT_8c06a790 + ar4) = 0;
    uVar1 = (*(code *)PTR_rand_8c06a794)(ar4,ar5,0,ar7);
    iVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c06a798)(uVar1,7,iVar3,ar7);
    iVar5 = 7;
    while ((*(int *)(DAT_8c06a7ec + iVar2 * 8) == 1 && (0 < iVar5))) {
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
      if (6 < iVar2) {
        iVar2 = 0;
      }
    }
    if (0 < iVar5) {
      *(undefined4 *)(DAT_8c06a7ec + iVar2 * 8) = 1;
      *(int *)(DAT_8c06a7f0 + ar4) = iVar2;
    }
    puVar4 = (ulonglong *)(iVar2 * 0x10 + DAT_8c06a7f4);
    iVar2 = ar4 + 0x30;
    (*(code *)PTR_Vec3_assign_8c06a7f8)(iVar2,puVar4,iVar3,ar7);
  }
  else if (ar6 == 1) {
    *(undefined4 *)(DAT_8c06a828 + ar4) = 1;
    uVar1 = (*(code *)PTR_rand_8c06a82c)(ar4,ar5,1,ar7);
    iVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c06a830)(uVar1,6,iVar3,ar7);
    iVar5 = 6;
    while ((*(int *)(DAT_8c06a884 + iVar2 * 8) == 1 && (0 < iVar5))) {
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
      if (5 < iVar2) {
        iVar2 = 0;
      }
    }
    if (0 < iVar5) {
      *(undefined4 *)(DAT_8c06a884 + iVar2 * 8) = 1;
      *(int *)(DAT_8c06a888 + ar4) = iVar2;
    }
    puVar4 = (ulonglong *)(iVar2 * 0x10 + DAT_8c06a88c);
    iVar2 = ar4 + 0x30;
    (*(code *)PTR_Vec3_assign_8c06a890)(iVar2,puVar4,iVar3,ar7);
  }
  else if (ar6 == 2) {
    *(undefined4 *)(DAT_8c06a8c0 + ar4) = 2;
    uVar1 = (*(code *)PTR_rand_8c06a8c4)(ar4,ar5,2,ar7);
    iVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c06a8c8)(uVar1,6,iVar3,ar7);
    iVar5 = 6;
    while ((*(int *)(DAT_8c06a91c + iVar2 * 8) == 1 && (0 < iVar5))) {
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
      if (5 < iVar2) {
        iVar2 = 0;
      }
    }
    if (0 < iVar5) {
      *(undefined4 *)(DAT_8c06a91c + iVar2 * 8) = 1;
      *(int *)(DAT_8c06a920 + ar4) = iVar2;
    }
    puVar4 = (ulonglong *)(iVar2 * 0x10 + DAT_8c06a924);
    iVar2 = ar4 + 0x30;
    (*(code *)PTR_Vec3_assign_8c06a928)(iVar2,puVar4,iVar3,ar7);
  }
  else {
    iVar2 = ar4;
    puVar4 = ar5;
    if (ar6 == 3) {
      *(undefined4 *)(DAT_8c06a9a8 + ar4) = 3;
      *(undefined4 *)(DAT_8c06a9ac + ar4) = 0xffffffff;
    }
  }
  uVar7 = (ulonglong)in_fr1;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x50) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x50) = uVar7;
  }
  uVar1 = (*(code *)PTR_rand_8c06a9b0)(iVar2,puVar4,iVar3,ar7);
  uVar6 = (undefined4)uVar7;
  iVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c06a9b8)(uVar1,DAT_8c06a9b4,iVar3,ar7);
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44((float)iVar3,uVar6);
  }
  else {
    dVar8 = (double)iVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0x54) = (int)((ulonglong)dVar8 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x54) = dVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x58) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x58) = (ulonglong)dVar8 & 0xffffffff;
  }
  *(undefined4 *)(DAT_8c06a9bc + ar4) = 1;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c06a9c0) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c06a9c0) = (ulonglong)dVar8 & 0xffffffff;
  }
  if (ar6 == 3) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)ar5 = 0;
    }
    else {
      *ar5 = (ulonglong)dVar8 & 0xffffffff;
    }
    puVar4 = (ulonglong *)((int)ar5 + 4);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar4 = 0;
    }
    else {
      *puVar4 = (ulonglong)dVar8 & 0xffffffff;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar5 + 1) = 0;
    }
    else {
      ar5[1] = (ulonglong)dVar8 & 0xffffffff;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)ar5 = *(undefined4 *)(ar4 + 0x30);
      *(undefined4 *)(ar5 + 1) = *(undefined4 *)(ar4 + 0x38);
      *(undefined4 *)((int)ar5 + 4) = *(undefined4 *)(ar4 + 0x34);
    }
    else {
      *ar5 = *(ulonglong *)(ar4 + 0x30);
      ar5[1] = *(ulonglong *)(ar4 + 0x38);
      *(undefined8 *)((int)ar5 + 4) = *(undefined8 *)(ar4 + 0x34);
    }
    puVar4 = (ulonglong *)(ar4 + 0x38);
  }
  return puVar4;
}



/* FUN_8c06a9e8 @ 8c06a9e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c06a9e8(int ar4,undefined8 *ar5,undefined8 *ar6,undefined8 *ar7)

{
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar5 = *(undefined4 *)(ar4 + 0x30);
    *(undefined4 *)ar6 = *(undefined4 *)(ar4 + 0x34);
    *(undefined4 *)ar7 = *(undefined4 *)(ar4 + 0x38);
  }
  else {
    *ar5 = *(undefined8 *)(ar4 + 0x30);
    *ar6 = *(undefined8 *)(ar4 + 0x34);
    *ar7 = *(undefined8 *)(ar4 + 0x38);
  }
  return ar4 + 0x34;
}



/* FUN_8c06aa04 @ 8c06aa04 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c06aaee) */
/* WARNING: Removing unreachable block (ram,0x8c06aa9a) */
/* WARNING: Removing unreachable block (ram,0x8c06aa4e) */
/* WARNING: Removing unreachable block (ram,0x8c06aa38) */
/* WARNING: Removing unreachable block (ram,0x8c06aa5c) */
/* WARNING: Removing unreachable block (ram,0x8c06aac4) */
/* WARNING: Removing unreachable block (ram,0x8c06ab56) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c06aa04(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 in_fr3;
  float fVar10;
  undefined4 in_fr5;
  undefined4 in_fr4;
  double in_dr14;
  undefined8 in_xd0;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_xd14;
  bool bVar13;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar4 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar4 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar4 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar4 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar4 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar4 + -0x10) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  }
  else {
    in_xd14 = CONCAT44(in_fr4,in_fr5);
  }
  (*(code *)PTR_Vec3_ctor_zero_8c06aba0)((undefined1 *)((int)puVar4 + -0x20),ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_deref_u32_8c06aba8)(DAT_8c06aba4 + 0x30,ar5,ar6,ar7);
  *(undefined4 *)((int)puVar4 + -0x24) = uVar1;
  piVar2 = *(int **)**(undefined4 **)((int)puVar4 + -0x24);
  while( true ) {
    fVar5 = (float)*piVar2;
    dVar7 = (double)(ulonglong)(uint)fVar5;
    if (in_FPSCR_PR == '\0' && fVar5 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c06abac,fVar5);
      }
      else {
        dVar7 = (double)CONCAT44(PTR_Vec3_ctor_copy_8c06abb0,DAT_8c06abac);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar5,SUB84(dVar7,0) + fVar5);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    fVar5 = SUB84(in_dr14,0);
    if (in_FPSCR_PR == '\0') {
      bVar13 = SUB84(dVar7,0) < fVar5;
    }
    else {
      bVar13 = dVar7 < in_dr14;
    }
    if (!bVar13) break;
    piVar2 = piVar2 + 4;
  }
  fVar6 = (float)*piVar2;
  if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c06abac,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(PTR_Vec3_ctor_copy_8c06abb0,DAT_8c06abac);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 + dVar7,0);
    }
  }
  if (fVar6 == fVar5) {
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x20) = piVar2[1];
      *(int *)((int)puVar4 + -0x1c) = piVar2[2];
      *(int *)((int)puVar4 + -0x18) = piVar2[3];
    }
    else {
      *(undefined8 *)((int)puVar4 + -0x20) = *(undefined8 *)(piVar2 + 1);
      *(undefined8 *)((int)puVar4 + -0x1c) = *(undefined8 *)(piVar2 + 2);
      *(undefined8 *)((int)puVar4 + -0x18) = *(undefined8 *)(piVar2 + 3);
    }
  }
  else {
    piVar3 = piVar2 + -4;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(piVar2[1],in_fr3);
      dVar8 = (double)CONCAT44(piVar2[-3],fVar6);
    }
    else {
      dVar7 = *(double *)(piVar2 + 1);
      dVar8 = *(double *)(piVar2 + -3);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - (float)((ulonglong)dVar8 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - dVar8;
    }
    fVar6 = (float)(*piVar2 - *piVar3);
    dVar8 = (double)(ulonglong)(uint)fVar6;
    if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c06abac,fVar6);
      }
      else {
        dVar8 = (double)CONCAT44(PTR_Vec3_ctor_copy_8c06abb0,DAT_8c06abac);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = (float)((ulonglong)dVar8 >> 0x20);
        dVar8 = (double)CONCAT44(fVar6,SUB84(dVar8,0) + fVar6);
      }
      else {
        dVar8 = dVar8 + dVar8;
      }
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) / SUB84(dVar8,0),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 / dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x20) = (int)((ulonglong)dVar7 >> 0x20);
      dVar7 = (double)CONCAT44(piVar2[2],SUB84(dVar7,0));
      dVar8 = (double)CONCAT44(piVar2[-2],SUB84(dVar8,0));
    }
    else {
      *(double *)((int)puVar4 + -0x20) = dVar7;
      dVar7 = *(double *)(piVar2 + 2);
      dVar8 = *(double *)(piVar2 + -2);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - (float)((ulonglong)dVar8 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - dVar8;
    }
    fVar6 = (float)(*piVar2 - *piVar3);
    dVar8 = (double)(ulonglong)(uint)fVar6;
    if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c06abac,fVar6);
      }
      else {
        dVar8 = (double)CONCAT44(PTR_Vec3_ctor_copy_8c06abb0,DAT_8c06abac);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = (float)((ulonglong)dVar8 >> 0x20);
        dVar8 = (double)CONCAT44(fVar6,SUB84(dVar8,0) + fVar6);
      }
      else {
        dVar8 = dVar8 + dVar8;
      }
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) / SUB84(dVar8,0),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 / dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x1c) = (int)((ulonglong)dVar7 >> 0x20);
      dVar7 = (double)CONCAT44(piVar2[3],SUB84(dVar7,0));
      dVar8 = (double)CONCAT44(piVar2[-1],SUB84(dVar8,0));
    }
    else {
      *(double *)((int)puVar4 + -0x1c) = dVar7;
      dVar7 = *(double *)(piVar2 + 3);
      dVar8 = *(double *)(piVar2 + -1);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - (float)((ulonglong)dVar8 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - dVar8;
    }
    fVar6 = (float)(*piVar2 - *piVar3);
    dVar8 = (double)(ulonglong)(uint)fVar6;
    if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c06abac,fVar6);
      }
      else {
        dVar8 = (double)CONCAT44(PTR_Vec3_ctor_copy_8c06abb0,DAT_8c06abac);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = (float)((ulonglong)dVar8 >> 0x20);
        dVar8 = (double)CONCAT44(fVar6,SUB84(dVar8,0) + fVar6);
      }
      else {
        dVar8 = dVar8 + dVar8;
      }
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) / SUB84(dVar8,0),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 / dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x18) = (int)((ulonglong)dVar7 >> 0x20);
    }
    else {
      *(double *)((int)puVar4 + -0x18) = dVar7;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)*piVar3,SUB84(dVar7,0));
    }
    else {
      dVar7 = (double)*piVar3;
    }
    dVar9 = (double)((ulonglong)dVar8 & 0xffffffff);
    fVar6 = (float)((ulonglong)dVar7 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar13 = fVar6 < 0.0;
    }
    else {
      bVar13 = dVar7 < dVar9;
    }
    if (bVar13) {
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(DAT_8c06abac,SUB84(dVar8,0));
      }
      else {
        dVar9 = (double)CONCAT44(PTR_Vec3_ctor_copy_8c06abb0,DAT_8c06abac);
      }
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44(fVar6 + (float)((ulonglong)dVar9 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + dVar9;
      }
    }
    uVar11 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),fVar5);
      uVar11 = in_xd0;
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar9,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar9 - dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x20),fVar6);
    }
    else {
      dVar8 = *(double *)((int)puVar4 + -0x20);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar8 * dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(piVar2[-3],fVar6);
    }
    else {
      dVar8 = *(double *)(piVar2 + -3);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar8 + dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar4 + -0x20) = fVar6;
    }
    else {
      *(undefined8 *)((int)puVar4 + -0x20) = uVar11;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)*piVar3,SUB84(dVar7,0));
    }
    else {
      dVar7 = (double)*piVar3;
    }
    dVar8 = (double)(ulonglong)(uint)fVar6;
    fVar10 = (float)((ulonglong)dVar7 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar13 = fVar10 < 0.0;
    }
    else {
      bVar13 = dVar7 < dVar8;
    }
    if (bVar13) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c06abac,fVar6);
      }
      else {
        dVar8 = (double)CONCAT44(PTR_Vec3_ctor_copy_8c06abb0,DAT_8c06abac);
      }
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44(fVar10 + (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + dVar8;
      }
    }
    uVar12 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar5);
      uVar12 = uVar11;
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar8 - dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x1c),fVar6);
    }
    else {
      dVar7 = *(double *)((int)puVar4 + -0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(piVar2[-2],fVar6);
    }
    else {
      dVar7 = *(double *)(piVar2 + -2);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 + dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar4 + -0x1c) = fVar6;
    }
    else {
      *(undefined8 *)((int)puVar4 + -0x1c) = uVar12;
    }
    fVar6 = (float)*piVar3;
    dVar7 = (double)(ulonglong)(uint)fVar6;
    if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c06abac,fVar6);
      }
      else {
        dVar7 = (double)CONCAT44(PTR_Vec3_ctor_copy_8c06abb0,DAT_8c06abac);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar6,SUB84(dVar7,0) + fVar6);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fVar5 - SUB84(dVar7,0));
    }
    else {
      dVar8 = in_dr14 - dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x18),SUB84(dVar7,0));
    }
    else {
      dVar7 = *(double *)((int)puVar4 + -0x18);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),
                               SUB84(dVar8,0) * (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      dVar8 = dVar8 * dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(piVar2[-1],SUB84(dVar7,0));
    }
    else {
      dVar7 = *(double *)(piVar2 + -1);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar8,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar8 + dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar4 + -0x18) = fVar5;
    }
    else {
      *(undefined8 *)((int)puVar4 + -0x18) = in_xd14;
    }
  }
  (*(code *)PTR_Vec3_ctor_copy_8c06abb0)
            (*(undefined4 *)((int)puVar4 + 4),(undefined1 *)((int)puVar4 + -0x20),ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c06abb4)((undefined1 *)((int)puVar4 + -0x20),0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c06abb8 @ 8c06abb8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c06ad60) */
/* WARNING: Removing unreachable block (ram,0x8c06ad2c) */
/* WARNING: Removing unreachable block (ram,0x8c06acf8) */
/* WARNING: Removing unreachable block (ram,0x8c06acae) */
/* WARNING: Removing unreachable block (ram,0x8c06ac44) */
/* WARNING: Removing unreachable block (ram,0x8c06ac18) */
/* WARNING: Removing unreachable block (ram,0x8c06ac02) */
/* WARNING: Removing unreachable block (ram,0x8c06abec) */
/* WARNING: Removing unreachable block (ram,0x8c06ac10) */
/* WARNING: Removing unreachable block (ram,0x8c06ac2e) */
/* WARNING: Removing unreachable block (ram,0x8c06ac7c) */
/* WARNING: Removing unreachable block (ram,0x8c06ace0) */
/* WARNING: Removing unreachable block (ram,0x8c06ad14) */
/* WARNING: Removing unreachable block (ram,0x8c06ad48) */
/* WARNING: Removing unreachable block (ram,0x8c06ad7a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c06abb8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined4 in_fr3;
  double dVar9;
  undefined4 in_fr5;
  undefined4 in_fr4;
  double in_dr14;
  undefined8 in_xd0;
  double in_xd14;
  bool bVar10;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar4 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar4 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar4 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar4 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar4 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar4 + -0x10) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  }
  else {
    in_xd14 = (double)CONCAT44(in_fr4,in_fr5);
  }
  (*(code *)PTR_Vec3_set_zero_8c06adb8)((undefined1 *)((int)puVar4 + -0x1c),ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_deref_u32_8c06adc0)(DAT_8c06adbc + 0x30,ar5,ar6,ar7);
  *(undefined4 *)((int)puVar4 + -0x20) = uVar1;
  piVar2 = *(int **)(**(int **)((int)puVar4 + -0x20) + 4);
  while( true ) {
    fVar5 = (float)*piVar2;
    dVar7 = (double)(ulonglong)(uint)fVar5;
    if (in_FPSCR_PR == '\0' && fVar5 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c06adc4,fVar5);
      }
      else {
        dVar7 = (double)CONCAT44(_DAT_8c06adc8,DAT_8c06adc4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar5,SUB84(dVar7,0) + fVar5);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    fVar5 = SUB84(in_dr14,0);
    if (in_FPSCR_PR == '\0') {
      bVar10 = SUB84(dVar7,0) < fVar5;
    }
    else {
      bVar10 = dVar7 < in_dr14;
    }
    if (!bVar10) break;
    piVar2 = piVar2 + 4;
  }
  fVar6 = (float)*piVar2;
  if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c06adc4,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(_DAT_8c06adc8,DAT_8c06adc4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 + dVar7,0);
    }
  }
  if (fVar6 == fVar5) {
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(_DAT_8c06adc8,(float)piVar2[1]);
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c06adcc,_DAT_8c06adc8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c06adcc,fVar5);
    }
    else {
      dVar7 = (double)CONCAT44(PTR_vec3_copy_8c02b5fc_8c06add0,DAT_8c06adcc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 / dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar4 + -0x1c) = fVar5;
    }
    else {
      *(undefined8 *)((int)puVar4 + -0x1c) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(_DAT_8c06adc8,(float)piVar2[2]);
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c06adcc,_DAT_8c06adc8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c06adcc,fVar5);
    }
    else {
      dVar7 = (double)CONCAT44(PTR_vec3_copy_8c02b5fc_8c06add0,DAT_8c06adcc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 / dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar4 + -0x18) = fVar5;
    }
    else {
      *(undefined8 *)((int)puVar4 + -0x18) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(_DAT_8c06adc8,(float)piVar2[3]);
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c06adcc,_DAT_8c06adc8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c06adcc,fVar5);
    }
    else {
      dVar7 = (double)CONCAT44(PTR_vec3_copy_8c02b5fc_8c06add0,DAT_8c06adcc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 / dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar4 + -0x14) = fVar5;
    }
    else {
      *(undefined8 *)((int)puVar4 + -0x14) = in_xd0;
    }
  }
  else {
    piVar3 = piVar2 + -4;
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)(piVar2[1] - piVar2[-3]),in_fr3);
    }
    else {
      dVar7 = (double)(piVar2[1] - piVar2[-3]);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(_DAT_8c06adc8,fVar6);
    }
    else {
      dVar8 = (double)CONCAT44(DAT_8c06adcc,_DAT_8c06adc8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) * (float)((ulonglong)dVar8 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 * dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(DAT_8c06adcc,SUB84(dVar8,0));
    }
    else {
      dVar8 = (double)CONCAT44(PTR_vec3_copy_8c02b5fc_8c06add0,DAT_8c06adcc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) / (float)((ulonglong)dVar8 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 / dVar8;
    }
    fVar6 = (float)(*piVar2 - *piVar3);
    dVar8 = (double)(ulonglong)(uint)fVar6;
    if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c06adc4,fVar6);
      }
      else {
        dVar8 = (double)CONCAT44(_DAT_8c06adc8,DAT_8c06adc4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = (float)((ulonglong)dVar8 >> 0x20);
        dVar8 = (double)CONCAT44(fVar6,SUB84(dVar8,0) + fVar6);
      }
      else {
        dVar8 = dVar8 + dVar8;
      }
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) / SUB84(dVar8,0),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 / dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x1c) = (int)((ulonglong)dVar7 >> 0x20);
    }
    else {
      *(double *)((int)puVar4 + -0x1c) = dVar7;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)(piVar2[2] - piVar2[-2]),SUB84(dVar7,0));
    }
    else {
      dVar7 = (double)(piVar2[2] - piVar2[-2]);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(_DAT_8c06adc8,SUB84(dVar8,0));
    }
    else {
      dVar8 = (double)CONCAT44(DAT_8c06adcc,_DAT_8c06adc8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) * (float)((ulonglong)dVar8 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 * dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(DAT_8c06adcc,SUB84(dVar8,0));
    }
    else {
      dVar8 = (double)CONCAT44(PTR_vec3_copy_8c02b5fc_8c06add0,DAT_8c06adcc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) / (float)((ulonglong)dVar8 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 / dVar8;
    }
    fVar6 = (float)(*piVar2 - *piVar3);
    dVar8 = (double)(ulonglong)(uint)fVar6;
    if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c06adc4,fVar6);
      }
      else {
        dVar8 = (double)CONCAT44(_DAT_8c06adc8,DAT_8c06adc4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = (float)((ulonglong)dVar8 >> 0x20);
        dVar8 = (double)CONCAT44(fVar6,SUB84(dVar8,0) + fVar6);
      }
      else {
        dVar8 = dVar8 + dVar8;
      }
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) / SUB84(dVar8,0),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 / dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x18) = (int)((ulonglong)dVar7 >> 0x20);
    }
    else {
      *(double *)((int)puVar4 + -0x18) = dVar7;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)(piVar2[3] - piVar2[-1]),SUB84(dVar7,0));
    }
    else {
      dVar7 = (double)(piVar2[3] - piVar2[-1]);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(_DAT_8c06adc8,SUB84(dVar8,0));
    }
    else {
      dVar8 = (double)CONCAT44(DAT_8c06adcc,_DAT_8c06adc8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) * (float)((ulonglong)dVar8 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 * dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(DAT_8c06adcc,SUB84(dVar8,0));
    }
    else {
      dVar8 = (double)CONCAT44(PTR_vec3_copy_8c02b5fc_8c06add0,DAT_8c06adcc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) / (float)((ulonglong)dVar8 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 / dVar8;
    }
    fVar6 = (float)(*piVar2 - *piVar3);
    dVar8 = (double)(ulonglong)(uint)fVar6;
    if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c06adc4,fVar6);
      }
      else {
        dVar8 = (double)CONCAT44(_DAT_8c06adc8,DAT_8c06adc4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = (float)((ulonglong)dVar8 >> 0x20);
        dVar8 = (double)CONCAT44(fVar6,SUB84(dVar8,0) + fVar6);
      }
      else {
        dVar8 = dVar8 + dVar8;
      }
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) / SUB84(dVar8,0),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 / dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x14) = (int)((ulonglong)dVar7 >> 0x20);
    }
    else {
      *(double *)((int)puVar4 + -0x14) = dVar7;
    }
    fVar6 = (float)*piVar3;
    dVar8 = (double)(ulonglong)(uint)fVar6;
    if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c06adc4,fVar6);
      }
      else {
        dVar8 = (double)CONCAT44(_DAT_8c06adc8,DAT_8c06adc4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = (float)((ulonglong)dVar8 >> 0x20);
        dVar8 = (double)CONCAT44(fVar6,SUB84(dVar8,0) + fVar6);
      }
      else {
        dVar8 = dVar8 + dVar8;
      }
    }
    dVar9 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(fVar5,SUB84(dVar7,0));
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) - SUB84(dVar8,0),SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 - dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x1c),SUB84(dVar8,0));
    }
    else {
      dVar7 = *(double *)((int)puVar4 + -0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) * (float)((ulonglong)dVar7 >> 0x20)
                               ,SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 * dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(_DAT_8c06adc8,(float)piVar2[-3]);
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c06adcc,_DAT_8c06adc8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c06adcc,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(PTR_vec3_copy_8c02b5fc_8c06add0,DAT_8c06adcc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) +
                               SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 + dVar7 / dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x1c) = (int)((ulonglong)dVar9 >> 0x20);
    }
    else {
      *(double *)((int)puVar4 + -0x1c) = dVar9;
    }
    fVar6 = (float)*piVar3;
    dVar7 = (double)(ulonglong)(uint)fVar6;
    if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c06adc4,fVar6);
      }
      else {
        dVar7 = (double)CONCAT44(_DAT_8c06adc8,DAT_8c06adc4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar6,SUB84(dVar7,0) + fVar6);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    dVar8 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(fVar5,SUB84(dVar9,0));
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - SUB84(dVar7,0),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x18),SUB84(dVar7,0));
    }
    else {
      dVar7 = *(double *)((int)puVar4 + -0x18);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) * (float)((ulonglong)dVar7 >> 0x20)
                               ,SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 * dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(_DAT_8c06adc8,(float)piVar2[-2]);
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c06adcc,_DAT_8c06adc8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c06adcc,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(PTR_vec3_copy_8c02b5fc_8c06add0,DAT_8c06adcc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) +
                               SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 + dVar7 / dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x18) = (int)((ulonglong)dVar8 >> 0x20);
    }
    else {
      *(double *)((int)puVar4 + -0x18) = dVar8;
    }
    fVar6 = (float)*piVar3;
    dVar7 = (double)(ulonglong)(uint)fVar6;
    if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c06adc4,fVar6);
      }
      else {
        dVar7 = (double)CONCAT44(_DAT_8c06adc8,DAT_8c06adc4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar6,SUB84(dVar7,0) + fVar6);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fVar5 - SUB84(dVar7,0));
    }
    else {
      dVar8 = in_dr14 - dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x14),SUB84(dVar7,0));
    }
    else {
      dVar7 = *(double *)((int)puVar4 + -0x14);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),
                               SUB84(dVar8,0) * (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      dVar8 = dVar8 * dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(_DAT_8c06adc8,(float)piVar2[-1]);
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c06adcc,_DAT_8c06adc8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c06adcc,fVar5);
    }
    else {
      dVar7 = (double)CONCAT44(PTR_vec3_copy_8c02b5fc_8c06add0,DAT_8c06adcc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar8,0) + SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar8 + dVar7 / dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar4 + -0x14) = fVar5;
    }
    else {
      *(double *)((int)puVar4 + -0x14) = in_xd14;
    }
  }
  (*(code *)PTR_vec3_copy_8c02b5fc_8c06add0)
            (*(undefined4 *)((int)puVar4 + 4),(undefined1 *)((int)puVar4 + -0x1c),ar6,ar7);
  (*(code *)PTR_object_dtor_delete_8c06add4)((undefined1 *)((int)puVar4 + -0x1c),0xffffffff,ar6,ar7)
  ;
  return 0;
}



/* FUN_8c06add8 @ 8c06add8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c06ae36) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c06add8(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar1;
  undefined8 in_dr0;
  undefined8 uVar2;
  double dVar3;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar4;
  undefined4 in_PR;
  char in_FPSCR_PR;
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
  *(undefined4 *)(puVar1 + -8) = unaff_r13;
  *(undefined4 *)(puVar1 + -0xc) = in_PR;
  (**(code **)(DAT_8c06af10 + *ar5))(ar5,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0x10) = (int)((ulonglong)in_dr0 >> 0x20);
    in_fr15 = *(float *)(puVar1 + -0x10);
  }
  else {
    *(undefined8 *)(puVar1 + -0x10) = in_dr0;
  }
  *(int *)(puVar1 + -0x1c) = ar4;
  *(uint *)(*(int *)(puVar1 + -0x1c) + 0x74) =
       *(uint *)(*(int *)(puVar1 + -0x1c) + 0x74) & 0xffffffbf;
  *(int *)(puVar1 + -0x20) = ar4;
  *(uint *)(*(int *)(puVar1 + -0x20) + 0x74) =
       *(uint *)(*(int *)(puVar1 + -0x20) + 0x74) & 0xffffffef;
  *(int *)(puVar1 + -0x24) = ar4;
  *(uint *)(*(int *)(puVar1 + -0x24) + 0x74) =
       *(uint *)(*(int *)(puVar1 + -0x24) + 0x74) & 0xffffffdf;
  if (in_FPSCR_SZ == '\0') {
    uVar2 = CONCAT44(*(undefined4 *)DAT_8c06af14,(int)in_dr0);
  }
  else {
    uVar2 = *DAT_8c06af14;
  }
  if (in_fr15 == (float)((ulonglong)uVar2 >> 0x20)) {
    (**(code **)(DAT_8c06af18 + *ar5))(ar5,ar4 + 0x30,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar1 + -0x14) = (int)((ulonglong)uVar2 >> 0x20);
      uVar2 = CONCAT44(*(undefined4 *)(puVar1 + -0x14),*(undefined4 *)(ar4 + 0x34));
    }
    else {
      *(undefined8 *)(puVar1 + -0x14) = uVar2;
      uVar2 = *(undefined8 *)(puVar1 + -0x14);
    }
    if (in_FPSCR_PR != '\0' || (float)uVar2 <= (float)((ulonglong)uVar2 >> 0x20)) {
      *(int *)(puVar1 + -0x2c) = ar4;
      *(uint *)(*(int *)(puVar1 + -0x2c) + 0x74) = *(uint *)(*(int *)(puVar1 + -0x2c) + 0x74) | 0x20
      ;
    }
    else {
      *(int *)(puVar1 + -0x28) = ar4;
      *(uint *)(*(int *)(puVar1 + -0x28) + 0x74) = *(uint *)(*(int *)(puVar1 + -0x28) + 0x74) | 0x40
      ;
    }
  }
  else {
    (**(code **)(DAT_8c06af18 + *ar5))(ar5,ar4 + 0x30,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar1 + -0x18) = (int)((ulonglong)uVar2 >> 0x20);
      uVar2 = CONCAT44(*(undefined4 *)(puVar1 + -0x18),*(undefined4 *)(ar4 + 0x34));
    }
    else {
      *(undefined8 *)(puVar1 + -0x18) = uVar2;
      uVar2 = *(undefined8 *)(puVar1 + -0x18);
    }
    if (in_FPSCR_PR != '\0' || (float)uVar2 <= (float)((ulonglong)uVar2 >> 0x20)) {
      *(int *)(puVar1 + -0x38) = ar4;
      *(uint *)(*(int *)(puVar1 + -0x38) + 0x74) = *(uint *)(*(int *)(puVar1 + -0x38) + 0x74) | 0x20
      ;
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),(float)uVar2);
      }
      else {
        dVar3 = *(double *)(ar4 + 0x34);
      }
      if (in_FPSCR_PR == '\0') {
        bVar4 = in_fr15 < (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        bVar4 = (double)CONCAT44(in_fr14,in_fr15) < dVar3;
      }
      if (bVar4) {
        *(int *)(puVar1 + -0x30) = ar4;
        *(uint *)(*(int *)(puVar1 + -0x30) + 0x74) =
             *(uint *)(*(int *)(puVar1 + -0x30) + 0x74) | 0x40;
      }
      else {
        *(int *)(puVar1 + -0x34) = ar4;
        *(uint *)(*(int *)(puVar1 + -0x34) + 0x74) =
             *(uint *)(*(int *)(puVar1 + -0x34) + 0x74) | 0x10;
      }
    }
  }
  return 0x74;
}



/* FUN_8c06af1c @ 8c06af1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06af1c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 9; iVar1 = iVar1 + 1) {
    if ('\0' < *(char *)(DAT_8c06af58 + ar4 + iVar1)) {
      *(char *)(DAT_8c06af58 + ar4 + iVar1) = *(char *)(DAT_8c06af58 + ar4 + iVar1) + -1;
    }
  }
  return 9;
}



/* FUN_8c06af5c @ 8c06af5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c06af5c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = ar5;
  uVar1 = (*(code *)PTR_FUN_8c06afa0)(ar5,ar5,ar6,ar7);
  *(short *)(DAT_8c06afa4 + ar4) = (short)uVar1;
  uVar2 = (*(code *)PTR_FUN_8c06afa8)(ar5,uVar2,ar6,ar7);
  iVar3 = DAT_8c06afac;
  *(short *)(DAT_8c06afac + ar4) = (short)uVar2;
  return iVar3;
}



/* FUN_8c06afb0 @ 8c06afb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c06afb0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 a5;
  int iVar4;
  
  a5 = ar5;
  uVar1 = (*(code *)PTR_FUN_8c06b040)(ar5,ar5,ar6,ar7);
  if (*(short *)(DAT_8c06b044 + ar4) == (short)uVar1) {
    uVar2 = (*(code *)PTR_FUN_8c06b048)(ar5,a5,ar6,ar7);
    iVar4 = (uVar2 & 0xffff) - (int)*(short *)(DAT_8c06b04c + ar4);
  }
  else {
    uVar2 = (*(code *)PTR_FUN_8c06b048)(ar5,a5,ar6,ar7);
    uVar3 = (*(code *)PTR_FUN_8c06b040)(ar5,a5,ar6,ar7);
    iVar4 = (DAT_8c06b050 - *(short *)(DAT_8c06b04c + ar4)) +
            (((uVar3 & 0xffff) - (uint)*(ushort *)(DAT_8c06b044 + ar4)) + -1) * DAT_8c06b050 +
            (uVar2 & 0xffff);
  }
  return iVar4;
}



/* FUN_8c06b054 @ 8c06b054 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06b054(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float extraout_fr1;
  float extraout_fr1_00;
  float extraout_fr1_01;
  float fVar2;
  float extraout_fr0;
  float extraout_fr0_00;
  float extraout_fr0_01;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  uVar1 = 1;
  if (ar4 < 7) {
    if (*(int *)(ar4 * 8 + DAT_8c06b144 + 4) == 0) {
      uVar1 = 0;
    }
    else {
      (*(code *)PTR_FUN_8c06b148)(*(undefined4 *)(ar4 * 8 + DAT_8c06b144 + 4),ar5,ar6,ar7);
      fVar2 = extraout_fr1;
      if (in_FPSCR_SZ == '\0') {
        fVar2 = extraout_fr0;
      }
      if (in_FPSCR_PR == '\0' && 0.0 < fVar2) {
        uVar1 = 0;
      }
    }
  }
  else if (ar4 < 0xd) {
    if (*(int *)((ar4 + -7) * 8 + DAT_8c06b14c + 4) == 0) {
      uVar1 = 0;
    }
    else {
      (*(code *)PTR_FUN_8c06b148)(*(undefined4 *)((ar4 + -7) * 8 + DAT_8c06b14c + 4),ar5,ar6,ar7);
      fVar2 = extraout_fr1_00;
      if (in_FPSCR_SZ == '\0') {
        fVar2 = extraout_fr0_00;
      }
      if (in_FPSCR_PR == '\0' && 0.0 < fVar2) {
        uVar1 = 0;
      }
    }
  }
  else if (*(int *)((ar4 + -1) * 8 + DAT_8c06b150 + 4) == 0) {
    uVar1 = 1;
  }
  else {
    (*(code *)PTR_FUN_8c06b148)(*(undefined4 *)((ar4 + -1) * 8 + DAT_8c06b150 + 4),ar5,ar6,ar7);
    fVar2 = extraout_fr1_01;
    if (in_FPSCR_SZ == '\0') {
      fVar2 = extraout_fr0_01;
    }
    if (in_FPSCR_PR == '\0' && 0.0 < fVar2) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* FUN_8c06b154 @ 8c06b154 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06b154(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 < 7) {
    uVar1 = (*(code *)PTR_FUN_8c06b1cc)(*(undefined4 *)(ar4 * 8 + DAT_8c06b1c8 + 4),ar5,ar6,ar7);
  }
  else if (ar4 < 0xd) {
    uVar1 = (*(code *)PTR_FUN_8c06b1cc)
                      (*(undefined4 *)((ar4 + -7) * 8 + DAT_8c06b1d0 + 4),ar5,ar6,ar7);
  }
  else {
    uVar1 = (*(code *)PTR_FUN_8c06b1cc)
                      (*(undefined4 *)((ar4 + -1) * 8 + DAT_8c06b1d4 + 4),ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c06b1d8 @ 8c06b1d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06b1d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 < 7) {
    uVar1 = (*(code *)PTR_FUN_8c06b250)(*(undefined4 *)(ar4 * 8 + DAT_8c06b24c + 4),ar5,ar6,ar7);
  }
  else if (ar4 < 0xd) {
    uVar1 = (*(code *)PTR_FUN_8c06b250)
                      (*(undefined4 *)((ar4 + -7) * 8 + DAT_8c06b254 + 4),ar5,ar6,ar7);
  }
  else {
    uVar1 = (*(code *)PTR_FUN_8c06b250)
                      (*(undefined4 *)((ar4 + -1) * 8 + DAT_8c06b258 + 4),ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c06b25c @ 8c06b25c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c06b25c(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c06b274;
  *(uint *)(DAT_8c06b274 + ar4) = *(uint *)(DAT_8c06b274 + ar4) | ar5;
  return iVar1;
}



/* FUN_8c06b278 @ 8c06b278 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c06b278(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  if ((int)ar5 < 0) {
    uVar1 = 1 >> (~ar5 & 0x1f) + 1;
  }
  else {
    uVar1 = 1 << (ar5 & 0x1f);
  }
  iVar2 = DAT_8c06b298;
  *(uint *)(DAT_8c06b298 + ar4) = *(uint *)(DAT_8c06b298 + ar4) & ~uVar1;
  return iVar2;
}



/* FUN_8c06b29c @ 8c06b29c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c06b29c(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint a5;
  uint auStack_2c [5];
  
  a5 = 1;
  auStack_2c[0] = *(uint *)PTR_DAT_8c06b34c;
  auStack_2c[1] = *(undefined4 *)(PTR_DAT_8c06b34c + 4);
  auStack_2c[2] = *(undefined4 *)(PTR_DAT_8c06b34c + 8);
  auStack_2c[3] = *(undefined4 *)(PTR_DAT_8c06b34c + 0xc);
  iVar1 = -1;
  iVar2 = ar6;
  do {
    iVar1 = iVar1 + 1;
    uVar3 = (*(uint *)(DAT_8c06b350 + ar4) | auStack_2c[ar5]) & a5;
    if ((uVar3 != 0) || (*(char *)(DAT_8c06b354 + ar4 + iVar1) == '\x02')) {
      iVar2 = iVar2 + -1;
      a5 = a5 << 1;
    }
  } while (((uVar3 != 0) || (*(char *)(DAT_8c06b354 + ar4 + iVar1) == '\x02')) && (0 < iVar2));
  if (iVar2 < 1) {
    iVar2 = -1;
  }
  else {
    (*(code *)PTR_FUN_8c06b358)(ar4,a5,ar6,ar7);
    iVar2 = 0;
    for (; a5 != 0; a5 = (int)a5 >> 1) {
      iVar2 = iVar2 + 1;
    }
    iVar2 = iVar2 + -1;
  }
  return iVar2;
}



/* FUN_8c06b35c @ 8c06b35c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c06b35c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint a5;
  
  a5 = 1;
  iVar1 = -1;
  do {
    iVar1 = iVar1 + 1;
    uVar2 = (*(uint *)(DAT_8c06b3e4 + ar4) | DAT_8c06b3e8) & a5;
    if ((uVar2 != 0) || (*(char *)(DAT_8c06b3ec + ar4 + iVar1) == '\x02')) {
      ar5 = ar5 + -1;
      a5 = a5 << 1;
    }
  } while (((uVar2 != 0) || (*(char *)(DAT_8c06b3ec + ar4 + iVar1) == '\x02')) && (0 < ar5));
  if (ar5 < 1) {
    iVar1 = -1;
  }
  else {
    (*(code *)PTR_FUN_8c06b3f0)(ar4,a5,ar6,ar7);
    iVar1 = 0;
    for (; a5 != 0; a5 = (int)a5 >> 1) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}



/* get_field_210_06b3f4 @ 8c06b3f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_210_06b3f4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c06b3fc + ar4);
}



/* FUN_8c06b400 @ 8c06b400 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06b400(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c06b40c;
}



/* FUN_8c06b410 @ 8c06b410 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06b410(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c06b41c;
}



/* FUN_8c06b420 @ 8c06b420 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c06b420(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + DAT_8c06b42c;
}



/* FUN_8c06b430 @ 8c06b430 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c06b430(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_8c06b45c;
  iVar2 = 2;
  if (*(char *)(DAT_8c06b45c + ar4 + ar5) < '\x02') {
    *(char *)(DAT_8c06b45c + ar4 + ar5) = *(char *)(DAT_8c06b45c + ar4 + ar5) + '\x01';
    iVar2 = iVar1;
  }
  return iVar2;
}



/* FUN_8c06b460 @ 8c06b460 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06b460(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *a5;
  ushort *puVar4;
  undefined4 unaff_r13;
  float fVar5;
  double dVar6;
  int iVar7;
  int a6;
  int iVar8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int aiStack_10c [4];
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  
  (*(code *)PTR_FUN_8c06b840)(ar4 + DAT_8c06b83c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c06b844)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c06b848)(0,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c06b84c,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar6 = (double)CONCAT44(DAT_8c06b850,DAT_8c06b84c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c06b850,fVar5);
  }
  else {
    dVar6 = (double)CONCAT44(PTR_FUN_8c06b854,DAT_8c06b850);
  }
  if (in_FPSCR_PR == '\0') {
    iVar7 = (int)(SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    iVar7 = (int)(dVar6 / dVar6);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c06b84c,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar6 = (double)CONCAT44(DAT_8c06b850,DAT_8c06b84c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c06b850,fVar5);
  }
  else {
    dVar6 = (double)CONCAT44(PTR_FUN_8c06b854,DAT_8c06b850);
  }
  if (in_FPSCR_PR == '\0') {
    a6 = (int)(SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    a6 = (int)(dVar6 / dVar6);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c06b84c,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar6 = (double)CONCAT44(DAT_8c06b850,DAT_8c06b84c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c06b850,fVar5);
  }
  else {
    dVar6 = (double)CONCAT44(PTR_FUN_8c06b854,DAT_8c06b850);
  }
  if (in_FPSCR_PR == '\0') {
    iVar8 = (int)(SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    iVar8 = (int)(dVar6 / dVar6);
  }
  (*(code *)PTR_FUN_8c06b854)(0,iVar8,a6,iVar7);
  if (*(int *)(DAT_8c06b858 + ar4) < 1) {
    iVar8 = ar4 + 100;
    (*(code *)PTR_FUN_8c06c024)(0,iVar8,a6,iVar7);
    aiStack_10c[1] = *(int *)(DAT_8c06c028 + ar4);
    (*(code *)PTR_FUN_8c06c034)
              (*(int *)(DAT_8c06c02c + ar4) + aiStack_10c[1] * DAT_8c06c030 + 0x78,iVar8,a6,iVar7);
    aiStack_10c[0] = *(int *)(DAT_8c06c028 + ar4);
    uStack_e4 = (*(code *)PTR_FUN_8c06c038)
                          (*(int *)(DAT_8c06c02c + ar4) + aiStack_10c[0] * DAT_8c06c030 + 0x70,iVar8
                           ,a6,iVar7);
    (*(code *)PTR_FUN_8c06c03c)(uStack_e4,iVar8,a6,iVar7);
  }
  else {
    (*(code *)PTR_FUN_8c06b85c)(0,iVar8,a6,iVar7);
    uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar8,a6,iVar7);
    *(undefined4 *)((int)aiStack_10c + DAT_8c06b868) = uVar2;
    puVar3 = (undefined8 *)(*(int *)(*(int *)((int)aiStack_10c + DAT_8c06b868) + 0x2c) + 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar3 = *(undefined4 *)(ar4 + DAT_8c06b86c);
    }
    else {
      *puVar3 = *(undefined8 *)(ar4 + DAT_8c06b86c);
    }
    uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar8,a6,iVar7);
    *(undefined4 *)((int)aiStack_10c + DAT_8c06b870) = uVar2;
    puVar3 = (undefined8 *)(*(int *)(*(int *)((int)aiStack_10c + DAT_8c06b870) + 0x2c) + 0x24);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar3 = *(undefined4 *)(ar4 + DAT_8c06b86c);
    }
    else {
      *puVar3 = *(undefined8 *)(ar4 + DAT_8c06b86c);
    }
    uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar8,a6,iVar7);
    *(undefined4 *)((int)aiStack_10c + DAT_8c06b874) = uVar2;
    puVar3 = (undefined8 *)(*(int *)(*(int *)((int)aiStack_10c + DAT_8c06b874) + 0x2c) + 0x28);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar3 = *(undefined4 *)(ar4 + DAT_8c06b86c);
    }
    else {
      *puVar3 = *(undefined8 *)(ar4 + DAT_8c06b86c);
    }
    uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar8,a6,iVar7);
    *(undefined4 *)((int)aiStack_10c + DAT_8c06b878) = uVar2;
    puVar3 = (undefined8 *)
             (*(int *)(*(int *)(*(int *)((int)aiStack_10c + DAT_8c06b878) + 0x2c) + 0x30) + 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar3 = *(undefined4 *)(ar4 + DAT_8c06b87c);
    }
    else {
      *puVar3 = *(undefined8 *)(ar4 + DAT_8c06b87c);
    }
    uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar8,a6,iVar7);
    *(undefined4 *)((int)aiStack_10c + DAT_8c06b880) = uVar2;
    puVar3 = (undefined8 *)
             (*(int *)(*(int *)(*(int *)((int)aiStack_10c + DAT_8c06b880) + 0x2c) + 0x30) + 0x24);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar3 = *(undefined4 *)(ar4 + DAT_8c06b87c);
    }
    else {
      *puVar3 = *(undefined8 *)(ar4 + DAT_8c06b87c);
    }
    uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar8,a6,iVar7);
    *(undefined4 *)((int)aiStack_10c + DAT_8c06b884) = uVar2;
    puVar3 = (undefined8 *)
             (*(int *)(*(int *)(*(int *)((int)aiStack_10c + DAT_8c06b884) + 0x2c) + 0x30) + 0x28);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar3 = *(undefined4 *)(ar4 + DAT_8c06b87c);
    }
    else {
      *puVar3 = *(undefined8 *)(ar4 + DAT_8c06b87c);
    }
    uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar8,a6,iVar7);
    *(undefined4 *)((int)aiStack_10c + DAT_8c06b888) = uVar2;
    puVar3 = (undefined8 *)
             (*(int *)(*(int *)(*(int *)(*(int *)((int)aiStack_10c + DAT_8c06b888) + 0x2c) + 0x30) +
                      0x30) + 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar3 = *(undefined4 *)(ar4 + DAT_8c06b88c);
    }
    else {
      *puVar3 = *(undefined8 *)(ar4 + DAT_8c06b88c);
    }
    uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar8,a6,iVar7);
    *(undefined4 *)((int)aiStack_10c + DAT_8c06b890) = uVar2;
    puVar3 = (undefined8 *)
             (*(int *)(*(int *)(*(int *)(*(int *)((int)aiStack_10c + DAT_8c06b890) + 0x2c) + 0x30) +
                      0x30) + 0x24);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar3 = *(undefined4 *)(ar4 + DAT_8c06b88c);
    }
    else {
      *puVar3 = *(undefined8 *)(ar4 + DAT_8c06b88c);
    }
    uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar8,a6,iVar7);
    *(undefined4 *)((int)aiStack_10c + DAT_8c06b894) = uVar2;
    puVar3 = (undefined8 *)
             (*(int *)(*(int *)(*(int *)(*(int *)((int)aiStack_10c + DAT_8c06b894) + 0x2c) + 0x30) +
                      0x30) + 0x28);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar3 = *(undefined4 *)(ar4 + DAT_8c06b88c);
    }
    else {
      *puVar3 = *(undefined8 *)(ar4 + DAT_8c06b88c);
    }
    if (*(int *)(DAT_8c06b898 + ar4) < 4) {
      uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar8,a6,iVar7);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06b89c) = uVar2;
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)((int)aiStack_10c + DAT_8c06b89c) + 0x2c) + 0x30) + 0x30
                 ) + 0x2c) = 0x25;
      uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar8,a6,iVar7);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06b8a0) = uVar2;
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)((int)aiStack_10c + DAT_8c06b8a0) + 0x2c) +
                                   0x30) + 0x30) + 0x2c) + 0x2c) = 0x24;
      uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar8,a6,iVar7);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06b8a4) = uVar2;
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)((int)aiStack_10c + DAT_8c06b8a4) +
                                                     0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) + 0x2c) =
           0x24;
      uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar8,a6,iVar7);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06b8a8) = uVar2;
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)((int)aiStack_10c +
                                                                       DAT_8c06b8a8) + 0x2c) + 0x30)
                                            + 0x30) + 0x2c) + 0x2c) + 0x2c) + 0x2c) = 0x24;
      uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar8,a6,iVar7);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06b8ac) = uVar2;
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)((int)
                                                  aiStack_10c + DAT_8c06b8ac) + 0x2c) + 0x30) + 0x30
                                                  ) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c)
           = 0x37;
      uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar8,a6,iVar7);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06b8b0) = uVar2;
      iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)((int)aiStack_10c + DAT_8c06b8b0)
                                                          + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(iVar8 + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) = 0x37;
      uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar8,a6,iVar7);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06b8b4) = uVar2;
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)((
                                                  int)aiStack_10c + DAT_8c06b8b4) + 0x2c) + 0x30) +
                                                  0x30) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                 0x2c) + 0x30) = 0x35;
      uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar8,a6,iVar7);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06b8b8) = uVar2;
      iVar8 = *(int *)((int)aiStack_10c + DAT_8c06b8b8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(
                                                  iVar8 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x2c) =
           0x37;
      uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar8,a6,iVar7);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06b8bc) = uVar2;
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)((int)aiStack_10c + DAT_8c06b8bc) + 0x2c) +
                                                  0x30) + 0x30) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                   0x2c) + 0x2c) + 0x30) + 0x30) = 0x35;
      uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar8,a6,iVar7);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06b8c0) = uVar2;
      iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)((int)
                                                  aiStack_10c + DAT_8c06b8c0) + 0x2c) + 0x30) + 0x30
                                                  ) + 0x2c) + 0x2c) + 0x2c) + 0x2c);
      iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(iVar8 + 0x2c) + 0x2c) + 0x30) + 0x30);
      **(undefined4 **)(iVar7 + 0x2c) = 0x37;
      uVar2 = (*(code *)PTR_FUN_8c06b864)(ar4 + DAT_8c06b860,iVar7,a6,iVar8);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06b8c4) = uVar2;
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)((int)aiStack_10c + DAT_8c06b990)
                                                         + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x30) +
        0x30) = 0x35;
      uVar2 = (*(code *)PTR_FUN_8c06b998)(ar4 + DAT_8c06b994,iVar7,a6,iVar8);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06b99c) = uVar2;
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)((int)aiStack_10c +
                                                                           DAT_8c06b99c) + 0x2c) +
                                                         0x30) + 0x30) + 0x2c) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x30) + 0x30) + 0x30) +
        0x2c) = 0x37;
      uVar2 = (*(code *)PTR_FUN_8c06b998)(ar4 + DAT_8c06b994,iVar7,a6,iVar8);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06b9a0) = uVar2;
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)((int)aiStack_10c +
                                                                           DAT_8c06b9a0) + 0x2c) +
                                                         0x30) + 0x30) + 0x2c) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x30) + 0x30) + 0x30) +
        0x30) = 0x35;
      uVar2 = (*(code *)PTR_FUN_8c06b998)(ar4 + DAT_8c06b994,iVar7,a6,iVar8);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06b9a4) = uVar2;
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)((int)
                                                  aiStack_10c + DAT_8c06b9a4) + 0x2c) + 0x30) + 0x30
                                                  ) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c)
                                            + 0x30) + 0x30) + 0x30) + 0x30) + 0x2c) = 0x37;
    }
    else {
      uVar2 = (*(code *)PTR_FUN_8c06bc3c)(ar4 + DAT_8c06bc38,iVar8,a6,iVar7);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06bc40) = uVar2;
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)((int)aiStack_10c + DAT_8c06bc40) + 0x2c) + 0x30) + 0x30
                 ) + 0x2c) = 0x2d;
      uVar2 = (*(code *)PTR_FUN_8c06bc3c)(ar4 + DAT_8c06bc38,iVar8,a6,iVar7);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06bc44) = uVar2;
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)((int)aiStack_10c + DAT_8c06bc44) + 0x2c) +
                                   0x30) + 0x30) + 0x2c) + 0x2c) = 0x2c;
      uVar2 = (*(code *)PTR_FUN_8c06bc3c)(ar4 + DAT_8c06bc38,iVar8,a6,iVar7);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06bc48) = uVar2;
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)((int)aiStack_10c + DAT_8c06bc48) +
                                                     0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) + 0x2c) =
           0x2c;
      uVar2 = (*(code *)PTR_FUN_8c06bc3c)(ar4 + DAT_8c06bc38,iVar8,a6,iVar7);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06bc4c) = uVar2;
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)((int)aiStack_10c +
                                                                       DAT_8c06bc4c) + 0x2c) + 0x30)
                                            + 0x30) + 0x2c) + 0x2c) + 0x2c) + 0x2c) = 0x2c;
      uVar2 = (*(code *)PTR_FUN_8c06bc3c)(ar4 + DAT_8c06bc38,iVar8,a6,iVar7);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06bc50) = uVar2;
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)((int)
                                                  aiStack_10c + DAT_8c06bc50) + 0x2c) + 0x30) + 0x30
                                                  ) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c)
           = 0x3f;
      uVar2 = (*(code *)PTR_FUN_8c06bc3c)(ar4 + DAT_8c06bc38,iVar8,a6,iVar7);
      *(undefined4 *)((int)aiStack_10c + DAT_8c06bc54) = uVar2;
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)((
                                                  int)aiStack_10c + DAT_8c06bc54) + 0x2c) + 0x30) +
                                                  0x30) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                 0x2c) + 0x2c) = 0x3f;
      iStack_90 = (*(code *)PTR_FUN_8c06bc3c)(ar4 + DAT_8c06bc38,iVar8,a6,iVar7);
      a5 = *(undefined4 **)
            (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(
                                                  iStack_90 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c)
                                                + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30);
      *a5 = 0x3d;
      iStack_94 = (*(code *)PTR_FUN_8c06bc3c)(ar4 + DAT_8c06bc38,a5,a6,iVar7);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(
                                                  iStack_94 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c)
                                                  + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x2c) =
           0x3f;
      iStack_98 = (*(code *)PTR_FUN_8c06bc3c)(ar4 + DAT_8c06bc38,a5,a6,iVar7);
      iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(iStack_98 + 0x2c) + 0x30) + 0x30) + 0x2c);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar8 + 0x2c) + 0x2c) + 0x2c) + 0x2c)
                          + 0x2c) + 0x30) + 0x30) = 0x3d;
      iStack_9c = (*(code *)PTR_FUN_8c06bc3c)(ar4 + DAT_8c06bc38,iVar8,a6,iVar7);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(iStack_9c + 0x2c) + 0x30) + 0x30) + 0x2c)
                                                  + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) +
                 0x30) + 0x2c) = 0x3f;
      iStack_a0 = (*(code *)PTR_FUN_8c06bc3c)(ar4 + DAT_8c06bc38,iVar8,a6,iVar7);
      iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int
                                                                                                 *)(
                                                  *(int *)(iStack_a0 + 0x2c) + 0x30) + 0x30) + 0x2c)
                                                  + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) +
                      0x30);
      **(undefined4 **)(iVar8 + 0x30) = 0x3d;
      iVar7 = ar4 + DAT_8c06bc38;
      iStack_a4 = (*(code *)PTR_FUN_8c06bc3c)(iVar7,iVar7,a6,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(iStack_a4 + 0x2c) + 0x30) + 0x30)
                                                  + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                   0x30) + 0x30) + 0x30) + 0x2c) = 0x3f;
      iStack_a8 = (*(code *)PTR_FUN_8c06bc3c)(ar4 + DAT_8c06bc38,iVar7,a6,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(iStack_a8 + 0x2c) + 0x30) + 0x30)
                                                  + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                   0x30) + 0x30) + 0x30) + 0x30) = 0x3d;
      iStack_ac = (*(code *)PTR_FUN_8c06bc3c)(ar4 + DAT_8c06bc38,iVar7,a6,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(iStack_ac + 0x2c) + 0x30
                                                                  ) + 0x30) + 0x2c) + 0x2c) + 0x2c)
                                                  + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x30) + 0x30) +
                 0x30) + 0x2c) = 0x3f;
    }
    iVar7 = 0;
    while( true ) {
      uVar2 = 4;
      iStack_fc = (*(code *)PTR_libgcc_divide_helper_01031c_8c06bf5c)
                            (*(undefined4 *)(DAT_8c06bf58 + ar4),4,a6,iVar8);
      iStack_f8 = iStack_fc;
      if (iStack_fc * 2 + 3 <= iVar7) break;
      switch(iVar7) {
      case 0:
        iStack_b0 = (*(code *)PTR_FUN_8c06bcc8)(ar4 + DAT_8c06bcc4,uVar2,a6,iVar8);
        unaff_r13 = *(undefined4 *)(*(int *)(*(int *)(*(int *)(iStack_b0 + 0x2c) + 0x2c) + 4) + 4);
        break;
      case 1:
        iStack_b4 = (*(code *)PTR_FUN_8c06bcf8)(ar4 + DAT_8c06bcf4,uVar2,a6,iVar8);
        unaff_r13 = *(undefined4 *)
                     (*(int *)(*(int *)(*(int *)(*(int *)(iStack_b4 + 0x2c) + 0x2c) + 0x30) + 4) + 4
                     );
        break;
      case 2:
        iStack_b8 = (*(code *)PTR_FUN_8c06bd28)(ar4 + DAT_8c06bd24,uVar2,a6,iVar8);
        unaff_r13 = *(undefined4 *)
                     (*(int *)(*(int *)(*(int *)(*(int *)(iStack_b8 + 0x2c) + 0x30) + 0x2c) + 4) + 4
                     );
        break;
      case 3:
        iStack_bc = (*(code *)PTR_FUN_8c06bd5c)(ar4 + DAT_8c06bd58,uVar2,a6,iVar8);
        unaff_r13 = *(undefined4 *)
                     (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iStack_bc + 0x2c) + 0x2c) + 0x30)
                                       + 0x30) + 4) + 4);
        break;
      case 4:
        iStack_c0 = (*(code *)PTR_FUN_8c06bd90)(ar4 + DAT_8c06bd8c,uVar2,a6,iVar8);
        unaff_r13 = *(undefined4 *)
                     (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iStack_c0 + 0x2c) + 0x30) + 0x2c)
                                       + 0x30) + 4) + 4);
        break;
      case 5:
        iStack_c4 = (*(code *)PTR_FUN_8c06bdc4)(ar4 + DAT_8c06bdc0,uVar2,a6,iVar8);
        unaff_r13 = *(undefined4 *)
                     (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iStack_c4 + 0x2c) + 0x2c
                                                                  ) + 0x30) + 0x30) + 0x30) + 4) + 4
                     );
        break;
      case 6:
        iStack_c8 = (*(code *)PTR_FUN_8c06bdf8)(ar4 + DAT_8c06bdf4,uVar2,a6,iVar8);
        unaff_r13 = *(undefined4 *)
                     (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iStack_c8 + 0x2c) + 0x30
                                                                  ) + 0x2c) + 0x30) + 0x30) + 4) + 4
                     );
        break;
      case 7:
        iStack_cc = (*(code *)PTR_FUN_8c06be2c)(ar4 + DAT_8c06be28,uVar2,a6,iVar8);
        unaff_r13 = *(undefined4 *)
                     (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iStack_cc +
                                                                                    0x2c) + 0x2c) +
                                                                  0x30) + 0x30) + 0x30) + 0x30) + 4)
                     + 4);
        break;
      case 8:
        iStack_d0 = (*(code *)PTR_FUN_8c06bf50)(ar4 + DAT_8c06bf4c,uVar2,a6,iVar8);
        unaff_r13 = *(undefined4 *)
                     (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(
                                                  iStack_d0 + 0x2c) + 0x2c) + 0x30) + 0x30) + 0x30)
                                                + 0x30) + 0x30) + 4) + 4);
      }
      iStack_d4 = (*(code *)PTR_LAB_8c06bf54)(unaff_r13,8,a6,iVar8);
      if (iStack_d4 != 0) {
        puVar4 = (ushort *)(iStack_d4 + 2);
        uVar1 = *puVar4;
        iStack_ec = (*(code *)PTR_libgcc_divide_helper_01031c_8c06bf5c)
                              (*(undefined4 *)(DAT_8c06bf58 + ar4),4,a6,iVar8);
        iStack_f0 = (int)*(char *)(DAT_8c06bf60 + ar4 + iVar7) + iVar7 * 3;
        *puVar4 = *(short *)(PTR_DAT_8c06bf64 + iStack_f0 * 2 + iStack_ec * 0x36) +
                  (uVar1 & (ushort)DAT_8c06bf68);
        iStack_f4 = iVar7;
        iStack_e8 = iStack_ec;
      }
      iVar7 = iVar7 + 1;
    }
    (*(code *)PTR_FUN_8c06bf70)(ar4 + DAT_8c06bf6c,uVar2,a6,iVar8);
    uStack_d8 = (*(code *)PTR_FUN_8c06bf50)(ar4 + DAT_8c06bf4c,uVar2,a6,iVar8);
    aiStack_10c[3] = *(int *)(DAT_8c06bf74 + ar4);
    iStack_dc = (*(code *)PTR_deref_u32_8c06bf80)
                          (*(int *)(DAT_8c06bf7c + *(int *)(DAT_8c06bf78 + ar4)) +
                           aiStack_10c[3] * 4,uVar2,a6,iVar8);
    aiStack_10c[2] = *(int *)(DAT_8c06bf74 + ar4);
    a6 = (*(code *)PTR_FUN_8c06bf88)
                   (*(int *)(DAT_8c06bf84 + *(int *)(DAT_8c06bf78 + ar4)) + aiStack_10c[2] * 4,uVar2
                    ,a6,iVar8);
    iVar8 = iStack_dc;
    iVar7 = a6;
    iStack_e0 = a6;
    (*(code *)PTR_FUN_8c06bf90)(uStack_d8,iStack_dc,a6,a6);
  }
  (*(code *)PTR_FUN_8c06c040)(1,iVar8,a6,iVar7);
  uVar2 = (*(code *)PTR_FUN_8c06c048)(PTR_DAT_8c06c044,iVar8,a6,iVar7);
  return uVar2;
}



/* FUN_8c06c04c @ 8c06c04c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06c04c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c06c0ac)
            (*(int *)(DAT_8c06c0a4 + ar4) + *(int *)(DAT_8c06c0a0 + ar4) * DAT_8c06c0a8 + 0x78,ar5,
             ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c06c0b0)
                    (*(int *)(DAT_8c06c0a4 + ar4) + *(int *)(DAT_8c06c0a0 + ar4) * DAT_8c06c0a8 +
                     0x70,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c06c0b4)(uVar1,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c06c0b8 @ 8c06c0b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06c0b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c06c118)
            (*(int *)(DAT_8c06c110 + ar4) + *(int *)(DAT_8c06c10c + ar4) * DAT_8c06c114 + 0x78,ar5,
             ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c06c11c)
                    (*(int *)(DAT_8c06c110 + ar4) + *(int *)(DAT_8c06c10c + ar4) * DAT_8c06c114 +
                     0x70,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c06c120)(uVar1,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c06c124 @ 8c06c124 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06c124(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c06c138;
}



/* FUN_8c06c13c @ 8c06c13c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c06c13c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c06c144;
}



/* s_herb3_pvm_06c14c @ 8c06c148 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_herb3_pvm_06c14c(undefined *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined *a6;
  uint uVar3;
  undefined *a7;
  char in_FPSCR_SZ;
  uint auStack_b0 [7];
  undefined *puStack_94;
  int iStack_90;
  int iStack_8c;
  undefined *puStack_88;
  int iStack_84;
  int iStack_80;
  undefined *puStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  
  uVar2 = *(undefined4 *)(PTR_DAT_8c06c304 + 4);
  auStack_b0[0] = ar5;
  *(undefined4 *)((int)auStack_b0 + DAT_8c06c300) = *(undefined4 *)PTR_DAT_8c06c304;
  uVar3 = auStack_b0[0];
  *(undefined4 *)((int)auStack_b0 + DAT_8c06c300 + 4) = uVar2;
  uVar2 = *(undefined4 *)(PTR_DAT_8c06c304 + 0xc);
  *(undefined4 *)((int)auStack_b0 + DAT_8c06c300 + 8) = *(undefined4 *)(PTR_DAT_8c06c304 + 8);
  *(undefined4 *)((int)auStack_b0 + DAT_8c06c300 + 0xc) = uVar2;
  uVar2 = *(undefined4 *)(PTR_DAT_8c06c304 + 0x14);
  *(undefined4 *)((int)auStack_b0 + DAT_8c06c300 + 0x10) = *(undefined4 *)(PTR_DAT_8c06c304 + 0x10);
  *(undefined4 *)((int)auStack_b0 + DAT_8c06c300 + 0x14) = uVar2;
  uVar2 = *(undefined4 *)(PTR_DAT_8c06c304 + 0x1c);
  *(undefined4 *)((int)auStack_b0 + DAT_8c06c300 + 0x18) = *(undefined4 *)(PTR_DAT_8c06c304 + 0x18);
  *(undefined4 *)((int)&puStack_94 + DAT_8c06c300) = uVar2;
  (*(code *)PTR_FUN_8c06c308)(ar4,auStack_b0[0],ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c06c30c)(ar4 + 0x30,uVar3 + 0x1c,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(uVar3 + 0x2c);
    *(undefined4 *)(ar4 + 0x54) = *(undefined4 *)(uVar3 + 0x30);
    *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)(uVar3 + 0x34);
    *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(uVar3 + 0x38);
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(uVar3 + 0x38);
    *(undefined4 *)(ar4 + 100) = *(undefined4 *)(uVar3 + 0x38);
  }
  else {
    *(undefined8 *)(ar4 + 0x50) = *(undefined8 *)(uVar3 + 0x2c);
    *(undefined8 *)(ar4 + 0x54) = *(undefined8 *)(uVar3 + 0x30);
    *(undefined8 *)(ar4 + 0x58) = *(undefined8 *)(uVar3 + 0x34);
    *(undefined8 *)(ar4 + 0x5c) = *(undefined8 *)(uVar3 + 0x38);
    *(undefined8 *)(ar4 + 0x60) = *(undefined8 *)(uVar3 + 0x38);
    *(undefined8 *)(ar4 + 100) = *(undefined8 *)(uVar3 + 0x38);
  }
  a7 = PTR_Vec3_assign_8c06c30c;
  (*(code *)PTR_Vec3_assign_8c06c30c)(ar4 + DAT_8c06c310,uVar3 + 0x4c,ar6,PTR_Vec3_assign_8c06c30c);
  (*(code *)PTR_vec3_copy_8c023d8c_8c06c318)
            (ar4 + DAT_8c06c314,uVar3 + 0x5c,PTR_vec3_copy_8c023d8c_8c06c318,a7);
  *(int *)(ar4 + DAT_8c06c31c) = (int)*(char *)(uVar3 + 0x68);
  *(int *)(ar4 + DAT_8c06c320) = (int)*(char *)(uVar3 + 0x69);
  *(int *)(ar4 + DAT_8c06c324) = (int)*(char *)(uVar3 + 0x6a);
  *(int *)(ar4 + DAT_8c06c328) = (int)*(char *)(uVar3 + 0x6b);
  *(int *)(ar4 + DAT_8c06c32c) = (int)*(char *)(uVar3 + 0x6c);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c06c330) = *(undefined4 *)(uVar3 + 0x70);
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c06c330) = *(undefined8 *)(uVar3 + 0x70);
  }
  *(undefined2 *)(ar4 + DAT_8c06c334) = *(undefined2 *)(uVar3 + 0x74);
  *(undefined2 *)(ar4 + DAT_8c06c338) = *(undefined2 *)(uVar3 + 0x76);
  a6 = DAT_8c06c33c;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + (int)DAT_8c06c33c) = *(undefined4 *)(uVar3 + 0x78);
  }
  else {
    *(undefined8 *)(ar4 + (int)DAT_8c06c33c) = *(undefined8 *)(uVar3 + 0x78);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c06c340) = *(undefined4 *)(uVar3 + 0x7c);
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c06c340) = *(undefined8 *)(uVar3 + 0x7c);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c06c344) = *(undefined4 *)(uVar3 + DAT_8c06c348);
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c06c344) = *(undefined8 *)(uVar3 + DAT_8c06c348);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c06c34c) = *(undefined4 *)(uVar3 + DAT_8c06c300);
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c06c34c) = *(undefined8 *)(uVar3 + DAT_8c06c300);
  }
  uStack_34 = (*(code *)PTR_libgcc_divide_helper_01031c_8c06c350)
                        (*(undefined4 *)(ar4 + DAT_8c06c31c),4,a6,a7);
  *(undefined4 *)((int)auStack_b0 + DAT_8c06c348) = uStack_34;
  *(int *)(ar4 + DAT_8c06c354) =
       *(int *)((int)auStack_b0 + DAT_8c06c348) * 2 + *(int *)((int)auStack_b0 + DAT_8c06c348) + 2;
  if (*(int *)(ar4 + DAT_8c06c328) == 0) {
    if (*(int *)(ar4 + DAT_8c06c32c) == 3) {
      iVar1 = *(int *)(ar4 + DAT_8c06c320);
      if (iVar1 == 0) {
        *DAT_8c06c39c = *DAT_8c06c39c + 1;
        iStack_38 = *(int *)(ar4 + DAT_8c06c3a0);
        *(undefined4 *)(DAT_8c06c3a4 + iStack_38 * 8) = 1;
        iStack_3c = *(int *)(ar4 + DAT_8c06c3a0);
        *(undefined **)(iStack_3c * 8 + DAT_8c06c3a4 + 4) = ar4;
      }
      else if (iVar1 == 1) {
        if (*(int *)(ar4 + DAT_8c06c3c4) < 4) {
          *DAT_8c06c3c8 = *DAT_8c06c3c8 + 1;
        }
        else {
          *DAT_8c06c40c = *DAT_8c06c40c + 1;
        }
        iStack_40 = *(int *)(ar4 + DAT_8c06c410);
        *(undefined4 *)(DAT_8c06c414 + iStack_40 * 8) = 1;
        iStack_44 = *(int *)(ar4 + DAT_8c06c410);
        *(undefined **)(iStack_44 * 8 + DAT_8c06c414 + 4) = ar4;
      }
      else if (iVar1 == 2) {
        *DAT_8c06c458 = *DAT_8c06c458 + 1;
        iStack_48 = *(int *)(ar4 + DAT_8c06c45c);
        *(undefined4 *)(DAT_8c06c460 + iStack_48 * 8) = 1;
        iStack_4c = *(int *)(ar4 + DAT_8c06c45c);
        *(undefined **)(iStack_4c * 8 + DAT_8c06c460 + 4) = ar4;
      }
    }
    else {
      *DAT_8c06c498 = *DAT_8c06c498 + 1;
      if ((*(int *)(ar4 + DAT_8c06c49c) == 1) || (*(int *)(ar4 + DAT_8c06c49c) == 2)) {
        iVar1 = *(int *)(ar4 + DAT_8c06c4a0);
        if (iVar1 == 0) {
          iStack_50 = *(int *)(ar4 + DAT_8c06c4c0);
          *(undefined4 *)(DAT_8c06c4c4 + iStack_50 * 8) = 1;
        }
        else if (iVar1 == 1) {
          iStack_54 = *(int *)(ar4 + DAT_8c06c4e4);
          *(undefined4 *)(DAT_8c06c4e8 + iStack_54 * 8) = 1;
        }
        else if (iVar1 == 2) {
          iStack_58 = *(int *)(ar4 + DAT_8c06c508);
          *(undefined4 *)(DAT_8c06c50c + iStack_58 * 8) = 1;
        }
      }
    }
  }
  else {
    if (*(int *)(ar4 + DAT_8c06c534) < 4) {
      switch(*(undefined4 *)(ar4 + DAT_8c06c538)) {
      case 0:
      case 1:
      case 2:
      case 3:
        *DAT_8c06c564 = *DAT_8c06c564 + 1;
        break;
      case 4:
        *DAT_8c06c580 = *DAT_8c06c580 + 1;
        *DAT_8c06c584 = *DAT_8c06c584 + 1;
        break;
      case 5:
        *DAT_8c06c5c8 = *DAT_8c06c5c8 + 1;
      }
      iStack_5c = *(int *)(ar4 + DAT_8c06c5cc);
      *(undefined4 *)(DAT_8c06c5d0 + iStack_5c * 8) = 1;
      iStack_60 = *(int *)(ar4 + DAT_8c06c5cc);
      *(undefined **)(iStack_60 * 8 + DAT_8c06c5d0 + 4) = ar4;
    }
    else {
      iVar1 = *(int *)(ar4 + DAT_8c06c5e8);
      if (iVar1 == 0) {
        *DAT_8c06c62c = *DAT_8c06c62c + 1;
        iStack_64 = *(int *)(ar4 + DAT_8c06c630);
        *(undefined4 *)(DAT_8c06c634 + iStack_64 * 8) = 1;
        iStack_68 = *(int *)(ar4 + DAT_8c06c630);
        *(undefined **)(iStack_68 * 8 + DAT_8c06c634 + 4) = ar4;
      }
      else if (iVar1 == 1) {
        *DAT_8c06c678 = *DAT_8c06c678 + 1;
        iStack_6c = *(int *)(ar4 + DAT_8c06c67c);
        *(undefined4 *)(DAT_8c06c680 + iStack_6c * 8) = 1;
        iStack_70 = *(int *)(ar4 + DAT_8c06c67c);
        *(undefined **)(iStack_70 * 8 + DAT_8c06c680 + 4) = ar4;
      }
      else if (iVar1 == 2) {
        *DAT_8c06c6c8 = *DAT_8c06c6c8 + 1;
        iStack_74 = *(int *)(ar4 + DAT_8c06c6cc);
        *(undefined4 *)(DAT_8c06c6d0 + iStack_74 * 8) = 1;
        iStack_78 = *(int *)(ar4 + DAT_8c06c6cc);
        *(undefined **)(iStack_78 * 8 + DAT_8c06c6d0 + 4) = ar4;
      }
    }
    if (*(int *)(ar4 + DAT_8c06c6d4) != 0) {
      if (*(int *)(ar4 + DAT_8c06c6d4) == 1) {
        puStack_7c = ar4;
        iStack_84 = (*(code *)PTR_libgcc_divide_helper_01031c_8c06c718)
                              (*(undefined4 *)(ar4 + DAT_8c06c714),4,a6,a7);
        iStack_80 = iStack_84;
        a6 = (undefined *)
             (*(uint *)(puStack_7c + DAT_8c06c71c) &
             ~*(uint *)((int)auStack_b0 + iStack_84 * 4 + DAT_8c06c720));
        *(undefined **)(puStack_7c + DAT_8c06c71c) = a6;
        a7 = puStack_7c;
      }
      else {
        puStack_88 = ar4;
        iStack_90 = (*(code *)PTR_libgcc_divide_helper_01031c_8c06c844)
                              (*(undefined4 *)(ar4 + DAT_8c06c840),4,a6,a7);
        iStack_8c = iStack_90;
        uVar3 = *(uint *)(puStack_88 + DAT_8c06c848) &
                ~*(uint *)((int)auStack_b0 + iStack_90 * 4 + DAT_8c06c84c);
        *(uint *)(puStack_88 + DAT_8c06c848) = uVar3;
        puStack_94 = ar4;
        auStack_b0[5] =
             (*(code *)PTR_libgcc_divide_helper_01031c_8c06c844)
                       (*(undefined4 *)(ar4 + DAT_8c06c840),4,uVar3,a7);
        auStack_b0[6] = auStack_b0[5];
        *(uint *)(puStack_94 + DAT_8c06c848) =
             *(uint *)(puStack_94 + DAT_8c06c848) &
             ~*(uint *)((int)auStack_b0 + auStack_b0[5] * 4 + DAT_8c06c84c + 0x10);
        a6 = puStack_94;
      }
    }
  }
  *(int *)(ar4 + DAT_8c06c850) = DAT_8c06c854;
  auStack_b0[3] =
       (*(code *)PTR_libgcc_divide_helper_01031c_8c06c844)
                 (*(undefined4 *)(ar4 + DAT_8c06c840),4,a6,a7);
  *(undefined4 *)(DAT_8c06c858 + DAT_8c06c854) =
       *(undefined4 *)(PTR_PTR_8c06c85c + auStack_b0[3] * 4);
  auStack_b0[4] = auStack_b0[3];
  iVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c06c844)
                    (*(undefined4 *)(ar4 + DAT_8c06c840),4,a6,a7);
  *(undefined4 *)(DAT_8c06c860 + DAT_8c06c854) = *(undefined4 *)(PTR_PTR_8c06c864 + iVar1 * 4);
  *(undefined **)(DAT_8c06c868 + DAT_8c06c854) = PTR_PTR_8c06c86c;
  *(undefined **)(DAT_8c06c870 + DAT_8c06c854) = PTR_PTR_8c06c874;
  *(undefined4 *)(DAT_8c06c878 + DAT_8c06c854) = *(undefined4 *)PTR_PTR_8c06c87c;
  *(undefined4 *)(DAT_8c06c880 + DAT_8c06c854) = *(undefined4 *)(PTR_PTR_8c06c87c + 4);
  *(undefined4 *)(DAT_8c06c884 + DAT_8c06c854) = 0x12;
  *(undefined4 *)(DAT_8c06c888 + DAT_8c06c854) = 0x16;
  *(undefined4 *)(DAT_8c06c88c + DAT_8c06c854) = DAT_8c06c890;
  iVar1 = DAT_8c06c894;
  *(undefined4 *)(DAT_8c06c894 + DAT_8c06c854) = DAT_8c06c898;
  return iVar1;
}



/* FUN_8c06c89c @ 8c06c89c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c06c89c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char in_FPSCR_SZ;
  
  if ((*(int *)(DAT_8c06c97c + ar4) != 0) || (iVar1 = *(int *)(DAT_8c06c980 + ar4), iVar1 != 7)) {
    (*(code *)PTR_FUN_8c06c984)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c06c98c)(ar5 + 0x4c,ar4 + DAT_8c06c988,ar6,ar7);
    (*(code *)PTR_vec3_copy_8c023d8c_8c06c994)(ar5 + 0x5c,ar4 + DAT_8c06c990,ar6,ar7);
    *(char *)(ar5 + 0x68) = (char)*(undefined4 *)(DAT_8c06c998 + ar4);
    *(char *)(ar5 + 0x69) = (char)*(undefined4 *)(DAT_8c06c99c + ar4);
    *(char *)(ar5 + 0x6a) = (char)*(undefined4 *)(DAT_8c06c9a0 + ar4);
    *(char *)(ar5 + 0x6b) = (char)*(undefined4 *)(DAT_8c06c97c + ar4);
    *(char *)(ar5 + 0x6c) = (char)*(undefined4 *)(DAT_8c06c980 + ar4);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar5 + 0x70) = *(undefined4 *)(ar4 + DAT_8c06c9a4);
    }
    else {
      *(undefined8 *)(ar5 + 0x70) = *(undefined8 *)(ar4 + DAT_8c06c9a4);
    }
    *(undefined2 *)(ar5 + 0x74) = *(undefined2 *)(DAT_8c06c9a8 + ar4);
    *(undefined2 *)(ar5 + 0x76) = *(undefined2 *)(DAT_8c06c9ac + ar4);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar5 + 0x78) = *(undefined4 *)(ar4 + DAT_8c06c9b0);
    }
    else {
      *(undefined8 *)(ar5 + 0x78) = *(undefined8 *)(ar4 + DAT_8c06c9b0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar5 + 0x7c) = *(undefined4 *)(ar4 + DAT_8c06c9b4);
    }
    else {
      *(undefined8 *)(ar5 + 0x7c) = *(undefined8 *)(ar4 + DAT_8c06c9b4);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar5 + DAT_8c06c9b8) = *(undefined4 *)(ar4 + DAT_8c06c9bc);
    }
    else {
      *(undefined8 *)(ar5 + DAT_8c06c9b8) = *(undefined8 *)(ar4 + DAT_8c06c9bc);
    }
    iVar1 = DAT_8c06c9c4;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar5 + DAT_8c06c9c0) = *(undefined4 *)(ar4 + DAT_8c06c9c4);
    }
    else {
      *(undefined8 *)(ar5 + DAT_8c06c9c0) = *(undefined8 *)(ar4 + DAT_8c06c9c4);
    }
  }
  return iVar1;
}



/* FUN_8c06c9c8 @ 8c06c9c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c06c9c8(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(ar4 + 0x24) = *ar5;
  (*(code *)PTR_vec3_copy_8c023d8c_8c06ca20)(ar4 + 0x50,ar5 + 1,ar6,ar7);
  (*(code *)PTR_FUN_8c06ca24)(ar4 + 0x5c,ar5 + 4,ar6,ar7);
  *(undefined4 *)(ar4 + 0x74) = ar5[8];
  *(undefined4 *)(DAT_8c06ca28 + ar4) = 3;
  *(undefined4 *)(DAT_8c06ca2c + ar4) = 0xffffffff;
  iVar1 = *DAT_8c06ca30;
  *DAT_8c06ca30 = iVar1 + 1;
  return iVar1 + 1;
}



/* FUN_8c06ca34 @ 8c06ca34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06ca34(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *ar5 = *(undefined4 *)(ar4 + 0x24);
  (*(code *)PTR_vec3_copy_8c023d8c_8c06ca74)(ar5 + 1,ar4 + 0x50,ar6,ar7);
  (*(code *)PTR_FUN_8c06ca78)(ar5 + 4,ar4 + 0x5c,ar6,ar7);
  uVar1 = *(undefined4 *)(ar4 + 0x74);
  ar5[8] = uVar1;
  return uVar1;
}



/* FUN_8c06ca7c @ 8c06ca7c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c06ca7c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char in_FPSCR_SZ;
  
  *(undefined2 *)(DAT_8c06caf0 + ar4) = 0;
  iVar1 = *(int *)(DAT_8c06caf4 + ar4);
  if ((iVar1 == 0) &&
     ((*(int *)(DAT_8c06caf8 + ar4) == 1 || (iVar1 = *(int *)(DAT_8c06caf8 + ar4), iVar1 == 5)))) {
    iVar1 = *(int *)(DAT_8c06cafc + ar4);
    if (iVar1 == 0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x34) = (undefined4)DAT_8c06cb00;
      }
      else {
        *(undefined8 *)(ar4 + 0x34) = CONCAT44(DAT_8c06cb00._4_4_,(undefined4)DAT_8c06cb00);
      }
    }
    else if (iVar1 == 1) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x34) = DAT_8c06cb00._4_4_;
      }
      else {
        *(undefined8 *)(ar4 + 0x34) = CONCAT44(_s_herb_seed_nj_06cb08,DAT_8c06cb00._4_4_);
      }
    }
    else if (iVar1 == 2) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x34) = (undefined4)DAT_8c06cb00;
      }
      else {
        *(undefined8 *)(ar4 + 0x34) = CONCAT44(DAT_8c06cb00._4_4_,(undefined4)DAT_8c06cb00);
      }
    }
    iVar1 = DAT_8c06caf8;
    *(int *)(DAT_8c06caf8 + ar4) = *(int *)(DAT_8c06caf8 + ar4) + 1;
  }
  return iVar1;
}



/* s_herb_seed_nj_06cb08 @ 8c06cb08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_herb_seed_nj_06cb08(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 in_fr1;
  undefined8 uVar3;
  char in_FPSCR_SZ;
  
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    *(undefined4 *)(DAT_8c06cda8 + iVar2 * DAT_8c06cda4) = 0;
    *(undefined4 *)(DAT_8c06cdac + iVar2 * DAT_8c06cda4 + DAT_8c06cda8) = 0;
    *(undefined4 *)(DAT_8c06cdb0 + iVar2 * DAT_8c06cda4 + DAT_8c06cda8) = DAT_8c06cdb4;
    *(undefined4 *)(iVar2 * DAT_8c06cda4 + DAT_8c06cda8 + 0x10) = 0;
    *(undefined2 *)(DAT_8c06cdb8 + iVar2 * DAT_8c06cda4 + DAT_8c06cda8) = 0;
    *(undefined2 *)(DAT_8c06cdbc + iVar2 * DAT_8c06cda4 + DAT_8c06cda8) = 0;
    *(undefined4 *)(iVar2 * DAT_8c06cda4 + DAT_8c06cda8 + 4) = 0;
    *(undefined4 *)(iVar2 * DAT_8c06cda4 + DAT_8c06cda8 + 8) = 0;
    *(undefined4 *)(iVar2 * DAT_8c06cda4 + DAT_8c06cda8 + 0x18) = 0;
    *(undefined4 *)(DAT_8c06cdac + iVar2 * DAT_8c06cda4 + DAT_8c06cda8) = 0;
    *(undefined2 *)(DAT_8c06cdb8 + iVar2 * DAT_8c06cda4 + DAT_8c06cda8) = 0;
    *(undefined4 *)(DAT_8c06cdc0 + iVar2 * DAT_8c06cda4 + DAT_8c06cda8) = 0;
    *(undefined2 *)(DAT_8c06cdbc + iVar2 * DAT_8c06cda4 + DAT_8c06cda8) = 0;
  }
  *(undefined4 *)(DAT_8c06cda8 + 0xc) = *(undefined4 *)PTR_PTR_8c06cdc4;
  *(undefined4 *)(DAT_8c06cda8 + 0x14) = *(undefined4 *)PTR_PTR_8c06cdc8;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c06cda8 + DAT_8c06cdcc) = 0x3f800000;
  }
  else {
    *(undefined8 *)(DAT_8c06cda8 + DAT_8c06cdcc) = CONCAT44(0x3f800000,in_fr1);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar3 = CONCAT44(DAT_8c06cdd4,in_fr1);
    *(undefined4 *)(DAT_8c06cda8 + DAT_8c06cdd0) = DAT_8c06cdd4;
  }
  else {
    uVar3 = CONCAT44(DAT_8c06cdd8,DAT_8c06cdd4);
    *(undefined8 *)(DAT_8c06cda8 + DAT_8c06cdd0) = uVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar3 = CONCAT44(DAT_8c06cddc,(int)uVar3);
    *(undefined4 *)(DAT_8c06cda8 + DAT_8c06cdd8) = DAT_8c06cddc;
  }
  else {
    uVar3 = CONCAT44(DAT_8c06cde0,DAT_8c06cddc);
    *(undefined8 *)(DAT_8c06cda8 + DAT_8c06cdd8) = uVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar3 = CONCAT44(DAT_8c06cde4,(int)uVar3);
    *(undefined4 *)(DAT_8c06cda8 + DAT_8c06cde0) = DAT_8c06cde4;
  }
  else {
    uVar3 = CONCAT44(PTR_PTR_8c06cde8,DAT_8c06cde4);
    *(undefined8 *)(DAT_8c06cda8 + DAT_8c06cde0) = uVar3;
  }
  for (iVar2 = 1; iVar2 < 2; iVar2 = iVar2 + 1) {
    *(undefined **)(iVar2 * DAT_8c06cda4 + DAT_8c06cda8 + 4) = PTR_PTR_8c06cde8;
    *(undefined **)(iVar2 * DAT_8c06cda4 + DAT_8c06cda8 + 8) = PTR_PTR_8c06cdec;
    *(undefined4 *)(iVar2 * DAT_8c06cda4 + DAT_8c06cda8 + 0xc) = *(undefined4 *)PTR_PTR_8c06cdf0;
    *(undefined4 *)(iVar2 * DAT_8c06cda4 + DAT_8c06cda8 + 0x14) = *(undefined4 *)PTR_PTR_8c06cdf4;
    *(undefined4 *)(iVar2 * DAT_8c06cda4 + DAT_8c06cda8 + 0x18) = *(undefined4 *)PTR_PTR_8c06cdf8;
    puVar1 = (undefined8 *)(iVar2 * DAT_8c06cda4 + DAT_8c06cda8 + DAT_8c06cdcc);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,(int)uVar3);
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c06cda4 + DAT_8c06cda8 + DAT_8c06cdd0);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44(DAT_8c06cdd4,(int)uVar3);
      *(undefined4 *)puVar1 = DAT_8c06cdd4;
    }
    else {
      uVar3 = CONCAT44(DAT_8c06cdd8,DAT_8c06cdd4);
      *puVar1 = uVar3;
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c06cda4 + DAT_8c06cda8 + DAT_8c06cdd8);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44(DAT_8c06cddc,(int)uVar3);
      *(undefined4 *)puVar1 = DAT_8c06cddc;
    }
    else {
      uVar3 = CONCAT44(DAT_8c06cde0,DAT_8c06cddc);
      *puVar1 = uVar3;
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c06cda4 + DAT_8c06cda8 + DAT_8c06cde0);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44(DAT_8c06cde4,(int)uVar3);
      *(undefined4 *)puVar1 = DAT_8c06cde4;
    }
    else {
      uVar3 = CONCAT44(PTR_PTR_8c06cde8,DAT_8c06cde4);
      *puVar1 = uVar3;
    }
    *(undefined4 *)(DAT_8c06cdac + iVar2 * DAT_8c06cda4 + DAT_8c06cda8) = DAT_8c06cdfc;
    *(undefined2 *)(DAT_8c06cdb8 + iVar2 * DAT_8c06cda4 + DAT_8c06cda8) = 0xd;
    *(undefined4 *)(DAT_8c06cdc0 + iVar2 * DAT_8c06cda4 + DAT_8c06cda8) = DAT_8c06ce00;
    *(undefined2 *)(DAT_8c06cdbc + iVar2 * DAT_8c06cda4 + DAT_8c06cda8) = 0xd;
  }
  return 2;
}



/* s_GRAPHICS_HERBLINE_06ce12 @ 8c06ce04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_HERBLINE_06ce12(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 a5;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 **a7;
  int *a4;
  int a6;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 auStack_24 [2];
  
  auStack_24[0] = 0;
  puVar8 = (undefined4 *)0x0;
  puStack_28 = (undefined4 *)0x0;
  iVar6 = 0;
  uStack_2c = 0;
  uVar1 = 0;
  for (a6 = 0; a6 < 2; a6 = a6 + 1) {
    iVar4 = *(int *)(DAT_8c06cea0 + ar4) + a6 * DAT_8c06cea4;
    if (*(int *)(iVar4 + 0x18) != 0) {
      puVar8 = (undefined4 *)(ar4 + a6);
      iVar6 = *(int *)PTR_PTR_8c06cea8;
      iVar2 = (*(code *)PTR_FUN_8c06ceac)(ar5,*(undefined4 *)(iVar4 + 0x18),iVar6,puVar8);
      if (iVar2 == 0) {
        puVar8 = (undefined4 *)0x2;
        iVar6 = 0;
        (*(code *)PTR_report_error_message_8c06ceb8)
                  (*(undefined4 *)(iVar4 + 0x18),PTR_s_GRAPHICS_COMMON_8c06ceb0 + DAT_8c06ceb4,0,2);
      }
    }
    for (iVar2 = 0; iVar2 < *(short *)(DAT_8c06cfa0 + iVar4); iVar2 = iVar2 + 1) {
      if (**(char **)(iVar2 * 4 + *(int *)(iVar4 + 4)) == '\0') {
        puVar8 = (undefined4 *)0x2;
        iVar6 = 0;
        (*(code *)PTR_report_error_message_8c06cf94)
                  (PTR_s_GRAPHICS_COMMON_8c06cf88 + DAT_8c06cf90,
                   PTR_s_GRAPHICS_COMMON_8c06cf88 + DAT_8c06cf8c,0,2);
        auStack_24[0] = 0;
      }
      else {
        puVar8 = auStack_24;
        iVar6 = *(int *)PTR_PTR_8c06cf28;
        iVar3 = (*(code *)PTR_FUN_8c06cf2c)
                          (ar5,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar4 + 4)),iVar6,puVar8);
        if (iVar3 == 0) {
          puVar8 = (undefined4 *)0x2;
          iVar6 = 0;
          (*(code *)PTR_report_error_message_8c06cf38)
                    (*(undefined4 *)(iVar2 * 4 + *(int *)(iVar4 + 4)),
                     PTR_s_GRAPHICS_COMMON_8c06cf30 + DAT_8c06cf34,0,2);
        }
      }
      (*(code *)PTR_FUN_8c06cf9c)
                (*(int *)(DAT_8c06cf98 + iVar4) + iVar2 * 4,auStack_24[0],iVar6,puVar8);
    }
    for (iVar2 = 0; iVar2 < *(short *)(DAT_8c06d188 + iVar4); iVar2 = iVar2 + 1) {
      if (**(char **)(iVar2 * 4 + *(int *)(iVar4 + 8)) == '\0') {
        auStack_24[0] = 0;
      }
      else {
        puVar8 = auStack_24;
        iVar6 = *(int *)PTR_PTR_8c06d034;
        iVar3 = (*(code *)PTR_FUN_8c06d038)
                          (ar5,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar4 + 8)),iVar6,puVar8);
        if (iVar3 == 0) {
          puVar8 = (undefined4 *)0x2;
          iVar6 = 0;
          (*(code *)PTR_report_error_message_8c06d044)
                    (*(undefined4 *)(iVar2 * 4 + *(int *)(iVar4 + 8)),
                     PTR_s_GRAPHICS_COMMON_8c06d03c + DAT_8c06d040,0,2);
        }
        (*(code *)PTR_FUN_8c06d054)
                  (*(int *)(DAT_8c06d050 + *(int *)(DAT_8c06d048 + ar4) + a6 * DAT_8c06d04c) +
                   iVar2 * 4,auStack_24[0],iVar6,puVar8);
      }
      (*(code *)PTR_FUN_8c06d184)
                (*(int *)(DAT_8c06d180 + iVar4) + iVar2 * 4,auStack_24[0],iVar6,puVar8);
    }
    a7 = &puStack_28;
    uVar1 = *(undefined4 *)PTR_PTR_8c06d18c;
    iVar6 = (*(code *)PTR_FUN_8c06d190)(ar5,*(undefined4 *)(iVar4 + 0xc),uVar1,a7);
    if (iVar6 == 0) {
      a7 = (undefined4 **)0x2;
      uVar1 = 0;
      (*(code *)PTR_report_error_message_8c06d19c)
                (*(undefined4 *)(iVar4 + 0xc),PTR_s_GRAPHICS_COMMON_8c06d194 + DAT_8c06d198,0,2);
    }
    (*(code *)PTR_FUN_8c06d1a0)(iVar4 + 0x70,puStack_28,uVar1,a7);
    iVar6 = (*(code *)PTR_libgcc_divide_helper_01031c_8c06d1a8)
                      (*(undefined4 *)(DAT_8c06d1a4 + ar4),4,uVar1,a7);
    if (iVar6 == 0) {
      if (*(int *)(iVar4 + 0x20) == 0) {
        puVar8 = &uStack_2c;
        uVar1 = *(undefined4 *)PTR_PTR_8c06d240;
        iVar6 = (*(code *)PTR_FUN_8c06d244)(ar5,*(undefined4 *)(iVar4 + 0xc),uVar1,puVar8);
        if (iVar6 == 0) {
          puVar8 = (undefined4 *)0x2;
          uVar1 = 0;
          (*(code *)PTR_report_error_message_8c06d250)
                    (*(undefined4 *)(iVar4 + 0xc),PTR_s_GRAPHICS_COMMON_8c06d248 + DAT_8c06d24c,0,2)
          ;
        }
        (**(code **)(*(int *)(iVar4 + 0x78) + 8))((int *)(iVar4 + 0x78),uStack_2c,uVar1,puVar8);
        iVar6 = a6;
        (**(code **)(DAT_8c06d254 + *(int *)(ar4 + 8)))(ar4,ar5,a6,puVar8);
        (**(code **)(*(int *)(ar4 + DAT_8c06d258) + 8))
                  ((int *)(ar4 + DAT_8c06d258),uStack_2c,iVar6,puVar8);
      }
      else {
        uVar1 = *(undefined4 *)(iVar4 + 0xc);
        (*(code *)PTR_s_CHerb_SetPVMTexture_s_06d61c_8c06d1ac)(ar4,iVar4 + 0x20,uVar1,a7);
        iVar6 = iVar4 + 0x28;
        (**(code **)(*(int *)(iVar4 + 0x78) + 8))((int *)(iVar4 + 0x78),iVar6,uVar1,a7);
        uVar1 = (*(code *)PTR_get_field_4_0253e4_8c06d1b0)(iVar4 + 0x78,iVar6,uVar1,a7);
        uVar7 = *(undefined4 *)PTR_PTR_8c06d18c;
        puVar5 = *(undefined **)(iVar4 + 0x20);
        iVar6 = (*(code *)PTR_FUN_8c06d1b4)(ar5,puVar5,uVar7,uVar1);
        if (iVar6 == 0) {
          uVar1 = 2;
          uVar7 = 0;
          puVar5 = PTR_s_GRAPHICS_COMMON_8c06d194 + DAT_8c06d1b8;
          (*(code *)PTR_report_error_message_8c06d19c)
                    (PTR_s_GRAPHICS_COMMON_8c06d194 + DAT_8c06d1bc,puVar5,0,2);
        }
        a5 = (*(code *)PTR_get_field_4_0253e4_8c06d1b0)(iVar4 + 0x78,puVar5,uVar7,uVar1);
        (**(code **)(*(int *)(ar4 + DAT_8c06d1c0) + 8))((int *)(ar4 + DAT_8c06d1c0),a5,uVar7,uVar1);
      }
    }
    else if (*(int *)(iVar4 + 0x34) == 0) {
      iVar6 = (*(code *)PTR_FUN_8c06d3cc)
                        (ar5,*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)PTR_PTR_8c06d3c8,&uStack_2c
                        );
      if (iVar6 == 0) {
        (*(code *)PTR_report_error_message_8c06d3d8)
                  (*(undefined4 *)(iVar4 + 0xc),PTR_s_GRAPHICS_COMMON_8c06d3d0 + DAT_8c06d3d4,0,2);
      }
      a4 = (int *)(iVar4 + 0x78);
      (**(code **)(*a4 + 8))(a4,uStack_2c,*(code **)(*a4 + 8),a4);
      iVar6 = a6;
      (**(code **)(DAT_8c06d3dc + *(int *)(ar4 + 8)))(ar4,ar5,a6,a4);
      (**(code **)(*(int *)(ar4 + DAT_8c06d3e0) + 8))
                ((int *)(ar4 + DAT_8c06d3e0),uStack_2c,iVar6,a4);
    }
    else {
      uVar1 = *(undefined4 *)(iVar4 + 0xc);
      (*(code *)PTR_s_CHerb_SetPVMTexture_s_06d61c_8c06d2ec)(ar4,iVar4 + 0x34,uVar1,a7);
      iVar6 = iVar4 + 0x3c;
      (**(code **)(*(int *)(iVar4 + DAT_8c06d2f0) + 8))
                ((int *)(iVar4 + DAT_8c06d2f0),iVar6,uVar1,a7);
      uVar1 = (*(code *)PTR_get_field_4_0253e4_8c06d2f4)(iVar4 + DAT_8c06d2f0,iVar6,uVar1,a7);
      uVar7 = *(undefined4 *)PTR_PTR_8c06d2f8;
      puVar5 = *(undefined **)(iVar4 + 0x34);
      iVar6 = (*(code *)PTR_FUN_8c06d2fc)(ar5,puVar5,uVar7,uVar1);
      if (iVar6 == 0) {
        uVar1 = 2;
        uVar7 = 0;
        puVar5 = PTR_s_GRAPHICS_COMMON_8c06d300 + DAT_8c06d304;
        (*(code *)PTR_report_error_message_8c06d30c)
                  (PTR_s_GRAPHICS_COMMON_8c06d300 + DAT_8c06d308,puVar5,0,2);
      }
      uVar1 = (*(code *)PTR_get_field_4_0253e4_8c06d2f4)(iVar4 + DAT_8c06d2f0,puVar5,uVar7,uVar1);
      (**(code **)(*(int *)(ar4 + DAT_8c06d310) + 8))
                ((int *)(ar4 + DAT_8c06d310),uVar1,DAT_8c06d310,uVar1);
    }
    iVar6 = DAT_8c06d3e4;
    puVar8 = puStack_28;
    uVar1 = (*(code *)PTR_FUN_8c06d3e8)(ar4 + DAT_8c06d3e4,puStack_28,DAT_8c06d3e4,puStack_28);
  }
  return uVar1;
}



/* s_GRAPHICS_HERBLINE_06d3ee @ 8c06d3ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_HERBLINE_06d3ee(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 a7;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_8c06d454 + ar4) + ar6 * DAT_8c06d458;
  a7 = (*(code *)PTR_get_field_4_0253e4_8c06d45c)(iVar2 + 0x78,ar5,ar6,ar7);
  iVar1 = (*(code *)PTR_FUN_8c06d464)
                    (ar5,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)PTR_PTR_8c06d460,a7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_report_error_message_8c06d470)
                      (*(undefined4 *)(iVar2 + 0x14),PTR_s_GRAPHICS_COMMON_8c06d468 + DAT_8c06d46c,0
                       ,2);
  }
  return iVar1;
}



/* s_GRAPHICS_HERBLINE_06d482 @ 8c06d474 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_HERBLINE_06d482(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    iVar3 = *(int *)(DAT_8c06d5ac + ar4) + iVar2 * DAT_8c06d5b0;
    for (iVar4 = 0; iVar4 < *(short *)(DAT_8c06d5c0 + iVar3); iVar4 = iVar4 + 1) {
      if (**(char **)(iVar4 * 4 + *(int *)(iVar3 + 4)) != '\0') {
        ar7 = ar4 + iVar2;
        ar6 = *(undefined4 *)PTR_PTR_8c06d5b4;
        (*(code *)PTR_FUN_8c06d5b8)(ar5,*(undefined4 *)(iVar4 * 4 + *(int *)(iVar3 + 4)),ar6,ar7);
      }
      if (**(char **)(iVar4 * 4 + *(int *)(iVar3 + 8)) != '\0') {
        ar7 = ar4 + iVar2;
        ar6 = *(undefined4 *)PTR_PTR_8c06d5b4;
        (*(code *)PTR_FUN_8c06d5bc)(ar5,*(undefined4 *)(iVar4 * 4 + *(int *)(iVar3 + 8)),ar6,ar7);
      }
    }
    if (*(int *)(iVar3 + 0x18) != 0) {
      ar7 = ar4 + iVar2;
      ar6 = *(undefined4 *)PTR_PTR_8c06d5b4;
      (*(code *)PTR_FUN_8c06d5c4)(ar5,*(undefined4 *)(iVar3 + 0x18),ar6,ar7);
    }
  }
  iVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c06d5cc)
                    (*(undefined4 *)(DAT_8c06d5c8 + ar4),4,ar6,ar7);
  (*(code *)PTR_FUN_8c06d5d4)
            (ar5,*(undefined4 *)(PTR_PTR_8c06d5d0 + iVar2 * 4),*(undefined4 *)PTR_PTR_8c06d5b4,
             ar4 + 1);
  (*(code *)PTR_FUN_8c06d5d4)
            (ar5,*(undefined4 *)PTR_PTR_8c06d5d8,*(undefined4 *)PTR_PTR_8c06d5b4,ar4);
  iVar2 = ar4;
  (*(code *)PTR_FUN_8c06d5dc)
            (ar5,*(undefined4 *)PTR_PTR_8c06d5d8,*(undefined4 *)PTR_PTR_8c06d5b4,ar4);
  uVar1 = (**(code **)(DAT_8c06d5e0 + *(int *)(ar4 + 8)))(ar4,ar5,0,iVar2);
  return uVar1;
}



/* FUN_8c06d5e4 @ 8c06d5e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06d5e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_s_Failed_s_015312_8c06d610)(*(int *)(DAT_8c06d60c + ar4) + 0x78,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_s_Failed_s_015312_8c06d610)(ar4 + DAT_8c06d614,ar5,ar6,ar7);
  return uVar1;
}



/* s_CHerb_SetPVMTexture_s_06d61c @ 8c06d618 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 *
s_CHerb_SetPVMTexture_s_06d61c(undefined4 ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *a5;
  undefined1 auStack_10c [260];
  
  a5 = ar5;
  if (*(int *)(ar5 + 0x10) == 0) {
    (*(code *)PTR_FUN_8c06d6c0)(auStack_10c,ar5,ar6,ar7);
    ar7 = 2;
    ar6 = 0;
    a5 = auStack_10c;
    (*(code *)PTR_report_error_message_8c06d6c8)
              (PTR_s_GRAPHICS_COMMON_8c06d6b8 + DAT_8c06d6c4,a5,0,2);
  }
  if (*(int *)(ar5 + 4) == 0) {
    (*(code *)PTR_FUN_8c06d6c0)(auStack_10c,a5,ar6,ar7);
    (*(code *)PTR_report_error_message_8c06d6c8)
              (PTR_s_GRAPHICS_COMMON_8c06d6b8 + DAT_8c06d6cc,auStack_10c,0,2);
  }
  (*(code *)PTR_FUN_8c06d6d4)
            (ar5 + 8,*(undefined4 *)(ar5 + 0x10),DAT_8c06d6d0,*(undefined4 *)(ar5 + 4));
  return ar5 + 8;
}



/* noop_06d6d8 @ 8c06d6d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_06d6d8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_06d6dc @ 8c06d6dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_06d6dc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_06d6e0 @ 8c06d6e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_06d6e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* ret_const_1_06d6e4 @ 8c06d6e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_06d6e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c06d6ec @ 8c06d6ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06d6ec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(int *)(DAT_8c06d70c + ar4) == 0) && (*(int *)(DAT_8c06d710 + ar4) == 7)) {
    return 1;
  }
  return *(undefined4 *)(DAT_8c06d70c + ar4);
}



/* FUN_8c06d714 @ 8c06d714 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c06d714(undefined4 ar4,int *ar5,undefined **ar6,undefined1 *ar7)

{
  int iVar1;
  int a4;
  undefined4 uVar2;
  undefined1 *a5;
  int iVar3;
  int a6;
  undefined *puVar4;
  undefined *puVar5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_28 [4];
  undefined *puStack_24;
  undefined1 auStack_20 [12];
  
  iVar3 = 0;
  a6 = 0;
  (*(code *)PTR_Vec3_ctor_zero_8c06d7c8)(auStack_28,ar5,ar6,ar7);
  iVar1 = (**(code **)(DAT_8c06d7cc + *ar5))(ar5,10,ar6,ar7);
  while ((a6 < iVar1 && (iVar3 == 0))) {
    a4 = (**(code **)(DAT_8c06d7d0 + *ar5))(ar5,10,a6,ar7);
    ar7 = auStack_20;
    ar6 = &puStack_24;
    a5 = auStack_28;
    (*(code *)PTR_FUN_8c06d7d4)(a4,a5,ar6,ar7);
    uVar2 = (**(code **)(DAT_8c06d7d8 + *(int *)(a4 + 8)))(a4,a5,ar6,ar7);
    if ((short)uVar2 == 2) {
      puVar4 = DAT_8c06d7dc;
      puVar5 = PTR_Vec3_dtor_8c06d7e0;
      if (in_FPSCR_SZ == '\0') {
        puVar4 = puStack_24;
        puVar5 = DAT_8c06d7dc;
      }
      if (in_FPSCR_PR != '\0' || (float)puVar5 <= (float)puVar4) {
        iVar3 = 1;
      }
    }
    a6 = a6 + 1;
  }
  (*(code *)PTR_Vec3_dtor_8c06d7e0)(auStack_28,0xffffffff,ar6,ar7);
  return iVar3;
}



/* ret_const_0_06d7e4 @ 8c06d7e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_06d7e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* noop_06d7ec @ 8c06d7ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_06d7ec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_06d7f0 @ 8c06d7f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_06d7f0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_06d7f4 @ 8c06d7f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_06d7f4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_06d7f8 @ 8c06d7f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_06d7f8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_06d7fc @ 8c06d7fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_06d7fc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_06d800 @ 8c06d800 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_06d800(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_06d804 @ 8c06d804 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_06d804(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_06d808 @ 8c06d808 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_06d808(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_06d80c @ 8c06d80c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_06d80c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_06d810 @ 8c06d810 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_06d810(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_06d814 @ 8c06d814 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_06d814(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* ret_const_0_06d818 @ 8c06d818 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_06d818(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_3f800000_06d820 @ 8c06d820 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_3f800000_06d820(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* ret_const_3f800000_06d828 @ 8c06d828 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_3f800000_06d828(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* ret_const_0_06d830 @ 8c06d830 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_06d830(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c06d838 @ 8c06d838 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06d838(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_00000000;
  undefined1 auStack_10 [16];
  
  (*(code *)PTR_Vec3_set_zero_8c06d864)(auStack_10,ar5,ar6,ar7);
  (*(code *)PTR_vec3_copy_8c02b5fc_8c06d868)(in_stack_00000000,auStack_10,ar6,ar7);
  (*(code *)PTR_object_dtor_delete_8c06d86c)(auStack_10,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c06d870 @ 8c06d870 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c06d870(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c06d878;
}



/* ret_const_0_06d87c @ 8c06d87c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_06d87c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_06d884 @ 8c06d884 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_06d884(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c06d88c @ 8c06d88c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c06d88c(undefined4 ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar5 = (undefined4)DAT_8c06d89c;
  }
  else {
    *ar5 = CONCAT44(DAT_8c06d89c._4_4_,(undefined4)DAT_8c06d89c);
  }
  return 0x8c06d8a0;
}



/* ret_const_0_06d8a4 @ 8c06d8a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_06d8a4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_06d8ac @ 8c06d8ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_06d8ac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_06d8b4 @ 8c06d8b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_06d8b4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_06d8bc @ 8c06d8bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_06d8bc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* ret_const_ffffffff_06d8c4 @ 8c06d8c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_ffffffff_06d8c4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0xffffffff;
}



/* noop_06d8cc @ 8c06d8cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_06d8cc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_06d8d0 @ 8c06d8d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_06d8d0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* ret_const_0_06d8d4 @ 8c06d8d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_06d8d4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_1_06d8dc @ 8c06d8dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_06d8dc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c06d8e4 @ 8c06d8e4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c06d8e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *a7;
  char in_FPSCR_SZ;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  
  uStack_138 = (*(code *)PTR_Vec3_ctor_xyz_8c06dcb0)(PTR_DAT_8c06dcac,ar5,ar6,ar7);
  uVar3 = DAT_8c06dcb4;
  (*(code *)PTR_global_list_push_8c06dcbc)(uStack_138,PTR_Vec3_dtor_8c06dcb8,DAT_8c06dcb4,ar7);
  uStack_13c = (*(code *)PTR_Vec3_ctor_xyz_8c06dcb0)
                         (PTR_DAT_8c06dcc0,PTR_Vec3_ctor_xyz_8c06dcb0,uVar3,ar7);
  puVar1 = PTR_Vec3_dtor_8c06dcb8;
  uVar3 = DAT_8c06dcc4;
  (*(code *)PTR_global_list_push_8c06dcbc)(uStack_13c,PTR_Vec3_dtor_8c06dcb8,DAT_8c06dcc4,ar7);
  uStack_140 = (*(code *)PTR_Vec3_ctor_xyz_8c06dcb0)(PTR_DAT_8c06dcc8,puVar1,uVar3,ar7);
  uVar3 = DAT_8c06dccc;
  (*(code *)PTR_global_list_push_8c06dcbc)(uStack_140,PTR_Vec3_dtor_8c06dcb8,DAT_8c06dccc,ar7);
  uStack_144 = (*(code *)PTR_Vec3_ctor_xyz_8c06dcb0)
                         (PTR_DAT_8c06dcd0,PTR_Vec3_ctor_xyz_8c06dcb0,uVar3,ar7);
  (*(code *)PTR_global_list_push_8c06dcbc)(uStack_144,PTR_Vec3_dtor_8c06dcb8,DAT_8c06dcd4,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c06dcd8 = *(undefined4 *)DAT_8c06dcdc;
  }
  else {
    *(undefined8 *)PTR_DAT_8c06dcd8 = *DAT_8c06dcdc;
  }
  uVar3 = DAT_8c06dce0;
  (*(code *)PTR_FUN_8c06dcf0)(DAT_8c06dcec,PTR_FUN_8c06dce8,PTR_FUN_8c06dce4,DAT_8c06dce0);
  (*(code *)PTR_global_list_push_8c06dcbc)(0,PTR_FUN_8c06dcf8,DAT_8c06dcf4,uVar3);
  uVar3 = 4;
  (*(code *)PTR_FUN_8c06dcf0)
            (DAT_8c06dd04,PTR_FUN_8c06dd00,PTR_free_if_nonnull_wrap_0247b0_8c06dcfc,4);
  (*(code *)PTR_global_list_push_8c06dcbc)(0,PTR_FUN_8c06dd0c,DAT_8c06dd08,uVar3);
  uVar3 = 4;
  (*(code *)PTR_FUN_8c06dcf0)
            (DAT_8c06dd18,PTR_FUN_8c06dd14,PTR_free_if_nonnull_wrap_03a3dc_8c06dd10,4);
  (*(code *)PTR_global_list_push_8c06dcbc)(0,PTR_FUN_8c06dd20,DAT_8c06dd1c,uVar3);
  uVar3 = 8;
  (*(code *)PTR_FUN_8c06dcf0)
            (DAT_8c06dd2c,PTR_LAB_8c06dd28,PTR_free_if_nonnull_wrap_0673dc_8c06dd24,8);
  (*(code *)PTR_global_list_push_8c06dcbc)(0,PTR_FUN_8c06dd34,DAT_8c06dd30,uVar3);
  uVar3 = 8;
  (*(code *)PTR_FUN_8c06dcf0)
            (DAT_8c06dd38,PTR_LAB_8c06dd28,PTR_free_if_nonnull_wrap_0673dc_8c06dd24,8);
  (*(code *)PTR_global_list_push_8c06dcbc)(0,PTR_FUN_8c06dd40,DAT_8c06dd3c,uVar3);
  uVar4 = 8;
  (*(code *)PTR_FUN_8c06dcf0)
            (DAT_8c06dd44,PTR_LAB_8c06dd28,PTR_free_if_nonnull_wrap_0673dc_8c06dd24,8);
  uVar3 = DAT_8c06dd48;
  (*(code *)PTR_global_list_push_8c06dcbc)(0,PTR_FUN_8c06dd4c,DAT_8c06dd48,uVar4);
  (*(code *)PTR_Vec3_ctor_xyz_8c06dcb0)
            ((int)&uStack_1b4 + DAT_8c06dd5c,PTR_Vec3_ctor_xyz_8c06dcb0,uVar3,uVar4);
  uStack_148 = (*(code *)PTR_Vec3_ctor_copy_8c06dd64)
                         (DAT_8c06dd60,(int)&uStack_1b4 + DAT_8c06dd5c,uVar3,uVar4);
  uVar3 = DAT_8c06dd68;
  (*(code *)PTR_global_list_push_8c06dcbc)(uStack_148,PTR_Vec3_dtor_8c06dcb8,DAT_8c06dd68,uVar4);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c06dcb8)((int)&uStack_1b4 + DAT_8c06dd5c,0xffffffff,uVar3,uVar4);
  puVar1 = PTR_Vec3_ctor_xyz_8c06dcb0;
  (*(code *)PTR_Vec3_ctor_xyz_8c06dcb0)
            ((int)&uStack_1b4 + DAT_8c06dd74,uVar2,PTR_Vec3_ctor_xyz_8c06dcb0,uVar4);
  uStack_14c = (*(code *)PTR_Vec3_ctor_copy_8c06dd64)
                         (DAT_8c06dd60 + 0x10,(int)&uStack_1b4 + DAT_8c06dd74,puVar1,uVar4);
  uVar3 = DAT_8c06dd78;
  (*(code *)PTR_global_list_push_8c06dcbc)(uStack_14c,PTR_Vec3_dtor_8c06dcb8,DAT_8c06dd78,uVar4);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c06dcb8)((int)&uStack_1b4 + DAT_8c06dd74,0xffffffff,uVar3,uVar4);
  (*(code *)PTR_Vec3_ctor_xyz_8c06dcb0)((int)&uStack_1b4 + DAT_8c06dd84,uVar2,uVar3,uVar4);
  uStack_150 = (*(code *)PTR_Vec3_ctor_copy_8c06dd64)
                         (DAT_8c06dd60 + 0x20,(int)&uStack_1b4 + DAT_8c06dd84,uVar3,uVar4);
  uVar3 = DAT_8c06dd88;
  (*(code *)PTR_global_list_push_8c06dcbc)(uStack_150,PTR_Vec3_dtor_8c06dcb8,DAT_8c06dd88,uVar4);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c06dcb8)((int)&uStack_1b4 + DAT_8c06dd84,0xffffffff,uVar3,uVar4);
  (*(code *)PTR_Vec3_ctor_xyz_8c06dcb0)((int)&uStack_1b4 + DAT_8c06dd90,uVar2,uVar3,uVar4);
  uStack_154 = (*(code *)PTR_Vec3_ctor_copy_8c06dd64)
                         (DAT_8c06dd60 + 0x30,(int)&uStack_1b4 + DAT_8c06dd90,uVar3,uVar4);
  uVar3 = DAT_8c06dd94;
  (*(code *)PTR_global_list_push_8c06dcbc)(uStack_154,PTR_Vec3_dtor_8c06dcb8,DAT_8c06dd94,uVar4);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c06dcb8)((int)&uStack_1b4 + DAT_8c06dd90,0xffffffff,uVar3,uVar4);
  (*(code *)PTR_Vec3_ctor_xyz_8c06dcb0)((int)&uStack_1b4 + DAT_8c06dda0,uVar2,uVar3,uVar4);
  uStack_158 = (*(code *)PTR_Vec3_ctor_copy_8c06dd64)
                         (DAT_8c06dd60 + 0x40,(int)&uStack_1b4 + DAT_8c06dda0,uVar3,uVar4);
  uVar3 = DAT_8c06dda4;
  (*(code *)PTR_global_list_push_8c06dcbc)(uStack_158,PTR_Vec3_dtor_8c06dcb8,DAT_8c06dda4,uVar4);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c06dcb8)((int)&uStack_1b4 + DAT_8c06dda0,0xffffffff,uVar3,uVar4);
  (*(code *)PTR_Vec3_ctor_xyz_8c06dcb0)((int)&uStack_1b4 + DAT_8c06ddb0,uVar2,uVar3,uVar4);
  uStack_15c = (*(code *)PTR_Vec3_ctor_copy_8c06dd64)
                         (DAT_8c06dd60 + 0x50,(int)&uStack_1b4 + DAT_8c06ddb0,uVar3,uVar4);
  uVar3 = DAT_8c06ddb4;
  (*(code *)PTR_global_list_push_8c06dcbc)(uStack_15c,PTR_Vec3_dtor_8c06dcb8,DAT_8c06ddb4,uVar4);
  puVar1 = PTR_Vec3_dtor_8c06dcb8;
  (*(code *)PTR_Vec3_dtor_8c06dcb8)
            ((int)&uStack_1b4 + DAT_8c06ddb0,0xffffffff,uVar3,PTR_Vec3_dtor_8c06dcb8);
  (*(code *)PTR_Vec3_ctor_xyz_8c06dcb0)
            ((int)&uStack_1b4 + DAT_8c06ddc0,PTR_Vec3_ctor_xyz_8c06dcb0,uVar3,puVar1);
  uStack_160 = (*(code *)PTR_Vec3_ctor_copy_8c06dd64)
                         (DAT_8c06dd60 + 0x60,(int)&uStack_1b4 + DAT_8c06ddc0,
                          PTR_Vec3_ctor_copy_8c06dd64,puVar1);
  uVar3 = DAT_8c06ddc4;
  (*(code *)PTR_global_list_push_8c06dcbc)(uStack_160,PTR_Vec3_dtor_8c06dcb8,DAT_8c06ddc4,puVar1);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c06dcb8)((int)&uStack_1b4 + DAT_8c06ddc0,0xffffffff,uVar3,puVar1);
  (*(code *)PTR_Vec3_ctor_xyz_8c06dcb0)((int)&uStack_1b4 + DAT_8c06ddd4,uVar2,uVar3,puVar1);
  uStack_164 = (*(code *)PTR_Vec3_ctor_copy_8c06dd64)
                         (DAT_8c06ddd8,(int)&uStack_1b4 + DAT_8c06ddd4,uVar3,puVar1);
  uVar3 = DAT_8c06dddc;
  (*(code *)PTR_global_list_push_8c06e1cc)(uStack_164,PTR_Vec3_dtor_8c06dcb8,DAT_8c06dddc,puVar1);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c06e1d4)((int)&uStack_1b4 + DAT_8c06e1d0,0xffffffff,uVar3,puVar1);
  (*(code *)PTR_Vec3_ctor_xyz_8c06e1e8)((int)&uStack_1b4 + DAT_8c06e1e4,uVar2,uVar3,puVar1);
  uStack_168 = (*(code *)PTR_Vec3_ctor_copy_8c06e1f0)
                         (DAT_8c06e1ec + 0x10,(int)&uStack_1b4 + DAT_8c06e1e4,uVar3,puVar1);
  uVar3 = DAT_8c06e1f4;
  (*(code *)PTR_global_list_push_8c06e1cc)(uStack_168,PTR_Vec3_dtor_8c06e1d4,DAT_8c06e1f4,puVar1);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c06e1d4)((int)&uStack_1b4 + DAT_8c06e1e4,0xffffffff,uVar3,puVar1);
  (*(code *)PTR_Vec3_ctor_xyz_8c06e1e8)((int)&uStack_1b4 + DAT_8c06e200,uVar2,uVar3,puVar1);
  uStack_16c = (*(code *)PTR_Vec3_ctor_copy_8c06e1f0)
                         (DAT_8c06e1ec + 0x20,(int)&uStack_1b4 + DAT_8c06e200,uVar3,puVar1);
  uVar3 = DAT_8c06e204;
  (*(code *)PTR_global_list_push_8c06e1cc)(uStack_16c,PTR_Vec3_dtor_8c06e1d4,DAT_8c06e204,puVar1);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c06e1d4)((int)&uStack_1b4 + DAT_8c06e200,0xffffffff,uVar3,puVar1);
  (*(code *)PTR_Vec3_ctor_xyz_8c06e1e8)((int)&uStack_1b4 + DAT_8c06e210,uVar2,uVar3,puVar1);
  uStack_170 = (*(code *)PTR_Vec3_ctor_copy_8c06e1f0)
                         (DAT_8c06e1ec + 0x30,(int)&uStack_1b4 + DAT_8c06e210,uVar3,puVar1);
  uVar3 = DAT_8c06e214;
  (*(code *)PTR_global_list_push_8c06e1cc)(uStack_170,PTR_Vec3_dtor_8c06e1d4,DAT_8c06e214,puVar1);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c06e1d4)((int)&uStack_1b4 + DAT_8c06e210,0xffffffff,uVar3,puVar1);
  (*(code *)PTR_Vec3_ctor_xyz_8c06e1e8)((int)&uStack_1b4 + DAT_8c06e220,uVar2,uVar3,puVar1);
  uStack_174 = (*(code *)PTR_Vec3_ctor_copy_8c06e1f0)
                         (DAT_8c06e1ec + 0x40,(int)&uStack_1b4 + DAT_8c06e220,DAT_8c06e1ec,puVar1);
  uVar3 = DAT_8c06e224;
  (*(code *)PTR_global_list_push_8c06e1cc)(uStack_174,PTR_Vec3_dtor_8c06e1d4,DAT_8c06e224,puVar1);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c06e1d4)((int)&uStack_1b4 + DAT_8c06e220,0xffffffff,uVar3,puVar1);
  (*(code *)PTR_Vec3_ctor_xyz_8c06e1e8)((int)&uStack_1b4 + DAT_8c06e22c,uVar2,uVar3,puVar1);
  uStack_178 = (*(code *)PTR_Vec3_ctor_copy_8c06e1f0)
                         (DAT_8c06e1ec + 0x50,(int)&uStack_1b4 + DAT_8c06e22c,DAT_8c06e1ec,puVar1);
  uVar3 = DAT_8c06e230;
  (*(code *)PTR_global_list_push_8c06e1cc)(uStack_178,PTR_Vec3_dtor_8c06e1d4,DAT_8c06e230,puVar1);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c06e1d4)((int)&uStack_1b4 + DAT_8c06e22c,0xffffffff,uVar3,puVar1);
  (*(code *)PTR_Vec3_ctor_xyz_8c06e1e8)((int)&uStack_1b4 + DAT_8c06e240,uVar2,uVar3,puVar1);
  iVar5 = DAT_8c06e244;
  uStack_17c = (*(code *)PTR_Vec3_ctor_copy_8c06e1f0)
                         (DAT_8c06e244,(int)&uStack_1b4 + DAT_8c06e240,PTR_Vec3_ctor_copy_8c06e1f0,
                          DAT_8c06e244);
  uVar3 = DAT_8c06e248;
  (*(code *)PTR_global_list_push_8c06e1cc)(uStack_17c,PTR_Vec3_dtor_8c06e1d4,DAT_8c06e248,iVar5);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c06e1d4)((int)&uStack_1b4 + DAT_8c06e240,0xffffffff,uVar3,iVar5);
  iVar5 = (int)&uStack_1b4 + DAT_8c06e254;
  (*(code *)PTR_Vec3_ctor_xyz_8c06e1e8)(iVar5,uVar2,PTR_Vec3_ctor_xyz_8c06e1e8,iVar5);
  uStack_180 = (*(code *)PTR_Vec3_ctor_copy_8c06e1f0)
                         (DAT_8c06e244 + 0x10,(int)&uStack_1b4 + DAT_8c06e254,
                          PTR_Vec3_ctor_copy_8c06e1f0,iVar5);
  a7 = PTR_global_list_push_8c06e1cc;
  (*(code *)PTR_global_list_push_8c06e1cc)
            (uStack_180,PTR_Vec3_dtor_8c06e1d4,DAT_8c06e258,PTR_global_list_push_8c06e1cc);
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c06e1d4)((int)&uStack_1b4 + DAT_8c06e254,0xffffffff,0xffffffff,a7);
  puVar1 = PTR_Vec3_ctor_xyz_8c06e1e8;
  (*(code *)PTR_Vec3_ctor_xyz_8c06e1e8)
            ((int)&uStack_1b4 + DAT_8c06e264,uVar3,PTR_Vec3_ctor_xyz_8c06e1e8,a7);
  uVar3 = (*(code *)PTR_Vec3_ctor_copy_8c06e1f0)
                    (DAT_8c06e244 + 0x20,(int)&uStack_1b4 + DAT_8c06e264,puVar1,a7);
  uStack_184 = uVar3;
  (*(code *)PTR_global_list_push_8c06e1cc)(uVar3,PTR_Vec3_dtor_8c06e1d4,DAT_8c06e268,uVar3);
  uVar4 = 0xffffffff;
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c06e1d4)((int)&uStack_1b4 + DAT_8c06e264,0xffffffff,0xffffffff,uVar3);
  (*(code *)PTR_Vec3_ctor_xyz_8c06e1e8)((int)&uStack_1b4 + DAT_8c06e274,uVar2,uVar4,uVar3);
  iVar5 = (int)&uStack_1b4 + DAT_8c06e274;
  uStack_188 = (*(code *)PTR_Vec3_ctor_copy_8c06e1f0)(DAT_8c06e244 + 0x30,iVar5,DAT_8c06e244,iVar5);
  (*(code *)PTR_global_list_push_8c06e1cc)(uStack_188,PTR_Vec3_dtor_8c06e1d4,DAT_8c06e278,iVar5);
  iVar5 = (int)&uStack_1b4 + DAT_8c06e274;
  puVar1 = PTR_Vec3_dtor_8c06e1d4;
  (*(code *)PTR_Vec3_dtor_8c06e1d4)(iVar5,0xffffffff,PTR_Vec3_dtor_8c06e1d4,iVar5);
  (*(code *)PTR_Vec3_ctor_xyz_8c06e1e8)
            ((int)&uStack_1b4 + DAT_8c06e284,(int)&uStack_1b4 + DAT_8c06e284,puVar1,iVar5);
  uStack_18c = (*(code *)PTR_Vec3_ctor_copy_8c06e1f0)
                         (DAT_8c06e244 + 0x40,(int)&uStack_1b4 + DAT_8c06e284,DAT_8c06e244,iVar5);
  (*(code *)PTR_global_list_push_8c06e1cc)(uStack_18c,PTR_Vec3_dtor_8c06e1d4,DAT_8c06e288,iVar5);
  puVar1 = PTR_Vec3_dtor_8c06e1d4;
  (*(code *)PTR_Vec3_dtor_8c06e1d4)
            ((int)&uStack_1b4 + DAT_8c06e284,0xffffffff,PTR_Vec3_dtor_8c06e1d4,iVar5);
  (*(code *)PTR_Vec3_ctor_xyz_8c06e1e8)
            ((int)&uStack_1b4 + DAT_8c06e294,(int)&uStack_1b4 + DAT_8c06e294,puVar1,iVar5);
  uStack_190 = (*(code *)PTR_Vec3_ctor_copy_8c06e1f0)
                         (DAT_8c06e244 + 0x50,(int)&uStack_1b4 + DAT_8c06e294,puVar1,iVar5);
  (*(code *)PTR_global_list_push_8c06e1cc)(uStack_190,PTR_Vec3_dtor_8c06e1d4,DAT_8c06e298,iVar5);
  puVar1 = PTR_Vec3_dtor_8c06e1d4;
  (*(code *)PTR_Vec3_dtor_8c06e1d4)
            ((int)&uStack_1b4 + DAT_8c06e294,0xffffffff,PTR_Vec3_dtor_8c06e1d4,iVar5);
  uStack_194 = (*(code *)PTR_Vec3_ctor_xyz_8c06e1e8)(DAT_8c06e2a8,DAT_8c06e2a8,puVar1,iVar5);
  uVar3 = DAT_8c06e2ac;
  (*(code *)PTR_global_list_push_8c06e1cc)(uStack_194,PTR_Vec3_dtor_8c06e1d4,DAT_8c06e2ac,iVar5);
  uStack_198 = (*(code *)PTR_Vec3_ctor_xyz_8c06e1e8)
                         (DAT_8c06e2b0,PTR_Vec3_ctor_xyz_8c06e1e8,uVar3,iVar5);
  uVar3 = DAT_8c06e2b4;
  (*(code *)PTR_global_list_push_8c06e1cc)(uStack_198,PTR_Vec3_dtor_8c06e1d4,DAT_8c06e2b4,iVar5);
  uStack_19c = (*(code *)PTR_Vec3_ctor_xyz_8c06e1e8)(DAT_8c06e2b8,DAT_8c06e2b8,uVar3,iVar5);
  uVar3 = DAT_8c06e2bc;
  (*(code *)PTR_global_list_push_8c06e1cc)(uStack_19c,PTR_Vec3_dtor_8c06e1d4,DAT_8c06e2bc,iVar5);
  uStack_1a0 = (*(code *)PTR_Vec3_ctor_xyz_8c06e1e8)
                         (DAT_8c06e2c0,PTR_Vec3_ctor_xyz_8c06e1e8,uVar3,iVar5);
  uVar3 = DAT_8c06e2c4;
  (*(code *)PTR_global_list_push_8c06e1cc)(uStack_1a0,PTR_Vec3_dtor_8c06e1d4,DAT_8c06e2c4,iVar5);
  uStack_1a4 = (*(code *)PTR_Vec3_ctor_xyz_8c06e3b8)(DAT_8c06e3b4,DAT_8c06e3b4,uVar3,iVar5);
  uVar3 = DAT_8c06e3bc;
  (*(code *)PTR_global_list_push_8c06e3c4)(uStack_1a4,PTR_Vec3_dtor_8c06e3c0,DAT_8c06e3bc,iVar5);
  uStack_1a8 = (*(code *)PTR_Vec3_ctor_xyz_8c06e3b8)
                         (DAT_8c06e3d0,PTR_Vec3_ctor_xyz_8c06e3b8,uVar3,iVar5);
  uVar3 = DAT_8c06e3d4;
  (*(code *)PTR_global_list_push_8c06e3c4)(uStack_1a8,PTR_Vec3_dtor_8c06e3c0,DAT_8c06e3d4,iVar5);
  uStack_1ac = (*(code *)PTR_Vec3_ctor_xyz_8c06e3b8)(DAT_8c06e3dc,DAT_8c06e3dc,uVar3,iVar5);
  uVar3 = DAT_8c06e3e0;
  (*(code *)PTR_global_list_push_8c06e3c4)(uStack_1ac,PTR_Vec3_dtor_8c06e3c0,DAT_8c06e3e0,iVar5);
  uStack_1b0 = (*(code *)PTR_Vec3_ctor_xyz_8c06e3b8)
                         (DAT_8c06e3e4._4_4_,PTR_Vec3_ctor_xyz_8c06e3b8,uVar3,iVar5);
  (*(code *)PTR_global_list_push_8c06e3c4)(uStack_1b0,PTR_Vec3_dtor_8c06e3c0,DAT_8c06e3ec,iVar5);
  uVar3 = DAT_8c06e3f4;
  uStack_1b4 = (*(code *)PTR_FUN_8c06e404)(DAT_8c06e400,DAT_8c06e3fc,DAT_8c06e3f8,DAT_8c06e3f4);
  uVar3 = (*(code *)PTR_global_list_push_8c06e3c4)
                    (uStack_1b4,PTR_Class_129938_m0_017084_8c06e40c,DAT_8c06e408,uVar3);
  return uVar3;
}



/* FUN_8c06e410 @ 8c06e410 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06e410(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c06e430)
                    (DAT_8c06e42c,PTR_free_if_nonnull_wrap_0673dc_8c06e428,8,6);
  return uVar1;
}



/* FUN_8c06e434 @ 8c06e434 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06e434(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c06e454)
                    (DAT_8c06e450,PTR_free_if_nonnull_wrap_0673dc_8c06e44c,8,6);
  return uVar1;
}



/* FUN_8c06e458 @ 8c06e458 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06e458(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c06e478)
                    (DAT_8c06e474,PTR_free_if_nonnull_wrap_0673dc_8c06e470,8,7);
  return uVar1;
}



/* FUN_8c06e47c @ 8c06e47c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06e47c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c06e49c)
                    (DAT_8c06e498,PTR_free_if_nonnull_wrap_03a3dc_8c06e494,4,0xd);
  return uVar1;
}



/* FUN_8c06e4a0 @ 8c06e4a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06e4a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c06e4c0)
                    (DAT_8c06e4bc,PTR_free_if_nonnull_wrap_0247b0_8c06e4b8,4,0xd);
  return uVar1;
}



/* FUN_8c06e4c4 @ 8c06e4c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06e4c4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c06e4e8)(DAT_8c06e4e4,PTR_FUN_8c06e4e0,DAT_8c06e4dc,2);
  return uVar1;
}



/* FUN_8c06e4ec @ 8c06e4ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c06e4ec(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c06e570)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c06e574;
  (*(code *)PTR_Vec3_set_zero_8c06e57c)((int)ar4 + DAT_8c06e578,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c06e584)((int)ar4 + DAT_8c06e580,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c06e584)((int)ar4 + DAT_8c06e588,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c06e57c)((int)ar4 + DAT_8c06e58c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c06e57c)((int)ar4 + DAT_8c06e590,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c06e584)((int)ar4 + DAT_8c06e594,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c06e584)((int)ar4 + DAT_8c06e598,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c06e584)((int)ar4 + DAT_8c06e59c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c06e5a0)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c06e5a4 @ 8c06e5a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06e5a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint in_fr1;
  char in_FPSCR_SZ;
  
  *(undefined4 *)(DAT_8c06e644 + ar4) = 0;
  *(undefined4 *)(DAT_8c06e648 + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c06e64c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c06e64c) = (ulonglong)in_fr1;
  }
  (*(code *)PTR_FUN_8c06e658)(ar4 + DAT_8c06e654,ar5,ar6,ar7);
  *(undefined **)(DAT_8c06e65c + ar4) = PTR_PTR_8c06e660;
  *(undefined4 *)(DAT_8c06e664 + ar4) = 0x22;
  *(undefined4 *)(ar4 + 100) = 0;
  *(undefined4 *)(DAT_8c06e668 + ar4) = 0xffffffff;
  *(undefined4 *)(DAT_8c06e66c + ar4) = 0;
  *(undefined4 *)(DAT_8c06e670 + ar4) = 1;
  *(undefined4 *)(DAT_8c06e674 + ar4) = 0;
  *(undefined4 *)(DAT_8c06e678 + ar4) = 0;
  *(undefined4 *)(DAT_8c06e67c + ar4) = 0;
  *(undefined4 *)(DAT_8c06e680 + ar4) = 0;
  *(undefined4 *)(DAT_8c06e684 + ar4) = 0;
  *(undefined4 *)(DAT_8c06e688 + ar4) = 0;
  *(undefined4 *)(DAT_8c06e68c + ar4) = 0;
  *(undefined4 *)(DAT_8c06e690 + ar4) = 0;
  *(undefined4 *)(DAT_8c06e694 + ar4) = 0;
  uVar1 = (*(code *)PTR_FUN_8c06e698)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* Class_12a25c_m6_06e69c @ 8c06e69c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12a25c_m6_06e69c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int *a7;
  int iVar13;
  int aiStack_148 [4];
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int *piStack_d8;
  undefined4 uStack_d4;
  int *piStack_d0;
  undefined4 uStack_cc;
  
  *(int *)((int)DAT_8c06e6f4 + ar4) = ar5;
  iVar11 = *(int *)((int)DAT_8c06e6f4 + ar4);
  aiStack_148[0] = ar5;
  aiStack_148[1] = iVar11;
  (*(code *)PTR_FUN_8c06e6fc)(ar4,iVar11 * 0x18 + DAT_8c06e6f8,ar6,iVar11);
  puVar5 = PTR_DAT_8c06f2a0;
  puVar4 = PTR_DAT_8c06ee20;
  puVar3 = PTR_DAT_8c06eab8;
  puVar2 = PTR_DAT_8c06e900;
  puVar1 = PTR_DAT_8c06e78c;
  puVar10 = PTR_DAT_8c06e750;
  puVar6 = DAT_8c06e6f4;
  switch(*(undefined4 *)((int)DAT_8c06e6f4 + ar4)) {
  case 0:
    puVar6 = (undefined4 *)(ar4 + DAT_8c06e74c);
    uVar7 = *(undefined4 *)(PTR_DAT_8c06e750 + 4);
    *puVar6 = *(undefined4 *)PTR_DAT_8c06e750;
    puVar6[1] = uVar7;
    puVar6[2] = *(undefined4 *)(puVar10 + 8);
    puVar6 = (undefined4 *)PTR_DAT_8c06e758;
    puVar12 = (undefined4 *)(ar4 + DAT_8c06e754);
    uVar7 = *(undefined4 *)(PTR_DAT_8c06e758 + 4);
    *puVar12 = *(undefined4 *)PTR_DAT_8c06e758;
    puVar12[1] = uVar7;
    puVar12[2] = *(undefined4 *)((int)puVar6 + 8);
    break;
  case 1:
    puVar6 = (undefined4 *)(ar4 + DAT_8c06e788);
    uVar7 = *(undefined4 *)(PTR_DAT_8c06e78c + 4);
    *puVar6 = *(undefined4 *)PTR_DAT_8c06e78c;
    puVar6[1] = uVar7;
    puVar6[2] = *(undefined4 *)(puVar1 + 8);
    puVar10 = PTR_DAT_8c06e794;
    puVar6 = (undefined4 *)(ar4 + DAT_8c06e790);
    uVar7 = *(undefined4 *)(PTR_DAT_8c06e794 + 4);
    *puVar6 = *(undefined4 *)PTR_DAT_8c06e794;
    puVar6[1] = uVar7;
    puVar6[2] = *(undefined4 *)(puVar10 + 8);
    break;
  case 2:
    puVar6 = (undefined4 *)(ar4 + DAT_8c06e8fc);
    uVar7 = *(undefined4 *)(PTR_DAT_8c06e900 + 4);
    *puVar6 = *(undefined4 *)PTR_DAT_8c06e900;
    puVar6[1] = uVar7;
    puVar6[2] = *(undefined4 *)(puVar2 + 8);
    puVar10 = PTR_DAT_8c06e908;
    puVar6 = (undefined4 *)(ar4 + DAT_8c06e904);
    uVar7 = *(undefined4 *)(PTR_DAT_8c06e908 + 4);
    *puVar6 = *(undefined4 *)PTR_DAT_8c06e908;
    puVar6[1] = uVar7;
    puVar6[2] = *(undefined4 *)(puVar10 + 8);
    uVar8 = 9;
    iVar11 = DAT_8c06e90c;
    uVar7 = (*(code *)PTR_FUN_8c06e910)(ar4 + DAT_8c06e90c,9,puVar10,DAT_8c06e90c);
    *(undefined4 *)((int)aiStack_148 + DAT_8c06e914) = uVar7;
    uVar7 = (*(code *)PTR_deref_u32_8c06e918)
                      (*(undefined4 *)((int)aiStack_148 + DAT_8c06e914),uVar8,puVar10,iVar11);
    *(undefined4 *)((int)aiStack_148 + DAT_8c06e91c) = uVar7;
    if (*(int *)(**(int **)((int)aiStack_148 + DAT_8c06e91c) + 4) == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      uVar8 = 9;
      uVar7 = (*(code *)PTR_FUN_8c06e910)(ar4 + DAT_8c06e90c,9,puVar10,iVar11);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06e920) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06e918)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06e920),uVar8,puVar10,iVar11);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06e924) = uVar7;
      uVar9 = 0;
      puVar10 = PTR_DAT_8c06e928;
      (*(code *)PTR_FUN_8c06e92c)
                (ar4 + DAT_8c06e90c,*(undefined4 *)((int)aiStack_148 + DAT_8c06e924),
                 PTR_DAT_8c06e928,0);
      uVar8 = 10;
      uVar7 = (*(code *)PTR_FUN_8c06e910)(ar4 + DAT_8c06e90c,10,puVar10,uVar9);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06e930) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06e918)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06e930),uVar8,puVar10,uVar9);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06e934) = uVar7;
      uVar9 = 0;
      puVar10 = PTR_DAT_8c06e938;
      (*(code *)PTR_FUN_8c06e92c)
                (ar4 + DAT_8c06e90c,*(undefined4 *)((int)aiStack_148 + DAT_8c06e934),
                 PTR_DAT_8c06e938,0);
      uVar8 = 2;
      uVar7 = (*(code *)PTR_FUN_8c06e910)(ar4 + DAT_8c06e90c,2,puVar10,uVar9);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06e93c) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06e918)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06e93c),uVar8,puVar10,uVar9);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06e940) = uVar7;
      uVar9 = 0;
      puVar10 = PTR_DAT_8c06e944;
      (*(code *)PTR_FUN_8c06e92c)
                (ar4 + DAT_8c06e90c,*(undefined4 *)((int)aiStack_148 + DAT_8c06e940),
                 PTR_DAT_8c06e944,0);
      uVar8 = 3;
      uVar7 = (*(code *)PTR_FUN_8c06e910)(ar4 + DAT_8c06e90c,3,puVar10,uVar9);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06e948) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06e918)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06e948),uVar8,puVar10,uVar9);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06e94c) = uVar7;
      puVar6 = (undefined4 *)
               (*(code *)PTR_FUN_8c06e92c)
                         (ar4 + DAT_8c06e90c,*(undefined4 *)((int)aiStack_148 + DAT_8c06e94c),
                          PTR_DAT_8c06e950,0);
    }
    break;
  case 3:
  case 4:
  case 5:
    puVar6 = (undefined4 *)(ar4 + DAT_8c06eab4);
    uVar7 = *(undefined4 *)(PTR_DAT_8c06eab8 + 4);
    *puVar6 = *(undefined4 *)PTR_DAT_8c06eab8;
    puVar6[1] = uVar7;
    puVar6[2] = *(undefined4 *)(puVar3 + 8);
    puVar10 = PTR_DAT_8c06eac0;
    puVar6 = (undefined4 *)(ar4 + DAT_8c06eabc);
    uVar7 = *(undefined4 *)(PTR_DAT_8c06eac0 + 4);
    *puVar6 = *(undefined4 *)PTR_DAT_8c06eac0;
    puVar6[1] = uVar7;
    puVar6[2] = *(undefined4 *)(puVar10 + 8);
    uVar8 = 9;
    puVar10 = PTR_FUN_8c06eac8;
    uVar7 = (*(code *)PTR_FUN_8c06eac8)(ar4 + DAT_8c06eac4,9,PTR_FUN_8c06eac8,iVar11);
    *(undefined4 *)((int)aiStack_148 + DAT_8c06eacc) = uVar7;
    uVar7 = (*(code *)PTR_deref_u32_8c06ead0)
                      (*(undefined4 *)((int)aiStack_148 + DAT_8c06eacc),uVar8,puVar10,iVar11);
    *(undefined4 *)((int)aiStack_148 + DAT_8c06ead4) = uVar7;
    puVar6 = (undefined4 *)**(undefined4 **)((int)aiStack_148 + DAT_8c06ead4);
    if (((undefined4 *)**(undefined4 **)((int)aiStack_148 + DAT_8c06ead4))[1] != 0) {
      uVar9 = 9;
      uVar8 = 9;
      uVar7 = (*(code *)PTR_FUN_8c06eac8)(ar4 + DAT_8c06eac4,9,9,iVar11);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06ead8) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06ead0)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06ead8),uVar8,uVar9,iVar11);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06eadc) = uVar7;
      uVar9 = 0;
      puVar10 = PTR_DAT_8c06eae0;
      (*(code *)PTR_FUN_8c06eae4)
                (ar4 + DAT_8c06eac4,*(undefined4 *)((int)aiStack_148 + DAT_8c06eadc),
                 PTR_DAT_8c06eae0,0);
      uVar8 = 10;
      uVar7 = (*(code *)PTR_FUN_8c06eac8)(ar4 + DAT_8c06eac4,10,puVar10,uVar9);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06eae8) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06ead0)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06eae8),uVar8,
                         PTR_deref_u32_8c06ead0,uVar9);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06eaec) = uVar7;
      uVar9 = 0;
      puVar10 = PTR_DAT_8c06eaf0;
      (*(code *)PTR_FUN_8c06eae4)
                (ar4 + DAT_8c06eac4,*(undefined4 *)((int)aiStack_148 + DAT_8c06eaec),
                 PTR_DAT_8c06eaf0,0);
      uVar8 = 2;
      uVar7 = (*(code *)PTR_FUN_8c06eac8)(ar4 + DAT_8c06eac4,2,puVar10,uVar9);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06eaf4) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06ead0)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06eaf4),uVar8,puVar10,uVar9);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06eaf8) = uVar7;
      uVar9 = 0;
      puVar10 = PTR_DAT_8c06eafc;
      (*(code *)PTR_FUN_8c06eae4)
                (ar4 + DAT_8c06eac4,*(undefined4 *)((int)aiStack_148 + DAT_8c06eaf8),
                 PTR_DAT_8c06eafc,0);
      uVar8 = 3;
      uVar7 = (*(code *)PTR_FUN_8c06eac8)(ar4 + DAT_8c06eac4,3,puVar10,uVar9);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06eb00) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06ead0)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06eb00),uVar8,puVar10,uVar9);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06eb04) = uVar7;
      puVar6 = (undefined4 *)
               (*(code *)PTR_FUN_8c06eae4)
                         (ar4 + DAT_8c06eac4,*(undefined4 *)((int)aiStack_148 + DAT_8c06eb04),
                          PTR_DAT_8c06eb08,0);
    }
    break;
  case 6:
    puVar12 = (undefined4 *)(ar4 + DAT_8c06ee1c);
    uVar9 = *(undefined4 *)PTR_DAT_8c06ee20;
    uVar7 = *(undefined4 *)(PTR_DAT_8c06ee20 + 4);
    *puVar12 = uVar9;
    puVar12[1] = uVar7;
    puVar12[2] = *(undefined4 *)(puVar4 + 8);
    puVar10 = PTR_DAT_8c06ee28;
    puVar6 = (undefined4 *)(ar4 + DAT_8c06ee24);
    uVar7 = *(undefined4 *)(PTR_DAT_8c06ee28 + 4);
    *puVar6 = *(undefined4 *)PTR_DAT_8c06ee28;
    puVar6[1] = uVar7;
    puVar6[2] = *(undefined4 *)(puVar10 + 8);
    uVar8 = 9;
    uVar7 = (*(code *)PTR_FUN_8c06ee30)(ar4 + DAT_8c06ee2c,9,uVar9,puVar12);
    *(undefined4 *)((int)aiStack_148 + DAT_8c06ee34) = uVar7;
    puVar10 = PTR_deref_u32_8c06ee38;
    uVar7 = (*(code *)PTR_deref_u32_8c06ee38)
                      (*(undefined4 *)((int)aiStack_148 + DAT_8c06ee34),uVar8,PTR_deref_u32_8c06ee38
                       ,puVar12);
    *(undefined4 *)((int)aiStack_148 + DAT_8c06ee3c) = uVar7;
    if (*(int *)(**(int **)((int)aiStack_148 + DAT_8c06ee3c) + 4) == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      uVar8 = 0x11;
      uVar7 = (*(code *)PTR_FUN_8c06ee30)(ar4 + DAT_8c06ee2c,0x11,puVar10,puVar12);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06ee40) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06ee38)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06ee40),uVar8,puVar10,puVar12);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06ee44) = uVar7;
      uVar9 = 0;
      puVar10 = PTR_DAT_8c06ee48;
      (*(code *)PTR_FUN_8c06ee4c)
                (ar4 + DAT_8c06ee2c,*(undefined4 *)((int)aiStack_148 + DAT_8c06ee44),
                 PTR_DAT_8c06ee48,0);
      uVar8 = 0x11;
      uVar7 = (*(code *)PTR_FUN_8c06ee30)(ar4 + DAT_8c06ee2c,0x11,puVar10,uVar9);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06ee50) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06ee38)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06ee50),uVar8,puVar10,uVar9);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06ee54) = uVar7;
      a7 = *(int **)((int)aiStack_148 + DAT_8c06ee54);
      *(undefined4 *)(*a7 + 4) = *(undefined4 *)(PTR_DAT_8c06ee48 + 4);
      uVar8 = 0x11;
      uVar7 = (*(code *)PTR_FUN_8c06ee30)(ar4 + DAT_8c06ee2c,0x11,puVar10,a7);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06ee58) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06ee38)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06ee58),uVar8,puVar10,a7);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06ee5c) = uVar7;
      uVar9 = *(undefined4 *)(PTR_DAT_8c06ee48 + 0x10);
      *(undefined4 *)(**(int **)((int)aiStack_148 + DAT_8c06ee5c) + 0x10) = uVar9;
      uVar8 = 9;
      iVar11 = DAT_8c06ee2c;
      uVar7 = (*(code *)PTR_FUN_8c06ee30)(ar4 + DAT_8c06ee2c,9,DAT_8c06ee2c,uVar9);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06ee60) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06ee38)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06ee60),uVar8,iVar11,uVar9);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06ee64) = uVar7;
      uVar9 = 0;
      puVar10 = PTR_DAT_8c06ee68;
      (*(code *)PTR_FUN_8c06ee4c)
                (ar4 + DAT_8c06ee2c,*(undefined4 *)((int)aiStack_148 + DAT_8c06ee64),
                 PTR_DAT_8c06ee68,0);
      uVar8 = 10;
      uVar7 = (*(code *)PTR_FUN_8c06ee30)(ar4 + DAT_8c06ee2c,10,puVar10,uVar9);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06ee6c) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06ee38)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06ee6c),uVar8,puVar10,uVar9);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06ee70) = uVar7;
      (*(code *)PTR_FUN_8c06ee4c)
                (ar4 + DAT_8c06ee2c,*(undefined4 *)((int)aiStack_148 + DAT_8c06ee70),
                 PTR_DAT_8c06ee74,0);
      uVar8 = 2;
      puVar10 = PTR_FUN_8c06ee30;
      iVar11 = DAT_8c06ee2c;
      uVar7 = (*(code *)PTR_FUN_8c06ee30)(ar4 + DAT_8c06ee2c,2,PTR_FUN_8c06ee30,DAT_8c06ee2c);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06ee78) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06ee38)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06ee78),uVar8,puVar10,iVar11);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06ee7c) = uVar7;
      uVar8 = 0;
      puVar10 = PTR_DAT_8c06ee80;
      (*(code *)PTR_FUN_8c06ee4c)
                (ar4 + DAT_8c06ee2c,*(undefined4 *)((int)aiStack_148 + DAT_8c06ee7c),
                 PTR_DAT_8c06ee80,0);
      uVar7 = (*(code *)PTR_FUN_8c06ee30)(ar4 + DAT_8c06ee2c,3,puVar10,uVar8);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06ee84) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06ee38)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06ee84),uVar7,puVar10,uVar8);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06ee2c) = uVar7;
      uVar8 = 0;
      puVar10 = PTR_DAT_8c06ee88;
      (*(code *)PTR_FUN_8c06ee4c)
                (ar4 + DAT_8c06ee2c,*(undefined4 *)((int)aiStack_148 + DAT_8c06ee2c),
                 PTR_DAT_8c06ee88,0);
      uVar7 = (*(code *)PTR_FUN_8c06ee30)(ar4 + DAT_8c06ee2c,0x14,puVar10,uVar8);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06ee8c) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06ee38)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06ee8c),uVar7,puVar10,uVar8);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06ee90) = uVar7;
      uVar8 = 0;
      puVar10 = PTR_DAT_8c06ee94;
      (*(code *)PTR_FUN_8c06ee4c)
                (ar4 + DAT_8c06ee2c,*(undefined4 *)((int)aiStack_148 + DAT_8c06ee90),
                 PTR_DAT_8c06ee94,0);
      uVar7 = (*(code *)PTR_FUN_8c06ee30)(ar4 + DAT_8c06ee2c,0x19,puVar10,uVar8);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06ee98) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06ee38)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06ee98),uVar7,puVar10,uVar8);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06ee9c) = uVar7;
      uVar8 = 1;
      puVar10 = PTR_DAT_8c06eea0;
      (*(code *)PTR_FUN_8c06ee4c)
                (ar4 + DAT_8c06ee2c,*(undefined4 *)((int)aiStack_148 + DAT_8c06ee9c),
                 PTR_DAT_8c06eea0,1);
      uVar7 = (*(code *)PTR_FUN_8c06ee30)(ar4 + DAT_8c06ee2c,0x1a,puVar10,uVar8);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06eea4) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06ee38)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06eea4),uVar7,puVar10,uVar8);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06eea8) = uVar7;
      uVar8 = 1;
      puVar10 = PTR_DAT_8c06eeac;
      (*(code *)PTR_FUN_8c06ee4c)
                (ar4 + DAT_8c06ee2c,*(undefined4 *)((int)aiStack_148 + DAT_8c06eea8),
                 PTR_DAT_8c06eeac,1);
      uVar7 = (*(code *)PTR_FUN_8c06ee30)(ar4 + DAT_8c06ee2c,0x20,puVar10,uVar8);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06eeb0) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06ee38)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06eeb0),PTR_deref_u32_8c06ee38,
                         puVar10,uVar8);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06eeb4) = uVar7;
      puVar6 = (undefined4 *)
               (*(code *)PTR_FUN_8c06ee4c)
                         (ar4 + DAT_8c06ee2c,*(undefined4 *)((int)aiStack_148 + DAT_8c06eeb4),
                          PTR_DAT_8c06eeb8,0);
    }
    break;
  case 7:
    puVar6 = (undefined4 *)(ar4 + DAT_8c06f29c);
    uVar7 = *(undefined4 *)(PTR_DAT_8c06f2a0 + 4);
    *puVar6 = *(undefined4 *)PTR_DAT_8c06f2a0;
    puVar6[1] = uVar7;
    puVar6[2] = *(undefined4 *)(puVar5 + 8);
    puVar10 = PTR_DAT_8c06f2a8;
    puVar6 = (undefined4 *)(ar4 + DAT_8c06f2a4);
    uVar7 = *(undefined4 *)(PTR_DAT_8c06f2a8 + 4);
    *puVar6 = *(undefined4 *)PTR_DAT_8c06f2a8;
    puVar6[1] = uVar7;
    puVar6[2] = *(undefined4 *)(puVar10 + 8);
    uVar8 = 9;
    iVar13 = DAT_8c06f2ac;
    uVar7 = (*(code *)PTR_FUN_8c06f2b0)(ar4 + DAT_8c06f2ac,9,DAT_8c06f2ac,iVar11);
    *(undefined4 *)((int)aiStack_148 + DAT_8c06f2b4) = uVar7;
    uVar7 = (*(code *)PTR_deref_u32_8c06f2b8)
                      (*(undefined4 *)((int)aiStack_148 + DAT_8c06f2b4),uVar8,iVar13,iVar11);
    *(undefined4 *)((int)aiStack_148 + DAT_8c06f2bc) = uVar7;
    iVar13 = **(int **)((int)aiStack_148 + DAT_8c06f2bc);
    iVar11 = *(int *)(iVar13 + 4);
    if (iVar11 != 0) {
      uVar7 = (*(code *)PTR_FUN_8c06f2b0)(ar4 + DAT_8c06f2ac,0x11,iVar11,iVar13);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06f2c0) = uVar7;
      uVar7 = (*(code *)PTR_deref_u32_8c06f2b8)
                        (*(undefined4 *)((int)aiStack_148 + DAT_8c06f2c0),uVar7,iVar11,iVar13);
      *(undefined4 *)((int)aiStack_148 + DAT_8c06f2c4) = uVar7;
      uVar8 = 0;
      puVar10 = PTR_DAT_8c06f2c8 + 0x18;
      (*(code *)PTR_FUN_8c06f2cc)
                (ar4 + DAT_8c06f2ac,*(undefined4 *)((int)aiStack_148 + DAT_8c06f2c4),puVar10,0);
      uVar7 = 0x11;
      uStack_cc = (*(code *)PTR_FUN_8c06f2b0)(ar4 + DAT_8c06f2ac,0x11,puVar10,uVar8);
      piStack_d0 = (int *)(*(code *)PTR_deref_u32_8c06f2b8)(uStack_cc,uVar7,puVar10,uVar8);
      uVar8 = *(undefined4 *)(PTR_DAT_8c06f2c8 + 0x1c);
      *(undefined4 *)(*piStack_d0 + 4) = uVar8;
      uVar7 = 0x11;
      uStack_d4 = (*(code *)PTR_FUN_8c06f2b0)(ar4 + DAT_8c06f2ac,0x11,0x11,uVar8);
      piStack_d8 = (int *)(*(code *)PTR_deref_u32_8c06f2b8)(uStack_d4,uStack_d4,uVar7,uVar8);
      *(undefined4 *)(*piStack_d8 + 0x10) = *(undefined4 *)(PTR_DAT_8c06f2c8 + 0x28);
      uVar7 = 9;
      iVar13 = ar4 + DAT_8c06f2ac;
      iVar11 = DAT_8c06f2ac;
      uStack_dc = (*(code *)PTR_FUN_8c06f2b0)(iVar13,9,iVar13,DAT_8c06f2ac);
      uStack_e0 = (*(code *)PTR_deref_u32_8c06f2b8)(uStack_dc,uVar7,iVar13,iVar11);
      uVar7 = 0;
      puVar10 = PTR_DAT_8c06f2d0 + 0x18;
      (*(code *)PTR_FUN_8c06f2cc)(ar4 + DAT_8c06f2ac,uStack_e0,puVar10,0);
      uStack_e4 = (*(code *)PTR_FUN_8c06f2b0)(ar4 + DAT_8c06f2ac,10,puVar10,uVar7);
      uStack_e8 = (*(code *)PTR_deref_u32_8c06f2b8)(uStack_e4,uStack_e4,puVar10,uVar7);
      uVar8 = 0;
      puVar10 = PTR_DAT_8c06f2d4 + 0x18;
      (*(code *)PTR_FUN_8c06f2cc)(ar4 + DAT_8c06f2ac,uStack_e8,puVar10,0);
      uVar7 = 2;
      uStack_ec = (*(code *)PTR_FUN_8c06f2b0)(ar4 + DAT_8c06f2ac,2,puVar10,uVar8);
      uStack_f0 = (*(code *)PTR_deref_u32_8c06f2b8)(uStack_ec,uVar7,puVar10,uVar8);
      uVar8 = 0;
      puVar10 = PTR_DAT_8c06f2d8 + 0x18;
      (*(code *)PTR_FUN_8c06f2cc)(ar4 + DAT_8c06f2ac,uStack_f0,puVar10,0);
      uVar7 = 3;
      uStack_f4 = (*(code *)PTR_FUN_8c06f2b0)(ar4 + DAT_8c06f2ac,3,puVar10,uVar8);
      uStack_f8 = (*(code *)PTR_deref_u32_8c06f2b8)(uStack_f4,uVar7,puVar10,uVar8);
      uVar8 = 0;
      puVar10 = PTR_DAT_8c06f2dc + 0x18;
      (*(code *)PTR_FUN_8c06f2cc)(ar4 + DAT_8c06f2ac,uStack_f8,puVar10,0);
      uVar7 = 0x14;
      uStack_fc = (*(code *)PTR_FUN_8c06f2b0)(ar4 + DAT_8c06f2ac,0x14,puVar10,uVar8);
      uStack_100 = (*(code *)PTR_deref_u32_8c06f2b8)(uStack_fc,uVar7,puVar10,uVar8);
      (*(code *)PTR_FUN_8c06f2cc)(ar4 + DAT_8c06f2ac,uStack_100,PTR_DAT_8c06f2e0 + 0x18,0);
      iVar11 = ar4 + DAT_8c06f2ac;
      puVar10 = PTR_FUN_8c06f2b0;
      uStack_104 = (*(code *)PTR_FUN_8c06f2b0)(iVar11,0x19,PTR_FUN_8c06f2b0,iVar11);
      uStack_108 = (*(code *)PTR_deref_u32_8c06f2b8)(uStack_104,uStack_104,puVar10,iVar11);
      (*(code *)PTR_FUN_8c06f2cc)(ar4 + DAT_8c06f2ac,uStack_108,PTR_DAT_8c06f2e4 + 0x18,1);
      uVar7 = 0x1a;
      iVar13 = ar4 + DAT_8c06f2ac;
      iVar11 = DAT_8c06f2ac;
      uStack_10c = (*(code *)PTR_FUN_8c06f2b0)(iVar13,0x1a,iVar13,DAT_8c06f2ac);
      uStack_110 = (*(code *)PTR_deref_u32_8c06f2b8)(uStack_10c,uVar7,iVar13,iVar11);
      puVar10 = PTR_DAT_8c06f2e8 + 0x18;
      (*(code *)PTR_FUN_8c06f2cc)(ar4 + DAT_8c06f2ac,uStack_110,puVar10,1);
      uVar8 = 0x20;
      uVar7 = 0x20;
      uStack_114 = (*(code *)PTR_FUN_8c06f2b0)(ar4 + DAT_8c06f2ac,0x20,puVar10,0x20);
      uStack_118 = (*(code *)PTR_deref_u32_8c06f2b8)(uStack_114,uVar7,puVar10,uVar8);
      uVar7 = 0;
      puVar10 = PTR_DAT_8c06f2ec + 0x18;
      (*(code *)PTR_FUN_8c06f2cc)(ar4 + DAT_8c06f2ac,uStack_118,puVar10,0);
      uStack_11c = (*(code *)PTR_FUN_8c06f2b0)(ar4 + DAT_8c06f2ac,0x27,puVar10,uVar7);
      uStack_120 = (*(code *)PTR_deref_u32_8c06f2b8)(uStack_11c,uStack_11c,puVar10,uVar7);
      uVar7 = 0;
      puVar10 = PTR_DAT_8c06f2f0;
      (*(code *)PTR_FUN_8c06f2cc)(ar4 + DAT_8c06f2ac,uStack_120,PTR_DAT_8c06f2f0,0);
      uStack_124 = (*(code *)PTR_FUN_8c06f2b0)(ar4 + DAT_8c06f2ac,0x28,puVar10,uVar7);
      uStack_128 = (*(code *)PTR_deref_u32_8c06f2b8)(uStack_124,uStack_124,puVar10,uVar7);
      uVar7 = 0;
      puVar10 = PTR_DAT_8c06f2f4;
      (*(code *)PTR_FUN_8c06f2cc)(ar4 + DAT_8c06f2ac,uStack_128,PTR_DAT_8c06f2f4,0);
      uStack_12c = (*(code *)PTR_FUN_8c06f2b0)(ar4 + DAT_8c06f2ac,0x21,puVar10,uVar7);
      uStack_130 = (*(code *)PTR_deref_u32_8c06f2b8)(uStack_12c,uStack_12c,puVar10,uVar7);
      uVar7 = 0;
      puVar10 = PTR_DAT_8c06f2f8;
      (*(code *)PTR_FUN_8c06f2cc)(ar4 + DAT_8c06f2ac,uStack_130,PTR_DAT_8c06f2f8,0);
      uStack_134 = (*(code *)PTR_FUN_8c06f3a8)(ar4 + DAT_8c06f3a4,0x22,puVar10,uVar7);
      uStack_138 = (*(code *)PTR_deref_u32_8c06f3ac)(uStack_134,uStack_134,puVar10,uVar7);
      uVar7 = 0;
      puVar10 = PTR_DAT_8c06f3b0 + 0x18;
      (*(code *)PTR_FUN_8c06f3b4)(ar4 + DAT_8c06f3a4,uStack_138,puVar10,0);
      aiStack_148[3] = (*(code *)PTR_FUN_8c06f3a8)(ar4 + DAT_8c06f3a4,0x32,puVar10,uVar7);
      aiStack_148[2] =
           (*(code *)PTR_deref_u32_8c06f3ac)(aiStack_148[3],PTR_deref_u32_8c06f3ac,puVar10,uVar7);
      (*(code *)PTR_FUN_8c06f3b4)(ar4 + DAT_8c06f3a4,aiStack_148[2],PTR_DAT_8c06f3b8,0);
    }
    puVar6 = *(undefined4 **)(ar4 + 100);
    if (*(undefined4 **)(ar4 + 100) == (undefined4 *)0x1) {
      puVar6 = (undefined4 *)
               (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c06f3c0)
                         (ar4 + DAT_8c06f3a4,0x13,0xffffffff,0);
    }
  }
  return puVar6;
}



/* Class_12a25c_m0_06f3c4 @ 8c06f3c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12a25c_m0_06f3c4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *a4;
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c06f490;
    if ((*(int *)(DAT_8c06f494 + (int)ar4) != 0) &&
       (a4 = *(int **)(DAT_8c06f494 + (int)ar4), a4 != (int *)0x0)) {
      (**(code **)(*a4 + 8))(a4,1,ar6,ar7);
    }
    (*(code *)PTR_Vec3_dtor_8c06f49c)((int)ar4 + DAT_8c06f498,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c06f49c)((int)ar4 + DAT_8c06f4a0,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c06f49c)((int)ar4 + DAT_8c06f4a4,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c06f4ac)((int)ar4 + DAT_8c06f4a8,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c06f4ac)((int)ar4 + DAT_8c06f4b0,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c06f49c)((int)ar4 + DAT_8c06f4b4,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c06f49c)((int)ar4 + DAT_8c06f4b8,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c06f4ac)((int)ar4 + DAT_8c06f4bc,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_Class_129cbc_m0_0312f4_8c06f4c0)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c06f4c4)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c06f4c8 @ 8c06f4c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c06f4c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c06f510)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c06f514 + ar4) = 0;
  *(undefined4 *)(DAT_8c06f518 + ar4) = 0;
  *(undefined4 *)(DAT_8c06f51c + ar4) = 0;
  (*(code *)PTR_vec3_clear_8c06f524)(ar4 + DAT_8c06f520,ar5,ar6,ar7);
  (*(code *)PTR_vec3_clear_8c06f524)(ar4 + DAT_8c06f528,ar5,ar6,ar7);
  iVar1 = DAT_8c06f52c;
  *(undefined4 *)(DAT_8c06f52c + ar4) = 0;
  return iVar1;
}



/* Class_12a25c_m1_06f530 @ 8c06f530 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int Class_12a25c_m1_06f530(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 unaff_r12;
  int iVar3;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar4;
  undefined4 in_fr1;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  double in_dr14;
  double dVar8;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar9;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar4 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar4 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar4 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar4 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar4 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar4 + -0x10) = in_PR;
  puVar2 = ar5;
  if ((((*(int *)(DAT_8c06f578 + ar4) == 0x10) || (*(int *)(DAT_8c06f578 + ar4) == 0x11)) ||
      (*(int *)(DAT_8c06f578 + ar4) == 0x12)) ||
     ((*(int *)(DAT_8c06f578 + ar4) == 0x18 || (*(int *)(DAT_8c06f578 + ar4) == 6)))) {
    *(undefined1 *)(DAT_8c06f778 + ar4) = *(undefined1 *)(ar5 + 10);
  }
  else {
    (*(code *)PTR_Class_129cbc_m1_031598_8c06f57c)(ar4,ar5,ar6,ar7);
  }
  *(undefined4 *)(DAT_8c06f77c + ar4) = 0;
  *(undefined4 *)(DAT_8c06f780 + ar4) = 0;
  if (ar5[4] != 1) {
    uVar1 = DAT_8c06f788;
    if (in_FPSCR_SZ == '\0') {
      uVar1 = in_fr1;
    }
    in_fr1 = uVar1;
    (*(code *)PTR_FUN_8c06f790)(ar4,puVar2,ar6,ar7);
    (*(code *)PTR_FUN_8c06f798)(ar4,puVar2,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_pure_virtual_stub_8c06f7a0)(ar4,ar5,ar6,ar7);
  *(undefined4 *)((int)puVar4 + -0x84) = uVar1;
  iVar3 = *(int *)((int)puVar4 + -0x84);
  if ((*(int *)(DAT_8c06f7a4 + ar4) == 1) && (iVar3 != 1)) {
    *(undefined4 *)(DAT_8c06f7a4 + ar4) = 0;
  }
  (*(code *)PTR_FUN_8c06f7a8)(*ar5,iVar3,ar6,ar7);
  if ((((*(int *)(DAT_8c06f7ac + ar4) == 0x10) || (*(int *)(DAT_8c06f7ac + ar4) == 0x11)) ||
      (*(int *)(DAT_8c06f7ac + ar4) == 0x12)) || (*(int *)(DAT_8c06f7ac + ar4) == 0x18)) {
    *(undefined1 **)((int)puVar4 + -0xa0) = (undefined1 *)((int)puVar4 + -0x70);
    (*(code *)PTR_Vec3_scale_8c06f8e4)(ar4 + 0x14,ar4 + 0x28,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0xa0) = (undefined1 *)((int)puVar4 + -0x80);
    (*(code *)PTR_Vec3_add_8c06f8ec)((undefined1 *)((int)puVar4 + -0x70),ar4 + DAT_8c06f8e8,ar6,ar7)
    ;
    (*(code *)PTR_Vec3_assign_8c06f8f0)(ar4 + 4,(undefined1 *)((int)puVar4 + -0x80),ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c06f8f4)((undefined1 *)((int)puVar4 + -0x80),0xffffffff,ar6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c06f8f4)((undefined1 *)((int)puVar4 + -0x70),0xffffffff,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(*(int *)ar5[1] + 4));
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 8),in_fr1);
    }
    else {
      dVar7 = *(double *)(ar4 + 8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               SUB84(in_dr14,0) + (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      dVar8 = in_dr14 + dVar7;
    }
    (**(code **)(DAT_8c06f8f8 + *(int *)ar5[6]))((int *)ar5[6],uVar1,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x94) = (int)((ulonglong)dVar7 >> 0x20);
      uVar6 = CONCAT44(DAT_8c06f8fc,*(undefined4 *)((int)puVar4 + -0x94));
    }
    else {
      *(double *)((int)puVar4 + -0x94) = dVar7;
      in_xd0 = *(undefined8 *)((int)puVar4 + -0x94);
      uVar6 = CONCAT44(_DAT_8c06f900,DAT_8c06f8fc);
    }
    if ((in_FPSCR_PR == '\0' && (float)((ulonglong)uVar6 >> 0x20) < (float)uVar6) && (ar5[4] != 3))
    {
      (**(code **)(DAT_8c06f8f8 + *(int *)ar5[6]))((int *)ar5[6],uVar1,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar4 + -0x98) = (int)((ulonglong)uVar6 >> 0x20);
        dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x98),(int)uVar6);
      }
      else {
        *(undefined8 *)((int)puVar4 + -0x98) = uVar6;
        dVar7 = *(double *)((int)puVar4 + -0x98);
      }
      if (in_FPSCR_PR == '\0') {
        bVar9 = SUB84(dVar8,0) < (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        bVar9 = dVar8 < dVar7;
      }
      if (!bVar9) {
        (**(code **)(DAT_8c06f8f8 + *(int *)ar5[6]))((int *)ar5[6],uVar1,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar4 + -0x9c) = (int)((ulonglong)dVar7 >> 0x20);
          dVar7 = (double)(ulonglong)*(uint *)((int)puVar4 + -0x9c);
        }
        else {
          *(double *)((int)puVar4 + -0x9c) = dVar7;
          in_xd0 = *(undefined8 *)((int)puVar4 + -0x9c);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(*(undefined4 *)(*(int *)ar5[1] + 4),SUB84(dVar7,0));
        }
        else {
          dVar7 = *(double *)(*(int *)ar5[1] + 4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar7 - dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 8) = fVar5;
        }
        else {
          *(undefined8 *)(ar4 + 8) = in_xd0;
        }
      }
    }
    (*(code *)PTR_vec3_clear_8c06f904)(ar4 + _DAT_8c06f900,uVar1,ar6,ar7);
  }
  else {
    *(undefined1 **)((int)puVar4 + -0xa0) = (undefined1 *)((int)puVar4 + -0x20);
    (*(code *)PTR_Vec3_scale_8c06f7b0)(ar4 + 0x14,ar4 + 0x28,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0xa0) = (undefined1 *)((int)puVar4 + -0x30);
    (*(code *)PTR_Vec3_add_8c06f7bc)
              ((undefined1 *)((int)puVar4 + DAT_8c06f7b8 + -0xa0),ar4 + DAT_8c06f7b4,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0xa0) = (undefined1 *)((int)puVar4 + -0x40);
    (*(code *)PTR_Vec3_add_8c06f7bc)((undefined1 *)((int)puVar4 + -0x30),ar4 + 0x6c,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0xa0) = (undefined1 *)((int)puVar4 + -0x50);
    (*(code *)PTR_Vec3_add_8c06f7bc)((undefined1 *)((int)puVar4 + -0x40),ar4 + DAT_8c06f7c0,ar6,ar7)
    ;
    *(undefined1 **)((int)puVar4 + -0xa0) = (undefined1 *)((int)puVar4 + -0x60);
    (*(code *)PTR_Vec3_add_8c06f7bc)((undefined1 *)((int)puVar4 + -0x50),ar4 + DAT_8c06f7c4,ar6,ar7)
    ;
    (*(code *)PTR_Vec3_assign_8c06f7c8)(ar4 + 4,(undefined1 *)((int)puVar4 + -0x60),ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c06f7cc)((undefined1 *)((int)puVar4 + -0x60),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c06f7cc)((undefined1 *)((int)puVar4 + -0x50),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c06f7cc)((undefined1 *)((int)puVar4 + -0x40),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c06f7cc)((undefined1 *)((int)puVar4 + -0x30),0xffffffff,ar6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c06f7cc)((undefined1 *)((int)puVar4 + -0x20),0xffffffff,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(*(int *)ar5[1] + 4));
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 8),in_fr1);
    }
    else {
      dVar7 = *(double *)(ar4 + 8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               SUB84(in_dr14,0) + (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      dVar8 = in_dr14 + dVar7;
    }
    (**(code **)(DAT_8c06f7d0 + *(int *)ar5[6]))((int *)ar5[6],uVar1,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x88) = (int)((ulonglong)dVar7 >> 0x20);
      uVar6 = CONCAT44(DAT_8c06f7d4,*(undefined4 *)((int)puVar4 + -0x88));
    }
    else {
      *(double *)((int)puVar4 + -0x88) = dVar7;
      in_xd0 = *(undefined8 *)((int)puVar4 + -0x88);
      uVar6 = CONCAT44(PTR_vec3_clear_8c06f7d8,DAT_8c06f7d4);
    }
    if ((in_FPSCR_PR == '\0' && (float)((ulonglong)uVar6 >> 0x20) < (float)uVar6) && (ar5[4] != 3))
    {
      (**(code **)(DAT_8c06f7d0 + *(int *)ar5[6]))((int *)ar5[6],uVar1,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar4 + -0x8c) = (int)((ulonglong)uVar6 >> 0x20);
        dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x8c),(int)uVar6);
      }
      else {
        *(undefined8 *)((int)puVar4 + -0x8c) = uVar6;
        dVar7 = *(double *)((int)puVar4 + -0x8c);
      }
      if (in_FPSCR_PR == '\0') {
        bVar9 = SUB84(dVar8,0) < (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        bVar9 = dVar8 < dVar7;
      }
      if (!bVar9) {
        (**(code **)(DAT_8c06f7d0 + *(int *)ar5[6]))((int *)ar5[6],uVar1,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar4 + -0x90) = (int)((ulonglong)dVar7 >> 0x20);
          dVar7 = (double)(ulonglong)*(uint *)((int)puVar4 + -0x90);
        }
        else {
          *(double *)((int)puVar4 + -0x90) = dVar7;
          in_xd0 = *(undefined8 *)((int)puVar4 + -0x90);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(*(undefined4 *)(*(int *)ar5[1] + 4),SUB84(dVar7,0));
        }
        else {
          dVar7 = *(double *)(*(int *)ar5[1] + 4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar7 - dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 8) = fVar5;
        }
        else {
          *(undefined8 *)(ar4 + 8) = in_xd0;
        }
      }
    }
    (*(code *)PTR_vec3_clear_8c06f7d8)(ar4 + DAT_8c06f7c0,uVar1,ar6,ar7);
    (*(code *)PTR_vec3_clear_8c06f7d8)(ar4 + DAT_8c06f7c4,uVar1,ar6,ar7);
  }
  if (*(int *)(DAT_8c06f908 + ar4) != 2) {
    (*(code *)PTR_FUN_8c06f90c)(ar4,*(undefined4 *)(ar5[1] + 4),ar6,ar7);
  }
  *(undefined4 *)(DAT_8c06f910 + ar4) = 0;
  iVar3 = DAT_8c06f914;
  *(undefined4 *)(DAT_8c06f914 + ar4) = 0;
  return iVar3;
}



/* Class_12a25c_m7_06f918 @ 8c06f918 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12a25c_m7_06f918(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c06f934)(ar4,ar5,ar6,ar7);
  iVar1 = DAT_8c06f938;
  *(undefined4 *)(DAT_8c06f938 + ar4) = 1;
  return iVar1;
}



/* FUN_8c06f93c @ 8c06f93c callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c06fae6 */
/* WARNING: Switch with 1 destination removed at 0x8c06fb78 */
/* WARNING: Switch with 1 destination removed at 0x8c06fb86 */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c06f93c(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *a6;
  undefined *puVar4;
  undefined4 a7;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar5;
  undefined4 extraout_fr1;
  undefined8 in_dr14;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [4];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar5 = auStack_c;
  }
  else {
    puVar5 = auStack_18;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)(puVar5 + -4) = unaff_r14;
  *(undefined4 *)(puVar5 + -8) = unaff_r13;
  *(undefined4 *)(puVar5 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar5 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar5 + -0x14) = in_PR;
  iVar1 = -DAT_8c06faf0;
  a6 = puVar5 + DAT_8c06faf4 + iVar1 + -0x14;
  *(undefined1 **)(puVar5 + iVar1 + -0x18) = a6;
  (*(code *)PTR_FUN_8c06faf8)(*ar5,ar5,a6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c06fb00)
            (puVar5 + DAT_8c06fafc + iVar1 + -0x14,puVar5 + DAT_8c06faf4 + iVar1 + -0x14,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c06fb04)(puVar5 + DAT_8c06faf4 + iVar1 + -0x14,0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c06fb0c)
            (puVar5 + DAT_8c06fb08 + iVar1 + -0x14,PTR_Vec3_set_zero_8c06fb0c,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar5 + DAT_8c06fb10 + iVar1 + -0x14) = 0x3f800000;
  }
  else {
    *(ulonglong *)(puVar5 + DAT_8c06fb10 + iVar1 + -0x14) = CONCAT44(0x3f800000,extraout_fr1);
  }
  if (((ar5[4] == 3) || (*(int *)(ar4 + 0x68) != 0)) && (*(int *)(DAT_8c06fb14 + ar4) == 1)) {
    if ((*(int *)(DAT_8c06fb18 + ar4) == 4) && (*(int *)(DAT_8c06fb1c + ar4) == 2)) {
      uVar2 = (*(code *)PTR_get_field_6c_028cc4_8c06fb20)
                        (*ar5,PTR_get_field_6c_028cc4_8c06fb20,a6,ar7);
      *(undefined4 *)(puVar5 + DAT_8c06fb24 + iVar1 + -0x14) = uVar2;
      if (*(int *)(puVar5 + DAT_8c06fb24 + iVar1 + -0x14) != 0) {
        *(undefined1 **)(puVar5 + iVar1 + -0x18) = puVar5 + DAT_8c06fb28 + iVar1 + -0x14;
        (*(code *)PTR_Vec3_scale_8c06fb30)(ar4 + DAT_8c06fb2c,ar4 + 0x48,DAT_8c06fb2c,ar7);
        *(undefined1 **)(puVar5 + iVar1 + -0x18) = puVar5 + DAT_8c06fb34 + iVar1 + -0x14;
        puVar4 = PTR_Vec3_scale_8c06fb30;
        (*(code *)PTR_Vec3_scale_8c06fb30)
                  (puVar5 + DAT_8c06fb38 + iVar1 + -0x18,*(int *)(ar5[1] + 8) + 4,
                   PTR_Vec3_scale_8c06fb30,ar7);
        *(undefined1 **)(puVar5 + iVar1 + -0x18) = puVar5 + DAT_8c06fb3c + iVar1 + -0x14;
        (*(code *)PTR_Vec3_add_8c06fb44)
                  (puVar5 + DAT_8c06fb40 + iVar1 + -0x18,*(undefined4 *)ar5[1],puVar4,ar7);
        (*(code *)PTR_Vec3_ctor_copy_8c06fb00)
                  (puVar5 + DAT_8c06fb48 + iVar1 + -0x14,puVar5 + DAT_8c06fb3c + iVar1 + -0x14,
                   puVar4,ar7);
        (*(code *)PTR_Vec3_dtor_8c06fb04)
                  (puVar5 + DAT_8c06fb3c + iVar1 + -0x14,0xffffffff,0xffffffff,ar7);
        a7 = 0xffffffff;
        puVar4 = PTR_Vec3_dtor_8c06fb04;
        (*(code *)PTR_Vec3_dtor_8c06fb04)
                  (puVar5 + DAT_8c06fb34 + iVar1 + -0x14,0xffffffff,PTR_Vec3_dtor_8c06fb04,
                   0xffffffff);
        (*(code *)PTR_Vec3_dtor_8c06fb04)
                  (puVar5 + DAT_8c06fb28 + iVar1 + -0x14,0xffffffff,puVar4,a7);
        uVar2 = (*(code *)PTR_get_field_6c_028cc4_8c06fb20)
                          (*ar5,PTR_get_field_6c_028cc4_8c06fb20,puVar4,a7);
        *(undefined4 *)(puVar5 + DAT_8c06fb4c + iVar1 + -0x14) = uVar2;
        uVar2 = *(undefined4 *)(puVar5 + DAT_8c06fb4c + iVar1 + -0x14);
        (*(code *)PTR_FUN_8c06fb58)(uVar2,PTR_FUN_8c06fb58,uVar2,a7);
        (*(code *)PTR_Vec3_dtor_8c06fb04)(puVar5 + DAT_8c06fb48 + iVar1 + -0x14,0xffffffff,uVar2,a7)
        ;
      }
    }
    *(undefined4 *)(puVar5 + iVar1 + -0x18) = ar5[6];
    uVar2 = ar5[4];
    (*(code *)PTR_FUN_8c06fb5c)(ar4,*(undefined4 *)ar5[1],uVar2,ar5[3]);
    iVar3 = DAT_8c06fb2c;
    (*(code *)PTR_Vec3_assign_8c06fb60)(ar4 + DAT_8c06fb2c,ar4 + 0x14,uVar2,DAT_8c06fb2c);
    *(undefined4 *)(puVar5 + DAT_8c06fb64 + iVar1 + -0x14) = 1;
    (*(code *)PTR_object_dtor_delete_8c06fb68)
              (puVar5 + DAT_8c06fb08 + iVar1 + -0x14,0xffffffff,uVar2,iVar3);
    (*(code *)PTR_Vec3_dtor_8c06fb04)(puVar5 + DAT_8c06fafc + iVar1 + -0x14,0xffffffff,uVar2,iVar3);
    uVar2 = *(undefined4 *)(puVar5 + DAT_8c06fb64 + iVar1 + -0x14);
  }
  else {
    iVar3 = *(int *)(DAT_8c06fb9c + ar4);
    if ((iVar3 < 0x20) && (-1 < iVar3)) {
                    /* WARNING: Could not recover jumptable at 0x8c06fb96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&PTR_LAB_8c06fba0)[iVar3])();
      return uVar2;
    }
    iVar3 = DAT_8c070d58;
    if (*(int *)(DAT_8c070d58 + ar4) != 0xc) {
      (*(code *)PTR_Vec3_assign_8c070d60)(ar4 + DAT_8c070d5c,ar4 + 0x14,DAT_8c070d58,ar7);
    }
    *(undefined4 *)(puVar5 + DAT_8c070d64 + iVar1 + -0x14) = 1;
    (*(code *)PTR_object_dtor_delete_8c070d6c)
              (puVar5 + DAT_8c070d68 + iVar1 + -0x14,0xffffffff,iVar3,ar7);
    (*(code *)PTR_Vec3_dtor_8c070d74)(puVar5 + DAT_8c070d70 + iVar1 + -0x14,0xffffffff,iVar3,ar7);
    uVar2 = *(undefined4 *)(puVar5 + DAT_8c070d64 + iVar1 + -0x14);
  }
  return uVar2;
}


