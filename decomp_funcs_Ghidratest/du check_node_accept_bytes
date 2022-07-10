
/* WARNING: Unknown calling convention yet parameter storage is locked */

int check_node_accept_bytes(void)

{
  byte bVar1;
  wint_t __wc;
  long *plVar2;
  ulong uVar3;
  uchar *puVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  re_string_t *in_RCX;
  long in_RDX;
  uchar *puVar10;
  long lVar11;
  ulong *in_RSI;
  long in_RDI;
  long in_R8;
  long **pplVar12;
  char cVar13;
  
  pplVar12 = (long **)(in_RDI + in_RDX * 0x10);
  cVar13 = *(char *)(pplVar12 + 1);
  if (cVar13 == '\a') {
    puVar4 = in_RCX->mbs;
    bVar5 = puVar4[in_R8];
    if (bVar5 < 0xc2) {
      return 0;
    }
    if (in_RCX->len <= in_R8 + 1) {
      return 0;
    }
    bVar1 = puVar4[in_R8 + 1];
    if (bVar5 < 0xe0) {
      if (0x3f < (byte)(bVar1 + 0x80)) {
        return 0;
      }
      return 2;
    }
    if (bVar5 < 0xf0) {
      if ((bVar5 == 0xe0) && (bVar1 < 0xa0)) {
        return 0;
      }
      lVar11 = 3;
      iVar6 = 3;
    }
    else if (bVar5 < 0xf8) {
      if ((bVar5 == 0xf0) && (bVar1 < 0x90)) {
        return 0;
      }
      lVar11 = 4;
      iVar6 = 4;
    }
    else if (bVar5 < 0xfc) {
      if ((bVar5 == 0xf8) && (bVar1 < 0x88)) {
        return 0;
      }
      lVar11 = 5;
      iVar6 = 5;
    }
    else {
      if (0xfd < bVar5) {
        return 0;
      }
      if ((bVar5 == 0xfc) && (bVar1 < 0x84)) {
        return 0;
      }
      lVar11 = 6;
      iVar6 = 6;
    }
    if (in_RCX->len < in_R8 + lVar11) {
      return 0;
    }
    puVar10 = puVar4 + in_R8 + 1;
    do {
      if (0x3f < (byte)(*puVar10 + 0x80)) {
        return 0;
      }
      puVar10 = puVar10 + 1;
    } while (puVar4 + lVar11 + in_R8 != puVar10);
    return iVar6;
  }
  if (in_RCX->mb_cur_max == 1) {
    return 0;
  }
  iVar6 = re_string_char_size_at(in_RCX,in_R8);
  if (cVar13 == '\x05') {
    if (iVar6 == 1) {
      return 0;
    }
    if (((*in_RSI & 0x40) == 0) && (in_RCX->mbs[in_R8] == '\n')) {
      return 0;
    }
    if ((*in_RSI & 0x80) == 0) {
      return iVar6;
    }
    bVar5 = in_RCX->mbs[in_R8];
  }
  else {
    if (cVar13 != '\x06') {
      return 0;
    }
    if (iVar6 == 1) {
      return 0;
    }
    plVar2 = *pplVar12;
    lVar11 = plVar2[8];
    uVar3 = plVar2[5];
    if ((lVar11 != 0) || ((uVar3 | plVar2[9]) != 0)) {
      __wc = in_RCX->wcs[in_R8];
      if (0 < (long)uVar3) {
        uVar8 = 0;
        do {
          if (__wc == *(wint_t *)(*plVar2 + uVar8 * 4)) goto check_node_accept_bytes_match;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar3);
      }
      if (0 < plVar2[9]) {
        lVar11 = 0;
        do {
          iVar7 = iswctype(__wc,*(wctype_t *)(plVar2[3] + lVar11 * 8));
          if (iVar7 != 0) goto check_node_accept_bytes_match;
          lVar11 = lVar11 + 1;
        } while (lVar11 < plVar2[9]);
        lVar11 = plVar2[8];
      }
      if (0 < lVar11) {
        lVar9 = 0;
        do {
          if ((*(int *)(plVar2[1] + lVar9 * 4) <= (int)__wc) &&
             ((int)__wc <= *(int *)(plVar2[2] + lVar9 * 4))) {
check_node_accept_bytes_match:
            if ((*(byte *)(plVar2 + 4) & 1) != 0) {
              return 0;
            }
            return iVar6;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 != lVar11);
      }
    }
    bVar5 = *(byte *)(plVar2 + 4) & 1;
  }
  if (bVar5 == 0) {
    return 0;
  }
  return iVar6;
}

