
reg_errcode_t
parse_bracket_element
          (bracket_elem_t *elem,re_string_t *regexp,re_token_t *token,int token_len,
          reg_syntax_t syntax,_Bool accept_hyphen,re_dfa_t *dfa)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  wint_t *pwVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  reg_errcode_t rVar8;
  long lVar9;
  long lVar10;
  Idx idx;
  long lVar11;
  long in_FS_OFFSET;
  undefined auStack72 [24];
  long local_30;
  
  lVar10 = (long)token_len;
  lVar11 = regexp->cur_idx;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((regexp->mb_cur_max == 1) || (iVar6 = re_string_char_size_at(regexp,lVar11), iVar6 < 2)) {
    bVar5 = token->field_0x8;
    idx = lVar10 + lVar11;
    regexp->cur_idx = idx;
    if (((bVar5 & 0xfb) == 0x1a) || (bVar5 == 0x1c)) {
      lVar11 = regexp->stop;
      if (idx < lVar11) {
        bVar2 = *(byte *)&token->opr;
        lVar10 = 0;
        do {
          iVar6 = (int)lVar10;
          if ((bVar5 == 0x1e) && (regexp->mbs_allocated != '\0')) {
            if (regexp->offsets_needed == '\0') {
              lVar9 = idx + 1;
              regexp->cur_idx = lVar9;
              bVar5 = regexp->raw_mbs[regexp->raw_mbs_idx + idx];
            }
            else {
              if (((idx != regexp->valid_len) && (regexp->wcs[idx] == 0xffffffff)) ||
                 (bVar5 = regexp->raw_mbs[regexp->raw_mbs_idx + regexp->offsets[idx]],
                 (bVar5 & 0x80) != 0)) goto LAB_0011a805;
              lVar9 = 1;
              if (regexp->mb_cur_max != 1) {
                iVar7 = re_string_char_size_at(regexp,idx);
                lVar9 = (long)iVar7;
              }
              lVar9 = lVar9 + idx;
              regexp->cur_idx = lVar9;
            }
          }
          else {
LAB_0011a805:
            lVar9 = idx + 1;
            regexp->cur_idx = lVar9;
            bVar5 = regexp->mbs[idx];
          }
          if (lVar11 <= lVar9) break;
          if ((bVar2 == bVar5) && (regexp->mbs[lVar9] == ']')) {
            regexp->cur_idx = lVar9 + 1;
            *(undefined *)(elem->opr + (long)iVar6) = 0;
            cVar3 = token->field_0x8;
            if (cVar3 == '\x1c') {
              elem->type = EQUIV_CLASS;
              rVar8 = _REG_NOERROR;
            }
            else if (cVar3 == '\x1e') {
              elem->type = CHAR_CLASS;
              rVar8 = _REG_NOERROR;
            }
            else {
              rVar8 = _REG_NOERROR;
              if (cVar3 == '\x1a') {
                elem->type = COLL_SYM;
                rVar8 = _REG_NOERROR;
              }
            }
            goto LAB_0011a77a;
          }
          *(byte *)(elem->opr + lVar10) = bVar5;
          lVar10 = lVar10 + 1;
          if (lVar10 == 0x20) break;
          bVar5 = token->field_0x8;
          idx = regexp->cur_idx;
          lVar11 = regexp->stop;
        } while( true );
      }
      rVar8 = _REG_EBRACK;
    }
    else {
      if ((bVar5 == 0x16) && (accept_hyphen == false)) {
        peek_token_bracket((re_token_t *)auStack72,regexp,syntax);
        rVar8 = _REG_ERANGE;
        if (auStack72[8] != '\x15') goto LAB_0011a77a;
      }
      uVar1 = *(undefined *)&token->opr;
      elem->type = SB_CHAR;
      *(undefined *)&elem->opr = uVar1;
      rVar8 = _REG_NOERROR;
    }
  }
  else {
    pwVar4 = regexp->wcs;
    elem->type = MB_CHAR;
    *(wint_t *)&elem->opr = pwVar4[lVar11];
    regexp->cur_idx = iVar6 + lVar11;
    rVar8 = _REG_NOERROR;
  }
LAB_0011a77a:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return rVar8;
}

