
int strintcmp(char *a,char *b)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  byte bVar9;
  char *pcVar10;
  uint uVar11;
  
  bVar3 = *a;
  bVar9 = *b;
  if (bVar3 != 0x2d) {
    if (bVar9 == 0x2d) {
      do {
        do {
          bVar9 = b[1];
          b = b + 1;
        } while (bVar9 == 0x30);
      } while (bVar9 == 0x80);
      if (bVar9 - 0x30 < 10) {
        return 1;
      }
      while ((bVar3 == 0x30 || (bVar3 == 0x80))) {
        pbVar1 = (byte *)(a + 1);
        a = a + 1;
        bVar3 = *pbVar1;
      }
      uVar5 = (uint)bVar3;
      goto LAB_0011e9c3;
    }
    if ((bVar3 == 0x30) || (bVar3 == 0x80)) {
      do {
        do {
          bVar3 = a[1];
          a = a + 1;
        } while (bVar3 == 0x80);
      } while (bVar3 == 0x30);
    }
    if ((bVar9 == 0x30) || (bVar9 == 0x80)) {
      do {
        do {
          bVar9 = b[1];
          b = b + 1;
        } while (bVar9 == 0x80);
      } while (bVar9 == 0x30);
    }
    uVar5 = (uint)bVar9;
    uVar11 = (uint)bVar3;
    if ((bVar9 == bVar3) && (uVar11 = uVar5, bVar9 - 0x30 < 10)) {
      do {
        do {
          bVar3 = a[1];
          a = a + 1;
        } while (bVar3 == 0x80);
        do {
          bVar9 = b[1];
          uVar5 = (uint)bVar9;
          b = b + 1;
        } while (bVar9 == 0x80);
        uVar11 = (uint)bVar3;
        if (bVar3 != bVar9) goto LAB_0011e7ae;
      } while (bVar3 - 0x30 < 10);
      uVar5 = (uint)bVar3;
    }
LAB_0011e7ae:
    if (uVar11 == 0x80) {
      if ((9 < uVar5 - 0x30) || (uVar5 == 0x80)) {
LAB_0011ea08:
        if (*a == -0x80) {
          iVar4 = (int)a[1];
          if (*b != -0x80) {
            pcVar10 = a + 1;
LAB_0011eb38:
            while ((char)iVar4 == '0') {
              pcVar2 = pcVar10 + 1;
              pcVar10 = pcVar10 + 1;
              iVar4 = (int)*pcVar2;
            }
            return (uint)(iVar4 - 0x30U < 10);
          }
          while( true ) {
            bVar3 = b[1];
            bVar9 = (byte)iVar4;
            b = b + 1;
            pcVar10 = a + 1;
            uVar5 = (int)(char)bVar9 - 0x30;
            if (bVar3 != bVar9) break;
            if (9 < uVar5) {
              return 0;
            }
            iVar4 = (int)a[2];
            a = pcVar10;
          }
          uVar11 = (int)(char)bVar3 - 0x30;
          if (uVar5 < 10) {
            if (uVar11 < 10) {
              return (int)(char)bVar9 - (int)(char)bVar3;
            }
            goto LAB_0011eb38;
          }
          if (9 < uVar11) {
            return 0;
          }
        }
        else {
          if (*b != -0x80) {
            return 0;
          }
          bVar3 = b[1];
          b = b + 1;
        }
        while (bVar3 == 0x30) {
          pbVar1 = (byte *)(b + 1);
          b = b + 1;
          bVar3 = *pbVar1;
        }
        goto LAB_0011ea40;
      }
      iVar4 = 0x80 - uVar5;
      uVar6 = 0;
    }
    else {
      if (uVar5 == 0x80) {
        iVar4 = uVar11 - 0x80;
        uVar5 = 0x50;
        if (9 < uVar11 - 0x30) goto LAB_0011ea08;
      }
      else {
        iVar4 = uVar11 - uVar5;
        uVar5 = uVar5 - 0x30;
        if (9 < uVar11 - 0x30) {
          if (9 < uVar5) {
            return 0;
          }
          uVar6 = 0;
          goto LAB_0011e802;
        }
      }
      uVar6 = 0;
      do {
        do {
          pbVar1 = (byte *)(a + 1);
          a = a + 1;
        } while (*pbVar1 == 0x80);
        uVar6 = uVar6 + 1;
      } while (*pbVar1 - 0x30 < 10);
      if (9 < uVar5) {
        return (uint)(uVar6 != 0);
      }
    }
LAB_0011e802:
    uVar8 = 0;
    do {
      do {
        pbVar1 = (byte *)(b + 1);
        b = b + 1;
      } while (*pbVar1 == 0x80);
      uVar8 = uVar8 + 1;
    } while (*pbVar1 - 0x30 < 10);
    if (uVar6 != uVar8) {
      return -(uint)(uVar6 < uVar8) | 1;
    }
    goto LAB_0011e9d8;
  }
  do {
    do {
      bVar3 = ((byte *)a)[1];
      a = (char *)((byte *)a + 1);
    } while (bVar3 == 0x30);
    uVar5 = (uint)bVar3;
  } while (bVar3 == 0x80);
  uVar11 = bVar3 - 0x30;
  if (bVar9 != 0x2d) {
    if (9 < uVar11) {
      while ((bVar9 == 0x30 || (bVar9 == 0x80))) {
        pbVar1 = (byte *)(b + 1);
        b = b + 1;
        bVar9 = *pbVar1;
      }
      return -(uint)(bVar9 - 0x30 < 10);
    }
    return -1;
  }
  do {
    do {
      bVar9 = ((byte *)b)[1];
      b = (char *)((byte *)b + 1);
    } while (bVar9 == 0x80);
  } while (bVar9 == 0x30);
  if (bVar3 == bVar9) {
    if (uVar11 < 10) {
      do {
        do {
          bVar3 = ((byte *)a)[1];
          a = (char *)((byte *)a + 1);
        } while (bVar3 == 0x80);
        do {
          bVar9 = ((byte *)b)[1];
          b = (char *)((byte *)b + 1);
        } while (bVar9 == 0x80);
      } while ((bVar3 == bVar9) && (bVar3 - 0x30 < 10));
      uVar5 = (uint)bVar3;
      uVar11 = bVar3 - 0x30;
      if (uVar5 != 0x80) goto LAB_0011e924;
      uVar5 = (uint)bVar9;
      if ((uVar5 - 0x30 < 10) && (uVar5 != 0x80)) {
        iVar4 = uVar5 - 0x80;
        uVar8 = 0;
        goto LAB_0011e972;
      }
    }
    else {
      if (uVar5 != 0x80) {
        uVar7 = bVar3 - 0x30;
        iVar4 = 0;
        goto LAB_0011ec12;
      }
LAB_0011ea95:
      bVar9 = *b;
      bVar3 = *a;
    }
    if (bVar9 != 0x80) {
      if (bVar3 == 0x80) goto LAB_0011eac0;
      return 0;
    }
    if (bVar3 != 0x80) goto LAB_0011eba8;
    while( true ) {
      bVar3 = ((byte *)b)[1];
      bVar9 = ((byte *)a)[1];
      b = (char *)((byte *)b + 1);
      a = (char *)((byte *)a + 1);
      uVar5 = (int)(char)bVar3 - 0x30;
      if (bVar3 != bVar9) break;
      if (9 < uVar5) {
        return 0;
      }
    }
    uVar11 = (int)(char)bVar9 - 0x30;
    if (uVar5 < 10) {
      if (uVar11 < 10) {
        return (int)(char)bVar3 - (int)(char)bVar9;
      }
      for (; uVar5 = (uint)*b, *b == 0x30; b = (char *)((byte *)b + 1)) {
LAB_0011eba8:
      }
LAB_0011e9c3:
      return (int)(uVar5 - 0x30 < 10);
    }
    if (9 < uVar11) {
      return 0;
    }
    for (; bVar3 = *a, bVar3 == 0x30; a = (char *)((byte *)a + 1)) {
LAB_0011eac0:
    }
LAB_0011ea40:
    return -(uint)((int)(char)bVar3 - 0x30U < 10);
  }
