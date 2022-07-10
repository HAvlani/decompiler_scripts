
int strnumcmp(char *a,char *b,int decimal_point,int thousands_sep)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  char *pcVar8;
  ulong uVar9;
  char *pcVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  
  uVar5 = (uint)(byte)*a;
  bVar2 = *b;
  uVar11 = (uint)bVar2;
  cVar7 = (char)decimal_point;
  if (*a == 0x2d) {
    do {
      do {
        bVar3 = a[1];
        a = a + 1;
      } while (bVar3 == 0x30);
      uVar5 = (uint)bVar3;
    } while (thousands_sep == (uint)bVar3);
    if (bVar2 != 0x2d) {
      if (decimal_point == (uint)bVar3) {
        do {
          pbVar1 = (byte *)(a + 1);
          a = a + 1;
        } while (*pbVar1 == 0x30);
        uVar5 = (uint)*pbVar1;
      }
      if (uVar5 - 0x30 < 10) {
        return -1;
      }
      while (((char)uVar11 == '0' || (thousands_sep == uVar11))) {
        pbVar1 = (byte *)(b + 1);
        b = b + 1;
        uVar11 = (uint)*pbVar1;
      }
      if (decimal_point == uVar11) {
        do {
          pbVar1 = (byte *)(b + 1);
          b = b + 1;
        } while (*pbVar1 == 0x30);
        uVar11 = (uint)*pbVar1;
      }
      return -(uint)(uVar11 - 0x30 < 10);
    }
    do {
      do {
        bVar2 = b[1];
        b = b + 1;
      } while (bVar2 == 0x30);
      uVar11 = (uint)bVar2;
    } while (thousands_sep == (uint)bVar2);
    do {
      pcVar8 = b;
      if (((char)uVar5 != (char)uVar11) || (9 < uVar11 - 0x30)) goto LAB_00112918;
      do {
        pbVar1 = (byte *)(a + 1);
        uVar5 = (uint)*pbVar1;
        a = a + 1;
      } while (thousands_sep == (uint)*pbVar1);
      do {
        uVar11 = (uint)(byte)pcVar8[1];
        b = pcVar8 + 1;
        if (thousands_sep != uVar11) break;
        uVar11 = (uint)(byte)pcVar8[2];
        pcVar8 = pcVar8 + 2;
        b = pcVar8;
      } while (thousands_sep == uVar11);
    } while( true );
  }
  if (bVar2 != 0x2d) {
    while (((char)uVar5 == '0' || (thousands_sep == uVar5))) {
      pbVar1 = (byte *)(a + 1);
      a = a + 1;
      uVar5 = (uint)*pbVar1;
    }
    if (bVar2 != 0x30) goto LAB_0011268f;
    do {
      do {
        pbVar1 = (byte *)(b + 1);
        uVar11 = (uint)*pbVar1;
        b = b + 1;
      } while (*pbVar1 == 0x30);
LAB_0011268f:
    } while (thousands_sep == uVar11);
    do {
      pcVar8 = b;
      if (((char)uVar5 != (char)uVar11) || (9 < uVar11 - 0x30)) goto LAB_00112800;
      do {
        uVar5 = (uint)(byte)a[1];
        a = a + 1;
      } while (thousands_sep == uVar5);
      do {
        uVar11 = (uint)(byte)pcVar8[1];
        b = pcVar8 + 1;
        if (thousands_sep != uVar11) break;
        uVar11 = (uint)(byte)pcVar8[2];
        pcVar8 = pcVar8 + 2;
        b = pcVar8;
      } while (thousands_sep == uVar11);
    } while( true );
  }
  do {
    do {
      bVar2 = b[1];
      uVar11 = (uint)bVar2;
      b = b + 1;
    } while (bVar2 == 0x30);
  } while (thousands_sep == (uint)bVar2);
  if (decimal_point == (uint)bVar2) {
    do {
      uVar11 = (uint)(byte)b[1];
      if (b[1] != 0x30) break;
      pbVar1 = (byte *)(b + 2);
      uVar11 = (uint)*pbVar1;
      b = b + 2;
    } while (*pbVar1 == 0x30);
  }
  if (uVar11 - 0x30 < 10) {
    return 1;
  }
  while (((char)uVar5 == '0' || (thousands_sep == uVar5))) {
    pbVar1 = (byte *)(a + 1);
    a = a + 1;
    uVar5 = (uint)*pbVar1;
  }
  if (decimal_point == uVar5) {
    do {
      pbVar1 = (byte *)(a + 1);
      a = a + 1;
    } while (*pbVar1 == 0x30);
    uVar5 = (uint)*pbVar1;
  }
  goto LAB_001127cf;
