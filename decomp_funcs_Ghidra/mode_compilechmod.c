
mode_change * mode_compile(char *mode_string)

{
  mode_change *pmVar1;
  uint uVar2;
  byte *pbVar3;
  char *pcVar4;
  byte bVar5;
  uint uVar6;
  char cVar7;
  mode_t mVar8;
  size_t n;
  byte *pbVar9;
  byte bVar10;
  uint uVar11;
  long lVar12;
  mode_change *pmVar13;
  long lVar14;
  bool bVar15;
  
  bVar10 = *mode_string;
  uVar6 = (uint)(char)bVar10;
  if ((byte)(bVar10 - 0x30) < 8) {
    uVar11 = 0;
    pcVar4 = mode_string;
    do {
      uVar11 = (uVar6 - 0x30) + uVar11 * 8;
      pcVar4 = pcVar4 + 1;
      if (0xfff < uVar11) {
        return (mode_change *)0x0;
      }
      cVar7 = *pcVar4;
      uVar6 = (uint)cVar7;
    } while ((byte)(cVar7 - 0x30U) < 8);
    if (cVar7 != '\0') {
      return (mode_change *)0x0;
    }
    mVar8 = uVar11 & 0xc00 | 0x3ff;
    if (4 < (long)pcVar4 - (long)mode_string) {
      mVar8 = 0xfff;
    }
    pmVar1 = (mode_change *)xmalloc(0x20);
    *(undefined2 *)pmVar1 = 0x13d;
    pmVar1->affected = 0xfff;
    pmVar1->value = uVar11;
    pmVar1->mentioned = mVar8;
    pmVar1[1].flag = '\0';
    return pmVar1;
  }
  n = 1;
  pbVar3 = (byte *)mode_string;
  while (bVar10 != 0) {
    bVar5 = (byte)uVar6;
    pbVar3 = pbVar3 + 1;
    bVar10 = *pbVar3;
    uVar6 = (uint)bVar10;
    n = n + ((bVar5 & 0xef) == 0x2d || bVar5 == 0x2b);
  }
  pmVar1 = (mode_change *)xnmalloc(n,0x10);
  lVar12 = 0;
LAB_001075e7:
  bVar10 = *mode_string;
  uVar11 = 0;
  cVar7 = bVar10 + 0x99;
  bVar15 = bVar10 == 0x67;
  uVar6 = 0;
  if (bVar15) goto LAB_00107642;
  do {
    uVar11 = (uint)bVar10;
    if (bVar15 || SBORROW1(bVar10,'g') != cVar7 < '\0') {
      if (bVar10 != 0x61) break;
      uVar11 = 0xfff;
      mode_string = (char *)((byte *)mode_string + 1);
    }
    else if (bVar10 == 0x6f) {
      uVar11 = uVar6 | 0x207;
      mode_string = (char *)((byte *)mode_string + 1);
    }
    else {
      if (bVar10 != 0x75) goto invalid;
      uVar11 = uVar6 | 0x9c0;
      mode_string = (char *)((byte *)mode_string + 1);
    }
    while( true ) {
      bVar10 = *mode_string;
      cVar7 = bVar10 + 0x99;
      bVar15 = cVar7 == '\0';
      uVar6 = uVar11;
      if (!bVar15) break;
LAB_00107642:
      uVar11 = uVar11 | 0x438;
      mode_string = (char *)((byte *)mode_string + 1);
    }
  } while( true );
  if (((char)bVar10 < 'b') && (((bVar10 & 0xef) == 0x2d || (bVar10 == 0x2b)))) {
    bVar5 = ((byte *)mode_string)[1];
    lVar14 = lVar12 + 1;
    pmVar13 = pmVar1 + lVar12;
    cVar7 = bVar5 + 0x91;
    bVar15 = bVar5 == 0x6f;
    if (bVar15) goto LAB_00107715;
LAB_00107680:
    pbVar9 = (byte *)mode_string + 1;
    bVar10 = (byte)uVar11;
    pbVar3 = (byte *)mode_string;
    uVar11 = (int)(char)bVar5;
    if (bVar15 || SBORROW1(bVar5,'o') != cVar7 < '\0') {
      if ((char)bVar5 < '8') {
        if ('/' < (char)bVar5) {
          uVar2 = 0;
          mode_string = (char *)pbVar9;
          goto LAB_0010776a;
        }
      }
      else {
        uVar2 = 0x38;
        mode_string = (char *)((byte *)mode_string + 2);
        if (bVar5 == 0x67) goto LAB_00107732;
      }
    }
    else {
      uVar2 = 0x1c0;
      mode_string = (char *)((byte *)mode_string + 2);
      if (bVar5 == 0x75) goto LAB_00107732;
    }
    cVar7 = '\x01';
    uVar2 = 0;
    mode_string = (char *)pbVar9;
    do {
      switch((char)uVar11) {
      case 'X':
        cVar7 = '\x02';
        break;
      default:
        goto no_more_values;
      case 'r':
        uVar2 = uVar2 | 0x124;
        break;
      case 's':
        uVar2 = uVar2 | 0xc00;
        break;
      case 't':
        uVar2 = uVar2 | 0x200;
        break;
      case 'w':
        uVar2 = uVar2 | 0x92;
        break;
      case 'x':
        uVar2 = uVar2 | 0x49;
      }
      mode_string = (char *)((byte *)mode_string + 1);
      uVar11 = (uint)(byte)*mode_string;
    } while( true );
  }
  goto invalid;
no_more_values:
  pmVar13->affected = uVar6;
  pmVar13->value = uVar2;
  pmVar13->op = bVar10;
  pmVar13->flag = cVar7;
  while( true ) {
    lVar12 = lVar14;
    if (uVar6 != 0) {
      uVar2 = uVar2 & uVar6;
    }
LAB_001076e0:
    pmVar13->mentioned = uVar2;
    lVar14 = lVar12 + 1;
    pmVar13 = pmVar13 + 1;
    bVar10 = (byte)uVar11;
    if (((bVar10 & 0xef) != 0x2d) && (bVar10 != 0x2b)) {
      if (bVar10 != 0x2c) {
        if (bVar10 == 0) {
          pmVar1[lVar12].flag = '\0';
          return pmVar1;
        }
        goto invalid;
      }
      mode_string = (char *)((byte *)mode_string + 1);
      goto LAB_001075e7;
    }
    bVar5 = ((byte *)mode_string)[1];
    cVar7 = bVar5 + 0x91;
    bVar15 = cVar7 == '\0';
    if (!bVar15) break;
LAB_00107715:
    uVar2 = 7;
    pbVar3 = (byte *)mode_string;
    mode_string = (char *)((byte *)mode_string + 2);
LAB_00107732:
    pmVar13->op = bVar10;
    uVar11 = (uint)pbVar3[2];
    pmVar13->flag = '\x03';
    pmVar13->affected = uVar6;
    pmVar13->value = uVar2;
  }
  goto LAB_00107680;
  while( true ) {
    bVar5 = *mode_string;
    uVar11 = (uint)(char)bVar5;
    if (7 < (byte)(bVar5 - 0x30)) break;
LAB_0010776a:
    uVar2 = (uVar11 - 0x30) + uVar2 * 8;
    mode_string = (char *)((byte *)mode_string + 1);
    if (0xfff < uVar2) goto invalid;
  }
  if ((uVar6 == 0) && ((bVar5 == 0 || (bVar5 == 0x2c)))) {
    pmVar13->op = bVar10;
    uVar6 = 0xfff;
    pmVar13->value = uVar2;
    uVar2 = 0xfff;
    pmVar13->flag = '\x01';
    pmVar13->affected = 0xfff;
    lVar12 = lVar14;
    goto LAB_001076e0;
  }
invalid:
  rpl_free(pmVar1);
  return (mode_change *)0x0;
}

