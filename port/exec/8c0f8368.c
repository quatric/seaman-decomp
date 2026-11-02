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
undefined4 s_HIGYOLINE0_0f8370_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_HIGYOLINE0_0f8370";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 348; for (int i_ = 0; i_ < 348; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 *ar5_00;
  int ar6_00;
  
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c0fda80(ar4 + 0x1054,0x1054,ar6,ar7));
  *(int *)(unsigned)(ar4 + 0x89130) = ar5;
  *(int *)(unsigned)(ar4 + 0x104c) = ar4;
  *(int *)(unsigned)(ar4 + 0x1050) = ar6;
  *(undefined4 *)(unsigned)(ar4 + 0x89134) = 1;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1408e4),ar6_00,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c1408e9),ar6_00,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x74)),((undefined1 *)(unsigned)0x8c1408e9),ar6_00,ar7); });
  if (ar5 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1408ea),ar6_00,ar7));
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x1044) = 0;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1408f5),ar6_00,ar7));
      if (iVar1 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x1044) = 1;
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140906),ar6_00,ar7));
        if (iVar1 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x1044) = 2;
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140917),ar6_00,ar7));
          if ((((iVar1 == 0) ||
               (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140922),ar6_00,ar7)), iVar1 == 0)) ||
              (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14092d),ar6_00,ar7)), iVar1 == 0)) ||
             ((iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140938),ar6_00,ar7)), iVar1 == 0 ||
              (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140943),ar6_00,ar7)), iVar1 == 0)))) {
            *(undefined4 *)(unsigned)(ar4 + 0x1044) = 3;
          }
          else {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140954),ar6_00,ar7));
            if (((iVar1 == 0) ||
                (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140961),ar6_00,ar7)), iVar1 == 0))
               || (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14096e),ar6_00,ar7)), iVar1 == 0
                  )) {
              *(undefined4 *)(unsigned)(ar4 + 0x1044) = 4;
            }
            else {
              iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140981),ar6_00,ar7));
              if ((iVar1 == 0) ||
                 (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14098e),ar6_00,ar7)), iVar1 == 0)
                 ) {
                *(undefined4 *)(unsigned)(ar4 + 0x1044) = 5;
              }
              else {
                iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1409e7),ar6_00,ar7));
                if (iVar1 != 0) {
                  return 0;
                }
                *(undefined4 *)(unsigned)(ar4 + 0x1044) = 6;
              }
            }
          }
        }
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1408ea),ar6_00,ar7));
    if (((iVar1 == 0) ||
        (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1408f5),ar6_00,ar7)), iVar1 == 0)) ||
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140906),ar6_00,ar7)), iVar1 == 0)) {
      *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140917),ar6_00,ar7));
      if (iVar1 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x1048) = 1;
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140922),ar6_00,ar7));
        if (iVar1 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x1048) = 2;
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14092d),ar6_00,ar7));
          if (iVar1 == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x1048) = 3;
          }
          else {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140938),ar6_00,ar7));
            if (iVar1 == 0) {
              *(undefined4 *)(unsigned)(ar4 + 0x1048) = 4;
            }
            else {
              iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140943),ar6_00,ar7));
              if (iVar1 == 0) {
                iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c0fa658(ar4,0,ar6_00,ar7));
                if (iVar1 == 5) {
                  *(undefined4 *)(unsigned)(ar4 + 0x1048) = 5;
                  *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x104c) + 8) = *(undefined4 *)(unsigned)(ar4 + 0x102c);
                }
                else if ((iVar1 == 6) &&
                        (*(undefined4 *)(unsigned)(ar4 + 0x1048) = 5,
                        *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x104c) + 8) < *(int *)(unsigned)(ar4 + 0x102c))) {
                  *(undefined4 *)(unsigned)(ar4 + 0x1048) = 6;
                }
              }
              else {
                iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140954),ar6_00,ar7));
                if (iVar1 == 0) {
                  *(undefined4 *)(unsigned)(ar4 + 0x1048) = 7;
                }
                else {
                  iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140961),ar6_00,ar7));
                  if (iVar1 == 0) {
                    *(undefined4 *)(unsigned)(ar4 + 0x1048) = 8;
                  }
                  else {
                    iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14096e),ar6_00,ar7));
                    if (iVar1 == 0) {
                      *(undefined4 *)(unsigned)(ar4 + 0x1048) = 10;
                    }
                    else {
                      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140981),ar6_00,ar7));
                      if (iVar1 == 0) {
                        *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0xc;
                      }
                      else {
                        pcVar3 = ((undefined1 *)(unsigned)0x8c14098e);
                        iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14098e),ar6_00,ar7));
                        if (iVar1 == 0) {
                          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c0fa658(ar4,pcVar3,ar6_00,ar7));
                          if ((iVar1 < 0x13) && (0xc < iVar1)) {
                    
                            switch(iVar1) {
                            default:
                              *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0xe;
                              *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x104c) + 8) =
                                   *(undefined4 *)(unsigned)(ar4 + 0x102c);
                              break;
                            case 0xf:
                            case 0x10:
                              *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0xe;
                              if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x104c) + 8) + 1 < *(int *)(unsigned)(ar4 + 0x102c))
                              {
                                *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x10;
                              }
                              break;
                            case 0x11:
                              *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x10;
                              if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x104c) + 8) + 2 < *(int *)(unsigned)(ar4 + 0x102c))
                              {
                                *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x12;
                              }
                            }
                          }
                        }
                        else {
                          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1409e7),ar6_00,ar7));
                          if (iVar1 != 0) {
                            return 0;
                          }
                          *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x12;
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
    iVar1 = *(int *)(unsigned)(ar4 + 0x1044);
    if ((iVar1 < 7) && (-1 < iVar1)) {
                    
      switch(iVar1) {
      case 0:
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409ee),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c1409fa),ar6_00,ar7); });
        break;
      case 1:
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409fe),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a0a),ar6_00,ar7); });
        break;
      case 2:
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140a0e),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a1a),ar6_00,ar7); });
        break;
      case 3:
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140a1e),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a2a),ar6_00,ar7); });
        break;
      case 4:
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140a2e),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a3a),ar6_00,ar7); });
        break;
      case 5:
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140a3e),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a4a),ar6_00,ar7); });
        break;
      case 6:
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140a4e),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a5a),ar6_00,ar7); });
      }
    }
    if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x94) == 1) {
      (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a5e),ar6_00,ar7));
    }
    else if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x68) < 2) {
      (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a63),ar6_00,ar7));
    }
    else {
      iVar1 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x7c);
      if ((9 < iVar1) || (iVar1 < 0)) {
switchD_8c0f933e_caseD_6:
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c1408e9),ar6_00,ar7); });
        return 0;
      }
                    
      switch(iVar1) {
      case 0:
        if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x60) < 1) {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a6c),ar6_00,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a68),ar6_00,ar7));
        }
        break;
      case 1:
        if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x60) < 1) {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a6c),ar6_00,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a73),ar6_00,ar7));
        }
        break;
      case 2:
        if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x60) < 1) {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a6c),ar6_00,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a78),ar6_00,ar7));
        }
        break;
      case 3:
        if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x60) < 1) {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a6c),ar6_00,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a7f),ar6_00,ar7));
        }
        break;
      case 4:
        if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x60) < 1) {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a6c),ar6_00,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a88),ar6_00,ar7));
        }
        break;
      case 5:
        (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a5e),ar6_00,ar7));
        break;
      case 6:
        goto switchD_8c0f933e_caseD_6;
      case 7:
        pcVar3 = ((undefined1 *)(unsigned)0x8c140a6c);
        (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a6c),ar6_00,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c0fa658(ar4,pcVar3,ar6_00,ar7));
        if ((1 < iVar1) && (*(undefined4 *)(unsigned)(ar4 + 0x1040) = 0, *(int *)(unsigned)(ar4 + 0xc) == 0)) {
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140a8f),ar6_00,ar7); });
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a98),ar6_00,ar7); });
        }
        break;
      case 8:
        (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a9d),ar6_00,ar7));
        break;
      case 9:
        (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140aa4),ar6_00,ar7));
      }
    }
  }
  else if (ar5 == 4) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1408ea),ar6_00,ar7));
    if ((iVar1 == 0) ||
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1408f5),ar6_00,ar7)), iVar1 == 0)) {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140900),ar6_00,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140906),ar6_00,ar7));
      if (iVar1 == 0) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140911),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140917),ar6_00,ar7));
        if ((((iVar1 == 0) ||
             (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140922),ar6_00,ar7)), iVar1 == 0)) ||
            (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14092d),ar6_00,ar7)), iVar1 == 0)) ||
           ((iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140938),ar6_00,ar7)), iVar1 == 0 ||
            (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140943),ar6_00,ar7)), iVar1 == 0)))) {
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c14094e),ar6_00,ar7); });
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140954),ar6_00,ar7));
          if (((iVar1 == 0) ||
              (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140961),ar6_00,ar7)), iVar1 == 0))
             || (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14096e),ar6_00,ar7)), iVar1 == 0))
          {
            ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c14097b),ar6_00,ar7); });
            ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
          }
          else {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140981),ar6_00,ar7));
            if ((iVar1 == 0) ||
               (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14098e),ar6_00,ar7)), iVar1 == 0))
            {
              ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c14099b),ar6_00,ar7); });
              ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
            }
          }
        }
      }
    }
  }
  else if (ar5 == 5) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1408ea),ar6_00,ar7));
    if ((iVar1 == 0) ||
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1408f5),ar6_00,ar7)), iVar1 == 0)) {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409a1),ar6_00,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140906),ar6_00,ar7));
      if (iVar1 == 0) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409ad),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140917),ar6_00,ar7));
        if ((((iVar1 == 0) ||
             (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140922),ar6_00,ar7)), iVar1 == 0)) ||
            (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14092d),ar6_00,ar7)), iVar1 == 0)) ||
           ((iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140938),ar6_00,ar7)), iVar1 == 0 ||
            (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140943),ar6_00,ar7)), iVar1 == 0)))) {
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409b9),ar6_00,ar7); });
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140954),ar6_00,ar7));
          if (((iVar1 == 0) ||
              (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140961),ar6_00,ar7)), iVar1 == 0))
             || (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14096e),ar6_00,ar7)), iVar1 == 0))
          {
            ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409c5),ar6_00,ar7); });
            ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
          }
          else {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140981),ar6_00,ar7));
            if ((iVar1 == 0) ||
               (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14098e),ar6_00,ar7)), iVar1 == 0))
            {
              ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409d1),ar6_00,ar7); });
              ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
            }
          }
        }
      }
    }
  }
  else if (ar5 == 6) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409dd),ar6_00,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x74)),ar6 + 0x40,ar6_00,ar7); });
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(*(undefined4 *)(unsigned)(ar4 + 0x1050),((undefined1 *)(fr0_ - 0x34)),ar6_00,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(*(int *)(unsigned)(ar4 + 0x1050) + 0x20,((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7); });
  ar5_00 = ((undefined1 *)(fr0_ - 0x74));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(*(int *)(unsigned)(ar4 + 0x1050) + 0x40,ar5_00,ar6_00,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c0f824c(ar4,ar5_00,ar6_00,ar7));
  return uVar2;
}

__asm__(".globl _s_HIGYOLINE0_0f8370\n.set _s_HIGYOLINE0_0f8370, _s_HIGYOLINE0_0f8370_def\n");