LAB_0011e924:
  if (bVar9 == 0x80) {
    iVar4 = bVar9 - uVar5;
    uVar7 = 0x50;
    if (9 < uVar11) goto LAB_0011ea95;
LAB_0011e943:
    uVar8 = 0;
    do {
      do {
        pbVar1 = (byte *)a + 1;
        a = (char *)((byte *)a + 1);
      } while (*pbVar1 == 0x80);
      uVar8 = uVar8 + 1;
    } while (*pbVar1 - 0x30 < 10);
    if (9 < uVar7) {
      return -(uint)(uVar8 != 0);
    }
  }
  else {
    uVar7 = bVar9 - 0x30;
    iVar4 = bVar9 - uVar5;
    if (uVar11 < 10) goto LAB_0011e943;
LAB_0011ec12:
    uVar8 = 0;
    if (9 < uVar7) {
      return 0;
    }
  }
LAB_0011e972:
  uVar6 = 0;
  do {
    do {
      pbVar1 = (byte *)b + 1;
      b = (char *)((byte *)b + 1);
    } while (*pbVar1 == 0x80);
    uVar6 = uVar6 + 1;
  } while (*pbVar1 - 0x30 < 10);
  if (uVar6 != uVar8) {
    return (-(uint)(uVar8 < uVar6) & 2) - 1;
  }
LAB_0011e9d8:
  if (uVar6 == 0) {
    iVar4 = 0;
  }
  return iVar4;
}

