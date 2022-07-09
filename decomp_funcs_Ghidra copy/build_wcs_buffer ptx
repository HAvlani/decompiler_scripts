
void build_wcs_buffer(re_string_t *pstr)

{
  byte bVar1;
  uchar uVar2;
  mbstate_t mVar3;
  wint_t *pwVar4;
  size_t sVar5;
  wint_t *pwVar6;
  uchar *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uchar *s;
  long lVar12;
  long in_FS_OFFSET;
  wchar_t wc;
  uchar buf [64];
  long local_40;
  
  lVar12 = pstr->len;
  lVar11 = pstr->valid_len;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pstr->bufs_len == lVar12 || pstr->bufs_len < lVar12) {
    lVar12 = pstr->bufs_len;
  }
  if (lVar11 < lVar12) {
    lVar9 = lVar11;
LAB_0010ad78:
    do {
      puVar7 = pstr->trans;
      mVar3 = pstr->cur_state;
      if (puVar7 == (uchar *)0x0) {
        s = pstr->raw_mbs + pstr->raw_mbs_idx + lVar9;
      }
      else {
        s = buf;
        if (0 < pstr->mb_cur_max) {
          sVar5 = 0;
          s = buf;
          while( true ) {
            uVar2 = puVar7[pstr->raw_mbs[pstr->raw_mbs_idx + sVar5 + lVar9]];
            pstr->mbs[sVar5 + lVar9] = uVar2;
            s[sVar5] = uVar2;
            iVar8 = (int)sVar5 + 1;
            if ((pstr->mb_cur_max == iVar8 || pstr->mb_cur_max < iVar8) ||
               (sVar5 = sVar5 + 1, lVar12 - lVar9 == sVar5)) break;
            puVar7 = pstr->trans;
          }
        }
      }
      sVar5 = rpl_mbrtowc(&wc,(char *)s,lVar12 - lVar9,&pstr->cur_state);
      if (sVar5 - 1 < 0xfffffffffffffffe) {
        if (sVar5 == 0xfffffffffffffffe) {
          if (pstr->len <= pstr->bufs_len) goto LAB_0010ae38;
          pstr->cur_state = mVar3;
          lVar11 = lVar9;
          break;
        }
      }
      else {
LAB_0010ae38:
        bVar1 = pstr->raw_mbs[pstr->raw_mbs_idx + lVar9];
        if (pstr->trans != (uchar *)0x0) {
          bVar1 = pstr->trans[bVar1];
        }
        wc = (wchar_t)bVar1;
        pstr->cur_state = mVar3;
        sVar5 = 1;
      }
      pwVar4 = pstr->wcs;
      lVar11 = lVar9 + 1;
      pwVar4[lVar9] = wc;
      lVar10 = lVar9 + sVar5;
      if (lVar10 <= lVar11) {
        lVar9 = lVar11;
        if (lVar12 <= lVar11) break;
        goto LAB_0010ad78;
      }
      pwVar6 = pwVar4 + lVar9 + 1;
      do {
        *pwVar6 = 0xffffffff;
        pwVar6 = pwVar6 + 1;
      } while (pwVar4 + lVar10 != pwVar6);
      lVar9 = lVar10;
      lVar11 = lVar10;
    } while (lVar10 < lVar12);
  }
  pstr->valid_len = lVar11;
  pstr->valid_raw_len = lVar11;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

