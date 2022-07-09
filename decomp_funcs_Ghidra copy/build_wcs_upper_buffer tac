
reg_errcode_t build_wcs_upper_buffer(re_string_t *pstr)

{
  byte bVar1;
  wint_t *pwVar2;
  uchar *puVar3;
  wchar_t wVar4;
  reg_errcode_t rVar5;
  wchar_t wVar6;
  int iVar7;
  wint_t wVar8;
  size_t sVar9;
  size_t sVar10;
  wint_t *pwVar11;
  ulong uVar12;
  ulong uVar13;
  Idx *pIVar14;
  ulong uVar15;
  long lVar16;
  uchar *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  mbstate_t *local_c0;
  uint local_b8;
  size_t local_b0;
  wchar_t *local_a8;
  wchar_t wc;
  mbstate_t prev_st;
  char buf [64];
  long local_40;
  
  lVar16 = pstr->len;
  uVar12 = pstr->valid_len;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pstr->bufs_len == lVar16 || pstr->bufs_len < lVar16) {
    lVar16 = pstr->bufs_len;
  }
  if (((pstr->map_notascii != '\0') || (pstr->trans != (uchar *)0x0)) ||
     (pstr->offsets_needed != '\0')) {
    uVar13 = pstr->valid_raw_len;
    goto LAB_00106850;
  }
  uVar19 = uVar12;
  if ((long)uVar12 < lVar16) {
    do {
      local_c0 = &pstr->cur_state;
      puVar17 = pstr->raw_mbs;
      lVar18 = pstr->raw_mbs_idx;
      bVar1 = puVar17[uVar19 + lVar18];
      local_b8 = (uint)bVar1;
      if ((((bVar1 & 0x80) == 0) && (iVar7 = mbsinit((mbstate_t *)local_c0), iVar7 != 0)) &&
         (wVar8 = towupper(local_b8), (wVar8 & 0xffffff80) == 0)) {
        pstr->mbs[uVar19] = (uchar)wVar8;
        pstr->wcs[uVar19] = wVar8;
        uVar12 = uVar19 + 1;
      }
      else {
        prev_st = pstr->cur_state;
        local_b0 = lVar16 - uVar19;
        sVar9 = rpl_mbrtowc(&wc,(char *)(puVar17 + lVar18 + uVar19),local_b0,local_c0);
        wVar4 = wc;
        if (sVar9 - 1 < 0xfffffffffffffffd) {
          wVar6 = towupper(wc);
          if (wVar4 == wVar6) {
            memcpy(pstr->mbs + uVar19,pstr->raw_mbs + pstr->raw_mbs_idx + uVar19,sVar9);
          }
          else {
            sVar10 = wcrtomb(buf,wVar6,(mbstate_t *)&prev_st);
            uVar20 = uVar19;
            if (sVar9 != sVar10) goto offsets_needed;
            memcpy(pstr->mbs + uVar19,buf,sVar9);
          }
          pwVar2 = pstr->wcs;
          pwVar2[uVar19] = wVar6;
          uVar13 = uVar19 + sVar9;
          uVar12 = uVar19 + 1;
          if ((long)(uVar19 + 1) < (long)uVar13) {
            pwVar11 = pwVar2 + uVar19 + 1;
            do {
              *pwVar11 = 0xffffffff;
              pwVar11 = pwVar11 + 1;
              uVar12 = uVar13;
            } while (pwVar2 + uVar13 != pwVar11);
          }
        }
        else if (sVar9 - 1 == 0xfffffffffffffffd) {
          if (pstr->bufs_len < pstr->len) {
            pstr->cur_state = prev_st;
            break;
          }
          pstr->mbs[uVar19] = bVar1;
          pstr->wcs[uVar19] = local_b8;
          uVar12 = uVar19 + 1;
        }
        else {
          pstr->mbs[uVar19] = bVar1;
          pstr->wcs[uVar19] = local_b8;
          uVar12 = uVar19 + 1;
          if (sVar9 == 0xffffffffffffffff) {
            pstr->cur_state = prev_st;
          }
        }
      }
      uVar19 = uVar12;
    } while ((long)uVar12 < lVar16);
  }
  pstr->valid_len = uVar19;
  rVar5 = _REG_NOERROR;
  pstr->valid_raw_len = uVar19;
