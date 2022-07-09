
reg_errcode_t re_string_reconstruct(re_string_t *pstr,Idx idx,int eflags)

{
  wint_t *pwVar1;
  long lVar2;
  long lVar3;
  mbstate_t mVar4;
  Idx *pIVar5;
  long lVar6;
  byte *pbVar7;
  uint uVar8;
  reg_errcode_t rVar9;
  int iVar10;
  long lVar11;
  size_t sVar12;
  long lVar13;
  wint_t *pwVar14;
  byte *pbVar15;
  long lVar16;
  wint_t wVar17;
  long lVar18;
  ulong uVar19;
  uchar *puVar20;
  uchar uVar21;
  byte *n;
  size_t sVar22;
  size_t n_00;
  long lVar23;
  byte *pbVar24;
  long in_FS_OFFSET;
  wchar_t wc2;
  mbstate_t cur_state;
  uchar buf [6];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  lVar16 = idx - pstr->raw_mbs_idx;
  if (idx < pstr->raw_mbs_idx) {
    if (1 < pstr->mb_cur_max) {
      pstr->cur_state = (mbstate_t)0x0;
    }
    pstr->valid_len = 0;
    pstr->raw_mbs_idx = 0;
    pstr->len = pstr->raw_len;
    pstr->valid_raw_len = 0;
    pstr->stop = pstr->raw_stop;
    pstr->offsets_needed = '\0';
    pstr->tip_context = (-(uint)((eflags & 1U) == 0) & 2) + 4;
    lVar16 = idx;
    if (pstr->mbs_allocated != '\0') goto LAB_0010b85a;
    pstr->mbs = pstr->raw_mbs;
    if (idx == 0) goto LAB_0010b940;
LAB_0010b863:
    lVar18 = pstr->valid_raw_len;
    lVar3 = pstr->valid_len;
    if (lVar16 < lVar18) {
      if (pstr->offsets_needed == '\0') {
        sVar22 = lVar3 - lVar16;
        uVar8 = re_string_context_at(pstr,lVar16 + -1,eflags);
        pstr->tip_context = uVar8;
        if (1 < pstr->mb_cur_max) {
          memmove(pstr->wcs,pstr->wcs + lVar16,sVar22 * 4);
          sVar22 = pstr->valid_len - lVar16;
        }
        if (pstr->mbs_allocated != '\0') {
          memmove(pstr->mbs,pstr->mbs + lVar16,sVar22);
          sVar22 = pstr->valid_len - lVar16;
        }
        pstr->valid_raw_len = pstr->valid_raw_len - lVar16;
        pstr->valid_len = sVar22;
      }
      else {
        pIVar5 = pstr->offsets;
        lVar18 = 0;
        lVar11 = lVar3;
        do {
          lVar13 = (lVar18 + lVar11) / 2;
          lVar6 = pIVar5[lVar13];
          lVar23 = lVar13;
          if (lVar6 <= lVar16) {
            if (lVar16 <= lVar6) {
              lVar18 = lVar13 + -1;
              goto LAB_0010bbad;
            }
            lVar18 = lVar13 + 1;
            lVar23 = lVar11;
          }
          lVar11 = lVar23;
        } while (lVar18 < lVar23);
        lVar18 = lVar13;
        lVar23 = lVar13 + 1;
        if (lVar16 <= lVar6) {
          lVar18 = lVar13 + -1;
          lVar23 = lVar13;
        }
LAB_0010bbad:
        uVar8 = re_string_context_at(pstr,lVar18,eflags);
        pstr->tip_context = uVar8;
        if (((lVar16 != lVar23) || (lVar3 <= lVar16)) || (pIVar5[lVar23] != lVar16)) {
          pstr->offsets_needed = '\0';
          lVar11 = pstr->raw_len - idx;
          lVar18 = pstr->raw_stop - idx;
          pstr->len = lVar11 + lVar16;
          pstr->stop = lVar18 + lVar16;
          if (0 < lVar23) {
            do {
              if (pIVar5[lVar23 + -1] != lVar16) break;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
          if (lVar23 < lVar3) {
            do {
              if (pstr->wcs[lVar23] != 0xffffffff) goto LAB_0010bca4;
              lVar23 = lVar23 + 1;
            } while (lVar23 != lVar3);
LAB_0010be48:
            pstr->valid_len = 0;
            sVar22 = 0;
          }
          else {
            if (lVar23 == lVar3) goto LAB_0010be48;
LAB_0010bca4:
            sVar22 = pIVar5[lVar23] - lVar16;
            pstr->valid_len = sVar22;
            if (sVar22 != 0) {
              if (0 < (long)sVar22) {
                pwVar14 = pstr->wcs;
                pwVar1 = pwVar14 + sVar22;
                do {
                  *pwVar14 = 0xffffffff;
                  pwVar14 = pwVar14 + 1;
                } while (pwVar1 != pwVar14);
              }
              memset(pstr->mbs,0xff,sVar22);
              sVar22 = pstr->valid_len;
              lVar11 = pstr->len - lVar16;
              lVar18 = pstr->stop - lVar16;
            }
          }
          pstr->valid_raw_len = sVar22;
          iVar10 = pstr->mb_cur_max;
          uVar21 = pstr->mbs_allocated;
          goto LAB_0010b8d5;
        }
        memmove(pstr->wcs,pstr->wcs + lVar16,(lVar3 - lVar16) * 4);
        memmove(pstr->mbs,pstr->mbs + lVar16,pstr->valid_len - lVar16);
        pstr->valid_raw_len = pstr->valid_raw_len - lVar16;
        lVar18 = pstr->valid_len - lVar16;
        pstr->valid_len = lVar18;
        if (0 < lVar18) {
          pIVar5 = pstr->offsets;
          lVar18 = 0;
          do {
            pIVar5[lVar18] = pIVar5[lVar16 + lVar18] - lVar16;
            lVar18 = lVar18 + 1;
          } while (pstr->valid_len != lVar18 && lVar18 <= pstr->valid_len);
        }
      }
      iVar10 = pstr->mb_cur_max;
      uVar21 = pstr->mbs_allocated;
      lVar11 = pstr->len - lVar16;
      lVar18 = pstr->stop - lVar16;
LAB_0010b8d5:
      if (uVar21 == '\0') {
LAB_0010b8d9:
        pstr->mbs = pstr->mbs + lVar16;
      }
      goto LAB_0010b8dd;
    }
    if (pstr->offsets_needed != '\0') {
      pstr->offsets_needed = '\0';
      pstr->len = (pstr->raw_len + lVar16) - idx;
      pstr->stop = (pstr->raw_stop + lVar16) - idx;
    }
    iVar10 = pstr->mb_cur_max;
    lVar11 = pstr->raw_mbs_idx;
    pstr->valid_len = 0;
    if (1 < iVar10) {
      if (pstr->is_utf8 != '\0') {
        pbVar7 = pstr->raw_mbs;
        pbVar24 = pbVar7 + lVar16 + lVar11 + -1;
        pbVar15 = pbVar7;
        if (pbVar7 < pbVar7 + (lVar16 - iVar10) + lVar11) {
          pbVar15 = pbVar7 + (lVar16 - iVar10) + lVar11;
        }
        if (pbVar15 <= pbVar24) {
LAB_0010bd3d:
          if ((*pbVar24 & 0xc0) == 0x80) goto LAB_0010bd30;
          puVar20 = pstr->trans;
          n = pbVar7 + ((pstr->len + lVar11) - (long)pbVar24);
          pbVar15 = pbVar24;
          if (puVar20 != (uchar *)0x0) {
            iVar10 = 6;
            pbVar15 = buf;
            if ((long)n < 7) {
              iVar10 = (int)n;
            }
            iVar10 = iVar10 + -1;
            lVar18 = (long)iVar10;
            while (-1 < iVar10) {
              pbVar15[lVar18] = puVar20[pbVar24[lVar18]];
              lVar18 = lVar18 + -1;
              iVar10 = (int)lVar18;
            }
          }
          cur_state = (mbstate_t)0x0;
          pbVar15 = (byte *)rpl_mbrtowc(&wc2,(char *)pbVar15,(size_t)n,&cur_state);
          if ((pbVar15 < pbVar7 + ((lVar16 + lVar11) - (long)pbVar24)) ||
             ((byte *)0xfffffffffffffffd < pbVar15)) {
LAB_0010bd9b:
            lVar11 = pstr->raw_mbs_idx;
            lVar18 = pstr->valid_raw_len;
            goto LAB_0010ba61;
          }
          sVar22 = (long)pbVar15 - (long)(pbVar7 + ((lVar16 + lVar11) - (long)pbVar24));
          pstr->cur_state = (mbstate_t)0x0;
          pstr->valid_len = sVar22;
          if (wc2 == -1) goto LAB_0010bd9b;
          goto LAB_0010bae2;
        }
      }
LAB_0010ba61:
      lVar11 = lVar11 + lVar18;
      if (lVar11 < idx) {
        do {
          mVar4 = pstr->cur_state;
          n_00 = pstr->raw_len - lVar11;
          sVar12 = rpl_mbrtowc(&wc2,(char *)(pstr->raw_mbs + lVar11),n_00,&pstr->cur_state);
          wVar17 = wc2;
          if (0xfffffffffffffffc < sVar12 - 1) {
            if ((sVar12 == 0) || (n_00 == 0)) {
              wVar17 = 0;
            }
            else {
              wVar17 = (wint_t)pstr->raw_mbs[lVar11];
            }
            pstr->cur_state = mVar4;
            sVar12 = 1;
          }
          lVar11 = lVar11 + sVar12;
        } while (lVar11 < idx);
        sVar22 = lVar11 - idx;
        pstr->valid_len = sVar22;
        wc2 = wVar17;
        if (wVar17 == 0xffffffff) goto LAB_0010be61;
LAB_0010bae2:
        if ((pstr->word_ops_used == '\0') ||
           ((iVar10 = iswalnum(wc2), wc2 != 0x5f && (iVar10 == 0)))) {
          uVar8 = 0;
          if (wc2 == 10) {
            uVar8 = (uint)(pstr->newline_anchor != '\0') * 2;
          }
        }
        else {
          uVar8 = 1;
        }
        pstr->tip_context = uVar8;
      }
      else {
        sVar22 = lVar11 - idx;
        pstr->valid_len = sVar22;
LAB_0010be61:
        uVar8 = re_string_context_at(pstr,lVar3 + -1,eflags);
        pstr->tip_context = uVar8;
      }
      if (sVar22 == 0) {
LAB_0010bb10:
        uVar21 = pstr->mbs_allocated;
      }
      else {
        if (0 < (long)sVar22) {
          pwVar14 = pstr->wcs;
          pwVar1 = pwVar14 + sVar22;
          do {
            *pwVar14 = 0xffffffff;
            pwVar14 = pwVar14 + 1;
          } while (pwVar1 != pwVar14);
        }
        uVar21 = pstr->mbs_allocated;
        if (uVar21 != '\0') {
          memset(pstr->mbs,0xff,sVar22);
          sVar22 = pstr->valid_len;
          goto LAB_0010bb10;
        }
      }
      pstr->valid_raw_len = sVar22;
      iVar10 = pstr->mb_cur_max;
      lVar11 = pstr->len - lVar16;
      lVar18 = pstr->stop - lVar16;
      goto LAB_0010b8d5;
    }
    uVar19 = (ulong)pstr->raw_mbs[lVar11 + -1 + lVar16];
    pstr->valid_raw_len = 0;
    if (pstr->trans != (uchar *)0x0) {
      uVar19 = (ulong)pstr->trans[uVar19];
    }
    uVar8 = 1;
    if (((pstr->word_char[(long)uVar19 >> 6] >> ((byte)uVar19 & 0x3f) & 1) == 0) &&
       (uVar8 = 0, (byte)uVar19 == 10)) {
      uVar8 = (uint)(pstr->newline_anchor != '\0') * 2;
    }
    pstr->tip_context = uVar8;
    lVar11 = pstr->len - lVar16;
    lVar18 = pstr->stop - lVar16;
    if (pstr->mbs_allocated == '\0') goto LAB_0010b8d9;
    pstr->raw_mbs_idx = idx;
    pstr->len = lVar11;
    pstr->stop = lVar18;
LAB_0010ba18:
    if (pstr->mbs_allocated == '\0') {
      pstr->valid_len = lVar11;
    }
    else if (pstr->icase == '\0') {
      puVar20 = pstr->trans;
      if (puVar20 != (uchar *)0x0) {
        lVar16 = pstr->valid_len;
        if (pstr->bufs_len == lVar11 || pstr->bufs_len < lVar11) {
          lVar11 = pstr->bufs_len;
        }
        lVar18 = lVar16;
        if (lVar16 < lVar11) {
          while( true ) {
            pstr->mbs[lVar18] = puVar20[pstr->raw_mbs[idx + lVar18]];
            lVar18 = lVar18 + 1;
            lVar16 = lVar11;
            if (lVar11 == lVar18) break;
            idx = pstr->raw_mbs_idx;
            puVar20 = pstr->trans;
          }
        }
        pstr->valid_len = lVar16;
        pstr->valid_raw_len = lVar16;
      }
    }
    else {
      build_upper_buffer(pstr);
    }
  }
  else {
LAB_0010b85a:
    if (lVar16 != 0) goto LAB_0010b863;
LAB_0010b940:
    iVar10 = pstr->mb_cur_max;
    lVar11 = pstr->len;
    lVar18 = pstr->stop;
LAB_0010b8dd:
    pstr->raw_mbs_idx = idx;
    pstr->len = lVar11;
    pstr->stop = lVar18;
    if (iVar10 < 2) goto LAB_0010ba18;
    if (pstr->icase == '\0') {
      build_wcs_buffer(pstr);
    }
    else {
      rVar9 = build_wcs_upper_buffer(pstr);
      if (rVar9 != _REG_NOERROR) goto LAB_0010b90d;
    }
  }
  pstr->cur_idx = 0;
  rVar9 = _REG_NOERROR;
LAB_0010b90d:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return rVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010bd30:
  pbVar24 = pbVar24 + -1;
  if (pbVar24 < pbVar15) goto LAB_0010ba61;
  goto LAB_0010bd3d;
}