LAB_00112918:
  if ((decimal_point != uVar5) || (uVar11 - 0x30 < 10)) {
    if (decimal_point == uVar11) {
      uVar13 = decimal_point - 0x30;
      iVar4 = decimal_point - uVar5;
      if (9 < uVar5 - 0x30) goto LAB_001129d5;
    }
    else {
      uVar13 = uVar11 - 0x30;
      iVar4 = uVar11 - uVar5;
      if (9 < uVar5 - 0x30) {
        uVar12 = 0;
        if (9 < uVar13) {
          return 0;
        }
        goto LAB_00112966;
      }
    }
    uVar12 = 0;
    do {
      do {
        pbVar1 = (byte *)(a + 1);
        a = a + 1;
      } while (thousands_sep == (uint)*pbVar1);
      uVar12 = uVar12 + 1;
    } while (*pbVar1 - 0x30 < 10);
    if (9 < uVar13) {
      return -(uint)(uVar12 != 0);
    }
LAB_00112966:
    uVar9 = 0;
    do {
      do {
        pbVar1 = (byte *)(pcVar8 + 1);
        pcVar8 = pcVar8 + 1;
      } while (thousands_sep == (uint)*pbVar1);
      uVar9 = uVar9 + 1;
    } while (*pbVar1 - 0x30 < 10);
    if (uVar9 != uVar12) {
      return (-(uint)(uVar12 < uVar9) & 2) - 1;
    }
    if (uVar9 == 0) {
      iVar4 = 0;
    }
    return iVar4;
  }
LAB_001129d5:
  if (cVar7 == *pcVar8) {
    if (cVar7 == *a) {
      do {
        cVar7 = pcVar8[1];
        cVar6 = a[1];
        pcVar8 = pcVar8 + 1;
        a = a + 1;
        uVar5 = (int)cVar7 - 0x30;
        if (cVar7 != cVar6) {
          uVar11 = (int)cVar6 - 0x30;
          if (uVar5 < 10) {
            if (9 < uVar11) goto LAB_00112ac4;
            return (int)cVar7 - (int)cVar6;
          }
          if (uVar11 < 10) goto LAB_001129f4;
          return 0;
        }
      } while (uVar5 < 10);
      return 0;
    }
    do {
      pcVar8 = pcVar8 + 1;
LAB_00112ac4:
      uVar5 = (uint)*pcVar8;
    } while (*pcVar8 == '0');
LAB_001127cf:
    return (int)(uVar5 - 0x30 < 10);
  }
  if (cVar7 != *a) {
    return 0;
  }
  do {
    a = a + 1;
LAB_001129f4:
    cVar7 = *a;
  } while (cVar7 == '0');
  goto LAB_001128f0;
LAB_00112800:
  if ((decimal_point != uVar5) || (uVar11 - 0x30 < 10)) {
    if (decimal_point == uVar11) {
      iVar4 = uVar5 - decimal_point;
      uVar11 = decimal_point - 0x30;
      if (9 < uVar5 - 0x30) goto LAB_001128be;
    }
    else {
      iVar4 = uVar5 - uVar11;
      uVar11 = uVar11 - 0x30;
      if (9 < uVar5 - 0x30) {
        uVar12 = 0;
        if (9 < uVar11) {
          return 0;
        }
        goto LAB_00112852;
      }
    }
    uVar12 = 0;
    do {
      do {
        pbVar1 = (byte *)(a + 1);
        a = a + 1;
      } while (thousands_sep == (uint)*pbVar1);
      uVar12 = uVar12 + 1;
    } while (*pbVar1 - 0x30 < 10);
    if (9 < uVar11) {
      return (uint)(uVar12 != 0);
    }
LAB_00112852:
    uVar9 = 0;
    do {
      do {
        pbVar1 = (byte *)(pcVar8 + 1);
        pcVar8 = pcVar8 + 1;
      } while (thousands_sep == (uint)*pbVar1);
      uVar9 = uVar9 + 1;
    } while (*pbVar1 - 0x30 < 10);
    if (uVar12 != uVar9) {
      return -(uint)(uVar12 < uVar9) | 1;
    }
    if (uVar12 == 0) {
      iVar4 = 0;
    }
    return iVar4;
  }
LAB_001128be:
  if (cVar7 == *a) {
    iVar4 = (int)a[1];
    if (cVar7 != *pcVar8) {
      pcVar10 = a + 1;
LAB_00112a48:
      while ((char)iVar4 == '0') {
        pcVar8 = pcVar10 + 1;
        pcVar10 = pcVar10 + 1;
        iVar4 = (int)*pcVar8;
      }
      return (uint)(iVar4 - 0x30U < 10);
    }
    while( true ) {
      cVar7 = pcVar8[1];
      cVar6 = (char)iVar4;
      pcVar8 = pcVar8 + 1;
      pcVar10 = a + 1;
      uVar5 = (int)cVar6 - 0x30;
      if (cVar7 != cVar6) break;
      if (9 < uVar5) {
        return 0;
      }
      iVar4 = (int)a[2];
      a = pcVar10;
    }
    uVar11 = (int)cVar7 - 0x30;
    if (uVar5 < 10) {
      if (uVar11 < 10) {
        return (int)cVar6 - (int)cVar7;
      }
      goto LAB_00112a48;
    }
    if (9 < uVar11) {
      return 0;
    }
  }
  else {
    if (cVar7 != *pcVar8) {
      return 0;
    }
    cVar7 = pcVar8[1];
    pcVar8 = pcVar8 + 1;
  }
  while (cVar7 == '0') {
    pcVar10 = pcVar8 + 1;
    pcVar8 = pcVar8 + 1;
    cVar7 = *pcVar10;
  }
LAB_001128f0:
  return -(uint)((int)cVar7 - 0x30U < 10);
}

