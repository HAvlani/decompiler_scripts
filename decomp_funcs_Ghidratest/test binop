
_Bool binop(char *s)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  _Bool _Var9;
  
  if ((*s != '=') || (_Var9 = true, s[1] != '\0')) {
    bVar1 = *s;
    if ((bVar1 == 0x21) && ((s[1] == '=' && (s[2] == '\0')))) {
      return true;
    }
    bVar6 = bVar1 < 0x3d;
    bVar8 = bVar1 == 0x3d;
    if (bVar8) {
      bVar6 = (byte)s[1] < 0x3d;
      bVar8 = s[1] == 0x3d;
      if (bVar8) {
        bVar6 = false;
        bVar8 = s[2] == '\0';
        if (bVar8) {
          return true;
        }
      }
    }
    lVar3 = 4;
    _Var9 = true;
    pbVar4 = (byte *)s;
    pbVar5 = &DAT_0010a004;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar6 = *pbVar4 < *pbVar5;
      bVar8 = *pbVar4 == *pbVar5;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (bVar8);
    bVar7 = false;
    bVar6 = (!bVar6 && !bVar8) == bVar6;
    if (!bVar6) {
      lVar3 = 4;
      pbVar4 = (byte *)s;
      pbVar5 = &DAT_0010a008;
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar7 = *pbVar4 < *pbVar5;
        bVar6 = *pbVar4 == *pbVar5;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
      } while (bVar6);
      bVar8 = false;
      bVar6 = (!bVar7 && !bVar6) == bVar7;
      if (!bVar6) {
        lVar3 = 4;
        pbVar4 = (byte *)s;
        pbVar5 = &DAT_0010a00c;
        do {
          if (lVar3 == 0) break;
          lVar3 = lVar3 + -1;
          bVar8 = *pbVar4 < *pbVar5;
          bVar6 = *pbVar4 == *pbVar5;
          pbVar4 = pbVar4 + 1;
          pbVar5 = pbVar5 + 1;
        } while (bVar6);
        bVar7 = false;
        bVar6 = (!bVar8 && !bVar6) == bVar8;
        if (!bVar6) {
          lVar3 = 4;
          pbVar4 = (byte *)s;
          pbVar5 = &DAT_0010a010;
          do {
            if (lVar3 == 0) break;
            lVar3 = lVar3 + -1;
            bVar7 = *pbVar4 < *pbVar5;
            bVar6 = *pbVar4 == *pbVar5;
            pbVar4 = pbVar4 + 1;
            pbVar5 = pbVar5 + 1;
          } while (bVar6);
          bVar8 = false;
          bVar6 = (!bVar7 && !bVar6) == bVar7;
          if (!bVar6) {
            lVar3 = 4;
            pbVar4 = (byte *)s;
            pbVar5 = &DAT_0010a014;
            do {
              if (lVar3 == 0) break;
              lVar3 = lVar3 + -1;
              bVar8 = *pbVar4 < *pbVar5;
              bVar6 = *pbVar4 == *pbVar5;
              pbVar4 = pbVar4 + 1;
              pbVar5 = pbVar5 + 1;
            } while (bVar6);
            bVar7 = false;
            bVar6 = (!bVar8 && !bVar6) == bVar8;
            if (!bVar6) {
              lVar3 = 4;
              pbVar4 = (byte *)s;
              pbVar5 = &DAT_0010a018;
              do {
                if (lVar3 == 0) break;
                lVar3 = lVar3 + -1;
                bVar7 = *pbVar4 < *pbVar5;
                bVar6 = *pbVar4 == *pbVar5;
                pbVar4 = pbVar4 + 1;
                pbVar5 = pbVar5 + 1;
              } while (bVar6);
              bVar8 = false;
              bVar6 = (!bVar7 && !bVar6) == bVar7;
              if (!bVar6) {
                lVar3 = 4;
                pbVar4 = (byte *)s;
                pbVar5 = &DAT_0010a01c;
                do {
                  if (lVar3 == 0) break;
                  lVar3 = lVar3 + -1;
                  bVar8 = *pbVar4 < *pbVar5;
                  bVar6 = *pbVar4 == *pbVar5;
                  pbVar4 = pbVar4 + 1;
                  pbVar5 = pbVar5 + 1;
                } while (bVar6);
                if (((!bVar8 && !bVar6) != bVar8) && (iVar2 = strcmp(s,"-gt"), iVar2 != 0)) {
                  iVar2 = strcmp(s,"-ge");
                  _Var9 = iVar2 == 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return _Var9;
}

