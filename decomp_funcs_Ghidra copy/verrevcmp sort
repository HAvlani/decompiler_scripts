
int verrevcmp(char *s1,idx_t s1_len,char *s2,idx_t s2_len)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  lVar4 = 0;
  lVar7 = 0;
  if ((s1_len < 1) && (s2_len < 1)) {
    return 0;
  }
LAB_0010d477:
  lVar5 = lVar7 - lVar4;
  if (s1_len <= lVar4) goto LAB_0010d50b;
LAB_0010d486:
  bVar1 = s1[lVar4];
  if ((int)(char)bVar1 - 0x30U < 10) goto LAB_0010d50b;
  if (9 < bVar1 - 0x30) goto LAB_0010d543;
  uVar9 = 0;
  lVar2 = lVar7;
joined_r0x0010d4b1:
  if (lVar2 == s2_len) {
    uVar12 = 0xffffffff;
LAB_0010d659:
    return uVar9 - uVar12;
  }
LAB_0010d4b7:
  uVar6 = (uint)(byte)s2[lVar7];
  uVar10 = uVar6;
  uVar12 = 0;
  if ((byte)s2[lVar7] - 0x30 < 10) goto LAB_0010d4f1;
  do {
    cVar8 = (char)uVar10;
    uVar12 = uVar6;
    if (cVar8 < '[') {
      if (cVar8 < 'A') {
LAB_0010d4e0:
        if (cVar8 == '~') {
          uVar12 = 0xfffffffe;
        }
        else {
          uVar12 = uVar6 + 0x100;
        }
      }
    }
    else if (0x19 < (byte)(cVar8 + 0x9fU)) goto LAB_0010d4e0;
LAB_0010d4f1:
    if (uVar12 != uVar9) goto LAB_0010d659;
    lVar4 = lVar4 + 1;
    lVar7 = lVar7 + 1;
    if (lVar4 < s1_len) goto LAB_0010d486;
LAB_0010d50b:
    if ((s2_len <= lVar7) || (uVar10 = (uint)s2[lVar7], uVar10 - 0x30 < 10)) {
      if (s1_len <= lVar4) goto LAB_0010d6a0;
      break;
    }
    if (lVar4 != s1_len) goto code_r0x0010d52b;
    uVar6 = uVar10 & 0xff;
    uVar9 = 0xffffffff;
    if (uVar6 - 0x30 < 10) {
      uVar12 = 0;
      goto LAB_0010d659;
    }
  } while( true );
  while (lVar4 = lVar4 + 1, s1_len != lVar4) {
    if (s1[lVar4] != '0') {
      if (s2_len <= lVar7) goto LAB_0010d6b0;
      goto LAB_0010d5ad;
    }
  }
LAB_0010d6a0:
  if (s2_len <= lVar7) goto LAB_0010d5fd;
LAB_0010d5ad:
  do {
    if (s2[lVar7] != '0') {
      iVar11 = 0;
      iVar3 = 0;
      if (lVar4 < s1_len) goto LAB_0010d5c0;
      goto LAB_0010d72b;
    }
    lVar7 = lVar7 + 1;
  } while (s2_len != lVar7);
LAB_0010d6b0:
  if (s1_len <= lVar4) goto LAB_0010d5fd;
  iVar11 = 0;
LAB_0010d6bc:
  if ((int)s1[lVar4] - 0x30U < 10) {
    return 1;
  }
  goto LAB_0010d5dc;
  while( true ) {
    if (9 < (int)s2[lVar7] - 0x30U) {
      return 1;
    }
    if (iVar11 == 0) {
      iVar11 = (int)s1[lVar4] - (int)s2[lVar7];
    }
    lVar4 = lVar4 + 1;
    lVar7 = lVar7 + 1;
    iVar3 = iVar11;
    if (s1_len <= lVar4) break;
LAB_0010d5c0:
    iVar11 = iVar3;
    if (s2_len <= lVar7) goto LAB_0010d72b;
    if (9 < (int)s1[lVar4] - 0x30U) break;
  }
LAB_0010d5dc:
  if ((lVar7 < s2_len) && ((int)s2[lVar7] - 0x30U < 10)) {
    return -1;
  }
  if (iVar11 != 0) {
    return iVar11;
  }
LAB_0010d5fd:
  if ((s1_len <= lVar4) && (s2_len <= lVar7)) {
    return 0;
  }
  goto LAB_0010d477;
LAB_0010d72b:
  if (lVar4 < s1_len) goto LAB_0010d6bc;
  goto LAB_0010d5dc;
code_r0x0010d52b:
  bVar1 = s1[lVar4];
  uVar9 = 0;
  if (9 < bVar1 - 0x30) goto LAB_0010d543;
  goto LAB_0010d4b7;
LAB_0010d543:
  uVar9 = (uint)bVar1;
  if ((char)bVar1 < '[') {
    if ((char)bVar1 < 'A') {
LAB_0010d55a:
      lVar2 = lVar7;
      if (bVar1 == 0x7e) {
        uVar9 = 0xfffffffe;
      }
      else {
        uVar9 = bVar1 + 0x100;
      }
      goto joined_r0x0010d4b1;
    }
  }
  else if (0x19 < (byte)(bVar1 + 0x9f)) goto LAB_0010d55a;
  lVar2 = lVar5 + lVar4;
  goto joined_r0x0010d4b1;
}