LAB_0010685f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return rVar5;
offsets_needed:
  local_a8 = &wc;
  prev_st = pstr->cur_state;
  puVar17 = pstr->trans;
  if (puVar17 == (uchar *)0x0) {
    puVar17 = pstr->raw_mbs + pstr->raw_mbs_idx + uVar19;
  }
  else {
    iVar7 = pstr->mb_cur_max;
    if (0 < iVar7) {
      lVar18 = pstr->raw_mbs_idx;
      uVar12 = 0;
      puVar3 = pstr->raw_mbs;
      do {
        buf[uVar12] = puVar17[puVar3[uVar12 + lVar18 + uVar19]];
        if (iVar7 - 1 == uVar12) break;
        uVar12 = uVar12 + 1;
      } while (local_b0 != uVar12);
    }
    puVar17 = (uchar *)buf;
  }
  sVar9 = rpl_mbrtowc(local_a8,(char *)puVar17,local_b0,&pstr->cur_state);
  wVar4 = wc;
  uVar12 = sVar9 - 1;
  if (uVar12 < 0xfffffffffffffffd) {
    wVar6 = towupper(wc);
    if (wVar4 == wVar6) {
      memcpy(pstr->mbs + uVar20,puVar17,sVar9);
    }
    else {
      sVar10 = wcrtomb(buf,wVar6,(mbstate_t *)&prev_st);
      if (sVar9 == sVar10) {
        memcpy(pstr->mbs + uVar20,buf,sVar9);
      }
      else {
        if (sVar10 != 0xffffffffffffffff) {
          if ((ulong)pstr->bufs_len < sVar10 + uVar20) goto LAB_00106de8;
          if (pstr->offsets == (Idx *)0x0) {
            pIVar14 = (Idx *)malloc(pstr->bufs_len * 8);
            pstr->offsets = pIVar14;
            if (pIVar14 == (Idx *)0x0) {
              rVar5 = _REG_ESPACE;
              goto LAB_0010685f;
            }
          }
          if (pstr->offsets_needed == '\0') {
            if (uVar20 != 0) {
              pIVar14 = pstr->offsets;
              uVar13 = 0;
              do {
                pIVar14[uVar13] = uVar13;
                uVar13 = uVar13 + 1;
              } while (uVar13 != uVar20);
            }
            pstr->offsets_needed = '\x01';
          }
          memcpy(pstr->mbs + uVar20,buf,sVar10);
          pwVar2 = pstr->wcs;
          pIVar14 = pstr->offsets;
          pwVar2[uVar20] = wVar6;
          uVar13 = 1;
          pIVar14[uVar20] = uVar19;
          if (1 < sVar10) {
            do {
              uVar15 = uVar12;
              if (uVar13 < sVar9) {
                uVar15 = uVar13;
              }
              (pIVar14 + uVar20)[uVar13] = uVar15 + uVar19;
              (pwVar2 + uVar20)[uVar13] = L'\xffffffff';
              uVar13 = uVar13 + 1;
            } while (uVar13 != sVar10);
          }
          lVar16 = pstr->len + (sVar10 - sVar9);
          pstr->len = lVar16;
          if (pstr->raw_stop != uVar19 && (long)uVar19 <= pstr->raw_stop) {
            pstr->stop = pstr->stop + (sVar10 - sVar9);
          }
          if (pstr->bufs_len == lVar16 || pstr->bufs_len < lVar16) {
            lVar16 = pstr->bufs_len;
          }
          uVar13 = uVar19 + sVar9;
          uVar12 = sVar10 + uVar20;
          goto LAB_00106850;
        }
        memcpy(pstr->mbs + uVar20,puVar17,sVar9);
      }
    }
    uVar13 = sVar9 + uVar19;
    if (pstr->offsets_needed != '\0') {
      pIVar14 = pstr->offsets;
      lVar18 = uVar20 - uVar19;
      do {
        pIVar14[lVar18 + uVar19] = uVar19;
        uVar19 = uVar19 + 1;
      } while (uVar13 != uVar19);
    }
    pwVar2 = pstr->wcs;
    pwVar2[uVar20] = wVar6;
    uVar19 = sVar9 + uVar20;
    uVar12 = uVar20 + 1;
    if ((long)(uVar20 + 1) < (long)uVar19) {
      pwVar11 = pwVar2 + uVar20 + 1;
      do {
        *pwVar11 = 0xffffffff;
        pwVar11 = pwVar11 + 1;
        uVar12 = uVar19;
      } while (pwVar2 + uVar19 != pwVar11);
    }
  }
  else {
    if ((uVar12 == 0xfffffffffffffffd) && (pstr->bufs_len < pstr->len)) {
LAB_00106de8:
      pstr->cur_state = prev_st;
LAB_00106855:
      pstr->valid_len = uVar20;
      rVar5 = _REG_NOERROR;
      pstr->valid_raw_len = uVar19;
      goto LAB_0010685f;
    }
    bVar1 = pstr->raw_mbs[pstr->raw_mbs_idx + uVar19];
    if (pstr->trans != (uchar *)0x0) {
      bVar1 = pstr->trans[bVar1];
    }
    pstr->mbs[uVar20] = bVar1;
    if (pstr->offsets_needed != '\0') {
      pstr->offsets[uVar20] = uVar19;
    }
    uVar13 = uVar19 + 1;
    pstr->wcs[uVar20] = (uint)bVar1;
    uVar12 = uVar20 + 1;
    if (sVar9 == 0xffffffffffffffff) {
      pstr->cur_state = prev_st;
    }
  }
LAB_00106850:
  uVar19 = uVar13;
  uVar20 = uVar12;
  if (lVar16 <= (long)uVar12) goto LAB_00106855;
  local_b0 = lVar16 - uVar12;
  goto offsets_needed;
}

